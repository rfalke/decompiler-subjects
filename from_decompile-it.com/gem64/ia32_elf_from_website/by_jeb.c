
void __i686.get_pc_thunk.bx() {
}

int atexit(FUNCPTR __func) {
    int result;
    →__cxa_atexit();
    return result;
}

char* basename(char* __filename) {
    char* result;
    int v0;
    →strdup((int)__filename);
    int v1 = v0;
    →strtok(v0, &gvar_8054A00);
    int v2 = v0;
    if(!v2) {
        if(v0) {
            →free(v0);
        }
        result = NULL;
    }
    else {
        →strdup(v2);
        int v3 = v0;
        while(v2) {
            →strtok(0, &gvar_8054A00);
            v2 = v0;
            if(v3 && v2) {
                →free(v3);
            }
            if(v2 && *(char*)v2) {
                →strdup(v2);
                v3 = v0;
            }
        }
        if(v0) {
            →free(v0);
        }
        result = (char*)v3;
    }
    return result;
}

int bin_install(char* param0, char* param1, int* param2, int param3, unsigned int param4, unsigned int param5, unsigned int param6, int param7) {
    char v0;
    char v1;
    char v2;
    char v3;
    int result;
    char v4;
    char* __filename = param0;
    char* __file = param1;
    int* ptr0 = param2;
    int v5 = param3;
    int v6 = param7;
    int v7 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v8 = stat(__file, &v4);
    if(v8 < 0) {
        →__errno_location();
        →strerror(*(int*)result);
        /*NO_RETURN*/ print_error(-5, "installation directory invalid: %s\n");
    }
    →sprintf(&GINSTALL_DST, "GINSTALL_DST=%s");
    →putenv(&GINSTALL_DST);
    →sprintf(&v0, "%s/include");
    →sprintf(&GINSTALL_INC, "GINSTALL_INC=%s");
    →putenv(&GINSTALL_INC);
    →sprintf(&v0, "%s/lib");
    →sprintf(&GINSTALL_LIB, "GINSTALL_LIB=%s");
    →putenv(&GINSTALL_LIB);
    char* ptr1 = __file;
    →sprintf(&GEM_GRASS_DIR, "GEM_GRASS_DIR=%s");
    →putenv(&GEM_GRASS_DIR);
    →strdup(v6);
    int v9 = result;
    →strtok(result, &gvar_8055EDB);
    int v10 = result;
    →strtok(0, &gvar_8055EDB);
    int v11 = result;
    →strtok(0, &gvar_8055EDB);
    int v12 = result;
    →strtol(result, 0, 10);
    int v13 = result;
    →strtol(result, 0, 10);
    int v14 = result;
    →strtol(result, 0, 10);
    int v15 = result;
    →free(result);
    /*BAD_CALL!*/ atexit((void __cdecl (*_)())&exit_tmp);
    char* ptr2 = basename(__filename);
    int v16 = (int)ptr0;
    ptr1 = ptr2;
    →sprintf(&v1, "%s/%s");
    →chdir(&v1);
    v8 = result;
    if(result < 0) {
        →__errno_location();
        →strerror(*(int*)result);
        /*NO_RETURN*/ print_error(-2, "extension file binaries in \'%s\' not accessible: %s\n");
    }
    →sprintf(&GEM_EXT_NAME, "GEM_EXT_NAME=%s");
    →putenv(&GEM_EXT_NAME);
    char* ptr3 = (char*)param6;
    v16 = (int)param5;
    →sprintf(&v0, "%i.%i.%i");
    →sprintf(&GEM_EXT_VERSION, "GEM_EXT_VERSION=%s");
    →putenv(&GEM_EXT_VERSION);
    dump_html("../description", &TMP_DESCR);
    dump_html("../info", &TMP_INFO);
    dump_html("../depends", &TMP_DEPS);
    dump_html("../bugs", &TMP_BUGS);
    dump_html("../authors", &TMP_AUTHORS);
    →sprintf(&GEM_EXT_DESCR, "GEM_EXT_DESCR=%s");
    →putenv(&GEM_EXT_DESCR);
    →sprintf(&GEM_EXT_INFO, "GEM_EXT_INFO=%s");
    →putenv(&GEM_EXT_INFO);
    →sprintf(&GEM_EXT_DEPS, "GEM_EXT_DEPS=%s");
    →putenv(&GEM_EXT_DEPS);
    →sprintf(&GEM_EXT_BUGS, "GEM_EXT_BUGS=%s");
    →putenv(&GEM_EXT_BUGS);
    →sprintf(&GEM_EXT_AUTHORS, "GEM_EXT_AUTHORS=%s");
    →putenv(&GEM_EXT_AUTHORS);
    atexit((void __cdecl (*_)())&exit_tmp);
    check_dependencies((int)__filename, (int)__file, v6);
    →fwrite("Installing...", 1, 13, stdout);
    →fopen("../uninstall", &gvar_8055E6B);
    int v17 = result;
    if(!result) {
        →__errno_location();
        →strerror(*(int*)result);
        print_warning("error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system");
    }
    else {
        if(VERBOSE) {
            →sprintf(&v0, "cp -vf ../uninstall %s/etc/uninstall.%s ;");
        }
        else {
            →sprintf(&v0, "cp -f ../uninstall %s/etc/uninstall.%s &> %s ;");
        }
        →strcpy(&UNINSTALL_CMD, &v0);
        →fclose(result);
    }
    register_extension((int)__file, ptr0, v5, param4, param5, param6);
    check_dependencies((int)__filename, (int)__file, v6);
    if(v13 == 6 && v14 <= 0) {
        register_entries_gisman(v5, (int)__file);
    }
    register_entries_gisman2(v5, (int)__file);
    register_html(v5, (int)__file, (int)param4, (int)param5, (int)param6);
    if(VERBOSE) {
        →fprintf(stdout, "Running \'%s install\':\n");
        →sprintf(&v2, "bin/%s -f Makefile install ; \t\t\t\t\tcp -vf %s %s/etc/extensions.db ; chmod -v a+r %s/etc/extensions.db ;");
    }
    else {
        →sprintf(&v2, "bin/%s -f Makefile -s install &> %s ; \t\t\t\t\tcp -f %s %s/etc/extensions.db &> %s ; chmod a+r %s/etc/extensions.db &> %s ;");
    }
    if(VERBOSE) {
        →memcpy(&v3, "sh ../post", 11);
    }
    else {
        →sprintf(&v3, "sh ../post &> %s");
    }
    →sprintf(&v0, "%s %s %s %s %s %s");
    su((int)__file, &v0);
    print_done();
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v7;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int binaries_exist(int param0, int param1) {
    char v0;
    char v1;
    int v2;
    int result;
    int v3 = param1;
    int v4 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →opendir(param0);
    int v5 = result;
    if(v5) {
        →readdir(v5);
        for(int i = result; i; i = result) {
            →strcmp(i + 11, &gvar_8054BBE);
            if(result) {
                →strcmp(i + 11, &gvar_8054BC0);
                if(result) {
                    →strcmp(i + 11, &gvar_8054BC3);
                    if(result) {
                        →sprintf(&v0, "%s/%s");
                        stat((char*)&v0, &v1);
                        if((unsigned int)(v2 & 0xf000) == 0x4000) {
                            →strcmp(i + 11, param1);
                            if(!result) {
                                result = 1;
                                goto loc_804AA9F;
                            }
                        }
                    }
                }
            }
            →readdir(v5);
        }
    }
    result = 0;
loc_804AA9F:
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v4)) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int check_dependencies(int param0, int param1, int param2) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    int result;
    int v5;
    int v6 = v5;
    int v7 = param0;
    int v8 = param1;
    int v9 = param2;
    int v10 = *(int*)(__GS_BASE + (int)(int*)0x14);
    if(!FORCE) {
        →fopen("../depends", &gvar_8054D13);
        int v11 = result;
        if(!v11) {
            →__errno_location();
            if(*(unsigned int*)result == 2) {
                →fprintf(stderr, "\n%s/depends ENOENT\n");
                goto loc_804BE6A;
            }
            else {
                →fclose(0);
                →__errno_location();
                →strerror(*(int*)result);
                unsigned int v12 = (unsigned int)result;
                /*NO_RETURN*/ print_error(-17, "checking for file \'%s\': %s\n");
            }
        }
        else {
            unsigned int v13 = 1;
            int v14 = v8;
            →sprintf(&v0, "%s/etc/extensions.db");
            →fopen(&v0, &gvar_8054D13);
            int v15 = result;
            if(!v15) {
                →__errno_location();
                if(*(unsigned int*)result != 2) {
                    →fclose(0);
                    →__errno_location();
                    →strerror(*(int*)result);
                    /*NO_RETURN*/ print_error(-17, "checking for file \'%s\': %s\n");
                }
                v13 = 0;
            }
        loc_804BE32:
            do {
                int v16 = nc_fgets_nb(&v1, 0x800, v11);
                if(!v16) {
                    if(v13) {
                        →fclose(v15);
                    }
                    →fclose(v11);
                    goto loc_804BE6A;
                }
                else {
                    →__isoc99_sscanf();
                    if(result > 0) {
                        →strcmp(&v3, "GRASS");
                        →__isoc99_sscanf();
                        int v17 = vercmp(0, 0, 0, 0, 0, 0);
                        if(v17 < 0) {
                            /*NO_RETURN*/ print_error(-18, "installed version (%s) of GRASS is too low. Required version is %i.%i.%i\n");
                        }
                    }
                    goto loc_804BE32;
                }
            }
            while(!v13);
            unsigned int v18 = 0;
            →rewind(v15);
            for(int i = nc_fgets_nb(&v2, 0x800, v15); i; i = nc_fgets_nb(&v2, 0x800, v15)) {
                →__isoc99_sscanf();
                if(result > 0) {
                    →strcmp(&v4, &v3);
                    if(!result) {
                        int v19 = vercmp(0, 0, 0, 0, 0, 0);
                        if(v19 < 0) {
                            /*NO_RETURN*/ print_error(-18, "installed version %i.%i.%i of required extension \'%s\' is too low.\n \t\t\t\t\t\t\t\t\t\t\t\t\tRequired version is %i.%i.%i\n");
                        }
                        v18 = 1;
                    }
                }
            }
            if(!v18) {
                /*NO_RETURN*/ print_error(-18, "required extension \'%s\' not found in \'%s\'.\n");
            }
            goto loc_804BE32;
        }
    }
    else {
    loc_804BE6A:
        result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v10;
        if(result) {
            /*NO_RETURN*/ →__stack_chk_fail();
        }
        return result;
    }
}

unsigned int check_ext_menu(int param0) {
    unsigned int result1;
    unsigned int result = find_pos("\"&Xtns\" all options 1", param0, 0);
    if(result == -1) {
        result = find_pos("\"&Help\" all options", param0, 0);
        if(result == -1) {
            result = find_pos(&gvar_8055212, param0, 0);
            if(result == -1) {
                /*NO_RETURN*/ print_error(-21, "could not parse \'menu.tcl\'.\n");
            }
            insert_str(" \"&Xtns\" all options 1 {\n", result, param0);
            ++result;
            insert_str(&gvar_805524C, result, param0);
            result1 = result;
        }
        else {
            insert_str(" \"&Xtns\" all options 1 {\n", result, param0);
            ++result;
            insert_str(&gvar_805524C, result, param0);
            return result;
        }
    }
    else {
        result1 = result;
    }
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int check_extension(int param0, int param1, int param2, int param3, int* param4) {
    char v0;
    int result;
    int v1;
    int v2 = v1;
    int v3 = param0;
    int v4 = param1;
    int v5 = param2;
    int v6 = param3;
    int* ptr0 = param4;
    int v7 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v8 = 0;
    int* ptr1 = &v0;
    int v9 = 0x1ff;
    do {
        *ptr1 = 0;
        ++ptr1;
        --v9;
    }
    while(v9 == 0);
    →fwrite("Checking extension ...", 1, 22, stdout);
    →strcpy(&v8, v3);
    →chdir(&v8);
    int v10 = result;
    if(result < 0) {
        →__errno_location();
        →strerror(*(int*)result);
        /*NO_RETURN*/ print_error(-2, "extension \'%s\' not accessible: %s\n");
    }
    →fopen(&gvar_8055E6D, &gvar_8055E6B);
    if(!result) {
        /*NO_RETURN*/ print_error(-6, "\'id\' file not readable.\n");
    }
    →__isoc99_fscanf();
    →strcmp("<GRASS extension package>", &v8);
    if(result) {
        →fclose(result);
        /*NO_RETURN*/ print_error(-6, "unknown file identifier.\n");
    }
    →fclose(result);
    get_package_name(&gvar_8055EDB, v4);
    →fopen("version", &gvar_8055E6B);
    int v11 = result;
    if(!v11) {
        /*NO_RETURN*/ print_error(-6, "\'version\' file not readable.\n");
    }
    nc_fgets_nb(&v8, 0x800, v11);
    *(int*)v6 = 0;
    *ptr0 = 0;
    →__isoc99_sscanf();
    if(result <= 0) {
        →fclose(v11);
        /*NO_RETURN*/ print_error(-6, "invalid or missing version information.\n");
    }
    print_done();
    →chdir(&gvar_8055F35);
    →fclose(v11);
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v7;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int check_filetype(int param0) {
    int result;
    int v0;
    →strstr(param0, ".tar.gz");
    if(v0) {
        result = 1;
    }
    else {
        →strstr(param0, ".tgz");
        if(v0) {
            result = 1;
        }
        else {
            →strstr(param0, ".tar.bz2");
            if(v0) {
                result = 2;
            }
            else {
                →strstr(param0, ".tbz");
                if(v0) {
                    result = 2;
                }
                else {
                    →strstr(param0, ".zip");
                    if(v0) {
                        result = 3;
                    }
                    else {
                        →strstr(param0, ".tar");
                        result = v0 ? 4: 0;
                    }
                }
            }
        }
    }
    return result;
}

int chop(int param0) {
    unsigned int v0;
    int result = 0;
    →strlen(param0);
    unsigned int v1 = v0 - 1;
    while(v1 < 0x80000000) {
        unsigned int v2 = 1;
        if(*(unsigned char*)(v1 + param0) != 10 && *(unsigned char*)(v1 + param0) != 9 && *(unsigned char*)(v1 + param0) != 32 && *(unsigned char*)(v1 + param0) != 12 && *(unsigned char*)(v1 + param0) != 13) {
            break;
        }
        else {
            ++result;
            --v1;
        }
    }
    →strlen(param0);
    *(char*)(v0 - result + param0) = 0;
    return result;
}

int delete_ext_html(int param0, int param1, int param2) {
    char v0;
    int v1 = param2;
    int v2 = *(int*)(__GS_BASE + (int)(int*)0x14);
    unsigned int v3 = find_pos("<b>Drivers sections:</b>", param2, 0);
    if(v3 >= 0x80000000) {
        v3 = find_pos("<!-- GEM Extensions StartHTML. Do not delete or change this comment! -->", param2, 0);
        if(v3 < 0x80000000) {
            goto loc_804E624;
        }
        else {
            print_warning("Unknown format of index.html. Unable to de-register HTML man pages.\n");
        }
    }
    else {
    loc_804E624:
        unsigned int v4 = find_pos("<hr>", param2, v3);
        unsigned int v5 = find_pos("<h3>Installed extensions:</h3>", param2, v3);
        if(v5 == -1) {
            print_warning("no extensions section found in index.html.\n");
        }
        else {
            unsigned int v6 = find_pos("<h3>Installed extensions:</h3>", param2, v3);
            unsigned int v7 = find_pos("</ul>", param2, v6);
            →sprintf(&v0, "\">%s");
            unsigned int v8 = find_pos(&v0, param2, v6);
            if(v8 == -1) {
                print_warning("extension \'%s\' not listed in index.html.\n");
            }
            else {
                if((int)v7 > (int)v8) {
                    delete_str(v8, param2);
                }
                --v7;
                v8 = find_pos("<ul>", param2, v6);
                if(v8 != -1 && (int)v7 > (int)v8 && (int)(v7 - v8) <= 1) {
                    unsigned int v9 = 0;
                    do {
                        delete_str(v8 - 1, param2);
                        ++v9;
                    }
                    while((int)v9 <= 3);
                }
            }
        }
    }
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v2;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

unsigned int delete_str(unsigned int param0, int param1) {
    int v0;
    int v1;
    int v2 = v1;
    unsigned int i;
    for(i = 0; *(int*)(i * 4 + param1); ++i) {
    }
    if(param0 >= 0x80000000 || (int)i < (int)param0) {
        unsigned int v3 = param0;
        /*NO_RETURN*/ print_error(-21, "delete: invalid line number %i.\n");
    }
    for(i = param0; *(int*)(i * 4 + param1); ++i) {
        →free(*(int*)(i * 4 + param1));
        if(*(int*)((i + 1) * 4 + param1)) {
            int* ptr0 = (int*)(i * 4 + param1);
            →strlen(*(int*)((i + 1) * 4 + param1));
            →malloc(v0 + 1);
            *ptr0 = v0;
            →strcpy(*(int*)(i * 4 + param1), *(int*)((i + 1) * 4 + param1));
        }
    }
    --i;
    *(int*)(i * 4 + param1) = 0;
    return i;
}

// Stale decompilation - Refresh this view to re-decompile this code
int depstr(int param0, int param1) {
    char v0;
    char v1;
    char v2;
    int result;
    int v3 = param0;
    int v4 = param1;
    int v5 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →memcpy(&v0, "../depends", 11);
    →fopen(&v0, &gvar_8054D13);
    int v6 = result;
    if(!v6) {
        →__errno_location();
        if(*(unsigned int*)result == 2) {
            result = &gvar_8054D15;
        }
        else {
            →__errno_location();
            →strerror(*(int*)result);
            /*NO_RETURN*/ print_error(-17, "checking for file \'%s\': %s\n");
        }
    }
    else {
        unsigned int v7 = 1;
        →malloc(0x800);
        int v8 = result;
    loc_804AFE0:
        for(int i = nc_fgets_nb((int)&v1, 0x800, v6); i; i = nc_fgets_nb((int)&v1, 0x800, v6)) {
            if(v1) {
                →__isoc99_sscanf();
                if(result > 0) {
                    →strcmp("GRASS", &v2);
                    if(result) {
                        if(v7) {
                            →strcat(v8, &gvar_8054D3B);
                            →strcat(v8, &v2);
                            v7 = 0;
                            goto loc_804AFE0;
                        }
                        else {
                            →strcat(v8, &gvar_8054D3D);
                            →strcat(v8, &v2);
                        }
                    }
                }
            }
        }
        →fclose(v6);
        result = v8;
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v5)) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int deregister_entries_gisman(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    char v4;
    char v5;
    char v6;
    int result;
    int v7;
    int v8 = v7;
    int v9 = param0;
    int v10 = param1;
    int v11 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v12 = v10;
    →sprintf(&v4, "%s/etc/dm/menu.tcl");
    →fopen(&v4, &gvar_80553F1);
    int v13 = result;
    if(!v13) {
        →__errno_location();
        if(*(unsigned int*)result == 2) {
            result = 0;
        }
        else {
            →fclose(0);
            →__errno_location();
            →strerror(*(int*)result);
            v3 = result;
            v12 = &v4;
            /*NO_RETURN*/ print_error(-22, "checking for file \'%s\': %s\n");
        }
    }
    else {
        →memcpy(&TMP_GISMAN, "/tmp/grass.extensions.db.XXXXXX", 32);
        →mkstemp(&TMP_GISMAN);
        →fopen(&TMP_GISMAN, &gvar_8055444);
        int v14 = result;
        if(!v14) {
            →__errno_location();
            →strerror(*(int*)result);
            /*NO_RETURN*/ print_error(-21, "could not create temp file \'%s\': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        atexit((void __cdecl (*_)())&exit_db);
        if(VERBOSE) {
            v2 = v10;
            v1 = v10;
            v0 = &TMP_GISMAN;
            v3 = v10;
            v12 = v10;
            →sprintf(&v6, "cp -vf %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak ; \t\t\t\t\t\tcp -vf %s %s/etc/dm/menu.tcl ; chmod -v a+r %s/etc/dm/menu.tcl ;");
        }
        else {
            int v15 = &TMP_NULL;
            int v16 = v10;
            int v17 = &TMP_NULL;
            v2 = v10;
            v1 = &TMP_GISMAN;
            v0 = &TMP_NULL;
            v3 = v10;
            v12 = v10;
            →sprintf(&v6, "cp -f %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak &> %s ; \t\t\t\t\t\tcp -f %s %s/etc/dm/menu.tcl &> %s ; chmod a+r %s/etc/dm/menu.tcl &> %s ;");
        }
        →strcpy(&GISMAN_CMD, &v6);
        unsigned int v18 = 0;
        while(1) {
            →fgets(&v6, 0x800, v13);
            if(!result) {
                break;
            }
            else {
                ++v18;
            }
        }
        if(!v18) {
            result = -1;
        }
        else {
            →rewind(v13);
            unsigned int v19 = v18;
            →calloc((int)(v18 + 1), 4);
            int v20 = result;
            unsigned int i;
            for(i = 0; (int)(v18 + 1) > (int)i; ++i) {
                *(int*)(i * 4 + v20) = 0;
            }
            i = 0;
            while(1) {
                →fgets(&v6, 0x800, v13);
                if(!result) {
                    break;
                }
                else {
                    →strlen(&v6);
                    →malloc(result + 1);
                    *(int*)(i * 4 + v20) = result;
                    →strcpy(*(int*)(i * 4 + v20), &v6);
                    ++i;
                }
            }
            v12 = v9;
            /*BAD_CALL!*/ →sprintf(&v6, "#(DO_NOT_REMOVE_THIS_COMMENT) <%s> {cascad");
            unsigned int v21 = find_pos(&v6, v20, 0);
            if(v21 == -1) {
                print_warning("could not find uninstall information in \'menu.tcl\'.\n");
                result = -1;
            }
            else {
                →strchr(*(int*)(v21 * 4 + v20), 34);
                int v22 = result + 1;
                →strchr(v22, 34);
                int v23 = result;
                →strcpy(&v5, v22);
                *(char*)((int)(int*)(v23 - v22) + &v5) = 0;
                unsigned int v24 = find_pos("\"&Xtns\" all options 1", v20, 0);
                unsigned int v25 = find_pos("\" all options", v20, v24 + 1);
                unsigned int v26 = v25 - 1;
                if(v26 == -1) {
                    v26 = find_pos(&gvar_8055212, v20, 0);
                }
                if(v24 == -1) {
                    print_warning("menu \'Xtns\' does not exist.\n");
                    result = -1;
                }
                else {
                    →sprintf(&v6, "{cascad \"%s\"");
                    unsigned int v27 = find_pos(&v6, v20, v24);
                    if(v27 == -1 || (int)v27 > (int)v26) {
                        print_warning("could not find submenu entry \'%s\' in \'menu.tcl\'.\n");
                        result = -1;
                    }
                    else {
                        unsigned int v28 = find_pos(" \t\t\t}}", v20, v27);
                        if(v28 == -1 || (int)v28 > (int)v26) {
                            print_warning("could not find end of submenu entry \'%s\' in \'menu.tcl\'.\n");
                            result = -1;
                        }
                        else {
                            int v29 = 0;
                            for(i = 0; (int)(v28 - v27 + 1) > (int)i; ++i) {
                                delete_str(v27, v20);
                                ++v29;
                            }
                            v12 = v9;
                            →sprintf(&v6, "#(DO_NOT_REMOVE_THIS_COMMENT) <%s> {cascad");
                            v21 = find_pos(&v6, v20, 0);
                            delete_str(v21, v20);
                            ++v29;
                            v24 = find_pos("\"&Xtns\" all options 1", v20, 0);
                            unsigned int v30 = find_pos("\" all options", v20, v24 + 1);
                            v26 = v30 - 1;
                            if((int)(v26 - v24) <= 2) {
                                for(i = 0; (int)(v26 - v24 + 1) > (int)i; ++i) {
                                    delete_str(v24, v20);
                                    ++v29;
                                }
                            }
                            for(i = 0; *(int*)(i * 4 + v20); ++i) {
                                →fprintf(v14, *(int*)(i * 4 + v20));
                            }
                            →fflush(v14);
                            →rewind(v14);
                            unsigned int v31 = 0;
                            while(1) {
                                →fgets(&v6, 0x800, v14);
                                if(!result) {
                                    break;
                                }
                                else {
                                    ++v31;
                                }
                            }
                            if(!v31) {
                                print_warning("file truncation detected. Retaining orginal file \'menu.tcl\'.\n");
                                →memcpy(&GISMAN_CMD, &gvar_8055722, 1);
                            }
                            →fclose(v13);
                            →fclose(v14);
                            for(i = 0; (int)(v18 + 1) > (int)i; ++i) {
                                →free(*(int*)(i * 4 + v20));
                            }
                            →free(v20);
                            result = v29;
                        }
                    }
                }
            }
        }
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v11)) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int deregister_entries_gisman2(int param0, int param1) {
    char v0;
    char v1;
    int result;
    int v2 = param0;
    int v3 = param1;
    int v4 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v5 = param0;
    int v6 = param1;
    →sprintf(&v0, "%s/etc/gm/Xtns/%s.gem");
    →fopen(&v0, &gvar_80553F1);
    int v7 = result;
    if(!result) {
        →__errno_location();
        if(*(unsigned int*)result != 2) {
            →fclose(0);
            →__errno_location();
            →strerror(*(int*)result);
            /*NO_RETURN*/ print_error(-33, "checking for file \'%s\': %s\n");
        }
    }
    else {
        if(VERBOSE) {
            →sprintf(&v1, "rm -vf %s/etc/gm/Xtns/%s.gem ; ");
        }
        else {
            →sprintf(&v1, "rm -f %s/etc/gm/Xtns/%s.gem ; ");
        }
        →strcpy(&GISMAN_CMD, &v1);
    }
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v4;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int deregister_extension(int param0, int param1, int param2) {
    int v0;
    char v1;
    char v2;
    char v3;
    char v4;
    int result;
    int v5 = param0;
    int v6 = param1;
    int v7 = param2;
    int v8 = *(int*)(__GS_BASE + (int)(int*)0x14);
    unsigned int v9 = 0;
    int v10 = param2;
    →sprintf(&v1, "%s/etc/extensions.db");
    →fopen(&v1, &gvar_8054D13);
    int v11 = result;
    if(!v11) {
        →__errno_location();
        if(*(unsigned int*)result == 2 && !FORCE) {
            →fclose(0);
            /*NO_RETURN*/ print_error(-19, "could not deregister: no extensions installed\n");
        }
        if(!FORCE) {
            →fclose(0);
            →__errno_location();
            →strerror(*(int*)result);
            int v12 = result;
            v10 = &v1;
            /*NO_RETURN*/ print_error(-19, "checking for file \'%s\': %s\n");
        }
    }
    else {
        v9 = 1;
    }
    if(v9) {
        v9 = 0;
        →memcpy(&TMPDB, "/tmp/grass.extensions.db.XXXXXX", 32);
        →mkstemp(&TMPDB);
        →fopen(&TMPDB, &gvar_8054D74);
        v0 = result;
        if(!v0 && !FORCE) {
            →__errno_location();
            →strerror(*(int*)result);
            /*NO_RETURN*/ print_error(-19, "could not create temp db \'%s\': %s\n \t\t\t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        v9 = 1;
        atexit((void __cdecl (*_)())&exit_db);
    }
    if(v9) {
        unsigned int v13 = 0;
        for(int i = nc_fgets_nb(&v2, 0x800, v11); i; i = nc_fgets_nb(&v2, 0x800, v11)) {
            →__isoc99_sscanf();
            if(result > 0) {
                unsigned int v14 = 1;
                →strcmp(v6, &v3);
                if(!result) {
                    v14 = 0;
                    v13 = 1;
                }
                if(v14) {
                    →strstr(&v4, v6);
                    if(result && !FORCE) {
                        /*NO_RETURN*/ print_error(-19, "cannot uninstall extension \'%s\' it is needed by \'%s\'.\n");
                    }
                    →fprintf(v0, &v2);
                }
            }
        }
        if(!v13) {
            /*NO_RETURN*/ print_error(-19, "no extension \'%s\' registered/installed in \'%s\'.\n");
        }
        →fclose(v11);
        →fclose(v0);
    }
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v8;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int deregister_html(int param0, int param1) {
    int v0;
    int v1;
    char v2;
    char v3;
    int result;
    int v4;
    int v5 = v4;
    int v6 = param0;
    int v7 = param1;
    int v8 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v9 = v7;
    →sprintf(&v2, "%s/docs/html/index.html");
    →fopen(&v2, &gvar_8055C93);
    int v10 = result;
    if(!v10) {
        →__errno_location();
        if(*(unsigned int*)result != 2) {
            →fclose(0);
            →__errno_location();
            →strerror(*(int*)result);
            v1 = result;
            v9 = &v2;
            /*NO_RETURN*/ print_error(-24, "checking for file \'%s\': %s\n");
        }
    }
    else {
        →memcpy(&TMP_HTML, "/tmp/grass.extensions.db.XXXXXX", 32);
        →mkstemp(&TMP_HTML);
        →fopen(&TMP_HTML, &gvar_8055CD4);
        int v11 = result;
        if(!v11) {
            →__errno_location();
            →strerror(*(int*)result);
            /*NO_RETURN*/ print_error(-24, "could not create temp file \'%s\': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        atexit((void __cdecl (*_)())&exit_db);
        if(VERBOSE) {
            v0 = v7;
            v1 = v7;
            v9 = &TMP_HTML;
            →sprintf(&v3, "cp -vf %s %s/docs/html/index.html ; chmod -v a+r %s/docs/html/index.html ;");
        }
        else {
            int v12 = &TMP_NULL;
            int v13 = v7;
            v0 = &TMP_NULL;
            v1 = v7;
            v9 = &TMP_HTML;
            →sprintf(&v3, "cp -f %s %s/docs/html/index.html &>%s ; chmod a+r %s/docs/html/index.html &>%s ;");
        }
        →strcpy(&HTML_CMD, &v3);
        unsigned int v14 = 0;
        while(1) {
            →fgets(&v3, 0x800, v10);
            if(!result) {
                break;
            }
            else {
                ++v14;
            }
        }
        if(v14) {
            →rewind(v10);
            →calloc((int)(v14 + 1), 4);
            int v15 = result;
            unsigned int i;
            for(i = 0; (int)(v14 + 1) > (int)i; ++i) {
                *(int*)(i * 4 + v15) = 0;
            }
            i = 0;
            while(1) {
                →fgets(&v3, 0x800, v10);
                if(!result) {
                    break;
                }
                else {
                    →strlen(&v3);
                    →malloc(result + 1);
                    *(int*)(i * 4 + v15) = result;
                    →strcpy(*(int*)(i * 4 + v15), &v3);
                    ++i;
                }
            }
            delete_ext_html(v6, v7, v15);
            for(i = 0; *(int*)(i * 4 + v15); ++i) {
                →fprintf(v11, *(int*)(i * 4 + v15));
            }
            →fflush(v11);
            →fclose(v10);
            →fclose(v11);
            for(i = 0; (int)(v14 + 1) > (int)i; ++i) {
                →free(*(int*)(i * 4 + v15));
            }
            →free(v15);
        }
    }
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v8;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int dump_ascii(int param0, int* param1) {
    char v0;
    int result;
    int v1 = param0;
    int v2 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →fprintf(stdout, &gvar_8054AB2);
    →fopen(v1, &gvar_8054A6F);
    int v3 = result;
    if(!v3) {
        →fwrite("  No information available.\n", 1, 28, stdout);
    }
    else {
        for(int i = nc_fgets_html((int)&v0, 0x800, v3); i; i = nc_fgets_html((int)&v0, 0x800, v3)) {
            →fprintf(stdout, "  %s");
        }
        →fputc(10, stdout);
        →fclose(v3);
    }
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v2;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int dump_html(int param0, int param1) {
    char v0;
    char v1;
    int v2;
    int result;
    int v3 = param0;
    int v4 = param1;
    int v5 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →memcpy(param1, "/tmp/grass.extensions.db.XXXXXX", 32);
    →mkstemp(param1);
    →fopen(param1, &gvar_8054B0C);
    int v6 = result;
    if(!v6) {
        →__errno_location();
        →strerror(*(int*)result);
        /*NO_RETURN*/ print_error(-23, "could not create temp file \'%s\': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
    }
    atexit((void __cdecl (*_)())&exit_db);
    →fopen(v3, &gvar_8054A6F);
    int v7 = result;
loc_804A690:
    int v8 = nc_fgets(&v0, 0x800, result);
    while(v8) {
        chop(&v0);
        int v9 = is_text(&v0);
        if(!v9) {
            →fwrite("<p>\n", 1, 4, v6);
            goto loc_804A690;
        }
        else {
            →sprintf(&v1, "%s <br>\n");
            →fprintf(v6, &v1);
            v8 = nc_fgets(&v0, 0x800, result);
        }
    }
    →fclose(result);
    →fclose(v6);
    →close(v2);
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v5;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int dump_plain(int param0, int param1) {
    char v0;
    int result;
    int v1 = param0;
    int v2 = param1;
    int v3 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →memcpy(param1, "/tmp/grass.extensions.db.XXXXXX", 32);
    →mkstemp(param1);
    →fopen(param1, &gvar_8054B0C);
    int v4 = result;
    if(!v4) {
        →__errno_location();
        →strerror(*(int*)result);
        /*NO_RETURN*/ print_error(-23, "could not create temp file \'%s\': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
    }
    atexit((void __cdecl (*_)())&exit_db);
    →fopen(v1, &gvar_8054A6F);
    int v5 = result;
    for(int i = nc_fgets(&v0, 0x800, result); i; i = nc_fgets(&v0, 0x800, result)) {
        →fprintf(v4, &v0);
    }
    →fclose(result);
    →fclose(v4);
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v3;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int dump_str(int param0, int param1) {
    for(int i = 0; *(int*)(i * 4 + param1); ++i) {
        int v0 = *(int*)(i * 4 + param1);
        int v1 = i;
        →fprintf(param0, "%i: %s");
    }
    return 0;
}

unsigned int exit_db() {
    char v0;
    unsigned int result;
    int v1 = *(int*)(__GS_BASE + (int)(int*)0x14);
    if(!TMPDBCLEAN) {
        →chdir(&CWD);
        if(VERBOSE) {
            →fwrite("Removing temporary registration files...", 1, 40, stdout);
        }
        if(TMPDB) {
            →sprintf(&v0, "rm -rf %s");
            →system(&v0);
            if(result) {
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if(TMP_GISMAN) {
            →sprintf(&v0, "rm -f %s");
            →system(&v0);
            if(result) {
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if(TMP_DESCR) {
            →sprintf(&v0, "rm -f %s");
            →system(&v0);
            if(result) {
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if(TMP_INFO) {
            →sprintf(&v0, "rm -f %s");
            →system(&v0);
            if(result) {
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if(TMP_DEPS) {
            →sprintf(&v0, "rm -f %s");
            →system(&v0);
            if(result) {
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if(TMP_BUGS) {
            →sprintf(&v0, "rm -f %s");
            →system(&v0);
            if(result) {
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if(TMP_AUTHORS) {
            →sprintf(&v0, "rm -f %s");
            →system(&v0);
            if(result) {
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if(TMP_HTML) {
            →sprintf(&v0, "rm -f %s");
            →system(&v0);
            if(result) {
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if(!VERBOSE && TMP_NULL) {
            →sprintf(&v0, "rm -f %s");
            →system(&v0);
            if(result) {
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if(VERBOSE) {
            print_done();
        }
        TMPDBCLEAN = 1;
    }
    result = (unsigned int)(*(int*)(__GS_BASE + (int)(int*)0x14) ^ v1);
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

void exit_env() {
}

unsigned int exit_msg() {
    unsigned int result;
    if(ERROR >= 0x80000000) {
        →fprintf(stdout, "Program exited with an error (code %i). Operation aborted.\n");
    }
    else {
        if(WARNINGS == 1) {
            →fwrite("Job done but there was one warning. Please check.\n", 1, 50, stdout);
        }
        result = WARNINGS;
        if((int)result > 1) {
            →fprintf(stdout, "Job done but there were %i warnings. Please check.\n");
        }
    }
    return result;
}

unsigned int exit_tmp() {
    char v0;
    unsigned int result;
    int v1 = *(int*)(__GS_BASE + (int)(int*)0x14);
    if(!TMPDIR) {
        TMPCLEAN = 1;
    }
    else if(!TMPCLEAN) {
        →chdir(&CWD);
        →sprintf(&v0, "rm -rf %s/*");
        if(VERBOSE) {
            →fwrite("Removing temporary extension files...", 1, 37, stdout);
        }
        →system(&v0);
        →sprintf(&v0, "rmdir %s");
        →system(&v0);
        →opendir(&TMPDIR);
        if(result) {
            print_warning("could not remove temporary directory %s.\nPlease remove manually.\n");
        }
        if(VERBOSE) {
            print_done();
        }
        TMPCLEAN = 1;
    }
    result = (unsigned int)(*(int*)(__GS_BASE + (int)(int*)0x14) ^ v1);
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

unsigned int find_pos(int param0, int param1, unsigned int param2) {
    int v0;
    unsigned int i;
    for(i = 0; *(int*)(i * 4 + param1); ++i) {
    }
    if(param2 >= 0x80000000 || (int)i < (int)param2) {
        /*NO_RETURN*/ →exit(-21);
    }
    unsigned int result = param2;
    while((int)result < (int)i) {
        →strstr(*(int*)(result * 4 + param1), param0);
        if(v0) {
            return result;
        }
        ++result;
    }
    return 0xffffffff;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int get_configure_options(int param0) {
    char v0;
    unsigned int result;
    int v1 = *(int*)(__GS_BASE + (int)(int*)0x14);
    if(!CONFIG_OPTS) {
        →sprintf(&v0, "%s/etc/config.system");
        →fopen(&v0, &gvar_80578DE);
        unsigned int v2 = result;
        if(!result) {
            print_warning("could not open %s for read access. Using default configure options.\n");
        }
        else {
            int v3 = nc_fgets_nb(&v0, 0x800, (int)result);
            if(v3) {
                →strcpy(&CONFIG_OPTS, &v0);
            }
        }
    }
    result = (unsigned int)(*(int*)(__GS_BASE + (int)(int*)0x14) ^ v1);
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int get_package_name(int param0, int param1) {
    char v0;
    char v1;
    int result;
    int v2 = param1;
    int v3 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →sprintf(&v0, "%s/%s");
    →fopen(&v0, &gvar_8054A6F);
    int v4 = result;
    if(!result) {
        /*NO_RETURN*/ print_error(-6, "\'name\' file not readable.\n");
    }
    int v5 = nc_fgets_nb(&v1, 0x800, result);
    if(!v5) {
        →fclose(result);
        /*NO_RETURN*/ print_error(-6, "invalid or missing extension name.\n");
    }
    chop(&v1);
    →strcpy(param1, &v1);
    →fclose(result);
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v3;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

unsigned int insert_str(int param0, unsigned int param1, int param2) {
    int v0;
    char v1;
    char v2;
    char v3;
    unsigned int result;
    int v4;
    int v5 = v4;
    int v6 = param0;
    int v7 = param2;
    int v8 = *(int*)(__GS_BASE + (int)(int*)0x14);
    unsigned int i;
    for(i = 0; *(int*)(i * 4 + v7); ++i) {
    }
    if(param1 >= 0x80000000 || (int)i < (int)param1) {
        unsigned int v9 = param1;
        /*NO_RETURN*/ print_error(-21, "insert: invalid line number %i.\n");
    }
    if(i == param1) {
        →strlen(v6);
        v0 = (int)(result + 1);
        →malloc(v0);
        *(unsigned int*)(i * 4 + v7) = result;
        →strcpy(*(int*)(i * 4 + v7), v6);
    }
    else {
        →strcpy(&v1, *(int*)((i - 1) * 4 + v7));
        →strcpy(&v2, *(int*)(param1 * 4 + v7));
        /*BAD_CALL!*/ →free(*(int*)(param1 * 4 + v7));
        →strlen(v6);
        →malloc((int)(result + 1));
        *(unsigned int*)(param1 * 4 + v7) = result;
        →strcpy(*(int*)(param1 * 4 + v7), v6);
        for(unsigned int j = param1; (int)(i - 1) > (int)j; ++j) {
            →strcpy(&v3, *(int*)((j + 1) * 4 + v7));
            →free(*(int*)((j + 1) * 4 + v7));
            →strlen(&v2);
            v0 = (int)(result + 1);
            →malloc(v0);
            *(unsigned int*)((j + 1) * 4 + v7) = result;
            →strcpy(*(int*)((j + 1) * 4 + v7), &v2);
            →strcpy(&v2, &v3);
        }
        →strlen(&v1);
        →malloc((int)(result + 1));
        *(unsigned int*)(i * 4 + v7) = result;
        →strcpy(*(int*)(i * 4 + v7), &v1);
    }
    i += 2;
    *(int*)((i - 1) * 4 + v7) = 0;
    result = i;
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v8)) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int is_submenu(int param0) {
    int result;
    unsigned int v0;
    →strchr(param0, 91);
    if(!v0) {
        result = 0;
    }
    else {
        →strrchr(param0, 93);
        if(!v0) {
            result = 0;
        }
        else {
            →strchr(param0, 91);
            →strrchr(param0, 93);
            result = v0 < v0 ? 0: 1;
        }
    }
    return result;
}

int is_text(int param0) {
    unsigned int v0;
    int result = 0;
    →strlen(param0);
    unsigned int v1 = v0 - 1;
    while(v1 < 0x80000000) {
        if(*(unsigned char*)(v1 + param0) == 32 || *(unsigned char*)(v1 + param0) == 9 || *(unsigned char*)(v1 + param0) == 10 || *(unsigned char*)(v1 + param0) == 12 || *(unsigned char*)(v1 + param0) == 13) {
            result = 0;
            --v1;
        }
        else {
            return 1;
        }
    }
    return result;
}

int list_binaries(int param0) {
    char v0;
    char v1;
    int v2;
    int result;
    int v3 = param0;
    int v4 = *(int*)(__GS_BASE + (int)(int*)0x14);
    unsigned int v5 = 0;
    →fwrite("Binary installation files\n", 1, 26, stdout);
    →opendir(v3);
    int v6 = result;
    if(!v6) {
        →fwrite("  None.\n\n", 1, 9, stdout);
    }
    else {
        →readdir(v6);
        for(int i = result; i; i = result) {
            →strcmp(i + 11, &gvar_8054BBE);
            if(result) {
                →strcmp(i + 11, &gvar_8054BC0);
                if(result) {
                    →strcmp(i + 11, &gvar_8054BC3);
                    if(result) {
                        →sprintf(&v0, "%s/%s");
                        stat((char*)&v0, &v1);
                        if((unsigned int)(v2 & 0xf000) == 0x4000) {
                            if(!v5) {
                                →fprintf(stdout, "  %s");
                            }
                            else {
                                →fprintf(stdout, ", %s");
                            }
                            ++v5;
                        }
                    }
                }
            }
            →readdir(v6);
        }
        if(!v5) {
            →fwrite("  None.", 1, 7, stdout);
        }
        →fwrite(&gvar_8054BD4, 1, 2, stdout);
    }
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v4;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int list_extensions(int param0) {
    char v0;
    int result;
    int v1 = param0;
    int v2 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →fprintf(stdout, "\nExtensions in \'%s\' (name, version, type, depends):\n");
    int v3 = v1;
    →sprintf(&v0, "%s/etc/extensions.db");
    →fopen(&v0, &gvar_8055E6B);
    int v4 = result;
    if(!v4) {
        →__errno_location();
        if(*(unsigned int*)result == 2) {
            →fwrite("NONE.\n", 1, 6, stderr);
            →fclose(v4);
            /*NO_RETURN*/ →exit(0);
        }
        →fclose(v4);
        →__errno_location();
        →strerror(*(int*)result);
        /*NO_RETURN*/ print_error(-29, "checking for file \'%s\': %s\n");
    }
    →fclose(v4);
    dump_ascii(&v0, (int*)0x805698C);
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v2;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int main(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    char v3;
    int v4;
    char v5;
    char v6;
    char v7;
    char v8;
    char v9;
    char v10;
    char v11;
    char v12;
    int v13;
    int v14;
    int v15;
    char v16;
    int* ptr0;
    int v17;
    int v18;
    int v19;
    void* ptr1;
    int v20;
    int v21;
    char v22;
    int* ptr2 = &v4;
    char v23 = &v3 == 16;
    char v24 = (int)&v5 < 0;
    char v25 = __parity__((unsigned char)&v3 - 16);
    char v26 = 0;
    char v27 = 0;
    int v28 = v21;
    int v29 = &v28;
    char v30 = &v3 == 14704;
    char v31 = (int)&v19 < 0;
    char v32 = __parity__((unsigned char)&v3 - 112);
    char v33 = (int*)((int)(int*)((int)(int*)((int)(int*)(&v28 ^ 0x395c) ^ (int)&v19) >>> 4) & 0x1);
    char v34 = (unsigned int)&v28 < 14684;
    char v35 = (int)(int*)((int)(int*)(&v28 ^ (int)&v19) & (int)(int*)(&v28 ^ 0x395c)) < 0;
    int v36 = param1;
    int v37 = param1;
    int v38 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v39 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v40 = 0;
    char v41 = 1;
    char v42 = 0;
    char v43 = 1;
    char v44 = 0;
    char v45 = 0;
    int v46 = 0;
    int v47 = 0;
    VERBOSE = 0;
    TMPCLEAN = 0;
    TMPDBCLEAN = 0;
    FORCE = 0;
    UPGRADE = 0;
    ERROR = 0;
    WARNINGS = 0;
    SKIP_CFG = 0;
    int v48 = &gvar_8057925;
    →memcpy(&GISMAN_CMD, &gvar_8057925, 1);
    int v49 = &gvar_8057925;
    →memcpy(&GISMAN2_CMD, &gvar_8057925, 1);
    int v50 = &gvar_8057925;
    →memcpy(&QGIS_CMD, &gvar_8057925, 1);
    int v51 = &gvar_8057925;
    →memcpy(&UNINSTALL_CMD, &gvar_8057925, 1);
    int v52 = &gvar_8057925;
    →memcpy(&HTML_CMD, &gvar_8057925, 1);
    int v53 = &gvar_8057925;
    →memcpy(&TMPDIR, &gvar_8057925, 1);
    int v54 = &gvar_8057925;
    →memcpy(&TMPDB, &gvar_8057925, 1);
    int v55 = &gvar_8057925;
    →memcpy(&TMP_GISMAN, &gvar_8057925, 1);
    int v56 = &gvar_8057925;
    →memcpy(&TMP_DESCR, &gvar_8057925, 1);
    int v57 = &gvar_8057925;
    →memcpy(&TMP_INFO, &gvar_8057925, 1);
    int v58 = &gvar_8057925;
    →memcpy(&TMP_DEPS, &gvar_8057925, 1);
    int v59 = &gvar_8057925;
    →memcpy(&TMP_BUGS, &gvar_8057925, 1);
    int v60 = &gvar_8057925;
    →memcpy(&TMP_AUTHORS, &gvar_8057925, 1);
    int v61 = &gvar_8057925;
    →memcpy(&TMP_HTML, &gvar_8057925, 1);
    int v62 = &gvar_8057925;
    →memcpy(&TMP_NULL, &gvar_8057925, 1);
    int v63 = &gvar_8057925;
    →memcpy(&CONFIG_OPTS, &gvar_8057925, 1);
    int v64 = "configure";
    →memcpy(&CONFIG_CMD, "configure", 10);
    int v65 = "make";
    →memcpy(&MAKE_CMD, "make", 5);
    →getcwd(&CWD, 0x800);
    int v66 = stdout;
    int v67 = stdout;
    int v68 = &gvar_8057935;
    →fwrite(&gvar_8057935, 1, 4, v67);
    →malloc(0x800);
    int v69 = v13;
    int v70 = v37;
    int v71 = *(int*)v70;
    int v72 = &v9;
    →strcpy(&v9, v71);
    int v73 = stdout;
    →setvbuf(v73, 0, 2, 0);
    char v74 = param0 == 1;
    char v75 = param0 < 1;
    char v76 = __parity__((unsigned char)param0 - 1);
    char v77 = (unsigned int)param0 < 1;
    char v78 = (((param0 - 1) ^ param0) & (param0 ^ 0x1)) < 0;
    char v79 = (((param0 - 1) ^ (param0 ^ 0x1)) >>> 4) & 0x1;
    if(v74) {
        int v80 = /*NO_RETURN*/ show_help();
    }
    int v81 = atexit((void __cdecl (*_)())&exit_msg);
    int v82 = 0;
    int v83 = 0;
    int v84 = 0;
    opterr = 0;
    int v85 = &v47;
    int v86 = v37;
    int v87 = param0;
    int* ptr3 = &ptr1;
    →getopt_long(v87, v86, ":i:u:q:d:c:C:t:l:m:o:x:rhVg:b:fvs", &long_options.3722, &v47);
    int v88 = v13;
    while(1) {
        char v89 = v88 == -1;
        char v90 = v88 < -1;
        char v91 = __parity__((unsigned char)v88 - 0xff);
        char v92 = (unsigned int)v88 < 0xffffffff;
        char v93 = (int)(int*)((int)(int*)((int)(int*)(v88 + 1) ^ v88) & ~v88) < 0;
        char v94 = (int*)((int)(int*)((int)(int*)((int)(int*)(v88 + 1) ^ ~v88) >>> 4) & 0x1);
        if(v89) {
            break;
        }
        else {
            char v95 = v88 == 63;
            char v96 = v88 < 63;
            char v97 = __parity__((unsigned char)v88 - 63);
            char v98 = (unsigned int)v88 < 63;
            char v99 = (((v88 - 63) ^ v88) & (v88 ^ 0x3f)) < 0;
            char v100 = (((v88 - 63) ^ (v88 ^ 0x3f)) >>> 4) & 0x1;
            if(v95) {
                ptr3 = &ptr1;
                int v101 = /*NO_RETURN*/ print_error(-1, "unknown option or action specified.\n");
            }
            char v102 = v88 == 58;
            char v103 = v88 < 58;
            char v104 = __parity__((unsigned char)v88 - 58);
            char v105 = (unsigned int)v88 < 58;
            char v106 = (((v88 - 58) ^ v88) & (v88 ^ 0x3a)) < 0;
            char v107 = (((v88 - 58) ^ (v88 ^ 0x3a)) >>> 4) & 0x1;
            if(v102) {
                unsigned int v108 = optopt;
                char v109 = v108 == 105;
                char v110 = (int)v108 < 105;
                char v111 = __parity__((unsigned char)v108 - 105);
                char v112 = v108 < 105;
                char v113 = (((v108 - 105) ^ v108) & (v108 ^ 0x69)) < 0;
                char v114 = (((v108 - 105) ^ (v108 ^ 0x69)) >>> 4) & 0x1;
                if(!v109) {
                    unsigned int v115 = optopt;
                    char v116 = v115 == 117;
                    char v117 = (int)v115 < 117;
                    char v118 = __parity__((unsigned char)v115 - 117);
                    char v119 = v115 < 117;
                    char v120 = (((v115 - 117) ^ v115) & (v115 ^ 0x75)) < 0;
                    char v121 = (((v115 - 117) ^ (v115 ^ 0x75)) >>> 4) & 0x1;
                    if(!v116) {
                        unsigned int v122 = optopt;
                        char v123 = v122 == 100;
                        char v124 = (int)v122 < 100;
                        char v125 = __parity__((unsigned char)v122 - 100);
                        char v126 = v122 < 100;
                        char v127 = (((v122 - 100) ^ v122) & (v122 ^ 0x64)) < 0;
                        char v128 = (((v122 - 100) ^ (v122 ^ 0x64)) >>> 4) & 0x1;
                        if(!v123) {
                            unsigned int v129 = optopt;
                            char v130 = v129 == 99;
                            char v131 = (int)v129 < 99;
                            char v132 = __parity__((unsigned char)v129 - 99);
                            char v133 = v129 < 99;
                            char v134 = (((v129 - 99) ^ v129) & (v129 ^ 0x63)) < 0;
                            char v135 = (((v129 - 99) ^ (v129 ^ 0x63)) >>> 4) & 0x1;
                            if(!v130) {
                                unsigned int v136 = optopt;
                                char v137 = v136 == 116;
                                char v138 = (int)v136 < 116;
                                char v139 = __parity__((unsigned char)v136 - 116);
                                char v140 = v136 < 116;
                                char v141 = (((v136 - 116) ^ v136) & (v136 ^ 0x74)) < 0;
                                char v142 = (((v136 - 116) ^ (v136 ^ 0x74)) >>> 4) & 0x1;
                                if(!v137) {
                                    unsigned int v143 = optopt;
                                    char v144 = v143 == 108;
                                    char v145 = (int)v143 < 108;
                                    char v146 = __parity__((unsigned char)v143 - 108);
                                    char v147 = v143 < 108;
                                    char v148 = (((v143 - 108) ^ v143) & (v143 ^ 0x6c)) < 0;
                                    char v149 = (((v143 - 108) ^ (v143 ^ 0x6c)) >>> 4) & 0x1;
                                    if(!v144) {
                                        unsigned int v150 = optopt;
                                        char v151 = v150 == 114;
                                        char v152 = (int)v150 < 114;
                                        char v153 = __parity__((unsigned char)v150 - 114);
                                        char v154 = v150 < 114;
                                        char v155 = (((v150 - 114) ^ v150) & (v150 ^ 0x72)) < 0;
                                        char v156 = (((v150 - 114) ^ (v150 ^ 0x72)) >>> 4) & 0x1;
                                        if(!v151) {
                                            goto loc_805374C;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    goto loc_8053747;
                }
                else {
                loc_8053747:
                    ptr3 = &ptr1;
                    int v157 = /*NO_RETURN*/ print_error(-1, "missing file or directory name.\n");
                }
            loc_805374C:
                unsigned int v158 = optopt;
                char v159 = v158 == 103;
                char v160 = (int)v158 < 103;
                char v161 = __parity__((unsigned char)v158 - 103);
                char v162 = v158 < 103;
                char v163 = (((v158 - 103) ^ v158) & (v158 ^ 0x67)) < 0;
                char v164 = (((v158 - 103) ^ (v158 ^ 0x67)) >>> 4) & 0x1;
                if(v159) {
                    ptr3 = &ptr1;
                    int v165 = /*NO_RETURN*/ print_error(-1, "missing path to GRASS 6.\n");
                }
                unsigned int v166 = optopt;
                char v167 = v166 == 98;
                char v168 = (int)v166 < 98;
                char v169 = __parity__((unsigned char)v166 - 98);
                char v170 = v166 < 98;
                char v171 = (((v166 - 98) ^ v166) & (v166 ^ 0x62)) < 0;
                char v172 = (((v166 - 98) ^ (v166 ^ 0x62)) >>> 4) & 0x1;
                if(v167) {
                    ptr3 = &ptr1;
                    int v173 = /*NO_RETURN*/ print_error(-1, "missing name of binary architecture.\n");
                }
                unsigned int v174 = optopt;
                char v175 = v174 == 98;
                char v176 = (int)v174 < 98;
                char v177 = __parity__((unsigned char)v174 - 98);
                char v178 = v174 < 98;
                char v179 = (((v174 - 98) ^ v174) & (v174 ^ 0x62)) < 0;
                char v180 = (((v174 - 98) ^ (v174 ^ 0x62)) >>> 4) & 0x1;
                if(v175) {
                    ptr3 = &ptr1;
                    int v181 = /*NO_RETURN*/ print_error(-1, "missing configure options.\n");
                }
                unsigned int v182 = optopt;
                char v183 = v182 == 113;
                char v184 = (int)v182 < 113;
                char v185 = __parity__((unsigned char)v182 - 113);
                char v186 = v182 < 113;
                char v187 = (((v182 - 113) ^ v182) & (v182 ^ 0x71)) < 0;
                char v188 = (((v182 - 113) ^ (v182 ^ 0x71)) >>> 4) & 0x1;
                if(v183) {
                    v2 = 12;
                    v29 = v82;
                    ++v82;
                    char v189 = v82 ? 0: 1;
                    char v190 = v82 < 0;
                    char v191 = __parity__((unsigned char)v82);
                    char v192 = (int*)((int)(int*)((int)(int*)((int)(int*)(v29 ^ 0x1) ^ v82) >>> 4) & 0x1);
                    char v193 = (unsigned int)v29 >= 0xffffffff;
                    char v194 = (int)(int*)((int)(int*)(v29 ^ v82) & (int*)~(int)(int*)(v29 ^ 0x1)) < 0;
                    break;
                }
            }
            char v195 = v88 == 105;
            char v196 = v88 < 105;
            char v197 = __parity__((unsigned char)v88 - 105);
            char v198 = (unsigned int)v88 < 105;
            char v199 = (((v88 - 105) ^ v88) & (v88 ^ 0x69)) < 0;
            char v200 = (((v88 - 105) ^ (v88 ^ 0x69)) >>> 4) & 0x1;
            if(!v195) {
                char v201 = v88 == 117;
                char v202 = v88 < 117;
                char v203 = __parity__((unsigned char)v88 - 117);
                char v204 = (unsigned int)v88 < 117;
                char v205 = (((v88 - 117) ^ v88) & (v88 ^ 0x75)) < 0;
                char v206 = (((v88 - 117) ^ (v88 ^ 0x75)) >>> 4) & 0x1;
                if(!v201) {
                    char v207 = v88 == 113;
                    char v208 = v88 < 113;
                    char v209 = __parity__((unsigned char)v88 - 113);
                    char v210 = (unsigned int)v88 < 113;
                    char v211 = (((v88 - 113) ^ v88) & (v88 ^ 0x71)) < 0;
                    char v212 = (((v88 - 113) ^ (v88 ^ 0x71)) >>> 4) & 0x1;
                    if(!v207) {
                        char v213 = v88 == 100;
                        char v214 = v88 < 100;
                        char v215 = __parity__((unsigned char)v88 - 100);
                        char v216 = (unsigned int)v88 < 100;
                        char v217 = (((v88 - 100) ^ v88) & (v88 ^ 0x64)) < 0;
                        char v218 = (((v88 - 100) ^ (v88 ^ 0x64)) >>> 4) & 0x1;
                        if(!v213) {
                            char v219 = v88 == 99;
                            char v220 = v88 < 99;
                            char v221 = __parity__((unsigned char)v88 - 99);
                            char v222 = (unsigned int)v88 < 99;
                            char v223 = (((v88 - 99) ^ v88) & (v88 ^ 0x63)) < 0;
                            char v224 = (((v88 - 99) ^ (v88 ^ 0x63)) >>> 4) & 0x1;
                            if(!v219) {
                                char v225 = v88 == 116;
                                char v226 = v88 < 116;
                                char v227 = __parity__((unsigned char)v88 - 116);
                                char v228 = (unsigned int)v88 < 116;
                                char v229 = (((v88 - 116) ^ v88) & (v88 ^ 0x74)) < 0;
                                char v230 = (((v88 - 116) ^ (v88 ^ 0x74)) >>> 4) & 0x1;
                                if(!v225) {
                                    char v231 = v88 == 108;
                                    char v232 = v88 < 108;
                                    char v233 = __parity__((unsigned char)v88 - 108);
                                    char v234 = (unsigned int)v88 < 108;
                                    char v235 = (((v88 - 108) ^ v88) & (v88 ^ 0x6c)) < 0;
                                    char v236 = (((v88 - 108) ^ (v88 ^ 0x6c)) >>> 4) & 0x1;
                                    if(!v231) {
                                        char v237 = v88 == 114;
                                        char v238 = v88 < 114;
                                        char v239 = __parity__((unsigned char)v88 - 114);
                                        char v240 = (unsigned int)v88 < 114;
                                        char v241 = (((v88 - 114) ^ v88) & (v88 ^ 0x72)) < 0;
                                        char v242 = (((v88 - 114) ^ (v88 ^ 0x72)) >>> 4) & 0x1;
                                        if(!v237) {
                                            char v243 = v88 == 104;
                                            char v244 = v88 < 104;
                                            char v245 = __parity__((unsigned char)v88 - 104);
                                            char v246 = (unsigned int)v88 < 104;
                                            char v247 = (((v88 - 104) ^ v88) & (v88 ^ 0x68)) < 0;
                                            char v248 = (((v88 - 104) ^ (v88 ^ 0x68)) >>> 4) & 0x1;
                                            if(!v243) {
                                                char v249 = v88 == 86;
                                                char v250 = v88 < 86;
                                                char v251 = __parity__((unsigned char)v88 - 86);
                                                char v252 = (unsigned int)v88 < 86;
                                                char v253 = (((v88 - 86) ^ v88) & (v88 ^ 0x56)) < 0;
                                                char v254 = (((v88 - 86) ^ (v88 ^ 0x56)) >>> 4) & 0x1;
                                                if(!v249) {
                                                    goto loc_805391E;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                goto loc_8053830;
            }
            else {
            loc_8053830:
                v29 = v82;
                ++v82;
                char v255 = v82 ? 0: 1;
                char v256 = v82 < 0;
                char v257 = __parity__((unsigned char)v82);
                char v258 = (int*)((int)(int*)((int)(int*)((int)(int*)(v29 ^ 0x1) ^ v82) >>> 4) & 0x1);
                char v259 = (unsigned int)v29 >= 0xffffffff;
                char v260 = (int)(int*)((int)(int*)(v29 ^ v82) & (int*)~(int)(int*)(v29 ^ 0x1)) < 0;
                int v261 = v88;
                unsigned int v262 = (unsigned int)(v261 - 86);
                char v263 = v262 == 31;
                char v264 = (int)v262 < 31;
                char v265 = __parity__((unsigned char)v262 - 31);
                char v266 = v262 < 31;
                char v267 = (((v262 - 31) ^ v262) & (v262 ^ 0x1f)) < 0;
                char v268 = (((v262 - 31) ^ (v262 ^ 0x1f)) >>> 4) & 0x1;
                if((v266 || v263)) {
                    void* ptr4 = gvar_8057D30[v262];
                    jump ptr4;
                    if(!v845) {
                        v2 = 3;
                    }
                }
                unsigned int v269 = optarg;
                char v270 = v269 ? 0: 1;
                char v271 = v269 >= 0x80000000;
                char v272 = __parity__((unsigned char)v269);
                char v273 = 0;
                char v274 = 0;
                if(!v270) {
                    int v275 = optarg;
                    int v276 = &v6;
                    →strcpy(&v6, v275);
                    int v277 = optarg;
                    int v278 = &v7;
                    →strcpy(&v7, v277);
                }
            }
        loc_805391E:
            char v279 = v88 == 103;
            char v280 = v88 < 103;
            char v281 = __parity__((unsigned char)v88 - 103);
            char v282 = (unsigned int)v88 < 103;
            char v283 = (((v88 - 103) ^ v88) & (v88 ^ 0x67)) < 0;
            char v284 = (((v88 - 103) ^ (v88 ^ 0x67)) >>> 4) & 0x1;
            if(v279) {
                int v285 = optarg;
                →strlen(v285);
                v29 = v13;
                int v286 = v13 + 1;
                char v287 = v286 ? 0: 1;
                char v288 = v286 < 0;
                char v289 = __parity__((unsigned char)v286);
                char v290 = (int*)((int)(int*)((int)(int*)((int)(int*)(v29 ^ 0x1) ^ v286) >>> 4) & 0x1);
                char v291 = (unsigned int)v29 >= 0xffffffff;
                char v292 = (int)(int*)((int)(int*)(v286 ^ v29) & (int*)~(int)(int*)(v29 ^ 0x1)) < 0;
                →malloc(v286);
                v84 = v13;
                int v293 = optarg;
                int v294 = v84;
                →strcpy(v294, v293);
            }
            char v295 = v88 == 98;
            char v296 = v88 < 98;
            char v297 = __parity__((unsigned char)v88 - 98);
            char v298 = (unsigned int)v88 < 98;
            char v299 = (((v88 - 98) ^ v88) & (v88 ^ 0x62)) < 0;
            char v300 = (((v88 - 98) ^ (v88 ^ 0x62)) >>> 4) & 0x1;
            if(v295) {
                int v301 = optarg;
                →strlen(v301);
                v29 = v13;
                int v302 = v13 + 1;
                char v303 = v302 ? 0: 1;
                char v304 = v302 < 0;
                char v305 = __parity__((unsigned char)v302);
                char v306 = (int*)((int)(int*)((int)(int*)((int)(int*)(v29 ^ 0x1) ^ v302) >>> 4) & 0x1);
                char v307 = (unsigned int)v29 >= 0xffffffff;
                char v308 = (int)(int*)((int)(int*)(v302 ^ v29) & (int*)~(int)(int*)(v29 ^ 0x1)) < 0;
                →malloc(v302);
                v83 = v13;
                int v309 = optarg;
                int v310 = v83;
                →strcpy(v310, v309);
                v2 = 4;
            }
            char v311 = v88 == 120;
            char v312 = v88 < 120;
            char v313 = __parity__((unsigned char)v88 - 120);
            char v314 = (unsigned int)v88 < 120;
            char v315 = (((v88 - 120) ^ v88) & (v88 ^ 0x78)) < 0;
            char v316 = (((v88 - 120) ^ (v88 ^ 0x78)) >>> 4) & 0x1;
            if(v311) {
                int v317 = optarg;
                →strcpy(&CONFIG_OPTS, v317);
            }
            char v318 = v88 == 102;
            char v319 = v88 < 102;
            char v320 = __parity__((unsigned char)v88 - 102);
            char v321 = (unsigned int)v88 < 102;
            char v322 = (((v88 - 102) ^ v88) & (v88 ^ 0x66)) < 0;
            char v323 = (((v88 - 102) ^ (v88 ^ 0x66)) >>> 4) & 0x1;
            if(v318) {
                FORCE = 1;
            }
            char v324 = v88 == 118;
            char v325 = v88 < 118;
            char v326 = __parity__((unsigned char)v88 - 118);
            char v327 = (unsigned int)v88 < 118;
            char v328 = (((v88 - 118) ^ v88) & (v88 ^ 0x76)) < 0;
            char v329 = (((v88 - 118) ^ (v88 ^ 0x76)) >>> 4) & 0x1;
            if(v324) {
                VERBOSE = 1;
            }
            char v330 = v88 == 115;
            char v331 = v88 < 115;
            char v332 = __parity__((unsigned char)v88 - 115);
            char v333 = (unsigned int)v88 < 115;
            char v334 = (((v88 - 115) ^ v88) & (v88 ^ 0x73)) < 0;
            char v335 = (((v88 - 115) ^ (v88 ^ 0x73)) >>> 4) & 0x1;
            if(v330) {
                SKIP_CFG = 1;
            }
            char v336 = v88 == 111;
            char v337 = v88 < 111;
            char v338 = __parity__((unsigned char)v88 - 111);
            char v339 = (unsigned int)v88 < 111;
            char v340 = (((v88 - 111) ^ v88) & (v88 ^ 0x6f)) < 0;
            char v341 = (((v88 - 111) ^ (v88 ^ 0x6f)) >>> 4) & 0x1;
            if(v336) {
                int v342 = optarg;
                int v343 = &v10;
                →strcat(&v10, v342);
            }
            char v344 = v88 == 67;
            char v345 = v88 < 67;
            char v346 = __parity__((unsigned char)v88 - 67);
            char v347 = (unsigned int)v88 < 67;
            char v348 = (((v88 - 67) ^ v88) & (v88 ^ 0x43)) < 0;
            char v349 = (((v88 - 67) ^ (v88 ^ 0x43)) >>> 4) & 0x1;
            if(v344) {
                int v350 = optarg;
                →strcpy(&CONFIG_CMD, v350);
            }
            char v351 = v88 == 109;
            char v352 = v88 < 109;
            char v353 = __parity__((unsigned char)v88 - 109);
            char v354 = (unsigned int)v88 < 109;
            char v355 = (((v88 - 109) ^ v88) & (v88 ^ 0x6d)) < 0;
            char v356 = (((v88 - 109) ^ (v88 ^ 0x6d)) >>> 4) & 0x1;
            if(v351) {
                int v357 = optarg;
                →strcpy(&MAKE_CMD, v357);
            }
            int v358 = &v47;
            int v359 = v37;
            int v360 = param0;
            ptr3 = &ptr1;
            →getopt_long(v360, v359, ":i:u:q:d:c:t:l:o:x:rhVg:b:fvs", &long_options.3722, &v47);
            v88 = v13;
        }
    }
    char v361 = v82 ? 0: 1;
    char v362 = v82 < 0;
    char v363 = __parity__((unsigned char)v82);
    char v364 = (unsigned int)v82 < 0;
    char v365 = 0;
    char v366 = 0;
    if((v361 || v362 != 0)) {
        int v367 = /*NO_RETURN*/ print_error(-1, "please specify a valid action.\n");
    }
    char v368 = v82 == 1;
    char v369 = v82 < 1;
    char v370 = __parity__((unsigned char)v82 - 1);
    char v371 = (unsigned int)v82 < 1;
    char v372 = (int)(int*)((int)(int*)((int)(int*)(v82 - 1) ^ v82) & (int)(int*)(v82 ^ 0x1)) < 0;
    char v373 = (int*)((int)(int*)((int)(int*)((int)(int*)(v82 - 1) ^ (int)(int*)(v82 ^ 0x1)) >>> 4) & 0x1);
    if(!v368 && v369 == v372) {
        int v374 = /*NO_RETURN*/ print_error(-1, "please specify only one action.\n");
    }
    int v375 = "GEM_C_OPTS=%s";
    int v376 = &v10;
    int v377 = &v10;
    →sprintf(&GEM_C_OPTS, "GEM_C_OPTS=%s");
    →putenv(&GEM_C_OPTS);
    char v378 = v2 == 1;
    char v379 = v2 < 1;
    char v380 = __parity__((unsigned char)v2 - 1);
    char v381 = (unsigned int)v2 < 1;
    char v382 = (((v2 - 1) ^ v2) & (v2 ^ 0x1)) < 0;
    char v383 = (((v2 - 1) ^ (v2 ^ 0x1)) >>> 4) & 0x1;
    if(v378) {
        int v384 = /*NO_RETURN*/ show_help();
    }
    char v385 = v2 == 2;
    char v386 = v2 < 2;
    char v387 = __parity__((unsigned char)v2 - 2);
    char v388 = (unsigned int)v2 < 2;
    char v389 = (((v2 - 2) ^ v2) & (v2 ^ 0x2)) < 0;
    char v390 = (((v2 - 2) ^ (v2 ^ 0x2)) >>> 4) & 0x1;
    if(v385) {
        int v391 = /*NO_RETURN*/ show_version();
    }
    unsigned int v392 = VERBOSE;
    char v393 = v392 ? 0: 1;
    char v394 = v392 >= 0x80000000;
    char v395 = __parity__((unsigned char)v392);
    char v396 = 0;
    char v397 = 0;
    if(v393) {
        int v398 = "/tmp/grass.extension.log.XXXXXX";
        →memcpy(&TMP_NULL, "/tmp/grass.extension.log.XXXXXX", 32);
        →mkstemp(&TMP_NULL);
        v377 = 0x1ff;
        →open(&TMP_NULL, 64);
        int v399 = v13;
        char v400 = v399 == -1;
        char v401 = v399 < -1;
        char v402 = __parity__((unsigned char)v399 - 0xff);
        char v403 = (unsigned int)v399 < 0xffffffff;
        char v404 = (int)(int*)((int)(int*)((int)(int*)(v399 + 1) ^ v399) & ~v399) < 0;
        char v405 = (int*)((int)(int*)((int)(int*)((int)(int*)(v399 + 1) ^ ~v399) >>> 4) & 0x1);
        if(v400) {
            →__errno_location();
            int v406 = *(int*)v13;
            →strerror(v406);
            v377 = v13;
            int v407 = /*NO_RETURN*/ print_error(-30, "could not create temp file: %s");
        }
    }
    char v408 = v2 == 11;
    char v409 = v2 < 11;
    char v410 = __parity__((unsigned char)v2 - 11);
    char v411 = (unsigned int)v2 < 11;
    char v412 = (((v2 - 11) ^ v2) & (v2 ^ 0xb)) < 0;
    char v413 = (((v2 - 11) ^ (v2 ^ 0xb)) >>> 4) & 0x1;
    if(v408) {
        char v414 = v84 ? 0: 1;
        char v415 = v84 < 0;
        char v416 = __parity__((unsigned char)v84);
        char v417 = (unsigned int)v84 < 0;
        char v418 = 0;
        char v419 = 0;
        if(v414) {
            →getenv("GISBASE");
            v84 = v13;
            char v420 = v84 ? 0: 1;
            char v421 = v84 < 0;
            char v422 = __parity__((unsigned char)v84);
            char v423 = (unsigned int)v84 < 0;
            char v424 = 0;
            char v425 = 0;
            if(v420) {
                int v426 = /*NO_RETURN*/ print_error(-1, "GISBASE environment variable not set and path to GRASS not given.\n");
            }
        }
        unsigned int v427 = VERBOSE;
        char v428 = v427 ? 0: 1;
        char v429 = v427 >= 0x80000000;
        char v430 = __parity__((unsigned char)v427);
        char v431 = 0;
        char v432 = 0;
        if(!v428) {
            int v433 = "Path to GRASS is %s.\n";
            int v434 = stdout;
            int v435 = v84;
            v377 = v84;
            →fprintf(v434, "Path to GRASS is %s.\n");
        }
        int v436 = v14;
        int v437 = v84;
        int v438 = restore(v437, v436);
        /*NO_RETURN*/ →exit(0);
    }
    char v439 = v2 == 12;
    char v440 = v2 < 12;
    char v441 = __parity__((unsigned char)v2 - 12);
    char v442 = (unsigned int)v2 < 12;
    char v443 = (((v2 - 12) ^ v2) & (v2 ^ 0xc)) < 0;
    char v444 = (((v2 - 12) ^ (v2 ^ 0xc)) >>> 4) & 0x1;
    if(v439) {
        char v445 = v84 ? 0: 1;
        char v446 = v84 < 0;
        char v447 = __parity__((unsigned char)v84);
        char v448 = (unsigned int)v84 < 0;
        char v449 = 0;
        char v450 = 0;
        if(v445) {
            →getenv("GISBASE");
            v84 = v13;
            char v451 = v84 ? 0: 1;
            char v452 = v84 < 0;
            char v453 = __parity__((unsigned char)v84);
            char v454 = (unsigned int)v84 < 0;
            char v455 = 0;
            char v456 = 0;
            if(v451) {
                int v457 = /*NO_RETURN*/ print_error(-1, "GISBASE environment variable not set and path to GRASS not given.\n");
            }
        }
        unsigned int v458 = VERBOSE;
        char v459 = v458 ? 0: 1;
        char v460 = v458 >= 0x80000000;
        char v461 = __parity__((unsigned char)v458);
        char v462 = 0;
        char v463 = 0;
        if(!v459) {
            int v464 = "Path to GRASS is %s.\n";
            int v465 = stdout;
            int v466 = v84;
            v377 = v84;
            →fprintf(v465, "Path to GRASS is %s.\n");
        }
        int v467 = v84;
        int v468 = list_extensions(v467);
        /*NO_RETURN*/ →exit(0);
    }
    int v469 = &v6;
    →strstr(&v6, "http://");
    char v470 = v13 ? 0: 1;
    char v471 = v13 < 0;
    char v472 = __parity__((unsigned char)v13);
    char v473 = 0;
    char v474 = 0;
    if(v470) {
        int v475 = &v6;
        →strstr(&v6, "ftp://");
        char v476 = v13 ? 0: 1;
        char v477 = v13 < 0;
        char v478 = __parity__((unsigned char)v13);
        char v479 = 0;
        char v480 = 0;
        if(!v476) {
            goto loc_8053D3E;
        }
    }
    else {
    loc_8053D3E:
        int v481 = &v6;
        unsigned int v482 = wget_extension(&v6);
        →malloc(0x800);
        int v483 = v13;
        int v484 = &v6;
        int v485 = v483;
        →strcpy(v485, &v6);
        int v486 = v483;
        →strrchr(v486, 47);
        v29 = v13;
        int v487 = v13 + 1;
        char v488 = v487 ? 0: 1;
        char v489 = v487 < 0;
        char v490 = __parity__((unsigned char)v487);
        char v491 = (((v29 ^ 0x1) ^ v487) >>> 4) & 0x1;
        char v492 = (unsigned int)v29 >= 0xffffffff;
        char v493 = ((v29 ^ v487) & ~(v29 ^ 0x1)) < 0;
        int v494 = v487;
        int v495 = &v6;
        →strcpy(&v6, v494);
        int v496 = v483;
        →free(v496);
    }
    unsigned int v497 = VERBOSE;
    char v498 = v497 ? 0: 1;
    char v499 = v497 >= 0x80000000;
    char v500 = __parity__((unsigned char)v497);
    char v501 = 0;
    char v502 = 0;
    if(!v498) {
        int v503 = "Extension location is \'%s\'.\n";
        int v504 = stdout;
        int v505 = &v6;
        v377 = &v6;
        →fprintf(v504, "Extension location is \'%s\'.\n");
    }
    char v506 = v2 == 10;
    char v507 = v2 < 10;
    char v508 = __parity__((unsigned char)v2 - 10);
    char v509 = (unsigned int)v2 < 10;
    char v510 = (((v2 - 10) ^ v2) & (v2 ^ 0xa)) < 0;
    char v511 = (((v2 - 10) ^ (v2 ^ 0xa)) >>> 4) & 0x1;
    if(!v506) {
        int v512 = &v6;
        stat* ptr5 = &v22;
        int v513 = stat((char*)&v6, &v22);
        v1 = v513;
        char v514 = v1 ? 0: 1;
        char v515 = v1 < 0;
        char v516 = __parity__((unsigned char)v1);
        char v517 = (unsigned int)v1 < 0;
        char v518 = 0;
        char v519 = 0;
        if(v515) {
            →__errno_location();
            int v520 = *(int*)v13;
            →strerror(v520);
            v0 = v13;
            int v521 = &v6;
            int v522 = /*NO_RETURN*/ print_error(-2, "extension FILE or DIR \'%s\' invalid: %s\n");
        }
        int v523 = v20;
        unsigned int v524 = (unsigned int)(v523 & 0xf000);
        char v525 = v524 == 0x4000;
        char v526 = (int)v524 < 0x4000;
        char v527 = __parity__((unsigned char)v524);
        char v528 = v524 < 0x4000;
        char v529 = (((v524 - 0x4000) ^ v524) & (v524 ^ 0x4000)) < 0;
        char v530 = (((v524 - 0x4000) ^ (v524 ^ 0x4000)) >>> 4) & 0x1;
        if(v525) {
            v46 = 1;
            unsigned int v531 = VERBOSE;
            char v532 = v531 ? 0: 1;
            char v533 = v531 >= 0x80000000;
            char v534 = __parity__((unsigned char)v531);
            char v535 = 0;
            char v536 = 0;
            if(!v532) {
                int v537 = stdout;
                int v538 = stdout;
                int v539 = "Extension files stored in a directory.\n";
                →fwrite("Extension files stored in a directory.\n", 1, 39, v538);
            }
        }
        else {
            unsigned int v540 = VERBOSE;
            char v541 = v540 ? 0: 1;
            char v542 = v540 >= 0x80000000;
            char v543 = __parity__((unsigned char)v540);
            char v544 = 0;
            char v545 = 0;
            if(!v541) {
                int v546 = stdout;
                int v547 = stdout;
                int v548 = "Extension files stored in a package file.\n";
                →fwrite("Extension files stored in a package file.\n", 1, 42, v547);
            }
            int v549 = &v6;
            int v550 = unpack_extension(&v6);
            →opendir(&TMPDIR);
            int v551 = v13;
            int v552 = v13;
            →readdir(v552);
            int v553 = v13;
            unsigned int v554 = 0;
            while(1) {
                char v555 = v553 ? 0: 1;
                char v556 = v553 < 0;
                char v557 = __parity__((unsigned char)v553);
                char v558 = (unsigned int)v553 < 0;
                char v559 = 0;
                char v560 = 0;
                if(v555) {
                    break;
                }
                else {
                    int v561 = v553;
                    v29 = v553;
                    int v562 = v561 + 11;
                    char v563 = v562 ? 0: 1;
                    char v564 = v562 < 0;
                    char v565 = __parity__((unsigned char)v562);
                    char v566 = (((v29 ^ 0xb) ^ v562) >>> 4) & 0x1;
                    char v567 = (unsigned int)v29 >= 0xfffffff5;
                    char v568 = ((v562 ^ v29) & ~(v29 ^ 0xb)) < 0;
                    →strcmp(v562, &gvar_8057BBF);
                    char v569 = v13 ? 0: 1;
                    char v570 = v13 < 0;
                    char v571 = __parity__((unsigned char)v13);
                    char v572 = 0;
                    char v573 = 0;
                    if(!v569) {
                        int v574 = v553;
                        v29 = v553;
                        int v575 = v574 + 11;
                        char v576 = v575 ? 0: 1;
                        char v577 = v575 < 0;
                        char v578 = __parity__((unsigned char)v575);
                        char v579 = (((v29 ^ 0xb) ^ v575) >>> 4) & 0x1;
                        char v580 = (unsigned int)v29 >= 0xfffffff5;
                        char v581 = ((v575 ^ v29) & ~(v29 ^ 0xb)) < 0;
                        →strcmp(v575, &gvar_8057BC1);
                        char v582 = v13 ? 0: 1;
                        char v583 = v13 < 0;
                        char v584 = __parity__((unsigned char)v13);
                        char v585 = 0;
                        char v586 = 0;
                        if(!v582) {
                            int v587 = v553;
                            int v588 = v587 + 11;
                            int v589 = "%s/%s";
                            v0 = v588;
                            v377 = &TMPDIR;
                            int v590 = v69;
                            →sprintf(v590, "%s/%s");
                            char* __file = (char*)v69;
                            stat* ptr6 = &v16;
                            int v591 = stat(__file, &v16);
                            int v592 = v15;
                            unsigned int v593 = (unsigned int)(v592 & 0xf000);
                            char v594 = v593 == 0x4000;
                            char v595 = (int)v593 < 0x4000;
                            char v596 = __parity__((unsigned char)v593);
                            char v597 = v593 < 0x4000;
                            char v598 = (((v593 - 0x4000) ^ v593) & (v593 ^ 0x4000)) < 0;
                            char v599 = (((v593 - 0x4000) ^ (v593 ^ 0x4000)) >>> 4) & 0x1;
                            if(v594) {
                                v554 = 1;
                                break;
                            }
                        }
                    }
                    int v600 = v551;
                    →readdir(v600);
                    v553 = v13;
                }
            }
            int v601 = v69;
            int v602 = &v6;
            →strcpy(&v6, v601);
            char v603 = v554 ? 0: 1;
            char v604 = v554 >= 0x80000000;
            char v605 = __parity__((unsigned char)v554);
            char v606 = v554 < 0;
            char v607 = 0;
            char v608 = 0;
            if(v603) {
                int v609 = /*NO_RETURN*/ print_error(-7, "no top-level directory found in extension package.\n");
            }
        }
    }
    char v610 = v2 == 10;
    char v611 = v2 < 10;
    char v612 = __parity__((unsigned char)v2 - 10);
    char v613 = (unsigned int)v2 < 10;
    char v614 = (((v2 - 10) ^ v2) & (v2 ^ 0xa)) < 0;
    char v615 = (((v2 - 10) ^ (v2 ^ 0xa)) >>> 4) & 0x1;
    if(v610) {
        int v616 = &v6;
        int v617 = &v11;
        →strcpy(&v11, &v6);
    }
    else {
        int v618 = &v11;
        int v619 = &v6;
        int v620 = get_package_name(&v6, &v11);
    }
    char v621 = v82 ? 0: 1;
    char v622 = v82 < 0;
    char v623 = __parity__((unsigned char)v82);
    char v624 = (unsigned int)v82 < 0;
    char v625 = 0;
    char v626 = 0;
    if(!v621 && v622 == 0) {
        char v627 = v84 ? 0: 1;
        char v628 = v84 < 0;
        char v629 = __parity__((unsigned char)v84);
        char v630 = (unsigned int)v84 < 0;
        char v631 = 0;
        char v632 = 0;
        if(v627) {
            →getenv("GISBASE");
            v84 = v13;
        }
        int v633 = v84;
        int v634 = v83;
        int v635 = v2;
        int v636 = &v6;
        int v637 = run_post((char*)&v6, v635, v634, v633);
    }
    unsigned int v638 = VERBOSE;
    char v639 = v638 ? 0: 1;
    char v640 = v638 >= 0x80000000;
    char v641 = __parity__((unsigned char)v638);
    char v642 = 0;
    char v643 = 0;
    if(!v639) {
        int v644 = "Extension will be installed from \'%s\'\n";
        int v645 = stdout;
        int v646 = &v6;
        →fprintf(v645, "Extension will be installed from \'%s\'\n");
    }
    char v647 = v2 == 10;
    char v648 = v2 < 10;
    char v649 = __parity__((unsigned char)v2 - 10);
    char v650 = (unsigned int)v2 < 10;
    char v651 = (((v2 - 10) ^ v2) & (v2 ^ 0xa)) < 0;
    char v652 = (((v2 - 10) ^ (v2 ^ 0xa)) >>> 4) & 0x1;
    if(!v647) {
        int* ptr7 = &v18;
        int v653 = &v17;
        int v654 = &ptr0;
        int v655 = &v12;
        int v656 = &v6;
        int v657 = check_extension(&v6, &v12, &ptr0, &v17, &v18);
    }
    char v658 = v2 == 5;
    char v659 = v2 < 5;
    char v660 = __parity__((unsigned char)v2 - 5);
    char v661 = (unsigned int)v2 < 5;
    char v662 = (((v2 - 5) ^ v2) & (v2 ^ 0x5)) < 0;
    char v663 = (((v2 - 5) ^ (v2 ^ 0x5)) >>> 4) & 0x1;
    if(v658) {
        int v664 = v18;
        int v665 = v17;
        int* ptr8 = ptr0;
        int v666 = &v7;
        int v667 = &v9;
        v21 = &v11;
        int v668 = &v12;
        int v669 = &v6;
        int v670 = /*NO_RETURN*/ query_extension((char*)&v6, (char*)&v12, ptr8, v665, v664, &v11, (char*)&v9, (int*)&v7);
    }
    char v671 = v2 == 9;
    char v672 = v2 < 9;
    char v673 = __parity__((unsigned char)v2 - 9);
    char v674 = (unsigned int)v2 < 9;
    char v675 = (((v2 - 9) ^ v2) & (v2 ^ 0x9)) < 0;
    char v676 = (((v2 - 9) ^ (v2 ^ 0x9)) >>> 4) & 0x1;
    if(v671) {
        int v677 = &v6;
        int v678 = /*NO_RETURN*/ show_details((char*)&v6);
    }
    char v679 = v2 == 7;
    char v680 = v2 < 7;
    char v681 = __parity__((unsigned char)v2 - 7);
    char v682 = (unsigned int)v2 < 7;
    char v683 = (((v2 - 7) ^ v2) & (v2 ^ 0x7)) < 0;
    char v684 = (((v2 - 7) ^ (v2 ^ 0x7)) >>> 4) & 0x1;
    if(v679) {
        int v685 = &v6;
        int v686 = /*NO_RETURN*/ show_license((char*)&v6);
    }
    char v687 = v2 == 6;
    char v688 = v2 < 6;
    char v689 = __parity__((unsigned char)v2 - 6);
    char v690 = (unsigned int)v2 < 6;
    char v691 = (((v2 - 6) ^ v2) & (v2 ^ 0x6)) < 0;
    char v692 = (((v2 - 6) ^ (v2 ^ 0x6)) >>> 4) & 0x1;
    if(v687) {
        int v693 = &v6;
        unsigned int v694 = source_clean((char*)&v6);
        /*NO_RETURN*/ →exit(0);
    }
    char v695 = v84 ? 0: 1;
    char v696 = v84 < 0;
    char v697 = __parity__((unsigned char)v84);
    char v698 = (unsigned int)v84 < 0;
    char v699 = 0;
    char v700 = 0;
    if(v695) {
        →getenv("GISBASE");
        v84 = v13;
        char v701 = v84 ? 0: 1;
        char v702 = v84 < 0;
        char v703 = __parity__((unsigned char)v84);
        char v704 = (unsigned int)v84 < 0;
        char v705 = 0;
        char v706 = 0;
        if(v701) {
            int v707 = /*NO_RETURN*/ print_error(-1, "GISBASE environment variable not set and path to GRASS not given.\n");
        }
    }
    unsigned int v708 = VERBOSE;
    char v709 = v708 ? 0: 1;
    char v710 = v708 >= 0x80000000;
    char v711 = __parity__((unsigned char)v708);
    char v712 = 0;
    char v713 = 0;
    if(!v709) {
        int v714 = "Path to GRASS is %s.\n";
        int v715 = stdout;
        int v716 = v84;
        →fprintf(v715, "Path to GRASS is %s.\n");
    }
    →getenv("GRASS_VERSION");
    v14 = v13;
    char v717 = v14 ? 0: 1;
    char v718 = v14 < 0;
    char v719 = __parity__((unsigned char)v14);
    char v720 = (unsigned int)v14 < 0;
    char v721 = 0;
    char v722 = 0;
    if(v717) {
        int v723 = "%s/etc/VERSIONNUMBER";
        int v724 = v84;
        int v725 = &v8;
        →sprintf(&v8, "%s/etc/VERSIONNUMBER");
        int v726 = &gvar_80578DE;
        int v727 = &v8;
        →fopen(&v8, &gvar_80578DE);
        int v728 = v13;
        char v729 = v728 ? 0: 1;
        char v730 = v728 < 0;
        char v731 = __parity__((unsigned char)v728);
        char v732 = (unsigned int)v728 < 0;
        char v733 = 0;
        char v734 = 0;
        if(v729) {
            int v735 = /*NO_RETURN*/ print_error(-11, "Could not read GRASS version. Did you specify the right path?\n");
        }
        →malloc(16);
        v14 = v13;
        int v736 = &gvar_8057C8B;
        int v737 = v14;
        int v738 = &gvar_8057C8B;
        int v739 = v728;
        →__isoc99_fscanf();
        v1 = v13;
        int v740 = v728;
        →fclose(v740);
        char v741 = v1 ? 0: 1;
        char v742 = v1 < 0;
        char v743 = __parity__((unsigned char)v1);
        char v744 = (unsigned int)v1 < 0;
        char v745 = 0;
        char v746 = 0;
        if((v741 || v742 != 0)) {
            int v747 = /*NO_RETURN*/ print_error(-11, "Could not read GRASS version. Did you specify the right path?\n");
        }
    }
    char v748 = v14 ? 0: 1;
    char v749 = v14 < 0;
    char v750 = __parity__((unsigned char)v14);
    char v751 = (unsigned int)v14 < 0;
    char v752 = 0;
    char v753 = 0;
    if(!v748) {
        int v754 = v14;
        →strdup(v754);
        v69 = v13;
        int v755 = &gvar_8057BBF;
        int v756 = v69;
        →strtok(v756, &gvar_8057BBF);
        int v757 = v13;
        int v758 = &gvar_8057BBF;
        →strtok(0, &gvar_8057BBF);
        int v759 = v13;
        int v760 = &gvar_8057BBF;
        →strtok(0, &gvar_8057BBF);
        int v761 = v13;
        int v762 = v757;
        →strtol(v762, 0, 10);
        int v763 = v13;
        int v764 = v759;
        →strtol(v764, 0, 10);
        int v765 = v13;
        int v766 = v761;
        →strtol(v766, 0, 10);
        int v767 = v13;
        →malloc(0x800);
        v14 = v13;
        int v768 = "%i.%i.%i";
        int v769 = v767;
        int v770 = v767;
        int v771 = v765;
        v0 = v765;
        int v772 = v763;
        int v773 = v14;
        →sprintf(v773, "%i.%i.%i");
        unsigned int v774 = VERBOSE;
        char v775 = v774 ? 0: 1;
        char v776 = v774 >= 0x80000000;
        char v777 = __parity__((unsigned char)v774);
        char v778 = 0;
        char v779 = 0;
        if(!v775) {
            int v780 = "GRASS version is %s.\n";
            int v781 = stdout;
            int v782 = v14;
            →fprintf(v781, "GRASS version is %s.\n");
        }
        char v783 = v763 == 5;
        char v784 = v763 < 5;
        char v785 = __parity__((unsigned char)v763 - 5);
        char v786 = (unsigned int)v763 < 5;
        char v787 = (((v763 - 5) ^ v763) & (v763 ^ 0x5)) < 0;
        char v788 = (((v763 - 5) ^ (v763 ^ 0x5)) >>> 4) & 0x1;
        if((v783 || v784 != v787)) {
            int v789 = /*NO_RETURN*/ print_error(-11, "extensions only work with GRASS version 6 and above.\n");
        }
    }
    int v790 = "-L%s/lib -I/usr/local/grasslib/include/ ";
    int v791 = v84;
    v377 = v84;
    int v792 = &v10;
    →sprintf(&v10, "-L%s/lib -I/usr/local/grasslib/include/ ");
    char v793 = v2 == 3;
    char v794 = v2 < 3;
    char v795 = __parity__((unsigned char)v2 - 3);
    char v796 = (unsigned int)v2 < 3;
    char v797 = (((v2 - 3) ^ v2) & (v2 ^ 0x3)) < 0;
    char v798 = (((v2 - 3) ^ (v2 ^ 0x3)) >>> 4) & 0x1;
    if(v793) {
        unsigned int v799 = (unsigned int)v18;
        unsigned int v800 = (unsigned int)v17;
        unsigned int v801 = (unsigned int)ptr0;
        v21 = v14;
        int v802 = &v11;
        char* ptr9 = (char*)v84;
        int v803 = &v6;
        int v804 = source_install((char*)&v6, ptr9, &v11, v801, v800, v799, v21);
        /*NO_RETURN*/ →exit(0);
    }
    char v805 = v2 == 10;
    char v806 = v2 < 10;
    char v807 = __parity__((unsigned char)v2 - 10);
    char v808 = (unsigned int)v2 < 10;
    char v809 = (((v2 - 10) ^ v2) & (v2 ^ 0xa)) < 0;
    char v810 = (((v2 - 10) ^ (v2 ^ 0xa)) >>> 4) & 0x1;
    if(v805) {
        int v811 = v14;
        int v812 = v84;
        int v813 = &v11;
        int v814 = &v6;
        int v815 = uninstall(&v6, &v11, v812, v811);
        /*NO_RETURN*/ →exit(0);
    }
    char v816 = v2 == 8;
    char v817 = v2 < 8;
    char v818 = __parity__((unsigned char)v2 - 8);
    char v819 = (unsigned int)v2 < 8;
    char v820 = (((v2 - 8) ^ v2) & (v2 ^ 0x8)) < 0;
    char v821 = (((v2 - 8) ^ (v2 ^ 0x8)) >>> 4) & 0x1;
    if(v816) {
        unsigned int v822 = (unsigned int)v18;
        unsigned int v823 = (unsigned int)v17;
        unsigned int v824 = (unsigned int)ptr0;
        v21 = v14;
        int v825 = &v11;
        char* ptr10 = (char*)v84;
        int v826 = &v6;
        int v827 = test_install((char*)&v6, ptr10, &v11, v824, v823, v822, v21);
        /*NO_RETURN*/ →exit(0);
    }
    char v828 = v2 == 4;
    char v829 = v2 < 4;
    char v830 = __parity__((unsigned char)v2 - 4);
    char v831 = (unsigned int)v2 < 4;
    char v832 = (((v2 - 4) ^ v2) & (v2 ^ 0x4)) < 0;
    char v833 = (((v2 - 4) ^ (v2 ^ 0x4)) >>> 4) & 0x1;
    if(v828) {
        int v834 = v83;
        int v835 = &v6;
        int v836 = binaries_exist(&v6, v834);
        v828 = v836 ? 0: 1;
        v829 = v836 < 0;
        v830 = __parity__((unsigned char)v836);
        v832 = 0;
        v831 = 0;
        if(!v828) {
            unsigned int v837 = (unsigned int)v18;
            unsigned int v838 = (unsigned int)v17;
            unsigned int v839 = (unsigned int)ptr0;
            v21 = v14;
            int v840 = &v11;
            int* ptr11 = (int*)v83;
            char* ptr12 = (char*)v84;
            int v841 = &v6;
            int v842 = bin_install((char*)&v6, ptr12, ptr11, &v11, v839, v838, v837, v21);
            /*NO_RETURN*/ →exit(0);
        }
        int v843 = v83;
        v377 = v83;
        int v844 = /*NO_RETURN*/ print_error(-12, "no binaries for system \'%s\'\n");
    }
    ptr3 = &ptr1;
    /*NO_RETURN*/ →exit(0);
}

int mkdir_s(int param0, int param1) {
    char v0;
    int v1 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →sprintf(&v0, "mkdir %s --mode=%s -p");
    →system(&v0);
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v1;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int nc_fgets(int param0, int param1, int param2) {
    int result;
    int v0;
    →fgets(param0, param1, param2);
    if(!v0) {
        result = 0;
    }
    else {
        →strchr(param0, 35);
        if(!v0) {
        loc_8049E0F:
            result = param0;
        }
        else if(v0 == param0) {
            result = nc_fgets(param0, param1, param2);
        }
        else {
            →malloc(0x800);
            →strcpy(v0, param0);
            →strtok(v0, &gvar_8054AB0);
            →sprintf(param0, &gvar_8054AB2);
            →free(v0);
            goto loc_8049E0F;
        }
    }
    return result;
}

int nc_fgets_html(int param0, int param1, int param2) {
    unsigned int v0;
    int result;
    int v1;
    →fgets(param0, param1, param2);
    if(!v1) {
        result = 0;
    }
    else {
        →strlen(param0);
        →malloc(v1 + 1);
        int v2 = v1;
        →strlen(param0);
        →malloc(v1 + 1);
        int v3 = v1;
        int v4 = v2;
        for(int i = param0; *(char*)i; ++i) {
            if(*(char*)i == 60) {
                int v5 = i;
                int v6 = v3;
                --i;
                if((unsigned int)i >= (unsigned int)param0) {
                    v0 = *(char*)i == 32 ? 1: 0;
                }
                while(*(char*)v5) {
                    *(char*)v6 = *(char*)v5;
                    *(char*)v6 = *(char*)v6 + 1;
                    if(*(char*)v5 != 62) {
                        goto loc_804A02C;
                    }
                    else {
                        *(char*)v6 = 0;
                        unsigned char* ptr0 = (unsigned char*)(v5 + 1);
                        if(*ptr0 != 10) {
                            →strstr(v3, "<br>");
                            if(v1 && (unsigned int)v4 > (unsigned int)v2) {
                                *(char*)v4 = 10;
                                *(char*)v4 = *(char*)v4 + 1;
                            }
                            →strstr(v3, "<BR>");
                            if(v1 && (unsigned int)v4 > (unsigned int)v2) {
                                *(char*)v4 = 10;
                                *(char*)v4 = *(char*)v4 + 1;
                            }
                            →strstr(v3, &gvar_8054AC0);
                            if(v1) {
                                if((unsigned int)v4 > (unsigned int)v2) {
                                    *(char*)v4 = 10;
                                    *(char*)v4 = *(char*)v4 + 1;
                                }
                                *(char*)v4 = 10;
                                *(char*)v4 = *(char*)v4 + 1;
                            }
                            →strstr(v3, &gvar_8054AC4);
                            if(v1) {
                                if((unsigned int)v4 > (unsigned int)v2) {
                                    *(char*)v4 = 10;
                                    *(char*)v4 = *(char*)v4 + 1;
                                }
                                *(char*)v4 = 10;
                                *(char*)v4 = *(char*)v4 + 1;
                            }
                        }
                        i = v5;
                    }
                    if(*(char*)i == 32 && v0 == 1) {
                        ++i;
                        v0 = 0;
                        break;
                    loc_804A02C:
                        ++v5;
                    }
                    else {
                        break;
                    }
                }
            }
            if(*(char*)i != 62) {
                *(char*)v4 = *(char*)i;
                ++v4;
            }
        }
        *(char*)v4 = 0;
        →strcpy(param0, v2);
        →free(v2);
        →free(v3);
        →strchr(param0, 35);
        int v7 = v1;
        if(!v7) {
        loc_804A141:
            result = param0;
        }
        else if(v7 == param0) {
            result = nc_fgets_html(param0, param1, param2);
        }
        else {
            →malloc(0x800);
            v2 = v1;
            →strcpy(v2, param0);
            →strtok(v2, &gvar_8054AB0);
            v2 = v1;
            →sprintf(param0, &gvar_8054AB2);
            →free(v2);
            goto loc_804A141;
        }
    }
    return result;
}

int nc_fgets_nb(int param0, int param1, int param2) {
    int result;
    int v0;
    →fgets(param0, param1, param2);
    if(!v0) {
        result = 0;
    }
    else {
        int v1 = is_text(param0);
        if(!v1) {
            result = nc_fgets_nb(param0, param1, param2);
        }
        else {
            →strchr(param0, 35);
            if(!v0) {
            loc_804A2C3:
                result = param0;
            }
            else if(v0 == param0) {
                result = nc_fgets_nb(param0, param1, param2);
            }
            else {
                →malloc(0x800);
                →strcpy(v0, param0);
                →strtok(v0, &gvar_8054AB0);
                →sprintf(param0, &gvar_8054AB2);
                →free(v0);
                goto loc_804A2C3;
            }
        }
    }
    return result;
}

unsigned int new_ext_html(int param0, int param1, int param2, int param3, int param4, int param5) {
    char v0;
    unsigned int result;
    int v1 = param0;
    int v2 = param1;
    int v3 = param2;
    int v4 = *(int*)(__GS_BASE + (int)(int*)0x14);
    unsigned int v5 = find_pos("<b>Drivers sections:</b>", v3, 0);
    if(v5 >= 0x80000000) {
        v5 = find_pos("<!-- GEM Extensions StartHTML. Do not delete or change this comment! -->", v3, 0);
        if(v5 < 0x80000000) {
            goto loc_804E1B5;
        }
        else {
            print_warning("Unknown format of index.html. Unable to register HTML man pages.\n");
        }
    }
    else {
    loc_804E1B5:
        unsigned int v6 = find_pos("<hr>", v3, v5);
        unsigned int v7 = find_pos("<h3>Installed extensions:</h3>", v3, v5);
        if(v7 == -1) {
            insert_str("<h3>Installed extensions:</h3>\n", v6, v3);
            insert_str("<ul>\n", v6 + 1, v3);
            insert_str("</ul>\n", v6 + 2, v3);
            insert_str("<p>\n", v6 + 3, v3);
        }
        unsigned int v8 = find_pos("<h3>Installed extensions:</h3>", v3, v5);
        unsigned int v9 = find_pos("</ul>", v3, v8);
        unsigned int v10 = v8 + 2;
        int v11 = v1;
        →sprintf(&v0, "\">%s");
        unsigned int v12 = find_pos(&v0, v3, v10);
        if(v12 != -1) {
            int v13 = v1;
            print_warning("list item \'%s\' exists in index.html.\n");
            if(FORCE && UPGRADE) {
                int v14 = param5;
                int v15 = param4;
                int v16 = param3;
                int v17 = v1;
                v11 = v1;
                →sprintf(&v0, "<li><a href=\"../extensions/%s/index.html\">%s (%i.%i.%i)</a>\n");
                →strcpy(*(int*)(v12 * 4 + v3), &v0);
            }
        }
        else {
            v12 = find_pos("<li><a href=", v3, v8);
            while((v12 != -1 && (int)v9 > (int)v12)) {
                →strrchr(*(int*)(v12 * 4 + v3), 34);
                unsigned int v18 = result;
                →strrchr(*(int*)(v12 * 4 + v3), 60);
                unsigned int v19 = result;
                int v20 = (int)(result - v18);
                →strncpy(&v0, (int)(v18 + 2), v20);
                *(char*)(v20 - 1 + &v0) = 0;
                →strcmp(v1, &v0);
                if(result >= 0x80000000) {
                    v10 = v12;
                    break;
                }
                else {
                    ++v8;
                    v12 = find_pos("<li><a href=", v3, v8);
                }
            }
            →sprintf(&v0, "<li><a href=\"../extensions/%s/index.html\">%s (%i.%i.%i)</a>\n");
            insert_str(&v0, v10, v3);
        }
    }
    result = (unsigned int)(*(int*)(__GS_BASE + (int)(int*)0x14) ^ v4);
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int new_item(int param0, int param1, int param2, unsigned int param3) {
    char v0;
    char v1;
    char v2;
    int result;
    int v3 = param0;
    int v4 = param2;
    int v5 = *(int*)(__GS_BASE + (int)(int*)0x14);
    chop(param0);
    →strtok(param0, &gvar_8055341);
    int v6 = result;
    if(!v6) {
        print_warning("invalid token in \'entries-gisman\'.\n");
        result = -1;
    }
    else {
        →strcpy(&v0, v6);
        unsigned int i;
        for(i = 0; v6; ++i) {
            →strtok(0, &gvar_8055341);
            v6 = result;
            if(v6) {
                →strcpy(&v1, v6);
            }
        }
        if((int)i > 2) {
            print_warning("invalid number of tokens (%i) in \'entries-gisman\'.\n");
            result = -1;
        }
        else {
            →strcmp(&v0, &gvar_805539C);
            if(!result) {
                →strcmp(&v0, &gvar_805539C);
                if(result) {
                    goto loc_804C5B2;
                }
                else {
                    →memcpy(&v2, " \t\t\t {separator}\n", 18);
                }
            }
            else {
            loc_804C5B2:
                →sprintf(&v2, " \t\t\t {command \"%s\" {} \"%s\" {} -command {%s }}\n");
            }
            insert_str(&v2, param3, param2);
            result = (int)(param3 + 1);
        }
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v5)) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

unsigned int new_submenu(int param0, int param1, int param2) {
    unsigned int result;
    char v0;
    char v1;
    char v2;
    int v3;
    int v4 = v3;
    int v5 = param0;
    int v6 = param1;
    int v7 = param2;
    int v8 = *(int*)(__GS_BASE + (int)(int*)0x14);
    unsigned int v9 = find_pos("\"&Xtns\" all options", v7, 0);
    unsigned int v10 = find_pos("\" all options", v7, v9 + 1);
    unsigned int v11 = v10 - 1;
    if(v11 == -1) {
        v11 = find_pos(&gvar_8055212, v7, 0);
    }
    int v12 = is_submenu(v6);
    if(!v12) {
        print_warning("first line not a submenu specifier in \'entries-gisman\'.\n");
        result = 0xffffffff;
    }
    else {
        /*BAD_CALL!*/ →strrchr(v6, 93);
        →strchr(v6, 91);
        int v13 = 0;
        →strchr(v6, 91);
        →strncpy(&v0, (int)(result + 1), 0);
        *(char*)(&v0 - 1) = 0;
        int v14 = &v0;
        →sprintf(&v2, "{cascad \"%s\"");
        unsigned int v15 = find_pos(&v2, v7, v9);
        if(v15 != -1 && (int)v11 > (int)v15) {
            print_warning("submenu \'%s\' exists in GIS Manager\'s Xtns menu.\n");
            result = 0xffffffff;
        }
        else {
            unsigned int v16 = v9 + 1;
            v15 = find_pos("{cascad ", v7, v9);
            while((v15 != -1 && (int)v11 > (int)v15)) {
                →strchr(*(int*)(v15 * 4 + v7), 34);
                unsigned int v17 = result;
                →strchr((int)(v17 + 1), 34);
                unsigned int v18 = result;
                v13 = (int)(v18 - v17);
                →strncpy(&v1, (int)(v17 + 1), v13);
                *(char*)(v13 - 1 + &v1) = 0;
                →strcmp(&v0, &v1);
                if(result >= 0x80000000) {
                    v16 = v15;
                    break;
                }
                else {
                    ++v9;
                    v15 = find_pos("{cascad ", v7, v9);
                }
            }
            →sprintf(&v0, " \t\t\t%s {} \"\" 1 {\n");
            insert_str(&v0, v16, v7);
            insert_str(" \t\t\t}}\n", v16 + 1, v7);
            unsigned int v19 = find_pos(&gvar_8055212, v7, 0);
            →sprintf(&v0, "#(DO_NOT_REMOVE_THIS_COMMENT) <%s> %s {} \"\" 1 {\n");
            insert_str(&v0, v19 + 1, v7);
            result = v16 + 1;
        }
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v8)) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int print_cfg() {
    char v0;
    int result;
    int v1 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →fopen("config.msg", &gvar_8055E6B);
    int v2 = result;
    if(v2) {
        →fwrite("\nResult of configuration: \n", 1, 27, stdout);
        while(1) {
            →fgets(&v0, 0x800, v2);
            if(!result) {
                break;
            }
            else {
                →fputs(&v0, stdout);
            }
        }
        →fputc(10, stdout);
    }
    →remove("config.msg");
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v1;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int print_done() {
    int result;
    →fwrite(&gvar_80549EE, 1, 17, stdout);
    return result;
}

int print_error(int param0, int param1) {
    char v0;
    char v1;
    int v2;
    char v3;
    int v4;
    int v5;
    int* ptr0 = &v4;
    int* ptr1 = &v4;
    char v6 = &v0 == 2108;
    char v7 = (int)&v5 < 0;
    char v8 = __parity__((unsigned char)&v0 - 60);
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v4 ^ 0x838) ^ (int)&v5) >>> 4) & 0x1);
    char v10 = (unsigned int)&v4 < 2104;
    char v11 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&v5) & (int)(int*)((int)&v4 ^ 0x838)) < 0;
    int v12 = param1;
    int v13 = param1;
    int v14 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v15 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v16 = 0;
    char v17 = 1;
    char v18 = 0;
    char v19 = 1;
    char v20 = 0;
    char v21 = 0;
    int v22 = &v3;
    int v23 = &v3;
    int v24 = &v3;
    int v25 = v13;
    int v26 = &v1;
    →vsprintf(&v1, v25, v24);
    int v27 = &gvar_80549C0;
    int v28 = stderr;
    int v29 = &v1;
    int v30 = &v1;
    →fprintf(v28, &gvar_80549C0);
    int v31 = param0;
    ERROR = param0;
    int __status = param0;
    int* ptr2 = &v2;
    /*NO_RETURN*/ →exit(__status);
}

int print_warning(int param0) {
    char v0;
    char v1;
    int v2 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →vsprintf(&v0, param0, &v1);
    →fprintf(stderr, &gvar_80549D6);
    ++WARNINGS;
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v2;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int query_extension(char* param0, char* param1, int* param2, int param3, int param4, int param5, char* param6, int* param7) {
    char v0;
    char v1;
    void* ptr0;
    int* ptr1;
    int v2;
    int v3;
    int* ptr2 = &v2;
    int* ptr3 = &v2;
    char v4 = &v0 == 2140;
    char v5 = (int)&v3 < 0;
    char v6 = __parity__((unsigned char)&v0 - 92);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v2 ^ 0x858) ^ (int)&v3) >>> 4) & 0x1);
    char v8 = (unsigned int)&v2 < 0x858;
    char v9 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v3) & (int)(int*)((int)&v2 ^ 0x858)) < 0;
    char* ptr4 = param0;
    char* ptr5 = param0;
    char* ptr6 = param1;
    char* ptr7 = param1;
    int v10 = param5;
    int v11 = param5;
    char* ptr8 = param6;
    char* ptr9 = param6;
    int* ptr10 = param7;
    int* ptr11 = param7;
    int v12 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v13 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v14 = 0;
    char v15 = 1;
    char v16 = 0;
    char v17 = 1;
    char v18 = 0;
    char v19 = 0;
    char* __filename = ptr5;
    char* ptr12 = basename(__filename);
    int v20 = &v1;
    →strcpy(&v1, (int)ptr12);
    int v21 = &v1;
    →chdir(&v1);
    int* ptr13 = ptr1;
    char v22 = ptr13 ? 0: 1;
    char v23 = (int)ptr13 < 0;
    char v24 = __parity__((unsigned char)ptr13);
    char v25 = (unsigned int)ptr13 < 0;
    char v26 = 0;
    char v27 = 0;
    if(v23) {
        →__errno_location();
        int v28 = *ptr1;
        →strerror(v28);
        char* ptr14 = ptr5;
        int v29 = /*NO_RETURN*/ print_error(-2, "extension \'%s\' not accessible: %s\n");
    }
    int v30 = "\nExtension \'%s\', version %i.%i.%i\n\n";
    int v31 = stdout;
    int v32 = param4;
    int v33 = param4;
    int v34 = param3;
    int v35 = param3;
    int* ptr15 = param2;
    char* ptr16 = ptr7;
    →fprintf(v31, "\nExtension \'%s\', version %i.%i.%i\n\n");
    int v36 = dump_ascii("description", "Description");
    int v37 = dump_ascii("commands", "Commands provided");
    int v38 = dump_ascii("libs", "Libraries provided");
    int v39 = dump_ascii("headers", "Header files provided");
    int v40 = dump_ascii("depends", "Dependencies");
    int v41 = dump_ascii("bugs", "Bugs");
    int v42 = "../%s";
    char* ptr17 = ptr5;
    int v43 = &v1;
    →sprintf(&v1, "../%s");
    int v44 = &v1;
    int v45 = list_binaries(&v1);
    int v46 = dump_ascii("authors", "Author(s)");
    int v47 = "Type \'%s -d %s\' to see more detailed information.\n";
    int v48 = stdout;
    int* ptr18 = ptr11;
    char* ptr19 = ptr9;
    →fprintf(v48, "Type \'%s -d %s\' to see more detailed information.\n");
    int v49 = "Type \'%s -l %s\' to see copyright information.\n";
    int v50 = stdout;
    int* ptr20 = ptr11;
    int* ptr21 = ptr11;
    char* ptr22 = ptr9;
    char* ptr23 = ptr9;
    →fprintf(v50, "Type \'%s -l %s\' to see copyright information.\n");
    →system("sh post");
    int* ptr24 = &ptr0;
    /*NO_RETURN*/ →exit(0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int register_entries_gisman(int param0, int param1) {
    unsigned int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    char v8;
    char v9;
    char v10;
    int v11;
    int result;
    int v12 = v11;
    int v13 = param0;
    int v14 = param1;
    int v15 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →memcpy(&v8, "../entries-gisman", 18);
    →fopen(&v8, &gvar_80553F1);
    int v16 = result;
    if(!v16) {
        →__errno_location();
        if(*(unsigned int*)result != 2) {
            →fclose(0);
            →__errno_location();
            →strerror(*(int*)result);
            v7 = result;
            /*NO_RETURN*/ print_error(-21, "checking for file \'%s\': %s\n");
        }
    }
    else {
        int v17 = v14;
        →sprintf(&v8, "%s/etc/dm/menu.tcl");
        →fopen(&v8, &gvar_80553F1);
        int v18 = result;
        if(!v18) {
            →__errno_location();
            if(*(unsigned int*)result != 2) {
                →fclose(0);
                →__errno_location();
                →strerror(*(int*)result);
                v7 = result;
                v17 = &v8;
                /*NO_RETURN*/ print_error(-21, "checking for file \'%s\': %s\n");
            }
        }
        else {
            →memcpy(&TMP_GISMAN, "/tmp/grass.extensions.db.XXXXXX", 32);
            →mkstemp(&TMP_GISMAN);
            →fopen(&TMP_GISMAN, &gvar_8055444);
            int v19 = result;
            if(!v19) {
                →__errno_location();
                →strerror(*(int*)result);
                /*NO_RETURN*/ print_error(-21, "could not create temp file \'%s\': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
            }
            atexit((void __cdecl (*_)())&exit_db);
            if(VERBOSE) {
                v6 = v14;
                v5 = v14;
                v4 = &TMP_GISMAN;
                v3 = v14;
                v2 = v14;
                v1 = v13;
                v7 = v14;
                v17 = v14;
                →sprintf(&v9, "mkdir --verbose %s/etc/dm/gem-entries ; cp -vf ../entries-gisman %s/etc/dm/gem-entries/%s ; \t\t\t\t\tcp -vf %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak ; \t\t\t\t\tcp -vf %s %s/etc/dm/menu.tcl ; chmod -v a+r %s/etc/dm/menu.tcl ;");
            }
            else {
                int v20 = &TMP_NULL;
                int v21 = v14;
                int v22 = &TMP_NULL;
                int v23 = v14;
                int v24 = &TMP_GISMAN;
                v6 = &TMP_NULL;
                v5 = v14;
                v4 = v14;
                v3 = &TMP_NULL;
                v2 = v13;
                v1 = v14;
                v7 = &TMP_NULL;
                v17 = v14;
                →sprintf(&v9, "mkdir %s/etc/dm/gem-entries &> %s ; cp -f ../entries-gisman %s/etc/dm/gem-entries/%s &> %s ; \t\t\t\t\tcp -f %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak &> %s ; \t\t\t\t\tcp -f %s %s/etc/dm/menu.tcl &> %s ; chmod a+r %s/etc/dm/menu.tcl &> %s ;");
            }
            →strcpy(&GISMAN_CMD, &v9);
            unsigned int v25 = 0;
            while(1) {
                →fgets(&v9, 0x800, v16);
                if(!result) {
                    break;
                }
                else {
                    ++v25;
                }
            }
            if(v25) {
                →rewind(v16);
                unsigned int v26 = 0;
                while(1) {
                    →fgets(&v9, 0x800, v18);
                    if(!result) {
                        break;
                    }
                    else {
                        ++v26;
                    }
                }
                if(v26) {
                    unsigned int v27 = v26;
                    →rewind(v18);
                    →calloc(v25 * 2 + v26 + 6, 4);
                    int v28 = result;
                    unsigned int i;
                    for(i = 0; (int)(unsigned int)(v25 * 2 + v26 + 6) > (int)i; ++i) {
                        *(int*)(i * 4 + v28) = 0;
                    }
                    i = 0;
                    while(1) {
                        →fgets(&v9, 0x800, v18);
                        if(!result) {
                            break;
                        }
                        else {
                            →strlen(&v9);
                            →malloc(result + 1);
                            *(int*)(i * 4 + v28) = result;
                            →strcpy(*(int*)(i * 4 + v28), &v9);
                            ++i;
                        }
                    }
                    check_ext_menu(v28);
                    i = 1;
                loc_804CBDE:
                    int v29 = nc_fgets_nb(&v9, 0x800, v16);
                    while(v29) {
                        if(i == 1) {
                            →strrchr(&v9, 93);
                            int v30 = result;
                            →strchr(&v9, 91);
                            int v31 = v30 - result;
                            int v32 = v30 - result;
                            →strchr(&v9, 91);
                            →strncpy(&v10, result + 1, v32);
                            *(char*)(v31 - 1 + &v10) = 0;
                            v0 = new_submenu(v13, &v9, v28);
                            if(v0 >= 0x80000000) {
                                print_warning("no GIS Manager menu entries created.\n");
                                break;
                            }
                            else {
                                ++i;
                                goto loc_804CBDE;
                            }
                        }
                        else {
                            v0 = (unsigned int)new_item(&v9, &v10, v28, v0);
                            if(v0 >= 0x80000000) {
                                print_warning("error creating GIS Manager menu entries.\n");
                                break;
                            }
                            else {
                                ++i;
                                v29 = nc_fgets_nb(&v9, 0x800, v16);
                            }
                        }
                    }
                    for(i = 0; *(int*)(i * 4 + v28); ++i) {
                        →fprintf(v19, *(int*)(i * 4 + v28));
                    }
                    →fflush(v19);
                    →rewind(v19);
                    unsigned int v33 = 0;
                    while(1) {
                        →fgets(&v9, 0x800, v19);
                        if(!result) {
                            break;
                        }
                        else {
                            ++v33;
                        }
                    }
                    if(!v33 || (int)v33 < (int)v27) {
                        print_warning("file truncation detected. Retaining orginal file \'menu.tcl\'.\n");
                        →memcpy(&GISMAN_CMD, &gvar_8055722, 1);
                    }
                    →fclose(v18);
                    →fclose(v16);
                    →fclose(v19);
                    for(i = 0; (int)(unsigned int)(v25 * 2 + v26 + 6) > (int)i; ++i) {
                        →free(*(int*)(i * 4 + v28));
                    }
                    →free(v28);
                }
            }
        }
    }
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v15;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int register_entries_gisman2(int param0, int param1) {
    char v0;
    char v1;
    int result;
    int v2 = param0;
    int v3 = param1;
    int v4 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →memcpy(&v0, "../entries-gisman2", 19);
    →fopen(&v0, &gvar_80553F1);
    int v5 = result;
    if(!result) {
        →__errno_location();
        if(*(unsigned int*)result != 2) {
            →fclose(0);
            →__errno_location();
            →strerror(*(int*)result);
            /*NO_RETURN*/ print_error(-32, "checking for file \'%s\': %s\n");
        }
    }
    else {
        if(VERBOSE) {
            →sprintf(&v1, "mkdir --verbose -p %s/etc/gm/Xtns ; cp -fv ../entries-gisman2 %s/etc/gm/Xtns/%s.gem ; ");
        }
        else {
            →sprintf(&v1, "mkdir -p %s/etc/gm/Xtns ; cp -f ../entries-gisman2 %s/etc/gm/Xtns/%s.gem ; ");
        }
        →strcpy(&GISMAN2_CMD, &v1);
    }
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v4;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int register_extension(int param0, int* param1, int param2, unsigned int param3, unsigned int param4, unsigned int param5) {
    unsigned int v0;
    unsigned int v1;
    int* ptr0;
    int v2;
    unsigned int v3;
    int v4;
    unsigned int v5;
    char v6;
    char v7;
    char v8;
    unsigned int v9;
    char v10;
    char v11;
    unsigned int v12;
    unsigned int v13;
    int result;
    int v14;
    int v15 = v14;
    int v16 = param0;
    int* ptr1 = param1;
    int v17 = param2;
    int v18 = *(int*)(__GS_BASE + (int)(int*)0x14);
    unsigned int v19 = 1;
    int v20 = v16;
    →sprintf(&v6, "%s/etc/extensions.db");
    →fopen(&v6, &gvar_8054D13);
    int v21 = result;
    if(!v21) {
        →__errno_location();
        if(*(unsigned int*)result == 2) {
            v19 = 0;
        }
        else {
            →fclose(0);
            →__errno_location();
            →strerror(*(int*)result);
            v5 = (unsigned int)result;
            v20 = &v6;
            /*NO_RETURN*/ print_error(-15, "checking for file \'%s\': %s\n");
        }
    }
    else if(v19) {
        →memcpy(&TMPDB, "/tmp/grass.extensions.db.XXXXXX", 32);
        →mkstemp(&TMPDB);
        →fopen(&TMPDB, &gvar_8054D74);
        v4 = result;
        if(!v4) {
            →__errno_location();
            →strerror(*(int*)result);
            v5 = (unsigned int)result;
            v20 = &TMPDB;
            /*NO_RETURN*/ print_error(-15, "could not create temp file \'%s\': %s\n \t\t\t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        atexit((void __cdecl (*_)())&exit_db);
        v3 = 0;
        unsigned int v22 = 1;
        unsigned int v23 = 0;
    loc_804B37C:
        for(int i = nc_fgets_nb(&v7, 0x800, v21); i; i = nc_fgets_nb(&v7, 0x800, v21)) {
            ++v3;
            unsigned int v24 = 1;
            v2 = &v10;
            ptr0 = &v11;
            v1 = &v12;
            v0 = &v9;
            v5 = &v13;
            v20 = &v8;
            →__isoc99_sscanf();
            →strcmp(&v8, v17);
            if(!result) {
                v23 = 1;
                int v25 = vercmp(v13, v9, v12, param3, param4, param5);
                if(!FORCE) {
                    if(v25 < 0) {
                        /*NO_RETURN*/ print_error(-16, "Extension \'%s\' with lower version (%i.%i.%i) already installed. You can use -f to overwrite this version, if you know what you are doing.\n");
                    }
                    v1 = v12;
                    v0 = v9;
                    v5 = v13;
                    v20 = v17;
                    /*NO_RETURN*/ print_error(-16, "Extension \'%s\' with same or higher version (%i.%i.%i) already installed. You can use -f to overwrite this version, if you know what you are doing.\n");
                }
                if(FORCE) {
                    if(!v25) {
                        v22 = 0;
                    }
                    else {
                        v22 = 1;
                        v24 = 0;
                        goto loc_804B37C;
                    }
                }
            }
            →fprintf(v4, &v7);
            →fflush(v4);
        }
        if(v22) {
            if(!v23) {
                int v26 = depstr(v17, v16);
                →strcpy(&v10, v26);
                v2 = &v10;
                ptr0 = ptr1;
                v1 = param5;
                v0 = param4;
                v5 = param3;
                v20 = v17;
            }
            else {
                int v27 = depstr(v17, v16);
                →strcpy(&v10, v27);
                v2 = &v10;
                ptr0 = &v11;
                v1 = param5;
                v0 = param4;
                v5 = param3;
                v20 = &v8;
            }
            →fprintf(v4, "%s\t%i.%i.%i\t%s\t%s\n");
        }
        →fclose(v4);
        →fclose(v21);
    }
    if(!v3 || !v19) {
        →memcpy(&TMPDB, "/tmp/grass.extensions.db.XXXXXX", 32);
        →mkstemp(&TMPDB);
        →fopen(&TMPDB, &gvar_8054D74);
        v4 = result;
        if(!v4) {
            →__errno_location();
            →strerror(*(int*)result);
            /*NO_RETURN*/ print_error(-15, "could not create temp db \'%s\': %s\n \t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        atexit((void __cdecl (*_)())&exit_db);
        int v28 = depstr(v17, v16);
        →strcpy(&v10, v28);
        →fprintf(v4, "%s\t%i.%i.%i\t%s\t%s\n");
        →fclose(v4);
    }
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v18;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int register_html(int param0, int param1, int param2, int param3, int param4) {
    int v0;
    int v1;
    char v2;
    char v3;
    int result;
    int v4;
    int v5 = v4;
    int v6 = param0;
    int v7 = param1;
    int v8 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v9 = v7;
    →sprintf(&v2, "%s/docs/html/index.html");
    →fopen(&v2, &gvar_8055C93);
    int v10 = result;
    if(!v10) {
        →__errno_location();
        if(*(unsigned int*)result != 2) {
            →fclose(0);
            →__errno_location();
            →strerror(*(int*)result);
            v1 = result;
            v9 = &v2;
            /*NO_RETURN*/ print_error(-24, "checking for file \'%s\': %s\n");
        }
    }
    else {
        →memcpy(&TMP_HTML, "/tmp/grass.extensions.db.XXXXXX", 32);
        →mkstemp(&TMP_HTML);
        →fopen(&TMP_HTML, &gvar_8055CD4);
        int v11 = result;
        if(!v11) {
            →__errno_location();
            →strerror(*(int*)result);
            /*NO_RETURN*/ print_error(-24, "could not create temp file \'%s\': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        atexit((void __cdecl (*_)())&exit_db);
        if(VERBOSE) {
            v0 = v7;
            v1 = v7;
            v9 = &TMP_HTML;
            →sprintf(&v3, "cp -vf %s %s/docs/html/index.html ; chmod -v a+r %s/docs/html/index.html ;");
        }
        else {
            int v12 = &TMP_NULL;
            int v13 = v7;
            v0 = &TMP_NULL;
            v1 = v7;
            v9 = &TMP_HTML;
            →sprintf(&v3, "cp -f %s %s/docs/html/index.html &>%s ; chmod a+r %s/docs/html/index.html &>%s ;");
        }
        →strcpy(&HTML_CMD, &v3);
        unsigned int v14 = 0;
        while(1) {
            →fgets(&v3, 0x800, v10);
            if(!result) {
                break;
            }
            else {
                ++v14;
            }
        }
        if(v14) {
            →rewind(v10);
            →calloc((int)(v14 + 10), 4);
            int v15 = result;
            unsigned int i;
            for(i = 0; (int)(v14 + 10) > (int)i; ++i) {
                *(int*)(i * 4 + v15) = 0;
            }
            i = 0;
            while(1) {
                →fgets(&v3, 0x800, v10);
                if(!result) {
                    break;
                }
                else {
                    →strlen(&v3);
                    →malloc(result + 1);
                    *(int*)(i * 4 + v15) = result;
                    →strcpy(*(int*)(i * 4 + v15), &v3);
                    ++i;
                }
            }
            new_ext_html(v6, v7, v15, param2, param3, param4);
            for(i = 0; *(int*)(i * 4 + v15); ++i) {
                →fprintf(v11, *(int*)(i * 4 + v15));
            }
            →fflush(v11);
            →fclose(v10);
            →fclose(v11);
            for(i = 0; (int)(v14 + 10) > (int)i; ++i) {
                →free(*(int*)(i * 4 + v15));
            }
            →free(v15);
        }
    }
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v8;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int restore(int param0, int param1) {
    int v0;
    char v1;
    int result;
    int v2 = param0;
    int v3 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →strdup(param1);
    int v4 = result;
    →strtok(result, &gvar_8055EDB);
    int v5 = result;
    →strtok(0, &gvar_8055EDB);
    int v6 = result;
    →strtok(0, &gvar_8055EDB);
    int v7 = result;
    →strtol(result, 0, 10);
    int v8 = result;
    →strtol(result, 0, 10);
    int v9 = result;
    →strtol(result, 0, 10);
    →free(result);
    →fwrite("Restoring...", 1, 12, stdout);
    if(v8 == 6 && v9 <= 0) {
        v0 = restore_entries_gisman(v2);
        if(VERBOSE) {
            →fprintf(stdout, "\nRestored entries for GIS Manager: %i\n");
        }
    }
    v0 = restore_html(v2);
    if(VERBOSE) {
        →fprintf(stdout, "\nRestored links in index.hml: %i\n");
    }
    if(v0 > 0) {
        if(VERBOSE) {
            →sprintf(&v1, "cp -f %s %s/etc/dm/menu.tcl ; chmod a+r %s/etc/dm/menu.tcl ; \t\t\t\t\t\t\tcp -f %s %s/docs/html/index.html ; chmod a+r %s/docs/html/index.html");
        }
        else {
            →sprintf(&v1, "cp -f %s %s/etc/dm/menu.tcl ; chmod a+r %s/etc/dm/menu.tcl &> %s ; \t\t\t\t\t\t\tcp -f %s %s/docs/html/index.html ; chmod a+r %s/docs/html/index.html");
        }
        su(v2, &v1);
    }
    if(!v0) {
        /*NO_RETURN*/ print_error(-26, "could not find anything to restore.\n");
    }
    print_done();
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v3;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int restore_entries_gisman(int param0) {
    unsigned int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    char v7;
    char v8;
    char v9;
    char v10;
    char v11;
    int v12;
    int result;
    int v13 = v12;
    int v14 = param0;
    int v15 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v16 = v14;
    →sprintf(&v7, "%s/etc/dm/menu.tcl");
    →fopen(&v7, &gvar_80553F1);
    int v17 = result;
    if(!v17) {
        →__errno_location();
        if(*(unsigned int*)result == 2) {
            result = 0;
        }
        else {
            →fclose(0);
            →__errno_location();
            →strerror(*(int*)result);
            v6 = result;
            v16 = &v7;
            /*NO_RETURN*/ print_error(-21, "checking for file \'%s\': %s\n");
        }
    }
    else {
        →memcpy(&TMP_GISMAN, "/tmp/grass.extensions.db.XXXXXX", 32);
        →mkstemp(&TMP_GISMAN);
        →fopen(&TMP_GISMAN, &gvar_8055444);
        int v18 = result;
        if(!v18) {
            →__errno_location();
            →strerror(*(int*)result);
            /*NO_RETURN*/ print_error(-21, "could not create temp file \'%s\': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        atexit((void __cdecl (*_)())&exit_db);
        if(VERBOSE) {
            v5 = v14;
            v4 = v14;
            v3 = &TMP_GISMAN;
            v6 = v14;
            →sprintf(&v8, "cp -vf %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak ; \t\t\t\t\t\tcp -vf %s %s/etc/dm/menu.tcl ; chmod -v a+r %s/etc/dm/menu.tcl ;");
        }
        else {
            int v19 = &TMP_NULL;
            int v20 = v14;
            int v21 = &TMP_NULL;
            v5 = v14;
            v4 = &TMP_GISMAN;
            v3 = &TMP_NULL;
            v6 = v14;
            →sprintf(&v8, "cp -f %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak &> %s ; \t\t\t\t\t\tcp -f %s %s/etc/dm/menu.tcl &> %s ; chmod a+r %s/etc/dm/menu.tcl &> %s ;");
        }
        →strcpy(&GISMAN_CMD, &v8);
        v16 = v14;
        →sprintf(&v10, "%s/etc/dm/gem-entries");
        →opendir(&v10);
        int v22 = result;
        if(!v22) {
            result = 0;
        }
        else {
            int v23 = 0;
            int v24 = 0;
        loc_804DBFB:
            while(1) {
                →readdir(v22);
                v2 = result;
                if(!v2) {
                    break;
                }
                else {
                    v6 = v2 + 11;
                    v16 = &v10;
                    →sprintf(&v7, "%s/%s");
                    →fopen(&v7, &gvar_80553F1);
                    v1 = result;
                    →strcmp(v2 + 11, &gvar_8055A4F);
                    if(result) {
                        →strcmp(v2 + 11, &gvar_8055A51);
                        if(result && v1) {
                            while(1) {
                                →fgets(&v8, 0x800, v1);
                                if(!result) {
                                loc_804DBDD:
                                    ++v24;
                                    →fclose(v1);
                                    continue loc_804DBFB;
                                }
                                else {
                                    ++v23;
                                }
                            }
                            goto loc_804DBDD;
                        }
                        else if(result) {
                            →fclose(0);
                            continue;
                        }
                    }
                    →fclose(v1);
                }
            }
            →closedir(v22);
            unsigned int v25 = 0;
            while(1) {
                →fgets(&v8, 0x800, v17);
                if(!result) {
                    break;
                }
                else {
                    ++v25;
                }
            }
            if(!v25) {
                result = 0;
            }
            else {
                →rewind(v17);
                →calloc(v23 * 2 + v24 * 4 + (v24 + v25) + 1, 4);
                int v26 = result;
                unsigned int i;
                for(i = 0; (int)(unsigned int)(v23 * 2 + v24 * 4 + (v24 + v25) + 1) > (int)i; ++i) {
                    *(int*)(i * 4 + v26) = 0;
                }
                i = 0;
                while(1) {
                    →fgets(&v8, 0x800, v17);
                    if(!result) {
                        break;
                    }
                    else {
                        →strlen(&v8);
                        →malloc(result + 1);
                        *(int*)(i * 4 + v26) = result;
                        →strcpy(*(int*)(i * 4 + v26), &v8);
                        ++i;
                    }
                }
                *(int*)(i * 4 + v26) = 0;
                check_ext_menu(v26);
                →opendir(&v10);
                v22 = result;
                int v27 = 0;
            loc_804DFE1:
                do {
                    →readdir(v22);
                    v2 = result;
                    if(!v2) {
                        →closedir(v22);
                        i = 0;
                        goto loc_804E050;
                    }
                    else {
                        v6 = v2 + 11;
                        v16 = &v10;
                        →sprintf(&v7, "%s/%s");
                        →strcmp(v2 + 11, &gvar_8055A4F);
                        if(!result) {
                            goto loc_804DFE1;
                        }
                        else {
                            →strcmp(v2 + 11, &gvar_8055A51);
                            if(!result) {
                                goto loc_804DFE1;
                            }
                            else {
                                →fopen(&v7, &gvar_80553F1);
                                v1 = result;
                            }
                        }
                    }
                }
                while(!v1);
                i = 1;
            loc_804DFAE:
                int v28 = nc_fgets_nb(&v8, 0x800, v1);
                while(v28) {
                    if(i == 1) {
                        →strrchr(&v8, 93);
                        int v29 = result;
                        →strchr(&v8, 91);
                        int v30 = v29 - result;
                        int v31 = v29 - result;
                        →strchr(&v8, 91);
                        →strncpy(&v9, result + 1, v31);
                        *(char*)(v30 - 1 + &v9) = 0;
                        v0 = new_submenu(&v11, &v8, v26);
                        if(v0 >= 0x80000000) {
                            break;
                        }
                        else {
                            ++i;
                            ++v27;
                            goto loc_804DFAE;
                        }
                    }
                    else {
                        v0 = (unsigned int)new_item(&v8, &v9, v26, v0);
                        if(v0 >= 0x80000000) {
                            break;
                        }
                        else {
                            ++i;
                            ++v27;
                        }
                        v28 = nc_fgets_nb(&v8, 0x800, v1);
                    }
                }
                →fclose(v1);
                goto loc_804DFE1;
            loc_804E050:
                while(*(int*)(i * 4 + v26)) {
                    →fprintf(v18, *(int*)(i * 4 + v26));
                    ++i;
                }
                →fflush(v18);
                →fclose(v17);
                →fclose(v18);
                for(i = 0; (int)(unsigned int)(v23 * 2 + v24 * 4 + (v24 + v25) + 1) > (int)i; ++i) {
                    →free(*(int*)(i * 4 + v26));
                }
                →free(v26);
                result = v27;
            }
        }
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v15)) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int restore_html(int param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    char v4;
    char v5;
    char v6;
    char v7;
    char v8;
    int v9;
    int result;
    int v10;
    int v11 = v10;
    int v12 = param0;
    int v13 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v14 = v12;
    →sprintf(&v4, "%s/docs/html/index.html");
    →fopen(&v4, &gvar_8055C93);
    int v15 = result;
    if(!v15) {
        →__errno_location();
        if(*(unsigned int*)result == 2) {
            result = 0;
        }
        else {
            →fclose(0);
            →__errno_location();
            →strerror(*(int*)result);
            v3 = result;
            v14 = &v4;
            /*NO_RETURN*/ print_error(-24, "checking for file \'%s\': %s\n");
        }
    }
    else {
        →memcpy(&TMP_HTML, "/tmp/grass.extensions.db.XXXXXX", 32);
        →mkstemp(&TMP_HTML);
        →fopen(&TMP_HTML, &gvar_8055CD4);
        int v16 = result;
        if(!v16) {
            →__errno_location();
            →strerror(*(int*)result);
            /*NO_RETURN*/ print_error(-24, "could not create temp file \'%s\': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        if(VERBOSE) {
            v2 = v12;
            v3 = v12;
            →sprintf(&v5, "cp -vf %s %s/docs/html/index.html ; chmod -v a+r %s/docs/html/index.html ;");
        }
        else {
            int v17 = &TMP_NULL;
            int v18 = v12;
            v2 = &TMP_NULL;
            v3 = v12;
            →sprintf(&v5, "cp -f %s %s/docs/html/index.html &>%s ; chmod a+r %s/docs/html/index.html &>%s ;");
        }
        →strcpy(&HTML_CMD, &v5);
        atexit((void __cdecl (*_)())&exit_db);
        v14 = v12;
        →sprintf(&v7, "%s/docs/extensions");
        →opendir(&v7);
        int v19 = result;
        if(!v19) {
            result = 0;
        }
        else {
            int v20 = 0;
            int v21 = 0;
            while(1) {
                →readdir(v19);
                v1 = result;
                if(!v1) {
                    break;
                }
                else {
                    v3 = v1 + 11;
                    v14 = &v7;
                    →sprintf(&v8, "%s/%s");
                    →strcmp(v1 + 11, &gvar_8055E0A);
                    if(result) {
                        →strcmp(v1 + 11, &gvar_8055E0C);
                        if(result) {
                            →opendir(&v8);
                            v0 = result;
                            if(v0) {
                                ++v21;
                                →closedir(v0);
                            }
                        }
                    }
                }
            }
            →closedir(v19);
            unsigned int v22 = 0;
            while(1) {
                →fgets(&v5, 0x800, v15);
                if(!result) {
                    break;
                }
                else {
                    ++v22;
                }
            }
            if(!v22) {
                result = 0;
            }
            else {
                →rewind(v15);
                →calloc(v21 + v22 + 10, 4);
                int v23 = result;
                unsigned int i;
                for(i = 0; (int)(unsigned int)(v21 + v22 + 10) > (int)i; ++i) {
                    *(int*)(i * 4 + v23) = 0;
                }
                i = 0;
                while(1) {
                    →fgets(&v5, 0x800, v15);
                    if(!result) {
                        break;
                    }
                    else {
                        →strlen(&v5);
                        →malloc(result + 1);
                        *(int*)(i * 4 + v23) = result;
                        →strcpy(*(int*)(i * 4 + v23), &v5);
                        ++i;
                    }
                }
                *(int*)(i * 4 + v23) = 0;
                →opendir(&v7);
                v19 = result;
                int v24 = 0;
            loc_804F6D6:
                do {
                    →readdir(v19);
                    v1 = result;
                    if(!v1) {
                        →closedir(v19);
                        i = 0;
                        goto loc_804F745;
                    }
                    else {
                        v3 = v1 + 11;
                        v14 = &v7;
                        →sprintf(&v8, "%s/%s");
                        →strcmp(v1 + 11, &gvar_8055E0A);
                        if(!result) {
                            goto loc_804F6D6;
                        }
                        else {
                            →strcmp(v1 + 11, &gvar_8055E0C);
                            if(!result) {
                                goto loc_804F6D6;
                            }
                            else {
                                →opendir(&v8);
                                v0 = result;
                                if(!v0) {
                                    goto loc_804F6D6;
                                }
                                else {
                                    →closedir(v0);
                                    v14 = &v8;
                                    →sprintf(&v6, "%s/index.html");
                                    →fopen(&v6, &gvar_8055C93);
                                    v9 = result;
                                }
                            }
                        }
                    }
                }
                while(!v9);
                int v25 = 0;
                int v26 = 0;
                int v27 = 0;
                do {
                    →fgets(&v5, 0x800, v9);
                    if(!result) {
                        goto loc_804F6D6;
                    }
                    else {
                        →strstr(&v5, "<title>");
                    }
                }
                while(result);
                →strchr(&v5, 40);
                →__isoc99_sscanf();
                new_ext_html(v1 + 11, v12, v23, 0, 0, 0);
                ++v24;
                →fclose(v9);
                goto loc_804F6D6;
            loc_804F745:
                while(*(int*)(i * 4 + v23)) {
                    →fprintf(v16, *(int*)(i * 4 + v23));
                    ++i;
                }
                →fflush(v16);
                →fclose(v15);
                →fclose(v16);
                for(i = 0; (int)(unsigned int)(v21 + v22 + 10) > (int)i; ++i) {
                    →free(*(int*)(i * 4 + v23));
                }
                →free(v23);
                result = v24;
            }
        }
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v13)) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int run_post(char* __filename, int param1, int param2, int param3) {
    char v0;
    char v1;
    char* ptr0 = __filename;
    int v2 = param2;
    int v3 = param3;
    int v4 = *(int*)(__GS_BASE + (int)(int*)0x14);
    switch(param1) {
        case 3: {
            →memcpy(&GEM_ACTION, "GEM_ACTION=INSTALL", 19);
            break;
        }
        case 4: {
            →memcpy(&GEM_ACTION, "GEM_ACTION=INSTALL", 19);
            break;
        }
        case 5: {
            →memcpy(&GEM_ACTION, "GEM_ACTION=QUERY", 17);
            break;
        }
        case 6: {
            →memcpy(&GEM_ACTION, "GEM_ACTION=CLEAN", 17);
            break;
        }
        case 7: {
            →memcpy(&GEM_ACTION, "GEM_ACTION=LICENSE", 19);
        }
        case 9: {
            →memcpy(&GEM_ACTION, "GEM_ACTION=DETAILS", 19);
        }
    }
    →putenv(&GEM_ACTION);
    if(param3) {
        int v5 = param3;
        →sprintf(&INSTALL_BASE, "INSTALL_BASE=%s");
    }
    else {
        →memcpy(&INSTALL_BASE, "INSTALL_BASE=UNDEFINED", 23);
    }
    →putenv(&INSTALL_BASE);
    →getcwd(&v0, 0x800);
    char* ptr1 = basename(__filename);
    →sprintf(&v1, "%s/%s/src");
    →sprintf(&EXT_BASE, "EXT_BASE=%s");
    →putenv(&EXT_BASE);
    if(!v2) {
        →memcpy(&INSTALL_TYPE, "INSTALL_TYPE=src", 17);
    }
    else {
        →sprintf(&INSTALL_TYPE, "INSTALL_TYPE=%s");
    }
    →putenv(&INSTALL_TYPE);
    →sprintf(&v0, &gvar_8056F3E);
    →sprintf(&GEM_FORCE, "GEM_FORCE=%s");
    →putenv(&GEM_FORCE);
    →sprintf(&v0, &gvar_8056F3E);
    →sprintf(&GEM_VERBOSE, "GEM_VERBOSE=%s");
    →putenv(&GEM_VERBOSE);
    →memcpy(&GEM_GUI, "GEM_GUI=0", 10);
    →putenv(&GEM_GUI);
    atexit((void __cdecl (*_)())&exit_tmp);
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v4;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int show_details(char* param0) {
    char v0;
    char v1;
    void* ptr0;
    int v2;
    int v3;
    int* ptr1;
    int* ptr2 = &v2;
    int* ptr3 = &v2;
    char v4 = &v0 == 2108;
    char v5 = (int)&v3 < 0;
    char v6 = __parity__((unsigned char)&v0 - 60);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v2 ^ 0x838) ^ (int)&v3) >>> 4) & 0x1);
    char v8 = (unsigned int)&v2 < 2104;
    char v9 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v3) & (int)(int*)((int)&v2 ^ 0x838)) < 0;
    char* ptr4 = param0;
    char* ptr5 = param0;
    int v10 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v11 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v12 = 0;
    char v13 = 1;
    char v14 = 0;
    char v15 = 1;
    char v16 = 0;
    char v17 = 0;
    char* __filename = ptr5;
    char* ptr6 = basename(__filename);
    int v18 = &v1;
    →strcpy(&v1, (int)ptr6);
    int v19 = &v1;
    →chdir(&v1);
    int* ptr7 = ptr1;
    char v20 = ptr7 ? 0: 1;
    char v21 = (int)ptr7 < 0;
    char v22 = __parity__((unsigned char)ptr7);
    char v23 = (unsigned int)ptr7 < 0;
    char v24 = 0;
    char v25 = 0;
    if(v21) {
        →__errno_location();
        int v26 = *ptr1;
        →strerror(v26);
        int* ptr8 = ptr1;
        char* ptr9 = ptr5;
        char* ptr10 = ptr5;
        int v27 = /*NO_RETURN*/ print_error(-2, "extension \'%s\' not accessible: (%s)\n");
    }
    int v28 = dump_ascii("info", "Detailed information");
    →system("sh post");
    int* ptr11 = &ptr0;
    /*NO_RETURN*/ →exit(0);
}

int show_help() {
    char v0;
    void* ptr0;
    int v1;
    int v2;
    int* ptr1 = &v1;
    int* ptr2 = &v1;
    char v3 = &v0 == 28;
    char v4 = (int)&v2 < 0;
    char v5 = __parity__((unsigned char)&v0 - 28);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x18) ^ (int)&v2) >>> 4) & 0x1);
    char v7 = (unsigned int)&v1 < 24;
    char v8 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v2) & (int)(int*)((int)&v1 ^ 0x18)) < 0;
    int v9 = stdout;
    int v10 = stdout;
    int v11 = "Usage: gem64 [OPTION] [ACTION] [FILE|DIR]\n";
    →fwrite("Usage: gem64 [OPTION] [ACTION] [FILE|DIR]\n", 1, 42, v10);
    int v12 = stdout;
    int v13 = stdout;
    int v14 = "Install a GRASS extension from FILE or DIR.\n";
    →fwrite("Install a GRASS extension from FILE or DIR.\n", 1, 44, v13);
    int v15 = stdout;
    int v16 = stdout;
    int v17 = "Manage (installed) GRASS extension(s).\n";
    →fwrite("Manage (installed) GRASS extension(s).\n", 1, 39, v16);
    int v18 = stdout;
    int v19 = stdout;
    int v20 = "\nPossible ACTIONs are:\n";
    →fwrite("\nPossible ACTIONs are:\n", 1, 23, v19);
    int v21 = stdout;
    int v22 = stdout;
    int v23 = "  -i, --install=EXT\tinstall a GRASS extension\n";
    →fwrite("  -i, --install=EXT\tinstall a GRASS extension\n", 1, 46, v22);
    int v24 = stdout;
    int v25 = stdout;
    int v26 = "  -u, --uninstall=EXT\tremove an extension from GRASS\n";
    →fwrite("  -u, --uninstall=EXT\tremove an extension from GRASS\n", 1, 53, v25);
    int v27 = stdout;
    int v28 = stdout;
    int v29 = "  -q, --query=EXT\tdisplay information about extension/list installed\n";
    →fwrite("  -q, --query=EXT\tdisplay information about extension/list installed\n", 1, 69, v28);
    int v30 = stdout;
    int v31 = stdout;
    int v32 = "  -d, --details=EXT\tdisplay additional details about an extension\n";
    →fwrite("  -d, --details=EXT\tdisplay additional details about an extension\n", 1, 66, v31);
    int v33 = stdout;
    int v34 = stdout;
    int v35 = "  -c, --clean=EXT\tclean extension\'s source code directories\n";
    →fwrite("  -c, --clean=EXT\tclean extension\'s source code directories\n", 1, 60, v34);
    int v36 = stdout;
    int v37 = stdout;
    int v38 = "  -t, --test=EXT\tconfigure and compile extension, but don\'t install\n";
    →fwrite("  -t, --test=EXT\tconfigure and compile extension, but don\'t install\n", 1, 68, v37);
    int v39 = stdout;
    int v40 = stdout;
    int v41 = "  -l, --license=EXT\tshow copyright information for an extension\n";
    →fwrite("  -l, --license=EXT\tshow copyright information for an extension\n", 1, 64, v40);
    int v42 = stdout;
    int v43 = stdout;
    int v44 = "  -r, --restore\t\trecreate HTML links and GIS Manager entries\n";
    →fwrite("  -r, --restore\t\trecreate HTML links and GIS Manager entries\n", 1, 61, v43);
    int v45 = stdout;
    int v46 = stdout;
    int v47 = "  -h, --help\t\tdisplay this help and exit\n";
    →fwrite("  -h, --help\t\tdisplay this help and exit\n", 1, 41, v46);
    int v48 = stdout;
    int v49 = stdout;
    int v50 = "  -V, --version\t\toutput version information and exit\n\n";
    →fwrite("  -V, --version\t\toutput version information and exit\n\n", 1, 54, v49);
    int v51 = stdout;
    int v52 = stdout;
    int v53 = "\nPossible OPTIONs are:\n";
    →fwrite("\nPossible OPTIONs are:\n", 1, 23, v52);
    int v54 = stdout;
    int v55 = stdout;
    int v56 = "  -g, --grass=PATH\tpath to GRASS installation dir\n";
    →fwrite("  -g, --grass=PATH\tpath to GRASS installation dir\n", 1, 50, v55);
    int v57 = stdout;
    int v58 = stdout;
    int v59 = "  -b, --binary=NAME\tno compilation: use binary files for system NAME\n";
    →fwrite("  -b, --binary=NAME\tno compilation: use binary files for system NAME\n", 1, 69, v58);
    int v60 = stdout;
    int v61 = stdout;
    int v62 = "  -f, --force\t\tforce action, regardless of dependencies\n";
    →fwrite("  -f, --force\t\tforce action, regardless of dependencies\n", 1, 56, v61);
    int v63 = stdout;
    int v64 = stdout;
    int v65 = "  -v, --verbose\t\tdisplay detailed status information\n";
    →fwrite("  -v, --verbose\t\tdisplay detailed status information\n", 1, 53, v64);
    int v66 = stdout;
    int v67 = stdout;
    int v68 = "  -s, --skip-config\tskip configure script\n";
    →fwrite("  -s, --skip-config\tskip configure script\n", 1, 42, v67);
    int v69 = stdout;
    int v70 = stdout;
    int v71 = "  -x, --config-opts=OPTS\tpass OPTS to configure script\n";
    →fwrite("  -x, --config-opts=OPTS\tpass OPTS to configure script\n", 1, 55, v70);
    int v72 = stdout;
    int v73 = stdout;
    int v74 = "  -o, --options=OPTS\toptions to pass to the C compiler/linker\n";
    →fwrite("  -o, --options=OPTS\toptions to pass to the C compiler/linker\n", 1, 62, v73);
    int v75 = stdout;
    int v76 = stdout;
    int v77 = "  -C, --config-cmd=CMD\tDefine custom \'configure\' command (default=configure)\n";
    →fwrite("  -C, --config-cmd=CMD\tDefine custom \'configure\' command (default=configure)\n", 1, 77, v76);
    int v78 = stdout;
    int v79 = stdout;
    int v80 = "  -m, --make-cmd=CMD\tDefine custom \'make\' command (default=make)\n";
    →fwrite("  -m, --make-cmd=CMD\tDefine custom \'make\' command (default=make)\n", 1, 65, v79);
    int v81 = stdout;
    int v82 = stdout;
    int v83 = "\nWhen run from within a GRASS session, locations of libs, header files\n";
    →fwrite("\nWhen run from within a GRASS session, locations of libs, header files\n", 1, 71, v82);
    int v84 = stdout;
    int v85 = stdout;
    int v86 = "and installation target dir will be assumed to match those of the active\n";
    →fwrite("and installation target dir will be assumed to match those of the active\n", 1, 73, v85);
    int v87 = stdout;
    int v88 = stdout;
    int v89 = "GRASS version. ";
    →fwrite("GRASS version. ", 1, 15, v88);
    int v90 = stdout;
    int v91 = stdout;
    int v92 = "Option -g can be used to override these or install extensions\nfrom outside";
    →fwrite("Option -g can be used to override these or install extensions\nfrom outside", 1, 74, v91);
    int v93 = stdout;
    int v94 = stdout;
    int v95 = "of a GRASS session.\n";
    →fwrite("of a GRASS session.\n", 1, 20, v94);
    int v96 = stdout;
    int v97 = stdout;
    int v98 = "Per default, extensions will be compiled from source and then installed.\n";
    →fwrite("Per default, extensions will be compiled from source and then installed.\n", 1, 73, v97);
    int v99 = stdout;
    int v100 = stdout;
    int v101 = "If the exension package contains binaries for the user\'s platform, they can\n";
    →fwrite("If the exension package contains binaries for the user\'s platform, they can\n", 1, 76, v100);
    int v102 = stdout;
    int v103 = stdout;
    int v104 = "be installed instead using the -b option. ";
    →fwrite("be installed instead using the -b option. ", 1, 42, v103);
    int v105 = stdout;
    int v106 = stdout;
    int v107 = "For installation from source code, a C compiler and make tools are needed.\n";
    →fwrite("For installation from source code, a C compiler and make tools are needed.\n", 1, 75, v106);
    int v108 = stdout;
    int v109 = stdout;
    int v110 = "\nExample:\n";
    →fwrite("\nExample:\n", 1, 10, v109);
    int v111 = stdout;
    int v112 = stdout;
    int v113 = "\tgem64 -b macosx --grass=/usr/local/grass-6.4.0 -i myExtension\n";
    →fwrite("\tgem64 -b macosx --grass=/usr/local/grass-6.4.0 -i myExtension\n", 1, 63, v112);
    int v114 = stdout;
    int v115 = stdout;
    int v116 = "Installs the MacOS X binaries for \'myExtension\' in /usr/local/grass-6.4.0.\n";
    →fwrite("Installs the MacOS X binaries for \'myExtension\' in /usr/local/grass-6.4.0.\n", 1, 75, v115);
    int* ptr3 = &ptr0;
    /*NO_RETURN*/ →exit(0);
}

int show_license(char* param0) {
    char v0;
    char v1;
    void* ptr0;
    int v2;
    int v3;
    int* ptr1;
    int* ptr2 = &v2;
    int* ptr3 = &v2;
    char v4 = &v0 == 2108;
    char v5 = (int)&v3 < 0;
    char v6 = __parity__((unsigned char)&v0 - 60);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v2 ^ 0x838) ^ (int)&v3) >>> 4) & 0x1);
    char v8 = (unsigned int)&v2 < 2104;
    char v9 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v3) & (int)(int*)((int)&v2 ^ 0x838)) < 0;
    char* ptr4 = param0;
    char* ptr5 = param0;
    int v10 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v11 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v12 = 0;
    char v13 = 1;
    char v14 = 0;
    char v15 = 1;
    char v16 = 0;
    char v17 = 0;
    char* __filename = ptr5;
    char* ptr6 = basename(__filename);
    int v18 = &v1;
    →strcpy(&v1, (int)ptr6);
    int v19 = &v1;
    →chdir(&v1);
    int* ptr7 = ptr1;
    char v20 = ptr7 ? 0: 1;
    char v21 = (int)ptr7 < 0;
    char v22 = __parity__((unsigned char)ptr7);
    char v23 = (unsigned int)ptr7 < 0;
    char v24 = 0;
    char v25 = 0;
    if(v21) {
        →__errno_location();
        int v26 = *ptr1;
        →strerror(v26);
        int* ptr8 = ptr1;
        char* ptr9 = ptr5;
        char* ptr10 = ptr5;
        int v27 = /*NO_RETURN*/ print_error(-2, "extension \'%s\' not accessible: (%s)\n");
    }
    int v28 = dump_ascii("license", "Detailed information");
    →system("sh post");
    int* ptr11 = &ptr0;
    /*NO_RETURN*/ →exit(0);
}

int show_version() {
    char v0;
    void* ptr0;
    int v1;
    int v2;
    int v3;
    int* ptr1 = &v1;
    int* ptr2 = &v1;
    char v4 = &v0 == 28;
    char v5 = (int)&v2 < 0;
    char v6 = __parity__((unsigned char)&v0 - 28);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x18) ^ (int)&v2) >>> 4) & 0x1);
    char v8 = (unsigned int)&v1 < 24;
    char v9 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v2) & (int)(int*)((int)&v1 ^ 0x18)) < 0;
    int v10 = "gem64 (GRASS extensions manager) %.2f\n";
    int v11 = stdout;
    char v12 = 7;
    __int128 v13 = 1.03;
    *(long long*)&v3 = 1.03;
    char v14 = 0;
    →fprintf(v11, "gem64 (GRASS extensions manager) %.2f\n");
    int v15 = stdout;
    int v16 = stdout;
    int v17 = "Written by Benjamin Ducke\n";
    →fwrite("Written by Benjamin Ducke\n", 1, 26, v16);
    int v18 = stdout;
    int v19 = stdout;
    int v20 = "\nCopyright (C) 2005 Benjamin Ducke\n";
    →fwrite("\nCopyright (C) 2005 Benjamin Ducke\n", 1, 35, v19);
    int v21 = stdout;
    int v22 = stdout;
    int v23 = "This is free software; see the source for copying conditions.  There is NO\n";
    →fwrite("This is free software; see the source for copying conditions.  There is NO\n", 1, 75, v22);
    int v24 = stdout;
    int v25 = stdout;
    int v26 = "warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n";
    →fwrite("warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n", 1, 76, v25);
    int* ptr3 = &ptr0;
    /*NO_RETURN*/ →exit(0);
}

unsigned int source_clean(char* __filename) {
    unsigned int v0;
    char v1;
    char v2;
    unsigned int v3;
    char* ptr0 = __filename;
    int v4 = *(int*)(__GS_BASE + (int)(int*)0x14);
    basename(__filename);
    →sprintf(&v1, "%s/src");
    →chdir(&v1);
    if(v3 >= 0x80000000) {
        /*NO_RETURN*/ print_error(-2, "extension \'%s\' not accessible: ");
    }
    if(VERBOSE) {
        →fprintf(stdout, "Running \'%s clean\':\n");
        →sprintf(&v2, "%s -f Makefile clean");
        →system(&v2);
        v0 = v3;
    }
    else {
        →fwrite("Cleaning up...", 1, 14, stdout);
        →sprintf(&v2, "%s -f Makefile -s clean &> %s");
        →system(&v2);
        v0 = v3;
    }
    if(v0 == -1) {
        /*NO_RETURN*/ print_error(-9, "could not run \'%s clean\' do you have make tools installed?\n");
    }
    print_done();
    →system("sh ../post");
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v4)) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return 0;
}

int source_install(char* param0, char* param1, int param2, unsigned int param3, unsigned int param4, unsigned int param5, int param6) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    int result;
    char v5;
    char* __filename = param0;
    char* __file = param1;
    int v6 = param2;
    int v7 = param6;
    int v8 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v9 = stat(__file, &v5);
    if(v9 < 0) {
        →__errno_location();
        →strerror(*(int*)result);
        /*NO_RETURN*/ print_error(-5, "installation directory invalid: %s\n");
    }
    →sprintf(&GINSTALL_DST, "GINSTALL_DST=%s");
    →putenv(&GINSTALL_DST);
    →sprintf(&v0, "%s/include");
    →sprintf(&GINSTALL_INC, "GINSTALL_INC=%s");
    →putenv(&GINSTALL_INC);
    →sprintf(&v0, "%s/lib");
    →sprintf(&GINSTALL_LIB, "GINSTALL_LIB=%s");
    →putenv(&GINSTALL_LIB);
    char* ptr0 = __file;
    →sprintf(&GEM_GRASS_DIR, "GEM_GRASS_DIR=%s");
    →putenv(&GEM_GRASS_DIR);
    →strdup(v7);
    int v10 = result;
    →strtok(v10, &gvar_8055EDB);
    int v11 = result;
    →strtok(0, &gvar_8055EDB);
    int v12 = result;
    →strtok(0, &gvar_8055EDB);
    int v13 = result;
    →strtol(v11, 0, 10);
    int v14 = result;
    →strtol(v12, 0, 10);
    int v15 = result;
    →strtol(v13, 0, 10);
    int v16 = result;
    →free(v10);
    /*BAD_CALL!*/ atexit((void __cdecl (*_)())&exit_tmp);
    ptr0 = basename(__filename);
    →sprintf(&v1, "%s/src");
    →chdir(&v1);
    v9 = result;
    if(v9 < 0) {
        →__errno_location();
        →strerror(*(int*)result);
        /*NO_RETURN*/ print_error(-2, "extension files in \'%s\' not accessible: %s\n");
    }
    if(!SKIP_CFG) {
        if(VERBOSE) {
            →fwrite("Running configure script:\n", 1, 26, stdout);
            →sprintf(&v3, "sh %s %s");
        }
        else {
            →fwrite("Configuring...", 1, 14, stdout);
            →sprintf(&v3, "sh %s %s --quiet &> %s");
        }
        →system(&v3);
        v9 = result;
        if(v9 == -1) {
            /*NO_RETURN*/ print_error(-27, "could not run configure script.\n");
        }
        if(v9 > 0) {
            /*NO_RETURN*/ print_error(-3, "system configuration failed.\n");
        }
        print_done();
        print_cfg();
    }
    →sprintf(&GEM_EXT_NAME, "GEM_EXT_NAME=%s");
    →putenv(&GEM_EXT_NAME);
    char* ptr1 = (char*)param5;
    int v17 = (int)param4;
    →sprintf(&v0, "%i.%i.%i");
    →sprintf(&GEM_EXT_VERSION, "GEM_EXT_VERSION=%s");
    →putenv(&GEM_EXT_VERSION);
    dump_html("../description", &TMP_DESCR);
    dump_html("../info", &TMP_INFO);
    dump_html("../depends", &TMP_DEPS);
    dump_html("../bugs", &TMP_BUGS);
    dump_html("../authors", &TMP_AUTHORS);
    →sprintf(&GEM_EXT_DESCR, "GEM_EXT_DESCR=%s");
    →putenv(&GEM_EXT_DESCR);
    →sprintf(&GEM_EXT_INFO, "GEM_EXT_INFO=%s");
    →putenv(&GEM_EXT_INFO);
    →sprintf(&GEM_EXT_DEPS, "GEM_EXT_DEPS=%s");
    →putenv(&GEM_EXT_DEPS);
    →sprintf(&GEM_EXT_BUGS, "GEM_EXT_BUGS=%s");
    →putenv(&GEM_EXT_BUGS);
    →sprintf(&GEM_EXT_AUTHORS, "GEM_EXT_AUTHORS=%s");
    →putenv(&GEM_EXT_AUTHORS);
    atexit((void __cdecl (*_)())&exit_tmp);
    check_dependencies((int)__filename, (int)__file, v7);
    if(VERBOSE) {
        →fprintf(stdout, "Running \'%s\':\n");
        →sprintf(&v3, "%s -f Makefile");
    }
    else {
        →fwrite("Compiling...", 1, 12, stdout);
        →sprintf(&v3, "%s -f Makefile &> %s");
    }
    →system(&v3);
    v9 = result;
    if(v9 == -1 && !VERBOSE) {
        /*NO_RETURN*/ print_error(-9, "could not run \'%s\' do you have make tools installed?\n");
    }
    if(v9 > 0) {
        /*NO_RETURN*/ print_error(-4, "source code could not be compiled.\n \t\t\tRun again with option -v to see what is causing trouble.\n");
    }
    print_done();
    →fwrite("Installing...", 1, 13, stdout);
    →fopen("../uninstall", &gvar_8055E6B);
    int v18 = result;
    if(!v18) {
        →__errno_location();
        →strerror(*(int*)result);
        print_warning("error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system");
    }
    else {
        if(VERBOSE) {
            →sprintf(&v0, "cp -vf ../uninstall %s/etc/uninstall.%s ;");
        }
        else {
            →sprintf(&v0, "cp -f ../uninstall %s/etc/uninstall.%s &> %s ;");
        }
        →strcpy(&UNINSTALL_CMD, &v0);
        →fclose(v18);
    }
    register_extension((int)__file, (int*)&gvar_80566DF, v6, param3, param4, param5);
    check_dependencies((int)__filename, (int)__file, v7);
    if(v14 == 6 && v15 <= 0) {
        register_entries_gisman(v6, (int)__file);
    }
    register_entries_gisman2(v6, (int)__file);
    register_html(v6, (int)__file, (int)param3, (int)param4, (int)param5);
    if(VERBOSE) {
        →fprintf(stdout, "Running \'%s install\':\n");
        →sprintf(&v2, "%s -f Makefile install ; \t\t\t\t\tcp -vf %s %s/etc/extensions.db ; chmod -v a+r %s/etc/extensions.db ;");
    }
    else {
        →sprintf(&v2, "%s -f Makefile -s install &> %s ; \t\t\t\t\tcp -f %s %s/etc/extensions.db &> %s ; chmod a+r %s/etc/extensions.db &> %s ;");
    }
    if(VERBOSE) {
        →memcpy(&v4, "sh ../post", 11);
    }
    else {
        →sprintf(&v4, "sh ../post &> %s");
    }
    →sprintf(&v0, "%s %s %s %s %s %s");
    su((int)__file, &v0);
    print_done();
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v8;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int stat(char* __file, stat* __buf) {
    int result;
    →__xstat(3, (int)__file, (int)__buf);
    return result;
}

int su(int param0, int param1) {
    char v0;
    int result;
    int v1 = param0;
    int v2 = param1;
    int v3 = *(int*)(__GS_BASE + (int)(int*)0x14);
    next.4089 = (unsigned int)(next.4089 * 1103515245 + 54321);
    next.4089 = (unsigned int)((next.4089 >>> 16) & 0x7fff);
    →srand(next.4089);
    →rand();
    int v4 = result;
    int v5 = v1;
    →sprintf(&v0, "%s/gem.test.%i");
    →fopen(&v0, &gvar_8054B0C);
    int v6 = result;
    →__errno_location();
    if(*(unsigned int*)result == 13) {
        /*NO_RETURN*/ print_error(-5, "You don\'t have write access to your local GRASS installation.\nPlease consult your system administrator.\n");
    }
    →remove(&v0);
    →fclose(result);
    →system(v2);
    if(result) {
        /*NO_RETURN*/ print_error(-9, "could not run \'%s\'.\n");
    }
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v3;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int sub_8048A7A() {
    return gvar_8058FFC();
}

int test_install(char* param0, char* param1, int param2, unsigned int param3, unsigned int param4, unsigned int param5, int param6) {
    char v0;
    char v1;
    char v2;
    char v3;
    int result;
    char* __filename = param0;
    char* __file = param1;
    int v4 = param2;
    int v5 = param6;
    int v6 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v7 = stat(__file, &v3);
    if(v7 < 0) {
        →__errno_location();
        →strerror(*(int*)result);
        /*NO_RETURN*/ print_error(-5, "installation directory invalid: %s\n");
    }
    →sprintf(&GINSTALL_DST, "GINSTALL_DST=%s");
    →putenv(&GINSTALL_DST);
    →sprintf(&v0, "%s/include");
    →sprintf(&GINSTALL_INC, "GINSTALL_INC=%s");
    →putenv(&GINSTALL_INC);
    →sprintf(&v0, "%s/lib");
    →sprintf(&GINSTALL_LIB, "GINSTALL_LIB=%s");
    →putenv(&GINSTALL_LIB);
    char* ptr0 = __file;
    →sprintf(&GEM_GRASS_DIR, "GEM_GRASS_DIR=%s");
    →putenv(&GEM_GRASS_DIR);
    →strdup(v5);
    int v8 = result;
    →strtok(result, &gvar_8055EDB);
    int v9 = result;
    →strtok(0, &gvar_8055EDB);
    int v10 = result;
    →strtok(0, &gvar_8055EDB);
    int v11 = result;
    →strtol(result, 0, 10);
    int v12 = result;
    →strtol(result, 0, 10);
    int v13 = result;
    →strtol(result, 0, 10);
    int v14 = result;
    →free(result);
    /*BAD_CALL!*/ atexit((void __cdecl (*_)())&exit_tmp);
    ptr0 = basename(__filename);
    →sprintf(&v1, "%s/src");
    →chdir(&v1);
    v7 = result;
    if(result < 0) {
        →__errno_location();
        →strerror(*(int*)result);
        /*NO_RETURN*/ print_error(-2, "extension files in \'%s\' not accessible: %s\n");
    }
    if(!SKIP_CFG) {
        if(VERBOSE) {
            →fwrite("Running configure script:\n", 1, 26, stdout);
            →sprintf(&v2, "sh %s %s");
        }
        else {
            →fwrite("Configuring...", 1, 14, stdout);
            →sprintf(&v2, "sh %s %s --quiet &> %s");
        }
        →system(&v2);
        v7 = result;
        if(v7 == -1) {
            /*NO_RETURN*/ print_error(-27, "could not run configure script.\n");
        }
        if(v7 > 0) {
            /*NO_RETURN*/ print_error(-3, "system configuration failed.\n");
        }
        print_done();
        print_cfg();
    }
    →sprintf(&GEM_EXT_NAME, "GEM_EXT_NAME=%s");
    →putenv(&GEM_EXT_NAME);
    unsigned int v15 = param5;
    int v16 = (int)param4;
    →sprintf(&v0, "%i.%i.%i");
    →sprintf(&GEM_EXT_VERSION, "GEM_EXT_VERSION=%s");
    →putenv(&GEM_EXT_VERSION);
    dump_plain("../description", &TMP_DESCR);
    dump_plain("../info", &TMP_INFO);
    dump_plain("../depends", &TMP_DEPS);
    dump_plain("../bugs", &TMP_BUGS);
    dump_plain("../authors", &TMP_AUTHORS);
    →sprintf(&GEM_EXT_DESCR, "GEM_EXT_DESCR=%s");
    →putenv(&GEM_EXT_DESCR);
    →sprintf(&GEM_EXT_INFO, "GEM_EXT_INFO=%s");
    →putenv(&GEM_EXT_INFO);
    →sprintf(&GEM_EXT_DEPS, "GEM_EXT_DEPS=%s");
    →putenv(&GEM_EXT_DEPS);
    →sprintf(&GEM_EXT_BUGS, "GEM_EXT_BUGS=%s");
    →putenv(&GEM_EXT_BUGS);
    →sprintf(&GEM_EXT_AUTHORS, "GEM_EXT_AUTHORS=%s");
    →putenv(&GEM_EXT_AUTHORS);
    atexit((void __cdecl (*_)())&exit_tmp);
    check_dependencies((int)__filename, (int)__file, v5);
    if(VERBOSE) {
        →fprintf(stdout, "Running \'%s\':\n");
        →sprintf(&v2, "%s -f Makefile");
    }
    else {
        →fwrite("Compiling...", 1, 12, stdout);
        →sprintf(&v2, "%s -f Makefile &> %s");
    }
    →system(&v2);
    v7 = result;
    if(v7 == -1 && !VERBOSE) {
        /*NO_RETURN*/ print_error(-9, "could not run \'%s\' do you have make tools installed?\n");
    }
    if(v7 > 0) {
        /*NO_RETURN*/ print_error(-4, "source code could not be compiled.\n \t\t\tRun again with option -v to see what is causing trouble.\n");
    }
    print_done();
    →fwrite("Installing...", 1, 13, stdout);
    →fopen("../uninstall", &gvar_8055E6B);
    int v17 = result;
    if(!result) {
        →__errno_location();
        →strerror(*(int*)result);
        print_warning("error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system");
    }
    else {
        →fclose(result);
    }
    register_extension((int)__file, (int*)&gvar_80566DF, v4, param3, param4, param5);
    check_dependencies((int)__filename, (int)__file, v5);
    if(v12 == 6 && v13 <= 0) {
        register_entries_gisman(v4, (int)__file);
    }
    register_entries_gisman2(v4, (int)__file);
    register_html(v4, (int)__file, (int)param3, (int)param4, (int)param5);
    →fprintf(stdout, "(skipping \'%s install\')...");
    print_done();
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v6;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int uninstall(int param0, int param1, int param2, int param3) {
    int v0;
    char v1;
    char v2;
    int result;
    char v3;
    int v4 = param0;
    int v5 = param1;
    int v6 = param2;
    int v7 = param3;
    int v8 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →fwrite("Un-installing...", 1, 16, stdout);
    →sprintf(&UNINSTALL_BASE, "UNINSTALL_BASE=%s");
    →putenv(&UNINSTALL_BASE);
    →strdup(v7);
    int v9 = result;
    →strtok(result, &gvar_8055EDB);
    int v10 = result;
    →strtok(0, &gvar_8055EDB);
    int v11 = result;
    →strtok(0, &gvar_8055EDB);
    int v12 = result;
    →strtol(result, 0, 10);
    int v13 = result;
    →strtol(result, 0, 10);
    int v14 = result;
    →strtol(result, 0, 10);
    int v15 = result;
    →free(result);
    atexit((void __cdecl (*_)())&exit_tmp);
    deregister_extension(v4, v5, v6);
    if(0) {
        v0 = deregister_entries_gisman(v5, v6);
        if(v0 == -1) {
            print_warning("GIS Manager menu entries could not be removed.\n");
            →memcpy(&GISMAN_CMD, 134572428, 1);
        }
        if(!v0) {
            print_warning("no entries found to remove from GIS Manager.\n");
            →memcpy(&GISMAN_CMD, 134572428, 1);
        }
    }
    deregister_entries_gisman2(v5, v6);
    deregister_html(v5, v6);
    int v16 = v5;
    int v17 = v6;
    →sprintf(&v2, "%s/etc/uninstall.%s");
    unsigned int v18 = 0;
    v0 = stat((char*)&v2, &v3);
    if(v0 < 0) {
        print_warning("no uninstall script available for this extension.\n \t\t\tUnneeded files may have been left on your system.\n");
        v18 = 1;
        goto loc_8051FD5;
    }
    else if(v18) {
    loc_8051FD5:
        →__errno_location();
        →strerror(*(int*)result);
        print_warning("error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system");
    }
    else {
        if(VERBOSE) {
            →sprintf(&v1, "sh %s ; rm -vf %s ; \t\t\t\t\t \t\trm -vrf %s/docs/extensions/%s ; rm -vf %s/etc/dm/gem-entries/%s ; \t\t\t\t\t\t\tcp -vf %s %s/etc/extensions.db ; chmod -v a+r %s/etc/extensions.db ;");
        }
        else {
            →sprintf(&v1, "sh %s &> %s ; rm -vf %s &> %s ; \t\t\t\t\t \t\trm -vrf %s/docs/extensions/%s &> %s ; rm -vf %s/etc/dm/gem-entries/%s &> %s ; \t\t\t\t\t\t\tcp -vf %s %s/etc/extensions.db &> %s ; chmod -v a+r %s/etc/extensions.db &> %s ;");
        }
        →strcpy(&UNINSTALL_CMD, &v1);
    }
    →sprintf(&v1, "%s %s %s");
    su(v6, &v1);
    print_done();
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v8;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int unpack_extension(int param0) {
    char v0;
    int result;
    int v1 = param0;
    int v2 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →fwrite("Uncompressing files...", 1, 22, stdout);
    →memcpy(&TMPDIR, "/tmp/grass.extension.XXXXXX", 28);
    →mkstemp(&TMPDIR);
    int v3 = 0x1ff;
    →open(&TMPDIR, 64);
    int v4 = result;
    if(v4 == -1) {
        →__errno_location();
        →strerror(*(int*)result);
        /*NO_RETURN*/ print_error(-7, "could not create temp directory name: %s");
    }
    if(VERBOSE) {
        →fprintf(stdout, "\nUncompressing to: %s.\n");
    }
    →close(v4);
    →remove(&TMPDIR);
    mkdir_s(&TMPDIR, "0700");
    atexit((void __cdecl (*_)())&exit_tmp);
    →sprintf(&v0, "cp %s %s");
    →system(&v0);
    if(result < 0) {
        /*NO_RETURN*/ print_error(-7, "could not copy extension files to temp dir.\n");
    }
    int v5 = check_filetype(v1);
    if(!v5) {
        print_warning("file name not \'.tar.gz\', \'.tgz\', \'.tar.bz2\', \'.tbz\' or \'.zip\'. Assuming \'.tgz\'.\n");
        v5 = 1;
        goto loc_804FC81;
    }
    else if(v5 == 1) {
    loc_804FC81:
        if(VERBOSE) {
            char* ptr0 = basename((char*)v1);
            →sprintf(&v0, "tar -xzvf %s/%s -C %s");
        }
        else {
            char* ptr1 = basename((char*)v1);
            →sprintf(&v0, "tar -xzf %s/%s -C %s");
        }
    }
    if(v5 == 2) {
        if(VERBOSE) {
            char* ptr2 = basename((char*)v1);
        }
        else {
            char* ptr3 = basename((char*)v1);
        }
        →sprintf(&v0, "tar -xjvf %s/%s -C %s");
    }
    if(v5 == 3) {
        if(VERBOSE) {
            char* ptr4 = basename((char*)v1);
            →sprintf(&v0, "unzip %s/%s -d %s");
        }
        else {
            char* ptr5 = basename((char*)v1);
            →sprintf(&v0, "unzip -qq %s/%s -d %s");
        }
    }
    if(v5 == 4) {
        if(VERBOSE) {
            char* ptr6 = basename((char*)v1);
            →sprintf(&v0, "tar -xvf %s/%s -C %s");
        }
        else {
            char* ptr7 = basename((char*)v1);
            →sprintf(&v0, "tar -xf %s/%s -C %s");
        }
    }
    →system(&v0);
    if(result < 0) {
        if(v5 == 1) {
            /*NO_RETURN*/ print_error(-7, "could not extract files using \'tar\' and \'gzip\'. \n \t\t\t\t\tExtract manually using \'tar -xzvf %s\'.\n");
        }
        if(v5 == 2) {
            /*NO_RETURN*/ print_error(-7, "could not extract files using \'tar\' and \'bunzip2\'.\n \t\t\t\tExtract manually using \'tar -xjvf %s\'.\n");
        }
        if(v5 == 3) {
            /*NO_RETURN*/ print_error(-7, "could not extract files using \'unzip\'.\n \t\t\t\tExtract manually using \'unzip %s\'.\n");
        }
        /*NO_RETURN*/ →exit(-7);
    }
    print_done();
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v2;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int vercmp(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3, unsigned int param4, unsigned int param5) {
    int result;
    if(param0 == param3 && param1 == param4 && param2 == param5) {
        result = 0;
    }
    else if((int)param0 < (int)param3) {
        result = -1;
    }
    else if((int)param0 > (int)param3) {
        result = 1;
    }
    else if((int)param1 < (int)param4) {
        result = -1;
    }
    else if((int)param1 > (int)param4) {
        result = 1;
    }
    else if((int)param2 < (int)param5) {
        result = -1;
    }
    else {
        result = (int)param2 <= (int)param5 ? 0: 1;
    }
    return result;
}

unsigned int wget_extension(int param0) {
    char v0;
    unsigned int result;
    int v1 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →fwrite("Downloading...", 1, 14, stdout);
    if(VERBOSE) {
        →sprintf(&v0, "wget -N %s");
    }
    else {
        →sprintf(&v0, "wget -N -q %s");
    }
    →system(&v0);
    unsigned int v2 = result;
    if(result == -1) {
        /*NO_RETURN*/ print_error(-20, "could not run \'wget\' to download extension. Is it installed?\n");
    }
    if((int)result > 0) {
        /*NO_RETURN*/ print_error(-20, "running command \'%s\'.\n");
    }
    print_done();
    result = (unsigned int)(*(int*)(__GS_BASE + (int)(int*)0x14) ^ v1);
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}
