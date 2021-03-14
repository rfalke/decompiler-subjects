
void __i686.get_pc_thunk.bx() {
}

int atexit(FUNCPTR __func) {
    return →__cxa_atexit();
}

char* basename(char* __filename) {
    char* result;
    char* __s = →strdup(__filename);
    char* __s1 = →strtok(__s, (char*)&gvar_8054A00);
    if(!__s1) {
        if(__s) {
            →free(__s);
        }
        result = NULL;
    }
    else {
        void* __ptr = →strdup(__s1);
        while(__s1) {
            __s1 = →strtok(NULL, (char*)&gvar_8054A00);
            if(__ptr && __s1) {
                →free(__ptr);
            }
            if(__s1 && __s1[0]) {
                __ptr = →strdup(__s1);
            }
        }
        if(__s) {
            →free(__s);
        }
        result = (char*)__ptr;
    }
    return result;
}

int bin_install(char* param0, char* param1, int param2, char* param3, int param4, int param5, int param6, char* param7) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char* __filename = param0;
    char* __file = param1;
    int v5 = param2;
    char* ptr0 = param3;
    char* __s = param7;
    int v6 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v7 = stat(__file, &v4);
    if(v7 < 0) {
        int* ptr1 = →__errno_location();
        →strerror(ptr1[0]);
        /*NO_RETURN*/ print_error(-5, "installation directory invalid: %s\n");
    }
    →sprintf((char*)&GINSTALL_DST, "GINSTALL_DST=%s", __file);
    →putenv((char*)&GINSTALL_DST);
    →sprintf(&v0, "%s/include", __file);
    →sprintf((char*)&GINSTALL_INC, "GINSTALL_INC=%s", &v0);
    →putenv((char*)&GINSTALL_INC);
    →sprintf(&v0, "%s/lib", __file);
    →sprintf((char*)&GINSTALL_LIB, "GINSTALL_LIB=%s", &v0);
    →putenv((char*)&GINSTALL_LIB);
    →sprintf((char*)&GEM_GRASS_DIR, "GEM_GRASS_DIR=%s", __file);
    →putenv((char*)&GEM_GRASS_DIR);
    char* __s1 = →strdup(__s);
    char* __nptr = →strtok(__s1, (char*)&gvar_8055EDB);
    char* __nptr1 = →strtok(NULL, (char*)&gvar_8055EDB);
    char* __nptr2 = →strtok(NULL, (char*)&gvar_8055EDB);
    long v8 = →strtol(__nptr, NULL, 10);
    long v9 = →strtol(__nptr1, NULL, 10);
    long v10 = →strtol(__nptr2, NULL, 10);
    →free(__s1);
    atexit((void __cdecl (*_)())&exit_tmp);
    char* ptr2 = basename(__filename);
    →sprintf(&v1, "%s/%s", ptr2, v5);
    v7 = →chdir(&v1);
    if(v7 < 0) {
        int* ptr3 = →__errno_location();
        →strerror(ptr3[0]);
        /*NO_RETURN*/ print_error(-2, "extension file binaries in \'%s\' not accessible: %s\n");
    }
    →sprintf((char*)&GEM_EXT_NAME, "GEM_EXT_NAME=%s", ptr0);
    →putenv((char*)&GEM_EXT_NAME);
    →sprintf(&v0, "%i.%i.%i", param4, param5, param6);
    →sprintf((char*)&GEM_EXT_VERSION, "GEM_EXT_VERSION=%s", &v0);
    →putenv((char*)&GEM_EXT_VERSION);
    dump_html("../description", (void*)&TMP_DESCR);
    dump_html("../info", (void*)&TMP_INFO);
    dump_html("../depends", (void*)&TMP_DEPS);
    dump_html("../bugs", (void*)&TMP_BUGS);
    dump_html("../authors", (void*)&TMP_AUTHORS);
    →sprintf((char*)&GEM_EXT_DESCR, "GEM_EXT_DESCR=%s", &TMP_DESCR);
    →putenv((char*)&GEM_EXT_DESCR);
    →sprintf((char*)&GEM_EXT_INFO, "GEM_EXT_INFO=%s", &TMP_INFO);
    →putenv((char*)&GEM_EXT_INFO);
    →sprintf((char*)&GEM_EXT_DEPS, "GEM_EXT_DEPS=%s", &TMP_DEPS);
    →putenv((char*)&GEM_EXT_DEPS);
    →sprintf((char*)&GEM_EXT_BUGS, "GEM_EXT_BUGS=%s", &TMP_BUGS);
    →putenv((char*)&GEM_EXT_BUGS);
    →sprintf((char*)&GEM_EXT_AUTHORS, "GEM_EXT_AUTHORS=%s", &TMP_AUTHORS);
    →putenv((char*)&GEM_EXT_AUTHORS);
    atexit((void __cdecl (*_)())&exit_tmp);
    check_dependencies((int)__filename, __file, __s);
    →fwrite("Installing...", 1, 13, stdout);
    FILE* __stream = →fopen("../uninstall", (char*)&gvar_8055E6B);
    if(!__stream) {
        int* ptr4 = →__errno_location();
        →strerror(ptr4[0]);
        print_warning("error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system");
    }
    else {
        if(VERBOSE) {
            →sprintf(&v0, "cp -vf ../uninstall %s/etc/uninstall.%s ;", __file, ptr0);
        }
        else {
            →sprintf(&v0, "cp -f ../uninstall %s/etc/uninstall.%s &> %s ;", __file, ptr0, &TMP_NULL);
        }
        →strcpy((char*)&UNINSTALL_CMD, &v0);
        →fclose(__stream);
    }
    register_extension((int)__file, v5, ptr0, param4, param5, param6);
    check_dependencies((int)__filename, __file, __s);
    if(v8 == 6 && v9 <= 0) {
        register_entries_gisman((int)ptr0, (int)__file);
    }
    register_entries_gisman2((int)ptr0, (int)__file);
    register_html(ptr0, (int)__file, param4, param5, param6);
    if(VERBOSE) {
        →fprintf(stdout, "Running \'%s install\':\n", &MAKE_CMD);
        →sprintf(&v2, "bin/%s -f Makefile install ; \t\t\t\t\tcp -vf %s %s/etc/extensions.db ; chmod -v a+r %s/etc/extensions.db ;", &MAKE_CMD, &TMPDB, __file, __file);
    }
    else {
        →sprintf(&v2, "bin/%s -f Makefile -s install &> %s ; \t\t\t\t\tcp -f %s %s/etc/extensions.db &> %s ; chmod a+r %s/etc/extensions.db &> %s ;", &MAKE_CMD, &TMP_NULL, &TMPDB, __file, &TMP_NULL, __file, &TMP_NULL);
    }
    if(VERBOSE) {
        →memcpy(&v3, "sh ../post", 11);
    }
    else {
        →sprintf((char*)&v3, "sh ../post &> %s", &TMP_NULL);
    }
    →sprintf(&v0, "%s %s %s %s %s %s", &v2, &UNINSTALL_CMD, &GISMAN_CMD, &GISMAN2_CMD, &HTML_CMD, &v3);
    su((int)__file, &v0);
    print_done();
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v6;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int binaries_exist(char* param0, char* param1) {
    int result;
    char v0;
    char v1;
    int v2;
    char* __name = param0;
    char* __s2 = param1;
    int v3 = *(int*)(__GS_BASE + (int)(int*)0x14);
    DIR* __dirp = →opendir(__name);
    if(!__dirp) {
        result = 0;
    }
    else {
        for(dirent* i = →readdir(__dirp); i; i = →readdir(__dirp)) {
            int v4 = →strcmp((char*)i + 11, (char*)&gvar_8054BBE);
            if(v4) {
                int v5 = →strcmp((char*)i + 11, (char*)&gvar_8054BC0);
                if(v5) {
                    int v6 = →strcmp((char*)i + 11, (char*)&gvar_8054BC3);
                    if(v6) {
                        →sprintf(&v0, "%s/%s", __name, (int*)((char*)i + 11));
                        stat(&v0, &v1);
                        if((v2 & 0xf000) == 0x4000) {
                            int v7 = →strcmp((char*)i + 11, __s2);
                            if(!v7) {
                                result = 1;
                                goto loc_804AA9F;
                            }
                        }
                    }
                }
            }
        }
        result = 0;
    }
loc_804AA9F:
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v3)) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int check_dependencies(int param0, char* param1, char* param2) {
    int v0;
    char* ptr0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    char* ptr1;
    char v9;
    char v10;
    char v11;
    char v12;
    char v13;
    int v14 = param0;
    char* ptr2 = param1;
    char* ptr3 = param2;
    int v15 = *(int*)(__GS_BASE + (int)(int*)0x14);
    if(!FORCE) {
        FILE* __stream = →fopen("../depends", (char*)&gvar_8054D13);
        if(!__stream) {
            int* ptr4 = →__errno_location();
            if(ptr4[0] == 2) {
                →fprintf(stderr, "\n%s/depends ENOENT\n", v14);
                goto loc_804BE6A;
            }
            else {
                →fclose(NULL);
                int* ptr5 = →__errno_location();
                ptr1 = →strerror(ptr5[0]);
                /*NO_RETURN*/ print_error(-17, "checking for file \'%s\': %s\n");
            }
        }
        else {
            int v16 = 1;
            →sprintf(&v9, "%s/etc/extensions.db", ptr2);
            FILE* __stream1 = →fopen(&v9, (char*)&gvar_8054D13);
            if(!__stream1) {
                int* ptr6 = →__errno_location();
                if(ptr6[0] != 2) {
                    →fclose(NULL);
                    int* ptr7 = →__errno_location();
                    ptr1 = →strerror(ptr7[0]);
                    /*NO_RETURN*/ print_error(-17, "checking for file \'%s\': %s\n");
                }
                v16 = 0;
            }
            int v17 = 0;
        loc_804BE32:
            do {
                char* ptr8 = nc_fgets_nb(&v10, 0x800, __stream);
                if(!ptr8) {
                    if(v16) {
                        →fclose(__stream1);
                    }
                    →fclose(__stream);
                    goto loc_804BE6A;
                }
                else {
                    v8 = 0;
                    v7 = 0;
                    v6 = 0;
                    v5 = 0;
                    v4 = 0;
                    v3 = 0;
                    v2 = &v3;
                    v1 = &v4;
                    ptr1 = &v5;
                    ptr0 = &v13;
                    v0 = →__isoc99_sscanf();
                    if(v0 > 0) {
                        int v18 = →strcmp(&v13, "GRASS");
                        →__isoc99_sscanf();
                        int v19 = vercmp(v8, v7, v6, v5, v4, v3);
                        if(v19 < 0) {
                            v2 = v3;
                            v1 = v4;
                            ptr1 = (char*)v5;
                            /*NO_RETURN*/ print_error(-18, "installed version (%s) of GRASS is too low. Required version is %i.%i.%i\n");
                        }
                        v17 = 1;
                    }
                    goto loc_804BE32;
                }
            }
            while(!v16);
            v17 = 0;
            →rewind(__stream1);
            for(char* i = nc_fgets_nb(&v11, 0x800, __stream1); i; i = nc_fgets_nb(&v11, 0x800, __stream1)) {
                v8 = 0;
                v7 = 0;
                v6 = 0;
                v2 = &v6;
                v1 = &v7;
                ptr1 = &v8;
                ptr0 = &v12;
                v0 = →__isoc99_sscanf();
                if(v0 > 0) {
                    int v20 = →strcmp(&v12, &v13);
                    if(!v20) {
                        int v21 = vercmp(v8, v7, v6, v5, v4, v3);
                        if(v21 < 0) {
                            int v22 = v3;
                            int v23 = v5;
                            v2 = (int)&v13;
                            v1 = v6;
                            ptr1 = (char*)v7;
                            /*NO_RETURN*/ print_error(-18, "installed version %i.%i.%i of required extension \'%s\' is too low.\n \t\t\t\t\t\t\t\t\t\t\t\t\tRequired version is %i.%i.%i\n");
                        }
                        v17 = 1;
                    }
                }
            }
            if(!v17) {
                ptr1 = ptr2;
                /*NO_RETURN*/ print_error(-18, "required extension \'%s\' not found in \'%s\'.\n");
            }
            goto loc_804BE32;
        }
    }
    else {
    loc_804BE6A:
        int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v15;
        if(result) {
            result = /*NO_RETURN*/ →__stack_chk_fail();
        }
        return result;
    }
}

int check_ext_menu(int param0) {
    int result1;
    int result = find_pos("\"&Xtns\" all options 1", param0, 0);
    if(result == -1) {
        result = find_pos("\"&Help\" all options", param0, 0);
        if(result == -1) {
            result = find_pos((char*)&gvar_8055212, param0, 0);
            if(result == -1) {
                /*NO_RETURN*/ print_error(-21, "could not parse \'menu.tcl\'.\n");
            }
            insert_str(" \"&Xtns\" all options 1 {\n", result, param0);
            ++result;
            insert_str((char*)&gvar_805524C, result, param0);
            result1 = result;
        }
        else {
            insert_str(" \"&Xtns\" all options 1 {\n", result, param0);
            ++result;
            insert_str((char*)&gvar_805524C, result, param0);
            return result;
        }
    }
    else {
        result1 = result;
    }
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int check_extension(char* param0, char* param1, char* param2, char* param3, int* param4) {
    char* ptr0;
    char v0;
    char* __src = param0;
    char* ptr1 = param1;
    char* ptr2 = param2;
    char* ptr3 = param3;
    int* ptr4 = param4;
    int v1 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v2 = 0;
    int* ptr5 = &v0;
    for(int i = 0x1ff; i != 0; --i) {
        *ptr5 = 0;
        ++ptr5;
    }
    →fwrite("Checking extension ...", 1, 22, stdout);
    →strcpy(&v2, __src);
    int v3 = →chdir(&v2);
    if(v3 < 0) {
        int* ptr6 = →__errno_location();
        ptr0 = →strerror(ptr6[0]);
        /*NO_RETURN*/ print_error(-2, "extension \'%s\' not accessible: %s\n");
    }
    FILE* __stream = →fopen((char*)&gvar_8055E6D, (char*)&gvar_8055E6B);
    if(!__stream) {
        /*NO_RETURN*/ print_error(-6, "\'id\' file not readable.\n");
    }
    char* ptr7 = &v2;
    →__isoc99_fscanf();
    int v4 = →strcmp("<GRASS extension package>", &v2);
    if(v4) {
        →fclose(__stream);
        /*NO_RETURN*/ print_error(-6, "unknown file identifier.\n");
    }
    →fclose(__stream);
    get_package_name(&gvar_8055EDB, ptr1);
    __stream = →fopen("version", (char*)&gvar_8055E6B);
    if(!__stream) {
        /*NO_RETURN*/ print_error(-6, "\'version\' file not readable.\n");
    }
    nc_fgets_nb((int)&v2, 0x800, (int)__stream);
    *(int*)&ptr3[0] = 0;
    *ptr4 = 0;
    int* ptr8 = ptr4;
    ptr0 = ptr3;
    ptr7 = ptr2;
    int v5 = "%i.%i.%i";
    v3 = →__isoc99_sscanf();
    if(v3 <= 0) {
        →fclose(__stream);
        /*NO_RETURN*/ print_error(-6, "invalid or missing version information.\n");
    }
    print_done();
    →chdir((char*)&gvar_8055F35);
    →fclose(__stream);
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v1;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int check_filetype(char* __haystack) {
    int result;
    char* ptr0 = →strstr(__haystack, ".tar.gz");
    if(ptr0) {
        result = 1;
    }
    else {
        char* ptr1 = →strstr(__haystack, ".tgz");
        if(ptr1) {
            result = 1;
        }
        else {
            char* ptr2 = →strstr(__haystack, ".tar.bz2");
            if(ptr2) {
                result = 2;
            }
            else {
                char* ptr3 = →strstr(__haystack, ".tbz");
                if(ptr3) {
                    result = 2;
                }
                else {
                    char* ptr4 = →strstr(__haystack, ".zip");
                    if(ptr4) {
                        result = 3;
                    }
                    else {
                        char* ptr5 = →strstr(__haystack, ".tar");
                        result = ptr5 != 0 ? 4: 0;
                    }
                }
            }
        }
    }
    return result;
}

int chop(char* __s) {
    int v0 = 0;
    int result = 0;
    size_t v1 = →strlen(__s);
    int v2 = (int)(v1 - 1);
    while(v2 >= 0) {
        v0 = 1;
        if(__s[v2] == 10 || __s[v2] == 9 || __s[v2] == 32 || __s[v2] == 12 || __s[v2] == 13) {
            ++result;
            v0 = 0;
        }
        if(v0 == 1) {
            break;
        }
        else {
            --v2;
        }
    }
    size_t v3 = →strlen(__s);
    *(char*)(v3 - result + (int)__s) = 0;
    return result;
}

int delete_ext_html(int param0, int param1, int param2) {
    char v0;
    int v1 = param0;
    int v2 = param1;
    int v3 = param2;
    int v4 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v5 = find_pos("<b>Drivers sections:</b>", v3, 0);
    if(v5 < 0) {
        v5 = find_pos("<!-- GEM Extensions StartHTML. Do not delete or change this comment! -->", v3, 0);
        if(v5 >= 0) {
            goto loc_804E624;
        }
        else {
            print_warning("Unknown format of index.html. Unable to de-register HTML man pages.\n");
        }
    }
    else {
    loc_804E624:
        int v6 = find_pos("<hr>", v3, v5);
        int v7 = find_pos("<h3>Installed extensions:</h3>", v3, v5);
        if(v7 == -1) {
            print_warning("no extensions section found in index.html.\n");
        }
        else {
            int v8 = find_pos("<h3>Installed extensions:</h3>", v3, v5);
            int v9 = find_pos("</ul>", v3, v8);
            int v10 = 0;
            →sprintf(&v0, "\">%s", v1);
            int v11 = find_pos(&v0, v3, v8);
            if(v11 == -1) {
                print_warning("extension \'%s\' not listed in index.html.\n");
            }
            else {
                if(v9 > v11) {
                    delete_str(v11, v3);
                }
                --v9;
                v11 = find_pos("<ul>", v3, v8);
                if(v11 != -1 && v9 > v11 && v9 - v11 <= 1) {
                    for(int i = 0; i <= 3; ++i) {
                        delete_str(v11 - 1, v3);
                    }
                }
            }
        }
    }
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v4;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int delete_str(int param0, int param1) {
    int i;
    for(i = 0; *(int*)(i * 4 + param1); ++i) {
    }
    if(param0 < 0 || i < param0) {
        int v0 = param0;
        /*NO_RETURN*/ print_error(-21, "delete: invalid line number %i.\n");
    }
    for(i = param0; *(int*)(i * 4 + param1); ++i) {
        →free(*(void**)(i * 4 + param1));
        if(*(int*)((i + 1) * 4 + param1)) {
            unsigned int* ptr0 = (unsigned int*)(i * 4 + param1);
            size_t v1 = →strlen(*(char**)((i + 1) * 4 + param1));
            void* ptr1 = →malloc(v1 + 1);
            *ptr0 = ptr1;
            →strcpy(*(char**)(i * 4 + param1), *(char**)((i + 1) * 4 + param1));
        }
    }
    --i;
    *(int*)(i * 4 + param1) = 0;
    return i;
}

// Stale decompilation - Refresh this view to re-decompile this code
int depstr(int param0, int param1) {
    int result;
    char v0;
    char v1;
    char v2;
    int v3 = param0;
    int v4 = param1;
    int v5 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →memcpy(&v0, "../depends", 11);
    FILE* __stream = →fopen((char*)&v0, (char*)&gvar_8054D13);
    if(!__stream) {
        int* ptr0 = →__errno_location();
        if(ptr0[0] == 2) {
            result = &gvar_8054D15;
        }
        else {
            int* ptr1 = →__errno_location();
            char* ptr2 = →strerror(ptr1[0]);
            /*NO_RETURN*/ print_error(-17, "checking for file \'%s\': %s\n");
        }
    }
    else {
        int v6 = 1;
        char* __dest = (char*)→malloc(0x800);
    loc_804AFE0:
        for(int i = nc_fgets_nb((int)&v1, 0x800, (int)__stream); i; i = nc_fgets_nb((int)&v1, 0x800, (int)__stream)) {
            if(v1) {
                void* ptr3 = &v2;
                int v7 = →__isoc99_sscanf();
                if(v7 > 0) {
                    int v8 = →strcmp("GRASS", &v2);
                    if(v8) {
                        if(v6) {
                            →strcat(__dest, (char*)&gvar_8054D3B);
                            →strcat(__dest, &v2);
                            v6 = 0;
                            goto loc_804AFE0;
                        }
                        else {
                            →strcat(__dest, (char*)&gvar_8054D3D);
                            →strcat(__dest, &v2);
                        }
                    }
                }
            }
        }
        →fclose(__stream);
        result = (int)__dest;
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v5)) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int deregister_entries_gisman(int param0, int param1) {
    int result;
    char v0;
    char v1;
    char v2;
    int v3;
    int v4 = param0;
    int v5 = param1;
    int v6 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →sprintf(&v0, "%s/etc/dm/menu.tcl", v5);
    FILE* __stream = →fopen(&v0, (char*)&gvar_80553F1);
    if(!__stream) {
        int* ptr0 = →__errno_location();
        if(ptr0[0] == 2) {
            result = 0;
        }
        else {
            →fclose(NULL);
            int* ptr1 = →__errno_location();
            char* ptr2 = →strerror(ptr1[0]);
            char* ptr3 = &v0;
            /*NO_RETURN*/ print_error(-22, "checking for file \'%s\': %s\n");
        }
    }
    else {
        →memcpy((void*)&TMP_GISMAN, "/tmp/grass.extensions.db.XXXXXX", 32);
        →mkstemp((char*)&TMP_GISMAN);
        FILE* __stream1 = →fopen((char*)&TMP_GISMAN, (char*)&gvar_8055444);
        if(!__stream1) {
            int* ptr4 = →__errno_location();
            →strerror(ptr4[0]);
            /*NO_RETURN*/ print_error(-21, "could not create temp file \'%s\': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        atexit((void __cdecl (*_)())&exit_db);
        if(VERBOSE) {
            →sprintf(&v1, "cp -vf %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak ; \t\t\t\t\t\tcp -vf %s %s/etc/dm/menu.tcl ; chmod -v a+r %s/etc/dm/menu.tcl ;", v5, v5, &TMP_GISMAN, v5, v5);
        }
        else {
            →sprintf(&v1, "cp -f %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak &> %s ; \t\t\t\t\t\tcp -f %s %s/etc/dm/menu.tcl &> %s ; chmod a+r %s/etc/dm/menu.tcl &> %s ;", v5, v5, &TMP_NULL, &TMP_GISMAN, v5, &TMP_NULL, v5, &TMP_NULL);
        }
        →strcpy((char*)&GISMAN_CMD, &v1);
        int v7 = 0;
        for(char* i = →fgets(&v1, 0x800, __stream); i; i = →fgets(&v1, 0x800, __stream)) {
            ++v7;
        }
        if(!v7) {
            result = -1;
        }
        else {
            →rewind(__stream);
            int v8 = v7;
            int v9 = (int)→calloc((size_t)(v7 + 1), 4);
            int j;
            for(j = 0; j < v7 + 1; ++j) {
                *(int*)(j * 4 + v9) = 0;
            }
            j = 0;
            for(char* k = →fgets(&v1, 0x800, __stream); k; k = →fgets(&v1, 0x800, __stream)) {
                unsigned int* ptr5 = (unsigned int*)(j * 4 + v9);
                size_t v10 = →strlen(&v1);
                void* ptr6 = →malloc(v10 + 1);
                *ptr5 = ptr6;
                →strcpy(*(char**)(j * 4 + v9), &v1);
                ++j;
            }
            →sprintf(&v1, "#(DO_NOT_REMOVE_THIS_COMMENT) <%s> {cascad", v4);
            int v11 = find_pos(&v1, v9, 0);
            if(v11 == -1) {
                print_warning("could not find uninstall information in \'menu.tcl\'.\n");
                result = -1;
            }
            else {
                char* ptr7 = →strchr(*(char**)(v11 * 4 + v9), 34);
                char* __s = ptr7 + 1;
                char* ptr8 = →strchr(__s, 34);
                →strcpy(&v2, __s);
                *(char*)((int*)((int)(int*)((int)ptr8 - (int)__s) + (int)&v3) - 1539) = 0;
                int v12 = find_pos("\"&Xtns\" all options 1", v9, 0);
                int v13 = find_pos("\" all options", v9, v12 + 1);
                int v14 = v13 - 1;
                if(v14 == -1) {
                    v14 = find_pos((char*)&gvar_8055212, v9, 0);
                }
                if(v12 == -1) {
                    print_warning("menu \'Xtns\' does not exist.\n");
                    result = -1;
                }
                else {
                    →sprintf(&v1, "{cascad \"%s\"", &v2);
                    int v15 = find_pos(&v1, v9, v12);
                    if(v15 == -1 || v15 > v14) {
                        print_warning("could not find submenu entry \'%s\' in \'menu.tcl\'.\n");
                        result = -1;
                    }
                    else {
                        int v16 = find_pos(" \t\t\t}}", v9, v15);
                        if(v16 == -1 || v16 > v14) {
                            print_warning("could not find end of submenu entry \'%s\' in \'menu.tcl\'.\n");
                            result = -1;
                        }
                        else {
                            int v17 = 0;
                            for(j = 0; j < v16 - v15 + 1; ++j) {
                                delete_str(v15, v9);
                                ++v17;
                            }
                            →sprintf(&v1, "#(DO_NOT_REMOVE_THIS_COMMENT) <%s> {cascad", v4);
                            v11 = find_pos(&v1, v9, 0);
                            delete_str(v11, v9);
                            ++v17;
                            v12 = find_pos("\"&Xtns\" all options 1", v9, 0);
                            int v18 = find_pos("\" all options", v9, v12 + 1);
                            v14 = v18 - 1;
                            if(v14 - v12 <= 2) {
                                for(j = 0; j < v14 - v12 + 1; ++j) {
                                    delete_str(v12, v9);
                                    ++v17;
                                }
                            }
                            for(j = 0; *(int*)(j * 4 + v9); ++j) {
                                →fprintf(__stream1, *(char**)(j * 4 + v9));
                            }
                            →fflush(__stream1);
                            →rewind(__stream1);
                            int v19 = 0;
                            for(char* counter = →fgets(&v1, 0x800, __stream1); counter; counter = →fgets(&v1, 0x800, __stream1)) {
                                ++v19;
                            }
                            if(!v19) {
                                print_warning("file truncation detected. Retaining orginal file \'menu.tcl\'.\n");
                                →memcpy((void*)&GISMAN_CMD, (void*)&gvar_8055722, 1);
                            }
                            →fclose(__stream);
                            →fclose(__stream1);
                            for(j = 0; j < v7 + 1; ++j) {
                                →free(*(void**)(j * 4 + v9));
                            }
                            →free((void*)v9);
                            result = v17;
                        }
                    }
                }
            }
        }
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v6)) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int deregister_entries_gisman2(int param0, int param1) {
    char v0;
    char v1;
    int v2 = param0;
    int v3 = param1;
    int v4 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →sprintf(&v0, "%s/etc/gm/Xtns/%s.gem", v3, v2);
    FILE* ptr0 = →fopen(&v0, (char*)&gvar_80553F1);
    if(!ptr0) {
        int* ptr1 = →__errno_location();
        if(ptr1[0] != 2) {
            →fclose(NULL);
            int* ptr2 = →__errno_location();
            →strerror(ptr2[0]);
            /*NO_RETURN*/ print_error(-33, "checking for file \'%s\': %s\n");
        }
    }
    else {
        if(VERBOSE) {
            →sprintf(&v1, "rm -vf %s/etc/gm/Xtns/%s.gem ; ", v3, v2);
        }
        else {
            →sprintf(&v1, "rm -f %s/etc/gm/Xtns/%s.gem ; ", v3, v2);
        }
        →strcpy((char*)&GISMAN_CMD, &v1);
    }
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v4;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int deregister_extension(int param0, char* param1, char* param2) {
    FILE* __stream;
    char* ptr0;
    char* ptr1;
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    int v8 = param0;
    char* __s1 = param1;
    char* ptr2 = param2;
    int v9 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v10 = 0;
    →sprintf(&v0, "%s/etc/extensions.db", ptr2);
    FILE* __stream1 = →fopen(&v0, (char*)&gvar_8054D13);
    if(!__stream1) {
        int* ptr3 = →__errno_location();
        if(ptr3[0] == 2 && !FORCE) {
            →fclose(NULL);
            /*NO_RETURN*/ print_error(-19, "could not deregister: no extensions installed\n");
        }
        if(!FORCE) {
            →fclose(NULL);
            int* ptr4 = →__errno_location();
            ptr1 = →strerror(ptr4[0]);
            ptr0 = &v0;
            /*NO_RETURN*/ print_error(-19, "checking for file \'%s\': %s\n");
        }
    }
    else {
        v10 = 1;
    }
    if(v10) {
        v10 = 0;
        →memcpy((void*)&TMPDB, "/tmp/grass.extensions.db.XXXXXX", 32);
        →mkstemp((char*)&TMPDB);
        __stream = →fopen((char*)&TMPDB, (char*)&gvar_8054D74);
        if(!__stream && !FORCE) {
            int* ptr5 = →__errno_location();
            ptr1 = →strerror(ptr5[0]);
            /*NO_RETURN*/ print_error(-19, "could not create temp db \'%s\': %s\n \t\t\t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        v10 = 1;
        atexit((void __cdecl (*_)())&exit_db);
    }
    if(v10) {
        int v11 = 0;
        for(int i = nc_fgets_nb((int)&v1, 0x800, (int)__stream1); i; i = nc_fgets_nb((int)&v1, 0x800, (int)__stream1)) {
            char* ptr6 = &v4;
            int* ptr7 = &v5;
            int* ptr8 = &v6;
            int* ptr9 = &v3;
            ptr1 = &v7;
            ptr0 = &v2;
            int v12 = →__isoc99_sscanf();
            if(v12 > 0) {
                int v13 = 1;
                int v14 = →strcmp(__s1, &v2);
                if(!v14) {
                    v13 = 0;
                    v11 = 1;
                }
                if(v13) {
                    char* ptr10 = →strstr(&v4, __s1);
                    if(ptr10 && !FORCE) {
                        ptr1 = &v2;
                        ptr0 = __s1;
                        /*NO_RETURN*/ print_error(-19, "cannot uninstall extension \'%s\' it is needed by \'%s\'.\n");
                    }
                    →fprintf(__stream, &v1);
                }
            }
        }
        if(!v11) {
            ptr1 = ptr2;
            ptr0 = __s1;
            /*NO_RETURN*/ print_error(-19, "no extension \'%s\' registered/installed in \'%s\'.\n");
        }
        →fclose(__stream1);
        →fclose(__stream);
    }
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v9;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int deregister_html(int param0, int param1) {
    char v0;
    char v1;
    int v2 = param0;
    int v3 = param1;
    int v4 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →sprintf(&v0, "%s/docs/html/index.html", v3);
    FILE* __stream = →fopen(&v0, (char*)&gvar_8055C93);
    if(!__stream) {
        int* ptr0 = →__errno_location();
        if(ptr0[0] != 2) {
            →fclose(NULL);
            int* ptr1 = →__errno_location();
            char* ptr2 = →strerror(ptr1[0]);
            char* ptr3 = &v0;
            /*NO_RETURN*/ print_error(-24, "checking for file \'%s\': %s\n");
        }
    }
    else {
        →memcpy((void*)&TMP_HTML, "/tmp/grass.extensions.db.XXXXXX", 32);
        →mkstemp((char*)&TMP_HTML);
        FILE* __stream1 = →fopen((char*)&TMP_HTML, (char*)&gvar_8055CD4);
        if(!__stream1) {
            int* ptr4 = →__errno_location();
            →strerror(ptr4[0]);
            /*NO_RETURN*/ print_error(-24, "could not create temp file \'%s\': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        atexit((void __cdecl (*_)())&exit_db);
        if(VERBOSE) {
            →sprintf(&v1, "cp -vf %s %s/docs/html/index.html ; chmod -v a+r %s/docs/html/index.html ;", &TMP_HTML, v3, v3);
        }
        else {
            →sprintf(&v1, "cp -f %s %s/docs/html/index.html &>%s ; chmod a+r %s/docs/html/index.html &>%s ;", &TMP_HTML, v3, &TMP_NULL, v3, &TMP_NULL);
        }
        →strcpy((char*)&HTML_CMD, &v1);
        int v5 = 0;
        for(char* i = →fgets(&v1, 0x800, __stream); i; i = →fgets(&v1, 0x800, __stream)) {
            ++v5;
        }
        if(v5) {
            →rewind(__stream);
            int v6 = (int)→calloc((size_t)(v5 + 1), 4);
            int j;
            for(j = 0; j < v5 + 1; ++j) {
                *(int*)(j * 4 + v6) = 0;
            }
            j = 0;
            for(char* k = →fgets(&v1, 0x800, __stream); k; k = →fgets(&v1, 0x800, __stream)) {
                unsigned int* ptr5 = (unsigned int*)(j * 4 + v6);
                size_t v7 = →strlen(&v1);
                void* ptr6 = →malloc(v7 + 1);
                *ptr5 = ptr6;
                →strcpy(*(char**)(j * 4 + v6), &v1);
                ++j;
            }
            delete_ext_html(v2, v3, v6);
            for(j = 0; *(int*)(j * 4 + v6); ++j) {
                →fprintf(__stream1, *(char**)(j * 4 + v6));
            }
            →fflush(__stream1);
            →fclose(__stream);
            →fclose(__stream1);
            for(j = 0; j < v5 + 1; ++j) {
                →free(*(void**)(j * 4 + v6));
            }
            →free((void*)v6);
        }
    }
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v4;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int dump_ascii(char* param0, int param1) {
    char v0;
    char* __filename = param0;
    int v1 = param1;
    int v2 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →fprintf(stdout, (char*)&gvar_8054AB2, v1);
    FILE* __stream = →fopen(__filename, (char*)&gvar_8054A6F);
    if(!__stream) {
        →fwrite("  No information available.\n", 1, 28, stdout);
    }
    else {
        for(int i = nc_fgets_html((int)&v0, 0x800, (int)__stream); i; i = nc_fgets_html((int)&v0, 0x800, (int)__stream)) {
            →fprintf(stdout, "  %s", &v0);
        }
        →fputc(10, stdout);
        →fclose(__stream);
    }
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v2;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int dump_html(char* param0, void* param1) {
    char v0;
    char v1;
    int __fd;
    char* __filename = param0;
    void* __dest = param1;
    int v2 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →memcpy(__dest, "/tmp/grass.extensions.db.XXXXXX", 32);
    →mkstemp((char*)__dest);
    FILE* __s = →fopen((char*)__dest, (char*)&gvar_8054B0C);
    if(!__s) {
        int* ptr0 = →__errno_location();
        char* ptr1 = →strerror(ptr0[0]);
        void* ptr2 = __dest;
        /*NO_RETURN*/ print_error(-23, "could not create temp file \'%s\': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
    }
    atexit((void __cdecl (*_)())&exit_db);
    FILE* __stream = →fopen(__filename, (char*)&gvar_8054A6F);
loc_804A690:
    int v3 = nc_fgets((int)&v0, 0x800, (int)__stream);
    while(v3) {
        chop(&v0);
        int v4 = is_text(&v0);
        if(!v4) {
            →fwrite("<p>\n", 1, 4, __s);
            goto loc_804A690;
        }
        else {
            →sprintf(&v1, "%s <br>\n", &v0);
            →fprintf(__s, &v1);
            v3 = nc_fgets((int)&v0, 0x800, (int)__stream);
        }
    }
    →fclose(__stream);
    →fclose(__s);
    →close(__fd);
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v2;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int dump_plain(char* param0, void* param1) {
    char v0;
    char* __filename = param0;
    void* __dest = param1;
    int v1 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →memcpy(__dest, "/tmp/grass.extensions.db.XXXXXX", 32);
    →mkstemp((char*)__dest);
    FILE* __stream = →fopen((char*)__dest, (char*)&gvar_8054B0C);
    if(!__stream) {
        int* ptr0 = →__errno_location();
        char* ptr1 = →strerror(ptr0[0]);
        void* ptr2 = __dest;
        /*NO_RETURN*/ print_error(-23, "could not create temp file \'%s\': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
    }
    atexit((void __cdecl (*_)())&exit_db);
    FILE* __stream1 = →fopen(__filename, (char*)&gvar_8054A6F);
    for(int i = nc_fgets((int)&v0, 0x800, (int)__stream1); i; i = nc_fgets((int)&v0, 0x800, (int)__stream1)) {
        →fprintf(__stream, &v0);
    }
    →fclose(__stream1);
    →fclose(__stream);
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v1;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int dump_str(FILE* __stream, int param1) {
    for(int i = 0; *(int*)(i * 4 + param1); ++i) {
        →fprintf(__stream, "%i: %s", i, *(int*)(i * 4 + param1));
    }
    return 0;
}

int exit_db() {
    int v0;
    char v1;
    int v2 = *(int*)(__GS_BASE + (int)(int*)0x14);
    if(!TMPDBCLEAN) {
        →chdir((char*)&CWD);
        if(VERBOSE) {
            →fwrite("Removing temporary registration files...", 1, 40, stdout);
        }
        if(TMPDB) {
            →sprintf(&v1, "rm -rf %s", &TMPDB);
            v0 = →system(&v1);
            if(v0) {
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if(TMP_GISMAN) {
            →sprintf(&v1, "rm -f %s", &TMP_GISMAN);
            v0 = →system(&v1);
            if(v0) {
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if(TMP_DESCR) {
            →sprintf(&v1, "rm -f %s", &TMP_DESCR);
            v0 = →system(&v1);
            if(v0) {
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if(TMP_INFO) {
            →sprintf(&v1, "rm -f %s", &TMP_INFO);
            v0 = →system(&v1);
            if(v0) {
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if(TMP_DEPS) {
            →sprintf(&v1, "rm -f %s", &TMP_DEPS);
            v0 = →system(&v1);
            if(v0) {
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if(TMP_BUGS) {
            →sprintf(&v1, "rm -f %s", &TMP_BUGS);
            v0 = →system(&v1);
            if(v0) {
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if(TMP_AUTHORS) {
            →sprintf(&v1, "rm -f %s", &TMP_AUTHORS);
            v0 = →system(&v1);
            if(v0) {
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if(TMP_HTML) {
            →sprintf(&v1, "rm -f %s", &TMP_HTML);
            v0 = →system(&v1);
            if(v0) {
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if(!VERBOSE && TMP_NULL) {
            →sprintf(&v1, "rm -f %s", &TMP_NULL);
            v0 = →system(&v1);
            if(v0) {
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if(VERBOSE) {
            print_done();
        }
        TMPDBCLEAN = 1;
    }
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v2;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

void exit_env() {
}

int exit_msg() {
    int result;
    if(ERROR >= 0x80000000) {
        result = →fprintf(stdout, "Program exited with an error (code %i). Operation aborted.\n", ERROR);
    }
    else {
        if(WARNINGS == 1) {
            →fwrite("Job done but there was one warning. Please check.\n", 1, 50, stdout);
        }
        result = WARNINGS;
        if(result > 1) {
            result = →fprintf(stdout, "Job done but there were %i warnings. Please check.\n", WARNINGS);
        }
    }
    return result;
}

int exit_tmp() {
    char v0;
    int v1 = *(int*)(__GS_BASE + (int)(int*)0x14);
    if(!TMPDIR) {
        TMPCLEAN = 1;
    }
    else if(!TMPCLEAN) {
        →chdir((char*)&CWD);
        →sprintf(&v0, "rm -rf %s/*", &TMPDIR);
        if(VERBOSE) {
            →fwrite("Removing temporary extension files...", 1, 37, stdout);
        }
        int v2 = →system(&v0);
        →sprintf(&v0, "rmdir %s", &TMPDIR);
        →system(&v0);
        DIR* ptr0 = →opendir((char*)&TMPDIR);
        if(ptr0) {
            print_warning("could not remove temporary directory %s.\nPlease remove manually.\n");
        }
        if(VERBOSE) {
            print_done();
        }
        TMPCLEAN = 1;
    }
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v1;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int find_pos(char* __needle, int param1, int param2) {
    int i;
    for(i = 0; *(int*)(i * 4 + param1); ++i) {
    }
    if(param2 < 0 || i < param2) {
        /*NO_RETURN*/ →exit(-21);
    }
    int result = param2;
    while(result < i) {
        char* ptr0 = →strstr(*(char**)(result * 4 + param1), __needle);
        if(ptr0) {
            return result;
        }
        ++result;
    }
    return -1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int get_configure_options(int param0) {
    char v0;
    int v1 = param0;
    int v2 = *(int*)(__GS_BASE + (int)(int*)0x14);
    if(!CONFIG_OPTS) {
        →sprintf(&v0, "%s/etc/config.system", v1);
        FILE* ptr0 = →fopen(&v0, (char*)&gvar_80578DE);
        if(!ptr0) {
            print_warning("could not open %s for read access. Using default configure options.\n");
        }
        else {
            int v3 = nc_fgets_nb((int)&v0, 0x800, (int)ptr0);
            if(v3) {
                →strcpy((char*)&CONFIG_OPTS, &v0);
            }
        }
    }
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v2;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int get_package_name(int param0, char* param1) {
    char v0;
    char v1;
    int v2 = param0;
    char* __dest = param1;
    int v3 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →sprintf(&v0, "%s/%s", v2, "name");
    FILE* __stream = →fopen(&v0, (char*)&gvar_8054A6F);
    if(!__stream) {
        /*NO_RETURN*/ print_error(-6, "\'name\' file not readable.\n");
    }
    int v4 = nc_fgets_nb((int)&v1, 0x800, (int)__stream);
    if(!v4) {
        →fclose(__stream);
        /*NO_RETURN*/ print_error(-6, "invalid or missing extension name.\n");
    }
    chop(&v1);
    →strcpy(__dest, &v1);
    →fclose(__stream);
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v3;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int insert_str(char* param0, int param1, int param2) {
    int result;
    size_t __size;
    char v0;
    char v1;
    char v2;
    char* __s = param0;
    int v3 = param2;
    int v4 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int i;
    for(i = 0; *(int*)(i * 4 + v3); ++i) {
    }
    if(param1 < 0 || i < param1) {
        int v5 = param1;
        /*NO_RETURN*/ print_error(-21, "insert: invalid line number %i.\n");
    }
    if(i == param1) {
        size_t v6 = →strlen(__s);
        __size = v6 + 1;
        unsigned int* ptr0 = (unsigned int*)(i * 4 + v3);
        void* ptr1 = →malloc(__size);
        *ptr0 = ptr1;
        →strcpy(*(char**)(i * 4 + v3), __s);
        i += 2;
        *(int*)((i - 1) * 4 + v3) = 0;
        result = i;
    }
    else {
        →strcpy(&v0, *(char**)((i - 1) * 4 + v3));
        →strcpy(&v1, *(char**)(param1 * 4 + v3));
        →free(*(void**)(param1 * 4 + v3));
        unsigned int* ptr2 = (unsigned int*)(param1 * 4 + v3);
        size_t v7 = →strlen(__s);
        void* ptr3 = →malloc(v7 + 1);
        *ptr2 = ptr3;
        →strcpy(*(char**)(param1 * 4 + v3), __s);
        for(int j = param1; j < i - 1; ++j) {
            →strcpy(&v2, *(char**)((j + 1) * 4 + v3));
            →free(*(void**)((j + 1) * 4 + v3));
            size_t v8 = →strlen(&v1);
            __size = v8 + 1;
            unsigned int* ptr4 = (unsigned int*)((j + 1) * 4 + v3);
            void* ptr5 = →malloc(__size);
            *ptr4 = ptr5;
            →strcpy(*(char**)((j + 1) * 4 + v3), &v1);
            →strcpy(&v1, &v2);
        }
        unsigned int* ptr6 = (unsigned int*)(i * 4 + v3);
        size_t v9 = →strlen(&v0);
        void* ptr7 = →malloc(v9 + 1);
        *ptr6 = ptr7;
        →strcpy(*(char**)(i * 4 + v3), &v0);
        i += 2;
        *(int*)((i - 1) * 4 + v3) = 0;
        result = i;
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v4)) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int is_submenu(char* __s) {
    int result;
    char* ptr0 = →strchr(__s, 91);
    if(!ptr0) {
        result = 0;
    }
    else {
        char* ptr1 = →strrchr(__s, 93);
        if(!ptr1) {
            result = 0;
        }
        else {
            char* ptr2 = →strchr(__s, 91);
            char* ptr3 = →strrchr(__s, 93);
            result = ptr3 < ptr2 ? 0: 1;
        }
    }
    return result;
}

int is_text(char* __s) {
    int result = 0;
    size_t v0 = →strlen(__s);
    int v1 = (int)(v0 - 1);
    while(v1 >= 0) {
        if(__s[v1] == 32 || __s[v1] == 9 || __s[v1] == 10 || __s[v1] == 12 || __s[v1] == 13) {
            result = 0;
            --v1;
        }
        else {
            return 1;
        }
    }
    return result;
}

int list_binaries(char* param0) {
    char v0;
    char v1;
    int v2;
    char* __name = param0;
    int v3 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v4 = 0;
    →fwrite("Binary installation files\n", 1, 26, stdout);
    DIR* __dirp = →opendir(__name);
    if(!__dirp) {
        →fwrite("  None.\n\n", 1, 9, stdout);
    }
    else {
        for(dirent* i = →readdir(__dirp); i; i = →readdir(__dirp)) {
            int v5 = →strcmp((char*)i + 11, (char*)&gvar_8054BBE);
            if(v5) {
                int v6 = →strcmp((char*)i + 11, (char*)&gvar_8054BC0);
                if(v6) {
                    int v7 = →strcmp((char*)i + 11, (char*)&gvar_8054BC3);
                    if(v7) {
                        →sprintf(&v0, "%s/%s", __name, (int*)((char*)i + 11));
                        stat(&v0, &v1);
                        if((v2 & 0xf000) == 0x4000) {
                            if(!v4) {
                                →fprintf(stdout, "  %s", (int*)((char*)i + 11));
                            }
                            else {
                                →fprintf(stdout, ", %s", (int*)((char*)i + 11));
                            }
                            ++v4;
                        }
                    }
                }
            }
        }
        if(!v4) {
            →fwrite("  None.", 1, 7, stdout);
        }
        →fwrite((void*)&gvar_8054BD4, 1, 2, stdout);
    }
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v3;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int list_extensions(int param0) {
    char v0;
    int v1 = param0;
    int v2 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →fprintf(stdout, "\nExtensions in \'%s\' (name, version, type, depends):\n", v1);
    →sprintf(&v0, "%s/etc/extensions.db", v1);
    FILE* __stream = →fopen(&v0, (char*)&gvar_8055E6B);
    if(!__stream) {
        int* ptr0 = →__errno_location();
        if(ptr0[0] == 2) {
            →fwrite("NONE.\n", 1, 6, stderr);
            →fclose(NULL);
            /*NO_RETURN*/ →exit(0);
        }
        →fclose(NULL);
        int* ptr1 = →__errno_location();
        char* ptr2 = →strerror(ptr1[0]);
        char* ptr3 = &v0;
        /*NO_RETURN*/ print_error(-29, "checking for file \'%s\': %s\n");
    }
    →fclose(__stream);
    dump_ascii(&v0, 134572428);
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v2;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int main(int ___argc, char** param1) {
    int v0;
    char* ptr0;
    int v1;
    int v2;
    char v3;
    char v4;
    char v5;
    char v6;
    int v7;
    char v8;
    char v9;
    char v10;
    char v11;
    int v12;
    char* ptr1;
    char v13;
    int v14;
    char* __s1;
    int v15;
    char* ptr2 = ptr1;
    char** ___argv = param1;
    int v16 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v17 = 0;
    int v18 = 0;
    VERBOSE = 0;
    TMPCLEAN = 0;
    TMPDBCLEAN = 0;
    FORCE = 0;
    UPGRADE = 0;
    ERROR = 0;
    WARNINGS = 0;
    SKIP_CFG = 0;
    →memcpy((void*)&GISMAN_CMD, (void*)&gvar_8057925, 1);
    →memcpy((void*)&GISMAN2_CMD, (void*)&gvar_8057925, 1);
    →memcpy((void*)&QGIS_CMD, (void*)&gvar_8057925, 1);
    →memcpy((void*)&UNINSTALL_CMD, (void*)&gvar_8057925, 1);
    →memcpy((void*)&HTML_CMD, (void*)&gvar_8057925, 1);
    →memcpy((void*)&TMPDIR, (void*)&gvar_8057925, 1);
    →memcpy((void*)&TMPDB, (void*)&gvar_8057925, 1);
    →memcpy((void*)&TMP_GISMAN, (void*)&gvar_8057925, 1);
    →memcpy((void*)&TMP_DESCR, (void*)&gvar_8057925, 1);
    →memcpy((void*)&TMP_INFO, (void*)&gvar_8057925, 1);
    →memcpy((void*)&TMP_DEPS, (void*)&gvar_8057925, 1);
    →memcpy((void*)&TMP_BUGS, (void*)&gvar_8057925, 1);
    →memcpy((void*)&TMP_AUTHORS, (void*)&gvar_8057925, 1);
    →memcpy((void*)&TMP_HTML, (void*)&gvar_8057925, 1);
    →memcpy((void*)&TMP_NULL, (void*)&gvar_8057925, 1);
    →memcpy((void*)&CONFIG_OPTS, (void*)&gvar_8057925, 1);
    →memcpy((void*)&CONFIG_CMD, "configure", 10);
    →memcpy((void*)&MAKE_CMD, "make", 5);
    →getcwd((char*)&CWD, 0x800);
    →fwrite((void*)&gvar_8057935, 1, 4, stdout);
    char* __s = (char*)→malloc(0x800);
    →strcpy(&v8, ___argv[0]);
    →setvbuf(stdout, NULL, 2, 0);
    if(___argc == 1) {
        /*NO_RETURN*/ show_help();
    }
    atexit((void __cdecl (*_)())&exit_msg);
    int v19 = 0;
    char* __dest1 = NULL;
    char* __dest = NULL;
    opterr = 0;
    int v20 = →getopt_long(___argc, ___argv, ":i:u:q:d:c:C:t:l:m:o:x:rhVg:b:fvs", (option*)&long_options.3722, &v18);
    while(v20 != -1) {
        if(v20 == 63) {
            /*NO_RETURN*/ print_error(-1, "unknown option or action specified.\n");
        }
        switch(v20) {
            case 58: {
                break;
            }
            case 67: {
                goto loc_8053A42;
            }
            case 98: {
                goto loc_8053971;
            }
            case 102: {
                goto loc_80539D4;
            }
            case 103: {
                goto loc_8053930;
            }
            case 109: {
                goto loc_8053A61;
            }
            case 111: {
                goto loc_8053A23;
            }
            case 115: {
                goto loc_80539FC;
            }
            case 86: 
            case 99: 
            case 100: 
            case 104: 
            case 105: 
            case 108: 
            case 113: 
            case 114: 
            case 116: 
            case 117: {
                goto loc_8053830;
            }
            case 118: {
                goto loc_80539E8;
            }
            case 120: {
                goto loc_80539C5;
            }
            default: {
                goto loc_8053A8F;
            }
        }
        if(optopt == 105 || optopt == 117 || optopt == 100 || optopt == 99 || optopt == 116 || optopt == 108 || optopt == 114) {
            /*NO_RETURN*/ print_error(-1, "missing file or directory name.\n");
        }
        if(optopt == 103) {
            /*NO_RETURN*/ print_error(-1, "missing path to GRASS 6.\n");
        }
        if(optopt == 98) {
            /*NO_RETURN*/ print_error(-1, "missing name of binary architecture.\n");
        }
        if(optopt == 98) {
            /*NO_RETURN*/ print_error(-1, "missing configure options.\n");
        }
        if(optopt == 113) {
            v1 = 12;
            ++v19;
            break;
        }
        else {
            if(v20 == 105 || v20 == 117 || v20 == 113 || v20 == 100 || v20 == 99 || v20 == 116 || v20 == 108 || v20 == 114 || v20 == 104 || v20 == 86) {
            loc_8053830:
                ++v19;
                switch(v20 - 86) {
                    case 0: {
                        v1 = 2;
                    }
                    case 13: {
                        v1 = 6;
                        break;
                    }
                    case 14: {
                        v1 = 9;
                        break;
                    }
                    case 18: {
                        v1 = 1;
                        break;
                    }
                    case 19: {
                        if(v1 != 4) {
                            v1 = 3;
                        }
                        break;
                    }
                    case 22: {
                        v1 = 7;
                        break;
                    }
                    case 27: {
                        v1 = 5;
                        break;
                    }
                    case 28: {
                        v1 = 11;
                        break;
                    }
                    case 30: {
                        v1 = 8;
                        break;
                    }
                    case 31: {
                        v1 = 10;
                    }
                }
                if(optarg) {
                    →strcpy(&v3, optarg);
                    →strcpy(&v4, optarg);
                }
            }
            switch(v20) {
                case 67: {
                    goto loc_8053A42;
                }
                case 98: {
                    goto loc_8053971;
                }
                case 102: {
                    goto loc_80539D4;
                }
                case 103: {
                    break;
                }
                case 109: {
                    goto loc_8053A61;
                }
                case 111: {
                    goto loc_8053A23;
                }
                case 115: {
                    goto loc_80539FC;
                }
                case 118: {
                    goto loc_80539E8;
                }
                case 120: {
                    goto loc_80539C5;
                }
                default: {
                    goto loc_8053A8F;
                }
            }
        loc_8053930:
            size_t v21 = →strlen(optarg);
            __dest = (char*)→malloc(v21 + 1);
            →strcpy(__dest, optarg);
            switch(v20) {
                case 67: {
                    goto loc_8053A42;
                }
                case 98: {
                    break;
                }
                case 102: {
                    goto loc_80539D4;
                }
                case 109: {
                    goto loc_8053A61;
                }
                case 111: {
                    goto loc_8053A23;
                }
                case 115: {
                    goto loc_80539FC;
                }
                case 118: {
                    goto loc_80539E8;
                }
                case 120: {
                    goto loc_80539C5;
                }
                default: {
                    goto loc_8053A8F;
                }
            }
        loc_8053971:
            size_t v22 = →strlen(optarg);
            __dest1 = (char*)→malloc(v22 + 1);
            →strcpy(__dest1, optarg);
            v1 = 4;
            switch(v20) {
                case 67: {
                    goto loc_8053A42;
                }
                case 102: {
                    goto loc_80539D4;
                }
                case 109: {
                    goto loc_8053A61;
                }
                case 111: {
                    goto loc_8053A23;
                }
                case 115: {
                    goto loc_80539FC;
                }
                case 118: {
                    goto loc_80539E8;
                }
                case 120: {
                    break;
                }
                default: {
                    goto loc_8053A8F;
                }
            }
        loc_80539C5:
            →strcpy((char*)&CONFIG_OPTS, optarg);
            switch(v20) {
                case 67: {
                    goto loc_8053A42;
                }
                case 102: {
                    break;
                }
                case 109: {
                    goto loc_8053A61;
                }
                case 111: {
                    goto loc_8053A23;
                }
                case 115: {
                    goto loc_80539FC;
                }
                case 118: {
                    goto loc_80539E8;
                }
                default: {
                    goto loc_8053A8F;
                }
            }
        loc_80539D4:
            FORCE = 1;
            switch(v20) {
                case 67: {
                    goto loc_8053A42;
                }
                case 109: {
                    goto loc_8053A61;
                }
                case 111: {
                    goto loc_8053A23;
                }
                case 115: {
                    goto loc_80539FC;
                }
                case 118: {
                    break;
                }
                default: {
                    goto loc_8053A8F;
                }
            }
        loc_80539E8:
            VERBOSE = 1;
            if(v20 == 115) {
            loc_80539FC:
                SKIP_CFG = 1;
            }
            if(v20 == 111) {
            loc_8053A23:
                →strcat(&v11, optarg);
            }
            if(v20 == 67) {
            loc_8053A42:
                →strcpy((char*)&CONFIG_CMD, optarg);
            }
            if(v20 == 109) {
            loc_8053A61:
                →strcpy((char*)&MAKE_CMD, optarg);
            }
        loc_8053A8F:
            v20 = →getopt_long(___argc, ___argv, ":i:u:q:d:c:t:l:o:x:rhVg:b:fvs", (option*)&long_options.3722, &v18);
        }
    }
    if(v19 <= 0) {
        /*NO_RETURN*/ print_error(-1, "please specify a valid action.\n");
    }
    if(v19 > 1) {
        /*NO_RETURN*/ print_error(-1, "please specify only one action.\n");
    }
    →sprintf((char*)&GEM_C_OPTS, "GEM_C_OPTS=%s", &v11);
    →putenv((char*)&GEM_C_OPTS);
    if(v1 == 1) {
        /*NO_RETURN*/ show_help();
    }
    if(v1 == 2) {
        /*NO_RETURN*/ show_version();
    }
    if(!VERBOSE) {
        →memcpy((void*)&TMP_NULL, "/tmp/grass.extension.log.XXXXXX", 32);
        →mkstemp((char*)&TMP_NULL);
        int v23 = →open((char*)&TMP_NULL, 64, 0x1ff);
        if(v23 == -1) {
            int* ptr3 = →__errno_location();
            ptr0 = →strerror(ptr3[0]);
            /*NO_RETURN*/ print_error(-30, "could not create temp file: %s");
        }
    }
    if(v1 == 11) {
        if(!__dest) {
            __dest = →getenv("GISBASE");
            if(!__dest) {
                /*NO_RETURN*/ print_error(-1, "GISBASE environment variable not set and path to GRASS not given.\n");
            }
        }
        if(VERBOSE) {
            →fprintf(stdout, "Path to GRASS is %s.\n", __dest);
        }
        restore((int)__dest, __s1);
        /*NO_RETURN*/ →exit(0);
    }
    if(v1 == 12) {
        if(!__dest) {
            __dest = →getenv("GISBASE");
            if(!__dest) {
                /*NO_RETURN*/ print_error(-1, "GISBASE environment variable not set and path to GRASS not given.\n");
            }
        }
        if(VERBOSE) {
            →fprintf(stdout, "Path to GRASS is %s.\n", __dest);
        }
        list_extensions((int)__dest);
        /*NO_RETURN*/ →exit(0);
    }
    char* ptr4 = →strstr(&v3, "http://");
    if(!ptr4) {
        char* ptr5 = →strstr(&v3, "ftp://");
        if(ptr5) {
            goto loc_8053D48;
        }
    }
    else {
    loc_8053D48:
        wget_extension((int)&v3);
        char* __dest2 = (char*)→malloc(0x800);
        →strcpy(__dest2, &v3);
        char* ptr6 = →strrchr(__dest2, 47);
        char* __src = ptr6 + 1;
        →strcpy(&v3, __src);
        →free(__dest2);
    }
    if(VERBOSE) {
        →fprintf(stdout, "Extension location is \'%s\'.\n", &v3);
    }
    if(v1 != 10) {
        v0 = stat(&v3, &v6);
        if(v0 < 0) {
            int* ptr7 = →__errno_location();
            char* ptr8 = →strerror(ptr7[0]);
            ptr0 = &v3;
            /*NO_RETURN*/ print_error(-2, "extension FILE or DIR \'%s\' invalid: %s\n");
        }
        if((v7 & 0xf000) == 0x4000) {
            v17 = 1;
            if(VERBOSE) {
                →fwrite("Extension files stored in a directory.\n", 1, 39, stdout);
            }
        }
        else {
            if(VERBOSE) {
                →fwrite("Extension files stored in a package file.\n", 1, 42, stdout);
            }
            unpack_extension(&v3);
            DIR* __dirp = →opendir((char*)&TMPDIR);
            dirent* ptr9 = →readdir(__dirp);
            int v24 = 0;
            while(ptr9) {
                int v25 = →strcmp((char*)ptr9 + 11, (char*)&gvar_8057BBF);
                if(v25) {
                    int v26 = →strcmp((char*)ptr9 + 11, (char*)&gvar_8057BC1);
                    if(v26) {
                        →sprintf(__s, "%s/%s", &TMPDIR, (int*)((char*)ptr9 + 11));
                        stat(__s, &v13);
                        if((v14 & 0xf000) == 0x4000) {
                            v24 = 1;
                            break;
                        }
                    }
                }
                ptr9 = →readdir(__dirp);
            }
            →strcpy(&v3, __s);
            if(!v24) {
                /*NO_RETURN*/ print_error(-7, "no top-level directory found in extension package.\n");
            }
        }
    }
    if(v1 == 10) {
        →strcpy(&v9, &v3);
    }
    else {
        get_package_name((int)&v3, &v9);
    }
    if(v19 > 0) {
        if(!__dest) {
            __dest = →getenv("GISBASE");
        }
        run_post(&v3, v1, (int)__dest1, (int)__dest);
    }
    if(VERBOSE) {
        →fprintf(stdout, "Extension will be installed from \'%s\'\n", &v3);
    }
    if(v1 != 10) {
        check_extension(&v3, &v10, &v15, &v2, &v12);
    }
    if(v1 == 5) {
        /*NO_RETURN*/ query_extension(&v3, (int)&v10, v15, v2, v12, (int)&v9, (int)&v8, (int)&v4);
    }
    if(v1 == 9) {
        /*NO_RETURN*/ show_details(&v3);
    }
    if(v1 == 7) {
        /*NO_RETURN*/ show_license(&v3);
    }
    if(v1 == 6) {
        source_clean(&v3);
        /*NO_RETURN*/ →exit(0);
    }
    if(!__dest) {
        __dest = →getenv("GISBASE");
        if(!__dest) {
            /*NO_RETURN*/ print_error(-1, "GISBASE environment variable not set and path to GRASS not given.\n");
        }
    }
    if(VERBOSE) {
        →fprintf(stdout, "Path to GRASS is %s.\n", __dest);
    }
    __s1 = →getenv("GRASS_VERSION");
    if(!__s1) {
        →sprintf(&v5, "%s/etc/VERSIONNUMBER", __dest);
        FILE* __stream = →fopen(&v5, (char*)&gvar_80578DE);
        if(!__stream) {
            /*NO_RETURN*/ print_error(-11, "Could not read GRASS version. Did you specify the right path?\n");
        }
        __s1 = (char*)→malloc(16);
        ptr0 = __s1;
        int v27 = &gvar_8057C8B;
        v0 = →__isoc99_fscanf();
        →fclose(__stream);
        if(v0 <= 0) {
            /*NO_RETURN*/ print_error(-11, "Could not read GRASS version. Did you specify the right path?\n");
        }
    }
    if(__s1) {
        __s = →strdup(__s1);
        char* __nptr = →strtok(__s, (char*)&gvar_8057BBF);
        char* __nptr1 = →strtok(NULL, (char*)&gvar_8057BBF);
        char* __nptr2 = →strtok(NULL, (char*)&gvar_8057BBF);
        long v28 = →strtol(__nptr, NULL, 10);
        long v29 = →strtol(__nptr1, NULL, 10);
        long v30 = →strtol(__nptr2, NULL, 10);
        __s1 = (char*)→malloc(0x800);
        →sprintf(__s1, "%i.%i.%i", v28, v29, v30);
        if(VERBOSE) {
            →fprintf(stdout, "GRASS version is %s.\n", __s1);
        }
        if(v28 <= 5) {
            /*NO_RETURN*/ print_error(-11, "extensions only work with GRASS version 6 and above.\n");
        }
    }
    →sprintf(&v11, "-L%s/lib -I/usr/local/grasslib/include/ ", __dest);
    if(v1 == 3) {
        source_install(&v3, __dest, &v9, v15, v2, v12, __s1);
        /*NO_RETURN*/ →exit(0);
    }
    if(v1 == 10) {
        uninstall((int)&v3, &v9, __dest, __s1);
        /*NO_RETURN*/ →exit(0);
    }
    if(v1 == 8) {
        test_install(&v3, __dest, &v9, v15, v2, v12, __s1);
        /*NO_RETURN*/ →exit(0);
    }
    if(v1 == 4) {
        int v31 = binaries_exist(&v3, __dest1);
        if(v31) {
            bin_install(&v3, __dest, (int)__dest1, &v9, v15, v2, v12, __s1);
            /*NO_RETURN*/ →exit(0);
        }
        /*NO_RETURN*/ print_error(-12, "no binaries for system \'%s\'\n");
    }
    /*NO_RETURN*/ →exit(0);
}

int mkdir_s(int param0, int param1) {
    char v0;
    int v1 = param0;
    int v2 = param1;
    int v3 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →sprintf(&v0, "mkdir %s --mode=%s -p", v1, v2);
    →system(&v0);
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v3;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

char* nc_fgets(char* __s, int __n, FILE* __stream) {
    char* result;
    char* ptr0 = →fgets(__s, __n, __stream);
    if(!ptr0) {
        result = NULL;
    }
    else {
        char* ptr1 = →strchr(__s, 35);
        if(!ptr1) {
        loc_8049E0F:
            result = __s;
        }
        else if(ptr1 == __s) {
            result = (char*)nc_fgets((int)__s, __n, (int)__stream);
        }
        else {
            char* __dest = (char*)→malloc(0x800);
            →strcpy(__dest, __s);
            __dest = →strtok(__dest, (char*)&gvar_8054AB0);
            →sprintf(__s, (char*)&gvar_8054AB2, __dest);
            →free(__dest);
            goto loc_8049E0F;
        }
    }
    return result;
}

char* nc_fgets_html(char* __s, int __n, FILE* __stream) {
    int v0;
    char* result;
    char* ptr0 = →fgets(__s, __n, __stream);
    if(!ptr0) {
        result = NULL;
    }
    else {
        size_t v1 = →strlen(__s);
        char* __src = (char*)→malloc(v1 + 1);
        size_t v2 = →strlen(__s);
        char* __haystack = (char*)→malloc(v2 + 1);
        char* ptr1 = __src;
        for(char* i = __s; i[0]; ++i) {
            if(i[0] == 60) {
                char* ptr2 = i;
                char* ptr3 = __haystack;
                --i;
                if(i >= __s) {
                    v0 = i[0] == 32 ? 1: 0;
                }
                while(ptr2[0]) {
                    ptr3[0] = ptr2[0];
                    ++ptr3[0];
                    if(ptr2[0] != 62) {
                        goto loc_804A02C;
                    }
                    else {
                        ptr3[0] = 0;
                        char* ptr4 = ptr2 + 1;
                        if(*ptr4 != 10) {
                            char* ptr5 = →strstr(__haystack, "<br>");
                            if(ptr5 && ptr1 > __src) {
                                ptr1[0] = 10;
                                ++ptr1[0];
                            }
                            char* ptr6 = →strstr(__haystack, "<BR>");
                            if(ptr6 && ptr1 > __src) {
                                ptr1[0] = 10;
                                ++ptr1[0];
                            }
                            char* ptr7 = →strstr(__haystack, (char*)&gvar_8054AC0);
                            if(ptr7) {
                                if(ptr1 > __src) {
                                    ptr1[0] = 10;
                                    ++ptr1[0];
                                }
                                ptr1[0] = 10;
                                ++ptr1[0];
                            }
                            char* ptr8 = →strstr(__haystack, (char*)&gvar_8054AC4);
                            if(ptr8) {
                                if(ptr1 > __src) {
                                    ptr1[0] = 10;
                                    ++ptr1[0];
                                }
                                ptr1[0] = 10;
                                ++ptr1[0];
                            }
                        }
                        i = ptr2;
                    }
                    if(i[0] == 32 && v0 == 1) {
                        ++i;
                        v0 = 0;
                        break;
                    loc_804A02C:
                        ++ptr2;
                    }
                    else {
                        break;
                    }
                }
            }
            if(i[0] != 62) {
                ptr1[0] = i[0];
                ++ptr1;
            }
        }
        ptr1[0] = 0;
        →strcpy(__s, __src);
        →free(__src);
        →free(__haystack);
        char* ptr9 = →strchr(__s, 35);
        if(!ptr9) {
        loc_804A141:
            result = __s;
        }
        else if(ptr9 == __s) {
            result = (char*)nc_fgets_html((int)__s, __n, (int)__stream);
        }
        else {
            __src = (char*)→malloc(0x800);
            →strcpy(__src, __s);
            __src = →strtok(__src, (char*)&gvar_8054AB0);
            →sprintf(__s, (char*)&gvar_8054AB2, __src);
            →free(__src);
            goto loc_804A141;
        }
    }
    return result;
}

char* nc_fgets_nb(char* __s, int __n, FILE* __stream) {
    char* result;
    char* ptr0 = →fgets(__s, __n, __stream);
    if(!ptr0) {
        result = NULL;
    }
    else {
        int v0 = is_text(__s);
        if(!v0) {
            result = (char*)nc_fgets_nb((int)__s, __n, (int)__stream);
        }
        else {
            char* ptr1 = →strchr(__s, 35);
            if(!ptr1) {
            loc_804A2C3:
                result = __s;
            }
            else if(ptr1 == __s) {
                result = (char*)nc_fgets_nb((int)__s, __n, (int)__stream);
            }
            else {
                char* __dest = (char*)→malloc(0x800);
                →strcpy(__dest, __s);
                __dest = →strtok(__dest, (char*)&gvar_8054AB0);
                →sprintf(__s, (char*)&gvar_8054AB2, __dest);
                →free(__dest);
                goto loc_804A2C3;
            }
        }
    }
    return result;
}

int new_ext_html(char* param0, int param1, int param2, int param3, int param4, int param5) {
    char v0;
    char* __s1 = param0;
    int v1 = param1;
    int v2 = param2;
    int v3 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v4 = find_pos("<b>Drivers sections:</b>", v2, 0);
    if(v4 < 0) {
        v4 = find_pos("<!-- GEM Extensions StartHTML. Do not delete or change this comment! -->", v2, 0);
        if(v4 >= 0) {
            goto loc_804E1B5;
        }
        else {
            print_warning("Unknown format of index.html. Unable to register HTML man pages.\n");
        }
    }
    else {
    loc_804E1B5:
        int v5 = find_pos("<hr>", v2, v4);
        int v6 = find_pos("<h3>Installed extensions:</h3>", v2, v4);
        if(v6 == -1) {
            insert_str("<h3>Installed extensions:</h3>\n", v5, v2);
            insert_str("<ul>\n", v5 + 1, v2);
            insert_str("</ul>\n", v5 + 2, v2);
            insert_str("<p>\n", v5 + 3, v2);
        }
        int v7 = find_pos("<h3>Installed extensions:</h3>", v2, v4);
        int v8 = find_pos("</ul>", v2, v7);
        int v9 = v7 + 2;
        →sprintf(&v0, "\">%s", __s1);
        int v10 = find_pos(&v0, v2, v9);
        if(v10 != -1) {
            print_warning("list item \'%s\' exists in index.html.\n");
            if(FORCE && UPGRADE) {
                →sprintf(&v0, "<li><a href=\"../extensions/%s/index.html\">%s (%i.%i.%i)</a>\n", __s1, __s1, param3, param4, param5);
                →strcpy(*(char**)(v10 * 4 + v2), &v0);
            }
        }
        else {
            v10 = find_pos("<li><a href=", v2, v7);
            while((v10 != -1 && v8 > v10)) {
                char* ptr0 = →strrchr(*(char**)(v10 * 4 + v2), 34);
                char* ptr1 = →strrchr(*(char**)(v10 * 4 + v2), 60);
                size_t __n = (size_t)((int)ptr1 - (int)ptr0);
                →strncpy(&v0, ptr0 + 2, __n);
                *(char*)((char*)((int)&v4 + __n) + 3) = 0;
                int v11 = →strcmp(__s1, &v0);
                if(v11 < 0) {
                    v9 = v10;
                    break;
                }
                else {
                    ++v7;
                    v10 = find_pos("<li><a href=", v2, v7);
                }
            }
            →sprintf(&v0, "<li><a href=\"../extensions/%s/index.html\">%s (%i.%i.%i)</a>\n", __s1, __s1, param3, param4, param5);
            insert_str(&v0, v9, v2);
        }
    }
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v3;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int new_item(char* param0, int param1, int param2, int param3) {
    int result;
    char v0;
    char v1;
    char v2;
    char* __s = param0;
    int v3 = param1;
    int v4 = param2;
    int v5 = *(int*)(__GS_BASE + (int)(int*)0x14);
    chop(__s);
    char* __src = →strtok(__s, (char*)&gvar_8055341);
    if(!__src) {
        print_warning("invalid token in \'entries-gisman\'.\n");
        result = -1;
    }
    else {
        →strcpy(&v0, __src);
        int i;
        for(i = 0; __src; ++i) {
            __src = →strtok(NULL, (char*)&gvar_8055341);
            if(__src) {
                →strcpy(&v1, __src);
            }
        }
        if(i > 2) {
            print_warning("invalid number of tokens (%i) in \'entries-gisman\'.\n");
            result = -1;
        }
        else {
            int v6 = →strcmp(&v0, (char*)&gvar_805539C);
            if(!v6) {
                int v7 = →strcmp(&v0, (char*)&gvar_805539C);
                if(v7) {
                    goto loc_804C5B2;
                }
                else {
                    →memcpy(&v2, " \t\t\t {separator}\n", 18);
                }
            }
            else {
            loc_804C5B2:
                →sprintf((char*)&v2, " \t\t\t {command \"%s\" {} \"%s\" {} -command {%s }}\n", &v0, &v1, &v1);
            }
            insert_str((char*)&v2, param3, v4);
            result = param3 + 1;
        }
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v5)) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int new_submenu(int param0, char* param1, int param2) {
    int result;
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    int v5 = param0;
    char* __s = param1;
    int v6 = param2;
    int v7 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v8 = find_pos("\"&Xtns\" all options", v6, 0);
    int v9 = find_pos("\" all options", v6, v8 + 1);
    int v10 = v9 - 1;
    if(v10 == -1) {
        v10 = find_pos((char*)&gvar_8055212, v6, 0);
    }
    int v11 = is_submenu(__s);
    if(!v11) {
        print_warning("first line not a submenu specifier in \'entries-gisman\'.\n");
        result = -1;
    }
    else {
        char* ptr0 = →strrchr(__s, 93);
        char* ptr1 = →strchr(__s, 91);
        size_t __n = (size_t)((int)ptr0 - (int)ptr1);
        char* ptr2 = →strchr(__s, 91);
        →strncpy(&v0, ptr2 + 1, (size_t)((int)ptr0 - (int)ptr1));
        *(char*)((int)&v3 + __n) = 0;
        →sprintf(&v1, "{cascad \"%s\"", &v0);
        int v12 = find_pos(&v1, v6, v8);
        if(v12 != -1 && v10 > v12) {
            print_warning("submenu \'%s\' exists in GIS Manager\'s Xtns menu.\n");
            result = -1;
        }
        else {
            int v13 = v8 + 1;
            v12 = find_pos("{cascad ", v6, v8);
            while((v12 != -1 && v10 > v12)) {
                char* ptr3 = →strchr(*(char**)(v12 * 4 + v6), 34);
                char* ptr4 = →strchr(ptr3 + 1, 34);
                __n = (size_t)((int)ptr4 - (int)ptr3);
                →strncpy(&v2, ptr3 + 1, __n);
                *(char*)((int)&v4 + __n) = 0;
                int v14 = →strcmp(&v0, &v2);
                if(v14 < 0) {
                    v13 = v12;
                    break;
                }
                else {
                    ++v8;
                    v12 = find_pos("{cascad ", v6, v8);
                }
            }
            →sprintf(&v0, " \t\t\t%s {} \"\" 1 {\n", &v1);
            insert_str(&v0, v13, v6);
            insert_str(" \t\t\t}}\n", v13 + 1, v6);
            int v15 = find_pos((char*)&gvar_8055212, v6, 0);
            →sprintf(&v0, "#(DO_NOT_REMOVE_THIS_COMMENT) <%s> %s {} \"\" 1 {\n", v5, &v1);
            insert_str(&v0, v15 + 1, v6);
            result = v13 + 1;
        }
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v7)) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int print_cfg() {
    char v0;
    int v1 = *(int*)(__GS_BASE + (int)(int*)0x14);
    FILE* __stream = →fopen("config.msg", (char*)&gvar_8055E6B);
    if(__stream) {
        →fwrite("\nResult of configuration: \n", 1, 27, stdout);
        for(char* i = →fgets(&v0, 0x800, __stream); i; i = →fgets(&v0, 0x800, __stream)) {
            →fputs(&v0, stdout);
        }
        →fputc(10, stdout);
    }
    →remove("config.msg");
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v1;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

size_t print_done() {
    return →fwrite((void*)&gvar_80549EE, 1, 17, stdout);
}

int print_error(int __status, char* param1) {
    char v0;
    char v1;
    char* __format = param1;
    int v2 = *(int*)(__GS_BASE + (int)(int*)0x14);
    __gnuc_va_list __arg = &v1;
    →vsprintf(&v0, __format, __arg);
    →fprintf(stderr, (char*)&gvar_80549C0, &v0);
    ERROR = __status;
    /*NO_RETURN*/ →exit(__status);
}

int print_warning(char* param0) {
    char v0;
    char v1;
    char* __format = param0;
    int v2 = *(int*)(__GS_BASE + (int)(int*)0x14);
    __gnuc_va_list __arg = &v1;
    →vsprintf(&v0, __format, __arg);
    →fprintf(stderr, (char*)&gvar_80549D6, &v0);
    ++WARNINGS;
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v2;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int query_extension(char* param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7) {
    char v0;
    char* __filename = param0;
    int v1 = param1;
    int v2 = param5;
    int v3 = param6;
    int v4 = param7;
    int v5 = *(int*)(__GS_BASE + (int)(int*)0x14);
    char* __src = basename(__filename);
    →strcpy(&v0, __src);
    int v6 = →chdir(&v0);
    if(v6 < 0) {
        int* ptr0 = →__errno_location();
        →strerror(ptr0[0]);
        /*NO_RETURN*/ print_error(-2, "extension \'%s\' not accessible: %s\n");
    }
    →fprintf(stdout, "\nExtension \'%s\', version %i.%i.%i\n\n", v1, param2, param3, param4);
    dump_ascii("description", "Description");
    dump_ascii("commands", "Commands provided");
    dump_ascii("libs", "Libraries provided");
    dump_ascii("headers", "Header files provided");
    dump_ascii("depends", "Dependencies");
    dump_ascii("bugs", "Bugs");
    →sprintf(&v0, "../%s", __filename);
    list_binaries(&v0);
    dump_ascii("authors", "Author(s)");
    →fprintf(stdout, "Type \'%s -d %s\' to see more detailed information.\n", v3, v4);
    →fprintf(stdout, "Type \'%s -l %s\' to see copyright information.\n", v3, v4);
    →system("sh post");
    /*NO_RETURN*/ →exit(0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int register_entries_gisman(int param0, int param1) {
    int v0;
    char* ptr0;
    char v1;
    char v2;
    char v3;
    int v4 = param0;
    int v5 = param1;
    int v6 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →memcpy(&v1, "../entries-gisman", 18);
    FILE* __stream = →fopen((char*)&v1, (char*)&gvar_80553F1);
    if(!__stream) {
        int* ptr1 = →__errno_location();
        if(ptr1[0] != 2) {
            →fclose(NULL);
            int* ptr2 = →__errno_location();
            ptr0 = →strerror(ptr2[0]);
            /*NO_RETURN*/ print_error(-21, "checking for file \'%s\': %s\n");
        }
    }
    else {
        →sprintf((char*)&v1, "%s/etc/dm/menu.tcl", v5);
        FILE* __stream1 = →fopen((char*)&v1, (char*)&gvar_80553F1);
        if(!__stream1) {
            int* ptr3 = →__errno_location();
            if(ptr3[0] != 2) {
                →fclose(NULL);
                int* ptr4 = →__errno_location();
                ptr0 = →strerror(ptr4[0]);
                void* ptr5 = &v1;
                /*NO_RETURN*/ print_error(-21, "checking for file \'%s\': %s\n");
            }
        }
        else {
            →memcpy((void*)&TMP_GISMAN, "/tmp/grass.extensions.db.XXXXXX", 32);
            →mkstemp((char*)&TMP_GISMAN);
            FILE* __stream2 = →fopen((char*)&TMP_GISMAN, (char*)&gvar_8055444);
            if(!__stream2) {
                int* ptr6 = →__errno_location();
                →strerror(ptr6[0]);
                /*NO_RETURN*/ print_error(-21, "could not create temp file \'%s\': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
            }
            atexit((void __cdecl (*_)())&exit_db);
            if(VERBOSE) {
                →sprintf(&v2, "mkdir --verbose %s/etc/dm/gem-entries ; cp -vf ../entries-gisman %s/etc/dm/gem-entries/%s ; \t\t\t\t\tcp -vf %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak ; \t\t\t\t\tcp -vf %s %s/etc/dm/menu.tcl ; chmod -v a+r %s/etc/dm/menu.tcl ;", v5, v5, v4, v5, v5, &TMP_GISMAN, v5, v5);
            }
            else {
                →sprintf(&v2, "mkdir %s/etc/dm/gem-entries &> %s ; cp -f ../entries-gisman %s/etc/dm/gem-entries/%s &> %s ; \t\t\t\t\tcp -f %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak &> %s ; \t\t\t\t\tcp -f %s %s/etc/dm/menu.tcl &> %s ; chmod a+r %s/etc/dm/menu.tcl &> %s ;", v5, &TMP_NULL, v5, v4, &TMP_NULL, v5, v5, &TMP_NULL, &TMP_GISMAN, v5, &TMP_NULL, v5, &TMP_NULL);
            }
            →strcpy((char*)&GISMAN_CMD, &v2);
            int v7 = 0;
            for(char* i = →fgets(&v2, 0x800, __stream); i; i = →fgets(&v2, 0x800, __stream)) {
                ++v7;
            }
            if(v7) {
                →rewind(__stream);
                int v8 = 0;
                for(char* j = →fgets(&v2, 0x800, __stream1); j; j = →fgets(&v2, 0x800, __stream1)) {
                    ++v8;
                }
                if(v8) {
                    int v9 = v8;
                    →rewind(__stream1);
                    int v10 = (int)→calloc((size_t)(v8 + v7 + (v7 + 6)), 4);
                    int k;
                    for(k = 0; k < v8 + v7 + (v7 + 6); ++k) {
                        *(int*)(k * 4 + v10) = 0;
                    }
                    k = 0;
                    for(char* counter = →fgets(&v2, 0x800, __stream1); counter; counter = →fgets(&v2, 0x800, __stream1)) {
                        unsigned int* ptr7 = (unsigned int*)(k * 4 + v10);
                        size_t v11 = →strlen(&v2);
                        void* ptr8 = →malloc(v11 + 1);
                        *ptr7 = ptr8;
                        →strcpy(*(char**)(k * 4 + v10), &v2);
                        ++k;
                    }
                    check_ext_menu(v10);
                    k = 1;
                loc_804CBDE:
                    int v12 = nc_fgets_nb((int)&v2, 0x800, (int)__stream);
                    while(v12) {
                        if(k == 1) {
                            char* ptr9 = →strrchr(&v2, 93);
                            char* ptr10 = →strchr(&v2, 91);
                            size_t v13 = (size_t)((int)ptr9 - (int)ptr10);
                            char* ptr11 = →strchr(&v2, 91);
                            →strncpy(&v3, ptr11 + 1, (size_t)((int)ptr9 - (int)ptr10));
                            *(char*)((char*)((int)&v13 + v13) + 3) = 0;
                            v0 = new_submenu(v4, &v2, v10);
                            if(v0 < 0) {
                                print_warning("no GIS Manager menu entries created.\n");
                                break;
                            }
                            else {
                                ++k;
                                goto loc_804CBDE;
                            }
                        }
                        else {
                            v0 = new_item(&v2, (int)&v3, v10, v0);
                            if(v0 < 0) {
                                print_warning("error creating GIS Manager menu entries.\n");
                                break;
                            }
                            else {
                                ++k;
                                v12 = nc_fgets_nb((int)&v2, 0x800, (int)__stream);
                            }
                        }
                    }
                    for(k = 0; *(int*)(k * 4 + v10); ++k) {
                        →fprintf(__stream2, *(char**)(k * 4 + v10));
                    }
                    →fflush(__stream2);
                    →rewind(__stream2);
                    int v14 = 0;
                    for(char* counter1 = →fgets(&v2, 0x800, __stream2); counter1; counter1 = →fgets(&v2, 0x800, __stream2)) {
                        ++v14;
                    }
                    if(!v14 || v14 < v9) {
                        print_warning("file truncation detected. Retaining orginal file \'menu.tcl\'.\n");
                        →memcpy((void*)&GISMAN_CMD, (void*)&gvar_8055722, 1);
                    }
                    →fclose(__stream1);
                    →fclose(__stream);
                    →fclose(__stream2);
                    for(k = 0; k < v8 + v7 + (v7 + 6); ++k) {
                        →free(*(void**)(k * 4 + v10));
                    }
                    →free((void*)v10);
                }
            }
        }
    }
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v6;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int register_entries_gisman2(int param0, int param1) {
    char v0;
    char v1;
    int v2 = param0;
    int v3 = param1;
    int v4 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →memcpy(&v0, "../entries-gisman2", 19);
    FILE* ptr0 = →fopen((char*)&v0, (char*)&gvar_80553F1);
    if(!ptr0) {
        int* ptr1 = →__errno_location();
        if(ptr1[0] != 2) {
            →fclose(NULL);
            int* ptr2 = →__errno_location();
            →strerror(ptr2[0]);
            /*NO_RETURN*/ print_error(-32, "checking for file \'%s\': %s\n");
        }
    }
    else {
        if(VERBOSE) {
            →sprintf(&v1, "mkdir --verbose -p %s/etc/gm/Xtns ; cp -fv ../entries-gisman2 %s/etc/gm/Xtns/%s.gem ; ", v3, v3, v2);
        }
        else {
            →sprintf(&v1, "mkdir -p %s/etc/gm/Xtns ; cp -f ../entries-gisman2 %s/etc/gm/Xtns/%s.gem ; ", v3, v3, v2);
        }
        →strcpy((char*)&GISMAN2_CMD, &v1);
    }
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v4;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int register_extension(int param0, int param1, char* param2, int param3, int param4, int param5) {
    int v0;
    FILE* __stream;
    char* ptr0;
    char* ptr1;
    char v1;
    char v2;
    char v3;
    int v4;
    char v5;
    char v6;
    int v7;
    int v8;
    int v9 = param0;
    int v10 = param1;
    char* __s2 = param2;
    int v11 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v12 = 1;
    →sprintf(&v1, "%s/etc/extensions.db", v9);
    FILE* __stream1 = →fopen(&v1, (char*)&gvar_8054D13);
    if(!__stream1) {
        int* ptr2 = →__errno_location();
        if(ptr2[0] != 2) {
            →fclose(NULL);
            int* ptr3 = →__errno_location();
            ptr1 = →strerror(ptr3[0]);
            ptr0 = &v1;
            /*NO_RETURN*/ print_error(-15, "checking for file \'%s\': %s\n");
        }
        v12 = 0;
    }
    if(v12) {
        →memcpy((void*)&TMPDB, "/tmp/grass.extensions.db.XXXXXX", 32);
        →mkstemp((char*)&TMPDB);
        __stream = →fopen((char*)&TMPDB, (char*)&gvar_8054D74);
        if(!__stream) {
            int* ptr4 = →__errno_location();
            ptr1 = →strerror(ptr4[0]);
            /*NO_RETURN*/ print_error(-15, "could not create temp file \'%s\': %s\n \t\t\t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        atexit((void __cdecl (*_)())&exit_db);
        v0 = 0;
        int v13 = 1;
        int v14 = 0;
        for(int i = nc_fgets_nb((int)&v2, 0x800, (int)__stream1); i; i = nc_fgets_nb((int)&v2, 0x800, (int)__stream1)) {
            ++v0;
            int v15 = 1;
            char* ptr5 = &v5;
            int* ptr6 = &v6;
            int v16 = &v7;
            int v17 = &v4;
            ptr1 = &v8;
            ptr0 = &v3;
            →__isoc99_sscanf();
            int v18 = →strcmp(&v3, __s2);
            if(!v18) {
                v14 = 1;
                int v19 = vercmp(v8, v4, v7, param3, param4, param5);
                if(!FORCE) {
                    if(v19 < 0) {
                        /*NO_RETURN*/ print_error(-16, "Extension \'%s\' with lower version (%i.%i.%i) already installed. You can use -f to overwrite this version, if you know what you are doing.\n");
                    }
                    v16 = v7;
                    v17 = v4;
                    ptr1 = (char*)v8;
                    ptr0 = __s2;
                    /*NO_RETURN*/ print_error(-16, "Extension \'%s\' with same or higher version (%i.%i.%i) already installed. You can use -f to overwrite this version, if you know what you are doing.\n");
                }
                if(FORCE) {
                    if(!v19) {
                        v13 = 0;
                    }
                    else {
                        v13 = 1;
                        v15 = 0;
                    }
                }
            }
            if(v15) {
                →fprintf(__stream, &v2);
                →fflush(__stream);
            }
        }
        if(v13) {
            if(!v14) {
                int v20 = depstr((int)__s2, v9);
                →strcpy(&v5, (char*)v20);
                →fprintf(__stream, "%s\t%i.%i.%i\t%s\t%s\n", __s2, param3, param4, param5, v10, &v5);
            }
            else {
                int v21 = depstr((int)__s2, v9);
                →strcpy(&v5, (char*)v21);
                →fprintf(__stream, "%s\t%i.%i.%i\t%s\t%s\n", &v3, param3, param4, param5, &v6, &v5);
            }
        }
        →fclose(__stream);
        →fclose(__stream1);
    }
    if(!v0 || !v12) {
        →memcpy((void*)&TMPDB, "/tmp/grass.extensions.db.XXXXXX", 32);
        →mkstemp((char*)&TMPDB);
        __stream = →fopen((char*)&TMPDB, (char*)&gvar_8054D74);
        if(!__stream) {
            int* ptr7 = →__errno_location();
            ptr1 = →strerror(ptr7[0]);
            ptr0 = &v1;
            /*NO_RETURN*/ print_error(-15, "could not create temp db \'%s\': %s\n \t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        atexit((void __cdecl (*_)())&exit_db);
        int v22 = depstr((int)__s2, v9);
        →strcpy(&v5, (char*)v22);
        →fprintf(__stream, "%s\t%i.%i.%i\t%s\t%s\n", __s2, param3, param4, param5, v10, &v5);
        →fclose(__stream);
    }
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v11;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int register_html(char* param0, int param1, int param2, int param3, int param4) {
    char v0;
    char v1;
    char* ptr0 = param0;
    int v2 = param1;
    int v3 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →sprintf(&v0, "%s/docs/html/index.html", v2);
    FILE* __stream = →fopen(&v0, (char*)&gvar_8055C93);
    if(!__stream) {
        int* ptr1 = →__errno_location();
        if(ptr1[0] != 2) {
            →fclose(NULL);
            int* ptr2 = →__errno_location();
            char* ptr3 = →strerror(ptr2[0]);
            char* ptr4 = &v0;
            /*NO_RETURN*/ print_error(-24, "checking for file \'%s\': %s\n");
        }
    }
    else {
        →memcpy((void*)&TMP_HTML, "/tmp/grass.extensions.db.XXXXXX", 32);
        →mkstemp((char*)&TMP_HTML);
        FILE* __stream1 = →fopen((char*)&TMP_HTML, (char*)&gvar_8055CD4);
        if(!__stream1) {
            int* ptr5 = →__errno_location();
            →strerror(ptr5[0]);
            /*NO_RETURN*/ print_error(-24, "could not create temp file \'%s\': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        atexit((void __cdecl (*_)())&exit_db);
        if(VERBOSE) {
            →sprintf(&v1, "cp -vf %s %s/docs/html/index.html ; chmod -v a+r %s/docs/html/index.html ;", &TMP_HTML, v2, v2);
        }
        else {
            →sprintf(&v1, "cp -f %s %s/docs/html/index.html &>%s ; chmod a+r %s/docs/html/index.html &>%s ;", &TMP_HTML, v2, &TMP_NULL, v2, &TMP_NULL);
        }
        →strcpy((char*)&HTML_CMD, &v1);
        int v4 = 0;
        for(char* i = →fgets(&v1, 0x800, __stream); i; i = →fgets(&v1, 0x800, __stream)) {
            ++v4;
        }
        if(v4) {
            →rewind(__stream);
            int v5 = (int)→calloc((size_t)(v4 + 10), 4);
            int j;
            for(j = 0; j < v4 + 10; ++j) {
                *(int*)(j * 4 + v5) = 0;
            }
            j = 0;
            for(char* k = →fgets(&v1, 0x800, __stream); k; k = →fgets(&v1, 0x800, __stream)) {
                unsigned int* ptr6 = (unsigned int*)(j * 4 + v5);
                size_t v6 = →strlen(&v1);
                void* ptr7 = →malloc(v6 + 1);
                *ptr6 = ptr7;
                →strcpy(*(char**)(j * 4 + v5), &v1);
                ++j;
            }
            new_ext_html(ptr0, v2, v5, param2, param3, param4);
            for(j = 0; *(int*)(j * 4 + v5); ++j) {
                →fprintf(__stream1, *(char**)(j * 4 + v5));
            }
            →fflush(__stream1);
            →fclose(__stream);
            →fclose(__stream1);
            for(j = 0; j < v4 + 10; ++j) {
                →free(*(void**)(j * 4 + v5));
            }
            →free((void*)v5);
        }
    }
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v3;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int restore(int param0, char* param1) {
    int v0;
    char v1;
    int v2 = param0;
    char* __s = param1;
    int v3 = *(int*)(__GS_BASE + (int)(int*)0x14);
    char* __s1 = →strdup(__s);
    char* __nptr = →strtok(__s1, (char*)&gvar_8055EDB);
    char* __nptr1 = →strtok(NULL, (char*)&gvar_8055EDB);
    char* __nptr2 = →strtok(NULL, (char*)&gvar_8055EDB);
    long v4 = →strtol(__nptr, NULL, 10);
    long v5 = →strtol(__nptr1, NULL, 10);
    long v6 = →strtol(__nptr2, NULL, 10);
    →free(__s1);
    →fwrite("Restoring...", 1, 12, stdout);
    if(v4 == 6 && v5 <= 0) {
        v0 = restore_entries_gisman(v2);
        if(VERBOSE) {
            →fprintf(stdout, "\nRestored entries for GIS Manager: %i\n", v0);
        }
    }
    v0 = restore_html(v2);
    if(VERBOSE) {
        →fprintf(stdout, "\nRestored links in index.hml: %i\n", v0);
    }
    if(v0 > 0) {
        if(VERBOSE) {
            →sprintf(&v1, "cp -f %s %s/etc/dm/menu.tcl ; chmod a+r %s/etc/dm/menu.tcl ; \t\t\t\t\t\t\tcp -f %s %s/docs/html/index.html ; chmod a+r %s/docs/html/index.html", &TMP_GISMAN, v2, v2, &TMP_HTML, v2, v2);
        }
        else {
            →sprintf(&v1, "cp -f %s %s/etc/dm/menu.tcl ; chmod a+r %s/etc/dm/menu.tcl &> %s ; \t\t\t\t\t\t\tcp -f %s %s/docs/html/index.html ; chmod a+r %s/docs/html/index.html", &TMP_GISMAN, v2, v2, &TMP_NULL, &TMP_HTML, v2, v2);
        }
        su(v2, &v1);
    }
    if(!v0) {
        /*NO_RETURN*/ print_error(-26, "could not find anything to restore.\n");
    }
    print_done();
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v3;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int restore_entries_gisman(int param0) {
    int v0;
    FILE* __stream;
    int result;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    int v7 = param0;
    int v8 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →sprintf(&v1, "%s/etc/dm/menu.tcl", v7);
    FILE* __stream1 = →fopen(&v1, (char*)&gvar_80553F1);
    if(!__stream1) {
        int* ptr0 = →__errno_location();
        if(ptr0[0] == 2) {
            result = 0;
        }
        else {
            →fclose(NULL);
            int* ptr1 = →__errno_location();
            char* ptr2 = →strerror(ptr1[0]);
            char* ptr3 = &v1;
            /*NO_RETURN*/ print_error(-21, "checking for file \'%s\': %s\n");
        }
    }
    else {
        →memcpy((void*)&TMP_GISMAN, "/tmp/grass.extensions.db.XXXXXX", 32);
        →mkstemp((char*)&TMP_GISMAN);
        FILE* __stream2 = →fopen((char*)&TMP_GISMAN, (char*)&gvar_8055444);
        if(!__stream2) {
            int* ptr4 = →__errno_location();
            →strerror(ptr4[0]);
            /*NO_RETURN*/ print_error(-21, "could not create temp file \'%s\': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        atexit((void __cdecl (*_)())&exit_db);
        if(VERBOSE) {
            →sprintf(&v2, "cp -vf %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak ; \t\t\t\t\t\tcp -vf %s %s/etc/dm/menu.tcl ; chmod -v a+r %s/etc/dm/menu.tcl ;", v7, v7, &TMP_GISMAN, v7, v7);
        }
        else {
            →sprintf(&v2, "cp -f %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak &> %s ; \t\t\t\t\t\tcp -f %s %s/etc/dm/menu.tcl &> %s ; chmod a+r %s/etc/dm/menu.tcl &> %s ;", v7, v7, &TMP_NULL, &TMP_GISMAN, v7, &TMP_NULL, v7, &TMP_NULL);
        }
        →strcpy((char*)&GISMAN_CMD, &v2);
        →sprintf(&v4, "%s/etc/dm/gem-entries", v7);
        DIR* __dirp = →opendir(&v4);
        if(!__dirp) {
            result = 0;
        }
        else {
            int v9 = 0;
            int v10 = 0;
        loc_804DBFB:
            dirent* i;
            for(i = →readdir(__dirp); i; i = →readdir(__dirp)) {
                →sprintf(&v1, "%s/%s", &v4, (int*)((char*)i + 11));
                __stream = →fopen(&v1, (char*)&gvar_80553F1);
                int v11 = →strcmp((char*)i + 11, (char*)&gvar_8055A4F);
                if(v11) {
                    int v12 = →strcmp((char*)i + 11, (char*)&gvar_8055A51);
                    if(v12 && __stream) {
                        for(char* j = →fgets(&v2, 0x800, __stream); j; j = →fgets(&v2, 0x800, __stream)) {
                            ++v9;
                        }
                        ++v10;
                        →fclose(__stream);
                        goto loc_804DBFB;
                    }
                    else if(v12) {
                        →fclose(NULL);
                        goto loc_804DBFB;
                    }
                }
                →fclose(__stream);
            }
            →closedir(__dirp);
            int v13 = 0;
            for(char* k = →fgets(&v2, 0x800, __stream1); k; k = →fgets(&v2, 0x800, __stream1)) {
                ++v13;
            }
            if(!v13) {
                result = 0;
            }
            else {
                →rewind(__stream1);
                int v14 = (int)→calloc((size_t)(v9 * 2 + v10 * 4 + (v10 + v13) + 1), 4);
                int counter;
                for(counter = 0; counter < v9 * 2 + v10 * 4 + (v10 + v13) + 1; ++counter) {
                    *(int*)(counter * 4 + v14) = 0;
                }
                counter = 0;
                for(char* counter1 = →fgets(&v2, 0x800, __stream1); counter1; counter1 = →fgets(&v2, 0x800, __stream1)) {
                    unsigned int* ptr5 = (unsigned int*)(counter * 4 + v14);
                    size_t v15 = →strlen(&v2);
                    void* ptr6 = →malloc(v15 + 1);
                    *ptr5 = ptr6;
                    →strcpy(*(char**)(counter * 4 + v14), &v2);
                    ++counter;
                }
                *(int*)(counter * 4 + v14) = 0;
                check_ext_menu(v14);
                __dirp = →opendir(&v4);
                int v16 = 0;
            loc_804DFE1:
                do {
                    i = →readdir(__dirp);
                    if(!i) {
                        →closedir(__dirp);
                        counter = 0;
                        goto loc_804E050;
                    }
                    else {
                        →sprintf(&v1, "%s/%s", &v4, (int*)((char*)i + 11));
                        int v17 = →strcmp((char*)i + 11, (char*)&gvar_8055A4F);
                        if(!v17) {
                            goto loc_804DFE1;
                        }
                        else {
                            int v18 = →strcmp((char*)i + 11, (char*)&gvar_8055A51);
                            if(!v18) {
                                goto loc_804DFE1;
                            }
                            else {
                                __stream = →fopen(&v1, (char*)&gvar_80553F1);
                            }
                        }
                    }
                }
                while(!__stream);
                counter = 1;
            loc_804DFAE:
                int v19 = nc_fgets_nb((int)&v2, 0x800, (int)__stream);
                while(v19) {
                    if(counter == 1) {
                        char* ptr7 = →strrchr(&v2, 93);
                        char* ptr8 = →strchr(&v2, 91);
                        size_t v20 = (size_t)((int)ptr7 - (int)ptr8);
                        char* ptr9 = →strchr(&v2, 91);
                        →strncpy(&v3, ptr9 + 1, (size_t)((int)ptr7 - (int)ptr8));
                        *(char*)((int)&v6 + v20) = 0;
                        v0 = new_submenu(&v5, &v2, v14);
                        if(v0 < 0) {
                            break;
                        }
                        else {
                            ++counter;
                            ++v16;
                            goto loc_804DFAE;
                        }
                    }
                    else {
                        v0 = new_item(&v2, (int)&v3, v14, v0);
                        if(v0 < 0) {
                            break;
                        }
                        else {
                            ++counter;
                            ++v16;
                        }
                        v19 = nc_fgets_nb((int)&v2, 0x800, (int)__stream);
                    }
                }
                →fclose(__stream);
                goto loc_804DFE1;
            loc_804E050:
                while(*(int*)(counter * 4 + v14)) {
                    →fprintf(__stream2, *(char**)(counter * 4 + v14));
                    ++counter;
                }
                →fflush(__stream2);
                →fclose(__stream1);
                →fclose(__stream2);
                for(counter = 0; counter < v9 * 2 + v10 * 4 + (v10 + v13) + 1; ++counter) {
                    →free(*(void**)(counter * 4 + v14));
                }
                →free((void*)v14);
                result = v16;
            }
        }
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v8)) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int restore_html(int param0) {
    DIR* __dirp1;
    int result;
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char* ptr0;
    FILE* __stream1;
    int v5 = param0;
    int v6 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →sprintf(&v0, "%s/docs/html/index.html", v5);
    FILE* __stream = →fopen(&v0, (char*)&gvar_8055C93);
    if(!__stream) {
        int* ptr1 = →__errno_location();
        if(ptr1[0] == 2) {
            result = 0;
        }
        else {
            →fclose(NULL);
            int* ptr2 = →__errno_location();
            char* ptr3 = →strerror(ptr2[0]);
            char* ptr4 = &v0;
            /*NO_RETURN*/ print_error(-24, "checking for file \'%s\': %s\n");
        }
    }
    else {
        →memcpy((void*)&TMP_HTML, "/tmp/grass.extensions.db.XXXXXX", 32);
        →mkstemp((char*)&TMP_HTML);
        FILE* __stream2 = →fopen((char*)&TMP_HTML, (char*)&gvar_8055CD4);
        if(!__stream2) {
            int* ptr5 = →__errno_location();
            →strerror(ptr5[0]);
            /*NO_RETURN*/ print_error(-24, "could not create temp file \'%s\': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        if(VERBOSE) {
            →sprintf(&v1, "cp -vf %s %s/docs/html/index.html ; chmod -v a+r %s/docs/html/index.html ;", &TMP_HTML, v5, v5);
        }
        else {
            →sprintf(&v1, "cp -f %s %s/docs/html/index.html &>%s ; chmod a+r %s/docs/html/index.html &>%s ;", &TMP_HTML, v5, &TMP_NULL, v5, &TMP_NULL);
        }
        →strcpy((char*)&HTML_CMD, &v1);
        atexit((void __cdecl (*_)())&exit_db);
        →sprintf(&v3, "%s/docs/extensions", v5);
        DIR* __dirp = →opendir(&v3);
        if(!__dirp) {
            result = 0;
        }
        else {
            int v7 = 0;
            int v8 = 0;
            dirent* i;
            for(i = →readdir(__dirp); i; i = →readdir(__dirp)) {
                →sprintf(&v4, "%s/%s", &v3, (int*)((char*)i + 11));
                int v9 = →strcmp((char*)i + 11, (char*)&gvar_8055E0A);
                if(v9) {
                    int v10 = →strcmp((char*)i + 11, (char*)&gvar_8055E0C);
                    if(v10) {
                        __dirp1 = →opendir(&v4);
                        if(__dirp1) {
                            ++v8;
                            →closedir(__dirp1);
                        }
                    }
                }
            }
            →closedir(__dirp);
            int v11 = 0;
            for(char* j = →fgets(&v1, 0x800, __stream); j; j = →fgets(&v1, 0x800, __stream)) {
                ++v11;
            }
            if(!v11) {
                result = 0;
            }
            else {
                →rewind(__stream);
                int v12 = (int)→calloc((size_t)(v8 + v11 + 10), 4);
                int k;
                for(k = 0; k < v8 + v11 + 10; ++k) {
                    *(int*)(k * 4 + v12) = 0;
                }
                k = 0;
                for(char* counter = →fgets(&v1, 0x800, __stream); counter; counter = →fgets(&v1, 0x800, __stream)) {
                    unsigned int* ptr6 = (unsigned int*)(k * 4 + v12);
                    size_t v13 = →strlen(&v1);
                    void* ptr7 = →malloc(v13 + 1);
                    *ptr6 = ptr7;
                    →strcpy(*(char**)(k * 4 + v12), &v1);
                    ++k;
                }
                *(int*)(k * 4 + v12) = 0;
                __dirp = →opendir(&v3);
                int v14 = 0;
            loc_804F6D6:
                do {
                    i = →readdir(__dirp);
                    if(!i) {
                        →closedir(__dirp);
                        k = 0;
                        goto loc_804F745;
                    }
                    else {
                        →sprintf(&v4, "%s/%s", &v3, (int*)((char*)i + 11));
                        int v15 = →strcmp((char*)i + 11, (char*)&gvar_8055E0A);
                        if(!v15) {
                            goto loc_804F6D6;
                        }
                        else {
                            int v16 = →strcmp((char*)i + 11, (char*)&gvar_8055E0C);
                            if(!v16) {
                                goto loc_804F6D6;
                            }
                            else {
                                __dirp1 = →opendir(&v4);
                                if(!__dirp1) {
                                    goto loc_804F6D6;
                                }
                                else {
                                    →closedir(__dirp1);
                                    →sprintf(&v2, "%s/index.html", &v4);
                                    __stream1 = →fopen(&v2, (char*)&gvar_8055C93);
                                }
                            }
                        }
                    }
                }
                while(!__stream1);
                int v17 = 0;
                int v18 = 0;
                int v19 = 0;
                k = 0;
                do {
                    char* ptr8 = →fgets(&v1, 0x800, __stream1);
                    if(!ptr8) {
                        goto loc_804F618;
                    }
                    else {
                        ptr0 = →strstr(&v1, "<title>");
                    }
                }
                while(!ptr0);
                k = 1;
            loc_804F618:
                if(!k) {
                    goto loc_804F6D6;
                }
                else {
                    →strchr(&v1, 40);
                    →__isoc99_sscanf();
                    new_ext_html((char*)i + 11, v5, v12, v17, v18, v19);
                    ++v14;
                    →fclose(__stream1);
                    goto loc_804F6D6;
                loc_804F745:
                    while(*(int*)(k * 4 + v12)) {
                        →fprintf(__stream2, *(char**)(k * 4 + v12));
                        ++k;
                    }
                    →fflush(__stream2);
                    →fclose(__stream);
                    →fclose(__stream2);
                    for(k = 0; k < v8 + v11 + 10; ++k) {
                        →free(*(void**)(k * 4 + v12));
                    }
                    →free((void*)v12);
                    result = v14;
                }
            }
        }
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v6)) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int run_post(char* param0, int param1, int param2, int param3) {
    char v0;
    char v1;
    char* __filename = param0;
    int v2 = param2;
    int v3 = param3;
    int v4 = *(int*)(__GS_BASE + (int)(int*)0x14);
    switch((unsigned int)(param1 - 3)) {
        case 0: {
            →memcpy((void*)&GEM_ACTION, "GEM_ACTION=INSTALL", 19);
            break;
        }
        case 1: {
            →memcpy((void*)&GEM_ACTION, "GEM_ACTION=INSTALL", 19);
            break;
        }
        case 2: {
            →memcpy((void*)&GEM_ACTION, "GEM_ACTION=QUERY", 17);
            break;
        }
        case 3: {
            →memcpy((void*)&GEM_ACTION, "GEM_ACTION=CLEAN", 17);
            break;
        }
        case 4: {
            →memcpy((void*)&GEM_ACTION, "GEM_ACTION=LICENSE", 19);
        }
        case 6: {
            →memcpy((void*)&GEM_ACTION, "GEM_ACTION=DETAILS", 19);
        }
    }
    →putenv((char*)&GEM_ACTION);
    if(v3) {
        →sprintf((char*)&INSTALL_BASE, "INSTALL_BASE=%s", v3);
    }
    else {
        →memcpy((void*)&INSTALL_BASE, "INSTALL_BASE=UNDEFINED", 23);
    }
    →putenv((char*)&INSTALL_BASE);
    →getcwd(&v0, 0x800);
    char* ptr0 = basename(__filename);
    →sprintf(&v1, "%s/%s/src", &v0, ptr0);
    →sprintf((char*)&EXT_BASE, "EXT_BASE=%s", &v1);
    →putenv((char*)&EXT_BASE);
    if(!v2) {
        →memcpy((void*)&INSTALL_TYPE, "INSTALL_TYPE=src", 17);
    }
    else {
        →sprintf((char*)&INSTALL_TYPE, "INSTALL_TYPE=%s", v2);
    }
    →putenv((char*)&INSTALL_TYPE);
    →sprintf(&v0, (char*)&gvar_8056F3E, FORCE);
    →sprintf((char*)&GEM_FORCE, "GEM_FORCE=%s", &v0);
    →putenv((char*)&GEM_FORCE);
    →sprintf(&v0, (char*)&gvar_8056F3E, VERBOSE);
    →sprintf((char*)&GEM_VERBOSE, "GEM_VERBOSE=%s", &v0);
    →putenv((char*)&GEM_VERBOSE);
    →memcpy((void*)&GEM_GUI, "GEM_GUI=0", 10);
    →putenv((char*)&GEM_GUI);
    atexit((void __cdecl (*_)())&exit_tmp);
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v4;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int show_details(char* param0) {
    char v0;
    char* __filename = param0;
    int v1 = *(int*)(__GS_BASE + (int)(int*)0x14);
    char* __src = basename(__filename);
    →strcpy(&v0, __src);
    int v2 = →chdir(&v0);
    if(v2 < 0) {
        int* ptr0 = →__errno_location();
        →strerror(ptr0[0]);
        /*NO_RETURN*/ print_error(-2, "extension \'%s\' not accessible: (%s)\n");
    }
    dump_ascii("info", "Detailed information");
    →system("sh post");
    /*NO_RETURN*/ →exit(0);
}

int show_help() {
    size_t __size;
    →fwrite("Usage: gem64 [OPTION] [ACTION] [FILE|DIR]\n", 1, 42, stdout);
    →fwrite("Install a GRASS extension from FILE or DIR.\n", __size, 44, stdout);
    →fwrite("Manage (installed) GRASS extension(s).\n", __size, 39, stdout);
    →fwrite("\nPossible ACTIONs are:\n", __size, 23, stdout);
    →fwrite("  -i, --install=EXT\tinstall a GRASS extension\n", __size, 46, stdout);
    →fwrite("  -u, --uninstall=EXT\tremove an extension from GRASS\n", __size, 53, stdout);
    →fwrite("  -q, --query=EXT\tdisplay information about extension/list installed\n", __size, 69, stdout);
    →fwrite("  -d, --details=EXT\tdisplay additional details about an extension\n", __size, 66, stdout);
    →fwrite("  -c, --clean=EXT\tclean extension\'s source code directories\n", __size, 60, stdout);
    →fwrite("  -t, --test=EXT\tconfigure and compile extension, but don\'t install\n", __size, 68, stdout);
    →fwrite("  -l, --license=EXT\tshow copyright information for an extension\n", __size, 64, stdout);
    →fwrite("  -r, --restore\t\trecreate HTML links and GIS Manager entries\n", __size, 61, stdout);
    →fwrite("  -h, --help\t\tdisplay this help and exit\n", __size, 41, stdout);
    →fwrite("  -V, --version\t\toutput version information and exit\n\n", __size, 54, stdout);
    →fwrite("\nPossible OPTIONs are:\n", __size, 23, stdout);
    →fwrite("  -g, --grass=PATH\tpath to GRASS installation dir\n", __size, 50, stdout);
    →fwrite("  -b, --binary=NAME\tno compilation: use binary files for system NAME\n", __size, 69, stdout);
    →fwrite("  -f, --force\t\tforce action, regardless of dependencies\n", __size, 56, stdout);
    →fwrite("  -v, --verbose\t\tdisplay detailed status information\n", __size, 53, stdout);
    →fwrite("  -s, --skip-config\tskip configure script\n", __size, 42, stdout);
    →fwrite("  -x, --config-opts=OPTS\tpass OPTS to configure script\n", __size, 55, stdout);
    →fwrite("  -o, --options=OPTS\toptions to pass to the C compiler/linker\n", __size, 62, stdout);
    →fwrite("  -C, --config-cmd=CMD\tDefine custom \'configure\' command (default=configure)\n", __size, 77, stdout);
    →fwrite("  -m, --make-cmd=CMD\tDefine custom \'make\' command (default=make)\n", __size, 65, stdout);
    →fwrite("\nWhen run from within a GRASS session, locations of libs, header files\n", __size, 71, stdout);
    →fwrite("and installation target dir will be assumed to match those of the active\n", __size, 73, stdout);
    →fwrite("GRASS version. ", __size, 15, stdout);
    →fwrite("Option -g can be used to override these or install extensions\nfrom outside", __size, 74, stdout);
    →fwrite("of a GRASS session.\n", __size, 20, stdout);
    →fwrite("Per default, extensions will be compiled from source and then installed.\n", __size, 73, stdout);
    →fwrite("If the exension package contains binaries for the user\'s platform, they can\n", __size, 76, stdout);
    →fwrite("be installed instead using the -b option. ", __size, 42, stdout);
    →fwrite("For installation from source code, a C compiler and make tools are needed.\n", __size, 75, stdout);
    →fwrite("\nExample:\n", __size, 10, stdout);
    →fwrite("\tgem64 -b macosx --grass=/usr/local/grass-6.4.0 -i myExtension\n", __size, 63, stdout);
    →fwrite("Installs the MacOS X binaries for \'myExtension\' in /usr/local/grass-6.4.0.\n", __size, 75, stdout);
    /*NO_RETURN*/ →exit(0);
}

int show_license(char* param0) {
    char v0;
    char* __filename = param0;
    int v1 = *(int*)(__GS_BASE + (int)(int*)0x14);
    char* __src = basename(__filename);
    →strcpy(&v0, __src);
    int v2 = →chdir(&v0);
    if(v2 < 0) {
        int* ptr0 = →__errno_location();
        →strerror(ptr0[0]);
        /*NO_RETURN*/ print_error(-2, "extension \'%s\' not accessible: (%s)\n");
    }
    dump_ascii("license", "Detailed information");
    →system("sh post");
    /*NO_RETURN*/ →exit(0);
}

int show_version() {
    int v0;
    FILE* __stream = stdout;
    *(long long*)&v0 = 1.03;
    →fprintf(__stream, "gem64 (GRASS extensions manager) %.2f\n", *(double*)&v0);
    →fwrite("Written by Benjamin Ducke\n", 1, 26, stdout);
    →fwrite("\nCopyright (C) 2005 Benjamin Ducke\n", 1, 35, stdout);
    →fwrite("This is free software; see the source for copying conditions.  There is NO\n", 1, 75, stdout);
    →fwrite("warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n", 1, 76, stdout);
    /*NO_RETURN*/ →exit(0);
}

int source_clean(char* param0) {
    char v0;
    char v1;
    char* __filename = param0;
    int v2 = *(int*)(__GS_BASE + (int)(int*)0x14);
    char* ptr0 = basename(__filename);
    →sprintf(&v0, "%s/src", ptr0);
    int v3 = →chdir(&v0);
    if(v3 < 0) {
        /*NO_RETURN*/ print_error(-2, "extension \'%s\' not accessible: ");
    }
    if(VERBOSE) {
        →fprintf(stdout, "Running \'%s clean\':\n", &MAKE_CMD);
        →sprintf(&v1, "%s -f Makefile clean", &MAKE_CMD);
    }
    else {
        →fwrite("Cleaning up...", 1, 14, stdout);
        →sprintf(&v1, "%s -f Makefile -s clean &> %s", &MAKE_CMD, &TMP_NULL);
    }
    v3 = →system(&v1);
    if(v3 == -1) {
        /*NO_RETURN*/ print_error(-9, "could not run \'%s clean\' do you have make tools installed?\n");
    }
    print_done();
    →system("sh ../post");
    int result = 0;
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v2)) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int source_install(char* param0, char* param1, char* param2, int param3, int param4, int param5, char* param6) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char* __filename = param0;
    char* __file = param1;
    char* ptr0 = param2;
    char* __s = param6;
    int v6 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v7 = stat(__file, &v5);
    if(v7 < 0) {
        int* ptr1 = →__errno_location();
        →strerror(ptr1[0]);
        /*NO_RETURN*/ print_error(-5, "installation directory invalid: %s\n");
    }
    →sprintf((char*)&GINSTALL_DST, "GINSTALL_DST=%s", __file);
    →putenv((char*)&GINSTALL_DST);
    →sprintf(&v0, "%s/include", __file);
    →sprintf((char*)&GINSTALL_INC, "GINSTALL_INC=%s", &v0);
    →putenv((char*)&GINSTALL_INC);
    →sprintf(&v0, "%s/lib", __file);
    →sprintf((char*)&GINSTALL_LIB, "GINSTALL_LIB=%s", &v0);
    →putenv((char*)&GINSTALL_LIB);
    →sprintf((char*)&GEM_GRASS_DIR, "GEM_GRASS_DIR=%s", __file);
    →putenv((char*)&GEM_GRASS_DIR);
    char* __s1 = →strdup(__s);
    char* __nptr = →strtok(__s1, (char*)&gvar_8055EDB);
    char* __nptr1 = →strtok(NULL, (char*)&gvar_8055EDB);
    char* __nptr2 = →strtok(NULL, (char*)&gvar_8055EDB);
    long v8 = →strtol(__nptr, NULL, 10);
    long v9 = →strtol(__nptr1, NULL, 10);
    long v10 = →strtol(__nptr2, NULL, 10);
    →free(__s1);
    atexit((void __cdecl (*_)())&exit_tmp);
    char* ptr2 = basename(__filename);
    →sprintf(&v1, "%s/src", ptr2);
    v7 = →chdir(&v1);
    if(v7 < 0) {
        int* ptr3 = →__errno_location();
        →strerror(ptr3[0]);
        /*NO_RETURN*/ print_error(-2, "extension files in \'%s\' not accessible: %s\n");
    }
    if(!SKIP_CFG) {
        if(VERBOSE) {
            →fwrite("Running configure script:\n", 1, 26, stdout);
            →sprintf(&v3, "sh %s %s", &CONFIG_CMD, &CONFIG_OPTS);
        }
        else {
            →fwrite("Configuring...", 1, 14, stdout);
            →sprintf(&v3, "sh %s %s --quiet &> %s", &CONFIG_CMD, &CONFIG_OPTS, &TMP_NULL);
        }
        v7 = →system(&v3);
        if(v7 == -1) {
            /*NO_RETURN*/ print_error(-27, "could not run configure script.\n");
        }
        if(v7 > 0) {
            /*NO_RETURN*/ print_error(-3, "system configuration failed.\n");
        }
        print_done();
        print_cfg();
    }
    →sprintf((char*)&GEM_EXT_NAME, "GEM_EXT_NAME=%s", ptr0);
    →putenv((char*)&GEM_EXT_NAME);
    →sprintf(&v0, "%i.%i.%i", param3, param4, param5);
    →sprintf((char*)&GEM_EXT_VERSION, "GEM_EXT_VERSION=%s", &v0);
    →putenv((char*)&GEM_EXT_VERSION);
    dump_html("../description", (void*)&TMP_DESCR);
    dump_html("../info", (void*)&TMP_INFO);
    dump_html("../depends", (void*)&TMP_DEPS);
    dump_html("../bugs", (void*)&TMP_BUGS);
    dump_html("../authors", (void*)&TMP_AUTHORS);
    →sprintf((char*)&GEM_EXT_DESCR, "GEM_EXT_DESCR=%s", &TMP_DESCR);
    →putenv((char*)&GEM_EXT_DESCR);
    →sprintf((char*)&GEM_EXT_INFO, "GEM_EXT_INFO=%s", &TMP_INFO);
    →putenv((char*)&GEM_EXT_INFO);
    →sprintf((char*)&GEM_EXT_DEPS, "GEM_EXT_DEPS=%s", &TMP_DEPS);
    →putenv((char*)&GEM_EXT_DEPS);
    →sprintf((char*)&GEM_EXT_BUGS, "GEM_EXT_BUGS=%s", &TMP_BUGS);
    →putenv((char*)&GEM_EXT_BUGS);
    →sprintf((char*)&GEM_EXT_AUTHORS, "GEM_EXT_AUTHORS=%s", &TMP_AUTHORS);
    →putenv((char*)&GEM_EXT_AUTHORS);
    atexit((void __cdecl (*_)())&exit_tmp);
    check_dependencies((int)__filename, __file, __s);
    if(VERBOSE) {
        →fprintf(stdout, "Running \'%s\':\n", &MAKE_CMD);
        →sprintf(&v3, "%s -f Makefile", &MAKE_CMD);
    }
    else {
        →fwrite("Compiling...", 1, 12, stdout);
        →sprintf(&v3, "%s -f Makefile &> %s", &MAKE_CMD, &TMP_NULL);
    }
    v7 = →system(&v3);
    if(v7 == -1 && !VERBOSE) {
        char* ptr4 = (char*)&MAKE_CMD;
        /*NO_RETURN*/ print_error(-9, "could not run \'%s\' do you have make tools installed?\n");
    }
    if(v7 > 0) {
        /*NO_RETURN*/ print_error(-4, "source code could not be compiled.\n \t\t\tRun again with option -v to see what is causing trouble.\n");
    }
    print_done();
    →fwrite("Installing...", 1, 13, stdout);
    FILE* __stream = →fopen("../uninstall", (char*)&gvar_8055E6B);
    if(!__stream) {
        int* ptr5 = →__errno_location();
        →strerror(ptr5[0]);
        print_warning("error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system");
    }
    else {
        if(VERBOSE) {
            →sprintf(&v0, "cp -vf ../uninstall %s/etc/uninstall.%s ;", __file, ptr0);
        }
        else {
            →sprintf(&v0, "cp -f ../uninstall %s/etc/uninstall.%s &> %s ;", __file, ptr0, &TMP_NULL);
        }
        →strcpy((char*)&UNINSTALL_CMD, &v0);
        →fclose(__stream);
    }
    register_extension((int)__file, &gvar_80566DF, ptr0, param3, param4, param5);
    check_dependencies((int)__filename, __file, __s);
    if(v8 == 6 && v9 <= 0) {
        register_entries_gisman((int)ptr0, (int)__file);
    }
    register_entries_gisman2((int)ptr0, (int)__file);
    register_html(ptr0, (int)__file, param3, param4, param5);
    if(VERBOSE) {
        →fprintf(stdout, "Running \'%s install\':\n", &MAKE_CMD);
        →sprintf(&v2, "%s -f Makefile install ; \t\t\t\t\tcp -vf %s %s/etc/extensions.db ; chmod -v a+r %s/etc/extensions.db ;", &MAKE_CMD, &TMPDB, __file, __file);
    }
    else {
        →sprintf(&v2, "%s -f Makefile -s install &> %s ; \t\t\t\t\tcp -f %s %s/etc/extensions.db &> %s ; chmod a+r %s/etc/extensions.db &> %s ;", &MAKE_CMD, &TMP_NULL, &TMPDB, __file, &TMP_NULL, __file, &TMP_NULL);
    }
    if(VERBOSE) {
        →memcpy(&v4, "sh ../post", 11);
    }
    else {
        →sprintf((char*)&v4, "sh ../post &> %s", &TMP_NULL);
    }
    →sprintf(&v0, "%s %s %s %s %s %s", &v2, &UNINSTALL_CMD, &GISMAN_CMD, &GISMAN2_CMD, &HTML_CMD, &v4);
    su((int)__file, &v0);
    print_done();
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v6;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int stat(char* __file, stat* __buf) {
    return →__xstat(3, __file, __buf);
}

int su(int param0, char* param1) {
    char v0;
    int v1 = param0;
    char* __command = param1;
    int v2 = *(int*)(__GS_BASE + (int)(int*)0x14);
    next.4089 = (unsigned int)(next.4089 * 1103515245 + 54321);
    next.4089 = (unsigned int)((next.4089 >>> 16) & 0x7fff);
    →srand(next.4089);
    int v3 = →rand();
    →sprintf(&v0, "%s/gem.test.%i", v1, v3);
    FILE* __stream = →fopen(&v0, (char*)&gvar_8054B0C);
    int* ptr0 = →__errno_location();
    if(ptr0[0] == 13) {
        /*NO_RETURN*/ print_error(-5, "You don\'t have write access to your local GRASS installation.\nPlease consult your system administrator.\n");
    }
    →remove(&v0);
    →fclose(__stream);
    int v4 = →system(__command);
    if(v4) {
        /*NO_RETURN*/ print_error(-9, "could not run \'%s\'.\n");
    }
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v2;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

void sub_8048A74() {
    jump gvar_8058FFC;
}

int sub_8049CB0() {
    int* ptr0;
    →fclose(*(FILE**)(ptr0 - 0x404));
    int result = *(ptr0 - 3) ^ *(int*)(__GS_BASE + (int)(int*)0x14);
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int sub_8049CF8() {
    int* ptr0;
    →fclose(*(FILE**)(ptr0 - 0x404));
    int result = *(ptr0 - 3) ^ *(int*)(__GS_BASE + (int)(int*)0x14);
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int sub_804AD2F() {
    int* ptr0;
    int result = *(ptr0 - 3) ^ *(int*)(__GS_BASE + (int)(int*)0x14);
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B2C2(int param0, int param1, char* param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22, int param23, int param24, int param25, int param26, int param27, int param28, int param29, int param30, int param31, int param32, int param33, int param34, int param35, int param36, int param37, int param38, int param39, int param40, int param41, int param42, int param43, int param44, int param45, int param46, int param47, int param48, int param49, int param50, int param51, int param52, int param53, int param54, int param55, int param56, int param57, int param58, int param59, int param60, int param61, int param62, int param63, int param64, int param65, int param66, int param67, int param68, int param69, int param70, int param71, int param72, int param73, int param74, int param75, int param76, int param77, int param78, int param79, int param80, int param81, int param82, int param83, int param84, int param85, int param86, int param87, int param88, int param89, int param90, int param91, int param92, int param93, int param94, int param95, int param96, int param97, int param98, int param99, int par194, int par198, int par19C, int par1A0, int par1A4, int par1A8, int par1AC, int par1B0, int par1B4, int par1B8, int par1BC, int par1C0, int par1C4, int par1C8, int par1CC, int par1D0, int par1D4, int par1D8, int par1DC, int par1E0, int par1E4, int par1E8, int par1EC, int par1F0, int par1F4, int par1F8, int par1FC, int par200, int par204, int par208, int par20C, int par210, int par214, int par218, int par21C, int par220, int par224, int par228, int par22C, int par230, int par234, int par238, int par23C, int par240, int par244, int par248, int par24C, int par250, int par254, int par258, int par25C, int par260, int par264, int par268, int par26C, int par270, int par274, int par278, int par27C, int par280, int par284, int par288, int par28C, int par290, int par294, int par298, int par29C, int par2A0, int par2A4, int par2A8, int par2AC, int par2B0, int par2B4, int par2B8, int par2BC, int par2C0, int par2C4, int par2C8, int par2CC, int par2D0, int par2D4, int par2D8, int par2DC, int par2E0, int par2E4, int par2E8, int par2EC, int par2F0, int par2F4, int par2F8, int par2FC, int par300, int par304, int par308, int par30C, int par310, int par314, int par318, int par31C, int par320, int par324, int par328, int par32C, int par330, int par334, int par338, int par33C, int par340, int par344, int par348, int par34C, int par350, int par354, int par358, int par35C, int par360, int par364, int par368, int par36C, int par370, int par374, int par378, int par37C, int par380, int par384, int par388, int par38C, int par390, int par394, int par398, int par39C, int par3A0, int par3A4, int par3A8, int par3AC, int par3B0, int par3B4, int par3B8, int par3BC, int par3C0, int par3C4, int par3C8, int par3CC, int par3D0, int par3D4, int par3D8, int par3DC, int par3E0, int par3E4, int par3E8, int par3EC, int par3F0, int par3F4, int par3F8, int par3FC, int par400, int par404, int par408, int par40C, int par410, int par414, int par418, int par41C, int par420, int par424, int par428, int par42C, int par430, int par434, int par438, int par43C, int par440, int par444, int par448, int par44C, int par450, int par454, int par458, int par45C, int par460, int par464, int par468, int par46C, int par470, int par474, int par478, int par47C, int par480, int par484, int par488, int par48C, int par490, int par494, int par498, int par49C, int par4A0, int par4A4, int par4A8, int par4AC, int par4B0, int par4B4, int par4B8, int par4BC, int par4C0, int par4C4, int par4C8, int par4CC, int par4D0, int par4D4, int par4D8, int par4DC, int par4E0, int par4E4, int par4E8, int par4EC, int par4F0, int par4F4, int par4F8, int par4FC, int par500, int par504, int par508, int par50C, int par510, int par514, int par518, int par51C, int par520, int par524, int par528, int par52C, int par530, int par534, int par538, int par53C, int par540, int par544, int par548, int par54C, int par550, int par554, int par558, int par55C, int par560, int par564, int par568, int par56C, int par570, int par574, int par578, int par57C, int par580, int par584, int par588, int par58C, int par590, int par594, int par598, int par59C, int par5A0, int par5A4, int par5A8, int par5AC, int par5B0, int par5B4, int par5B8, int par5BC, int par5C0, int par5C4, int par5C8, int par5CC, int par5D0, int par5D4, int par5D8, int par5DC, int par5E0, int par5E4, int par5E8, int par5EC, int par5F0, int par5F4, int par5F8, int par5FC, int par600, int par604, int par608, int par60C, int par610, int par614, int par618, int par61C, int par620, int par624, int par628, int par62C, int par630, int par634, int par638, int par63C, int par640, int par644, int par648, int par64C, int par650, int par654, int par658, int par65C, int par660, int par664, int par668, int par66C, int par670, int par674, int par678, int par67C, int par680, int par684, int par688, int par68C, int par690, int par694, int par698, int par69C, int par6A0, int par6A4, int par6A8, int par6AC, int par6B0, int par6B4, int par6B8, int par6BC, int par6C0, int par6C4, int par6C8, int par6CC, int par6D0, int par6D4, int par6D8, int par6DC, int par6E0, int par6E4, int par6E8, int par6EC, int par6F0, int par6F4, int par6F8, int par6FC, int par700, int par704, int par708, int par70C, int par710, int par714, int par718, int par71C, int par720, int par724, int par728, int par72C, int par730, int par734, int par738, int par73C, int par740, int par744, int par748, int par74C, int par750, int par754, int par758, int par75C, int par760, int par764, int par768, int par76C, int par770, int par774, int par778, int par77C, int par780, int par784, int par788, int par78C, int par790, int par794, int par798, int par79C, int par7A0, int par7A4, int par7A8, int par7AC, int par7B0, int par7B4, int par7B8, int par7BC, int par7C0, int par7C4, int par7C8, int par7CC, int par7D0, int par7D4, int par7D8, int par7DC, int par7E0, int par7E4, int par7E8, int par7EC, int par7F0, int par7F4, int par7F8, int par7FC, int par800, int par804, int par808, int par80C, int par810, int par814, int par818, int par81C, int par820, int par824, int par828, int par82C, int par830, int par834, int par838, int par83C, int par840, int par844, int par848, int par84C, int par850, int par854, int par858, int par85C, int par860, int par864, int par868, int par86C, int par870, int par874, int par878, int par87C, int par880, int par884, int par888, int par88C, int par890, int par894, int par898, int par89C, int par8A0, int par8A4, int par8A8, int par8AC, int par8B0, int par8B4, int par8B8, int par8BC, int par8C0, int par8C4, int par8C8, int par8CC, int par8D0, int par8D4, int par8D8, int par8DC, int par8E0, int par8E4, int par8E8, int par8EC, int par8F0, int par8F4, int par8F8, int par8FC, int par900, int par904, int par908, int par90C, int par910, int par914, int par918, int par91C, int par920, int par924, int par928, int par92C, int par930, int par934, int par938, int par93C, int par940, int par944, int par948, int par94C, int par950, int par954, int par958, int par95C, int par960, int par964, int par968, int par96C, int par970, int par974, int par978, int par97C, int par980, int par984, int par988, int par98C, int par990, int par994, int par998, int par99C, int par9A0, int par9A4, int par9A8, int par9AC, int par9B0, int par9B4, int par9B8, int par9BC, int par9C0, int par9C4, int par9C8, int par9CC, int par9D0, int par9D4, int par9D8, int par9DC, int par9E0, int par9E4, int par9E8, int par9EC, int par9F0, int par9F4, int par9F8, int par9FC, int parA00, int parA04, int parA08, int parA0C, int parA10, int parA14, int parA18, int parA1C, int parA20, int parA24, int parA28, int parA2C, int parA30, int parA34, int parA38, int parA3C, int parA40, int parA44, int parA48, int parA4C, int parA50, int parA54, int parA58, int parA5C, int parA60, int parA64, int parA68, int parA6C, int parA70, int parA74, int parA78, int parA7C, int parA80, int parA84, int parA88, int parA8C, int parA90, int parA94, int parA98, int parA9C, int parAA0, int parAA4, int parAA8, int parAAC, int parAB0, int parAB4, int parAB8, int parABC, int parAC0, int parAC4, int parAC8, int parACC, int parAD0, int parAD4, int parAD8, int parADC, int parAE0, int parAE4, int parAE8, int parAEC, int parAF0, int parAF4, int parAF8, int parAFC, int parB00, int parB04, int parB08, int parB0C, int parB10, int parB14, int parB18, int parB1C, int parB20, int parB24, int parB28, int parB2C, int parB30, int parB34, int parB38, int parB3C, int parB40, int parB44, int parB48, int parB4C, int parB50, int parB54, int parB58, int parB5C, int parB60, int parB64, int parB68, int parB6C, int parB70, int parB74, int parB78, int parB7C, int parB80, int parB84, int parB88, int parB8C, int parB90, int parB94, int parB98, int parB9C, int parBA0, int parBA4, int parBA8, int parBAC, int parBB0, int parBB4, int parBB8, int parBBC, int parBC0, int parBC4, int parBC8, int parBCC, int parBD0, int parBD4, int parBD8, int parBDC, int parBE0, int parBE4, int parBE8, int parBEC, int parBF0, int parBF4, int parBF8, int parBFC, int parC00, int parC04, int parC08, int parC0C, int parC10, int parC14, int parC18, int parC1C, int parC20, int parC24, int parC28, int parC2C, int parC30, int parC34, int parC38, int parC3C, int parC40, int parC44, int parC48, int parC4C, int parC50, int parC54, int parC58, int parC5C, int parC60, int parC64, int parC68, int parC6C, int parC70, int parC74, int parC78, int parC7C, int parC80, int parC84, int parC88, int parC8C, int parC90, int parC94, int parC98, int parC9C, int parCA0, int parCA4, int parCA8, int parCAC, int parCB0, int parCB4, int parCB8, int parCBC, int parCC0, int parCC4, int parCC8, int parCCC, int parCD0, int parCD4, int parCD8, int parCDC, int parCE0, int parCE4, int parCE8, int parCEC, int parCF0, int parCF4, int parCF8, int parCFC, int parD00, int parD04, int parD08, int parD0C, int parD10, int parD14, int parD18, int parD1C, int parD20, int parD24, int parD28, int parD2C, int parD30, int parD34, int parD38, int parD3C, int parD40, int parD44, int parD48, int parD4C, int parD50, int parD54, int parD58, int parD5C, int parD60, int parD64, int parD68, int parD6C, int parD70, int parD74, int parD78, int parD7C, int parD80, int parD84, int parD88, int parD8C, int parD90, int parD94, int parD98, int parD9C, int parDA0, int parDA4, int parDA8, int parDAC, int parDB0, int parDB4, int parDB8, int parDBC, int parDC0, int parDC4, int parDC8, int parDCC, int parDD0, int parDD4, int parDD8, int parDDC, int parDE0, int parDE4, int parDE8, int parDEC, int parDF0, int parDF4, int parDF8, int parDFC, int parE00, int parE04, int parE08, int parE0C, int parE10, int parE14, int parE18, int parE1C, int parE20, int parE24, int parE28, int parE2C, int parE30, int parE34, int parE38, int parE3C, int parE40, int parE44, int parE48, int parE4C, int parE50, int parE54, int parE58, int parE5C, int parE60, int parE64, int parE68, int parE6C, int parE70, int parE74, int parE78, int parE7C, int parE80, int parE84, int parE88, int parE8C, int parE90, int parE94, int parE98, int parE9C, int parEA0, int parEA4, int parEA8, int parEAC, int parEB0, int parEB4, int parEB8, int parEBC, int parEC0, int parEC4, int parEC8, int parECC, int parED0, int parED4, int parED8, int parEDC, int parEE0, int parEE4, int parEE8, int parEEC, int parEF0, int parEF4, int parEF8, int parEFC, int parF00, int parF04, int parF08, int parF0C, int parF10, int parF14, int parF18, int parF1C, int parF20, int parF24, int parF28, int parF2C, int parF30, int parF34, int parF38, int parF3C, int parF40, int parF44, int parF48, int parF4C, int parF50, int parF54, int parF58, int parF5C, int parF60, int parF64, int parF68, int parF6C, int parF70, int parF74, int parF78, int parF7C, int parF80, int parF84, int parF88, int parF8C, int parF90, int parF94, int parF98, int parF9C, int parFA0) {
    int v0;
    int v1;
    int v2;
    while(1) {
        if(FORCE && !*(int*)(v1 - 10260)) {
            *(int*)(v1 - 10268) = 0;
        }
        else if(FORCE) {
            *(int*)(v1 - 10268) = 1;
            *(int*)(v1 - 0x2820) = 0;
        }
        do {
            if(*(int*)(v1 - 0x2820)) {
                →fprintf(*(FILE**)(v1 - 0x282c), (char*)(v1 - 0x100c));
                →fflush(*(FILE**)(v1 - 0x282c));
            }
            int v3 = nc_fgets_nb(v1 - 0x100c, 0x800, *(int*)(v1 - 0x2828));
            if(!v3) {
                if(*(int*)(v1 - 10268)) {
                    if(!*(int*)(v1 - 0x2824)) {
                        int v4 = depstr(*(int*)(v1 - 0x2844), *(int*)(v1 - 10300));
                        →strcpy((char*)(v1 - 10252), (char*)v4);
                        param6 = v1 - 10252;
                        param5 = *(int*)(v1 - 10304);
                        param4 = *(int*)(v1 + 28);
                        param3 = *(int*)(v1 + 24);
                        param2 = *(char**)(v1 + 20);
                        →fprintf(*(FILE**)(v1 - 0x282c), "%s\t%i.%i.%i\t%s\t%s\n", *(int*)(v1 - 0x2844), *(int*)(v1 + 20), param3, param4, param5, param6);
                    }
                    else {
                        int v5 = depstr(*(int*)(v1 - 0x2844), *(int*)(v1 - 10300));
                        →strcpy((char*)(v1 - 10252), (char*)v5);
                        →fprintf(*(FILE**)(v1 - 0x282c), "%s\t%i.%i.%i\t%s\t%s\n", v1 - 6156, *(int*)(v1 + 20), *(int*)(v1 + 24), *(int*)(v1 + 28), v1 - 0x200c, v1 - 10252);
                    }
                }
                →fclose(*(FILE**)(v1 - 0x282c));
                →fclose(*(FILE**)(v1 - 0x2828));
                if(!*(int*)(v1 - 10256) || !*(int*)(v1 - 0x2818)) {
                    →memcpy((void*)&TMPDB, "/tmp/grass.extensions.db.XXXXXX", 32);
                    →mkstemp((char*)&TMPDB);
                    FILE* ptr0 = →fopen((char*)&TMPDB, (char*)&gvar_8054D74);
                    *(FILE**)(v1 - 0x282c) = ptr0;
                    if(!*(int*)(v1 - 0x282c)) {
                        int* ptr1 = →__errno_location();
                        param2 = →strerror(ptr1[0]);
                        param1 = v1 - 2060;
                        /*NO_RETURN*/ print_error(-15, "could not create temp db \'%s\': %s\n \t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
                    }
                    atexit((void __cdecl (*_)())&exit_db);
                    int v6 = depstr(*(int*)(v1 - 0x2844), *(int*)(v1 - 10300));
                    →strcpy((char*)(v1 - 10252), (char*)v6);
                    →fprintf(*(FILE**)(v1 - 0x282c), "%s\t%i.%i.%i\t%s\t%s\n", *(int*)(v1 - 0x2844), *(int*)(v1 + 20), *(int*)(v1 + 24), *(int*)(v1 + 28), *(int*)(v1 - 10304), v1 - 10252);
                    →fclose(*(FILE**)(v1 - 0x282c));
                }
                if((*(int*)(v1 - 12) ^ *(int*)(__GS_BASE + (int)(int*)0x14))) {
                    /*NO_RETURN*/ →__stack_chk_fail();
                }
                jump v2;
            }
            *(int*)(v1 - 10256) = *(int*)(v1 - 10256) + 1;
            *(int*)(v1 - 0x2820) = 1;
            param6 = v1 - 10252;
            param5 = v1 - 0x200c;
            param4 = v1 - 0x2838;
            param3 = v1 - 10292;
            param2 = (char*)(v1 - 10288);
            param1 = v1 - 6156;
            param0 = "%s\t%i.%i.%i\t%s\t%s";
            int v7 = v1 - 0x100c;
            →__isoc99_sscanf();
            v0 = →strcmp((char*)(v1 - 6156), *(char**)(v1 - 0x2844));
        }
        while(v0);
        *(int*)(v1 - 0x2824) = 1;
        int v8 = vercmp(*(int*)(v1 - 10288), *(int*)(v1 - 10292), *(int*)(v1 - 0x2838), *(int*)(v1 + 20), *(int*)(v1 + 24), *(int*)(v1 + 28));
        *(int*)(v1 - 10260) = v8;
        if(!FORCE) {
            if(*(int*)(v1 - 10260) >= 0) {
                int v9 = *(int*)(v1 - 10292);
                char* ptr2 = *(char**)(v1 - 10288);
                param4 = *(int*)(v1 - 0x2838);
                param3 = v9;
                param2 = ptr2;
                param1 = *(int*)(v1 - 0x2844);
                /*NO_RETURN*/ print_error(-16, "Extension \'%s\' with same or higher version (%i.%i.%i) already installed. You can use -f to overwrite this version, if you know what you are doing.\n");
            }
            int v10 = *(int*)(v1 - 10292);
            char* ptr3 = *(char**)(v1 - 10288);
            param4 = *(int*)(v1 - 0x2838);
            param3 = v10;
            param2 = ptr3;
            param1 = *(int*)(v1 - 0x2844);
            /*NO_RETURN*/ print_error(-16, "Extension \'%s\' with lower version (%i.%i.%i) already installed. You can use -f to overwrite this version, if you know what you are doing.\n");
        }
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B69F(int param0, int* param1, char* param2, int* param3, int* param4, int* param5, int* param6) {
    int* ptr0;
    if(*(ptr0 - 2565)) {
        *(ptr0 - 2565) = 0;
        →memcpy((void*)&TMPDB, "/tmp/grass.extensions.db.XXXXXX", 32);
        →mkstemp((char*)&TMPDB);
        FILE* ptr1 = →fopen((char*)&TMPDB, (char*)&gvar_8054D74);
        *(FILE**)(ptr0 - 2568) = ptr1;
        if(!*(ptr0 - 2568) && !FORCE) {
            int* ptr2 = →__errno_location();
            param2 = →strerror(ptr2[0]);
            param1 = ptr0 - 515;
            /*NO_RETURN*/ print_error(-19, "could not create temp db \'%s\': %s\n \t\t\t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        *(ptr0 - 2565) = 1;
        atexit((void __cdecl (*_)())&exit_db);
    }
    if(*(ptr0 - 2565)) {
        *(ptr0 - 2569) = 0;
        for(int i = nc_fgets_nb((int)(ptr0 - 1027), 0x800, *(ptr0 - 2567)); i; i = nc_fgets_nb((int)(ptr0 - 1027), 0x800, *(ptr0 - 2567))) {
            param6 = ptr0 - 2563;
            param5 = ptr0 - 2051;
            param4 = ptr0 - 2572;
            param3 = ptr0 - 2571;
            param2 = (char*)(ptr0 - 0xa0a);
            param1 = ptr0 - 1539;
            param0 = "%s\t%i.%i.%i\t%s\t%s";
            int* ptr3 = ptr0 - 1027;
            int v0 = →__isoc99_sscanf();
            *(ptr0 - 2564) = v0;
            if(!(*(ptr0 - 2564) ? 0: 1) && *(ptr0 - 2564) >= 0) {
                *(ptr0 - 2566) = 1;
                int v1 = →strcmp(*(char**)(ptr0 - 2576), (char*)(ptr0 - 1539));
                if(!v1) {
                    *(ptr0 - 2566) = 0;
                    *(ptr0 - 2569) = 1;
                }
                if(*(ptr0 - 2566)) {
                    char* ptr4 = →strstr((char*)(ptr0 - 2563), *(char**)(ptr0 - 2576));
                    if(ptr4 && !FORCE) {
                        param2 = (char*)(ptr0 - 1539);
                        param1 = *(unsigned int*)(ptr0 - 2576);
                        /*NO_RETURN*/ print_error(-19, "cannot uninstall extension \'%s\' it is needed by \'%s\'.\n");
                    }
                    →fprintf(*(FILE**)(ptr0 - 2568), (char*)(ptr0 - 1027));
                }
            }
        }
        if(!*(ptr0 - 2569)) {
            param2 = *(char**)(ptr0 - 0xa11);
            param1 = *(unsigned int*)(ptr0 - 2576);
            /*NO_RETURN*/ print_error(-19, "no extension \'%s\' registered/installed in \'%s\'.\n");
        }
        →fclose(*(FILE**)(ptr0 - 2567));
        →fclose(*(FILE**)(ptr0 - 2568));
    }
    int result = *(ptr0 - 3) ^ *(int*)(__GS_BASE + (int)(int*)0x14);
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B6E9(int param0, int* param1, char* param2, int* param3, int* param4, int* param5, int* param6) {
    int* ptr0;
    if(*(ptr0 - 2565)) {
        *(ptr0 - 2565) = 0;
        →memcpy((void*)&TMPDB, "/tmp/grass.extensions.db.XXXXXX", 32);
        →mkstemp((char*)&TMPDB);
        FILE* ptr1 = →fopen((char*)&TMPDB, (char*)&gvar_8054D74);
        *(FILE**)(ptr0 - 2568) = ptr1;
        if(!*(ptr0 - 2568) && !FORCE) {
            int* ptr2 = →__errno_location();
            param2 = →strerror(ptr2[0]);
            param1 = ptr0 - 515;
            /*NO_RETURN*/ print_error(-19, "could not create temp db \'%s\': %s\n \t\t\t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        *(ptr0 - 2565) = 1;
        atexit((void __cdecl (*_)())&exit_db);
    }
    if(*(ptr0 - 2565)) {
        *(ptr0 - 2569) = 0;
        for(int i = nc_fgets_nb((int)(ptr0 - 1027), 0x800, *(ptr0 - 2567)); i; i = nc_fgets_nb((int)(ptr0 - 1027), 0x800, *(ptr0 - 2567))) {
            param6 = ptr0 - 2563;
            param5 = ptr0 - 2051;
            param4 = ptr0 - 2572;
            param3 = ptr0 - 2571;
            param2 = (char*)(ptr0 - 0xa0a);
            param1 = ptr0 - 1539;
            param0 = "%s\t%i.%i.%i\t%s\t%s";
            int* ptr3 = ptr0 - 1027;
            int v0 = →__isoc99_sscanf();
            *(ptr0 - 2564) = v0;
            if(!(*(ptr0 - 2564) ? 0: 1) && *(ptr0 - 2564) >= 0) {
                *(ptr0 - 2566) = 1;
                int v1 = →strcmp(*(char**)(ptr0 - 2576), (char*)(ptr0 - 1539));
                if(!v1) {
                    *(ptr0 - 2566) = 0;
                    *(ptr0 - 2569) = 1;
                }
                if(*(ptr0 - 2566)) {
                    char* ptr4 = →strstr((char*)(ptr0 - 2563), *(char**)(ptr0 - 2576));
                    if(ptr4 && !FORCE) {
                        param2 = (char*)(ptr0 - 1539);
                        param1 = *(unsigned int*)(ptr0 - 2576);
                        /*NO_RETURN*/ print_error(-19, "cannot uninstall extension \'%s\' it is needed by \'%s\'.\n");
                    }
                    →fprintf(*(FILE**)(ptr0 - 2568), (char*)(ptr0 - 1027));
                }
            }
        }
        if(!*(ptr0 - 2569)) {
            param2 = *(char**)(ptr0 - 0xa11);
            param1 = *(unsigned int*)(ptr0 - 2576);
            /*NO_RETURN*/ print_error(-19, "no extension \'%s\' registered/installed in \'%s\'.\n");
        }
        →fclose(*(FILE**)(ptr0 - 2567));
        →fclose(*(FILE**)(ptr0 - 2568));
    }
    int result = *(ptr0 - 3) ^ *(int*)(__GS_BASE + (int)(int*)0x14);
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B797(int param0, int* param1, int* param2, int* param3, int* param4, int* param5, int* param6) {
    int* ptr0;
    if(*(ptr0 - 2565)) {
        *(ptr0 - 2569) = 0;
        for(int i = nc_fgets_nb((int)(ptr0 - 1027), 0x800, *(ptr0 - 2567)); i; i = nc_fgets_nb((int)(ptr0 - 1027), 0x800, *(ptr0 - 2567))) {
            param6 = ptr0 - 2563;
            param5 = ptr0 - 2051;
            param4 = ptr0 - 2572;
            param3 = ptr0 - 2571;
            param2 = ptr0 - 0xa0a;
            param1 = ptr0 - 1539;
            param0 = "%s\t%i.%i.%i\t%s\t%s";
            int* ptr1 = ptr0 - 1027;
            int v0 = →__isoc99_sscanf();
            *(ptr0 - 2564) = v0;
            if(!(*(ptr0 - 2564) ? 0: 1) && *(ptr0 - 2564) >= 0) {
                *(ptr0 - 2566) = 1;
                int v1 = →strcmp(*(char**)(ptr0 - 2576), (char*)(ptr0 - 1539));
                if(!v1) {
                    *(ptr0 - 2566) = 0;
                    *(ptr0 - 2569) = 1;
                }
                if(*(ptr0 - 2566)) {
                    char* ptr2 = →strstr((char*)(ptr0 - 2563), *(char**)(ptr0 - 2576));
                    if(ptr2 && !FORCE) {
                        param2 = ptr0 - 1539;
                        param1 = *(unsigned int*)(ptr0 - 2576);
                        /*NO_RETURN*/ print_error(-19, "cannot uninstall extension \'%s\' it is needed by \'%s\'.\n");
                    }
                    →fprintf(*(FILE**)(ptr0 - 2568), (char*)(ptr0 - 1027));
                }
            }
        }
        if(!*(ptr0 - 2569)) {
            param2 = *(unsigned int*)(ptr0 - 0xa11);
            param1 = *(unsigned int*)(ptr0 - 2576);
            /*NO_RETURN*/ print_error(-19, "no extension \'%s\' registered/installed in \'%s\'.\n");
        }
        →fclose(*(FILE**)(ptr0 - 2567));
        →fclose(*(FILE**)(ptr0 - 2568));
    }
    int result = *(ptr0 - 3) ^ *(int*)(__GS_BASE + (int)(int*)0x14);
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804F912(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22, int param23, int param24, int param25, int param26, int param27, int param28, int param29, int param30, int param31, int param32, int param33, int param34, int param35, int param36, int param37, int param38, int param39, int param40, int param41, int param42, int param43, int param44, int param45, int param46, int param47, int param48, int param49, int param50, int param51, int param52, int param53, int param54, int param55, int param56, int param57, int param58, int param59, int param60, int param61, int param62, int param63, int param64, int param65, int param66, int param67, int param68, int param69, int param70, int param71, int param72, int param73, int param74, int param75, int param76, int param77, int param78, int param79, int param80, int param81, int param82, int param83, int param84, int param85, int param86, int param87, int param88, int param89, int param90, int param91, int param92, int param93, int param94, int param95, int param96, int param97, int param98, int param99, int par194, int par198, int par19C, int par1A0, int par1A4, int par1A8, int par1AC, int par1B0, int par1B4, int par1B8, int par1BC, int par1C0, int par1C4, int par1C8, int par1CC, int par1D0, int par1D4, int par1D8, int par1DC, int par1E0, int par1E4, int par1E8, int par1EC, int par1F0, int par1F4, int par1F8, int par1FC, int par200, int par204, int par208, int par20C, int par210, int par214, int par218, int par21C, int par220, int par224, int par228, int par22C, int par230, int par234, int par238, int par23C, int par240, int par244, int par248, int par24C, int par250, int par254, int par258, int par25C, int par260, int par264, int par268, int par26C, int par270, int par274, int par278, int par27C, int par280, int par284, int par288, int par28C, int par290, int par294, int par298, int par29C, int par2A0, int par2A4, int par2A8, int par2AC, int par2B0, int par2B4, int par2B8, int par2BC, int par2C0, int par2C4, int par2C8, int par2CC, int par2D0, int par2D4, int par2D8, int par2DC, int par2E0, int par2E4, int par2E8, int par2EC, int par2F0, int par2F4, int par2F8, int par2FC, int par300, int par304, int par308, int par30C, int par310, int par314, int par318, int par31C, int par320, int par324, int par328, int par32C, int par330, int par334, int par338, int par33C, int par340, int par344, int par348, int par34C, int par350, int par354, int par358, int par35C, int par360, int par364, int par368, int par36C, int par370, int par374, int par378, int par37C, int par380, int par384, int par388, int par38C, int par390, int par394, int par398, int par39C, int par3A0, int par3A4, int par3A8, int par3AC, int par3B0, int par3B4, int par3B8, int par3BC, int par3C0, int par3C4, int par3C8, int par3CC, int par3D0, int par3D4, int par3D8, int par3DC, int par3E0, int par3E4, int par3E8, int par3EC, int par3F0, int par3F4, int par3F8, int par3FC, int par400, int par404, int par408, int par40C, int par410, int par414, int par418, int par41C, int par420, int par424, int par428, int par42C, int par430, int par434, int par438, int par43C, int par440, int par444, int par448, int par44C, int par450, int par454, int par458, int par45C, int par460, int par464, int par468, int par46C, int par470, int par474, int par478, int par47C, int par480, int par484, int par488, int par48C, int par490, int par494, int par498, int par49C, int par4A0, int par4A4, int par4A8, int par4AC, int par4B0, int par4B4, int par4B8, int par4BC, int par4C0, int par4C4, int par4C8, int par4CC, int par4D0, int par4D4, int par4D8, int par4DC, int par4E0, int par4E4, int par4E8, int par4EC, int par4F0, int par4F4, int par4F8, int par4FC, int par500, int par504, int par508, int par50C, int par510, int par514, int par518, int par51C, int par520, int par524, int par528, int par52C, int par530, int par534, int par538, int par53C, int par540, int par544, int par548, int par54C, int par550, int par554, int par558, int par55C, int par560, int par564, int par568, int par56C, int par570, int par574, int par578, int par57C, int par580, int par584, int par588, int par58C, int par590, int par594, int par598, int par59C, int par5A0, int par5A4, int par5A8, int par5AC, int par5B0, int par5B4, int par5B8, int par5BC, int par5C0, int par5C4, int par5C8, int par5CC, int par5D0, int par5D4, int par5D8, int par5DC, int par5E0, int par5E4, int par5E8, int par5EC, int par5F0, int par5F4, int par5F8, int par5FC, int par600, int par604, int par608, int par60C, int par610, int par614, int par618, int par61C, int par620, int par624, int par628, int par62C, int par630, int par634, int par638, int par63C, int par640, int par644, int par648, int par64C, int par650, int par654, int par658, int par65C, int par660, int par664, int par668, int par66C, int par670, int par674, int par678, int par67C, int par680, int par684, int par688, int par68C, int par690, int par694, int par698, int par69C, int par6A0, int par6A4, int par6A8, int par6AC, int par6B0, int par6B4, int par6B8, int par6BC, int par6C0, int par6C4, int par6C8, int par6CC, int par6D0, int par6D4, int par6D8, int par6DC, int par6E0, int par6E4, int par6E8, int par6EC, int par6F0, int par6F4, int par6F8, int par6FC, int par700, int par704, int par708, int par70C, int par710, int par714, int par718, int par71C, int par720, int par724, int par728, int par72C, int par730, int par734, int par738, int par73C, int par740, int par744, int par748, int par74C, int par750, int par754, int par758, int par75C, int par760, int par764, int par768, int par76C, int par770, int par774, int par778, int par77C, int par780, int par784, int par788, int par78C, int par790, int par794, int par798, int par79C, int par7A0, int par7A4, int par7A8, int par7AC, int par7B0, int par7B4, int par7B8, int par7BC, int par7C0, int par7C4, int par7C8, int par7CC, int par7D0, int par7D4, int par7D8, int par7DC, int par7E0, int par7E4, int par7E8, int par7EC, int par7F0, int par7F4, int par7F8, int par7FC, int par800, int par804, int par808, int par80C, int par810, int par814, int par818, int par81C, int par820, int par824, int par828, int par82C, int par830, int par834, int par838, int par83C, int par840, int par844, int par848, int par84C, int par850, int par854, int par858, int par85C) {
    int v0;
    →fclose(*(FILE**)(v0 - 2068));
    get_package_name(&gvar_8055EDB, *(char**)(v0 - 2080));
    FILE* ptr0 = →fopen("version", (char*)&gvar_8055E6B);
    *(FILE**)(v0 - 2068) = ptr0;
    if(!*(int*)(v0 - 2068)) {
        /*NO_RETURN*/ print_error(-6, "\'version\' file not readable.\n");
    }
    nc_fgets_nb(v0 - 2060, 0x800, *(int*)(v0 - 2068));
    **(unsigned int*)(v0 - 0x828) = 0;
    **(unsigned int*)(v0 - 2092) = 0;
    param3 = *(int*)(v0 - 2092);
    param2 = *(int*)(v0 - 0x828);
    param1 = *(int*)(v0 - 2084);
    param0 = "%i.%i.%i";
    int v1 = v0 - 2060;
    int v2 = →__isoc99_sscanf();
    *(int*)(v0 - 2064) = v2;
    if(((*(int*)(v0 - 2064) ? 0: 1) || *(int*)(v0 - 2064) < 0)) {
        →fclose(*(FILE**)(v0 - 2068));
        /*NO_RETURN*/ print_error(-6, "invalid or missing version information.\n");
    }
    print_done();
    →chdir((char*)&gvar_8055F35);
    →fclose(*(FILE**)(v0 - 2068));
    if((*(int*)(v0 - 12) ^ *(int*)(__GS_BASE + (int)(int*)0x14))) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    jump par85C;
}

int sub_804F9CE(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22, int param23, int param24, int param25, int param26, int param27, int param28, int param29, int param30, int param31, int param32, int param33, int param34, int param35, int param36, int param37, int param38, int param39, int param40, int param41, int param42, int param43, int param44, int param45, int param46, int param47, int param48, int param49, int param50, int param51, int param52, int param53, int param54, int param55, int param56, int param57, int param58, int param59, int param60, int param61, int param62, int param63, int param64, int param65, int param66, int param67, int param68, int param69, int param70, int param71, int param72, int param73, int param74, int param75, int param76, int param77, int param78, int param79, int param80, int param81, int param82, int param83, int param84, int param85, int param86, int param87, int param88, int param89, int param90, int param91, int param92, int param93, int param94, int param95, int param96, int param97, int param98, int param99, int par194, int par198, int par19C, int par1A0, int par1A4, int par1A8, int par1AC, int par1B0, int par1B4, int par1B8, int par1BC, int par1C0, int par1C4, int par1C8, int par1CC, int par1D0, int par1D4, int par1D8, int par1DC, int par1E0, int par1E4, int par1E8, int par1EC, int par1F0, int par1F4, int par1F8, int par1FC, int par200, int par204, int par208, int par20C, int par210, int par214, int par218, int par21C, int par220, int par224, int par228, int par22C, int par230, int par234, int par238, int par23C, int par240, int par244, int par248, int par24C, int par250, int par254, int par258, int par25C, int par260, int par264, int par268, int par26C, int par270, int par274, int par278, int par27C, int par280, int par284, int par288, int par28C, int par290, int par294, int par298, int par29C, int par2A0, int par2A4, int par2A8, int par2AC, int par2B0, int par2B4, int par2B8, int par2BC, int par2C0, int par2C4, int par2C8, int par2CC, int par2D0, int par2D4, int par2D8, int par2DC, int par2E0, int par2E4, int par2E8, int par2EC, int par2F0, int par2F4, int par2F8, int par2FC, int par300, int par304, int par308, int par30C, int par310, int par314, int par318, int par31C, int par320, int par324, int par328, int par32C, int par330, int par334, int par338, int par33C, int par340, int par344, int par348, int par34C, int par350, int par354, int par358, int par35C, int par360, int par364, int par368, int par36C, int par370, int par374, int par378, int par37C, int par380, int par384, int par388, int par38C, int par390, int par394, int par398, int par39C, int par3A0, int par3A4, int par3A8, int par3AC, int par3B0, int par3B4, int par3B8, int par3BC, int par3C0, int par3C4, int par3C8, int par3CC, int par3D0, int par3D4, int par3D8, int par3DC, int par3E0, int par3E4, int par3E8, int par3EC, int par3F0, int par3F4, int par3F8, int par3FC, int par400, int par404, int par408, int par40C, int par410, int par414, int par418, int par41C, int par420, int par424, int par428, int par42C, int par430, int par434, int par438, int par43C, int par440, int par444, int par448, int par44C, int par450, int par454, int par458, int par45C, int par460, int par464, int par468, int par46C, int par470, int par474, int par478, int par47C, int par480, int par484, int par488, int par48C, int par490, int par494, int par498, int par49C, int par4A0, int par4A4, int par4A8, int par4AC, int par4B0, int par4B4, int par4B8, int par4BC, int par4C0, int par4C4, int par4C8, int par4CC, int par4D0, int par4D4, int par4D8, int par4DC, int par4E0, int par4E4, int par4E8, int par4EC, int par4F0, int par4F4, int par4F8, int par4FC, int par500, int par504, int par508, int par50C, int par510, int par514, int par518, int par51C, int par520, int par524, int par528, int par52C, int par530, int par534, int par538, int par53C, int par540, int par544, int par548, int par54C, int par550, int par554, int par558, int par55C, int par560, int par564, int par568, int par56C, int par570, int par574, int par578, int par57C, int par580, int par584, int par588, int par58C, int par590, int par594, int par598, int par59C, int par5A0, int par5A4, int par5A8, int par5AC, int par5B0, int par5B4, int par5B8, int par5BC, int par5C0, int par5C4, int par5C8, int par5CC, int par5D0, int par5D4, int par5D8, int par5DC, int par5E0, int par5E4, int par5E8, int par5EC, int par5F0, int par5F4, int par5F8, int par5FC, int par600, int par604, int par608, int par60C, int par610, int par614, int par618, int par61C, int par620, int par624, int par628, int par62C, int par630, int par634, int par638, int par63C, int par640, int par644, int par648, int par64C, int par650, int par654, int par658, int par65C, int par660, int par664, int par668, int par66C, int par670, int par674, int par678, int par67C, int par680, int par684, int par688, int par68C, int par690, int par694, int par698, int par69C, int par6A0, int par6A4, int par6A8, int par6AC, int par6B0, int par6B4, int par6B8, int par6BC, int par6C0, int par6C4, int par6C8, int par6CC, int par6D0, int par6D4, int par6D8, int par6DC, int par6E0, int par6E4, int par6E8, int par6EC, int par6F0, int par6F4, int par6F8, int par6FC, int par700, int par704, int par708, int par70C, int par710, int par714, int par718, int par71C, int par720, int par724, int par728, int par72C, int par730, int par734, int par738, int par73C, int par740, int par744, int par748, int par74C, int par750, int par754, int par758, int par75C, int par760, int par764, int par768, int par76C, int par770, int par774, int par778, int par77C, int par780, int par784, int par788, int par78C, int par790, int par794, int par798, int par79C, int par7A0, int par7A4, int par7A8, int par7AC, int par7B0, int par7B4, int par7B8, int par7BC, int par7C0, int par7C4, int par7C8, int par7CC, int par7D0, int par7D4, int par7D8, int par7DC, int par7E0, int par7E4, int par7E8, int par7EC, int par7F0, int par7F4, int par7F8, int par7FC, int par800, int par804, int par808, int par80C, int par810, int par814, int par818, int par81C, int par820, int par824, int par828, int par82C, int par830, int par834, int par838, int par83C, int par840, int par844, int par848, int par84C, int par850, int par854, int par858, int par85C) {
    int v0;
    print_done();
    →chdir((char*)&gvar_8055F35);
    →fclose(*(FILE**)(v0 - 2068));
    if((*(int*)(v0 - 12) ^ *(int*)(__GS_BASE + (int)(int*)0x14))) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    jump par85C;
}

int sub_804FB6B() {
    /*NO_RETURN*/ →exit(-7);
}

int sub_804FC32() {
    /*NO_RETURN*/ →exit(-7);
}

int sub_8052309() {
    int* ptr0;
    →system("sh ../post");
    int result = 0;
    if((*(ptr0 - 3) ^ *(int*)(__GS_BASE + (int)(int*)0x14))) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int sub_80525E2() {
    int* ptr0;
    int result = *(ptr0 - 3) ^ *(int*)(__GS_BASE + (int)(int*)0x14);
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int sub_8053649() {
    /*NO_RETURN*/ →exit(0);
}

int sub_8053B20() {
    /*NO_RETURN*/ →exit(0);
}

int sub_8053B3B() {
    /*NO_RETURN*/ →exit(0);
}

int sub_8053BD1() {
    /*NO_RETURN*/ →exit(-30);
}

int sub_8054199() {
    /*NO_RETURN*/ →exit(0);
}

int sub_80541BE() {
    /*NO_RETURN*/ →exit(0);
}

int sub_80541E3() {
    /*NO_RETURN*/ →exit(0);
}

int sub_80542FA(int param0, char* param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22, int param23, int param24, int param25, int param26, int param27, int param28, int param29, int param30, int param31, int param32, int param33, int param34, int param35, int param36, int param37, int param38, int param39, int param40, int param41, int param42, int param43, int param44, int param45, int param46, int param47, int param48, int param49, int param50, int param51, int param52, int param53, int param54, int param55, int param56, int param57, int param58, int param59, int param60, int param61, int param62, int param63, int param64, long param65, long param66, long param67, int param68, int param69, int param70, int param71, int param72, char* param73, int param74, int param75, char* __s1, char* __nptr2, char* __nptr1, char* __nptr, char* __s, char* param81) {
    char v0;
    char v1;
    char v2;
    if(__s) {
        __s1 = →strdup(__s);
        __nptr = →strtok(__s1, (char*)&gvar_8057BBF);
        __nptr1 = →strtok(NULL, (char*)&gvar_8057BBF);
        __nptr2 = →strtok(NULL, (char*)&gvar_8057BBF);
        param67 = →strtol(__nptr, NULL, 10);
        param66 = →strtol(__nptr1, NULL, 10);
        param65 = →strtol(__nptr2, NULL, 10);
        __s = (char*)→malloc(0x800);
        →sprintf(__s, "%i.%i.%i", param67, param66, param65);
        if(VERBOSE) {
            →fprintf(stdout, "GRASS version is %s.\n", __s);
        }
        if(param67 <= 5) {
            /*NO_RETURN*/ print_error(-11, "extensions only work with GRASS version 6 and above.\n");
        }
    }
    →sprintf(&v1, "-L%s/lib -I/usr/local/grasslib/include/ ", param81);
    if(param63 == 3) {
        source_install(&v0, param81, &v2, param72, param71, param70, __s);
        /*NO_RETURN*/ →exit(0);
    }
    if(param63 == 10) {
        uninstall((int)&v0, &v2, param81, __s);
        /*NO_RETURN*/ →exit(0);
    }
    if(param63 == 8) {
        test_install(&v0, param81, &v2, param72, param71, param70, __s);
        /*NO_RETURN*/ →exit(0);
    }
    if(param63 == 4) {
        int v3 = binaries_exist(&v0, param73);
        if(v3) {
            bin_install(&v0, param81, (int)param73, &v2, param72, param71, param70, __s);
            /*NO_RETURN*/ →exit(0);
        }
        /*NO_RETURN*/ print_error(-12, "no binaries for system \'%s\'\n");
    }
    /*NO_RETURN*/ →exit(0);
}

int test_install(char* param0, char* param1, char* param2, int param3, int param4, int param5, char* param6) {
    char v0;
    char v1;
    char v2;
    char v3;
    char* __filename = param0;
    char* __file = param1;
    char* ptr0 = param2;
    char* __s = param6;
    int v4 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v5 = stat(__file, &v3);
    if(v5 < 0) {
        int* ptr1 = →__errno_location();
        →strerror(ptr1[0]);
        /*NO_RETURN*/ print_error(-5, "installation directory invalid: %s\n");
    }
    →sprintf((char*)&GINSTALL_DST, "GINSTALL_DST=%s", __file);
    →putenv((char*)&GINSTALL_DST);
    →sprintf(&v0, "%s/include", __file);
    →sprintf((char*)&GINSTALL_INC, "GINSTALL_INC=%s", &v0);
    →putenv((char*)&GINSTALL_INC);
    →sprintf(&v0, "%s/lib", __file);
    →sprintf((char*)&GINSTALL_LIB, "GINSTALL_LIB=%s", &v0);
    →putenv((char*)&GINSTALL_LIB);
    →sprintf((char*)&GEM_GRASS_DIR, "GEM_GRASS_DIR=%s", __file);
    →putenv((char*)&GEM_GRASS_DIR);
    char* __s1 = →strdup(__s);
    char* __nptr = →strtok(__s1, (char*)&gvar_8055EDB);
    char* __nptr1 = →strtok(NULL, (char*)&gvar_8055EDB);
    char* __nptr2 = →strtok(NULL, (char*)&gvar_8055EDB);
    long v6 = →strtol(__nptr, NULL, 10);
    long v7 = →strtol(__nptr1, NULL, 10);
    long v8 = →strtol(__nptr2, NULL, 10);
    →free(__s1);
    atexit((void __cdecl (*_)())&exit_tmp);
    char* ptr2 = basename(__filename);
    →sprintf(&v1, "%s/src", ptr2);
    v5 = →chdir(&v1);
    if(v5 < 0) {
        int* ptr3 = →__errno_location();
        →strerror(ptr3[0]);
        /*NO_RETURN*/ print_error(-2, "extension files in \'%s\' not accessible: %s\n");
    }
    if(!SKIP_CFG) {
        if(VERBOSE) {
            →fwrite("Running configure script:\n", 1, 26, stdout);
            →sprintf(&v2, "sh %s %s", &CONFIG_CMD, &CONFIG_OPTS);
        }
        else {
            →fwrite("Configuring...", 1, 14, stdout);
            →sprintf(&v2, "sh %s %s --quiet &> %s", &CONFIG_CMD, &CONFIG_OPTS, &TMP_NULL);
        }
        v5 = →system(&v2);
        if(v5 == -1) {
            /*NO_RETURN*/ print_error(-27, "could not run configure script.\n");
        }
        if(v5 > 0) {
            /*NO_RETURN*/ print_error(-3, "system configuration failed.\n");
        }
        print_done();
        print_cfg();
    }
    →sprintf((char*)&GEM_EXT_NAME, "GEM_EXT_NAME=%s", ptr0);
    →putenv((char*)&GEM_EXT_NAME);
    →sprintf(&v0, "%i.%i.%i", param3, param4, param5);
    →sprintf((char*)&GEM_EXT_VERSION, "GEM_EXT_VERSION=%s", &v0);
    →putenv((char*)&GEM_EXT_VERSION);
    dump_plain("../description", (void*)&TMP_DESCR);
    dump_plain("../info", (void*)&TMP_INFO);
    dump_plain("../depends", (void*)&TMP_DEPS);
    dump_plain("../bugs", (void*)&TMP_BUGS);
    dump_plain("../authors", (void*)&TMP_AUTHORS);
    →sprintf((char*)&GEM_EXT_DESCR, "GEM_EXT_DESCR=%s", &TMP_DESCR);
    →putenv((char*)&GEM_EXT_DESCR);
    →sprintf((char*)&GEM_EXT_INFO, "GEM_EXT_INFO=%s", &TMP_INFO);
    →putenv((char*)&GEM_EXT_INFO);
    →sprintf((char*)&GEM_EXT_DEPS, "GEM_EXT_DEPS=%s", &TMP_DEPS);
    →putenv((char*)&GEM_EXT_DEPS);
    →sprintf((char*)&GEM_EXT_BUGS, "GEM_EXT_BUGS=%s", &TMP_BUGS);
    →putenv((char*)&GEM_EXT_BUGS);
    →sprintf((char*)&GEM_EXT_AUTHORS, "GEM_EXT_AUTHORS=%s", &TMP_AUTHORS);
    →putenv((char*)&GEM_EXT_AUTHORS);
    atexit((void __cdecl (*_)())&exit_tmp);
    check_dependencies((int)__filename, __file, __s);
    if(VERBOSE) {
        →fprintf(stdout, "Running \'%s\':\n", &MAKE_CMD);
        →sprintf(&v2, "%s -f Makefile", &MAKE_CMD);
    }
    else {
        →fwrite("Compiling...", 1, 12, stdout);
        →sprintf(&v2, "%s -f Makefile &> %s", &MAKE_CMD, &TMP_NULL);
    }
    v5 = →system(&v2);
    if(v5 == -1 && !VERBOSE) {
        char* ptr4 = (char*)&MAKE_CMD;
        /*NO_RETURN*/ print_error(-9, "could not run \'%s\' do you have make tools installed?\n");
    }
    if(v5 > 0) {
        /*NO_RETURN*/ print_error(-4, "source code could not be compiled.\n \t\t\tRun again with option -v to see what is causing trouble.\n");
    }
    print_done();
    →fwrite("Installing...", 1, 13, stdout);
    FILE* __stream = →fopen("../uninstall", (char*)&gvar_8055E6B);
    if(!__stream) {
        int* ptr5 = →__errno_location();
        →strerror(ptr5[0]);
        print_warning("error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system");
    }
    else {
        →fclose(__stream);
    }
    register_extension((int)__file, &gvar_80566DF, ptr0, param3, param4, param5);
    check_dependencies((int)__filename, __file, __s);
    if(v6 == 6 && v7 <= 0) {
        register_entries_gisman((int)ptr0, (int)__file);
    }
    register_entries_gisman2((int)ptr0, (int)__file);
    register_html(ptr0, (int)__file, param3, param4, param5);
    →fprintf(stdout, "(skipping \'%s install\')...", &MAKE_CMD);
    print_done();
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v4;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int uninstall(int param0, char* param1, char* param2, char* param3) {
    int v0;
    char v1;
    char v2;
    char v3;
    int v4 = param0;
    char* ptr0 = param1;
    char* ptr1 = param2;
    char* __s = param3;
    int v5 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →fwrite("Un-installing...", 1, 16, stdout);
    →sprintf((char*)&UNINSTALL_BASE, "UNINSTALL_BASE=%s", ptr1);
    →putenv((char*)&UNINSTALL_BASE);
    char* __s1 = →strdup(__s);
    char* __nptr = →strtok(__s1, (char*)&gvar_8055EDB);
    char* __nptr1 = →strtok(NULL, (char*)&gvar_8055EDB);
    char* __nptr2 = →strtok(NULL, (char*)&gvar_8055EDB);
    long v6 = →strtol(__nptr, NULL, 10);
    long v7 = →strtol(__nptr1, NULL, 10);
    long v8 = →strtol(__nptr2, NULL, 10);
    →free(__s1);
    atexit((void __cdecl (*_)())&exit_tmp);
    deregister_extension(v4, ptr0, ptr1);
    if(v6 == 6 && v7 <= 0) {
        v0 = deregister_entries_gisman((int)ptr0, (int)ptr1);
        if(v0 == -1) {
            print_warning("GIS Manager menu entries could not be removed.\n");
            →memcpy((void*)&GISMAN_CMD, (void*)0x805698C, 1);
        }
        if(!v0) {
            print_warning("no entries found to remove from GIS Manager.\n");
            →memcpy((void*)&GISMAN_CMD, (void*)0x805698C, 1);
        }
    }
    deregister_entries_gisman2((int)ptr0, (int)ptr1);
    deregister_html((int)ptr0, (int)ptr1);
    →sprintf(&v1, "%s/etc/uninstall.%s", ptr1, ptr0);
    int v9 = 0;
    v0 = stat(&v1, &v3);
    if(v0 < 0) {
        print_warning("no uninstall script available for this extension.\n \t\t\tUnneeded files may have been left on your system.\n");
        v9 = 1;
    }
    if(v9) {
        int* ptr2 = →__errno_location();
        →strerror(ptr2[0]);
        print_warning("error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system");
    }
    else {
        if(VERBOSE) {
            →sprintf(&v2, "sh %s ; rm -vf %s ; \t\t\t\t\t \t\trm -vrf %s/docs/extensions/%s ; rm -vf %s/etc/dm/gem-entries/%s ; \t\t\t\t\t\t\tcp -vf %s %s/etc/extensions.db ; chmod -v a+r %s/etc/extensions.db ;", &v1, &v1, ptr1, ptr0, ptr1, ptr0, &TMPDB, ptr1, ptr1);
        }
        else {
            →sprintf(&v2, "sh %s &> %s ; rm -vf %s &> %s ; \t\t\t\t\t \t\trm -vrf %s/docs/extensions/%s &> %s ; rm -vf %s/etc/dm/gem-entries/%s &> %s ; \t\t\t\t\t\t\tcp -vf %s %s/etc/extensions.db &> %s ; chmod -v a+r %s/etc/extensions.db &> %s ;", &v1, &TMP_NULL, &v1, &TMP_NULL, ptr1, ptr0, &TMP_NULL, ptr1, ptr0, &TMP_NULL, &TMPDB, ptr1, &TMP_NULL, ptr1, &TMP_NULL);
        }
        →strcpy((char*)&UNINSTALL_CMD, &v2);
    }
    →sprintf(&v2, "%s %s %s", &UNINSTALL_CMD, &GISMAN_CMD, &HTML_CMD);
    su((int)ptr1, &v2);
    print_done();
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v5;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int unpack_extension(char* param0) {
    char v0;
    char* __haystack = param0;
    int v1 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →fwrite("Uncompressing files...", 1, 22, stdout);
    →memcpy((void*)&TMPDIR, "/tmp/grass.extension.XXXXXX", 28);
    →mkstemp((char*)&TMPDIR);
    int __fd = →open((char*)&TMPDIR, 64, 0x1ff);
    if(__fd == -1) {
        int* ptr0 = →__errno_location();
        →strerror(ptr0[0]);
        /*NO_RETURN*/ print_error(-7, "could not create temp directory name: %s");
    }
    if(VERBOSE) {
        →fprintf(stdout, "\nUncompressing to: %s.\n", &TMPDIR);
    }
    →close(__fd);
    →remove((char*)&TMPDIR);
    mkdir_s(&TMPDIR, "0700");
    atexit((void __cdecl (*_)())&exit_tmp);
    →sprintf(&v0, "cp %s %s", __haystack, &TMPDIR);
    int v2 = →system(&v0);
    if(v2 < 0) {
        /*NO_RETURN*/ print_error(-7, "could not copy extension files to temp dir.\n");
    }
    int v3 = check_filetype(__haystack);
    if(!v3) {
        print_warning("file name not \'.tar.gz\', \'.tgz\', \'.tar.bz2\', \'.tbz\' or \'.zip\'. Assuming \'.tgz\'.\n");
        v3 = 1;
    }
    if(v3 == 1) {
        if(VERBOSE) {
            char* ptr1 = basename(__haystack);
            →sprintf(&v0, "tar -xzvf %s/%s -C %s", &TMPDIR, ptr1, &TMPDIR);
        }
        else {
            char* ptr2 = basename(__haystack);
            →sprintf(&v0, "tar -xzf %s/%s -C %s", &TMPDIR, ptr2, &TMPDIR);
        }
    }
    if(v3 == 2) {
        if(VERBOSE) {
            char* ptr3 = basename(__haystack);
            →sprintf(&v0, "tar -xjvf %s/%s -C %s", &TMPDIR, ptr3, &TMPDIR);
        }
        else {
            char* ptr4 = basename(__haystack);
            →sprintf(&v0, "tar -xjvf %s/%s -C %s", &TMPDIR, ptr4, &TMPDIR);
        }
    }
    if(v3 == 3) {
        if(VERBOSE) {
            char* ptr5 = basename(__haystack);
            →sprintf(&v0, "unzip %s/%s -d %s", &TMPDIR, ptr5, &TMPDIR);
        }
        else {
            char* ptr6 = basename(__haystack);
            →sprintf(&v0, "unzip -qq %s/%s -d %s", &TMPDIR, ptr6, &TMPDIR);
        }
    }
    if(v3 == 4) {
        if(VERBOSE) {
            char* ptr7 = basename(__haystack);
            →sprintf(&v0, "tar -xvf %s/%s -C %s", &TMPDIR, ptr7, &TMPDIR);
        }
        else {
            char* ptr8 = basename(__haystack);
            →sprintf(&v0, "tar -xf %s/%s -C %s", &TMPDIR, ptr8, &TMPDIR);
        }
    }
    v2 = →system(&v0);
    if(v2 < 0) {
        if(v3 == 1) {
            /*NO_RETURN*/ print_error(-7, "could not extract files using \'tar\' and \'gzip\'. \n \t\t\t\t\tExtract manually using \'tar -xzvf %s\'.\n");
        }
        if(v3 == 2) {
            /*NO_RETURN*/ print_error(-7, "could not extract files using \'tar\' and \'bunzip2\'.\n \t\t\t\tExtract manually using \'tar -xjvf %s\'.\n");
        }
        if(v3 == 3) {
            /*NO_RETURN*/ print_error(-7, "could not extract files using \'unzip\'.\n \t\t\t\tExtract manually using \'unzip %s\'.\n");
        }
        /*NO_RETURN*/ →exit(-7);
    }
    print_done();
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v1;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int vercmp(int param0, int param1, int param2, int param3, int param4, int param5) {
    return param0 == param3 && param1 == param4 && param2 == param5 ? 0: param0 < param3 ? -1: param0 > param3 ? 1: param1 < param4 ? -1: param1 > param4 ? 1: param2 < param5 ? -1: param2 > param5 ? 1: 0;
}

int wget_extension(int param0) {
    char v0;
    int v1 = param0;
    int v2 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →fwrite("Downloading...", 1, 14, stdout);
    if(VERBOSE) {
        →sprintf(&v0, "wget -N %s", v1);
    }
    else {
        →sprintf(&v0, "wget -N -q %s", v1);
    }
    int v3 = →system(&v0);
    if(v3 == -1) {
        /*NO_RETURN*/ print_error(-20, "could not run \'wget\' to download extension. Is it installed?\n");
    }
    if(v3 > 0) {
        /*NO_RETURN*/ print_error(-20, "running command \'%s\'.\n");
    }
    print_done();
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v2;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}
