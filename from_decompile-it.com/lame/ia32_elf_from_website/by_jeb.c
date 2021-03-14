
int CloseSndFile(int param0, FILE* __stream) {
    int result;
    int v0 = →fclose(__stream);
    if(v0) {
        if(silent <= 9) {
            error_printf("Could not close audio input file\n");
        }
        /*NO_RETURN*/ →exit(2);
    }
    return result;
}

char ConvertFromIeeeExtended(char* param0) {
    char v0;
    double v1;
    __SyntheticTypeUnknown v2;
    __SyntheticTypeUnknownF v3;
    __SyntheticTypeUnknownF v4;
    char v5;
    __SyntheticTypeUnknownF v6;
    int __exponent = (((int)*param0 & 0x7f) * 0x100) | (unsigned int)*(param0 + 1);
    int v7 = ((unsigned int)*(param0 + 3) * 0x10000) | ((int)*(param0 + 2) * 0x1000000) | (unsigned int)(((unsigned int)0 | ((unsigned int)((int)*(param0 + 4) & 0xffffff) << 8)) & 0xFFFF) | (unsigned int)*(param0 + 5);
    int v8 = ((unsigned int)*(param0 + 7) * 0x10000) | ((int)*(param0 + 6) * 0x1000000) | (unsigned int)(((unsigned int)0 | ((unsigned int)((int)*(param0 + 8) & 0xffffff) << 8)) & 0xFFFF) | (unsigned int)*(param0 + 9);
    if(!__exponent && !v7 && !v8) {
        fldz();
        v1 = v6;
        v0 = 1;
    }
    else {
        if(__exponent == 0x7fff) {
            v1 = (double)Infinity;
        }
        else {
            __exponent -= 16414;
            v2[v5] = →ldexp((double)(v7 - 0x80000000) + 2.147483648E9, __exponent);
            v1 = v3;
            __exponent -= 32;
            int v9 = v8 - 0x80000000;
            v2[v5] = →ldexp((double)v9 + 2.147483648E9, __exponent);
            v1 += v4;
        }
        v0 = 0;
    }
    char result = *param0;
    v2[v0 - 1] = v1;
    if(result < 0) {
        fchs();
    }
    return result;
}

clock_t GetCPUTime() {
    return →clock();
}

int GetRealTime() {
    int v0;
    int result;
    →gettimeofday(&v0, NULL);
    return result;
}

FILE* OpenSndFile(int param0, char* __s1, int param2, int param3) {
    char* ptr0;
    FILE* result;
    short v0;
    __int128 v1;
    int v2;
    →lame_set_num_samples();
    int v3 = →strcmp(__s1, (char*)&gvar_8055007);
    if(!v3) {
        result = stdin;
        lame_set_stream_binary_mode();
    }
    else {
        result = →fopen64(__s1, (char*)&gvar_8055332);
        if(!result) {
            if(silent <= 9) {
                ptr0 = __s1;
                error_printf("Could not find \"%s\".\n");
            }
            /*NO_RETURN*/ →exit(1);
        }
    }
    int v4 = is_mpeg_file_format(input_format);
    if(v4) {
        int v5 = lame_decode_initfile(result, (void*)&mp3input_data, param2, param3);
        if(v5 == -1) {
            if(silent <= 9) {
                error_printf("Error reading headers in mp3 input file %s.\n");
            }
            /*NO_RETURN*/ →exit(1);
        }
        int v6 = →lame_set_num_channels();
        if(v6 == -1) {
            if(silent <= 9) {
                error_printf("Unsupported number of channels: %ud\n");
            }
            /*NO_RETURN*/ →exit(1);
        }
        →lame_set_in_samplerate();
        ptr0 = gvar_805C57C;
        →lame_set_num_samples();
    }
    else {
        if(input_format == 8) {
            if(silent <= 9) {
                error_printf("sorry, vorbis support in LAME is deprecated.\n");
            }
            /*NO_RETURN*/ →exit(1);
        }
        if(input_format == 1) {
            if(silent <= 9) {
                console_printf("Assuming raw pcm input file");
                if(swapbytes) {
                    console_printf(" : Forcing byte-swapping\n");
                }
                else {
                    console_printf((char*)&gvar_8055408);
                }
            }
            gvar_805B3D4 = swapbytes;
        }
        else {
            int v7 = parse_file_header(param0, (_IO_FILE*)result);
            input_format = v7;
        }
    }
    if(!input_format) {
        /*NO_RETURN*/ →exit(1);
    }
    int v8 = →lame_get_num_samples();
    if(v8 == -1) {
        unsigned int v9 = stdin;
        char v10 = v9 > (unsigned int)result;
        if(v9 != result) {
            int v11 = lame_get_file_size(__s1);
            int v12 = v2;
            double v13 = (double)*(long long*)&v11;
            fldz();
            v16[v17] = fucomip(v13, v1);
            if(!v10) {
                int v14 = is_mpeg_file_format(input_format);
                if(!v14) {
                    int v15 = →lame_get_num_channels();
                    v16[v17 + 1] = fdivrp((double)(v15 * 2), v13);
                    v0 = fnstcw(v0);
                    v18 = fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
                    fistp();
                    v0 = fldcw(v0);
                    →lame_set_num_samples();
                }
                else if(gvar_805C56C > 0) {
                    →lame_get_in_samplerate();
                    v0 = fnstcw(v0);
                    short v18 = fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
                    fistp();
                    v0 = fldcw(v0);
                    →lame_set_num_samples();
                    gvar_805C57C = v11;
                }
            }
        }
    }
    return result;
}

int Read16BitsHighLow(_IO_FILE* __fp) {
    int v0 = →_IO_getc(__fp);
    int v1 = (unsigned int)(unsigned char)v0;
    int v2 = →_IO_getc(__fp);
    int result = v1 * 0x100 + (unsigned int)(unsigned char)v2;
    if((result & 0x8000)) {
        result -= 0x10000;
    }
    return result;
}

int Read16BitsLowHigh(_IO_FILE* __fp) {
    int v0 = →_IO_getc(__fp);
    int v1 = (unsigned int)(unsigned char)v0;
    int v2 = →_IO_getc(__fp);
    int result = (unsigned int)(unsigned char)v2 * 0x100 + v1;
    if((result & 0x8000)) {
        result -= 0x10000;
    }
    return result;
}

int Read24BitsHighLow(_IO_FILE* __fp) {
    int v0 = →_IO_getc(__fp);
    int v1 = (unsigned int)(unsigned char)v0;
    int v2 = →_IO_getc(__fp);
    int v3 = (unsigned int)(unsigned char)v2;
    int v4 = →_IO_getc(__fp);
    int result = v3 * 0x100 + v1 * 0x10000 + (unsigned int)(unsigned char)v4;
    if((result & 0x800000)) {
        result -= 0x1000000;
    }
    return result;
}

int Read32Bits(_IO_FILE* __fp) {
    int v0 = Read16BitsLowHigh(__fp);
    int v1 = (unsigned int)(unsigned short)v0;
    int v2 = Read16BitsLowHigh(__fp);
    return (unsigned int)(unsigned short)v2 * 0x10000 + v1;
}

int Read32BitsHighLow(_IO_FILE* __fp) {
    int v0 = Read16BitsHighLow(__fp);
    int v1 = (unsigned int)(unsigned short)v0;
    int v2 = Read16BitsHighLow(__fp);
    return v1 * 0x10000 + (unsigned int)(unsigned short)v2;
}

int ReadByte(_IO_FILE* __fp) {
    int v0 = →_IO_getc(__fp);
    int result = (unsigned int)(unsigned char)v0;
    if((result & 0x80)) {
        result -= 0x100;
    }
    return result;
}

int ReadBytes(_IO_FILE* __fp, char* param1, int param2) {
    int result;
    while(1) {
        int v0 = →feof((FILE*)__fp);
        int v1 = (unsigned int)(v0 ? 0: 1) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
        result = ((unsigned int)(param2 <= 0 ? 0: 1) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8)) & v1;
        --param2;
        if(!(unsigned char)result) {
            return result;
        }
        int v2 = →_IO_getc(__fp);
        *param1 = (unsigned char)v2;
        ++param1;
    }
    return result;
}

int ReadBytesSwapped(_IO_FILE* __fp, char* param1, int param2) {
    int result;
    char* ptr0 = param1;
    while(1) {
        int v0 = →feof((FILE*)__fp);
        int v1 = (unsigned int)(v0 ? 0: 1) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
        result = ((unsigned int)(param2 <= 0 ? 0: 1) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8)) & v1;
        --param2;
        if(!(unsigned char)result) {
            break;
        }
        else {
            int v2 = →_IO_getc(__fp);
            *ptr0 = (unsigned char)v2;
            ++ptr0;
        }
    }
    for(char* i = ptr0 - 1; i > param1; --i) {
        param2 = (int)*param1;
        *param1 = *i;
        result = param2;
        *i = (unsigned char)result;
        ++param1;
    }
    return result;
}

int ReadIeeeExtendedHighLow(_IO_FILE* param0) {
    char v0;
    _IO_FILE* __fp = param0;
    int v1 = *(int*)(__GS_BASE + (int)(int*)0x14);
    ReadBytes(__fp, &v0, 10);
    ConvertFromIeeeExtended(&v0);
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v1;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int* SwapBytesInWords(int* j, int param1) {
    int v0;
    int* i;
    for(i = j; param1 > 1; ++i) {
        v0 = *i;
        *i = ((v0 * 0x100) & 0xff00ff00) | ((v0 >>> 8) & 0xff00ff);
        param1 -= 2;
    }
    int* result = i;
    for(j = i; param1 > 0; j = (int*)((char*)j + 2)) {
        v0 = (int)*(short*)j;
        result = j;
        *(short*)result = (unsigned short)((v0 * 0x100) | ((v0 >>> 8) & 0xffff00ff));
        --param1;
    }
    return result;
}

int Write16BitsHighLow(_IO_FILE* __fp, int param1) {
    →_IO_putc((int)(unsigned char)(param1 >>> 8), __fp);
    return →_IO_putc((int)(param1 & 0xFF), __fp);
}

int Write16BitsLowHigh(_IO_FILE* __fp, int param1) {
    →_IO_putc((int)(param1 & 0xFF), __fp);
    return →_IO_putc((int)(unsigned char)(param1 >>> 8), __fp);
}

int Write32Bits(_IO_FILE* __fp, int param1) {
    Write16BitsLowHigh(__fp, (int)(param1 & 0xFFFF));
    return Write16BitsLowHigh(__fp, param1 >>> 16);
}

int Write32BitsHighLow(_IO_FILE* __fp, int param1) {
    Write16BitsHighLow(__fp, param1 >>> 16);
    return Write16BitsHighLow(__fp, (int)(param1 & 0xFFFF));
}

int Write32BitsLowHigh(_IO_FILE* __fp, int param1) {
    Write16BitsLowHigh(__fp, (int)(param1 & 0xFFFF));
    return Write16BitsLowHigh(__fp, param1 >>> 16);
}

int Write8Bits(_IO_FILE* __fp, int param1) {
    return →_IO_putc((int)(param1 & 0xFF), __fp);
}

char WriteBytes(_IO_FILE* __fp, char* param1, int param2) {
    while(1) {
        char v0 = param2 <= 0 ? 0: 1;
        --param2;
        if(!v0) {
            return 0;
        }
        int __c = (int)*param1;
        ++param1;
        →_IO_putc(__c, __fp);
    }
    return 0;
}

int WriteBytesSwapped(_IO_FILE* __fp, char* param1, int param2) {
    int result = param2 - 1;
    param1 = (char*)(result + (int)param1);
    while(1) {
        result = (unsigned int)(param2 <= 0 ? 0: 1) | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
        --param2;
        if(!(unsigned char)result) {
            return result;
        }
        int __c = (int)*param1;
        --param1;
        result = →_IO_putc(__c, __fp);
    }
    return result;
}

int WriteWaveHeader(FILE* __s, int param1, int param2, int param3, int param4) {
    int v0 = (param4 + 7 < 0 ? param4 + 14: param4 + 7) >> 3;
    →fwrite("RIFF", 1, 4, __s);
    Write32BitsLowHigh((_IO_FILE*)__s, param1 + 36);
    →fwrite("WAVEfmt ", 2, 4, __s);
    Write32BitsLowHigh((_IO_FILE*)__s, 16);
    Write16BitsLowHigh((_IO_FILE*)__s, 1);
    Write16BitsLowHigh((_IO_FILE*)__s, param3);
    Write32BitsLowHigh((_IO_FILE*)__s, param2);
    Write32BitsLowHigh((_IO_FILE*)__s, v0 * param2 * param3);
    Write16BitsLowHigh((_IO_FILE*)__s, v0 * param3);
    Write16BitsLowHigh((_IO_FILE*)__s, param4);
    →fwrite("data", 1, 4, __s);
    Write32BitsLowHigh((_IO_FILE*)__s, param1);
    int v1 = →ferror(__s);
    return v1 != 0 ? -1: 0;
}

void __i686.get_pc_thunk.bx() {
}

int aiff_check2(short* param0) {
    int result;
    if(*(int*)(param0 + 10) != 0x53534e44) {
        if(silent <= 9) {
            error_printf("ERROR: input sound data is not PCM\n");
        }
        result = 1;
    }
    else {
        unsigned int v0 = (unsigned int)((int)*(param0 + 4) - 8);
        if((v0 > 24 || !((1 << (v0 & 0x1f)) & 0x1010101))) {
            if(silent <= 9) {
                error_printf("ERROR: input sound data is not 8, 16, 24 or 32 bits\n");
            }
            result = 1;
        }
        else if(*param0 == 1) {
            goto loc_804DE88;
        }
        else if(*param0 != 2) {
            if(silent <= 9) {
                error_printf("ERROR: input sound data is not mono or stereo\n");
            }
            result = 1;
        }
        else {
        loc_804DE88:
            if(*(int*)(param0 + 14)) {
                if(silent <= 9) {
                    error_printf("ERROR: block size of input sound data is not 0 bytes\n");
                }
                result = 1;
            }
            else {
                result = 0;
            }
        }
    }
    return result;
}

int apply_termcap_settings(int param0) {
    char v0;
    int v1 = param0;
    int v2 = *(int*)(__GS_BASE + (int)(int*)0x14);
    char* ptr0 = →getenv("TERM");
    if(ptr0) {
        int v3 = →tgetent();
        if(v3 == 1) {
            int v4 = →tgetnum();
            if(v4 > 39 && v4 <= 0x200) {
                *(int*)(v1 + 20) = v4;
            }
            v4 = →tgetnum();
            if(v4 > 15 && v4 <= 0x100) {
                *(int*)(v1 + 24) = v4;
            }
            *&v0 = 0;
            char* __src = (char*)→tgetstr();
            if(__src) {
                →strcpy((char*)(v1 + 28), __src);
            }
            *&v0 = 0;
            __src = (char*)→tgetstr();
            if(__src) {
                →strcpy((char*)(v1 + 38), __src);
            }
            *&v0 = 0;
            __src = (char*)→tgetstr();
            if(__src) {
                →strcpy((char*)(v1 + 48), __src);
            }
            *&v0 = 0;
            __src = (char*)→tgetstr();
            if(__src) {
                →strcpy((char*)(v1 + 58), __src);
            }
        }
    }
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v2;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

unsigned int brhist_disp(int param0) {
    int v0;
    int v1;
    __SyntheticTypeUnknown v2;
    int v3;
    int v4;
    __SyntheticTypeUnknownF v5;
    int v6;
    long long v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    __SyntheticTypeUnknownF v14;
    int v15 = 0;
    fldz();
    double v16 = v14;
    char v17 = 1;
    double* ptr0 = &v7;
    for(int i = 18; i != 0; --i) {
        *(int*)&ptr0[0] = 0;
        ptr0 = (double*)((char*)ptr0 + 4);
    }
    int v18 = 0;
    gvar_805B4C0 = 0;
    →lame_bitrate_stereo_mode_hist();
    →lame_bitrate_hist();
    →lame_stereo_mode_hist();
    int* ptr1 = &v6;
    int v19 = param0;
    →lame_block_type_hist();
    int v20 = 0;
    unsigned int v21 = (unsigned int)0;
    int j;
    for(j = 0; j <= 13; ++j) {
        v21 = (unsigned int)(*(int*)(j * 4 + (int)&v12) + v21);
        v0 = *(int*)(j * 4 + (int)&v12) * *(unsigned int*)(j * 4 + (int)&gvar_805B488);
        v16 += (double)v0;
        v17 = 7;
        if(*(int*)(j * 4 + (int)&v12) > v20) {
            v20 = *(int*)(j * 4 + (int)&v12);
        }
        if(*(int*)(j * 4 + (int)&v12)) {
            ++v15;
        }
    }
    for(j = 0; j <= 13; ++j) {
        int v22 = *(int*)(j * 4 + (int)&v12) && v15 > 1 ? 1: 0;
        if(v22 || (*(int*)&brhist <= j && gvar_805B484 >= j)) {
            brhist_disp_line(j, *(int*)(j * 4 + (int)&v12), *(int*)(j * 16 + (int)&v13), v20, v21);
        }
    }
    for(j = 0; j <= 3; ++j) {
        v18 += *(int*)(j * 4 + (int)&v8);
    }
    if((int)v21 > 0) {
        v2[v32 + 1] = fdivrp((double)v21, v16);
        v7 = v5;
        v0 = (int)(v21 - v18);
        long long v23 = (double)v0 * 100.0 / (double)v21;
        v17 = 6;
    }
    if(v18 > 0) {
        fldz();
        long long v24 = v2[v17];
        v2[v17] = (double)v8;
        v2[v17 - 1] = 100.0;
        v2[v17] *= v2[v17 - 1];
        v2[v17 - 1] = (double)v18;
        v2[v17] /= v2[v17 - 1];
        long long v25 = v2[v17];
        v0 = v11;
        v2[v17] = (double)v0;
        v2[v17 - 1] = 100.0;
        v2[v17] *= v2[v17 - 1];
        v2[v17 - 1] = (double)v18;
        v2[v17] /= v2[v17 - 1];
        long long v26 = v2[v17];
        ++v17;
    }
    if(v3 > 0) {
        v2[v17 - 1] = (double)v6;
        v2[v17 - 2] = 100.0;
        v2[v17 - 1] *= v2[v17 - 2];
        v2[v17 - 2] = (double)v3;
        v2[v17 - 1] /= v2[v17 - 2];
        long long v27 = v2[v17 - 1];
        v2[v17 - 1] = (double)(v1 + v4);
        v2[v17 - 2] = 100.0;
        v2[v17 - 1] *= v2[v17 - 2];
        v2[v17 - 2] = (double)v3;
        v2[v17 - 1] /= v2[v17 - 2];
        long long v28 = v2[v17 - 1];
        v2[v17 - 1] = (double)v9;
        v2[v17 - 2] = 100.0;
        v2[v17 - 1] *= v2[v17 - 2];
        v2[v17 - 2] = (double)v3;
        v2[v17 - 1] /= v2[v17 - 2];
        long long v29 = v2[v17 - 1];
        v2[v17 - 1] = (double)v10;
        v2[v17 - 2] = 100.0;
        v2[v17 - 1] *= v2[v17 - 2];
        v0 = v3;
        v2[v17 - 2] = (double)v0;
        v2[v17 - 1] /= v2[v17 - 2];
        long long v30 = v2[v17 - 1];
    }
    int v31 = →lame_get_totalframes();
    progress_line(param0, v31, (int)v21);
    return stats_line(&v7);
}

int brhist_disp_line(int param0, int param1, int param2, int param3, unsigned int param4) {
    int v0;
    int v1;
    char v2;
    int v3 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v4 = 0;
    int v5 = digits(param4);
    int v6 = v5 + 8;
    if(param3) {
        int v7 = (gvar_805BCF4 - v6) * param1 + param3 - 1;
        v1 = (unsigned int)((unsigned long long)v7 | ((unsigned long long)(v7 >> 31) << 32)) / param3;
        int v8 = (gvar_805BCF4 - v6) * param2 + param3 - 1;
        v0 = (unsigned int)((unsigned long long)v8 | ((unsigned long long)(v8 >> 31) << 32)) / param3;
    }
    else {
        v0 = 0;
        v1 = 0;
    }
    if((int)param4 > 0) {
        int v9 = param1 * 1000 + (int)param4 / 2;
        v4 = (unsigned int)((unsigned long long)v9 | ((unsigned long long)(v9 >> 31) << 32)) / (int)param4;
    }
    int v10 = digits(param4);
    int v11 = param1;
    →sprintf(&v2, " [%*i]", v10);
    if(gvar_805BD06) {
        console_printf("\n%3d%s %.*s%.*s%s");
    }
    else {
        console_printf("\n%3d%s %.*s%.*s%*s");
    }
    ++gvar_805B4C0;
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v3;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int brhist_init(int param0, int param1, int param2) {
    int result;
    gvar_805B4C0 = 0;
    →lame_bitrate_kbps();
    int v0 = calculate_index(&gvar_805B488, 14, param1);
    *(int*)&brhist = v0;
    int v1 = calculate_index(&gvar_805B488, 14, param2);
    gvar_805B484 = v1;
    if(*(int*)&brhist > 13 || gvar_805B484 > 13) {
        error_printf("lame internal error: VBR min %d kbps or VBR max %d kbps not allowed.\n");
        result = -1;
    }
    else {
        →memset((void*)0x805B4C4, 42, 0x200);
        →memset((void*)0x805B6C5, 37, 0x200);
        →memset((void*)0x805BAC7, 45, 0x200);
        →memset((void*)0x805B8C6, 45, 0x200);
        result = 0;
    }
    return result;
}

int brhist_init_package(int param0) {
    int result;
    if(brhist2) {
        int v0 = →lame_get_VBR_max_bitrate_kbps();
        int v1 = →lame_get_VBR_min_bitrate_kbps();
        result = brhist_init(param0, v1, v0);
        if(result) {
            brhist2 = 0;
        }
    }
    else {
        result = brhist_init(param0, 128, 128);
    }
    return result;
}

int brhist_jump_back() {
    int result = console_up(gvar_805B4C0);
    gvar_805B4C0 = 0;
    return result;
}

int calculate_index(int param0, int param1, int param2) {
    int result = 0;
    while(result < param1) {
        if(*(int*)(result * 4 + param0) == param2) {
            return result;
        }
        ++result;
    }
    return -1;
}

int check_aid(void* __s1) {
    int v0 = →memcmp(__s1, (void*)&gvar_805540A, 4);
    return v0 ? 0: 1;
}

int close_infile() {
    return CloseSndFile(input_format, gvar_805B3E0);
}

int console_flush() {
    return →fflush(gvar_805BCE8);
}

int console_printf(char* __format) {
    char v0;
    return my_console_printing(gvar_805BCE8, __format, &v0);
}

int console_up(int param0) {
    while(1) {
        char v0 = param0 <= 0 ? 0: 1;
        --param0;
        if(!v0) {
            break;
        }
        else {
            →fputs((char*)0x805BCFC, gvar_805BCE8);
        }
    }
    return console_flush();
}

int decoder_progress(int param0) {
    int v0 = *(int*)(param0 + 32);
    int v1 = *(int*)(param0 + 36);
    int v2 = *(int*)(param0 + 12);
    int v3 = v0;
    int v4 = v1;
    console_printf("\rFrame#%6i/%-6i %3i kbps");
    if(*(int*)(param0 + 16) == 1) {
        unsigned int v5 = *(unsigned int*)(param0 + 20);
        console_printf("  %s  %c");
        last.3337 = v5;
    }
    else {
        console_printf("         ");
        last.3337 = 0;
    }
    return console_printf((char*)&gvar_8059AA6);
}

int decoder_progress_finish() {
    return console_printf("\n-猼摴畯㹴");
}

void* deinit_console(int param0) {
    if(*(int*)(param0 + 16)) {
        →fclose(*(FILE**)(param0 + 16));
        *(int*)(param0 + 16) = 0;
    }
    →fflush(*(FILE**)(param0 + 8));
    →setvbuf(*(FILE**)(param0 + 8), NULL, 2, 0);
    return →memset((void*)(param0 + 68), 85, 0x400);
}

int digits(unsigned int param0) {
    int result = 1;
    if(param0 > 99999999) {
        result = 9;
        param0 = (unsigned int)((unsigned int)(((unsigned long long)param0 * 1441151881L) >>> 32L) >>> 25);
    }
    if(param0 > 9999) {
        result += 4;
        param0 = (unsigned int)((unsigned int)(((unsigned long long)param0 * 0xd1b71759L) >>> 32L) >>> 13);
    }
    if(param0 > 99) {
        result += 2;
        param0 /= 100;
    }
    if(param0 > 9) {
        ++result;
    }
    return result;
}

int display_bitrate(FILE* __stream, int param1, int param2, int param3) {
    __SyntheticTypeUnknownF v0;
    int max = param2 != 4 ? 14: 8;
    v2[v3 + 1] = fdivrp((double)param2, 44.1);
    →fprintf(__stream, "\nMPEG-%-3s layer III sample frequencies (kHz):  %2d  %2d  %g\nbitrates (kbps):", param1, 32 / param2, 48 / param2, v0);
    for(int i = 1; i <= max; ++i) {
        int v1 = *(int*)((param3 * 16 + i) * 4 + (int)&bitrate_table);
        →fprintf(__stream, " %2i");
    }
    return →fputc(10, __stream);
}

int display_bitrates(FILE* __stream) {
    display_bitrate(__stream, &gvar_8057D43, 1, 1);
    display_bitrate(__stream, &gvar_8057D45, 2, 0);
    display_bitrate(__stream, &gvar_8057D47, 4, 0);
    →fputc(10, __stream);
    →fflush(__stream);
    return 0;
}

int encoder_progress(int param0) {
    int result;
    __int128 v0;
    if(silent <= 0) {
        int v1 = →lame_get_frameNum();
        fldz();
        v2[v3] = fucomip(update_interval, v0);
        if(v1 / 100 * 100 == v1) {
            if(brhist2) {
                brhist_jump_back();
            }
            timestatus(param0);
            if(brhist2) {
                brhist_disp(param0);
            }
            result = console_flush();
        }
    }
    return result;
}

int encoder_progress_begin(int param0, char* __s, char* __s1) {
    char* ptr0;
    short v0;
    int result = silent;
    if(result <= 9) {
        →lame_print_config();
        →strcmp(__s1, (char*)0x805996D);
        →strlen(__s);
        →strlen(__s1);
        →strcmp(__s, (char*)0x805996D);
        console_printf("Encoding %s%s to %s\n");
        int v1 = →lame_get_out_samplerate();
        *(long long*)&ptr0 = (double)v1 * 0.001;
        console_printf("Encoding as %g kHz ");
        int v2 = →lame_get_VBR();
        switch(v2) {
            case 2: {
                int v7 = →lame_get_quality();
                →lame_get_VBR_quality();
                int v8 = →lame_get_out_samplerate();
                int v9 = →lame_get_version();
                int v10 = →lame_get_force_ms();
                int v11 = →lame_get_mode();
                console_printf("%s MPEG-%u%s Layer III VBR(q=%g) qval=%i\n");
                break;
            }
            case 3: {
                int v12 = →lame_get_quality();
                int v13 = →lame_get_VBR_mean_bitrate_kbps();
                →lame_get_compression_ratio();
                v0 = fnstcw(v0);
                v24 = fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
                fistp();
                v0 = fldcw(v0);
                int v14 = →lame_get_out_samplerate();
                int v15 = →lame_get_version();
                int v16 = →lame_get_force_ms();
                int v17 = →lame_get_mode();
                console_printf("%s MPEG-%u%s Layer III (%gx) average %d kbps qval=%i\n");
                break;
            }
            case 1: 
            case 4: {
                →lame_get_VBR_quality();
                int v3 = →lame_get_out_samplerate();
                int v4 = →lame_get_version();
                int v5 = →lame_get_force_ms();
                int v6 = →lame_get_mode();
                console_printf("%s MPEG-%u%s Layer III VBR(q=%g)\n");
                break;
            }
            default: {
                int v18 = →lame_get_quality();
                int v19 = →lame_get_brate();
                →lame_get_compression_ratio();
                v0 = fnstcw(v0);
                short v24 = fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
                fistp();
                v0 = fldcw(v0);
                int v20 = →lame_get_out_samplerate();
                int v21 = →lame_get_version();
                int v22 = →lame_get_force_ms();
                int v23 = →lame_get_mode();
                console_printf("%s MPEG-%u%s Layer III (%gx) %3d kbps qval=%i\n");
            }
        }
        if(silent < -9) {
            result = →lame_print_internals();
        }
    }
    return result;
}

int encoder_progress_end(int param0) {
    int result;
    if(silent <= 0) {
        if(brhist2) {
            brhist_jump_back();
        }
        timestatus(param0);
        if(brhist2) {
            brhist_disp(param0);
        }
        result = timestatus_finish();
    }
    return result;
}

int error_flush() {
    return →fflush(gvar_805BCEC);
}

int error_printf(char* __format) {
    char v0;
    return my_console_printing(gvar_805BCEC, __format, &v0);
}

int filename_to_type(char* __s) {
    int result;
    size_t v0 = →strlen(__s);
    if(v0 <= 3) {
        result = 0;
    }
    else {
        __s = &__s[v0 - 4];
        int v1 = local_strcasecmp(__s, ".mpg");
        if(!v1) {
            result = 7;
        }
        else {
            int v2 = local_strcasecmp(__s, ".mp1");
            if(!v2) {
                result = 7;
            }
            else {
                int v3 = local_strcasecmp(__s, ".mp2");
                if(!v3) {
                    result = 7;
                }
                else {
                    int v4 = local_strcasecmp(__s, ".mp3");
                    if(!v4) {
                        result = 7;
                    }
                    else {
                        int v5 = local_strcasecmp(__s, ".wav");
                        if(!v5) {
                            result = 2;
                        }
                        else {
                            int v6 = local_strcasecmp(__s, ".aif");
                            if(!v6) {
                                result = 3;
                            }
                            else {
                                int v7 = local_strcasecmp(__s, ".raw");
                                if(!v7) {
                                    result = 1;
                                }
                                else {
                                    int v8 = local_strcasecmp(__s, ".ogg");
                                    result = !v8 ? 8: 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return result;
}

void* frontend_close_console() {
    return deinit_console(&Console_IO);
}

int frontend_debugf(char* __format, __gnuc_va_list __arg) {
    return my_report_printing(gvar_805BCF0, __format, __arg);
}

int frontend_errorf(char* __format, __gnuc_va_list __arg) {
    return my_error_printing(gvar_805BCEC, __format, __arg);
}

int frontend_msgf(char* __format, __gnuc_va_list __arg) {
    return my_console_printing(gvar_805BCE8, __format, __arg);
}

int frontend_open_console() {
    return init_console(&Console_IO);
}

int fskip(FILE* param0, unsigned int param1, int __whence) {
    int result;
    char v0;
    char v1;
    int v2;
    FILE* __stream = param0;
    int v3 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int __fd = →fileno(__stream);
    int v4 = fstat64(__fd, &v1);
    if((v4 || (v2 & 0xf000) != 0x1000)) {
        int v5 = →fseek(__stream, (long)param1, __whence);
        if(!v5) {
            result = 0;
        }
        else if(__whence != 1 || param1 >= 0x80000000) {
            if(silent <= 9) {
                error_printf("fskip problem: Mostly the return status of functions is not evaluate so it is more secure to polute <stderr>.\n");
            }
            result = -1;
        }
        else {
            while((int)param1 > 0) {
                size_t __n = min_size_t(0x1000, param1);
                size_t v6 = →fread(&v0, 1, __n, __stream);
                if(!v6) {
                    result = -1;
                    goto loc_804CE84;
                }
                else {
                    param1 -= v6;
                }
            }
            result = 0;
        }
    }
    else if(__whence != 1 || param1 >= 0x80000000) {
        result = -1;
    }
    else {
        while((int)param1 > 0) {
            size_t __n1 = min_size_t(0x1000, param1);
            size_t v7 = →fread(&v0, 1, __n1, __stream);
            if(!v7) {
                result = -1;
                goto loc_804CE84;
            }
            else {
                param1 -= v7;
            }
        }
        result = 0;
    }
loc_804CE84:
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v3)) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int fstat64(int __fd, stat64* __buf) {
    return →__fxstat64(3, __fd, __buf);
}

int genre_list_handler(int param0, int param1) {
    return console_printf("%3d %s\n");
}

int get_audio(int param0, int param1) {
    return get_audio_common(param0, param1, 0);
}

int get_audio16(int param0, int param1) {
    return get_audio_common(param0, 0, param1);
}

int get_audio_common(int param0, int param1, int param2) {
    int v0;
    int result;
    int v1;
    short v2;
    char v3;
    int v4 = →lame_get_num_channels();
    int v5 = →lame_get_framesize();
    int v6 = v5;
    int v7 = →lame_get_num_samples();
    if(*(int*)&global) {
        unsigned int v8 = gvar_805B3DC;
        int v9 = v7 - (v8 <= (unsigned int)v7 ? v8: v7);
        if((unsigned int)v9 < (unsigned int)v5 && v7) {
            v6 = v9;
        }
    }
    int v10 = is_mpeg_file_format(input_format);
    if(v10) {
        v1 = param1 ? read_samples_mp3(param0, gvar_805B3E0, &v2): read_samples_mp3(param0, gvar_805B3E0, param2);
        if(v1 >= 0) {
            goto loc_804D2B9;
        }
        else {
            result = v1;
        }
    }
    else {
        v1 = (int)read_samples_pcm(gvar_805B3E0, &v3, (size_t)(v6 * v4));
        if(v1 >= 0) {
            int* ptr0 = (int*)(v1 * 4 + (int)&v3);
            v1 = (unsigned int)((unsigned long long)v1 | ((unsigned long long)(v1 >> 31) << 32)) / v4;
            if(param1) {
                if(v4 == 1) {
                    →memset((void*)(param1 + 0x1200), 0, (size_t)(v1 * 4));
                    v0 = v1;
                    --v0;
                    while(v0 >= 0) {
                        --ptr0;
                        *(int*)(v0 * 4 + param1) = *ptr0;
                        --v0;
                    }
                }
                else if(v4 == 2) {
                    v0 = v1;
                    --v0;
                    while(v0 >= 0) {
                        --ptr0;
                        *(int*)(v0 * 4 + param1 + 0x1200) = *ptr0;
                        --ptr0;
                        *(int*)(v0 * 4 + param1) = *ptr0;
                        --v0;
                    }
                }
            }
            else if(v4 == 1) {
                →memset((void*)(param2 + 0x900), 0, (size_t)(v1 * 2));
                v0 = v1;
                --v0;
                while(v0 >= 0) {
                    --ptr0;
                    *(short*)(v0 * 2 + param2) = (unsigned short)(*ptr0 >>> 16);
                    --v0;
                }
            }
            else if(v4 == 2) {
                v0 = v1;
                --v0;
                while(v0 >= 0) {
                    --ptr0;
                    *(short*)(v0 * 2 + param2 + 0x900) = (unsigned short)(*ptr0 >>> 16);
                    --ptr0;
                    *(short*)(v0 * 2 + param2) = (unsigned short)(*ptr0 >>> 16);
                    --v0;
                }
            }
        loc_804D2B9:
            int v11 = is_mpeg_file_format(input_format);
            if(v11 && param1) {
                v0 = v1;
                --v0;
                while(v0 >= 0) {
                    *(int*)(v0 * 4 + param1) = (int)*(short*)(v0 * 2 + &v2) * 0x10000;
                    --v0;
                }
                if(v4 == 1) {
                    →memset((void*)(param1 + 0x1200), 0, (size_t)(v1 * 4));
                }
                else if(v4 == 2) {
                    v0 = v1;
                    --v0;
                    while(v0 >= 0) {
                        *(int*)(v0 * 4 + param1 + 0x1200) = (int)*(short*)((v0 + 1152) * 2 + &v2) * 0x10000;
                        --v0;
                    }
                }
            }
            if(v7 != -1) {
                gvar_805B3DC += v1;
            }
        }
        result = v1;
    }
    return result;
}

int id3_tag(int param0, int param1, int param2, char* __s) {
    int v0 = 0;
    v0 = (int)→strdup(__s);
    int result = set_id3tag(param0, param1, v0);
    →free((void*)v0);
    return result;
}

int init_console(int param0) {
    *(int*)(param0 + 20) = 80;
    *(int*)(param0 + 24) = 25;
    *(unsigned int*)(param0 + 8) = stderr;
    *(unsigned int*)(param0 + 12) = stderr;
    *(int*)(param0 + 16) = 0;
    →setvbuf(*(FILE**)(param0 + 8), (char*)(param0 + 68), 0, 0x800);
    →memcpy((void*)(param0 + 28), (void*)&gvar_8054F47, 4);
    apply_termcap_settings(param0);
    *(int*)param0 = 0x434f4e53;
    *(int*)(param0 + 2116) = 0;
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
FILE* init_files(int param0, char* __s1, char* __s2, int param3, int param4) {
    FILE* result;
    int v0 = →strcmp((char*)&gvar_8054866, __s2);
    if(v0) {
        int v1 = →strcmp(__s1, __s2);
        if(v1) {
            goto loc_804ACF3;
        }
        else {
            error_printf("Input file and Output file are the same. Abort.\n");
            result = NULL;
        }
    }
    else {
    loc_804ACF3:
        init_infile(param0, (int)__s1, param3, param4);
        int v2 = →lame_get_decode_only();
        FILE* ptr0 = init_outfile(__s2);
        if(!ptr0) {
            error_printf("Can\'t init outfile \'%s\'\n");
            result = NULL;
        }
        else {
            result = ptr0;
        }
    }
    return result;
}

FILE* init_infile(int param0, char* __s1, int param2, int param3) {
    *(int*)&global = 0;
    gvar_805B3DC = 0;
    gvar_805B3D0 = in_bitwidth;
    gvar_805B3D4 = swapbytes;
    gvar_805B3D8 = in_signed == 1 ? 0: 1;
    FILE* result = OpenSndFile(param0, __s1, param2, param3);
    gvar_805B3E0 = result;
    return result;
}

FILE* init_outfile(char* __s1) {
    FILE* result;
    FILE* ptr0;
    int v0 = →strcmp(__s1, (char*)&gvar_8055007);
    if(!v0) {
        ptr0 = stdout;
        lame_set_stream_binary_mode();
        result = ptr0;
    }
    else {
        ptr0 = →fopen64(__s1, (char*)&gvar_8055009);
        result = !ptr0 ? NULL: ptr0;
    }
    return result;
}

int is_mpeg_file_format(int param0) {
    switch(param0) {
        case 4: {
            return 1;
        }
        case 5: {
            return 2;
        }
        case 6: {
            return 3;
        }
        case 7: {
            return -1;
        }
        default: {
            return 0;
        }
    }
}

int is_syncword_mp123(char* param0) {
    int result;
    char* ptr0 = param0;
    if(*param0 != 0xFF) {
        result = 0;
    }
    else if(((unsigned int)*(param0 + 1) & 0xe0) != 224) {
        result = 0;
    }
    else if(((unsigned int)*(param0 + 1) & 0x18) == 8) {
        result = 0;
    }
    else {
        int v0 = (unsigned int)*(param0 + 1) & 0x6;
        if(v0 != 4) {
            if(v0 != 6) {
                if(v0 != 2) {
                    return 0;
                }
                else if(input_format != 6 && input_format != 7) {
                    return 0;
                }
                input_format = 6;
            }
            else if(input_format != 4 && input_format != 7) {
                return 0;
            }
            else {
                input_format = 4;
            }
            return !((unsigned int)*(param0 + 1) & 0x6) ? 0: ((unsigned int)*(param0 + 2) & 0xf0) == 240 ? 0: ((unsigned int)*(param0 + 2) & 0xc) == 12 ? 0: ((unsigned int)*(param0 + 1) & 0x18) == 24 && ((unsigned int)*(param0 + 1) & 0x6) == 4 && (unsigned char)(((int)*(char*)((unsigned int)(*(param0 + 2) >>> 4) + (int)&abl2.5481) >> ((unsigned int)(*(param0 + 3) >>> 6) & 0x1f)) & 0x1) ? 0: ((unsigned int)*(param0 + 3) & 0x3) == 2 ? 0: 1;
        }
        else if(input_format != 5 && input_format != 7) {
            result = 0;
        }
        else {
            input_format = 5;
            result = !((unsigned int)*(param0 + 1) & 0x6) ? 0: ((unsigned int)*(param0 + 2) & 0xf0) == 240 ? 0: ((unsigned int)*(param0 + 2) & 0xc) == 12 ? 0: ((unsigned int)*(param0 + 1) & 0x18) == 24 && ((unsigned int)*(param0 + 1) & 0x6) == 4 && (unsigned char)(((int)*(char*)((unsigned int)(*(param0 + 2) >>> 4) + (int)&abl2.5481) >> ((unsigned int)(*(param0 + 3) >>> 6) & 0x1f)) & 0x1) ? 0: ((unsigned int)*(param0 + 3) & 0x3) == 2 ? 0: 1;
        }
    }
    return result;
}

int lame_decode_fromfile(FILE* param0, int param1, int param2, int param3) {
    int result;
    char v0;
    FILE* __stream = param0;
    int v1 = param1;
    int v2 = param2;
    int v3 = param3;
    int v4 = *(int*)(__GS_BASE + (int)(int*)0x14);
    size_t v5 = 0;
    int v6 = v3;
    int v7 = v2;
    int v8 = →hip_decode1_headers();
    if(v8) {
        result = v8;
    }
    else {
        do {
            v5 = →fread(&v0, 1, 0x400, __stream);
            if(v5) {
                v6 = v3;
                v7 = v2;
                v8 = →hip_decode1_headers();
                if(v8 == -1) {
                    →hip_decode_exit();
                    gvar_805B3E4 = 0;
                    result = -1;
                    goto loc_804F044;
                }
                else if(v8 > 0) {
                    break;
                }
            }
            else {
                v8 = →hip_decode1_headers();
                if(v8 > 0) {
                    break;
                }
                else {
                    →hip_decode_exit();
                    gvar_805B3E4 = 0;
                    result = -1;
                    goto loc_804F044;
                }
            }
        }
        while(1);
        result = v8;
    }
loc_804F044:
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v4)) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int lame_decode_initfile(FILE* param0, void* param1, int param2, int param3) {
    int result;
    char v0;
    char v1;
    int v2;
    char v3;
    char v4;
    char v5;
    FILE* __stream = param0;
    void* __s = param1;
    int v6 = param2;
    int v7 = param3;
    int v8 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v9 = 0;
    →memset(__s, 0, 40);
    if(gvar_805B3E4) {
        →hip_decode_exit();
    }
    int v10 = →hip_decode_init();
    gvar_805B3E4 = v10;
    size_t __n = 4;
    size_t v11 = →fread(&v5, 1, 4, __stream);
    if(v11 != __n) {
        result = -1;
    }
    else if(v5 == 73 && v4 == 68 && v3 == 51) {
        if(silent <= 9) {
            console_printf("ID3v2 found. Be aware that the ID3 tag is currently lost when transcoding.\n");
        }
        __n = 6;
        size_t v12 = →fread(&v5, 1, 6, __stream);
        if(v12 != __n) {
            result = -1;
        }
        else {
            v3 = (unsigned char)((unsigned int)v3 & 0x7f);
            char v13 = (unsigned char)((unsigned int)v13 & 0x7f);
            char v14 = (unsigned char)((unsigned int)v14 & 0x7f);
            char v15 = (unsigned char)((unsigned int)v15 & 0x7f);
            __n = (size_t)((((unsigned int)v3 * 128 + (unsigned int)v13) * 128 + (unsigned int)v14) * 128 + (unsigned int)v15);
            fskip(__stream, (unsigned int)((((unsigned int)v3 * 128 + (unsigned int)v13) * 128 + (unsigned int)v14) * 128 + (unsigned int)v15), 1);
            __n = 4;
            size_t v16 = →fread(&v5, 1, 4, __stream);
            if(v16 == __n) {
                goto loc_804EB48;
            }
            else {
                result = -1;
            }
        }
    }
    else {
    loc_804EB48:
        int v17 = check_aid(&v5);
        if(v17) {
            size_t v18 = →fread(&v5, 1, 2, __stream);
            if(v18 != 2) {
                result = -1;
            }
            else {
                v17 = (unsigned int)v4 * 0x100 + (unsigned int)v5;
                if(silent <= 9) {
                    console_printf("Album ID found.  length=%i \n");
                }
                fskip(__stream, (unsigned int)(v17 - 6), 1);
                size_t v19 = →fread(&v5, 1, __n, __stream);
                if(v19 == __n) {
                    goto loc_804EC14;
                }
                else {
                    result = -1;
                }
            }
        }
        else {
        loc_804EC14:
            __n = 4;
            int v20 = is_syncword_mp123((char*)&v5);
            while(!v20) {
                for(unsigned int i = 0; i < (unsigned int)(__n - 1); ++i) {
                    *(char*)((int)&v5 + i) = *(char*)((int)&v4 + i);
                }
                size_t v21 = →fread((void*)((char*)((int)&v2 + __n) + 3), 1, 1, __stream);
                if(v21 != 1) {
                    result = -1;
                    goto loc_804EE5F;
                }
                else {
                    v20 = is_syncword_mp123((char*)&v5);
                }
            }
            if(!((unsigned int)v3 & 0xf0)) {
                if(silent <= 9) {
                    console_printf("Input file is freeformat.\n");
                }
                v9 = 1;
            }
            unsigned int v22 = gvar_805B3E4;
            int v23 = v7;
            int v24 = v6;
            void* ptr0 = __s;
            int* ptr1 = &v0;
            int* ptr2 = &v1;
            size_t v25 = __n;
            int v26 = (int)&v5;
            unsigned int v27 = v22;
            v2 = →hip_decode1_headersB();
            if(v2 == -1) {
                result = -1;
            }
            else {
                while(!*(int*)__s) {
                    __n = →fread(&v5, 1, 100, __stream);
                    if(__n != 100) {
                        result = -1;
                        goto loc_804EE5F;
                    }
                    else {
                        unsigned int v28 = gvar_805B3E4;
                        v23 = v7;
                        v24 = v6;
                        ptr0 = __s;
                        ptr1 = &v0;
                        ptr2 = &v1;
                        v25 = 100;
                        v26 = (int)&v5;
                        v27 = v28;
                        v2 = →hip_decode1_headersB();
                        if(v2 == -1) {
                            result = -1;
                            goto loc_804EE5F;
                        }
                    }
                }
                if(!*(int*)((int)__s + 12) && !v9) {
                    if(silent <= 9) {
                        error_printf("fail to sync...\n");
                    }
                    result = lame_decode_initfile((int)__stream, (int)__s, v6, v7);
                }
                else {
                    if(*(int*)((int)__s + 32) <= 0) {
                        *(int*)((int)__s + 28) = -1;
                    }
                    result = 0;
                }
            }
        }
    }
loc_804EE5F:
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v8)) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int lame_decoder(int param0, FILE* __s2, char* param2, char* __s, char* __s1, int* param5, int* param6) {
    int v0;
    char* ptr0;
    int v1;
    int v2;
    int v3;
    int v4;
    __SyntheticTypeUnknownF v5;
    short v6;
    short v7;
    char* ptr1 = NULL;
    int v8 = param0;
    int v9 = →lame_get_num_channels();
    if(silent <= 9) {
        v2 = →lame_get_in_samplerate();
        double v10 = (double)v2 / 1000.0;
        size_t v11 = /*BAD_CALL!*/ →strlen(__s);
        int v12 = →strcmp(__s, (char*)&gvar_8054866);
        char* ptr2 = v12 != 0 ? __s: "<stdin>";
        int v13 = v9;
        *(long long*)&v3 = v10;
        v1 = v11 > 26 ? &gvar_80548B5: &gvar_80548B8;
        ptr0 = ptr2;
        console_printf("\rinput:  %s%s(%g kHz, %i channel%s, ");
    }
    switch(input_format) {
        case 1: {
            if(silent <= 9) {
                console_printf("raw PCM data");
            }
            int v14 = →lame_get_num_samples();
            gvar_805C57C = v14;
            gvar_805C578 = 1152;
            param2 = NULL;
            break;
        }
        case 2: {
            if(silent <= 9) {
                console_printf("Microsoft WAVE");
            }
            int v15 = →lame_get_num_samples();
            gvar_805C57C = v15;
            gvar_805C578 = 1152;
            param2 = NULL;
            break;
        }
        case 3: {
            if(silent <= 9) {
                console_printf("SGI/Apple AIFF");
            }
            int v16 = →lame_get_num_samples();
            gvar_805C57C = v16;
            gvar_805C578 = 1152;
            param2 = NULL;
            break;
        }
        case 4: {
            param2 += 241;
            if(silent <= 9) {
                int v17 = /*BAD_CALL!*/ →lame_get_out_samplerate();
                int v18 = →lame_get_version();
                v3 = &gvar_8054921;
                v1 = v17 <= 15999 ? &gvar_8054904: &gvar_80548B4;
                ptr0 = (char*)(2 - v18);
                console_printf("MPEG-%u%s Layer %s");
            }
            break;
        }
        case 5: {
            param2 += 241;
            if(silent <= 9) {
                int v19 = /*BAD_CALL!*/ →lame_get_out_samplerate();
                int v20 = →lame_get_version();
                v3 = &gvar_805491E;
                v1 = v19 <= 15999 ? &gvar_8054904: &gvar_80548B4;
                ptr0 = (char*)(2 - v20);
                console_printf("MPEG-%u%s Layer %s");
            }
            break;
        }
        case 6: {
            if(param2) {
                param2 += 0x211;
            }
            else if(*param5 >= 0 || *param6 >= 0) {
                if(*param5 >= 0) {
                    param2 = (char*)(*param5 + 0x211);
                }
                if(*param6 >= 0) {
                    ptr1 = (char*)(*param6 - 0x211);
                }
            }
            else {
                int v21 = →lame_get_encoder_delay();
                param2 = (char*)(v21 + 0x211);
            }
            if(silent <= 9) {
                int v22 = /*BAD_CALL!*/ →lame_get_out_samplerate();
                int v23 = →lame_get_version();
                v3 = &gvar_8054907;
                v1 = v22 <= 15999 ? &gvar_8054904: &gvar_80548B4;
                ptr0 = (char*)(2 - v23);
                console_printf("MPEG-%u%s Layer %s");
            }
            break;
        }
        case 7: {
            error_printf("Internal error.  Aborting.");
            /*NO_RETURN*/ →exit(-1);
        }
        default: {
            if(silent <= 9) {
                console_printf("unknown");
            }
            int v24 = →lame_get_num_samples();
            gvar_805C57C = v24;
            gvar_805C578 = 1152;
            param2 = NULL;
        }
    }
    if(silent <= 9) {
        size_t v25 = /*BAD_CALL!*/ →strlen(__s1);
        int v26 = →strcmp(__s1, (char*)&gvar_8054866);
        char* ptr3 = v26 != 0 ? __s1: "<stdout>";
        v1 = v25 > 45 ? &gvar_80548B5: &gvar_80548B8;
        ptr0 = ptr3;
        console_printf(")\noutput: %s%s(16 bit, Microsoft WAVE)\n");
        if((int)param2 > 0) {
            ptr0 = param2;
            console_printf("skipping initial %i samples (encoder+decoder delay)\n");
        }
        if((int)ptr1 > 0) {
            ptr0 = ptr1;
            console_printf("skipping final %i samples (encoder padding-decoder delay)\n");
        }
    }
    if(!disable_wav_header) {
        int v27 = →lame_get_in_samplerate();
        WriteWaveHeader(__s2, 0x7fffffff, v27, v9, 16);
    }
    v2 = 0 - (int)(int*)((int)ptr1 + (int)param2);
    double v28 = (double)v2;
    int v29 = swapbytes != 0 ? &WriteBytesSwapped: &WriteBytes;
    unsigned int v30 = gvar_805C57C;
    int v31 = gvar_805C578;
    gvar_805C580 = v30 / (unsigned int)v31;
    do {
        v4 = get_audio16(param0, &v6);
        if(v4 >= 0) {
            unsigned int v32 = gvar_805C584;
            v31 = gvar_805C578;
            gvar_805C584 = (unsigned int)((unsigned int)((unsigned long long)v4 | ((unsigned long long)(v4 >> 31) << 32)) / v31 + v32);
            v28 += (double)v4;
            if(silent <= 0) {
                decoder_progress(&mp3input_data);
                console_flush();
            }
            v0 = v4 <= (int)param2 ? v4: param2;
            param2 = (char*)((int)param2 - v0);
            if((int)ptr1 > 1152 && (int)(gvar_805C584 + 2) > gvar_805C580) {
                v4 += (int)(int*)(1152 - (int)ptr1);
                ptr1 = (char*)0x480;
            }
            else if(gvar_805C580 == gvar_805C584 && v4) {
                v4 -= (int)ptr1;
            }
            while(v0 < v4) {
                if(disable_wav_header) {
                    v29{WriteBytesSwapped}((_IO_FILE*)__s2, (char*)(v0 * 2 + &v6), 2);
                    if(v9 == 2) {
                        v29{WriteBytesSwapped}((_IO_FILE*)__s2, (char*)((v0 + 1152) * 2 + &v6), 2);
                    }
                }
                else {
                    Write16BitsLowHigh((_IO_FILE*)__s2, (int)*(short*)(v0 * 2 + &v6));
                    if(v9 == 2) {
                        Write16BitsLowHigh((_IO_FILE*)__s2, (int)*(short*)((v0 + 1152) * 2 + &v6));
                    }
                }
                ++v0;
            }
            if(flush_write == 1) {
                →fflush(__s2);
            }
        }
    }
    while(v4 > 0);
    v0 = v9 * 2;
    fldz();
    v38[v40] = fucomip(v28, v5);
    if(!__carry__(v9, v9)) {
        if(silent <= 9) {
            error_printf("WAVE file contains 0 PCM samples\n");
        }
        fldz();
        v28 = v5;
    }
    else {
        v31 = v0;
        int v33 = 0xffffffd0 / (unsigned int)v31;
        int v34 = 0;
        v38[v40] = fucomip(v28, (double)*(long long*)&v33);
        if(__carry__(v9, v9) == 0) {
            if(silent <= 9) {
                error_printf("Very huge WAVE file, can\'t set filesize accordingly\n");
            }
            v28 = 4.294967248E9;
        }
        else {
            v28 *= (double)v0;
        }
    }
    if(!disable_wav_header) {
        int v35 = →strcmp((char*)&gvar_8054866, __s1);
        if(v35) {
            int v36 = →fseek(__s2, 0, 0);
            if(!v36) {
                int v37 = →lame_get_in_samplerate();
                v7 = fnstcw(v7);
                short v39 = fldcw((unsigned short)(unsigned char)v7 | ((unsigned short)12 << 8));
                fistp();
                v7 = fldcw(v7);
                WriteWaveHeader(__s2, v2, v37, v9, 16);
            }
        }
    }
    →fclose(__s2);
    if(silent <= 0) {
        decoder_progress_finish();
    }
    return 0;
}

int lame_encoder(int param0, FILE* param1, int param2, char* param3, char* param4) {
    int result;
    char v0;
    int v1;
    char v2;
    int v3 = param0;
    FILE* __s2 = param1;
    char* __s = param3;
    char* __s1 = param4;
    int v4 = *(int*)(__GS_BASE + (int)(int*)0x14);
    encoder_progress_begin(v3, __s, __s1);
    size_t __n = (size_t)→lame_get_id3v2_tag();
    if(__n > 0x24000) {
        encoder_progress_end(v3);
        error_printf("Error writing ID3v2 tag: buffer too small: buffer size=%d  ID3v2 size=%d\n");
        result = 1;
    }
    else {
        size_t v5 = →fwrite(&v0, 1, __n, __s2);
        if(v5 != __n) {
            encoder_progress_end(v3);
            error_printf("Error writing ID3v2 tag \n");
            result = 1;
        }
        else {
            if(flush_write == 1) {
                →fflush(__s2);
            }
            long __off = (long)__n;
            do {
                v1 = get_audio(v3, &v2);
                if(v1 >= 0) {
                    encoder_progress(v3);
                    int v6 = 0x24000;
                    void* ptr0 = &v0;
                    __n = (size_t)→lame_encode_buffer_int();
                    if(__n >= 0x80000000) {
                        if(__n == -1) {
                            error_printf("mp3 buffer is not big enough... \n");
                        }
                        else {
                            error_printf("mp3 internal error:  error code=%i\n");
                        }
                        result = 1;
                        goto loc_804BC7C;
                    }
                    else {
                        v5 = →fwrite(&v0, 1, __n, __s2);
                        if(v5 == __n) {
                            goto loc_804BA02;
                        }
                        else {
                            error_printf("Error writing mp3 output \n");
                            result = 1;
                            goto loc_804BC7C;
                        }
                    }
                }
                else {
                loc_804BA02:
                    if(flush_write == 1) {
                        →fflush(__s2);
                    }
                }
            }
            while(v1 > 0);
            __n = param2 ? (size_t)→lame_encode_flush_nogap(): (size_t)→lame_encode_flush();
            if(__n >= 0x80000000) {
                if(__n == -1) {
                    error_printf("mp3 buffer is not big enough... \n");
                }
                else {
                    error_printf("mp3 internal error:  error code=%i\n");
                }
                result = 1;
            }
            else {
                encoder_progress_end(v3);
                v5 = →fwrite(&v0, 1, __n, __s2);
                if(v5 != __n) {
                    error_printf("Error writing mp3 output \n");
                    result = 1;
                }
                else {
                    if(flush_write == 1) {
                        →fflush(__s2);
                    }
                    __n = (size_t)→lame_get_id3v1_tag();
                    if(__n > 0x24000) {
                        error_printf("Error writing ID3v1 tag: buffer too small: buffer size=%d  ID3v1 size=%d\n");
                        goto loc_804BBFC;
                    }
                    else {
                        if((int)__n > 0) {
                            v5 = →fwrite(&v0, 1, __n, __s2);
                            if(v5 != __n) {
                                error_printf("Error writing ID3v1 tag \n");
                                result = 1;
                                goto loc_804BC7C;
                            }
                            else if(flush_write == 1) {
                                →fflush(__s2);
                            }
                        }
                    loc_804BBFC:
                        if(silent <= 0) {
                            print_lame_tag_leading_info(v3);
                        }
                        int v7 = →fseek(__s2, __off, 0);
                        if(v7) {
                            error_printf("fatal error: can\'t update LAME-tag frame!\n");
                        }
                        else {
                            write_xing_frame(v3, __s2);
                        }
                        if(silent <= 0) {
                            print_trailing_info(v3);
                        }
                        result = 0;
                    }
                }
            }
        }
    }
loc_804BC7C:
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v4)) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int lame_get_file_size(char* __file) {
    char v0;
    int v1;
    int v2 = stat64(__file, &v0);
    return !v2 ? v1: -1;
}

int lame_set_stream_binary_mode() {
    return 0;
}

int lame_version_print(FILE* __stream) {
    char* __s = (char*)→get_lame_os_bitness();
    char* __s1 = (char*)→get_lame_version();
    char* __s2 = (char*)→get_lame_url();
    size_t v0 = →strlen(__s);
    size_t v1 = →strlen(__s1);
    size_t v2 = →strlen(__s2);
    unsigned int v3 = 80;
    int v4 = 16;
    if((unsigned int)(v2 + v1) + (v0 + 16) <= 80 || (unsigned int)(v2 + 2) > 80) {
        if(v0) {
            →fprintf(__stream, "LAME %s version %s (%s)\n\n", __s, __s1, __s2);
        }
        else {
            →fprintf(__stream, "LAME version %s (%s)\n\n", __s1, __s2);
        }
    }
    else if(v0) {
        char* ptr0 = __s2;
        →fprintf(__stream, "LAME %s version %s\n%*s(%s)\n\n", __s, __s1, 80 - v2 - 2, &gvar_8055592);
    }
    else {
        char* ptr1 = __s2;
        →fprintf(__stream, "LAME version %s\n%*s(%s)\n\n", __s1, 80 - v2 - 2, &gvar_8055592);
    }
    return 0;
}

int local_strcasecmp(char* param0, char* param1) {
    char v0;
    char v1;
    do {
        int v2 = →tolower((int)*param0);
        v1 = (unsigned char)v2;
        int v3 = →tolower((int)*param1);
        v0 = (unsigned char)v3;
        if(!v1) {
            break;
        }
        else {
            ++param0;
            ++param1;
        }
    }
    while(v0 == v1);
    return (unsigned int)v1 - (unsigned int)v0;
}

int long_help(int param0, FILE* __stream, int param2, int param3) {
    lame_version_print(__stream);
    →fprintf(__stream, "usage: %s [options] <infile> [outfile]\n\n    <infile> and/or <outfile> can be \"-\", which means stdin/stdout.\n\nRECOMMENDED:\n    lame -V2 input.wav output.mp3\n\n", param2);
    →fwrite("OPTIONS:\n  Input options:\n    --scale <arg>   scale input (multiply PCM data) by <arg>\n    --scale-l <arg> scale channel 0 (left) input (multiply PCM data) by <arg>\n    --scale-r <arg> scale channel 1 (right) input (multiply PCM data) by <arg>\n    --mp1input      input file is a MPEG Layer I   file\n    --mp2input      input file is a MPEG Layer II  file\n    --mp3input      input file is a MPEG Layer III file\n    --nogap <file1> <file2> <...>\n                    gapless encoding for a set of contiguous files\n    --nogapout <dir>\n                    output dir for gapless encoding (must precede --nogap)\n    --nogaptags     allow the use of VBR tags in gapless encoding\n", 1, 675, __stream);
    →fwrite("\n  Input options for RAW PCM:\n    -r              input is raw pcm\n    -x              force byte-swapping of input\n    -s sfreq        sampling frequency of input file (kHz) - default 44.1 kHz\n    --bitwidth w    input bit width is w (default 16)\n    --signed        input is signed (default)\n    --unsigned      input is unsigned\n    --little-endian input is little-endian (default)\n    --big-endian    input is big-endian\n", 1, 425, __stream);
    wait_for(__stream, param3);
    →fwrite("  Operational options:\n    -a              downmix from stereo to mono file for mono encoding\n    -m <mode>       (j)oint, (s)imple, (f)orce, (d)dual-mono, (m)ono\n                    default is (j) or (s) depending on bitrate\n                    joint  = joins the best possible of MS and LR stereo\n                    simple = force LR stereo on all frames\n                    force  = force MS stereo on all frames.\n    --preset type   type must be \"medium\", \"standard\", \"extreme\", \"insane\",\n                    or a value for an average desired bitrate and depending\n                    on the value specified, appropriate quality settings will\n                    be used.\n                    \"--preset help\" gives more info on these\n    --comp  <arg>   choose bitrate to achive a compression ratio of <arg>\n", 1, 812, __stream);
    →fwrite("    --replaygain-fast   compute RG fast but slightly inaccurately (default)\n    --replaygain-accurate   compute RG more accurately and find the peak sample\n    --noreplaygain  disable ReplayGain analysis\n    --clipdetect    enable --replaygain-accurate and print a message whether\n                    clipping occurs and how far the waveform is from full scale\n", 1, 361, __stream);
    →fwrite("    --flush         flush output stream as soon as possible\n    --freeformat    produce a free format bitstream\n    --decode        input=mp3 file, output=wav\n    -t              disable writing wav header when using --decode\n", 1, 226, __stream);
    wait_for(__stream, param3);
    →fwrite("  Verbosity:\n    --disptime <arg>print progress report every arg seconds\n    -S              don\'t print progress report, VBR histograms\n    --nohist        disable VBR histogram display\n    --silent        don\'t print anything on screen\n    --quiet         don\'t print anything on screen\n    --brief         print more useful information\n    --verbose       print a lot of useful information\n\n", 1, 394, __stream);
    →fwrite("  Noise shaping & psycho acoustic algorithms:\n    -q <arg>        <arg> = 0...9.  Default  -q 5 \n                    -q 0:  Highest quality, very slow \n                    -q 9:  Poor quality, but fast \n    -h              Same as -q 2.   Recommended.\n    -f              Same as -q 7.   Fast, ok quality\n", 1, 0x131, __stream);
    wait_for(__stream, param3);
    →fwrite("  CBR (constant bitrate, the default) options:\n    -b <bitrate>    set the bitrate in kbps, default 128 kbps\n    --cbr           enforce use of constant bitrate\n\n  ABR options:\n    --abr <bitrate> specify average bitrate desired (instead of quality)\n\n", 1, 251, __stream);
    int v0 = →lame_get_VBR_q();
    →fprintf(__stream, "  VBR options:\n    -V n            quality setting for VBR.  default n=%i\n                    0=high quality,bigger files. 9=smaller files\n    -v              the same as -V 4\n    --vbr-old       use old variable bitrate (VBR) routine\n    --vbr-new       use new variable bitrate (VBR) routine (default)\n", v0);
    →fwrite("    -b <bitrate>    specify minimum allowed bitrate, default  32 kbps\n    -B <bitrate>    specify maximum allowed bitrate, default 320 kbps\n    -F              strictly enforce the -b option, for use with players that\n                    do not support low bitrate mp3\n    -t              disable writing LAME Tag\n    -T              enable and force writing LAME Tag\n", 1, 368, __stream);
    wait_for(__stream, param3);
    →fwrite("  PSY related:\n", 1, 15, __stream);
    →fwrite("    --temporal-masking x   x=0 disables, x=1 enables temporal masking effect\n    --nssafejoint   M/S switching criterion\n    --nsmsfix <arg> M/S switching tuning [effective 0-3.5]\n    --interch x     adjust inter-channel masking ratio\n    --ns-bass x     adjust masking for sfbs  0 -  6 (long)  0 -  5 (short)\n    --ns-alto x     adjust masking for sfbs  7 - 13 (long)  6 - 10 (short)\n    --ns-treble x   adjust masking for sfbs 14 - 21 (long) 11 - 12 (short)\n", 1, 0x1cc, __stream);
    →fwrite("    --ns-sfb21 x    change ns-treble by x dB for sfb21\n", 1, 55, __stream);
    wait_for(__stream, param3);
    →fwrite("  experimental switches:\n    -Y              lets LAME ignore noise in sfb21, like in CBR\n", 1, 90, __stream);
    wait_for(__stream, param3);
    →fwrite("  MP3 header/stream options:\n    -e <emp>        de-emphasis n/5/c  (obsolete)\n    -c              mark as copyright\n    -o              mark as non-original\n    -p              error protection.  adds 16 bit checksum to every frame\n                    (the checksum is computed correctly)\n    --nores         disable the bit reservoir\n    --strictly-enforce-ISO   comply as much as possible to ISO MPEG spec\n\n", 1, 410, __stream);
    →fprintf(__stream, "  Filter options:\n  --lowpass <freq>        frequency(kHz), lowpass filter cutoff above freq\n  --lowpass-width <freq>  frequency(kHz) - default 15%% of lowpass freq\n  --highpass <freq>       frequency(kHz), highpass filter cutoff below freq\n  --highpass-width <freq> frequency(kHz) - default 15%% of highpass freq\n");
    →fwrite("  --resample <sfreq>  sampling frequency of output file(kHz)- default=automatic\n", 1, 80, __stream);
    wait_for(__stream, param3);
    →fwrite("  ID3 tag options:\n    --tt <title>    audio/song title (max 30 chars for version 1 tag)\n    --ta <artist>   audio/song artist (max 30 chars for version 1 tag)\n    --tl <album>    audio/song album (max 30 chars for version 1 tag)\n    --ty <year>     audio/song year of issue (1 to 9999)\n    --tc <comment>  user-defined text (max 30 chars for v1 tag, 28 for v1.1)\n    --tn <track[/total]>   audio/song track number and (optionally) the total\n                           number of tracks on the original recording. (track\n                           and total each 1 to 255. just the track number\n                           creates v1.1 tag, providing a total forces v2.0).\n    --tg <genre>    audio/song genre (name or number in list)\n    --ti <file>     audio/song albumArt (jpeg/png/gif file, 128KB max, v2.3)\n    --tv <id=value> user-defined frame specified by id and value (v2.3 tag)\n", 1, 886, __stream);
    →fwrite("    --add-id3v2     force addition of version 2 tag\n    --id3v1-only    add only a version 1 tag\n    --id3v2-only    add only a version 2 tag\n    --space-id3v1   pad version 1 tag with spaces instead of nulls\n    --pad-id3v2     same as \'--pad-id3v2-size 128\'\n    --pad-id3v2-size <value> adds version 2 tag, pad with extra <value> bytes\n    --genre-list    print alphabetically sorted ID3 genre list and exit\n    --ignore-tag-errors  ignore errors in values passed for tags\n\n", 1, 476, __stream);
    →fwrite("    Note: A version 2 tag will NOT be added unless one of the input fields\n    won\'t fit in a version 1 tag (e.g. the title string is longer than 30\n    characters), or the \'--add-id3v2\' or \'--id3v2-only\' options are used,\n    or output is redirected to stdout.\n\nMisc:\n    --license       print License information\n\n", 1, 316, __stream);
    wait_for(__stream, param3);
    →fwrite("  Platform specific:\n    --noasm <instructions> disable assembly optimizations for mmx/3dnow/sse\n", 1, 97, __stream);
    wait_for(__stream, param3);
    display_bitrates(__stream);
    return 0;
}

int machine_byte_order() {
    return 0;
}

int main(int param0, int* param1) {
    FILE* __s2;
    int result;
    char v0;
    char* __src1;
    char v1;
    __int128 v2;
    char v3;
    char v4;
    int* ptr0 = param1;
    int v5 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v6 = -1;
    int v7 = -1;
    int v8 = 0;
    int v9 = 200;
    →memset(&v0, 0, 0xc80c8);
    int i;
    for(i = 0; i <= 199; ++i) {
        *(unsigned int*)(i * 4 + (int)&__src1) = (int*)(i * 0x1001 + (int)&v0);
    }
    →memset(&v4, 0, 0x1001);
    frontend_open_console();
    input_format = 0;
    int v10 = →lame_init();
    if(!v10) {
        error_printf("fatal error during initialization\n");
        frontend_close_console();
        result = 1;
    }
    else {
        →lame_set_errorf();
        →lame_set_debugf();
        int v11 = &frontend_msgf;
        int v12 = v10;
        →lame_set_msgf();
        if(param0 <= 1) {
            usage(stderr, ptr0[0]);
            →lame_close();
            frontend_close_console();
            result = 1;
        }
        else {
            char* __s = →getenv("LAMEOPT");
            parse_args_from_string(v10, __s, (int)&v4, &v1);
            int v13 = parse_args(v10, param0, (int)ptr0, (int)&v4, &v1, (int)&__src1, (int)&v9);
            if(v13 < 0) {
                →lame_close();
                frontend_close_console();
                result = v13 == -2 ? 0: 1;
            }
            else {
                fldz();
                v16[v17] = fucomip(update_interval, v2);
                if((unsigned int)v13 >= 0 && !(v13 ? 0: 1)) {
                    update_interval = 0x40000000;
                }
                if(v1 && v9 > 0) {
                    →strncpy(&v3, (char*)&v1, 0x1001);
                    v8 = 1;
                }
                if(v9 > 0) {
                    parse_nogap_filenames(v8, __src1, (char*)&v1, &v3);
                    __s2 = init_files(v10, __src1, (char*)&v1, &v6, &v7);
                }
                else {
                    __s2 = init_files(v10, (char*)&v4, (char*)&v1, &v6, &v7);
                }
                if(!__s2) {
                    →lame_close();
                    frontend_close_console();
                    result = -1;
                }
                else {
                    v11 = 0;
                    →lame_set_write_id3tag_automatic();
                    i = →lame_init_params();
                    if(i < 0) {
                        if(i == -1) {
                            display_bitrates(stderr);
                        }
                        error_printf("fatal error during initialization\n");
                        →lame_close();
                        frontend_close_console();
                        result = i;
                    }
                    else {
                        if(silent > 0) {
                            brhist2 = 0;
                        }
                        v12 = v10;
                        int v14 = →lame_get_decode_only();
                        if(v14) {
                            if(mp3_delay_set) {
                                lame_decoder(v10, __s2, mp3_delay, (char*)&v4, (char*)&v1, (int*)&v6, (int*)&v7);
                            }
                            else {
                                lame_decoder(v10, __s2, NULL, (char*)&v4, (char*)&v1, (int*)&v6, (int*)&v7);
                            }
                        }
                        else if(v9 > 0) {
                            for(i = 0; i < v9; ++i) {
                                int v15 = v9 - 1 == i ? 0: 1;
                                if(i > 0) {
                                    parse_nogap_filenames(v8, *(char**)(i * 4 + (int)&__src1), (char*)&v1, &v3);
                                    __s2 = init_files(v10, *(char**)(i * 4 + (int)&__src1), (char*)&v1, &v6, &v7);
                                    →lame_init_bitstream();
                                }
                                brhist_init_package(v10);
                                →lame_set_nogap_total();
                                v11 = i;
                                v12 = v10;
                                →lame_set_nogap_currentindex();
                                v13 = lame_encoder(v10, __s2, v15, *(char**)(i * 4 + (int)&__src1), (char*)&v1);
                                →fclose(__s2);
                                close_infile();
                            }
                        }
                        else {
                            brhist_init_package(v10);
                            v13 = lame_encoder(v10, __s2, 0, (char*)&v4, (char*)&v1);
                            →fclose(__s2);
                            close_infile();
                        }
                        →lame_close();
                        frontend_close_console();
                        result = v13;
                    }
                }
            }
        }
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v5)) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int make_even_number_of_bytes_in_length(int param0) {
    return (unsigned char)(param0 & 0x1) != 0 ? param0 + 1: param0;
}

unsigned int min_size_t(unsigned int param0, unsigned int param1) {
    return param0 < param1 ? param0: param1;
}

int my_console_printing(FILE* __s, char* __format, __gnuc_va_list __arg) {
    return __s ? →vfprintf(__s, __format, __arg): 0;
}

int my_error_printing(FILE* __s, char* __format, __gnuc_va_list __arg) {
    return __s ? →vfprintf(__s, __format, __arg): 0;
}

int my_report_printing(FILE* __s, char* __format, __gnuc_va_list __arg) {
    return __s ? →vfprintf(__s, __format, __arg): 0;
}

int parse_aiff_header(int param0, _IO_FILE* __fp) {
    short v0;
    int v1;
    unsigned int v2;
    int result;
    short v3;
    __SyntheticTypeUnknownF v4;
    short v5;
    int v6 = 0;
    int v7 = 0;
    int v8 = 0;
    int v9 = 0x4e4f4e45;
    int v10 = 0;
    int v11 = 0;
    long __off = -1;
    →memset(&v3, 0, 32);
    v6 = Read32BitsHighLow(__fp);
    v8 = Read32BitsHighLow(__fp);
    if(v8 != 1095321158 && v8 != 1095321155) {
        result = -1;
    }
    else {
    alab1:
        while(v6 > 0) {
            int v12 = Read32BitsHighLow(__fp);
            v6 -= 4;
            switch(v12) {
                case 1129270605: {
                    v10 = v11 + 1;
                    v7 = Read32BitsHighLow(__fp);
                    v2 = (unsigned int)make_even_number_of_bytes_in_length(v7);
                    v6 -= v2;
                    int v13 = Read16BitsHighLow(__fp);
                    v3 = (unsigned short)v13;
                    v2 -= 2;
                    v1 = Read32BitsHighLow(__fp);
                    v2 -= 4;
                    int v14 = Read16BitsHighLow(__fp);
                    v0 = (unsigned short)v14;
                    v2 -= 2;
                    ReadIeeeExtendedHighLow(__fp);
                    double v15 = v4;
                    v2 -= 10;
                    if(v8 == 1095321155) {
                        v9 = Read32BitsHighLow(__fp);
                        v2 -= 4;
                    }
                    int v16 = fskip((FILE*)__fp, v2, 1);
                    if(v16) {
                        return -1;
                    }
                    break;
                }
                case 1397968452: {
                    v11 = 1;
                    v7 = Read32BitsHighLow(__fp);
                    v2 = (unsigned int)make_even_number_of_bytes_in_length(v7);
                    v6 -= v2;
                    unsigned int v17 = (unsigned int)Read32BitsHighLow(__fp);
                    v2 -= 4;
                    int v18 = Read32BitsHighLow(__fp);
                    v2 -= 4;
                    int v19 = 0x53534e44;
                    if(v10 > 0) {
                        int v20 = fskip((FILE*)__fp, v17, 1);
                        if(!v20) {
                            break alab1;
                        }
                        else {
                            return -1;
                        }
                    }
                    else {
                        __off = →ftell((FILE*)__fp);
                        if(__off >= 0) {
                            __off = (long)(v17 + __off);
                        }
                        int v21 = fskip((FILE*)__fp, v2, 1);
                        if(v21) {
                            return -1;
                        }
                    }
                    break;
                }
                default: {
                    v7 = Read32BitsHighLow(__fp);
                    v2 = (unsigned int)make_even_number_of_bytes_in_length(v7);
                    v6 -= v2;
                    int v22 = fskip((FILE*)__fp, v2, 1);
                    if(v22) {
                        return -1;
                    }
                    break;
                }
            }
        }
        if(v9 == 0x736f7774) {
            gvar_805B3D4 = swapbytes;
            goto loc_804E1D2;
        }
        else if(v9 == 0x74776f73) {
            gvar_805B3D4 = swapbytes ? 0: 1;
            goto loc_804E1D2;
        }
        else if(v9 != 0x4e4f4e45) {
            result = -1;
        }
        else {
            gvar_805B3D4 = swapbytes ? 0: 1;
        loc_804E1D2:
            if(v10 && (v11 > 0 || !v1)) {
                int v23 = aiff_check2((short*)&v3);
                if(v23) {
                    result = 0;
                }
                else {
                    int v24 = →lame_set_num_channels();
                    if(v24 == -1) {
                        if(silent <= 9) {
                            error_printf("Unsupported number of channels: %u\n");
                        }
                        result = 0;
                    }
                    else {
                        v5 = fnstcw(v5);
                        short v26 = fldcw((unsigned short)(unsigned char)v5 | ((unsigned short)12 << 8));
                        fistp();
                        v5 = fldcw(v5);
                        →lame_set_in_samplerate();
                        →lame_set_num_samples();
                        gvar_805B3D0 = (unsigned int)v0;
                        gvar_805B3D8 = 0;
                        if(__off >= 0) {
                            int v25 = →fseek((FILE*)__fp, __off, 0);
                            if(!v25) {
                                goto loc_804E2D6;
                            }
                            else {
                                if(silent <= 9) {
                                    error_printf("Can\'t rewind stream to audio data position\n");
                                }
                                result = 0;
                            }
                        }
                        else {
                        loc_804E2D6:
                            result = 1;
                        }
                    }
                }
            }
            else {
                return -1;
            }
        }
    }
    return result;
}

void parse_args() {
    // Decompilation error
}

int parse_args_from_string(int param0, char* __s, int param2, int param3) {
    int result1;
    int v0;
    int v1 = 0;
    if(!__s || !__s[0]) {
        result1 = 0;
    }
    else {
        size_t v2 = →strlen(__s);
        char* __dest = (char*)→malloc(v2 + 1);
        void* __ptr = __dest;
        →strcpy(__dest, __s);
        *(int*)(v1 * 4 + (int)&v0) = "lhama";
        ++v1;
        while(1) {
            *(char**)(v1 * 4 + (int)&v0) = __dest;
            ++v1;
            while((__dest[0] != 32 && __dest[0])) {
                ++__dest;
            }
            if(!__dest[0]) {
                *(int*)(v1 * 4 + (int)&v0) = 0;
                int result = parse_args(param0, v1, (int)&v0, param2, param3, 0, 0);
                →free(__ptr);
                return result;
            }
            __dest[0] = 0;
            ++__dest;
        }
    }
    return result1;
}

int parse_file_header(int param0, _IO_FILE* __fp) {
    int result;
    int v0 = Read32BitsHighLow(__fp);
    *(int*)&global = 0;
    gvar_805B3D8 = in_signed == 1 ? 0: 1;
    if(v0 == 1380533830) {
        int v1 = parse_wave_header(param0, __fp);
        if(v1 > 0) {
            *(int*)&global = 1;
            result = 2;
        }
        else {
            if(v1 < 0 && silent <= 9) {
                error_printf("Warning: corrupt or unsupported WAVE format\n");
            }
            return 0;
        }
    }
    else if(v0 != 1179603533) {
        if(silent <= 9) {
            error_printf("Warning: unsupported audio format\n");
        }
        result = 0;
    }
    else {
        int v2 = parse_aiff_header(param0, __fp);
        if(v2 > 0) {
            *(int*)&global = 1;
            return 3;
        }
        if(v2 < 0 && silent <= 9) {
            error_printf("Warning: corrupt or unsupported AIFF format\n");
        }
        result = 0;
    }
    return result;
}

char* parse_nogap_filenames(int param0, char* __src1, char* __dest, char* __src) {
    char* result;
    size_t v0;
    →strcpy(__dest, __src);
    if(!param0) {
        →strncpy(__dest, __src1, 0xffd);
        v0 = →strlen(__dest);
        if(__dest[v0 - 3] == 119 && __dest[v0 - 2] == 97 && __dest[v0 - 1] == 118 && __dest[v0 - 4] == 46) {
            __dest[v0 - 3] = 'm';
            __dest[v0 - 2] = 'p';
            result = &__dest[v0 - 1];
            *result = 51;
        }
        else {
            __dest[v0] = '.';
            __dest[v0 + 1] = 'm';
            __dest[v0 + 2] = 'p';
            __dest[v0 + 3] = '3';
            result = (char*)((int*)(v0 + (int)__dest) + 1);
            *result = 0;
        }
    }
    else {
        char* i;
        for(i = __src1 + 0xffd; (i[0] != 47 && i[0] != 92 && i != __src1 && i[0] != 58); --i) {
        }
        if(i != __src1) {
            size_t v1 = →strlen(__dest);
            if(__dest[v1 - 1] != 47) {
                size_t v2 = →strlen(__dest);
                if(__dest[v2 - 1] != 92) {
                    size_t v3 = →strlen(__dest);
                    if(__dest[v3 - 1] != 58) {
                        goto loc_804BE7B;
                    }
                }
            }
            ++i;
        }
        else {
        loc_804BE7B:
            if(i == __src1) {
                size_t v4 = →strlen(__dest);
                if(__dest[v4 - 1] != 47) {
                    size_t v5 = →strlen(__dest);
                    if(__dest[v5 - 1] != 92) {
                        size_t v6 = →strlen(__dest);
                        if(__dest[v6 - 1] != 58) {
                            →strcat(__dest, (char*)&gvar_8054ED7);
                        }
                    }
                }
            }
        }
        →strncat(__dest, i, 0xffd);
        v0 = →strlen(__dest);
        if(__dest[v0 - 3] == 119 && __dest[v0 - 2] == 97 && __dest[v0 - 1] == 118 && __dest[v0 - 4] == 46) {
            __dest[v0 - 3] = 'm';
            __dest[v0 - 2] = 'p';
            result = &__dest[v0 - 1];
            *result = 51;
        }
        else {
            __dest[v0] = '.';
            __dest[v0 + 1] = 'm';
            __dest[v0 + 2] = 'p';
            __dest[v0 + 3] = '3';
            result = (char*)((int*)(v0 + (int)__dest) + 1);
            *result = 0;
        }
    }
    return result;
}

int parse_wave_header(int param0, _IO_FILE* __fp) {
    int result;
    int v0 = 0;
    int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    int v4 = 0;
    int v5 = 0;
    int v6 = 0;
    unsigned int v7 = 0;
    unsigned int v8 = 0;
    int i = 0;
    int v9 = Read32BitsHighLow(__fp);
    int v10 = Read32BitsHighLow(__fp);
    if(v10 != 1463899717) {
        result = -1;
    }
    else {
    alab1:
        for(i = 0; i <= 19; ++i) {
            int v11 = Read32BitsHighLow(__fp);
            switch(v11) {
                case 1684108385: {
                    v8 = (unsigned int)Read32Bits(__fp);
                    v6 = 1;
                    break alab1;
                }
                case 1718449184: {
                    v8 = (unsigned int)Read32Bits(__fp);
                    if((int)v8 <= 15) {
                        return -1;
                    }
                    v0 = Read16BitsLowHigh(__fp);
                    v8 -= 2;
                    v1 = Read16BitsLowHigh(__fp);
                    v8 -= 2;
                    v4 = Read32Bits(__fp);
                    v8 -= 4;
                    v5 = Read32Bits(__fp);
                    v8 -= 4;
                    v2 = Read16BitsLowHigh(__fp);
                    v8 -= 2;
                    v3 = Read16BitsLowHigh(__fp);
                    v8 -= 2;
                    if((int)v8 > 9 && v0 == -2) {
                        Read16BitsLowHigh(__fp);
                        Read16BitsLowHigh(__fp);
                        Read32Bits(__fp);
                        v0 = Read16BitsLowHigh(__fp);
                        v8 -= 10;
                    }
                    if((int)v8 > 0) {
                        int v12 = fskip((FILE*)__fp, v8, 1);
                        if(v12) {
                            return -1;
                        }
                    }
                    break;
                }
                default: {
                    v8 = (unsigned int)Read32Bits(__fp);
                    int v13 = fskip((FILE*)__fp, v8, 1);
                    if(v13) {
                        return -1;
                    }
                    break;
                }
            }
        }
        if(!v6) {
            result = -1;
        }
        else if(v0 != 1) {
            if(silent <= 9) {
                error_printf("Unsupported data format: 0x%04X\n");
            }
            result = 0;
        }
        else {
            int v14 = →lame_set_num_channels();
            if(v14 == -1) {
                if(silent <= 9) {
                    error_printf("Unsupported number of channels: %u\n");
                }
                result = 0;
            }
            else {
                →lame_set_in_samplerate();
                gvar_805B3D0 = v3;
                gvar_805B3D8 = 1;
                →lame_set_num_samples();
                result = 1;
            }
        }
    }
    return result;
}

size_t presets_longinfo_dm(FILE* __s) {
    →fwrite("\nThe --preset switches are aliases over LAME settings.\n\n\n", 1, 57, __s);
    →fwrite("To activate these presets:\n\n   For VBR modes (generally highest quality):\n\n", 1, 75, __s);
    →fwrite("     \"--preset medium\" This preset should provide near transparency\n                             to most people on most music.\n\n     \"--preset standard\" This preset should generally be transparent\n                             to most people on most music and is already\n                             quite high in quality.\n\n", 1, 323, __s);
    →fwrite("     \"--preset extreme\" If you have extremely good hearing and similar\n                             equipment, this preset will generally provide\n                             slightly higher quality than the \"standard\"\n                             mode.\n\n", 1, 0xff, __s);
    →fwrite("   For CBR 320kbps (highest quality possible from the --preset switches):\n\n     \"--preset insane\"  This preset will usually be overkill for most\n                             people and most situations, but if you must\n                             have the absolute highest quality with no\n                             regard to filesize, this is the way to go.\n\n", 1, 362, __s);
    →fwrite("   For ABR modes (high quality per given bitrate but not as high as VBR):\n\n     \"--preset <kbps>\"  Using this preset will usually give you good\n                             quality at a specified bitrate. Depending on the\n                             bitrate entered, this preset will determine the\n", 1, 299, __s);
    →fwrite("                             optimal settings for that particular situation.\n                             While this approach works, it is not nearly as\n                             flexible as VBR, and usually will not attain the\n                             same level of quality as VBR at higher bitrates.\n\n", 1, 310, __s);
    →fwrite("The following options are also available for the corresponding profiles:\n\n   <fast>        standard\n   <fast>        extreme\n                 insane\n   <cbr> (ABR Mode) - The ABR Mode is implied. To use it,\n                      simply specify a bitrate. For example:\n                      \"--preset 185\" activates this\n                      preset and uses 185 as an average kbps.\n\n", 1, 383, __s);
    →fwrite("   \"fast\" - Enables the fast VBR mode for a particular profile.\n\n", 1, 65, __s);
    →fwrite("   \"cbr\"  - If you use the ABR mode (read above) with a significant\n            bitrate such as 80, 96, 112, 128, 160, 192, 224, 256, 320,\n            you can use the \"cbr\" option to force CBR mode encoding\n            instead of the standard abr mode. ABR does provide higher\n            quality but CBR may be useful in situations such as when\n            streaming an mp3 over the internet may be important.\n\n", 1, 412, __s);
    →fwrite("    For example:\n\n    \"--preset fast standard <input file> <output file>\"\n or \"--preset cbr 192 <input file> <output file>\"\n or \"--preset 172 <input file> <output file>\"\n or \"--preset extreme <input file> <output file>\"\n\n\n", 1, 222, __s);
    return →fwrite("A few aliases are also available for ABR mode:\nphone => 16kbps/mono        phon+/lw/mw-eu/sw => 24kbps/mono\nmw-us => 40kbps/mono        voice => 56kbps/mono\nfm/radio/tape => 112kbps    hifi => 160kbps\ncd => 192kbps               studio => 256kbps\n", 1, 247, __s);
}

int presets_set(int param0, int param1, int param2, char* __s1, int param4) {
    int result;
    int v0 = 0;
    int v1 = →strcmp(__s1, "help");
    if(!v1 && param1 <= 0 && param2 <= 0) {
        lame_version_print(stdout);
        presets_longinfo_dm(stdout);
        result = -1;
    }
    else {
        int v2 = →strcmp(__s1, "phone");
        if(!v2) {
            __s1 = (char*)&gvar_805892F;
            v0 = 1;
        }
        int v3 = →strcmp(__s1, "phon+");
        if(v3) {
            int v4 = →strcmp(__s1, (char*)&gvar_8058938);
            if(v4) {
                int v5 = →strcmp(__s1, "mw-eu");
                if(v5) {
                    int v6 = →strcmp(__s1, (char*)&gvar_8058941);
                    if(v6) {
                        goto loc_804FD8D;
                    }
                }
            }
            goto loc_804FD71;
        }
        else {
        loc_804FD71:
            __s1 = (char*)&gvar_8058944;
            v0 = 1;
        }
    loc_804FD8D:
        int v7 = →strcmp(__s1, "mw-us");
        if(!v7) {
            __s1 = (char*)&gvar_805894D;
            v0 = 1;
        }
        int v8 = →strcmp(__s1, "voice");
        if(!v8) {
            __s1 = (char*)&gvar_8058956;
            v0 = 1;
        }
        int v9 = →strcmp(__s1, (char*)&gvar_8058959);
        if(!v9) {
            __s1 = (char*)&gvar_805895C;
        }
        int v10 = →strcmp(__s1, "radio");
        if(v10) {
            int v11 = →strcmp(__s1, "tape");
            if(!v11) {
                goto loc_804FE15;
            }
        }
        else {
        loc_804FE15:
            __s1 = (char*)&gvar_805895C;
        }
        int v12 = →strcmp(__s1, "hifi");
        if(!v12) {
            __s1 = (char*)&gvar_8058970;
        }
        int v13 = →strcmp(__s1, (char*)&gvar_8058974);
        if(!v13) {
            __s1 = (char*)&gvar_8058977;
        }
        int v14 = →strcmp(__s1, "studio");
        if(!v14) {
            __s1 = (char*)&gvar_8058982;
        }
        int v15 = →strcmp(__s1, "medium");
        if(!v15) {
            →lame_set_VBR_q();
            →lame_set_VBR();
            result = 0;
        }
        else {
            int v16 = →strcmp(__s1, "standard");
            if(!v16) {
                →lame_set_VBR_q();
                →lame_set_VBR();
                result = 0;
            }
            else {
                int v17 = →strcmp(__s1, "extreme");
                if(!v17) {
                    →lame_set_VBR_q();
                    →lame_set_VBR();
                    result = 0;
                }
                else {
                    int v18 = →strcmp(__s1, "insane");
                    if(!v18 && param1 <= 0) {
                        →lame_set_preset();
                        result = 0;
                    }
                    else {
                        int v19 = →atoi(__s1);
                        if(v19 > 0 && param1 <= 0) {
                            int v20 = →atoi(__s1);
                            if(v20 > 7) {
                                int v21 = →atoi(__s1);
                                if(v21 > 320) {
                                    goto loc_8050070;
                                }
                                else {
                                    →atoi(__s1);
                                    →lame_set_preset();
                                    if(param2 == 1) {
                                        →lame_set_VBR();
                                    }
                                    if(v0 == 1) {
                                        →lame_set_mode();
                                    }
                                    result = 0;
                                }
                            }
                            else {
                            loc_8050070:
                                lame_version_print(gvar_805BCEC);
                                error_printf("Error: The bitrate specified is out of the valid range for this preset\n\nWhen using this mode you must enter a value between \"32\" and \"320\"\n\nFor further information try: \"%s --preset help\"\n");
                                result = -1;
                            }
                        }
                        else {
                            lame_version_print(gvar_805BCEC);
                            error_printf("Error: You did not enter a valid profile and/or options with --preset\n\nAvailable profiles are:\n\n   <fast>        medium\n   <fast>        standard\n   <fast>        extreme\n                 insane\n          <cbr> (ABR Mode) - The ABR Mode is implied. To use it,\n                             simply specify a bitrate. For example:\n                             \"--preset 185\" activates this\n                             preset and uses 185 as an average kbps.\n\n");
                            error_printf("    Some examples:\n\n or \"%s --preset fast standard <input file> <output file>\"\n or \"%s --preset cbr 192 <input file> <output file>\"\n or \"%s --preset 172 <input file> <output file>\"\n or \"%s --preset extreme <input file> <output file>\"\n\nFor further information try: \"%s --preset help\"\n");
                            result = -1;
                        }
                    }
                }
            }
        }
    }
    return result;
}

int print_lame_tag_leading_info(int param0) {
    int result = →lame_get_bWriteVbrTag();
    if(result) {
        result = console_printf("Writing LAME Tag...");
    }
    return result;
}

int print_license(FILE* __stream) {
    lame_version_print(__stream);
    →fwrite("Can I use LAME in my commercial program?\n\nYes, you can, under the restrictions of the LGPL.  In particular, you\ncan include a compiled version of the LAME library (for example,\nlame.dll) with a commercial program.  Some notable requirements of\nthe LGPL:\n\n", 1, 0xff, __stream);
    →fwrite("1. In your program, you cannot include any source code from LAME, with\n   the exception of files whose only purpose is to describe the library\n   interface (such as lame.h).\n\n", 1, 175, __stream);
    →fwrite("2. Any modifications of LAME must be released under the LGPL.\n   The LAME project (www.mp3dev.org) would appreciate being\n   notified of any modifications.\n\n", 1, 157, __stream);
    →fwrite("3. You must give prominent notice that your program is:\n      A. using LAME (including version number)\n      B. LAME is under the LGPL\n      C. Provide a copy of the LGPL.  (the file COPYING contains the LGPL)\n      D. Provide a copy of LAME source, or a pointer where the LAME\n         source can be obtained (such as www.mp3dev.org)\n   An example of prominent notice would be an \"About the LAME encoding engine\"\n   button in some pull down menu within the executable of your program.\n\n", 1, 487, __stream);
    →fwrite("4. If you determine that distribution of LAME requires a patent license,\n   you must obtain such license.\n\n\n", 1, 108, __stream);
    →fwrite("*** IMPORTANT NOTE ***\n\nThe decoding functions provided in LAME use the mpglib decoding engine which\nis under the GPL.  They may not be used by any program not released under the\nGPL unless you obtain such permission from the MPG123 project (www.mpg123.de).\n\n", 1, 259, __stream);
    return 0;
}

int print_trailing_info(int param0) {
    int v0;
    __SyntheticTypeUnknownF v1;
    __int128 v2;
    int v3 = →lame_get_bWriteVbrTag();
    if(v3) {
        console_printf("done\n");
    }
    int v4 = →lame_get_findReplayGain();
    if(v4) {
        int v5 = →lame_get_RadioGain();
        console_printf("ReplayGain: %s%.1fdB\n");
        if(v5 > 510 || v5 < -510) {
            error_printf("WARNING: ReplayGain exceeds the -51dB to +51dB range. Such a result is too\n         high to be stored in the header.\n");
        }
    }
    int result = print_clipping_info;
    if(result) {
        result = →lame_get_decode_on_the_fly();
        if(result) {
            int v6 = →lame_get_noclipGainChange();
            →lame_get_noclipScale();
            float v7 = v1;
            fldz();
            v9[v10] = fucomip((double)v6 / 10.0, v2);
            __SyntheticTypeUnknownF v8 = (double)v6 / 10.0;
            *(long long*)&v0 = v8;
            console_printf("WARNING: clipping occurs at the current gain. Set your decoder to decrease\n         the  gain  by  at least %.1fdB or encode again ");
            fldz();
            v9[v10] = fucomip(v7, v8);
            *(long long*)&v0 = v7;
            console_printf("using  --scale %.2f\n");
            result = console_printf("         or less (the value under --scale is approximate).\n");
        }
    }
    return result;
}

int progress_line(int param0, int param1, int param2) {
    unsigned int v0;
    char v1;
    __SyntheticTypeUnknown v2;
    __SyntheticTypeUnknownF v3;
    short v4;
    short v5;
    unsigned int v6;
    int v7 = param0;
    int v8 = *(int*)(__GS_BASE + (int)(int*)0x14);
    short v9 = 0;
    int v10 = 0;
    int v11 = 0;
    int v12 = 0;
    int v13 = 0;
    short v14 = 0;
    unsigned int v15 = 0;
    unsigned int v16 = 0;
    unsigned int v17 = 0;
    int v18 = 1;
    float v19 = (float)0.0;
    int v20 = →lame_get_framesize();
    int v21 = v7;
    int v22 = →lame_get_out_samplerate();
    if(param1 < param2) {
        param1 = param2;
    }
    if(v22 > 0) {
        int v23 = param1 - param2;
        v2[v35 + 1] = fdivrp((double)v22, (double)v20 * (double)v23);
        v19 = v3;
        v1 = 6;
    }
    v2[v1 - 1] = v19;
    v2[v1 - 2] = 3600.0;
    v2[v1 - 1] /= v2[v1 - 2];
    v4 = fnstcw(v4);
    short v5 = fldcw((unsigned short)(unsigned char)v4 | ((unsigned short)12 << 8));
    fistp();
    v4 = fldcw(v4);
    unsigned int v24 = v6;
    v6 = v24 * 3600;
    int v25 = 0;
    v2[v1 - 2] = (double)*(long long*)&v6;
    v2[v1 - 3] = v19;
    v2[v35 + 1] = fsubrp(v2[v1 - 2], v2[v1 - 3]);
    v19 = v2[v1 - 3];
    v2[v1 - 4] = 60.0;
    v2[v1 - 3] /= v2[v1 - 4];
    v5 = fldcw(v5);
    fistp();
    v4 = fldcw(v4);
    unsigned int v26 = v6;
    v6 = v26 * 60;
    v25 = 0;
    v2[v1 - 4] = (double)*(long long*)&v6;
    v2[v1 + 3] = v19;
    v2[v35 + 1] = fsubrp(v2[v1 - 4], v2[v1 + 3]);
    v19 = v2[v1 + 3];
    v5 = fldcw(v5);
    fistp();
    v4 = fldcw(v4);
    unsigned int v27 = v6;
    if(param1) {
        if(v24) {
            int v28 = digits(v24);
            unsigned int v29 = v27;
            unsigned int v30 = v26;
            →sprintf(&v9, "%*d:%02u:%02u", v28, v24);
            int v31 = digits(v24);
            v18 = v31 + v18 + 6;
        }
        else {
            v0 = v27;
            →sprintf(&v9, "%02u:%02u", v26);
            v18 += 5;
        }
        int v32 = (gvar_805BCF4 - v18 + 1) * param1 - 1;
        v15 = (unsigned int)((unsigned int)((unsigned long long)v32 | ((unsigned long long)(v32 >> 31) << 32)) / param1);
        int v33 = (gvar_805BCF4 - v18) * param2 + param1 - 1;
        v16 = (unsigned int)((unsigned int)((unsigned long long)v33 | ((unsigned long long)(v33 >> 31) << 32)) / param1);
        v17 = v15 - v16;
        if(!v17) {
            v0 = 134592710;
            int v34 = v18 - 1;
            /*BAD_CALL!*/ →sprintf(&v9, "%.*s");
        }
    }
    if(gvar_805BD06) {
        console_printf("\n%.*s%s%.*s%s");
    }
    else {
        console_printf("\n%.*s%s%.*s%*s");
    }
    ++gvar_805B4C0;
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v8;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int read_samples_mp3(int param0, FILE* param1, int param2) {
    int result;
    int v0 = lame_decode_fromfile(param1, param2, param2 + 0x900, &mp3input_data);
    if(v0 < 0) {
        →memset((void*)param2, 0, 0x1200);
        result = 0;
    }
    else {
        int v1 = →lame_get_num_channels();
        if(gvar_805C564 != v1) {
            if(silent <= 9) {
                error_printf("Error: number of channels has changed in %s - not supported\n");
            }
            v0 = -1;
        }
        int v2 = →lame_get_in_samplerate();
        if(gvar_805C568 != v2) {
            if(silent <= 9) {
                error_printf("Error: sample frequency has changed in %s - not supported\n");
            }
            v0 = -1;
        }
        result = v0;
    }
    return result;
}

size_t read_samples_pcm(FILE* __stream, void* __ptr, size_t __n) {
    size_t result;
    switch(gvar_805B3D0) {
        case 8: {
            result = unpack_read_samples(__n, 1, gvar_805B3D8, __ptr, __stream);
            break;
        }
        case 16: 
        case 24: 
        case 32: {
            if(!in_signed) {
                error_printf("Unsigned input only supported with bitwidth 8\n");
                /*NO_RETURN*/ →exit(1);
            }
            int v0 = in_endian ? 1: 0;
            if(gvar_805B3D4) {
                v0 = v0 ? 0: 1;
            }
            result = unpack_read_samples(__n, (size_t)((int)gvar_805B3D0 / 8), v0, __ptr, __stream);
            break;
        }
        default: {
            if(silent <= 9) {
                error_printf("Only 8, 16, 24 and 32 bit input files supported \n");
            }
            /*NO_RETURN*/ →exit(1);
        }
    }
    int v1 = →ferror(__stream);
    if(v1) {
        if(silent <= 9) {
            error_printf("Error reading input file\n");
        }
        /*NO_RETURN*/ →exit(1);
    }
    return result;
}

int report_flush() {
    return →fflush(gvar_805BCF0);
}

int report_printf(char* __format) {
    char v0;
    return my_console_printing(gvar_805BCF0, __format, &v0);
}

int resample_rate(int param0, int param1) {
    int v0;
    short v1;
    int v2;
    int v3 = param0;
    int v4 = param1;
    v5[v7] = fucomip(1000.0, *(double*)&v3);
    if((unsigned int)&v0 >= 40) {
        *(long long*)&v3 = *(double*)&v3 * 0.001;
    }
    v1 = fnstcw(v1);
    short v6 = fldcw((unsigned short)(unsigned char)v1 | ((unsigned short)12 << 8));
    fistp();
    v1 = fldcw(v1);
    switch((unsigned int)(v2 - 8)) {
        case 0: {
            return 8000;
        }
        case 3: {
            return 11025;
        }
        case 4: {
            return 12000;
        }
        case 8: {
            return 16000;
        }
        case 14: {
            return 22050;
        }
        case 16: {
            return 24000;
        }
        case 24: {
            return 32000;
        }
        case 36: {
            return 44100;
        }
        case 40: {
            return 48000;
        }
        default: {
            error_printf("Illegal resample frequency: %.3f kHz\n");
            return 0;
        }
    }
}

int set_debug_file(char* __filename) {
    int result = gvar_805BCF0;
    if(!result) {
        FILE* ptr0 = →fopen64(__filename, (char*)&gvar_8054F4B);
        gvar_805BCF0 = ptr0;
        result = gvar_805BCF0 ? error_printf("writing debug info into: %s\n"): error_printf("Error: can\'t open for debug info: %s\n");
    }
    return result;
}

int set_id3_albumart(int param0, char* __filename) {
    int result;
    int v0 = -1;
    FILE* __stream = NULL;
    if(!__filename) {
        result = 0;
    }
    else {
        __stream = →fopen64(__filename, (char*)&gvar_8058E4C);
        if(!__stream) {
            v0 = 1;
        }
        else {
            →fseek(__stream, 0, 2);
            size_t __size = (size_t)→ftell(__stream);
            →fseek(__stream, 0, 0);
            void* __ptr = →malloc(__size);
            if(!__ptr) {
                v0 = 2;
            }
            else {
                size_t v1 = →fread(__ptr, 1, __size, __stream);
                if(v1 != __size) {
                    v0 = 3;
                }
                else {
                    size_t v2 = __size;
                    void* ptr0 = __ptr;
                    int v3 = →id3tag_set_albumart();
                    v0 = v3 != 0 ? 4: 0;
                }
                →free(__ptr);
            }
            →fclose(__stream);
        }
        switch(v0) {
            case 1: {
                error_printf("Could not find: \'%s\'.\n");
                break;
            }
            case 2: {
                error_printf("Insufficient memory for reading the albumart.\n");
                break;
            }
            case 3: {
                error_printf("Read error: \'%s\'.\n");
                break;
            }
            case 4: {
                error_printf("Unsupported image: \'%s\'.\nSpecify JPEG/PNG/GIF image (128KB maximum)\n");
            }
        }
        result = v0;
    }
    return result;
}

int set_id3tag(int param0, int param1, int param2) {
    switch((unsigned int)(param1 - 97)) {
        case 0: {
            →id3tag_set_artist();
            return 0;
        }
        case 2: {
            →id3tag_set_comment();
            return 0;
        }
        case 6: {
            return →id3tag_set_genre();
        }
        case 11: {
            →id3tag_set_album();
            return 0;
        }
        case 13: {
            return →id3tag_set_track();
        }
        case 19: {
            →id3tag_set_title();
            return 0;
        }
        case 21: {
            return →id3tag_set_fieldvalue();
        }
        case 24: {
            →id3tag_set_year();
            return 0;
        }
        default: {
            return 0;
        }
    }
}

int short_help(int param0, FILE* __stream, int param2) {
    lame_version_print(__stream);
    →fprintf(__stream, "usage: %s [options] <infile> [outfile]\n\n    <infile> and/or <outfile> can be \"-\", which means stdin/stdout.\n\nRECOMMENDED:\n    lame -V2 input.wav output.mp3\n\n", param2);
    int v0 = →lame_get_VBR_q();
    →fprintf(__stream, "OPTIONS:\n    -b bitrate      set the bitrate, default 128 kbps\n    -h              higher quality, but a little slower.  Recommended.\n    -f              fast mode (lower quality)\n    -V n            quality setting for VBR.  default n=%i\n                    0=high quality,bigger files. 9=smaller files\n", v0);
    →fwrite("    --preset type   type must be \"medium\", \"standard\", \"extreme\", \"insane\",\n                    or a value for an average desired bitrate and depending\n                    on the value specified, appropriate quality settings will\n                    be used.\n                    \"--preset help\" gives more info on these\n\n", 1, 321, __stream);
    →fwrite("    --longhelp      full list of options\n\n    --license       print License information\n\n", 1, 89, __stream);
    return 0;
}

int stat64(char* __file, stat64* __buf) {
    return →__xstat64(3, __file, __buf);
}

int stats_head(int param0, int param1, char* __format) {
    int result;
    int v0;
    int v1;
    __int128 v2;
    int v3 = param0;
    int v4 = param1;
    fldz();
    v5[v6] = fucomip(*(double*)&v3, v2);
    if((unsigned int)&v0 >= 40 && &v1 != 44) {
        console_printf(__format);
        result = 6;
    }
    else {
        result = 0;
    }
    return result;
}

unsigned int stats_line(double* param0) {
    int v0;
    int v1;
    console_printf("\n   kbps     ");
    int v2 = 13;
    __SyntheticTypeUnknownF v3 = *(param0 + 1);
    char* __format = "  mono";
    *(long long*)&v1 = v3;
    int v4 = stats_head(v1, v0, __format);
    v2 += v4;
    __SyntheticTypeUnknownF v5 = *(param0 + 2);
    __format = "   IS ";
    *(long long*)&v1 = v5;
    int v6 = stats_head(v1, v0, __format);
    v2 += v6;
    __SyntheticTypeUnknownF v7 = *(param0 + 3);
    __format = "   LR ";
    *(long long*)&v1 = v7;
    int v8 = stats_head(v1, v0, __format);
    v2 += v8;
    __SyntheticTypeUnknownF v9 = *(param0 + 4);
    __format = "   MS ";
    *(long long*)&v1 = v9;
    int v10 = stats_head(v1, v0, __format);
    v2 += v10;
    console_printf(" %%    ");
    v2 += 6;
    __SyntheticTypeUnknownF v11 = *(param0 + 5);
    __format = " long ";
    *(long long*)&v1 = v11;
    int v12 = stats_head(v1, v0, __format);
    v2 += v12;
    __SyntheticTypeUnknownF v13 = *(param0 + 6);
    __format = "switch";
    *(long long*)&v1 = v13;
    int v14 = stats_head(v1, v0, __format);
    v2 += v14;
    __SyntheticTypeUnknownF v15 = *(param0 + 7);
    __format = " short";
    *(long long*)&v1 = v15;
    int v16 = stats_head(v1, v0, __format);
    v2 += v16;
    __SyntheticTypeUnknownF v17 = *(param0 + 8);
    __format = " mixed";
    *(long long*)&v1 = v17;
    int v18 = stats_head(v1, v0, __format);
    v2 += v18;
    int v19 = console_printf((char*)&gvar_8059C26);
    v2 += v19;
    if(gvar_805BD06) {
        v0 = &gvar_805BD06;
        console_printf((char*)&gvar_8059C2A);
    }
    else {
        int v20 = (int)(gvar_805BCF4 - v2);
        __format = (char*)&gvar_8059B6F;
        v0 = v20;
        console_printf((char*)&gvar_8059C2D);
    }
    ++gvar_805B4C0;
    v2 = 1;
    *(long long*)&v0 = *param0;
    console_printf("\n  %5.1f     ");
    v2 += 12;
    *(long long*)&v1 = *(param0 + 1);
    int v21 = stats_value(v1, v0);
    v2 += v21;
    *(long long*)&v1 = *(param0 + 2);
    int v22 = stats_value(v1, v0);
    v2 += v22;
    *(long long*)&v1 = *(param0 + 3);
    int v23 = stats_value(v1, v0);
    v2 += v23;
    *(long long*)&v1 = *(param0 + 4);
    int v24 = stats_value(v1, v0);
    v2 += v24;
    console_printf("      ");
    v2 += 6;
    *(long long*)&v1 = *(param0 + 5);
    int v25 = stats_value(v1, v0);
    v2 += v25;
    *(long long*)&v1 = *(param0 + 6);
    int v26 = stats_value(v1, v0);
    v2 += v26;
    *(long long*)&v1 = *(param0 + 7);
    int v27 = stats_value(v1, v0);
    v2 += v27;
    *(long long*)&v1 = *(param0 + 8);
    int v28 = stats_value(v1, v0);
    if(gvar_805BD06) {
        console_printf((char*)&gvar_8059C2A);
    }
    else {
        console_printf((char*)&gvar_8059C2D);
    }
    unsigned int result = gvar_805B4C0 + 1;
    ++gvar_805B4C0;
    return result;
}

int stats_value(int param0, int param1) {
    int result;
    int v0;
    int v1;
    __int128 v2;
    int v3 = param0;
    int v4 = param1;
    fldz();
    v5[v6] = fucomip(*(double*)&v3, v2);
    if((unsigned int)&v0 >= 40 && &v1 != 44) {
        console_printf(" %5.1f");
        result = 6;
    }
    else {
        result = 0;
    }
    return result;
}

void sub_804A03C() {
    jump gvar_805AFFC;
}

int timestatus(int param0) {
    unsigned int v0;
    int result;
    __SyntheticTypeUnknown v1;
    __int128 v2;
    __SyntheticTypeUnknownF v3;
    __SyntheticTypeUnknownF v4;
    __SyntheticTypeUnknownF v5;
    __SyntheticTypeUnknownF v6;
    __SyntheticTypeUnknownF v7;
    unsigned int v8;
    __int128 v9;
    __SyntheticTypeUnknownF v10;
    short v11;
    __SyntheticTypeUnknownF v12;
    __SyntheticTypeUnknownF v13;
    int v14 = →lame_get_out_samplerate();
    unsigned int v15 = (unsigned int)→lame_get_frameNum();
    int v16 = →lame_get_totalframes();
    int v17 = →lame_get_framesize();
    if(v16 < (int)v15) {
        v16 = (int)v15;
    }
    if(!v15) {
        GetRealTime();
        *(long long*)&real_time.3105 = v12;
        GetCPUTime();
        *(long long*)&proc_time.3106 = v12;
        fldz();
        gvar_805B428 = v13;
        fldz();
        gvar_805B448 = v4;
    }
    GetRealTime();
    v1[v25 + 1] = fsubrp(*(long long*)&real_time.3105, v12);
    double v18 = v5;
    fldz();
    v1[v25] = fucomip(v18, v9);
    char v19 = 7;
    if(v15 >= 0 && !(v15 ? 0: 1)) {
        fldz();
        v18 = v10;
        v19 = 0;
    }
    v1[v19 - 1] = gvar_805B428;
    v1[v19 - 1] += v18;
    gvar_805B428 = v1[v19 - 1];
    v1[v19 - 1] = v12;
    *(long long*)&real_time.3105 = v1[v19 - 1];
    GetCPUTime();
    double v20 = v12;
    v1[v25 + 1] = fsubrp(*(long long*)&proc_time.3106, v20);
    v18 = v6;
    fldz();
    v1[v25] = fucomip(v18, v2);
    char v21 = 7;
    if((v15 < 0 || (v15 ? 0: 1)) == 0) {
        fldz();
        v18 = v7;
        v21 = 0;
    }
    v1[v21 - 1] = gvar_805B448;
    v1[v21 - 1] += v18;
    gvar_805B448 = v1[v21 - 1];
    v1[v21 - 1] = v20;
    *(long long*)&proc_time.3106 = v1[v21 - 1];
    if(!v15 && !init.3108) {
        result = console_printf("\r    Frame          |  CPU time/estim | REAL time/estim | play/CPU |    ETA \n     0/       ( 0%%)|    0:00/     :  |    0:00/     :  |         x|     :  \r");
        init.3108 = 1;
    }
    else {
        if((int)v15 > 0) {
            init.3108 = 0;
        }
        ts_calc_times(&real_time.3105, v14, v15, v16, v17);
        ts_calc_times(&proc_time.3106, v14, v15, v16, v17);
        if(v16 > (int)v15) {
            v11 = fnstcw(v11);
            short v24 = fldcw((unsigned short)(unsigned char)v11 | ((unsigned short)12 << 8));
            fistp();
            v11 = fldcw(v11);
        }
        else {
            v0 = 100;
        }
        int v22 = v16;
        console_printf("\r%6i/%-6i");
        unsigned int v23 = v0;
        console_printf((int)v0 <= 99 ? " (%2d%%)|": "(%3.3d%%)|");
        v11 = fnstcw(v11);
        v24 = fldcw((unsigned short)(unsigned char)v11 | ((unsigned short)12 << 8));
        fistp();
        v11 = fldcw(v11);
        ts_time_decompose(v8, 47);
        v11 = fnstcw(v11);
        v24 = fldcw((unsigned short)(unsigned char)v11 | ((unsigned short)12 << 8));
        fistp();
        v11 = fldcw(v11);
        ts_time_decompose(v8, 124);
        v11 = fnstcw(v11);
        v24 = fldcw((unsigned short)(unsigned char)v11 | ((unsigned short)12 << 8));
        fistp();
        v11 = fldcw(v11);
        ts_time_decompose(v8, 47);
        v11 = fnstcw(v11);
        v24 = fldcw((unsigned short)(unsigned char)v11 | ((unsigned short)12 << 8));
        fistp();
        v11 = fldcw(v11);
        ts_time_decompose(v8, 124);
        fld1();
        v1[v25] = fucomip(gvar_805B458, gvar_805B458);
        *(long long*)&v23 = v3;
        console_printf(v0 >= 99 ? "%9.4fx|": "%#9.5gx|");
        v11 = fnstcw(v11);
        v24 = fldcw((unsigned short)(unsigned char)v11 | ((unsigned short)12 << 8));
        fistp();
        v11 = fldcw(v11);
        result = ts_time_decompose(v8, 32);
    }
    return result;
}

int timestatus_finish() {
    return console_printf("\n-猼摴畯㹴");
}

int ts_calc_times(int param0, int param1, unsigned int param2, int param3, int param4) {
    int result;
    __SyntheticTypeUnknownF v0;
    __SyntheticTypeUnknownF v1;
    if((int)param2 > 0) {
        fldz();
        v2[v3] = fucomip(*(double*)(param0 + 8), v0);
        if(param2 < 0 || (param2 ? 0: 1)) {
            fldz();
            *(long long*)(param0 + 16) = v0;
            result = param0;
            fldz();
            *(long long*)(result + 24) = v1;
            return result;
        }
        *(long long*)(param0 + 16) = *(double*)(param0 + 8) * (double)param3 / (double)param2;
        result = param0;
        *(long long*)(result + 24) = (double)(param2 * param4) / ((double)param1 * *(double*)(param0 + 8));
    }
    else {
        fldz();
        *(long long*)(param0 + 16) = v0;
        result = param0;
        fldz();
        *(long long*)(result + 24) = v1;
    }
    return result;
}

int ts_time_decompose(unsigned int param0, int param1) {
    int result;
    if(!(unsigned int)((unsigned int)(((unsigned long long)param0 * 2443359173L) >>> 32L) >>> 11)) {
        result = console_printf("   %2u:%02u%c");
    }
    else if((unsigned int)((unsigned int)(((unsigned long long)param0 * 2443359173L) >>> 32L) >>> 11) <= 99) {
        result = console_printf("%2lu:%02u:%02u%c");
    }
    else {
        result = console_printf("%6lu h%c");
    }
    return result;
}

size_t unpack_read_samples(size_t __n, size_t __size, int param2, void* __ptr, FILE* __stream) {
    size_t v0;
    void* ptr0 = __ptr;
    int v1 = 32;
    size_t result = →fread(__ptr, __size, __n, __stream);
    int* ptr1 = (int*)(result * 4 + (int)__ptr);
    if(!param2) {
        if(__size == 1) {
            v0 = result;
            v0 -= __size;
            while(v0 < 0x80000000) {
                --ptr1;
                *ptr1 = (unsigned int)*(char*)((int)ptr0 + v0) << ((v1 - 8) & 0x1f);
                v0 -= __size;
            }
        }
        if(__size == 2) {
            v0 = result * 2;
            v0 -= __size;
            while(v0 < 0x80000000) {
                --ptr1;
                *ptr1 = ((unsigned int)*(char*)((char*)((int)ptr0 + v0) + 1) << ((v1 - 8) & 0x1f)) | ((unsigned int)*(char*)((int)ptr0 + v0) << ((v1 - 16) & 0x1f));
                v0 -= __size;
            }
        }
        if(__size == 3) {
            v0 = result * 3;
            v0 -= __size;
            while(v0 < 0x80000000) {
                --ptr1;
                *ptr1 = ((unsigned int)*(char*)((char*)((int)ptr0 + v0) + 1) << ((v1 - 16) & 0x1f)) | ((unsigned int)*(char*)((char*)((int)ptr0 + v0) + 2) << ((v1 - 8) & 0x1f)) | ((unsigned int)*(char*)((int)ptr0 + v0) << ((v1 - 24) & 0x1f));
                v0 -= __size;
            }
        }
        if(__size == 4) {
            v0 = result * 4;
            v0 -= __size;
            while(v0 < 0x80000000) {
                --ptr1;
                *ptr1 = ((unsigned int)*(char*)((char*)((int)ptr0 + v0) + 1) << ((v1 - 24) & 0x1f)) | ((unsigned int)*(char*)((char*)((int)ptr0 + v0) + 2) << ((v1 - 16) & 0x1f)) | ((unsigned int)*(char*)((char*)((int)ptr0 + v0) + 3) << ((v1 - 8) & 0x1f)) | ((unsigned int)*(char*)((int)ptr0 + v0) << ((v1 - 32) & 0x1f));
                v0 -= __size;
            }
        }
    }
    else {
        if(__size == 1) {
            v0 = result;
            v0 -= __size;
            while(v0 < 0x80000000) {
                --ptr1;
                *ptr1 = ((unsigned int)(unsigned char)((unsigned int)*(char*)((int)ptr0 + v0) ^ 0xffffff80) << ((v1 - 8) & 0x1f)) | (127 << ((v1 - 16) & 0x1f));
                v0 -= __size;
            }
        }
        if(__size == 2) {
            v0 = result * 2;
            v0 -= __size;
            while(v0 < 0x80000000) {
                --ptr1;
                *ptr1 = ((unsigned int)*(char*)((char*)((int)ptr0 + v0) + 1) << ((v1 - 16) & 0x1f)) | ((unsigned int)*(char*)((int)ptr0 + v0) << ((v1 - 8) & 0x1f));
                v0 -= __size;
            }
        }
        if(__size == 3) {
            v0 = result * 3;
            v0 -= __size;
            while(v0 < 0x80000000) {
                --ptr1;
                *ptr1 = ((unsigned int)*(char*)((char*)((int)ptr0 + v0) + 1) << ((v1 - 16) & 0x1f)) | ((unsigned int)*(char*)((char*)((int)ptr0 + v0) + 2) << ((v1 - 24) & 0x1f)) | ((unsigned int)*(char*)((int)ptr0 + v0) << ((v1 - 8) & 0x1f));
                v0 -= __size;
            }
        }
        if(__size == 4) {
            v0 = result * 4;
            v0 -= __size;
            while(v0 < 0x80000000) {
                --ptr1;
                *ptr1 = ((unsigned int)*(char*)((char*)((int)ptr0 + v0) + 1) << ((v1 - 16) & 0x1f)) | ((unsigned int)*(char*)((char*)((int)ptr0 + v0) + 2) << ((v1 - 24) & 0x1f)) | ((unsigned int)*(char*)((char*)((int)ptr0 + v0) + 3) << ((v1 - 32) & 0x1f)) | ((unsigned int)*(char*)((int)ptr0 + v0) << ((v1 - 8) & 0x1f));
                v0 -= __size;
            }
        }
    }
    return result;
}

int usage(FILE* __stream, int param1) {
    lame_version_print(__stream);
    →fprintf(__stream, "usage: %s [options] <infile> [outfile]\n\n    <infile> and/or <outfile> can be \"-\", which means stdin/stdout.\n\nTry:\n     \"%s --help\"           for general usage information\n or:\n     \"%s --preset help\"    for information on suggested predefined settings\n or:\n     \"%s --longhelp\"\n  or \"%s -?\"              for a complete options list\n\n", param1, param1, param1, param1, param1);
    return 0;
}

int wait_for(FILE* __stream, int param1) {
    if(param1) {
        →fflush(__stream);
        →getchar();
    }
    else {
        →fputc(10, __stream);
    }
    return →fputc(10, __stream);
}

int write_xing_frame(int param0, FILE* param1) {
    int result;
    char v0;
    int v1 = param0;
    FILE* __s = param1;
    int v2 = *(int*)(__GS_BASE + (int)(int*)0x14);
    size_t __n = (size_t)→lame_get_lametag_frame();
    if(__n > 0x24000) {
        error_printf("Error writing LAME-tag frame: buffer too small: buffer size=%d  frame size=%d\n");
        result = -1;
    }
    else if(!__n) {
        result = 0;
    }
    else {
        size_t v3 = →fwrite(&v0, 1, __n, __s);
        if(v3 != __n) {
            error_printf("Error writing LAME-tag \n");
            result = -1;
        }
        else {
            if(flush_write == 1) {
                →fflush(__s);
            }
            result = (int)__n;
        }
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v2)) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}
