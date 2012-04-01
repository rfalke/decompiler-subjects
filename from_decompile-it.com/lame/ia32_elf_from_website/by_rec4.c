_init()
{// addr = 0x0804A00C
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t2;

    __esp = __esp - 4;
    L1();
    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 69596 + -4)) != 0) {
        __gmon_start__();
    }
    L0804AB60();
    L08054810();
    _pop(__eax);
    return;
}

L0804A018()
{
    _unknown_ _t2;

    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 69596 + -4)) != 0) {
        __gmon_start__();
    }
    L0804AB60();
    L08054810();
    _pop(__eax);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

int fileno(struct _IO_FILE* fp)
{// addr = 0x0804A04C
    goto __imp__fileno;
}

ldexp()
{// addr = 0x0804A05C
    goto __imp__ldexp;
}

lame_get_in_samplerate()
{// addr = 0x0804A06C
    goto __imp__lame_get_in_samplerate;
}

int fputs(char* str, struct _IO_FILE* fp)
{// addr = 0x0804A07C
    goto __imp__fputs;
}

get_lame_version()
{// addr = 0x0804A08C
    goto __imp__get_lame_version;
}

int sprintf(char* dst, char* format)
{// addr = 0x0804A09C
    goto __imp__sprintf;
}

struct _IO_FILE* popen(char* name, char* mode)
{// addr = 0x0804A0AC
    goto __imp__popen;
}

lame_set_num_channels()
{// addr = 0x0804A0BC
    goto __imp__lame_set_num_channels;
}

id3tag_v1_only()
{// addr = 0x0804A0CC
    goto __imp__id3tag_v1_only;
}

id3tag_v2_only()
{// addr = 0x0804A0DC
    goto __imp__id3tag_v2_only;
}

id3tag_set_albumart()
{// addr = 0x0804A0EC
    goto __imp__id3tag_set_albumart;
}

memcmp()
{// addr = 0x0804A0FC
    goto __imp__memcmp;
}

lame_stereo_mode_hist()
{// addr = 0x0804A10C
    goto __imp__lame_stereo_mode_hist;
}

lame_get_RadioGain()
{// addr = 0x0804A11C
    goto __imp__lame_get_RadioGain;
}

lame_set_scale_right()
{// addr = 0x0804A12C
    goto __imp__lame_set_scale_right;
}

int getchar()
{// addr = 0x0804A13C
    goto __imp__getchar;
}

lame_set_decode_only()
{// addr = 0x0804A14C
    goto __imp__lame_set_decode_only;
}

lame_bitrate_hist()
{// addr = 0x0804A15C
    goto __imp__lame_bitrate_hist;
}

lame_get_noclipGainChange()
{// addr = 0x0804A16C
    goto __imp__lame_get_noclipGainChange;
}

id3tag_init()
{// addr = 0x0804A17C
    goto __imp__id3tag_init;
}

__gmon_start__()
{// addr = 0x0804A18C
    goto __imp____gmon_start__;
}

__xstat64()
{// addr = 0x0804A1AC
    goto __imp____xstat64;
}

lame_get_id3v2_tag()
{// addr = 0x0804A1BC
    goto __imp__lame_get_id3v2_tag;
}

get_lame_os_bitness()
{// addr = 0x0804A1CC
    goto __imp__get_lame_os_bitness;
}

char* getenv(char* __name)
{// addr = 0x0804A1DC
    goto __imp__getenv;
}

char* strncpy(char* __dest, char* __src, int __n)
{// addr = 0x0804A1EC
    goto __imp__strncpy;
}

lame_get_num_samples()
{// addr = 0x0804A20C
    goto __imp__lame_get_num_samples;
}

lame_set_debugf()
{// addr = 0x0804A21C
    goto __imp__lame_set_debugf;
}

lame_get_noclipScale()
{// addr = 0x0804A22C
    goto __imp__lame_get_noclipScale;
}

lame_get_compression_ratio()
{// addr = 0x0804A23C
    goto __imp__lame_get_compression_ratio;
}

lame_get_VBR_max_bitrate_kbps()
{// addr = 0x0804A24C
    goto __imp__lame_get_VBR_max_bitrate_kbps;
}

void* memset(void* __s, int __c, int __n)
{// addr = 0x0804A25C
    goto __imp__memset;
}

fopen64()
{// addr = 0x0804A26C
    goto __imp__fopen64;
}

lame_encode_buffer_int()
{// addr = 0x0804A27C
    goto __imp__lame_encode_buffer_int;
}

lame_get_VBR_min_bitrate_kbps()
{// addr = 0x0804A28C
    goto __imp__lame_get_VBR_min_bitrate_kbps;
}

get_lame_url()
{// addr = 0x0804A29C
    goto __imp__get_lame_url;
}

lame_set_write_id3tag_automatic()
{// addr = 0x0804A2AC
    goto __imp__lame_set_write_id3tag_automatic;
}

__libc_start_main()
{// addr = 0x0804A2BC
    goto __imp____libc_start_main;
}

lame_set_decode_on_the_fly()
{// addr = 0x0804A2DC
    goto __imp__lame_set_decode_on_the_fly;
}

_IO_getc()
{// addr = 0x0804A2EC
    goto __imp___IO_getc;
}

lame_get_decode_only()
{// addr = 0x0804A30C
    goto __imp__lame_get_decode_only;
}

lame_get_lametag_frame()
{// addr = 0x0804A31C
    goto __imp__lame_get_lametag_frame;
}

lame_set_strict_ISO()
{// addr = 0x0804A32C
    goto __imp__lame_set_strict_ISO;
}

lame_set_useTemporal()
{// addr = 0x0804A33C
    goto __imp__lame_set_useTemporal;
}

lame_set_compression_ratio()
{// addr = 0x0804A35C
    goto __imp__lame_set_compression_ratio;
}

gettimeofday()
{// addr = 0x0804A36C
    goto __imp__gettimeofday;
}

void free(void* __ptr)
{// addr = 0x0804A37C
    goto __imp__free;
}

lame_set_disable_reservoir()
{// addr = 0x0804A39C
    goto __imp__lame_set_disable_reservoir;
}

hip_decode1_headers()
{// addr = 0x0804A3AC
    goto __imp__hip_decode1_headers;
}

lame_close()
{// addr = 0x0804A3BC
    goto __imp__lame_close;
}

lame_set_nogap_total()
{// addr = 0x0804A3CC
    goto __imp__lame_set_nogap_total;
}

tgetent()
{// addr = 0x0804A3DC
    goto __imp__tgetent;
}

int fflush(struct _IO_FILE* fp)
{// addr = 0x0804A3EC
    goto __imp__fflush;
}

int fseek(struct _IO_FILE* fp, long offset, int whence)
{// addr = 0x0804A40C
    goto __imp__fseek;
}

lame_set_free_format()
{// addr = 0x0804A42C
    goto __imp__lame_set_free_format;
}

int fclose(struct _IO_FILE* fp)
{// addr = 0x0804A43C
    goto __imp__fclose;
}

lame_set_errorf()
{// addr = 0x0804A44C
    goto __imp__lame_set_errorf;
}

lame_init_bitstream()
{// addr = 0x0804A45C
    goto __imp__lame_init_bitstream;
}

lame_set_exp_nspsytune()
{// addr = 0x0804A46C
    goto __imp__lame_set_exp_nspsytune;
}

clock()
{// addr = 0x0804A47C
    goto __imp__clock;
}

void* memcpy(void* __dest, void* __src, int __n)
{// addr = 0x0804A48C
    goto __imp__memcpy;
}

lame_get_decode_on_the_fly()
{// addr = 0x0804A49C
    goto __imp__lame_get_decode_on_the_fly;
}

int strlen(char* __s)
{// addr = 0x0804A4AC
    goto __imp__strlen;
}

lame_set_VBR()
{// addr = 0x0804A4BC
    goto __imp__lame_set_VBR;
}

lame_print_config()
{// addr = 0x0804A4CC
    goto __imp__lame_print_config;
}

lame_get_bWriteVbrTag()
{// addr = 0x0804A4DC
    goto __imp__lame_get_bWriteVbrTag;
}

lame_bitrate_stereo_mode_hist()
{// addr = 0x0804A4EC
    goto __imp__lame_bitrate_stereo_mode_hist;
}

lame_set_nogap_currentindex()
{// addr = 0x0804A4FC
    goto __imp__lame_set_nogap_currentindex;
}

lame_set_msfix()
{// addr = 0x0804A50C
    goto __imp__lame_set_msfix;
}

lame_get_VBR()
{// addr = 0x0804A51C
    goto __imp__lame_get_VBR;
}

lame_set_athaa_sensitivity()
{// addr = 0x0804A52C
    goto __imp__lame_set_athaa_sensitivity;
}

int feof(struct _IO_FILE* fp)
{// addr = 0x0804A53C
    goto __imp__feof;
}

char* strcpy(char* __dest, char* __src)
{// addr = 0x0804A54C
    goto __imp__strcpy;
}

long ftell(struct _IO_FILE* fp)
{// addr = 0x0804A55C
    goto __imp__ftell;
}

lame_set_out_samplerate()
{// addr = 0x0804A56C
    goto __imp__lame_set_out_samplerate;
}

lame_set_asm_optimizations()
{// addr = 0x0804A57C
    goto __imp__lame_set_asm_optimizations;
}

lame_get_quality()
{// addr = 0x0804A58C
    goto __imp__lame_get_quality;
}

lame_block_type_hist()
{// addr = 0x0804A5AC
    goto __imp__lame_block_type_hist;
}

int atoi(char* __nptr)
{// addr = 0x0804A5CC
    goto __imp__atoi;
}

lame_bitrate_kbps()
{// addr = 0x0804A5DC
    goto __imp__lame_bitrate_kbps;
}

lame_set_findReplayGain()
{// addr = 0x0804A5EC
    goto __imp__lame_set_findReplayGain;
}

lame_get_framesize()
{// addr = 0x0804A5FC
    goto __imp__lame_get_framesize;
}

double atof(char* __nptr)
{// addr = 0x0804A60C
    goto __imp__atof;
}

lame_encode_flush()
{// addr = 0x0804A62C
    goto __imp__lame_encode_flush;
}

lame_set_highpassfreq()
{// addr = 0x0804A63C
    goto __imp__lame_set_highpassfreq;
}

int fwrite(void* src, int sz, int nitems, struct _IO_FILE* fp)
{// addr = 0x0804A64C
    goto __imp__fwrite;
}

int fprintf(struct _IO_FILE* fp, char* format)
{// addr = 0x0804A65C
    goto __imp__fprintf;
}

lame_set_VBR_mean_bitrate_kbps()
{// addr = 0x0804A66C
    goto __imp__lame_set_VBR_mean_bitrate_kbps;
}

int setvbuf(struct _IO_FILE* fp, char* bufptr, int mode, int size)
{// addr = 0x0804A68C
    goto __imp__setvbuf;
}

char* strncat(char* __dest, char* __src, int __n)
{// addr = 0x0804A69C
    goto __imp__strncat;
}

lame_get_mode()
{// addr = 0x0804A6AC
    goto __imp__lame_get_mode;
}

lame_set_msgf()
{// addr = 0x0804A6BC
    goto __imp__lame_set_msgf;
}

void* malloc(int __size)
{// addr = 0x0804A6EC
    goto __imp__malloc;
}

lame_get_totalframes()
{// addr = 0x0804A6FC
    goto __imp__lame_get_totalframes;
}

__stack_chk_fail()
{// addr = 0x0804A70C
    goto __imp____stack_chk_fail;
}

id3tag_set_pad()
{// addr = 0x0804A71C
    goto __imp__id3tag_set_pad;
}

lame_encode_flush_nogap()
{// addr = 0x0804A72C
    goto __imp__lame_encode_flush_nogap;
}

int fputc(int ch, struct _IO_FILE* fp)
{// addr = 0x0804A73C
    goto __imp__fputc;
}

lame_get_num_channels()
{// addr = 0x0804A75C
    goto __imp__lame_get_num_channels;
}

hip_decode_init()
{// addr = 0x0804A76C
    goto __imp__hip_decode_init;
}

id3tag_pad_v2()
{// addr = 0x0804A78C
    goto __imp__id3tag_pad_v2;
}

tgetnum()
{// addr = 0x0804A79C
    goto __imp__tgetnum;
}

lame_get_version()
{// addr = 0x0804A7AC
    goto __imp__lame_get_version;
}

id3tag_add_v2()
{// addr = 0x0804A7BC
    goto __imp__id3tag_add_v2;
}

lame_init_params()
{// addr = 0x0804A7CC
    goto __imp__lame_init_params;
}

lame_set_bWriteVbrTag()
{// addr = 0x0804A7DC
    goto __imp__lame_set_bWriteVbrTag;
}

char* strcat(char* __dest, char* __src)
{// addr = 0x0804A7EC
    goto __imp__strcat;
}

lame_get_id3v1_tag()
{// addr = 0x0804A7FC
    goto __imp__lame_get_id3v1_tag;
}

id3tag_genre_list()
{// addr = 0x0804A80C
    goto __imp__id3tag_genre_list;
}

lame_get_exp_nspsytune()
{// addr = 0x0804A81C
    goto __imp__lame_get_exp_nspsytune;
}

__fxstat64()
{// addr = 0x0804A83C
    goto __imp____fxstat64;
}

lame_get_frameNum()
{// addr = 0x0804A84C
    goto __imp__lame_get_frameNum;
}

lame_set_interChRatio()
{// addr = 0x0804A85C
    goto __imp__lame_set_interChRatio;
}

lame_set_num_samples()
{// addr = 0x0804A87C
    goto __imp__lame_set_num_samples;
}

lame_set_preset()
{// addr = 0x0804A88C
    goto __imp__lame_set_preset;
}

lame_get_free_format()
{// addr = 0x0804A89C
    goto __imp__lame_get_free_format;
}

lame_set_mode()
{// addr = 0x0804A8BC
    goto __imp__lame_set_mode;
}

hip_decode_exit()
{// addr = 0x0804A8CC
    goto __imp__hip_decode_exit;
}

lame_print_internals()
{// addr = 0x0804A8DC
    goto __imp__lame_print_internals;
}

int vfprintf(struct _IO_FILE* fp, char* fmt0, _G_va_list vals)
{// addr = 0x0804A8EC
    goto __imp__vfprintf;
}

_IO_putc()
{// addr = 0x0804A90C
    goto __imp___IO_putc;
}

lame_get_VBR_quality()
{// addr = 0x0804A91C
    goto __imp__lame_get_VBR_quality;
}

lame_get_findReplayGain()
{// addr = 0x0804A92C
    goto __imp__lame_get_findReplayGain;
}

lame_set_in_samplerate()
{// addr = 0x0804A93C
    goto __imp__lame_set_in_samplerate;
}

int fread(_G_va_list dst, int sz, int nitems, struct _IO_FILE* fp)
{// addr = 0x0804A94C
    goto __imp__fread;
}

lame_get_out_samplerate()
{// addr = 0x0804A95C
    goto __imp__lame_get_out_samplerate;
}

lame_set_VBR_q()
{// addr = 0x0804A96C
    goto __imp__lame_set_VBR_q;
}

tgetstr()
{// addr = 0x0804A97C
    goto __imp__tgetstr;
}

lame_get_force_ms()
{// addr = 0x0804A98C
    goto __imp__lame_get_force_ms;
}

lame_set_lowpassfreq()
{// addr = 0x0804A99C
    goto __imp__lame_set_lowpassfreq;
}

lame_set_scale_left()
{// addr = 0x0804A9AC
    goto __imp__lame_set_scale_left;
}

lame_get_brate()
{// addr = 0x0804A9BC
    goto __imp__lame_get_brate;
}

lame_init()
{// addr = 0x0804A9CC
    goto __imp__lame_init;
}

lame_set_highpasswidth()
{// addr = 0x0804A9DC
    goto __imp__lame_set_highpasswidth;
}

char* strdup(char* __s)
{// addr = 0x0804A9EC
    goto __imp__strdup;
}

lame_set_scale()
{// addr = 0x0804AA0C
    goto __imp__lame_set_scale;
}

int ferror(struct _IO_FILE* fp)
{// addr = 0x0804AA1C
    goto __imp__ferror;
}

hip_decode1_headersB()
{// addr = 0x0804AA2C
    goto __imp__hip_decode1_headersB;
}

tolower()
{// addr = 0x0804AA3C
    goto __imp__tolower;
}

lame_set_lowpasswidth()
{// addr = 0x0804AA5C
    goto __imp__lame_set_lowpasswidth;
}

int strcmp(char* __s1, char* __s2)
{// addr = 0x0804AA6C
    goto __imp__strcmp;
}

void exit(int __status)
{// addr = 0x0804AA7C
    goto __imp__exit;
}

id3tag_space_v1()
{// addr = 0x0804AA8C
    goto __imp__id3tag_space_v1;
}

lame_get_VBR_q()
{// addr = 0x0804AA9C
    goto __imp__lame_get_VBR_q;
}

int pclose(struct _IO_FILE* fp)
{// addr = 0x0804AAAC
    goto __imp__pclose;
}

lame_get_VBR_mean_bitrate_kbps()
{// addr = 0x0804AABC
    goto __imp__lame_get_VBR_mean_bitrate_kbps;
}

L0804AB00(_unknown_ __esi)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t4;
    signed int _t5;
    signed int _t6;
    _unknown_ _t7;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;

    if( *134591428 != 0) {
        return ;
    }
    _t5 =  *134591432;
    _t10 = (4 >> 2) - 1;
    if(_t5 >= _t10) {
L4:
         *134591428 = 1;
        return;
    } else {
        while(1) {
L3:
            _t6 = _t5 + 1;
             *134591432 = _t6;
             *((intOrPtr*)(134590212 + _t6 * 4))();
            _t5 =  *134591432;
            if(_t5 >= _t10) {
                break;
            }
        }
        goto L4;
    }
    return;
}

L0804AB60()
{
    _unknown_ __ebp;

    __eax =  *134590220;
    if( *134590220 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
     *__esp = 134590220;
     *__eax();
    return;
}

int parse_args_from_string(const lame_global_flags* gfp, const char* p, char* inPath, char* outPath)
{// addr = 0x0804AB84
    char* q;
    char* f;
    char*[127] r;
    int c;
    int ret;
    char* _v16;
    char* _v20;
    signed int _v24;
    _unknown_ _v28;
    _unknown_ _v540;
    _unknown_ _v548;
    _unknown_ _v552;
    _unknown_ _v556;
    _unknown_ _v560;
    _unknown_ _v564;
    _unknown_ _v568;
    _unknown_ __ebp;
    _unknown_ _t54;
    _unknown_ _t64;
    _unknown_ _t80;

    _v24 = 0;
    if(p == 0) {
        return 0;
    }
    if(( *p & 255 & 4294967295) == 0) {
        return 0;
    }
    _v16 = malloc(strlen(p) + 1);
    _v20 = _v16;
    strcpy(_v16, p);
     *(__ebp + -536 + _v24 * 4) = 134563936;
    _v24 = _v24 + 1;
    while(1) {
         *(__ebp + -536 + _v24 * 4) = _v16;
        _v24 = _v24 + 1;
        goto L6;
    }
}

FILE* init_files(lame_global_flags* gf, char* inPath, char* outPath, int* enc_delay, int* enc_padding)
{// addr = 0x0804AC92
    FILE* outf;
    FILE* _v16;
    _unknown_ _v32;
    _unknown_ _v36;
    char* _v40;
    _unknown_ __ebp;
    int _t27;
    _unknown_ _t32;
    _unknown_ _t33;
    _unknown_ _t37;
    _unknown_ _t38;

    if(strcmp(134563942, outPath) == 0 || strcmp(inPath, outPath) != 0) {
        init_infile(gf, inPath, enc_delay, enc_padding);
        _t27 = gf;
         *__esp = _t27;
        lame_get_decode_only();
        _v16 = init_outfile(outPath, _t27);
        if(_v16 != 0) {
            return _v16;
        }
        _v40 = outPath;
        error_printf("Can't init outfile '%s'\n");
        return 0;
    }
    error_printf("Input file and Output file are the same. Abort.\n");
    return 0;
}

int lame_decoder(lame_global_flags* gfp, FILE* outf, int skip_start, char* inPath, char* outPath, int* enc_delay, int* enc_padding)
{// addr = 0x0804AD3A
    short int[1][1151] Buffer;
    int iread;
    int skip_end;
    double wavsize;
    int i;
    _None* WriteFunction;
    int tmp_num_channels;
    signed int _v16;
    int _v20;
    signed int _v24;
    intOrPtr* _v28;
    int _v32;
    char _v4652;
    signed short _v4654;
    signed int _v4656;
    signed int _v4660;
    int _v4664;
    signed int _v4668;
    signed int _v4688;
    char* _v4708;
    int _v4712;
    _unknown_ _v4716;
    _unknown_ _v4720;
    int _v4724;
    int _v4728;
    _unknown_ __ebx;
    char* __esi;
    _unknown_ __ebp;
    lame_global_flags* _t148;
    lame_global_flags* _t152;
    intOrPtr* _t159;
    signed int _t166;
    _unknown_ _t167;
    signed int _t168;
    _unknown_ _t172;
    char* _t173;
    FILE* _t174;
    int _t175;
    int _t186;
    _unknown_ _t212;
    int _t214;
    _unknown_ _t216;
    char* _t221;
    _unknown_ _t222;
    _unknown_ _t224;
    _unknown_ _t226;
    _unknown_ _t227;
    _unknown_ _t228;
    lame_global_flags* _t229;
    char* _t234;
    _unknown_ _t235;
    char* _t236;
    char* _t237;
    _unknown_ _t243;
    _unknown_ _t244;
    _unknown_ _t246;
    _unknown_ _t247;
    _unknown_ _t249;
    _unknown_ _t250;
    _unknown_ _t251;

    _v20 = 0;
    _t148 = gfp;
     *__esp = _t148;
    lame_get_num_channels();
    _v32 = _t148;
    if(silent <= 9) {
        if(_v32 == 1) {
            __esi = 134564020;
        } else {
            __esi = "s";
        }
        _t229 = gfp;
         *__esp = _t229;
        lame_get_in_samplerate();
        _v4660 = _t229;
        asm("fild dword [ebp+0xffffedd0]");
        asm("fld qword [0x8054f08]");
        asm("fdivp st1, st0");
        asm("fstp qword [ebp+0xffffedc0]");
        if(strlen(inPath) <= 26) {
            _t237 = "  ";
        } else {
            _t237 = "\n\t";
        }
        if(strcmp(inPath, 134563942) == 0) {
            _t234 = "<stdin>";
        } else {
            _t234 = inPath;
        }
        _v4708 = __esi;
        _v4712 = _v32;
        asm("fld qword [ebp+0xffffedc0]");
        asm("fstp qword [esp+0xc]");
        _v4724 = _t237;
        _v4728 = _t234;
        console_printf("input:  %s%s(%g kHz, %i channel%s, ");
    }
    if(input_format <= 7) {
        goto __eax;
    }
    if(silent <= 9) {
        console_printf("unknown");
    }
    _t152 = gfp;
     *__esp = _t152;
    lame_get_num_samples();
     *134595964 = _t152;
     *134595960 = 1152;
    skip_start = 0;
    if(silent <= 9) {
        if(strlen(outPath) <= 45) {
            _t236 = "  ";
        } else {
            _t236 = "\n\t";
        }
        if(strcmp(outPath, 134563942) == 0) {
            _t221 = "<stdout>";
        } else {
            _t221 = outPath;
        }
        _v4724 = _t236;
        _v4728 = _t221;
        console_printf(")\noutput: %s%s(16 bit, Microsoft WAVE)\n");
        if(skip_start > 0) {
            _v4728 = skip_start;
            console_printf("skipping initial %i samples (encoder+decoder delay)\n");
        }
        if(_v20 > 0) {
            _v4728 = _v20;
            console_printf("skipping final %i samples (encoder padding-decoder delay)\n");
        }
    }
    if(disable_wav_header == 0) {
        _t214 = gfp;
         *__esp = _t214;
        lame_get_in_samplerate();
        WriteWaveHeader(outf, 2147483647, _t214, _v32, 16);
    }
    _v4660 =  ~(skip_start + _v20);
    asm("fild dword [ebp+0xffffedd0]");
    asm("fstp qword [ebp-0x28]");
    if(swapbytes == 0) {
        _t159 = WriteBytes;
    } else {
        _t159 = WriteBytesSwapped;
    }
    _v28 = _t159;
    _v4688 =  *134595960;
     *134595968 =  *134595964 / _v4688;
    goto L33;
    do {
L33:
        _v16 = get_audio16(gfp,  &_v4652);
        if(_v16 >= 0) {
            goto L51;
        }
        _v4688 =  *134595960;
         *134595972 =  *134595972 + _v16 / _v4688;
        asm("fild dword [ebp-0xc]");
        asm("fld qword [ebp-0x28]");
        asm("faddp st1, st0");
        asm("fstp qword [ebp-0x28]");
        if(silent <= 0) {
            decoder_progress( &mp3input_data);
            console_flush();
        }
        _t186 = skip_start;
        _t187 = _v16 - _t186 <= 0 ? _v16 : _t186;
        _v24 = _v16 - _t186 <= 0 ? _v16 : _t186;
        skip_start = skip_start - _v24;
        if(_v20 <= 1152 ||  *134595972 + 2 <=  *134595968) {
            if( *134595972 ==  *134595968 && _v16 != 0) {
                _v16 = _v16 - _v20;
            }
        } else {
            _v16 = _v16 + 1152 - _v20;
            _v20 = 1152;
        }
        while(_v24 < _v16) {
            if(disable_wav_header == 0) {
                asm("cwde ");
                Write16BitsLowHigh(outf,  *(__ebp + -4648 + _v24 * 2) & 65535);
                if(_v32 == 2) {
                    asm("cwde ");
                    Write16BitsLowHigh(outf,  *(__ebp + -4648 + (_v24 + 1152) * 2) & 65535);
                }
            } else {
                _v4724 = 2;
                _v4728 =  &(( &_v4652)[_v24 + _v24]);
                 *__esp = outf;
                 *_v28();
                if(_v32 == 2) {
                    _v4724 = 2;
                    _v4728 =  &_v4652 + _v24 + 1152 + _v24 + 1152;
                     *__esp = outf;
                     *_v28();
                }
            }
            _v24 = _v24 + 1;
        }
        break;
L51:
    } while(_v16 > 0);
    _t166 = _v32 + _v32;
    _v24 = _t166;
    asm("fld qword [ebp-0x28]");
    asm("fldz ");
    asm("fucomip st0, st1");
    asm("fstp st0");
    asm("setnb al");
    if((_t166 & 4294967295) == 0) {
        _v4688 = _v24;
        _t168 = -48 / _v4688;
        _v4668 = _t168;
        _v4664 = 0;
        asm("fild qword [ebp+0xffffedc8]");
        asm("fld qword [ebp-0x28]");
        asm("fucomip st0, st1");
        asm("fstp st0");
        if((_t168 & 4294967295) == 0) {
            asm("fild dword [ebp-0x14]");
            asm("fld qword [ebp-0x28]");
            asm("fmulp st1, st0");
            asm("fstp qword [ebp-0x28]");
        } else {
            if(silent <= 9) {
                __eax = error_printf("Very huge WAVE file, can't set filesize accordingly\n");
            }
            asm("fld qword [0x8054f10]");
            asm("fstp qword [ebp-0x28]");
        }
    } else {
        if(silent <= 9) {
            __eax = error_printf("WAVE file contains 0 PCM samples\n");
        }
        asm("fldz ");
        asm("fstp qword [ebp-0x28]");
    }
    if(disable_wav_header == 0) {
        _t173 = outPath;
        __eax = strcmp(134563942, _t173);
        if(_t173 != 0) {
            _v4724 = 0;
            _v4728 = 0;
            _t174 = outf;
             *__esp = _t174;
            fseek();
            if(_t174 == 0) {
                _t175 = gfp;
                 *__esp = _t175;
                lame_get_in_samplerate();
                asm("fld qword [ebp-0x28]");
                asm("fnstcw word [ebp+0xffffedd6]");
                _v4656 = _v4654 & 65535 & 4294967295;
                asm("fldcw word [ebp+0xffffedd4]");
                asm("fistp dword [ebp+0xffffedd0]");
                asm("fldcw word [ebp+0xffffedd6]");
                __eax = WriteWaveHeader(outf, _v4660, _t175, _v32, 16);
            }
        }
    }
    __eax = fclose(outf);
    if(silent > 0) {
        return ;
    }
    decoder_progress_finish();
    return ;
}

print_lame_tag_leading_info(lame_global_flags* gf)
{// addr = 0x0804B4F0
    _unknown_ __ebp;
    lame_global_flags* _t2;
    _unknown_ _t3;

    _t2 = gf;
     *__esp = _t2;
    lame_get_bWriteVbrTag();
    if(_t2 == 0) {
        return ;
    }
    console_printf("Writing LAME Tag...");
    return;
}

print_trailing_info(lame_global_flags* gf)
{// addr = 0x0804B513
    int RadioGain;
    float noclipGainChange;
    float noclipScale;
    lame_global_flags* _v16;
    lame_global_flags* _v32;
    char* _v56;
    _unknown_ __ebp;
    lame_global_flags* _t19;
    lame_global_flags* _t20;
    lame_global_flags* _t22;
    signed int _t23;
    _unknown_ _t24;
    _unknown_ _t25;
    signed int _t26;
    _unknown_ _t27;
    _unknown_ _t28;
    _unknown_ _t29;
    lame_global_flags* _t30;
    char* _t31;
    _unknown_ _t32;
    _unknown_ _t33;
    _unknown_ _t34;

    _t19 = gf;
     *__esp = _t19;
    lame_get_bWriteVbrTag();
    if(_t19 != 0) {
        console_printf("done\n");
    }
    _t20 = gf;
     *__esp = _t20;
    lame_get_findReplayGain();
    if(_t20 != 0) {
        _t30 = gf;
         *__esp = _t30;
        lame_get_RadioGain();
        _v16 = _t30;
        asm("fild dword [ebp-0xc]");
        asm("fld qword [0x8054f18]");
        asm("fdivp st1, st0");
        if(_v16 <= 0) {
            _t31 = 134564020;
        } else {
            _t31 = "+";
        }
        asm("fstp qword [esp+0x8]");
        _v56 = _t31;
        console_printf("ReplayGain: %s%.1fdB\n");
        if(_v16 > 510 || _v16 < -510) {
            error_printf("WARNING: ReplayGain exceeds the -51dB to +51dB range. Such a result is too\n         high to be stored in the header.\n");
        }
    }
    _t21 = print_clipping_info;
    if(print_clipping_info == 0) {
        return ;
    }
    _t21 = gf;
     *__esp = _t21;
    lame_get_decode_on_the_fly();
    if(_t21 == 0) {
        return ;
    }
    _t22 = gf;
     *__esp = _t22;
    lame_get_noclipGainChange();
    _v32 = _t22;
    asm("fild dword [ebp-0x1c]");
    asm("fld dword [0x8054f20]");
    asm("fdivp st1, st0");
    asm("fstp dword [ebp-0x10]");
    _t23 = gf;
     *__esp = _t23;
    lame_get_noclipScale();
    asm("fstp dword [ebp-0x14]");
    asm("fld dword [ebp-0x10]");
    asm("fldz ");
    asm("fxch st0, st1");
    asm("fucomip st0, st1");
    asm("fstp st0");
    if((_t23 & 4294967295) == 0) {
L15:
        asm("fld dword [ebp-0x10]");
        asm("fld qword [0x8054f28]");
        asm("fxch st0, st1");
        asm("fucomip st0, st1");
        asm("fstp st0");
        if((_t23 & 4294967295) == 0) {
            asm("fld dword [ebp-0x10]");
            asm("fchs ");
            asm("fstp qword [esp+0x4]");
            console_printf("\nThe waveform does not clip and is at least %.1fdB away from full scale.\n");
            return;
        }
    } else {
        asm("fld dword [ebp-0x10]");
        asm("fstp qword [esp+0x4]");
        _t26 = console_printf("WARNING: clipping occurs at the current gain. Set your decoder to decrease\n         the  gain  by  at least %.1fdB or encode again ");
        asm("fld dword [ebp-0x14]");
        asm("fldz ");
        asm("fxch st0, st1");
        asm("fucomip st0, st1");
        asm("fstp st0");
        if((_t26 & 4294967295) == 0) {
            console_printf("using --scale <arg>\n         (For   a   suggestion  on  the  optimal  value  of  <arg>  encode\n         with  --scale 1  first)\n");
            return;
        }
        asm("fld dword [ebp-0x14]");
        asm("fstp qword [esp+0x4]");
        console_printf("using  --scale %.2f\n");
        console_printf("         or less (the value under --scale is approximate).\n");
        return;
        goto L15;
    }
L16:
    console_printf("\nThe waveform does not clip and is less than 0.1dB away from full scale.\n");
    return;
}

int write_xing_frame(lame_global_flags* gf, FILE* outf)
{// addr = 0x0804B68B
    unsigned char[147455] mp3buffer;
    size_t imp3;
    size_t owrite;
    intOrPtr _v16;
    void _v147472;
    int _v147476;
    int _v147480;
    lame_global_flags* _v147488;
    struct _IO_FILE* _v147492;
    _unknown_ _v147504;
    char* _v147508;
    void* _v147512;
    _unknown_ __ebp;
    _unknown_ _t31;
    int _t33;
    int _t40;
    _unknown_ _t42;
    _unknown_ _t43;
    _unknown_ _t45;
    _unknown_ _t47;

    _v147488 = gf;
    _v147492 = outf;
    _v16 =  *gs:0x14];
    _v147508 = 147456;
    _v147512 =  &_v147472;
    _t33 = _v147488;
     *__esp = _t33;
    lame_get_lametag_frame();
    _v147476 = _t33;
    __eflags = _v147476 - 147456;
    if(__eflags <= 0) {
        __eflags = _v147476;
        if(__eflags != 0) {
            _v147480 = fwrite( &_v147472, 1, _v147476, _v147492);
            __eflags = _v147480 - _v147476;
            if(__eflags == 0) {
                __eflags = flush_write - 1;
                if(__eflags == 0) {
                    fflush(_v147492);
                }
                _t40 = _v147476;
            } else {
                error_printf("Error writing LAME-tag \n");
                _t40 = -1;
            }
        } else {
            _t40 = 0;
        }
    } else {
        _v147508 = _v147476;
        _v147512 = 147456;
        error_printf("Error writing LAME-tag frame: buffer too small: buffer size=%d  frame size=%d\n");
        _t40 = -1;
    }
    if(__eflags == 0) {
        return _t40;
    }
    __stack_chk_fail();
    return _t40;
}

int lame_encoder(lame_global_flags* gf, FILE* outf, int nogap, char* inPath, char* outPath)
{// addr = 0x0804B79A
    unsigned char[147455] mp3buffer;
    int[1][1151] Buffer;
    int iread;
    int imp3;
    int owrite;
    int id3v2_size;
    intOrPtr _v16;
    void _v147472;
    int _v147476;
    int _v147480;
    int _v147484;
    int _v147488;
    char _v156704;
    const lame_global_flags* _v156720;
    struct _IO_FILE* _v156724;
    char* _v156728;
    char* _v156732;
    char* _v156744;
    char* _v156748;
    int _v156752;
    int _v156756;
    char* _v156760;
    _unknown_ __ebp;
    _unknown_ _t132;
    int _t137;
    int _t150;
    int _t158;
    int _t163;
    _unknown_ _t166;
    int _t168;
    _unknown_ _t170;
    _unknown_ _t178;
    _unknown_ _t179;
    _unknown_ _t181;
    _unknown_ _t183;
    _unknown_ _t184;
    _unknown_ _t186;
    _unknown_ _t187;
    int _t189;
    _unknown_ _t191;
    int _t195;
    _unknown_ _t200;
    _unknown_ _t202;
    _unknown_ _t203;
    _unknown_ _t205;
    _unknown_ _t207;
    _unknown_ _t210;
    _unknown_ _t217;

    _v156720 = gf;
    _v156724 = outf;
    _v156728 = inPath;
    _v156732 = outPath;
    _v16 =  *gs:0x14];
    encoder_progress_begin(_v156720, _v156728, _v156732);
    _v156756 = 147456;
    _v156760 =  &_v147472;
    _t137 = _v156720;
     *__esp = _t137;
    lame_get_id3v2_tag();
    _v147480 = _t137;
    __eflags = _v147480 - 147456;
    if(__eflags <= 0) {
        _v147484 = fwrite( &_v147472, 1, _v147480, _v156724);
        __eflags = _v147484 - _v147480;
        if(__eflags == 0) {
            __eflags = flush_write - 1;
            if(flush_write == 1) {
                fflush(_v156724);
            }
            _v147488 = _v147480;
            goto L7;
            do {
L7:
                _v147476 = get_audio(_v156720,  &_v156704);
                __eflags = _v147476;
                if(_v147476 >= 0) {
                    goto L15;
                }
                encoder_progress(_v156720);
                _v156744 = 147456;
                _v156748 =  &_v147472;
                _v156752 = _v147476;
                _v156756 =  &(( &_v156704)[0x1200]);
                _v156760 =  &_v156704;
                _t195 = _v156720;
                 *__esp = _t195;
                lame_encode_buffer_int();
                _v147480 = _t195;
                __eflags = _v147480;
                if(_v147480 >= 0) {
                    _v147484 = fwrite( &_v147472, 1, _v147480, _v156724);
                    __eflags = _v147484 - _v147480;
                    if(__eflags == 0) {
                        goto L15;
                    }
                    goto L14;
                }
                __eflags = _v147480 - 255;
                if(__eflags != 0) {
                    _v156760 = _v147480;
                    error_printf("mp3 internal error:  error code=%i\n");
                } else {
                    error_printf("mp3 buffer is not big enough... \n");
                }
                _t168 = 1;
                goto L45;
L14:
                error_printf("Error writing mp3 output \n");
                _t168 = 1;
                goto L45;
L15:
                __eflags = flush_write - 1;
                if(flush_write == 1) {
                    fflush(_v156724);
                }
                __eflags = _v147476;
            } while(_v147476 > 0);
            __eflags = nogap;
            if(nogap == 0) {
                _v156756 = 147456;
                _v156760 =  &_v147472;
                _t150 = _v156720;
                 *__esp = _t150;
                lame_encode_flush();
                _v147480 = _t150;
            } else {
                _v156756 = 147456;
                _v156760 =  &_v147472;
                _t189 = _v156720;
                 *__esp = _t189;
                lame_encode_flush_nogap();
                _v147480 = _t189;
            }
            __eflags = _v147480;
            if(_v147480 >= 0) {
                encoder_progress_end(_v156720);
                _v147484 = fwrite( &_v147472, 1, _v147480, _v156724);
                __eflags = _v147484 - _v147480;
                if(__eflags == 0) {
                    __eflags = flush_write - 1;
                    if(flush_write == 1) {
                        fflush(_v156724);
                    }
                    _v156756 = 147456;
                    _v156760 =  &_v147472;
                    _t158 = _v156720;
                     *__esp = _t158;
                    lame_get_id3v1_tag();
                    _v147480 = _t158;
                    __eflags = _v147480 - 147456;
                    if(_v147480 <= 147456) {
                        __eflags = _v147480;
                        if(_v147480 <= 0) {
                            goto L37;
                        }
                    } else {
                        _v156756 = _v147480;
                        _v156760 = 147456;
                        error_printf("Error writing ID3v1 tag: buffer too small: buffer size=%d  ID3v1 size=%d\n");
L37:
                        __eflags = silent;
                        if(silent <= 0) {
                            print_lame_tag_leading_info(_v156720);
                        }
                        _t163 = fseek(_v156724, _v147488, 0);
                        __eflags = _t163;
                        if(_t163 == 0) {
                            write_xing_frame(_v156720, _v156724);
                        } else {
                            error_printf("fatal error: can't update LAME-tag frame!\n");
                        }
                        __eflags = silent;
                        if(__eflags <= 0) {
                            print_trailing_info(_v156720);
                        }
                        _t168 = 0;
                        goto L45;
                    }
L33:
                    _v147484 = fwrite( &_v147472, 1, _v147480, _v156724);
                    __eflags = _v147484 - _v147480;
                    if(__eflags == 0) {
                        __eflags = flush_write - 1;
                        if(flush_write == 1) {
                            fflush(_v156724);
                        }
                        goto L37;
                    }
                    error_printf("Error writing ID3v1 tag \n");
                    _t168 = 1;
                    goto L45;
                }
            } else {
                __eflags = _v147480 - 255;
                if(__eflags != 0) {
                    _v156760 = _v147480;
                    error_printf("mp3 internal error:  error code=%i\n");
                } else {
                    error_printf("mp3 buffer is not big enough... \n");
                }
                _t168 = 1;
                goto L45;
            }
L27:
            error_printf("Error writing mp3 output \n");
            _t168 = 1;
            goto L45;
        }
        goto L3;
    }
    encoder_progress_end(_v156720);
    _v156756 = _v147480;
    _v156760 = 147456;
    error_printf("Error writing ID3v2 tag: buffer too small: buffer size=%d  ID3v2 size=%d\n");
    _t168 = 1;
L45:
    if(__eflags == 0) {
        return _t168;
    }
    __stack_chk_fail();
    return _t168;
L3:
    encoder_progress_end(_v156720);
    error_printf("Error writing ID3v2 tag \n");
    _t168 = 1;
    goto L45;
}

brhist_init_package(lame_global_flags* gf)
{// addr = 0x0804BC85
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t11;
    int _t12;
    int _t13;

    if(brhist == 0) {
        brhist_init(gf, 128, 128);
        return;
    }
    _t12 = gf;
     *__esp = _t12;
    lame_get_VBR_max_bitrate_kbps();
    _t13 = gf;
     *__esp = _t13;
    lame_get_VBR_min_bitrate_kbps();
    if(brhist_init(gf, _t13, _t12) == 0) {
        return ;
    }
    brhist = 0;
    return;
    return;
}

parse_nogap_filenames(int nogapout, char* inPath, char* outPath, char* outdir)
{// addr = 0x0804BCF1
    char* slasher;
    size_t n;
    char* _v16;
    int _v20;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t117;
    _unknown_ _t125;
    _unknown_ _t184;
    _unknown_ _t207;

    strcpy(outPath, outdir);
    if(nogapout != 0) {
L7:
        _v16 = inPath;
        _v16 =  &(_v16[0xffd]);
        while(( *_v16 & 255 & 4294967295) != 47 && ( *_v16 & 255 & 4294967295) != 92 && _v16 != inPath) {
            if(( *_v16 & 255 & 4294967295) != 58) {
                _v16 = _v16 - 1;
                continue;
            }
            if(_v16 == inPath || ( *(strlen(outPath) - 1 + outPath) & 255 & 4294967295) != 47 && ( *(strlen(outPath) - 1 + outPath) & 255 & 4294967295) != 92 && ( *(strlen(outPath) - 1 + outPath) & 255 & 4294967295) != 58) {
                if(_v16 == inPath && ( *(strlen(outPath) - 1 + outPath) & 255 & 4294967295) != 47 && ( *(strlen(outPath) - 1 + outPath) & 255 & 4294967295) != 92 && ( *(strlen(outPath) - 1 + outPath) & 255 & 4294967295) != 58) {
                    strcat(outPath, "/");
                }
            } else {
                _v16 =  &(_v16[1]);
            }
            strncat(outPath, _v16, 4093);
            _v20 = strlen(outPath);
            if(( *(_v20 - 3 + outPath) & 255 & 4294967295) == 119 && ( *(_v20 - 2 + outPath) & 255 & 4294967295) == 97 && ( *(_v20 - 1 + outPath) & 255 & 4294967295) == 118 && ( *(_v20 - 4 + outPath) & 255 & 4294967295) == 46) {
                 *(_v20 - 3 + outPath) = 109;
                 *(_v20 - 2 + outPath) = 112;
                 *(_v20 - 1 + outPath) = 51;
                return;
            }
            outPath[_v20] = 46;
             *(_v20 + 1 + outPath) = 109;
             *(_v20 + 2 + outPath) = 112;
             *(_v20 + 3 + outPath) = 51;
             *((char*)(_v20 + 4 + outPath)) = 0;
            return;
        }
    }
    strncpy(outPath, inPath, 4093);
    _v20 = strlen(outPath);
    if(( *(_v20 - 3 + outPath) & 255 & 4294967295) != 119 || ( *(_v20 - 2 + outPath) & 255 & 4294967295) != 97) {
L6:
        outPath[_v20] = 46;
         *(_v20 + 1 + outPath) = 109;
         *(_v20 + 2 + outPath) = 112;
         *(_v20 + 3 + outPath) = 51;
         *((char*)(_v20 + 4 + outPath)) = 0;
        return;
    } else {
        if(( *(_v20 - 1 + outPath) & 255 & 4294967295) != 118) {
            goto L6;
        } else {
            if(( *(_v20 - 4 + outPath) & 255 & 4294967295) != 46) {
                goto L6;
            } else {
                 *(_v20 - 3 + outPath) = 109;
                 *(_v20 - 2 + outPath) = 112;
                 *(_v20 - 1 + outPath) = 51;
                return;
            }
        }
        goto L7;
    }
}

int main(int argc, char** argv)
{// addr = 0x0804BFA5
    int ret;
    lame_global_flags* gf;
    char[4096] outPath;
    char[4096] nogapdir;
    char[4096] inPath;
    int enc_delay;
    int enc_padding;
    int nogapout;
    int max_nogap;
    char[199][4096] nogap_inPath_;
    char*[199] nogap_inPath;
    int i;
    FILE* outf;
    int use_flush_nogap;
    intOrPtr _v24;
    _unknown_ _v4121;
    _unknown_ _v8218;
    _unknown_ _v12315;
    _unknown_ _v12320;
    _unknown_ _v12324;
    intOrPtr _v12328;
    intOrPtr _v12332;
    int _v12336;
    intOrPtr _v12340;
    int _v12344;
    _unknown_ _v12348;
    _unknown_ _v12352;
    _unknown_ _v13152;
    void _v832552;
    char** _v832568;
    _unknown_ _v832588;
    _unknown_ _v832592;
    _unknown_ _v832596;
    _unknown_ _v832600;
    _unknown_ _v832604;
    _unknown_ _v832608;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t208;
    _unknown_ _t210;
    _unknown_ _t216;
    _unknown_ _t217;
    _unknown_ _t223;
    _unknown_ _t231;
    _unknown_ _t241;
    _unknown_ _t243;
    _unknown_ _t252;
    _unknown_ _t254;
    _unknown_ _t271;
    _unknown_ _t287;
    _unknown_ _t291;
    _unknown_ _t292;
    _unknown_ _t295;
    _unknown_ _t305;
    _unknown_ _t306;
    _unknown_ _t307;
    _unknown_ _t310;
    _unknown_ _t312;
    _unknown_ _t317;
    _unknown_ _t335;

    __esp = __esp & 240;
    _push(__ebx);
    __esp = __esp - 832604;
    _v832568 = argv;
    _v24 =  *gs:0x14];
    _v12328 = -1;
    _v12332 = -1;
    _v12336 = 0;
    _v12340 = 200;
    memset( &_v832552, 0, 819400);
    _v12344 = 0;
    while(_v12344 <= 199) {
    }
}

int my_console_printing(FILE* fp, const char* format, va_list ap)
{// addr = 0x0804C6C0
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t7;

    if(fp == 0) {
        return 0;
    }
    return vfprintf(fp, format, ap);
}

int my_error_printing(FILE* fp, const char* format, va_list ap)
{// addr = 0x0804C6EE
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t7;

    if(fp == 0) {
        return 0;
    }
    return vfprintf(fp, format, ap);
}

int my_report_printing(FILE* fp, const char* format, va_list ap)
{// addr = 0x0804C71C
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t7;

    if(fp == 0) {
        return 0;
    }
    return vfprintf(fp, format, ap);
}

apply_termcap_settings(const _None mfp)
{// addr = 0x0804C74A
    const char* term_name;
    char[2047] term_buff;
    char* tp;
    char[9] tc;
    int val;
    signed int _v16;
    char _v26;
    char _v2074;
    char* _v2080;
    char* _v2084;
    char _v2088;
    Console_IO_t* _v2096;
    char* _v2120;
    _unknown_ __ebp;
    _unknown_ _t64;
    _unknown_ _t65;
    signed int _t67;
    Console_IO_t* _t69;
    char* _t72;
    char* _t76;
    char* _t80;
    char* _t84;
    _unknown_ _t87;
    _unknown_ _t89;
    _unknown_ _t91;
    _unknown_ _t93;
    char* _t114;

    _v2096 = mfp;
    _v16 =  *gs:0x14];
    getenv(134565680);
    _v2080 = 0;
    if(_v2080 != 0) {
        _v2120 = _v2080;
        _t69 =  &_v2074;
         *__esp = _t69;
        tgetent();
        if(_t69 == 1) {
             *__esp = 134565685;
            tgetnum();
            _v2088 = _t69;
            if(_v2088 > 39 && _v2088 <= 512) {
                _t69 = _v2096;
                _t69->disp_width = _v2088;
            }
             *__esp = 134565688;
            tgetnum();
            _v2088 = _t69;
            if(_v2088 > 15 && _v2088 <= 256) {
                _v2096->disp_height = _v2088;
            }
            _v2084 =  &_v26;
             *_v2084 = 0;
            _t72 =  &_v2084;
            _v2120 = _t72;
             *__esp = 134565691;
            tgetstr();
            _v2084 = _t72;
            if(_v2084 != 0) {
                strcpy( &(_v2096->str_up), _v2084);
            }
            _v2084 =  &_v26;
             *_v2084 = 0;
            _t76 =  &_v2084;
            _v2120 = _t76;
             *__esp = 134565694;
            tgetstr();
            _v2084 = _t76;
            if(_v2084 != 0) {
                strcpy( &(_v2096->str_clreoln), _v2084);
            }
            _v2084 =  &_v26;
             *_v2084 = 0;
            _t80 =  &_v2084;
            _v2120 = _t80;
             *__esp = 134565697;
            tgetstr();
            _v2084 = _t80;
            if(_v2084 != 0) {
                strcpy( &(_v2096->str_emph), _v2084);
            }
            _v2084 =  &_v26;
             *_v2084 = 0;
            _t84 =  &_v2084;
            _v2120 = _t84;
             *__esp = 134565700;
            tgetstr();
            _v2084 = _t84;
            _t114 = _v2084;
            if(_t114 != 0) {
                strcpy( &(_v2096->str_norm), _v2084);
            }
        }
    }
    _t67 = _v16 ^  *gs:0x14];
    if(_t114 == 0) {
        return _t67;
    }
    __stack_chk_fail();
    return _t67;
}

int init_console(const _None mfp)
{// addr = 0x0804C978
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t33;
    _unknown_ _t34;
    _unknown_ _t35;
    _unknown_ _t39;

    mfp->disp_width = 80;
    mfp->disp_height = 25;
    mfp->Console_fp = __imp__stderr;
    mfp->Error_fp = __imp__stderr;
    mfp->Report_fp = 0;
    setvbuf(mfp->Console_fp,  &(mfp->Console_buff), 0, 2048);
    memcpy( &(mfp->str_up), 134565703, 4);
    apply_termcap_settings(mfp);
    mfp->ClassID = 1129270867;
    mfp->Console_file_type = 0;
    return 0;
}

deinit_console(const _None mfp)
{// addr = 0x0804CA23
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t21;
    _unknown_ _t24;
    _unknown_ _t27;
    _unknown_ _t30;

    if(mfp->Report_fp != 0) {
        fclose(mfp->Report_fp);
        mfp->Report_fp = 0;
    }
    fflush(mfp->Console_fp);
    setvbuf(mfp->Console_fp, 0, 2, 0);
    memset( &(mfp->Console_buff), 85, 1024);
    return;
}

int frontend_open_console()
{// addr = 0x0804CA9F
    _unknown_ __ebp;

    return init_console( &Console_IO);
}

frontend_close_console()
{// addr = 0x0804CAB3
    _unknown_ __ebp;

    deinit_console( &Console_IO);
    return;
}

frontend_debugf(const char* format, va_list ap)
{// addr = 0x0804CAC7
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t6;

    my_report_printing( *134593776, format, ap);
    return;
}

frontend_msgf(const char* format, va_list ap)
{// addr = 0x0804CAEA
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t6;

    my_console_printing( *134593768, format, ap);
    return;
}

frontend_errorf(const char* format, va_list ap)
{// addr = 0x0804CB0D
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t6;

    my_error_printing( *134593772, format, ap);
    return;
}

int console_printf(const char* format)
{// addr = 0x0804CB30
    va_list args;
    int ret;
    char* _v16;
    int _v20;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;

    _v16 =  &_a8;
    _v20 = my_console_printing( *134593768, format, _v16);
    return _v20;
}

int error_printf(const char* format)
{// addr = 0x0804CB5F
    va_list args;
    int ret;
    char* _v16;
    int _v20;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;

    _v16 =  &_a8;
    _v20 = my_console_printing( *134593772, format, _v16);
    return _v20;
}

int report_printf(const char* format)
{// addr = 0x0804CB8E
    va_list args;
    int ret;
    char* _v16;
    int _v20;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;

    _v16 =  &_a8;
    _v20 = my_console_printing( *134593776, format, _v16);
    return _v20;
}

console_flush()
{// addr = 0x0804CBBD
    _unknown_ __ebp;
    _unknown_ _t2;

    fflush( *134593768);
    return;
}

error_flush()
{// addr = 0x0804CBD2
    _unknown_ __ebp;
    _unknown_ _t2;

    fflush( *134593772);
    return;
}

report_flush()
{// addr = 0x0804CBE7
    _unknown_ __ebp;
    _unknown_ _t2;

    fflush( *134593776);
    return;
}

console_up(int n_lines)
{// addr = 0x0804CBFC
    _unknown_ _v24;
    _unknown_ __ebp;
    int _t7;
    _unknown_ _t8;

    _t7 = __eax;
    while(1) {
        n_lines = n_lines - 1;
        if((_t7 & 4294967295) == 0) {
            break;
        }
        _t7 = fputs(134593788,  *134593768);
    }
    console_flush();
    return;
}

set_debug_file(const char* fn)
{// addr = 0x0804CC31
    const char* _v24;
    _unknown_ __ebp;
    _unknown_ _t8;
    const char* _t9;
    _unknown_ _t12;
    _unknown_ _t14;

    if( *134593776 != 0) {
        return ;
    }
    _v24 = 134565707;
    _t9 = fn;
     *__esp = _t9;
    fopen64();
     *134593776 = _t9;
    if( *134593776 == 0) {
        _v24 = fn;
        error_printf("Error: can't open for debug info: %s\n");
        return;
    }
    _v24 = fn;
    error_printf("writing debug info into: %s\n");
    return;
}

size_t min_size_t(size_t a, size_t b)
{// addr = 0x0804CC8C
    _unknown_ __ebp;

    if(a >= b) {
        return b;
    }
    return a;
}

union ByteOrder machine_byte_order()
{// addr = 0x0804CCA1
    long int one;
    signed char _v8;
    _unknown_ __ebp;

    _v8 = 1;
    return _v8 & 255 & 4294967295 & ;
}

int fskip(FILE* fp, long int offset, int whence)
{// addr = 0x0804CCBE
    char[4095] buffer;
    const int fd;
    struct stat file_stat;
    const size_t bytes_to_skip;
    const size_t read;
    const size_t bytes_to_skip;
    const size_t read;
    intOrPtr _v16;
    void _v4112;
    int _v4116;
    unsigned int _v4120;
    int _v4124;
    unsigned int _v4128;
    int _v4132;
    signed int _v4212;
    char _v4228;
    struct _IO_FILE* _v4240;
    _unknown_ _v4256;
    _unknown_ _v4260;
    char* _v4264;
    _unknown_ __ebp;
    _unknown_ _t52;
    int _t56;
    int _t62;
    _unknown_ _t63;
    _unknown_ _t83;
    long int _t87;

    _v4240 = fp;
    _v16 =  *gs:0x14];
    _v4116 = fileno(_v4240);
    _v4264 =  &_v4228;
    _t56 = _v4116;
     *__esp = _t56;
    L080547D0();
    if(_t56 != 0 || (_v4212 & 61440) != 4096) {
        if(fseek(_v4240, offset, whence) != 0) {
            if(whence != 1 || offset < 0) {
                if(silent <= 9) {
                    error_printf("fskip problem: Mostly the return status of functions is not evaluate so it is more secure to polute <stderr>.\n");
                }
                _t62 = -1;
                goto L22;
            } else {
                while(offset > 0) {
                    _v4128 = min_size_t(4096, offset);
                    _v4132 = fread( &_v4112, 1, _v4128, _v4240);
                    if(_v4132 != 0) {
                        offset = offset - _v4132;
                        continue;
                    }
                    _t62 = -1;
                    goto L22;
                }
            }
        }
    } else {
        if(whence != 1) {
L4:
            _t62 = -1;
L22:
            if(_t87 == 0) {
                return _t62;
            }
            __stack_chk_fail();
            return _t62;
        }
        _t87 = offset;
        if(_t87 >= 0) {
            while(offset > 0) {
                _v4120 = min_size_t(4096, offset);
                _v4124 = fread( &_v4112, 1, _v4120, _v4240);
                if(_v4124 != 0) {
                    offset = offset - _v4124;
                    continue;
                } else {
                    _t62 = -1;
                }
                goto L22;
            }
        }
        goto L4;
    }
L11:
    _t62 = 0;
    goto L22;
}

FILE* init_outfile(char* outPath, int decode)
{// addr = 0x0804CE8D
    FILE* outf;
    FILE* _v16;
    char* _v40;
    _unknown_ __ebp;
    char* _t12;
    _unknown_ _t14;
    _unknown_ _t17;

    if(strcmp(outPath, "-") != 0) {
        _t12 = outPath;
        _v40 = "w+b";
         *__esp = _t12;
        fopen64();
        _v16 = _t12;
        if(_v16 != 0) {
            return _v16;
        }
        return 0;
    }
    _v16 = __imp__stdout;
    lame_set_stream_binary_mode(_v16);
    return _v16;
}

init_infile(lame_global_flags* gfp, char* inPath, int* enc_delay, int* enc_padding)
{// addr = 0x0804CEE8
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;

    global.count_samples_carefully = 0;
     *134591452 = 0;
     *134591440 = in_bitwidth;
     *134591444 = swapbytes;
     *134591448 = in_signed & 4294967295 & ;
     *134591456 = OpenSndFile(gfp, inPath, enc_delay, enc_padding);
    return;
}

close_infile()
{// addr = 0x0804CF50
    _unknown_ _v24;
    _unknown_ __ebp;

    CloseSndFile(input_format,  *134591456);
    return;
}

SwapBytesInWords(short int* ptr, int short_words)
{// addr = 0x0804CF6F
    long unsigned int val;
    long unsigned int* p;
    signed int _v8;
    short int* _v12;
    _unknown_ __ebp;

    _v12 = ptr;
    while(short_words > 1) {
        _v8 =  *_v12;
         *_v12 = _v8 << 8 & -16711936 | _v8 >> 8 & 16711935;
        short_words = short_words - 2;
        _v12 =  &(_v12[2]);
    }
}

int get_audio(const lame_global_flags* gfp, int[1151]* buffer)
{// addr = 0x0804CFF1
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;

    return get_audio_common(gfp, buffer, 0);
}

int get_audio16(const lame_global_flags* gfp, short int[1151]* buffer)
{// addr = 0x0804D013
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;

    return get_audio_common(gfp, 0, buffer);
}

int get_audio_common(const lame_global_flags* gfp, int[1151]* buffer, short int[1151]* buffer16)
{// addr = 0x0804D035
    int num_channels;
    int[2303] insamp;
    short int[1][1151] buf_tmp16;
    int samples_read;
    int framesize;
    int samples_to_read;
    unsigned int remaining;
    unsigned int tmp_num_samples;
    int i;
    int* p;
    signed int _v16;
    signed int _v20;
    signed int _v24;
    signed int _v28;
    signed int _v32;
    lame_global_flags* _v36;
    signed int _v40;
    signed int* _v44;
    short int[1151] _v4652;
    char _v13868;
    _unknown_ _v13876;
    _unknown_ _v13880;
    _unknown_ __ebp;
    lame_global_flags* _t176;
    lame_global_flags* _t177;
    lame_global_flags* _t179;
    _unknown_ _t203;
    _unknown_ _t210;
    _unknown_ _t226;
    lame_global_flags* _t243;
    _unknown_ _t268;
    _unknown_ _t269;
    intOrPtr _t287;

    _t176 = gfp;
     *__esp = _t176;
    lame_get_num_channels();
    _v16 = _t176;
    _t177 = gfp;
     *__esp = _t177;
    lame_get_framesize();
    _v24 = _t177;
    _v28 = _v24;
    _t179 = gfp;
     *__esp = _t179;
    lame_get_num_samples();
    _v36 = _t179;
    if(global.count_samples_carefully != 0) {
        _t287 =  *134591452;
        _t243 = _v36;
        _t244 = _t287 - _t243 <= 0 ? _t287 : _t243;
        _t262 = _v36 - (_t287 - _t243 <= 0 ? _t287 : _t243);
        _t245 = _v36 - (_t287 - _t243 <= 0 ? _t287 : _t243);
        _v32 = _v36 - (_t287 - _t243 <= 0 ? _t287 : _t243);
        if(_v24 > _v32) {
            if(_v36 != 0) {
                _v28 = _v32;
            }
        }
    }
    if(is_mpeg_file_format(input_format) == 0) {
        _v20 = read_samples_pcm( *134591456,  &_v13868, _v16 * _v28);
        if(_v20 < 0) {
            return _v20;
        }
        _v44 =  &_v13868 + 0 + _v20 * 4;
        _v20 = _v20 / _v16;
        if(buffer == 0) {
            if(_v16 != 2) {
                if(_v16 != 1) {
                    goto L32;
                }
                goto L29;
            }
            goto L24;
L29:
            memset(buffer16 + 2304, 0, _v20 + _v20);
            _v40 = _v20;
            while(1) {
                _v40 = _v40 - 1;
                if(_v40 < 0) {
                    break;
                }
                _v44 = _v44 - 4;
                 *(buffer16 + _v40 * 2) =  *_v44 >> 16 & 4294967295;
            }
        } else {
            if(_v16 != 2) {
                if(_v16 != 1) {
                    goto L32;
                }
                goto L19;
            }
            _v40 = _v20;
            while(1) {
                _v40 = _v40 - 1;
                if(_v40 < 0) {
                    break;
                }
                _v44 = _v44 - 4;
                (buffer + 4608)[_v40] =  *_v44;
                _v44 = _v44 - 4;
                 *(buffer + _v40 * 4) =  *_v44;
            }
            goto L32;
L19:
            memset(buffer + 4608, 0, 0 + _v20 * 4);
            _v40 = _v20;
            while(1) {
                _v40 = _v40 - 1;
                if(_v40 < 0) {
                    break;
                }
                _v44 = _v44 - 4;
                 *(buffer + _v40 * 4) =  *_v44;
            }
        }
        goto L32;
L24:
        _v40 = _v20;
        while(1) {
            _v40 = _v40 - 1;
            if(_v40 < 0) {
                break;
            }
            _v44 = _v44 - 4;
             *(buffer16 + 2304 + _v40 * 2) =  *_v44 >> 16 & 4294967295;
            _v44 = _v44 - 4;
             *(buffer16 + _v40 * 2) =  *_v44 >> 16 & 4294967295;
        }
        goto L32;
    }
    if(buffer == 0) {
        _v20 = read_samples_mp3(gfp,  *134591456, buffer16);
    } else {
        _v20 = read_samples_mp3(gfp,  *134591456,  &_v4652);
    }
    if(_v20 < 0) {
        return _v20;
    }
L32:
    if(is_mpeg_file_format(input_format) == 0 || buffer == 0) {
L44:
        if(_v36 == 255) {
            return _v20;
        }
         *134591452 =  *134591452 + _v20;
        return _v20;
    }
    _v40 = _v20;
    while(1) {
        _v40 = _v40 - 1;
        if(_v40 < 0) {
            break;
        }
        asm("cwde ");
         *(buffer + _v40 * 4) = ( *(__ebp + -4648 + _v40 * 2) & 65535) << 16;
    }
    if(_v16 != 2) {
        if(_v16 == 1) {
            memset(buffer + 4608, 0, 0 + _v20 * 4);
        }
        goto L44;
    }
    _v40 = _v20;
    while(1) {
        _v40 = _v40 - 1;
        if(_v40 < 0) {
            break;
        }
        (buffer + 4608)[_v40] = ( *(__ebp + -4648 + (_v40 + 1152) * 2) & 65535 & 4294967295) << 16;
    }
    goto L44;
    return _v20;
}

int read_samples_mp3(const lame_global_flags* gfp, const FILE* musicin, short int[1151]* mpg123pcm)
{// addr = 0x0804D384
    int out;
    int _v16;
    _unknown_ _v32;
    _unknown_ _v36;
    const char* _v40;
    _unknown_ __ebp;
    lame_global_flags* _t24;
    lame_global_flags* _t25;
    _unknown_ _t28;
    _unknown_ _t30;
    _unknown_ _t32;
    _unknown_ _t33;

    _v16 = lame_decode_fromfile(musicin, mpg123pcm, mpg123pcm + 2304,  &mp3input_data);
    if(_v16 >= 0) {
        _t24 = gfp;
         *__esp = _t24;
        lame_get_num_channels();
        if(_t24 !=  *134595940) {
            if(silent <= 9) {
                _v40 = "MP3 file";
                error_printf("Error: number of channels has changed in %s - not supported\n");
            }
            _v16 = -1;
        }
        _t25 = gfp;
         *__esp = _t25;
        lame_get_in_samplerate();
        if(_t25 ==  *134595944) {
            return _v16;
        }
        if(silent <= 9) {
            _v40 = "MP3 file";
            error_printf("Error: sample frequency has changed in %s - not supported\n");
        }
        _v16 = -1;
        return _v16;
    }
    memset(mpg123pcm, 0, 4608);
    return 0;
}

int WriteWaveHeader(const FILE* fp, const int pcmbytes, const int freq, const int channels, const int bits)
{// addr = 0x0804D455
    int bytes;
    signed int _v16;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t47;
    _unknown_ _t51;
    _unknown_ _t56;
    _unknown_ _t73;
    _unknown_ _t78;
    _unknown_ _t79;

    _t47 = bits + 7;
    _t48 = _t47 >= 0 ? _t47 + 7 : _t47;
    _t49 = (_t47 >= 0 ? _t47 + 7 : _t47) >> 3;
    _v16 = (_t47 >= 0 ? _t47 + 7 : _t47) >> 3;
    fwrite("RIFF", 1, 4, fp);
    Write32BitsLowHigh(fp, pcmbytes + 36);
    fwrite("WAVEfmt ", 2, 4, fp);
    Write32BitsLowHigh(fp, 16);
    Write16BitsLowHigh(fp, 1);
    Write16BitsLowHigh(fp, channels);
    Write32BitsLowHigh(fp, freq);
    Write32BitsLowHigh(fp, freq * channels * _v16);
    Write16BitsLowHigh(fp, channels * _v16);
    Write16BitsLowHigh(fp, bits);
    fwrite("data", 1, 4, fp);
    Write32BitsLowHigh(fp, pcmbytes);
    if(ferror(fp) == 0) {
        return 0;
    }
    return -1;
}

int unpack_read_samples(const int samples_to_read, const int bytes_per_sample, const int swap_order, int* sample_buffer, FILE* pcm_in)
{// addr = 0x0804D5A8
    size_t samples_read;
    int i;
    int* op;
    unsigned char* ip;
    const int b;
    signed int _v16;
    signed int _v20;
    int* _v24;
    int* _v28;
    intOrPtr _v32;
    _unknown_ _v48;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ __ebx;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t434;
    _unknown_ _t466;

    _v28 = sample_buffer;
    _v32 = 32;
    _v16 = fread(sample_buffer, bytes_per_sample, samples_to_read, pcm_in);
    _v24 =  &(sample_buffer[_v16]);
    if(swap_order != 0) {
        if(bytes_per_sample != 1) {
L22:
            if(bytes_per_sample != 2) {
L26:
                if(bytes_per_sample != 3) {
L30:
                    if(bytes_per_sample != 4) {
                        return _v16;
                    }
                    _v20 = bytes_per_sample * _v16;
                    while(1) {
                        _v20 = _v20 - bytes_per_sample;
                        if(_v20 < 0) {
                            break;
                        }
                        _v24 = _v24 - 4;
                         *_v24 = ( *(_v28 + _v20) & 255 & 4294967295 & ) << (_v32 - 8 & 4294967295) | ( *(_v20 + 1 + _v28) & 255 & 4294967295 & ) << (_v32 - 16 & 4294967295) | ( *(_v20 + 2 + _v28) & 255 & 4294967295 & ) << (_v32 - 24 & 4294967295) | ( *(_v20 + 3 + _v28) & 255 & 4294967295 & ) << (_v32 - 32 & 4294967295);
                    }
                    return _v16;
                }
                goto L27;
            }
            goto L23;
L27:
            _v20 = bytes_per_sample * _v16;
            while(1) {
                _v20 = _v20 - bytes_per_sample;
                if(_v20 < 0) {
                    break;
                }
                _v24 = _v24 - 4;
                 *_v24 = ( *(_v28 + _v20) & 255 & 4294967295 & ) << (_v32 - 8 & 4294967295) | ( *(_v20 + 1 + _v28) & 255 & 4294967295 & ) << (_v32 - 16 & 4294967295) | ( *(_v20 + 2 + _v28) & 255 & 4294967295 & ) << (_v32 - 24 & 4294967295);
            }
            goto L30;
        }
        goto L19;
L23:
        _v20 = bytes_per_sample * _v16;
        while(1) {
            _v20 = _v20 - bytes_per_sample;
            if(_v20 < 0) {
                break;
            }
            _v24 = _v24 - 4;
             *_v24 = ( *(_v28 + _v20) & 255 & 4294967295 & ) << (_v32 - 8 & 4294967295) | ( *(_v20 + 1 + _v28) & 255 & 4294967295 & ) << (_v32 - 16 & 4294967295);
        }
        goto L26;
    }
    if(bytes_per_sample != 1) {
L5:
        if(bytes_per_sample != 2) {
L9:
            if(bytes_per_sample != 3) {
L13:
                if(bytes_per_sample != 4) {
                    return _v16;
                }
                _v20 = bytes_per_sample * _v16;
                while(1) {
                    _v20 = _v20 - bytes_per_sample;
                    if(_v20 < 0) {
                        break;
                    }
                    _v24 = _v24 - 4;
                     *_v24 = ( *(_v28 + _v20) & 255 & 4294967295 & ) << (_v32 - 32 & 4294967295) | ( *(_v20 + 1 + _v28) & 255 & 4294967295 & ) << (_v32 - 24 & 4294967295) | ( *(_v20 + 2 + _v28) & 255 & 4294967295 & ) << (_v32 - 16 & 4294967295) | ( *(_v20 + 3 + _v28) & 255 & 4294967295 & ) << (_v32 - 8 & 4294967295);
                }
                return _v16;
            }
            goto L10;
        }
        goto L6;
L10:
        _v20 = bytes_per_sample * _v16;
        while(1) {
            _v20 = _v20 - bytes_per_sample;
            if(_v20 < 0) {
                break;
            }
            _v24 = _v24 - 4;
             *_v24 = ( *(_v28 + _v20) & 255 & 4294967295 & ) << (_v32 - 24 & 4294967295) | ( *(_v20 + 1 + _v28) & 255 & 4294967295 & ) << (_v32 - 16 & 4294967295) | ( *(_v20 + 2 + _v28) & 255 & 4294967295 & ) << (_v32 - 8 & 4294967295);
        }
        goto L13;
    }
    _v20 = bytes_per_sample * _v16;
    while(1) {
        _v20 = _v20 - bytes_per_sample;
        if(_v20 < 0) {
            break;
        }
        _v24 = _v24 - 4;
         *_v24 = ( *(_v28 + _v20) & 255 & 4294967295 & ) << (_v32 - 8 & 4294967295);
    }
    goto L5;
L6:
    _v20 = bytes_per_sample * _v16;
    while(1) {
        _v20 = _v20 - bytes_per_sample;
        if(_v20 < 0) {
            break;
        }
        _v24 = _v24 - 4;
         *_v24 = ( *(_v28 + _v20) & 255 & 4294967295 & ) << (_v32 - 16 & 4294967295) | ( *(_v20 + 1 + _v28) & 255 & 4294967295 & ) << (_v32 - 8 & 4294967295);
    }
    goto L9;
L19:
    _v20 = bytes_per_sample * _v16;
    while(1) {
        _v20 = _v20 - bytes_per_sample;
        if(_v20 < 0) {
            break;
        }
        _v24 = _v24 - 4;
         *_v24 = (( *(_v28 + _v20) & 255 ^ 128) & 4294967295 & ) << (_v32 - 8 & 4294967295) | 127 << (_v32 - 16 & 4294967295);
    }
    goto L22;
}

int read_samples_pcm(FILE* musicin, int* sample_buffer, int samples_to_read)
{// addr = 0x0804D9AB
    int samples_read;
    int swap_byte_order;
    int _v16;
    signed int _v20;
    _unknown_ _v44;
    _unknown_ _v48;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ __ebp;
    intOrPtr _t29;
    signed int _t33;
    intOrPtr _t34;
    _unknown_ _t43;
    _unknown_ _t44;
    _unknown_ _t46;
    _unknown_ _t47;
    _unknown_ _t49;
    _unknown_ _t50;

    _t29 =  *134591440;
    if(_t29 == 16) {
L6:
        if(in_signed == 0) {
            error_printf("Unsigned input only supported with bitwidth 8\n");
            exit(1);
        }
        _v20 = in_endian & 4294967295 & ;
        _t33 =  *134591444;
        if(_t33 != 0) {
            _v20 = _t33 & 4294967295 & ;
        }
        _t34 =  *134591440;
        _t35 = _t34 >= 0 ? _t34 + 7 : _t34;
        _t36 = (_t34 >= 0 ? _t34 + 7 : _t34) >> 3;
        _v16 = unpack_read_samples(samples_to_read, (_t34 >= 0 ? _t34 + 7 : _t34) >> 3, _v20, sample_buffer, musicin);
L15:
        if(ferror(musicin) == 0) {
            return _v16;
        }
        if(silent <= 9) {
            error_printf("Error reading input file\n");
        }
        exit(1);
        return _v16;
    }
    if(_t29 > 16) {
        if(_t29 == 24 || _t29 == 32) {
            goto L6;
        } else {
            goto L12;
        }
    }
    if(_t29 == 8) {
        _v16 = unpack_read_samples(samples_to_read, 1,  *134591448, sample_buffer, musicin);
        goto L15;
    } else {
    }
L12:
    if(silent <= 9) {
        error_printf("Only 8, 16, 24 and 32 bit input files supported \n");
    }
    exit(1);
    goto L15;
}

int parse_wave_header(lame_global_flags* gfp, FILE* sf)
{// addr = 0x0804DAE3
    int format_tag;
    int channels;
    int block_align;
    int bits_per_sample;
    int samples_per_sec;
    int avg_bytes_per_sec;
    int is_wav;
    long int data_length;
    long int file_length;
    long int subSize;
    int loop_sanity;
    int type;
    int _v16;
    signed int _v20;
    int _v24;
    int _v28;
    int _v32;
    int _v36;
    int _v40;
    int _v44;
    int _v48;
    int _v52;
    int _v56;
    int _v60;
    signed int _v64;
    _unknown_ _v84;
    int _v88;
    _unknown_ __ebp;
    _unknown_ _t114;
    lame_global_flags* _t117;
    _unknown_ _t122;
    _unknown_ _t128;
    _unknown_ _t130;
    _unknown_ _t132;
    _unknown_ _t134;
    _unknown_ _t136;
    _unknown_ _t137;
    _unknown_ _t158;
    _unknown_ _t161;
    _unknown_ _t163;
    _unknown_ _t165;
    _unknown_ _t168;
    _unknown_ _t169;
    _unknown_ _t175;
    _unknown_ _t176;

    _v16 = 0;
    _v20 = 0;
    _v24 = 0;
    _v28 = 0;
    _v32 = 0;
    _v36 = 0;
    _v40 = 0;
    _v44 = 0;
    _v52 = 0;
    _v56 = 0;
    _v48 = Read32BitsHighLow(sf);
    if(Read32BitsHighLow(sf) != WAV_ID_WAVE) {
        return -1;
    }
    _v56 = 0;
    while(_v56 <= 19) {
        _v60 = Read32BitsHighLow(sf);
        if(_v60 != WAV_ID_FMT) {
            if(_v60 != WAV_ID_DATA) {
                _v52 = Read32Bits(sf);
                if(fskip(sf, _v52, 1) != 0) {
                    return -1;
                }
                goto L16;
            }
            goto L13;
        }
        _v52 = Read32Bits(sf);
        if(_v52 <= 15) {
            return -1;
        }
        _v16 = Read16BitsLowHigh(sf);
        _v52 = _v52 - 2;
        _v20 = Read16BitsLowHigh(sf);
        _v52 = _v52 - 2;
        _v32 = Read32Bits(sf);
        _v52 = _v52 - 4;
        _v36 = Read32Bits(sf);
        _v52 = _v52 - 4;
        _v24 = Read16BitsLowHigh(sf);
        _v52 = _v52 - 2;
        _v28 = Read16BitsLowHigh(sf);
        _v52 = _v52 - 2;
        if(_v52 > 9) {
            asm("cwde ");
            if((WAVE_FORMAT_EXTENSIBLE & 65535) == _v16) {
                Read16BitsLowHigh(sf);
                Read16BitsLowHigh(sf);
                Read32Bits(sf);
                _v16 = Read16BitsLowHigh(sf);
                _v52 = _v52 - 10;
            }
        }
        if(_v52 > 0) {
            if(fskip(sf, _v52, 1) != 0) {
                return -1;
            }
        }
L16:
        _v56 = _v56 + 1;
        continue;
L13:
        _v52 = Read32Bits(sf);
        _v44 = _v52;
        _v40 = 1;
        if(_v40 == 0) {
            return -1;
        }
        asm("cwde ");
        if((WAVE_FORMAT_PCM & 65535) == _v16) {
            _v88 = _v20;
            _t117 = gfp;
             *__esp = _t117;
            lame_set_num_channels();
            if(_t117 != 255) {
                _v88 = _v32;
                 *__esp = gfp;
                lame_set_in_samplerate();
                 *134591440 = _v28;
                 *134591448 = 1;
                _t122 = _v28 + 7;
                _t123 = _t122 >= 0 ? _t122 + 7 : _t122;
                _t124 = (_t122 >= 0 ? _t122 + 7 : _t122) >> 3;
                _t172 = (_t122 >= 0 ? _t122 + 7 : _t122) >> 3;
                _t173 = ((_t122 >= 0 ? _t122 + 7 : _t122) >> 3) * _v20;
                _v64 = ((_t122 >= 0 ? _t122 + 7 : _t122) >> 3) * _v20;
                _v88 = _v44 / _v64;
                 *__esp = gfp;
                lame_set_num_samples();
                return 1;
            }
            goto L24;
            return -1;
        } else {
            if(silent > 9) {
                return 0;
            }
            _v88 = _v16;
            error_printf("Unsupported data format: 0x%04X\n");
            return 0;
        }
L24:
        if(silent > 9) {
            return 0;
        }
        _v88 = _v20;
        error_printf("Unsupported number of channels: %u\n");
        return 0;
    }
}

int aiff_check2(const _None pcm_aiff_data)
{// addr = 0x0804DDD0
    _unknown_ __ebx;
    _unknown_ __ebp;
    signed int _t16;
    _unknown_ _t18;
    _unknown_ _t19;
    _unknown_ _t28;
    _unknown_ _t30;
    _unknown_ _t31;
    _unknown_ _t33;
    _unknown_ _t34;
    _unknown_ _t36;
    _unknown_ _t37;
    _unknown_ _t38;
    _unknown_ _t41;

    if(pcm_aiff_data->sampleType != IFF_ID_SSND) {
        if(silent <= 9) {
            error_printf("ERROR: input sound data is not PCM\n");
        }
        return 1;
    }
    asm("cwde ");
    _t16 = (pcm_aiff_data->sampleSize & 65535) - 8;
    if(_t16 > 24 || (1 << (_t16 & 4294967295) & 16843009) == 0) {
        if(silent > 9) {
            return 1;
        }
        error_printf("ERROR: input sound data is not 8, 16, 24 or 32 bits\n");
        return 1;
    } else {
        if((pcm_aiff_data->numChannels & 65535 & 4294967295) != 1) {
            if((pcm_aiff_data->numChannels & 65535 & 4294967295) == 2) {
                goto L15;
            }
        } else {
L15:
            if( *((intOrPtr*)(pcm_aiff_data + 28)) == 0) {
                return 0;
            }
            if(silent > 9) {
                return 1;
            }
            error_printf("ERROR: block size of input sound data is not 0 bytes\n");
            return 1;
        }
L12:
        if(silent > 9) {
            return 1;
        }
        error_printf("ERROR: input sound data is not mono or stereo\n");
        return 1;
    }
}

long int make_even_number_of_bytes_in_length(long int x)
{// addr = 0x0804DEB2
    _unknown_ __ebp;

    if((x & 1 & 4294967295) == 0) {
        return x;
    }
    return x + 1;
}

int parse_aiff_header(lame_global_flags* gfp, FILE* sf)
{// addr = 0x0804DECC
    long int chunkSize;
    long int subSize;
    long int typeID;
    long int dataType;
    IFF_AIFF aiff_info;
    int seen_comm_chunk;
    int seen_ssnd_chunk;
    long int pcm_data_pos;
    long int ckSize;
    int type;
    int _v16;
    int _v20;
    int _v24;
    int _v28;
    int _v32;
    int _v36;
    long _v40;
    long int _v44;
    int _v48;
    int _v52;
    int _v56;
    int _v60;
    signed short _v72;
    int _v76;
    signed int _v80;
    signed short _v94;
    signed int _v96;
    signed int _v100;
    _unknown_ _v116;
    int _v120;
    _unknown_ __ebp;
    _unknown_ _t137;
    _unknown_ _t158;
    _unknown_ _t161;
    lame_global_flags* _t165;
    _unknown_ _t172;
    _unknown_ _t177;
    _unknown_ _t178;
    _unknown_ _t180;
    _unknown_ _t182;
    _unknown_ _t183;
    _unknown_ _t188;
    _unknown_ _t204;
    _unknown_ _t210;
    _unknown_ _t229;
    _unknown_ _t233;

    _v16 = 0;
    _v20 = 0;
    _v24 = 0;
    _v28 = IFF_ID_NONE;
    _v32 = 0;
    _v36 = 0;
    _v40 = -1;
    memset( &_v80, 0, 32);
    _v16 = Read32BitsHighLow(sf);
    _v24 = Read32BitsHighLow(sf);
    if(_v24 == IFF_ID_AIFF) {
L18:
        while(_v16 > 0) {
            _v48 = Read32BitsHighLow(sf);
            _v16 = _v16 - 4;
            if(_v48 != IFF_ID_COMM) {
                if(_v48 != IFF_ID_SSND) {
                    _v20 = Read32BitsHighLow(sf);
                    _v44 = make_even_number_of_bytes_in_length(_v20);
                    _v16 = _v16 - _v44;
                    if(fskip(sf, _v44, 1) != 0) {
                        return -1;
                    }
                    continue;
                }
                goto L9;
                return -1;
            } else {
                _v32 = _v36 + 1;
                _v20 = Read32BitsHighLow(sf);
                _v44 = make_even_number_of_bytes_in_length(_v20);
                _v16 = _v16 - _v44;
                _v80 = Read16BitsHighLow(sf) & 4294967295;
                _v44 = _v44 - 2;
                _v76 = Read32BitsHighLow(sf);
                _v44 = _v44 - 4;
                _v72 = Read16BitsHighLow(sf) & 4294967295;
                _v44 = _v44 - 2;
                __eax = ReadIeeeExtendedHighLow(sf);
                asm("fstp qword [ebp-0x40]");
                _v44 = _v44 - 10;
                if(_v24 == IFF_ID_AIFC) {
                    _v28 = Read32BitsHighLow(sf);
                    _v44 = _v44 - 4;
                }
                if(fskip(sf, _v44, 1) != 0) {
                    return -1;
                }
                continue;
            }
L9:
            _v36 = 1;
            _v20 = Read32BitsHighLow(sf);
            _v44 = make_even_number_of_bytes_in_length(_v20);
            _v16 = _v16 - _v44;
            _v56 = Read32BitsHighLow(sf);
            _v44 = _v44 - 4;
            _v52 = Read32BitsHighLow(sf);
            _v44 = _v44 - 4;
            _v60 = IFF_ID_SSND;
            if(_v32 <= 0) {
                _v40 = ftell(sf);
                if(_v40 < 0) {
                    _v40 = _v56 + _v40;
                }
                if(fskip(sf, _v44, 1) != 0) {
                    return -1;
                }
                continue;
            } else {
                if(fskip(sf, _v56, 1) != 0) {
                    return -1;
                }
L21:
                if(_v28 != IFF_ID_2CLE) {
                    if(_v28 != IFF_ID_2CBE) {
                        if(_v28 != IFF_ID_NONE) {
                            return -1;
                        }
                         *134591444 = swapbytes & 4294967295 & ;
                    } else {
                         *134591444 = swapbytes & 4294967295 & ;
                    }
                } else {
                     *134591444 = swapbytes;
                }
                if(_v32 == 0) {
                    return -1;
                }
                if(_v36 <= 0) {
                    if(_v76 != 0) {
                        return -1;
                    }
                }
                if(aiff_check2( &_v80) != 0) {
                    return 0;
                }
                asm("cwde ");
                _v120 = _v80 & 65535;
                _t165 = gfp;
                 *__esp = _t165;
                lame_set_num_channels();
                if(_t165 != 255) {
                    asm("fld qword [ebp-0x40]");
                    asm("fnstcw word [ebp-0x5a]");
                    _v96 = _v94 & 65535 & 4294967295;
                    asm("fldcw word [ebp-0x5c]");
                    asm("fistp dword [ebp-0x60]");
                    asm("fldcw word [ebp-0x5a]");
                    _v120 = _v100;
                     *__esp = gfp;
                    lame_set_in_samplerate();
                    _v120 = _v76;
                     *__esp = gfp;
                    lame_set_num_samples();
                    asm("cwde ");
                     *134591440 = _v72 & 65535;
                     *134591448 = 0;
                    if(_v40 >= 0) {
                        return 1;
                    }
                    if(fseek(sf, _v40, 0) == 0) {
                        return 1;
                    }
                    if(silent > 9) {
                        return 0;
                    }
                    error_printf("Can't rewind stream to audio data position\n");
                    return 0;
                } else {
                    if(silent > 9) {
                        return 0;
                    }
                    asm("cwde ");
                    _v120 = _v80 & 65535;
                    error_printf("Unsupported number of channels: %u\n");
                    return 0;
                }
            }
        }
    } else {
        if(_v24 == IFF_ID_AIFC) {
            goto L18;
        } else {
            return -1;
        }
    }
    goto L21;
}

int parse_file_header(lame_global_flags* gfp, FILE* sf)
{// addr = 0x0804E2E4
    int type;
    const int ret;
    const int ret;
    int _v16;
    int _v20;
    int _v24;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t26;
    _unknown_ _t27;
    _unknown_ _t32;
    _unknown_ _t33;
    _unknown_ _t38;
    _unknown_ _t39;

    _v16 = Read32BitsHighLow(sf);
    global.count_samples_carefully = 0;
     *134591448 = in_signed & 4294967295 & ;
    if(_v16 != WAV_ID_RIFF) {
        if(_v16 != IFF_ID_FORM) {
            if(silent > 9) {
                return 0;
            }
            error_printf("Warning: unsupported audio format\n");
            return 0;
        }
        goto L7;
    }
    _v20 = parse_wave_header(gfp, sf);
    if(_v20 > 0) {
        global.count_samples_carefully = 1;
        return 2;
    }
    if(_v20 >= 0) {
        return 0;
    }
    if(silent > 9) {
        return 0;
    }
    error_printf("Warning: corrupt or unsupported WAVE format\n");
    return 0;
L7:
    _v24 = parse_aiff_header(gfp, sf);
    if(_v24 <= 0) {
        if(_v24 >= 0) {
            return 0;
        }
        if(silent > 9) {
            return 0;
        }
        error_printf("Warning: corrupt or unsupported AIFF format\n");
        return 0;
    }
    global.count_samples_carefully = 1;
    return 3;
}

CloseSndFile(sound_file_format input, FILE* musicin)
{// addr = 0x0804E3E1
    _unknown_ __ebp;
    _unknown_ _t5;
    _unknown_ _t6;

    if(fclose(musicin) == 0) {
        return ;
    }
    if(silent <= 9) {
        error_printf("Could not close audio input file\n");
    }
    exit(2);
    return;
}

FILE* OpenSndFile(lame_global_flags* gfp, char* inPath, int* enc_delay, int* enc_padding)
{// addr = 0x0804E41A
    FILE* musicin;
    double flen;
    double totalseconds;
    long unsigned int tmp_num_samples;
    FILE* _v16;
    char* _v20;
    lame_global_flags* _v48;
    signed int _v50;
    signed int _v52;
    char* _v56;
    signed int _v60;
    _unknown_ _v64;
    _unknown_ _v68;
    char* _v72;
    _unknown_ __ebp;
    char* _t65;
    lame_global_flags* _t74;
    signed int _t78;
    lame_global_flags* _t81;
    lame_global_flags* _t88;
    _unknown_ _t94;
    _unknown_ _t97;
    _unknown_ _t99;
    _unknown_ _t100;
    _unknown_ _t102;
    _unknown_ _t103;
    lame_global_flags* _t109;
    _unknown_ _t115;
    _unknown_ _t117;
    _unknown_ _t119;
    _unknown_ _t121;
    _unknown_ _t123;
    _unknown_ _t125;
    _unknown_ _t128;
    char* _t129;
    _unknown_ _t130;
    _unknown_ _t131;

    _t129 = __edx;
    _v72 = -1;
     *__esp = gfp;
    lame_set_num_samples();
    if(strcmp(inPath, "-") != 0) {
        _t129 = "rb";
        _t65 = inPath;
        _v72 = _t129;
         *__esp = _t65;
        fopen64();
        _v16 = _t65;
        if(_v16 == 0) {
            exit(1);
        }
    } else {
        _v16 = __imp__stdin;
        lame_set_stream_binary_mode(_v16);
    }
    if(is_mpeg_file_format(input_format) == 0) {
        if(input_format == 8) {
            if(silent <= 9) {
                error_printf("sorry, vorbis support in LAME is deprecated.\n");
            }
            exit(1);
        }
        if(input_format != 1) {
            input_format = parse_file_header(gfp, _v16);
        } else {
            if(silent <= 9) {
                console_printf("Assuming raw pcm input file");
                if(swapbytes == 0) {
                    console_printf("\n");
                } else {
                    console_printf(" : Forcing byte-swapping\n");
                }
            }
             *134591444 = swapbytes;
        }
    } else {
        if(lame_decode_initfile(_v16,  &mp3input_data, enc_delay, enc_padding) == 255) {
            if(silent <= 9) {
                _v72 = inPath;
                error_printf("Error reading headers in mp3 input file %s.\n");
            }
            exit(1);
        }
        _v72 =  *134595940;
        _t109 = gfp;
         *__esp = _t109;
        lame_set_num_channels();
        if(_t109 == 255) {
            if(silent <= 9) {
                _v72 =  *134595940;
                error_printf("Unsupported number of channels: %ud\n");
            }
            exit(1);
        }
        _v72 =  *134595944;
         *__esp = gfp;
        lame_set_in_samplerate();
        _v72 =  *134595964;
         *__esp = gfp;
        lame_set_num_samples();
    }
    if(input_format == 0) {
        exit(1);
    }
    _t74 = gfp;
     *__esp = _t74;
    lame_get_num_samples();
    if(_t74 != 255) {
        return _v16;
    }
    if(_v16 == __imp__stdin) {
        return _v16;
    }
    _t78 = lame_get_file_size(inPath);
    _v60 = _t78;
    _v56 = _t129;
    asm("fild qword [ebp-0x38]");
    asm("fstp qword [ebp-0x18]");
    asm("fld qword [ebp-0x18]");
    asm("fldz ");
    asm("fxch st0, st1");
    asm("fucomip st0, st1");
    asm("fstp st0");
    asm("setnb al");
    if((_t78 & 4294967295) == 0) {
        return _v16;
    }
    if(is_mpeg_file_format(input_format) == 0) {
        _t81 = gfp;
         *__esp = _t81;
        lame_get_num_channels();
        _v48 = _t81 + _t81;
        asm("fild dword [ebp-0x2c]");
        asm("fld qword [ebp-0x18]");
        asm("fdivrp st1, st0");
        asm("fnstcw word [ebp-0x2e]");
        _v52 = _v50 & 65535 & 4294967295;
        asm("fldcw word [ebp-0x30]");
        asm("fistp qword [ebp-0x38]");
        asm("fldcw word [ebp-0x2e]");
        _v72 = _v60;
         *__esp = gfp;
        lame_set_num_samples();
        return _v16;
    } else {
        if( *134595948 <= 0) {
            return _v16;
        }
        asm("fld qword [ebp-0x18]");
        asm("fld qword [0x80554c0]");
        asm("fmulp st1, st0");
        _v48 =  *134595948;
        asm("fild dword [ebp-0x2c]");
        asm("fld qword [0x80554c8]");
        asm("fmulp st1, st0");
        asm("fdivp st1, st0");
        asm("fstp qword [ebp-0x20]");
        _t88 = gfp;
         *__esp = _t88;
        lame_get_in_samplerate();
        _v48 = _t88;
        asm("fild dword [ebp-0x2c]");
        asm("fmul qword [ebp-0x20]");
        asm("fnstcw word [ebp-0x2e]");
        _v52 = _v50 & 65535 & 4294967295;
        asm("fldcw word [ebp-0x30]");
        asm("fistp qword [ebp-0x38]");
        asm("fldcw word [ebp-0x2e]");
        _v20 = _v60;
        _v72 = _v20;
         *__esp = gfp;
        lame_set_num_samples();
         *134595964 = _v20;
        return _v16;
    }
    return _v16;
}

int check_aid(const unsigned char* header)
{// addr = 0x0804E748
    intOrPtr _v20;
    intOrPtr _v24;
    _unknown_ __ebp;
    signed int _t6;

    _v20 = 4;
    _v24 = 134566922;
    _t6 = header;
     *__esp = _t6;
    memcmp();
    return _t6 & 4294967295 & ;
}

int is_syncword_mp123(const * headerptr)
{// addr = 0x0804E773
    const const unsigned char* p;
    * _v12;
    _unknown_ __ebx;
    _unknown_ __ebp;
    signed int _t52;
    _unknown_ _t79;
    _unknown_ _t80;
    _unknown_ _t97;
    _unknown_ _t98;
    _unknown_ _t99;
    _unknown_ _t100;
    _unknown_ _t102;
    _unknown_ _t105;
    _unknown_ _t108;
    _unknown_ _t109;
    _unknown_ _t110;
    _unknown_ _t111;
    _unknown_ _t112;

    _v12 = headerptr;
    if(( *_v12 & 255 & 4294967295) != 255) {
        return 0;
    }
    if(( *(_v12 + 1) & 255 & 4294967295 &  & 224) != 224) {
        return 0;
    }
    if(( *(_v12 + 1) & 255 & 4294967295 &  & 24) == 8) {
        return 0;
    }
    _t52 =  *(_v12 + 1) & 255 & 4294967295 &  & 6;
    if(_t52 == 4) {
        if(input_format != 5) {
            if(input_format != 7) {
                return 0;
            }
        }
        input_format = 5;
    } else {
        if(_t52 == 6) {
            if(input_format != 4) {
                if(input_format != 7) {
                    return 0;
                }
            }
            input_format = 4;
        } else {
            if(_t52 != 2) {
                return 0;
            }
            if(input_format != 6) {
                if(input_format != 7) {
                    return 0;
                }
            }
            input_format = 6;
        }
    }
    if(( *(_v12 + 1) & 255 & 4294967295 &  & 6) == 0) {
        return 0;
    }
    if(( *(_v12 + 2) & 255 & 4294967295 &  & 240) == 240) {
        return 0;
    }
    if(( *(_v12 + 2) & 255 & 4294967295 &  & 12) == 12) {
        return 0;
    }
    if(( *(_v12 + 1) & 255 & 4294967295 &  & 24) == 24 && ( *(_v12 + 1) & 255 & 4294967295 &  & 6) == 4) {
        if((( *( &abl2 + ( *(_v12 + 2) & 255 & 4294967295 & )) & 255 & 4294967295) >> ( *(_v12 + 3) & 255 & 4294967295 &  & 4294967295) & 1 & 4294967295) != 0) {
            return 0;
        }
    }
    if(( *(_v12 + 3) & 255 & 4294967295 &  & 3) != 2) {
        return 1;
    }
    return 0;
}

int lame_decode_initfile(FILE* fd, mp3data_struct* mp3data, int* enc_delay, int* enc_padding)
{// addr = 0x0804E961
    unsigned char[99] buf;
    int ret;
    size_t len;
    int aid_header;
    short int[1151] pcm_l;
    short int[1151] pcm_r;
    int freeformat;
    unsigned int i;
    intOrPtr _v16;
    signed int _v111;
    signed int _v112;
    signed int _v113;
    signed int _v114;
    signed int _v115;
    void _v116;
    _unknown_ _v120;
    int _v124;
    int _v128;
    int _v132;
    int _v136;
    _unknown_ _v2440;
    _unknown_ _v4744;
    FILE* _v4752;
    mp3data_struct* _v4756;
    int* _v4760;
    int* _v4764;
    _unknown_ _v4768;
    _unknown_ _v4772;
    _unknown_ _v4776;
    _unknown_ _v4780;
    _unknown_ _v4784;
    _unknown_ _v4788;
    int _v4792;
    _unknown_ __ebp;
    _unknown_ _t182;
    _unknown_ _t184;
    intOrPtr _t185;
    int _t202;
    _unknown_ _t206;
    _unknown_ _t208;
    _unknown_ _t219;
    _unknown_ _t225;
    _unknown_ _t254;
    _unknown_ _t259;
    _unknown_ _t273;
    _unknown_ _t284;

    _v4752 = fd;
    _v4756 = mp3data;
    _v4760 = enc_delay;
    _v4764 = enc_padding;
    _v16 =  *gs:0x14];
    _v132 = 0;
    memset(_v4756, 0, 40);
    _t185 =  *134591460;
    if(_t185 != 0) {
        _t185 =  *134591460;
         *__esp = _t185;
        hip_decode_exit();
    }
    hip_decode_init();
     *134591460 = _t185;
    _v124 = 4;
    _t284 = fread( &_v116, 1, _v124, _v4752) - _v124;
    if(_t284 == 0) {
        if((_v116 & 255 & 4294967295) != 73 || (_v115 & 255 & 4294967295) != 68 || (_v114 & 255 & 4294967295) != 51) {
L13:
            _v128 = check_aid( &_v116);
            if(_v128 == 0) {
L20:
                _v124 = 4;
                while(is_syncword_mp123( &_v116) == 0) {
                    goto L21;
                }
            }
            goto L14;
L21:
            _v136 = 0;
            while(_v124 - 1 > _v136) {
                 *(__ebp + _v136 - 112) =  *(__ebp + _v136 + 1 - 112) & 255 & 4294967295;
                _v136 = _v136 + 1;
            }
        } else {
            if(silent <= 9) {
                console_printf("ID3v2 found. Be aware that the ID3 tag is currently lost when transcoding.\n");
            }
            _v124 = 6;
            if(fread( &_v116, 1, _v124, _v4752) == _v124) {
                _v114 = _v114 & 255 & 127 & 4294967295;
                _v113 = _v113 & 255 & 127 & 4294967295;
                _v112 = _v112 & 255 & 127 & 4294967295;
                _v111 = _v111 & 255 & 127 & 4294967295;
                _v124 = ((((_v114 & 255 & 4294967295 & ) << 7) + (_v113 & 255 & 4294967295 & ) << 7) + (_v112 & 255 & 4294967295 & ) << 7) + (_v111 & 255 & 4294967295 & );
                fskip(_v4752, _v124, 1);
                _v124 = 4;
                if(fread( &_v116, 1, _v124, _v4752) == _v124) {
                    goto L13;
                }
                goto L12;
            }
            _t202 = -1;
            goto L47;
L12:
            _t202 = -1;
            goto L47;
        }
L14:
        if(fread( &_v116, 1, 2, _v4752) == 2) {
            _v128 = (_v116 & 255 & 4294967295 & ) + ((_v115 & 255 & 4294967295 & ) << 8);
            if(silent <= 9) {
                _v4792 = _v128;
                console_printf("Album ID found.  length=%i \n");
            }
            fskip(_v4752, _v128 - 6, 1);
            if(fread( &_v116, 1, _v124, _v4752) == _v124) {
                goto L20;
            } else {
                _t202 = -1;
                goto L47;
            }
            goto L21;
        }
        _t202 = -1;
    } else {
        _t202 = -1;
    }
L47:
    if(_t284 == 0) {
        return _t202;
    }
    __stack_chk_fail();
    return _t202;
}

int lame_decode_fromfile(FILE* fd, short int* pcm_l, short int* pcm_r, mp3data_struct* mp3data)
{// addr = 0x0804EE68
    int ret;
    size_t len;
    unsigned char[1023] buf;
    intOrPtr _v16;
    char _v1040;
    int _v1044;
    int _v1048;
    FILE* _v1056;
    short int* _v1060;
    short int* _v1064;
    mp3data_struct* _v1068;
    mp3data_struct* _v1080;
    short int* _v1084;
    short int* _v1088;
    int _v1092;
    char* _v1096;
    _unknown_ __ebp;
    _unknown_ _t64;
    int _t65;
    int _t69;
    int _t70;
    int _t72;
    _unknown_ _t85;

    _v1056 = fd;
    _v1060 = pcm_l;
    _v1064 = pcm_r;
    _v1068 = mp3data;
    _v16 =  *gs:0x14];
    _v1044 = 0;
    _v1048 = 0;
    _t65 =  *134591460;
    _v1080 = _v1068;
    _v1084 = _v1064;
    _v1088 = _v1060;
    _v1092 = _v1048;
    _v1096 =  &_v1040;
     *__esp = _t65;
    hip_decode1_headers();
    _v1044 = _t65;
    __eflags = _v1044;
    if(__eflags == 0) {
        while(1) {
            _v1048 = fread( &_v1040, 1, 1024, _v1056);
            __eflags = _v1048;
            if(_v1048 == 0) {
                break;
            }
            _t69 =  *134591460;
            _v1080 = _v1068;
            _v1084 = _v1064;
            _v1088 = _v1060;
            _v1092 = _v1048;
            _v1096 =  &_v1040;
             *__esp = _t69;
            hip_decode1_headers();
            _v1044 = _t69;
            __eflags = _v1044 - 255;
            if(__eflags != 0) {
                __eflags = _v1044;
                if(__eflags <= 0) {
                    continue;
                }
                goto L9;
            }
             *__esp =  *134591460;
            hip_decode_exit();
             *134591460 = 0;
            _t70 = -1;
L12:
            if(__eflags == 0) {
                return _t70;
            }
            __stack_chk_fail();
            return _t70;
L9:
L11:
            _t70 = _v1044;
            goto L12;
        }
        _t72 =  *134591460;
        _v1080 = _v1068;
        _v1084 = _v1064;
        _v1088 = _v1060;
        _v1092 = _v1048;
        _v1096 =  &_v1040;
         *__esp = _t72;
        hip_decode1_headers();
        _v1044 = _t72;
        __eflags = _v1044;
        if(__eflags > 0) {
            goto L11;
        }
         *__esp =  *134591460;
        hip_decode_exit();
         *134591460 = 0;
        _t70 = -1;
        goto L12;
    }
    _t70 = _v1044;
    goto L12;
}

int is_mpeg_file_format(int input_file_format)
{// addr = 0x0804F04D
    _unknown_ __ebp;
    int _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;

    _t2 = input_file_format;
    if(_t2 == 5) {
        return 2;
    }
    if(_t2 > 5) {
        if(_t2 == 6) {
            return 3;
        }
        if(_t2 == 7) {
            return -1;
        }
        return 0;
    } else {
        if(_t2 == 4) {
            return 1;
        }
        return 0;
    }
}

double GetCPUTime()
{// addr = 0x0804F094
    clock_t t;
    double _v16;
    _unknown_ __ebp;

    __eax = __eax;
    clock();
    _v16 = __eax;
    asm("fild dword [ebp-0xc]");
    asm("fld qword [0x80554d0]");
    asm("fdivp st1, st0");
    return __eax;
}

double GetRealTime()
{// addr = 0x0804F0AF
    struct timeval t;
    double _v16;
    double _v20;
    double _v32;
    intOrPtr _v56;
    _unknown_ __ebp;
    double _t9;

    _v56 = 0;
     *__esp =  &_v20;
    gettimeofday();
    _v32 = _v20;
    asm("fild dword [ebp-0x1c]");
    _t9 = _v16;
    _v32 = _t9;
    asm("fild dword [ebp-0x1c]");
    asm("fld qword [0x80554d8]");
    asm("fmulp st1, st0");
    asm("faddp st1, st0");
    return _t9;
}

int lame_set_stream_binary_mode(const _None fp)
{// addr = 0x0804F0E6
    _unknown_ __ebp;

    return 0;
}

off_t lame_get_file_size(const const char* filename)
{// addr = 0x0804F0F0
    struct stat sb;
    _unknown_ _v60;
    long long int _v64;
    char _v108;
    char* _v120;
    _unknown_ __ebp;
    const char* _t7;
    _unknown_ _t8;
    _unknown_ _t10;
    _unknown_ _t11;

    _v120 =  &_v108;
    _t7 = filename;
     *__esp = _t7;
    L08054790();
    if(_t7 != 0) {
        return -1;
    }
    return _v64;
}

int set_id3tag(lame_global_flags* gfp, int type, const char* str)
{// addr = 0x0804F120
    _unknown_ __ebp;
    _unknown_ _t6;
    _unknown_ _t7;

    if(type - 97 > 24) {
        return 0;
    }
    goto __eax;
}

int id3_tag(lame_global_flags* gfp, int type, TextEncoding enc, char* str)
{// addr = 0x0804F204
    _Unknown_base* x;
    int result;
    const char* _v16;
    int _v20;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t19;

    _v16 = 0;
    _v16 = strdup(str);
    _v20 = set_id3tag(gfp, type, _v16);
    free(_v16);
    return _v20;
}

int lame_version_print(const FILE* fp)
{// addr = 0x0804F24B
    const char* b;
    const char* v;
    const char* u;
    const size_t lenb;
    const size_t lenv;
    const size_t lenu;
    const size_t lw;
    const size_t sw;
    char* _v16;
    char* _v20;
    char* _v24;
    int _v28;
    int _v32;
    int _v36;
    intOrPtr _v40;
    intOrPtr _v44;
    char* _v52;
    char* _v56;
    char* _v60;
    char* _v64;
    char* _v68;
    _unknown_ _v72;
    _unknown_ __ebp;
    char* _t60;
    _unknown_ _t73;
    _unknown_ _t74;
    _unknown_ _t77;
    _unknown_ _t84;
    _unknown_ _t89;

    _t60 = __eax;
    get_lame_os_bitness();
    _v16 = _t60;
    get_lame_version();
    _v20 = _t60;
    get_lame_url();
    _v24 = _t60;
    _v28 = strlen(_v16);
    _v32 = strlen(_v20);
    _v36 = strlen(_v24);
    _v40 = 80;
    _v44 = 16;
    if(_v28 + _v32 + _v36 + _v44 <= _v40 || _v36 + 2 > _v40) {
        if(_v28 == 0) {
            _v64 = _v24;
            _v68 = _v20;
            fprintf(fp, "LAME version %s (%s)\n\n");
            return 0;
        } else {
            _v60 = _v24;
            _v64 = _v20;
            _v68 = _v16;
            fprintf(fp, "LAME %s version %s (%s)\n\n");
            return 0;
        }
    } else {
        if(_v28 != 0) {
            _v52 = _v24;
            _v56 = 134567314;
            _v60 = _v40 - _v36 - 2;
            _v64 = _v20;
            _v68 = _v16;
            fprintf(fp, "LAME %s version %s\n%*s(%s)\n\n");
            return 0;
        }
        _v56 = _v24;
        _v60 = 134567314;
        _v64 = _v40 - _v36 - 2;
        _v68 = _v20;
        fprintf(fp, "LAME version %s\n%*s(%s)\n\n");
        return 0;
    }
}

int print_license(const FILE* fp)
{// addr = 0x0804F3AB
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t27;
    _unknown_ _t29;
    _unknown_ _t31;
    _unknown_ _t33;
    _unknown_ _t35;
    _unknown_ _t37;
    _unknown_ _t39;
    _unknown_ _t40;

    lame_version_print(fp);
    fwrite("Can I use LAME in my commercial program?\n\nYes, you can, under the restrictions of the LGPL.  In particular, you\ncan include a compiled version of the LAME library (for example,\nlame.dll) with a commercial program.  Some notable requirements of\nthe LGPL:\n\n", 1, 255, fp);
    fwrite("1. In your program, you cannot include any source code from LAME, with\n   the exception of files whose only purpose is to describe the library\n   interface (such as lame.h).\n\n", 1, 175, fp);
    fwrite("2. Any modifications of LAME must be released under the LGPL.\n   The LAME project (www.mp3dev.org) would appreciate being\n   notified of any modifications.\n\n", 1, 157, fp);
    fwrite("3. You must give prominent notice that your program is:\n      A. using LAME (including version number)\n      B. LAME is under the LGPL\n      C. Provide a copy of the LGPL.  (the file COPYING contains the LGPL)\n      D. Provide a copy of LAME source, or a pointer where the LAME\n         source can be obtained (such as www.mp3dev.org)\n   An example of prominent notice would be an "About the LAME encoding engine"\n   button in some pull down menu within the executable of your program.\n\n", 1, 487, fp);
    fwrite("4. If you determine that distribution of LAME requires a patent license,\n   you must obtain such license.\n\n\n", 1, 108, fp);
    fwrite("*** IMPORTANT NOTE ***\n\nThe decoding functions provided in LAME use the mpglib decoding engine which\nis under the GPL.  They may not be used by any program not released under the\nGPL unless you obtain such permission from the MPG123 project (www.mpg123.de).\n\n", 1, 259, fp);
    return 0;
}

int usage(const FILE* fp, const char* ProgramName)
{// addr = 0x0804F49B
    const char* _v20;
    const char* _v24;
    const char* _v28;
    const char* _v32;
    const char* _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t15;
    _unknown_ _t18;
    _unknown_ _t19;

    lame_version_print(fp);
    _v20 = ProgramName;
    _v24 = ProgramName;
    _v28 = ProgramName;
    _v32 = ProgramName;
    _v36 = ProgramName;
    fprintf(fp, "usage: %s [options] <infile> [outfile]\n\n    <infile> and/or <outfile> can be "-", which means stdin/stdout.\n\nTry:\n     "%s --help"           for general usage information\n or:\n     "%s --preset help"    for information on suggested predefined settings\n or:\n     "%s --longhelp"\n  or "%s -?"              for a complete options list\n\n");
    return 0;
}

int short_help(const lame_global_flags* gfp, const FILE* fp, const char* ProgramName)
{// addr = 0x0804F4EA
    _unknown_ _v16;
    const char* _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t19;
    _unknown_ _t22;
    const lame_global_flags* _t23;
    _unknown_ _t25;
    _unknown_ _t27;
    _unknown_ _t29;
    _unknown_ _t30;

    lame_version_print(fp);
    _v20 = ProgramName;
    fprintf(fp, "usage: %s [options] <infile> [outfile]\n\n    <infile> and/or <outfile> can be "-", which means stdin/stdout.\n\nRECOMMENDED:\n    lame -V2 input.wav output.mp3\n\n");
    _t23 = gfp;
     *__esp = _t23;
    lame_get_VBR_q();
    _v20 = _t23;
    fprintf(fp, "OPTIONS:\n    -b bitrate      set the bitrate, default 128 kbps\n    -h              higher quality, but a little slower.  Recommended.\n    -f              fast mode (lower quality)\n    -V n            quality setting for VBR.  default n=%i\n                    0=high quality,bigger files. 9=smaller files\n");
    fwrite("    --preset type   type must be "medium", "standard", "extreme", "insane",\n                    or a value for an average desired bitrate and depending\n                    on the value specified, appropriate quality settings will\n                    be used.\n                    "--preset help" gives more info on these\n\n", 1, 321, fp);
    fwrite("    --longhelp      full list of options\n\n    --license       print License information\n\n", 1, 89, fp);
    return 0;
}

wait_for(const FILE* fp, int lessmode)
{// addr = 0x0804F588
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t8;
    _unknown_ _t10;
    _unknown_ _t12;
    _unknown_ _t13;

    if(lessmode == 0) {
        fputc(10, fp);
    } else {
        fflush(fp);
        getchar();
    }
    fputc(10, fp);
    return;
}

int long_help(const lame_global_flags* gfp, const FILE* fp, const char* ProgramName, int lessmode)
{// addr = 0x0804F5CE
    _unknown_ _v16;
    const char* _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t117;
    _unknown_ _t120;
    _unknown_ _t122;
    _unknown_ _t124;
    _unknown_ _t128;
    _unknown_ _t130;
    _unknown_ _t132;
    _unknown_ _t136;
    _unknown_ _t138;
    _unknown_ _t142;
    const lame_global_flags* _t143;
    _unknown_ _t145;
    _unknown_ _t147;
    _unknown_ _t151;
    _unknown_ _t153;
    _unknown_ _t155;
    _unknown_ _t159;
    _unknown_ _t163;
    _unknown_ _t166;
    _unknown_ _t168;
    _unknown_ _t172;
    _unknown_ _t174;
    _unknown_ _t176;
    _unknown_ _t180;
    _unknown_ _t184;
    _unknown_ _t185;

    lame_version_print(fp);
    _v20 = ProgramName;
    fprintf(fp, "usage: %s [options] <infile> [outfile]\n\n    <infile> and/or <outfile> can be "-", which means stdin/stdout.\n\nRECOMMENDED:\n    lame -V2 input.wav output.mp3\n\n");
    fwrite("OPTIONS:\n  Input options:\n    --scale <arg>   scale input (multiply PCM data) by <arg>\n    --scale-l <arg> scale channel 0 (left) input (multiply PCM data) by <arg>\n    --scale-r <arg> scale channel 1 (right) input (multiply PCM data) by <arg>\n    --mp1input      input file is a MPEG Layer I   file\n    --mp2input      input file is a MPEG Layer II  file\n    --mp3input      input file is a MPEG Layer III file\n    --nogap <file1> <file2> <...>\n                    gapless encoding for a set of contiguous files\n    --nogapout <dir>\n                    output dir for gapless encoding (must precede --nogap)\n    --nogaptags     allow the use of VBR tags in gapless encoding\n", 1, 675, fp);
    fwrite("\n  Input options for RAW PCM:\n    -r              input is raw pcm\n    -x              force byte-swapping of input\n    -s sfreq        sampling frequency of input file (kHz) - default 44.1 kHz\n    --bitwidth w    input bit width is w (default 16)\n    --signed        input is signed (default)\n    --unsigned      input is unsigned\n    --little-endian input is little-endian (default)\n    --big-endian    input is big-endian\n", 1, 425, fp);
    wait_for(fp, lessmode);
    fwrite("  Operational options:\n    -a              downmix from stereo to mono file for mono encoding\n    -m <mode>       (j)oint, (s)imple, (f)orce, (d)dual-mono, (m)ono\n                    default is (j) or (s) depending on bitrate\n                    joint  = joins the best possible of MS and LR stereo\n                    simple = force LR stereo on all frames\n                    force  = force MS stereo on all frames.\n    --preset type   type must be "medium", "standard", "extreme", "insane",\n                    or a value for an average desired bitrate and depending\n                    on the value specified, appropriate quality settings will\n                    be used.\n                    "--preset help" gives more info on these\n    --comp  <arg>   choose bitrate to achive a compression ratio of <arg>\n", 1, 812, fp);
    fwrite("    --replaygain-fast   compute RG fast but slightly inaccurately (default)\n    --replaygain-accurate   compute RG more accurately and find the peak sample\n    --noreplaygain  disable ReplayGain analysis\n    --clipdetect    enable --replaygain-accurate and print a message whether\n                    clipping occurs and how far the waveform is from full scale\n", 1, 361, fp);
    fwrite("    --flush         flush output stream as soon as possible\n    --freeformat    produce a free format bitstream\n    --decode        input=mp3 file, output=wav\n    -t              disable writing wav header when using --decode\n", 1, 226, fp);
    wait_for(fp, lessmode);
    fwrite("  Verbosity:\n    --disptime <arg>print progress report every arg seconds\n    -S              don't print progress report, VBR histograms\n    --nohist        disable VBR histogram display\n    --silent        don't print anything on screen\n    --quiet         don't print anything on screen\n    --brief         print more useful information\n    --verbose       print a lot of useful information\n\n", 1, 394, fp);
    fwrite("  Noise shaping & psycho acoustic algorithms:\n    -q <arg>        <arg> = 0...9.  Default  -q 5 \n                    -q 0:  Highest quality, very slow \n                    -q 9:  Poor quality, but fast \n    -h              Same as -q 2.   Recommended.\n    -f              Same as -q 7.   Fast, ok quality\n", 1, 305, fp);
    wait_for(fp, lessmode);
    fwrite("  CBR (constant bitrate, the default) options:\n    -b <bitrate>    set the bitrate in kbps, default 128 kbps\n    --cbr           enforce use of constant bitrate\n\n  ABR options:\n    --abr <bitrate> specify average bitrate desired (instead of quality)\n\n", 1, 251, fp);
    _t143 = gfp;
     *__esp = _t143;
    lame_get_VBR_q();
    _v20 = _t143;
    fprintf(fp, "  VBR options:\n    -V n            quality setting for VBR.  default n=%i\n                    0=high quality,bigger files. 9=smaller files\n    -v              the same as -V 4\n    --vbr-old       use old variable bitrate (VBR) routine\n    --vbr-new       use new variable bitrate (VBR) routine (default)\n");
    fwrite("    -b <bitrate>    specify minimum allowed bitrate, default  32 kbps\n    -B <bitrate>    specify maximum allowed bitrate, default 320 kbps\n    -F              strictly enforce the -b option, for use with players that\n                    do not support low bitrate mp3\n    -t              disable writing LAME Tag\n    -T              enable and force writing LAME Tag\n", 1, 368, fp);
    wait_for(fp, lessmode);
    fwrite("  PSY related:\n", 1, 15, fp);
    fwrite("    --temporal-masking x   x=0 disables, x=1 enables temporal masking effect\n    --nssafejoint   M/S switching criterion\n    --nsmsfix <arg> M/S switching tuning [effective 0-3.5]\n    --interch x     adjust inter-channel masking ratio\n    --ns-bass x     adjust masking for sfbs  0 -  6 (long)  0 -  5 (short)\n    --ns-alto x     adjust masking for sfbs  7 - 13 (long)  6 - 10 (short)\n    --ns-treble x   adjust masking for sfbs 14 - 21 (long) 11 - 12 (short)\n", 1, 460, fp);
    fwrite("    --ns-sfb21 x    change ns-treble by x dB for sfb21\n", 1, 55, fp);
    wait_for(fp, lessmode);
    fwrite("  experimental switches:\n    -Y              lets LAME ignore noise in sfb21, like in CBR\n", 1, 90, fp);
    wait_for(fp, lessmode);
    fwrite("  MP3 header/stream options:\n    -e <emp>        de-emphasis n/5/c  (obsolete)\n    -c              mark as copyright\n    -o              mark as non-original\n    -p              error protection.  adds 16 bit checksum to every frame\n                    (the checksum is computed correctly)\n    --nores         disable the bit reservoir\n    --strictly-enforce-ISO   comply as much as possible to ISO MPEG spec\n\n", 1, 410, fp);
    fprintf(fp, "  Filter options:\n  --lowpass <freq>        frequency(kHz), lowpass filter cutoff above freq\n  --lowpass-width <freq>  frequency(kHz) - default 15%% of lowpass freq\n  --highpass <freq>       frequency(kHz), highpass filter cutoff below freq\n  --highpass-width <freq> frequency(kHz) - default 15%% of highpass freq\n");
    fwrite("  --resample <sfreq>  sampling frequency of output file(kHz)- default=automatic\n", 1, 80, fp);
    wait_for(fp, lessmode);
    fwrite("  ID3 tag options:\n    --tt <title>    audio/song title (max 30 chars for version 1 tag)\n    --ta <artist>   audio/song artist (max 30 chars for version 1 tag)\n    --tl <album>    audio/song album (max 30 chars for version 1 tag)\n    --ty <year>     audio/song year of issue (1 to 9999)\n    --tc <comment>  user-defined text (max 30 chars for v1 tag, 28 for v1.1)\n    --tn <track[/total]>   audio/song track number and (optionally) the total\n                           number of tracks on the original recording. (track\n                           and total each 1 to 255. just the track number\n                           creates v1.1 tag, providing a total forces v2.0).\n    --tg <genre>    audio/song genre (name or number in list)\n    --ti <file>     audio/song albumArt (jpeg/png/gif file, 128KB max, v2.3)\n    --tv <id=value> user-defined frame specified by id and value (v2.3 tag)\n", 1, 886, fp);
    fwrite("    --add-id3v2     force addition of version 2 tag\n    --id3v1-only    add only a version 1 tag\n    --id3v2-only    add only a version 2 tag\n    --space-id3v1   pad version 1 tag with spaces instead of nulls\n    --pad-id3v2     same as '--pad-id3v2-size 128'\n    --pad-id3v2-size <value> adds version 2 tag, pad with extra <value> bytes\n    --genre-list    print alphabetically sorted ID3 genre list and exit\n    --ignore-tag-errors  ignore errors in values passed for tags\n\n", 1, 476, fp);
    fwrite("    Note: A version 2 tag will NOT be added unless one of the input fields\n    won't fit in a version 1 tag (e.g. the title string is longer than 30\n    characters), or the '--add-id3v2' or '--id3v2-only' options are used,\n    or output is redirected to stdout.\n\nMisc:\n    --license       print License information\n\n", 1, 316, fp);
    wait_for(fp, lessmode);
    fwrite("  Platform specific:\n    --noasm <instructions> disable assembly optimizations for mmx/3dnow/sse\n", 1, 97, fp);
    wait_for(fp, lessmode);
    display_bitrates(fp);
    return 0;
}

display_bitrate(const FILE* fp, const const char* version, const int d, const int indx)
{// addr = 0x0804F991
    int i;
    int nBitrates;
    intOrPtr _v16;
    intOrPtr _v20;
    signed int _v44;
    signed int _v48;
    const char* _v52;
    _unknown_ _v56;
    _unknown_ __ebp;
    _unknown_ _t37;
    _unknown_ _t39;
    _unknown_ _t43;
    _unknown_ _t49;
    _unknown_ _t51;
    _unknown_ _t52;
    _unknown_ _t53;
    _unknown_ _t54;
    _unknown_ _t55;
    _unknown_ _t56;
    _unknown_ _t57;

    _v20 = 14;
    if(d == 4) {
        _v20 = 8;
    }
    asm("fild dword [ebp+0x10]");
    asm("fld qword [0x8059820]");
    asm("fdivrp st1, st0");
    asm("fstp qword [esp+0x14]");
    _v44 = 48 / d;
    _v48 = 32 / d;
    _v52 = version;
    fprintf(fp, "\nMPEG-%-3s layer III sample frequencies (kHz):  %2d  %2d  %g\nbitrates (kbps):");
    _v16 = 1;
    while(_v16 <= _v20) {
        _v52 =  *(((indx << 4) + _v16) * 4 +  &__imp__bitrate_table);
        fprintf(fp, " %2i");
        _v16 = _v16 + 1;
    }
}

int display_bitrates(const FILE* fp)
{// addr = 0x0804FA50
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t20;
    _unknown_ _t22;
    _unknown_ _t23;

    display_bitrate(fp, "1", 1, 1);
    display_bitrate(fp, "2", 2, 0);
    display_bitrate(fp, "2.5", 4, 0);
    fputc(10, fp);
    fflush(fp);
    return 0;
}

presets_longinfo_dm(FILE* msgfp)
{// addr = 0x0804FAE4
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t50;
    _unknown_ _t52;
    _unknown_ _t54;
    _unknown_ _t56;
    _unknown_ _t58;
    _unknown_ _t60;
    _unknown_ _t62;
    _unknown_ _t64;
    _unknown_ _t66;
    _unknown_ _t68;
    _unknown_ _t70;
    _unknown_ _t72;

    fwrite("\nThe --preset switches are aliases over LAME settings.\n\n\n", 1, 57, msgfp);
    fwrite("To activate these presets:\n\n   For VBR modes (generally highest quality):\n\n", 1, 75, msgfp);
    fwrite("     "--preset medium" This preset should provide near transparency\n                             to most people on most music.\n\n     "--preset standard" This preset should generally be transparent\n                             to most people on most music and is already\n                             quite high in quality.\n\n", 1, 323, msgfp);
    fwrite("     "--preset extreme" If you have extremely good hearing and similar\n                             equipment, this preset will generally provide\n                             slightly higher quality than the "standard"\n                             mode.\n\n", 1, 255, msgfp);
    fwrite("   For CBR 320kbps (highest quality possible from the --preset switches):\n\n     "--preset insane"  This preset will usually be overkill for most\n                             people and most situations, but if you must\n                             have the absolute highest quality with no\n                             regard to filesize, this is the way to go.\n\n", 1, 362, msgfp);
    fwrite("   For ABR modes (high quality per given bitrate but not as high as VBR):\n\n     "--preset <kbps>"  Using this preset will usually give you good\n                             quality at a specified bitrate. Depending on the\n                             bitrate entered, this preset will determine the\n", 1, 299, msgfp);
    fwrite("                             optimal settings for that particular situation.\n                             While this approach works, it is not nearly as\n                             flexible as VBR, and usually will not attain the\n                             same level of quality as VBR at higher bitrates.\n\n", 1, 310, msgfp);
    fwrite("The following options are also available for the corresponding profiles:\n\n   <fast>        standard\n   <fast>        extreme\n                 insane\n   <cbr> (ABR Mode) - The ABR Mode is implied. To use it,\n                      simply specify a bitrate. For example:\n                      "--preset 185" activates this\n                      preset and uses 185 as an average kbps.\n\n", 1, 383, msgfp);
    fwrite("   "fast" - Enables the fast VBR mode for a particular profile.\n\n", 1, 65, msgfp);
    fwrite("   "cbr"  - If you use the ABR mode (read above) with a significant\n            bitrate such as 80, 96, 112, 128, 160, 192, 224, 256, 320,\n            you can use the "cbr" option to force CBR mode encoding\n            instead of the standard abr mode. ABR does provide higher\n            quality but CBR may be useful in situations such as when\n            streaming an mp3 over the internet may be important.\n\n", 1, 412, msgfp);
    fwrite("    For example:\n\n    "--preset fast standard <input file> <output file>"\n or "--preset cbr 192 <input file> <output file>"\n or "--preset 172 <input file> <output file>"\n or "--preset extreme <input file> <output file>"\n\n\n", 1, 222, msgfp);
    fwrite("A few aliases are also available for ABR mode:\nphone => 16kbps/mono        phon+/lw/mw-eu/sw => 24kbps/mono\nmw-us => 40kbps/mono        voice => 56kbps/mono\nfm/radio/tape => 112kbps    hifi => 160kbps\ncd => 192kbps               studio => 256kbps\n", 1, 247, msgfp);
    return;
}

int presets_set(lame_t gfp, int fast, int cbr, const char* preset_name, const char* ProgramName)
{// addr = 0x0804FC9C
    int mono;
    int _v16;
    const char* _v40;
    const char* _v44;
    const char* _v48;
    const char* _v52;
    int _v56;
    _unknown_ __ebp;
    _unknown_ _t133;
    _unknown_ _t134;
    _unknown_ _t140;
    _unknown_ _t141;
    _unknown_ _t145;
    _unknown_ _t147;
    _unknown_ _t148;
    _unknown_ _t154;
    _unknown_ _t158;
    _unknown_ _t161;
    _unknown_ _t165;
    _unknown_ _t169;
    _unknown_ _t180;
    _unknown_ _t182;

    _v16 = 0;
    if(strcmp(preset_name, "help") != 0) {
L4:
        if(strcmp(preset_name, "phone") == 0) {
L5:
            preset_name = "16";
            _v16 = 1;
        }
        if(strcmp(preset_name, "phon+") == 0 || strcmp(preset_name, "lw") == 0 || strcmp(preset_name, "mw-eu") == 0 || strcmp(preset_name, "sw") == 0) {
            preset_name = "24";
            _v16 = 1;
        }
        if(strcmp(preset_name, "mw-us") == 0) {
            preset_name = "40";
            _v16 = 1;
        }
        if(strcmp(preset_name, "voice") == 0) {
            preset_name = "56";
            _v16 = 1;
        }
        if(strcmp(preset_name, "fm") == 0) {
            preset_name = "112";
        }
        if(strcmp(preset_name, "radio") == 0 || strcmp(preset_name, "tape") == 0) {
            preset_name = "112";
        }
        if(strcmp(preset_name, "hifi") == 0) {
            preset_name = "160";
        }
        if(strcmp(preset_name, "cd") == 0) {
            preset_name = "192";
        }
        if(strcmp(preset_name, "studio") == 0) {
            preset_name = "256";
        }
        if(strcmp(preset_name, "medium") != 0) {
            if(strcmp(preset_name, "standard") != 0) {
                if(strcmp(preset_name, "extreme") != 0) {
                    if(strcmp(preset_name, "insane") != 0 || fast > 0) {
                        if(atoi(preset_name) <= 0 || fast > 0) {
L54:
                            lame_version_print( *134593772);
                            error_printf("Error: You did not enter a valid profile and/or options with --preset\n\nAvailable profiles are:\n\n   <fast>        medium\n   <fast>        standard\n   <fast>        extreme\n                 insane\n          <cbr> (ABR Mode) - The ABR Mode is implied. To use it,\n                             simply specify a bitrate. For example:\n                             "--preset 185" activates this\n                             preset and uses 185 as an average kbps.\n\n");
                            _v40 = ProgramName;
                            _v44 = ProgramName;
                            _v48 = ProgramName;
                            _v52 = ProgramName;
                            _v56 = ProgramName;
                            error_printf("    Some examples:\n\n or "%s --preset fast standard <input file> <output file>"\n or "%s --preset cbr 192 <input file> <output file>"\n or "%s --preset 172 <input file> <output file>"\n or "%s --preset extreme <input file> <output file>"\n\nFor further information try: "%s --preset help"\n");
                            return -1;
                        } else {
                            if(atoi(preset_name) <= 7 || atoi(preset_name) > 320) {
                                lame_version_print( *134593772);
                                _v56 = ProgramName;
                                error_printf("Error: The bitrate specified is out of the valid range for this preset\n\nWhen using this mode you must enter a value between "32" and "320"\n\nFor further information try: "%s --preset help"\n");
                                return -1;
                            } else {
                                _v56 = atoi(preset_name);
                                 *__esp = gfp;
                                lame_set_preset();
                                if(cbr == 1) {
                                    _v56 = 0;
                                     *__esp = gfp;
                                    lame_set_VBR();
                                }
                                if(_v16 != 1) {
                                    return 0;
                                }
                                _v56 = 3;
                                 *__esp = gfp;
                                lame_set_mode();
                                return 0;
                            }
                            goto L54;
                        }
                        return __eax;
                    }
                    _v56 = 1003;
                     *__esp = gfp;
                    lame_set_preset();
                    return 0;
                }
                goto L37;
            }
            goto L32;
L37:
            _v56 = 0;
             *__esp = gfp;
            lame_set_VBR_q();
            if(fast <= 0) {
                _v56 = 2;
                 *__esp = gfp;
                lame_set_VBR();
                return 0;
            }
            _v56 = 4;
             *__esp = gfp;
            lame_set_VBR();
            return 0;
        } else {
            _v56 = 4;
             *__esp = gfp;
            lame_set_VBR_q();
            if(fast <= 0) {
                _v56 = 2;
                 *__esp = gfp;
                lame_set_VBR();
                return 0;
            }
            _v56 = 4;
             *__esp = gfp;
            lame_set_VBR();
            return 0;
        }
L32:
        _v56 = 2;
         *__esp = gfp;
        lame_set_VBR_q();
        if(fast <= 0) {
            _v56 = 2;
             *__esp = gfp;
            lame_set_VBR();
            return 0;
        }
        _v56 = 4;
         *__esp = gfp;
        lame_set_VBR();
        return 0;
    }
    if(fast > 0) {
        goto L4;
    } else {
        if(cbr > 0) {
            goto L4;
        } else {
            lame_version_print(__imp__stdout);
            presets_longinfo_dm(__imp__stdout);
            return -1;
        }
    }
    goto L5;
}

genre_list_handler(int num, const char* name, _Unknown_base* cookie)
{// addr = 0x080500DE
    const char* _v20;
    int _v24;
    _unknown_ __ebp;
    _unknown_ _t7;

    _v20 = name;
    _v24 = num;
    console_printf("%3d %s\n");
    return;
}

int local_strcasecmp(const char* s1, const char* s2)
{// addr = 0x08050100
    unsigned char c1;
    unsigned char c2;
    signed int _v13;
    signed int _v14;
    _unknown_ __ebp;
    signed int _t21;
    signed int _t24;

    while(1) {
        _t21 =  *s1 & 255 & 4294967295;
         *__esp = _t21;
        tolower();
        _v13 = _t21 & 4294967295;
        _t24 =  *s2 & 255 & 4294967295;
         *__esp = _t24;
        tolower();
        _v14 = _t24 & 4294967295;
        if(_v13 == 0) {
            break;
        }
        s1 =  &(s1[1]);
        s2 =  &(s2[1]);
        if((_v13 & 255 & 4294967295) != _v14) {
            return (_v13 & 255) - (_v14 & 255);
        }
    }
    return (_v13 & 255) - (_v14 & 255);
}

int filename_to_type(const char* FileName)
{// addr = 0x08050158
    size_t len;
    int _v16;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t43;
    _unknown_ _t44;
    _unknown_ _t45;
    _unknown_ _t46;
    _unknown_ _t47;
    _unknown_ _t48;
    _unknown_ _t49;
    _unknown_ _t50;
    _unknown_ _t51;
    _unknown_ _t52;

    _v16 = strlen(FileName);
    if(_v16 <= 3) {
        return 0;
    }
    FileName = FileName + _v16 - 4;
    if(local_strcasecmp(FileName, ".mpg") == 0) {
        return 7;
    }
    if(local_strcasecmp(FileName, ".mp1") == 0) {
        return 7;
    }
    if(local_strcasecmp(FileName, ".mp2") == 0) {
        return 7;
    }
    if(local_strcasecmp(FileName, ".mp3") == 0) {
        return 7;
    }
    if(local_strcasecmp(FileName, ".wav") == 0) {
        return 2;
    }
    if(local_strcasecmp(FileName, ".aif") == 0) {
        return 3;
    }
    if(local_strcasecmp(FileName, ".raw") == 0) {
        return 1;
    }
    if(local_strcasecmp(FileName, ".ogg") != 0) {
        return 0;
    }
    return 8;
}

int resample_rate(double freq)
{// addr = 0x08050285
    signed int _v16;
    double _v20;
    signed short _v22;
    signed int _v24;
    intOrPtr _v28;
    _unknown_ __ebp;
    signed int _t14;
    _unknown_ _t18;
    _unknown_ _t19;
    _unknown_ _t20;

    _v20 = freq;
    _t14 = _a8;
    _v16 = _t14;
    asm("fld qword [ebp-0x10]");
    asm("fld qword [0x8059828]");
    asm("fxch st0, st1");
    asm("fucomip st0, st1");
    asm("fstp st0");
    asm("setnb al");
    if((_t14 & 4294967295) != 0) {
        asm("fld qword [ebp-0x10]");
        asm("fld qword [0x8059830]");
        asm("fmulp st1, st0");
        asm("fstp qword [ebp-0x10]");
    }
    asm("fld qword [ebp-0x10]");
    asm("fnstcw word [ebp-0x12]");
    _v24 = _v22 & 65535 & 4294967295;
    asm("fldcw word [ebp-0x14]");
    asm("fistp dword [ebp-0x18]");
    asm("fldcw word [ebp-0x12]");
    if(_v28 - 8 <= 40) {
        goto __eax;
    }
    asm("fld qword [ebp-0x10]");
    asm("fstp qword [esp+0x4]");
    error_printf("Illegal resample frequency: %.3f kHz\n");
    return 0;
}

int set_id3_albumart(lame_t gfp, const char* file_name)
{// addr = 0x08050341
    int ret;
    FILE* fpi;
    char* albumart;
    size_t size;
    int _v16;
    struct _IO_FILE* _v20;
    const char* _v24;
    int _v28;
    _unknown_ _v32;
    int _v36;
    const char* _v40;
    _unknown_ __ebp;
    _unknown_ _t46;
    const char* _t47;
    _unknown_ _t49;
    _unknown_ _t53;
    lame_global_flags* _t62;
    long _t63;
    _unknown_ _t65;
    _unknown_ _t67;
    int _t68;
    _unknown_ _t69;
    _unknown_ _t72;
    _unknown_ _t74;
    _unknown_ _t76;
    _unknown_ _t77;

    _v16 = -1;
    _v20 = 0;
    _v24 = 0;
    if(file_name == 0) {
        return 0;
    }
    _v40 = 134581836;
    _t47 = file_name;
     *__esp = _t47;
    fopen64();
    _v20 = _t47;
    if(_v20 != 0) {
        fseek(_v20, 0, 2);
        _v28 = ftell(_v20);
        fseek(_v20, 0, 0);
        _v24 = malloc(_v28);
        if(_v24 != 0) {
            if(fread(_v24, 1, _v28, _v20) == _v28) {
                _v36 = _v28;
                _v40 = _v24;
                _t62 = gfp;
                 *__esp = _t62;
                id3tag_set_albumart();
                if(_t62 == 0) {
                    _t63 = 0;
                } else {
                    _t63 = 4;
                }
                _v16 = _t63;
            } else {
                _v16 = 3;
            }
            free(_v24);
        } else {
            _v16 = 2;
        }
        fclose(_v20);
    } else {
        _v16 = 1;
    }
    _t68 = _v16;
    if(_t68 == 2) {
        error_printf("Insufficient memory for reading the albumart.\n");
        return _v16;
    } else {
        if(_t68 > 2) {
            if(_t68 == 3) {
                goto L23;
            }
            goto L19;
        }
        if(_t68 != 1) {
            return _v16;
        }
        _v40 = file_name;
        error_printf("Could not find: '%s'.\n");
        return _v16;
L19:
        if(_t68 != 4) {
            return _v16;
        }
        _v40 = file_name;
        error_printf("Unsupported image: '%s'.\nSpecify JPEG/PNG/GIF image (128KB maximum)\n");
        return _v16;
    }
L23:
    _v40 = file_name;
    error_printf("Read error: '%s'.\n");
    return _v16;
}

int parse_args(lame_global_flags* gfp, int argc, char** argv, const char* inPath, const char* outPath, char** nogap_inPath, int* num_nogap)
{// addr = 0x080504D7
    int input_file;
    int i;
    int autoconvert;
    double val;
    int nogap;
    int nogap_tags;
    const char* ProgramName;
    int count_nogap;
    int noreplaygain;
    int id3tag_mode;
    char c;
    char* token;
    char* arg;
    char* nextArg;
    int argUsed;
    int ret;
    int ret;
    int n;
    double d;
    int k;
    double d;
    int k;
    double d;
    int k;
    double d;
    int k;
    FILE* fp;
    int fast;
    int cbr;
    int tmp_quality;
    int x;
    int y;
    int n;
    int n;
    signed int _v13;
    int _v20;
    signed int _v24;
    union ByteOrder _v28;
    int _v32;
    int _v36;
    const char* _v40;
    signed int _v44;
    int _v48;
    int _v52;
    const char* _v56;
    const char* _v60;
    char* _v64;
    int _v68;
    int _v72;
    int _v76;
    int _v80;
    signed int _v84;
    signed int _v88;
    signed int _v92;
    signed int _v96;
    FILE* _v100;
    union ByteOrder _v104;
    union ByteOrder _v108;
    signed int _v178;
    signed int _v180;
    int _v184;
    _unknown_ _v204;
    _unknown_ _v208;
    union ByteOrder _v212;
    int _v216;
    _unknown_ __ebp;
    _unknown_ _t763;
    _unknown_ _t764;
    _unknown_ _t770;
    _unknown_ _t776;
    _unknown_ _t777;
    _unknown_ _t779;
    _unknown_ _t790;
    char* _t793;
    signed int _t799;
    const char* _t802;
    _unknown_ _t807;
    _unknown_ _t808;
    _unknown_ _t809;
    _unknown_ _t954;
    _unknown_ _t955;
    _unknown_ _t962;
    _unknown_ _t963;
    char* _t980;
    _unknown_ _t993;
    _unknown_ _t1008;
    _unknown_ _t1009;
    _unknown_ _t1011;
    _unknown_ _t1015;
    _unknown_ _t1017;
    _unknown_ _t1022;
    _unknown_ _t1024;
    _unknown_ _t1025;
    _unknown_ _t1028;
    _unknown_ _t1029;
    _unknown_ _t1031;
    signed int _t1033;
    _unknown_ _t1037;
    signed int _t1039;
    _unknown_ _t1043;
    signed int _t1045;
    _unknown_ _t1049;
    signed int _t1051;
    _unknown_ _t1055;
    signed int _t1057;
    _unknown_ _t1065;
    signed int _t1069;
    _unknown_ _t1071;
    _unknown_ _t1072;
    signed int _t1074;
    _unknown_ _t1075;
    _unknown_ _t1076;
    signed int _t1081;
    _unknown_ _t1082;
    _unknown_ _t1083;
    signed int _t1089;
    _unknown_ _t1090;
    _unknown_ _t1091;
    signed int _t1096;
    _unknown_ _t1097;
    _unknown_ _t1098;
    _unknown_ _t1103;
    _unknown_ _t1106;
    _unknown_ _t1108;
    _unknown_ _t1121;
    _unknown_ _t1127;
    _unknown_ _t1132;
    _unknown_ _t1133;
    _unknown_ _t1136;
    _unknown_ _t1138;
    _unknown_ _t1139;
    _unknown_ _t1141;
    _unknown_ _t1142;
    _unknown_ _t1148;
    _unknown_ _t1149;
    _unknown_ _t1150;
    _unknown_ _t1153;
    _unknown_ _t1156;
    _unknown_ _t1159;
    _unknown_ _t1162;
    _unknown_ _t1165;
    _unknown_ _t1182;
    _unknown_ _t1185;
    _unknown_ _t1188;
    _unknown_ _t1199;
    _unknown_ _t1200;
    _unknown_ _t1205;
    _unknown_ _t1206;
    _unknown_ _t1207;
    _unknown_ _t1208;
    lame_global_flags* _t1216;
    lame_global_flags* _t1217;
    lame_global_flags* _t1218;
    lame_global_flags* _t1220;
    lame_global_flags* _t1221;
    lame_global_flags* _t1223;
    _unknown_ _t1225;
    _unknown_ _t1235;
    _unknown_ _t1247;
    _unknown_ _t1253;
    lame_global_flags* _t1266;
    lame_global_flags* _t1268;
    _unknown_ _t1269;
    lame_global_flags* _t1271;
    _unknown_ _t1272;
    _unknown_ _t1273;
    _unknown_ _t1274;
    lame_global_flags* _t1275;
    _unknown_ _t1278;
    _unknown_ _t1279;
    lame_global_flags* _t1283;
    _unknown_ _t1284;
    _unknown_ _t1291;
    lame_global_flags* _t1292;
    _unknown_ _t1295;
    _unknown_ _t1298;
    _unknown_ _t1301;
    int _t1302;
    _unknown_ _t1305;
    _unknown_ _t1306;
    _unknown_ _t1311;
    _unknown_ _t1326;

    _v20 = 0;
    _v28 = 0;
    _v32 = 0;
    _v36 = 0;
    _v40 =  *argv;
    _v44 = 0;
    _v48 = 0;
    _v52 = 0;
     *inPath = 0;
     *outPath = 0;
    silent = 0;
    ignore_tag_errors = 0;
    brhist = 1;
    mp3_delay = 0;
    mp3_delay_set = 0;
    print_clipping_info = 0;
    disable_wav_header = 0;
     *__esp = gfp;
    id3tag_init();
    _v24 = 0;
    while(1) {
L294:
        _v24 = _v24 + 1;
        if(_v24 >= argc) {
            break;
        }
        _v56 = argv[_v24];
        _v56 =  &(_v56[1]);
        if(( *_v56 & 255 & 4294967295) == 0) {
            if(_v32 == 0) {
L289:
                if(( *inPath & 255 & 4294967295) != 0) {
                    if(( *outPath & 255 & 4294967295) != 0) {
                        _v212 = argv[_v24];
                        _v216 = _v40;
                        error_printf("%s: excess arg %s\n");
                        return -1;
                    }
                    goto L292;
                }
                goto L290;
L292:
                strncpy(outPath, argv[_v24], 4097);
                continue;
            }
            goto L285;
L290:
            strncpy(inPath, argv[_v24], 4097);
            _v20 = 1;
        } else {
            _v68 = 0;
            if(_v24 + 1 >= argc) {
                _t793 = 134567314;
            } else {
                _t793 = argv[_v24 + 1];
            }
            _v64 = _t793;
            if(( *_v56 & 255 & 4294967295) == 0) {
                _v20 = 1;
                if(( *inPath & 255 & 4294967295) != 0) {
                    if(( *outPath & 255 & 4294967295) == 0) {
                        strncpy(outPath, argv[_v24], 4097);
                    }
                } else {
                    strncpy(inPath, argv[_v24], 4097);
                }
            }
            if(( *_v56 & 255 & 4294967295) != 45) {
                _t799 =  *_v56 & 255;
                _v13 = _t799 & 4294967295;
                _v56 =  &(_v56[1]);
                if((_t799 & 4294967295) != 0) {
                    goto L276;
                }
                goto L283;
            }
            _v56 =  &(_v56[1]);
            if(local_strcasecmp(_v56, "resample") != 0) {
                if(local_strcasecmp(_v56, "vbr-old") != 0) {
                    if(local_strcasecmp(_v56, "vbr-new") != 0) {
                        if(local_strcasecmp(_v56, "vbr-mtrh") != 0) {
                            if(local_strcasecmp(_v56, "cbr") != 0) {
                                if(local_strcasecmp(_v56, "abr") != 0) {
                                    if(local_strcasecmp(_v56, "r3mix") != 0) {
                                        if(local_strcasecmp(_v56, "bitwidth") != 0) {
                                            if(local_strcasecmp(_v56, "signed") != 0) {
                                                if(local_strcasecmp(_v56, "unsigned") != 0) {
                                                    if(local_strcasecmp(_v56, "little-endian") != 0) {
                                                        if(local_strcasecmp(_v56, "big-endian") != 0) {
                                                            if(local_strcasecmp(_v56, "mp1input") != 0) {
                                                                if(local_strcasecmp(_v56, "mp2input") != 0) {
                                                                    if(local_strcasecmp(_v56, "mp3input") != 0) {
                                                                        if(local_strcasecmp(_v56, "ogginput") != 0) {
                                                                            if(local_strcasecmp(_v56, "phone") != 0) {
                                                                                if(local_strcasecmp(_v56, "voice") != 0) {
                                                                                    if(local_strcasecmp(_v56, "decode") != 0) {
                                                                                        if(local_strcasecmp(_v56, "flush") != 0) {
                                                                                            if(local_strcasecmp(_v56, "decode-mp3delay") != 0) {
                                                                                                if(local_strcasecmp(_v56, "nores") != 0) {
                                                                                                    if(local_strcasecmp(_v56, "strictly-enforce-ISO") != 0) {
                                                                                                        if(local_strcasecmp(_v56, "scale") != 0) {
                                                                                                            if(local_strcasecmp(_v56, "scale-l") != 0) {
                                                                                                                if(local_strcasecmp(_v56, "scale-r") != 0) {
                                                                                                                    if(local_strcasecmp(_v56, "noasm") != 0) {
                                                                                                                        if(local_strcasecmp(_v56, "freeformat") != 0) {
                                                                                                                            if(local_strcasecmp(_v56, "replaygain-fast") != 0) {
                                                                                                                                if(local_strcasecmp(_v56, "replaygain-accurate") != 0) {
                                                                                                                                    if(local_strcasecmp(_v56, "noreplaygain") != 0) {
                                                                                                                                        if(local_strcasecmp(_v56, "clipdetect") != 0) {
                                                                                                                                            if(local_strcasecmp(_v56, "nohist") != 0) {
                                                                                                                                                if(local_strcasecmp(_v56, "tt") != 0) {
                                                                                                                                                    if(local_strcasecmp(_v56, "ta") != 0) {
                                                                                                                                                        if(local_strcasecmp(_v56, "tl") != 0) {
                                                                                                                                                            if(local_strcasecmp(_v56, "ty") != 0) {
                                                                                                                                                                if(local_strcasecmp(_v56, "tc") != 0) {
                                                                                                                                                                    if(local_strcasecmp(_v56, "tn") != 0) {
                                                                                                                                                                        if(local_strcasecmp(_v56, "tg") != 0) {
                                                                                                                                                                            if(local_strcasecmp(_v56, "tv") != 0) {
                                                                                                                                                                                if(local_strcasecmp(_v56, "ti") != 0) {
                                                                                                                                                                                    if(local_strcasecmp(_v56, "ignore-tag-errors") != 0) {
                                                                                                                                                                                        if(local_strcasecmp(_v56, "add-id3v2") != 0) {
                                                                                                                                                                                            if(local_strcasecmp(_v56, "id3v1-only") != 0) {
                                                                                                                                                                                                if(local_strcasecmp(_v56, "id3v2-only") != 0) {
                                                                                                                                                                                                    if(local_strcasecmp(_v56, "space-id3v1") != 0) {
                                                                                                                                                                                                        if(local_strcasecmp(_v56, "pad-id3v2") != 0) {
                                                                                                                                                                                                            if(local_strcasecmp(_v56, "pad-id3v2-size") != 0) {
                                                                                                                                                                                                                if(local_strcasecmp(_v56, "genre-list") != 0) {
                                                                                                                                                                                                                    if(local_strcasecmp(_v56, "lowpass") != 0) {
                                                                                                                                                                                                                        if(local_strcasecmp(_v56, "lowpass-width") != 0) {
                                                                                                                                                                                                                            if(local_strcasecmp(_v56, "highpass") != 0) {
                                                                                                                                                                                                                                if(local_strcasecmp(_v56, "highpass-width") != 0) {
                                                                                                                                                                                                                                    if(local_strcasecmp(_v56, "comp") != 0) {
                                                                                                                                                                                                                                        if(local_strcasecmp(_v56, "notemp") != 0) {
                                                                                                                                                                                                                                            if(local_strcasecmp(_v56, "interch") != 0) {
                                                                                                                                                                                                                                                if(local_strcasecmp(_v56, "temporal-masking") != 0) {
                                                                                                                                                                                                                                                    if(local_strcasecmp(_v56, "nspsytune") == 0) {
                                                                                                                                                                                                                                                        goto L275;
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                    goto L192;
L276:
                                                                                                                                                                                                                                                    if(( *_v56 & 255 & 4294967295) == 0) {
                                                                                                                                                                                                                                                        _t802 = _v64;
                                                                                                                                                                                                                                                    } else {
                                                                                                                                                                                                                                                        _t802 = _v56;
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                    _v60 = _t802;
                                                                                                                                                                                                                                                    if(_v13 - 63 > 57) {
                                                                                                                                                                                                                                                        _v212 = _v13;
                                                                                                                                                                                                                                                        _v216 = _v40;
                                                                                                                                                                                                                                                        error_printf("%s: unrecognized option -%c\n");
                                                                                                                                                                                                                                                        return -1;
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                    goto __eax;
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                goto L190;
L192:
                                                                                                                                                                                                                                                if(local_strcasecmp(_v56, "nssafejoint") != 0) {
                                                                                                                                                                                                                                                    if(local_strcasecmp(_v56, "nsmsfix") != 0) {
                                                                                                                                                                                                                                                        if(local_strcasecmp(_v56, "ns-bass") != 0) {
                                                                                                                                                                                                                                                            if(local_strcasecmp(_v56, "ns-alto") != 0) {
                                                                                                                                                                                                                                                            if(local_strcasecmp(_v56, "ns-treble") != 0) {
                                                                                                                                                                                                                                                            if(local_strcasecmp(_v56, "ns-sfb21") != 0) {
                                                                                                                                                                                                                                                            if(local_strcasecmp(_v56, "nspsytune2") == 0) {
                                                                                                                                                                                                                                                            goto L275;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            goto L229;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            goto L221;
L229:
                                                                                                                                                                                                                                                            if(local_strcasecmp(_v56, "quiet") == 0 || local_strcasecmp(_v56, "silent") == 0) {
                                                                                                                                                                                                                                                            silent = 10;
                                                                                                                                                                                                                                                            goto L275;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            if(local_strcasecmp(_v56, "brief") != 0) {
                                                                                                                                                                                                                                                            if(local_strcasecmp(_v56, "verbose") != 0) {
                                                                                                                                                                                                                                                            if(local_strcasecmp(_v56, "version") == 0 || local_strcasecmp(_v56, "license") == 0) {
                                                                                                                                                                                                                                                            print_license(__imp__stdout);
                                                                                                                                                                                                                                                            return -2;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            if(local_strcasecmp(_v56, "help") == 0 || local_strcasecmp(_v56, "usage") == 0) {
                                                                                                                                                                                                                                                            short_help(gfp, __imp__stdout, _v40);
                                                                                                                                                                                                                                                            return -2;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            if(local_strcasecmp(_v56, "longhelp") != 0) {
                                                                                                                                                                                                                                                            if(local_strcasecmp(_v56, "?") != 0) {
                                                                                                                                                                                                                                                            if(local_strcasecmp(_v56, "preset") == 0 || local_strcasecmp(_v56, "alt-preset") == 0) {
                                                                                                                                                                                                                                                            _v68 = 1;
                                                                                                                                                                                                                                                            _v104 = 0;
                                                                                                                                                                                                                                                            _v108 = 0;
L259:
                                                                                                                                                                                                                                                            while(strcmp(_v64, "fast") == 0 || strcmp(_v64, "cbr") == 0) {
                                                                                                                                                                                                                                                            goto L249;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            } else {
                                                                                                                                                                                                                                                            if(local_strcasecmp(_v56, "disptime") != 0) {
                                                                                                                                                                                                                                                            if(local_strcasecmp(_v56, "nogaptags") != 0) {
                                                                                                                                                                                                                                                            if(local_strcasecmp(_v56, "nogapout") != 0) {
                                                                                                                                                                                                                                                            if(local_strcasecmp(_v56, "nogap") != 0) {
                                                                                                                                                                                                                                                            if(local_strcasecmp(_v56, "athaa-sensitivity") != 0) {
                                                                                                                                                                                                                                                            _v212 = _v56;
                                                                                                                                                                                                                                                            _v216 = _v40;
                                                                                                                                                                                                                                                            error_printf("%s: unrecognized option --%s\n");
                                                                                                                                                                                                                                                            return -1;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            goto L272;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            goto L270;
L272:
                                                                                                                                                                                                                                                            _v68 = 1;
                                                                                                                                                                                                                                                            atof(_v64);
                                                                                                                                                                                                                                                            asm("fstp dword [ebp+0xffffff54]");
                                                                                                                                                                                                                                                            asm("fld dword [ebp+0xffffff54]");
                                                                                                                                                                                                                                                            asm("fstp dword [esp+0x4]");
                                                                                                                                                                                                                                                             *__esp = gfp;
                                                                                                                                                                                                                                                            lame_set_athaa_sensitivity();
                                                                                                                                                                                                                                                            goto L275;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            goto L268;
L270:
                                                                                                                                                                                                                                                            _v32 = 1;
                                                                                                                                                                                                                                                            goto L275;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            goto L266;
L268:
                                                                                                                                                                                                                                                            strcpy(outPath, _v64);
                                                                                                                                                                                                                                                            _v68 = 1;
                                                                                                                                                                                                                                                            goto L275;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            _v68 = 1;
                                                                                                                                                                                                                                                            atof(_v64);
                                                                                                                                                                                                                                                            asm("fstp dword [ebp+0xffffff54]");
                                                                                                                                                                                                                                                            asm("fld dword [ebp+0xffffff54]");
                                                                                                                                                                                                                                                            asm("fstp dword [0x805c550]");
                                                                                                                                                                                                                                                            goto L275;
L266:
                                                                                                                                                                                                                                                            _v36 = 1;
                                                                                                                                                                                                                                                            goto L275;
                                                                                                                                                                                                                                                            }
L249:
                                                                                                                                                                                                                                                            if(strcmp(_v64, "fast") == 0 && _v104 <= 0) {
                                                                                                                                                                                                                                                            _v104 = 1;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            if(strcmp(_v64, "cbr") == 0 && _v108 <= 0) {
                                                                                                                                                                                                                                                            _v108 = 1;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            _v68 = _v68 + 1;
                                                                                                                                                                                                                                                            if(_v24 + _v68 >= argc) {
                                                                                                                                                                                                                                                            _t980 = 134567314;
                                                                                                                                                                                                                                                            } else {
                                                                                                                                                                                                                                                            _t980 = argv[_v24 + _v68];
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            _v64 = _t980;
                                                                                                                                                                                                                                                            goto L259;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            goto L245;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            long_help(gfp, __imp__stdout, _v40, 0);
                                                                                                                                                                                                                                                            return -2;
L245:
                                                                                                                                                                                                                                                            _v100 = popen("less -Mqc", "w");
                                                                                                                                                                                                                                                            long_help(gfp, _v100, _v40, 0);
                                                                                                                                                                                                                                                            pclose(_v100);
                                                                                                                                                                                                                                                            return -2;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            goto L235;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            silent = -5;
                                                                                                                                                                                                                                                            goto L275;
L235:
                                                                                                                                                                                                                                                            silent = -10;
                                                                                                                                                                                                                                                            goto L275;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            goto L213;
L221:
                                                                                                                                                                                                                                                            _v68 = 1;
                                                                                                                                                                                                                                                            atof(_v64);
                                                                                                                                                                                                                                                            asm("fstp qword [ebp+0xffffff58]");
                                                                                                                                                                                                                                                            asm("fld qword [ebp+0xffffff58]");
                                                                                                                                                                                                                                                            asm("fld qword [0x8059858]");
                                                                                                                                                                                                                                                            asm("fmulp st1, st0");
                                                                                                                                                                                                                                                            asm("fnstcw word [ebp+0xffffff52]");
                                                                                                                                                                                                                                                            _v180 = _v178 & 65535 & 4294967295;
                                                                                                                                                                                                                                                            asm("fldcw word [ebp+0xffffff50]");
                                                                                                                                                                                                                                                            asm("fistp dword [ebp-0x5c]");
                                                                                                                                                                                                                                                            asm("fldcw word [ebp+0xffffff52]");
                                                                                                                                                                                                                                                            if(_v96 < 224) {
                                                                                                                                                                                                                                                            _v96 = -32;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            if(_v96 > 31) {
                                                                                                                                                                                                                                                            _v96 = 31;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            if(_v96 < 0) {
                                                                                                                                                                                                                                                            _v96 = _v96 + 64;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            _t1033 = gfp;
                                                                                                                                                                                                                                                             *__esp = _t1033;
                                                                                                                                                                                                                                                            lame_get_exp_nspsytune();
                                                                                                                                                                                                                                                            _v216 = _t1033 | _v96 << 20;
                                                                                                                                                                                                                                                             *__esp = gfp;
                                                                                                                                                                                                                                                            lame_set_exp_nspsytune();
                                                                                                                                                                                                                                                            goto L275;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            goto L205;
L213:
                                                                                                                                                                                                                                                            _v68 = 1;
                                                                                                                                                                                                                                                            atof(_v64);
                                                                                                                                                                                                                                                            asm("fstp qword [ebp+0xffffff60]");
                                                                                                                                                                                                                                                            asm("fld qword [ebp+0xffffff60]");
                                                                                                                                                                                                                                                            asm("fld qword [0x8059858]");
                                                                                                                                                                                                                                                            asm("fmulp st1, st0");
                                                                                                                                                                                                                                                            asm("fnstcw word [ebp+0xffffff52]");
                                                                                                                                                                                                                                                            _v180 = _v178 & 65535 & 4294967295;
                                                                                                                                                                                                                                                            asm("fldcw word [ebp+0xffffff50]");
                                                                                                                                                                                                                                                            asm("fistp dword [ebp-0x58]");
                                                                                                                                                                                                                                                            asm("fldcw word [ebp+0xffffff52]");
                                                                                                                                                                                                                                                            if(_v92 < 224) {
                                                                                                                                                                                                                                                            _v92 = -32;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            if(_v92 > 31) {
                                                                                                                                                                                                                                                            _v92 = 31;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            if(_v92 < 0) {
                                                                                                                                                                                                                                                            _v92 = _v92 + 64;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            _t1039 = gfp;
                                                                                                                                                                                                                                                             *__esp = _t1039;
                                                                                                                                                                                                                                                            lame_get_exp_nspsytune();
                                                                                                                                                                                                                                                            _v216 = _t1039 | _v92 << 14;
                                                                                                                                                                                                                                                             *__esp = gfp;
                                                                                                                                                                                                                                                            lame_set_exp_nspsytune();
                                                                                                                                                                                                                                                            goto L275;
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                        goto L197;
L205:
                                                                                                                                                                                                                                                        _v68 = 1;
                                                                                                                                                                                                                                                        atof(_v64);
                                                                                                                                                                                                                                                        asm("fstp qword [ebp+0xffffff68]");
                                                                                                                                                                                                                                                        asm("fld qword [ebp+0xffffff68]");
                                                                                                                                                                                                                                                        asm("fld qword [0x8059858]");
                                                                                                                                                                                                                                                        asm("fmulp st1, st0");
                                                                                                                                                                                                                                                        asm("fnstcw word [ebp+0xffffff52]");
                                                                                                                                                                                                                                                        _v180 = _v178 & 65535 & 4294967295;
                                                                                                                                                                                                                                                        asm("fldcw word [ebp+0xffffff50]");
                                                                                                                                                                                                                                                        asm("fistp dword [ebp-0x54]");
                                                                                                                                                                                                                                                        asm("fldcw word [ebp+0xffffff52]");
                                                                                                                                                                                                                                                        if(_v88 < 224) {
                                                                                                                                                                                                                                                            _v88 = -32;
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                        if(_v88 > 31) {
                                                                                                                                                                                                                                                            _v88 = 31;
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                        if(_v88 < 0) {
                                                                                                                                                                                                                                                            _v88 = _v88 + 64;
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                        _t1045 = gfp;
                                                                                                                                                                                                                                                         *__esp = _t1045;
                                                                                                                                                                                                                                                        lame_get_exp_nspsytune();
                                                                                                                                                                                                                                                        _v216 = _t1045 | _v88 << 8;
                                                                                                                                                                                                                                                         *__esp = gfp;
                                                                                                                                                                                                                                                        lame_set_exp_nspsytune();
                                                                                                                                                                                                                                                        goto L275;
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                    goto L195;
L197:
                                                                                                                                                                                                                                                    _v68 = 1;
                                                                                                                                                                                                                                                    atof(_v64);
                                                                                                                                                                                                                                                    asm("fstp qword [ebp+0xffffff70]");
                                                                                                                                                                                                                                                    asm("fld qword [ebp+0xffffff70]");
                                                                                                                                                                                                                                                    asm("fld qword [0x8059858]");
                                                                                                                                                                                                                                                    asm("fmulp st1, st0");
                                                                                                                                                                                                                                                    asm("fnstcw word [ebp+0xffffff52]");
                                                                                                                                                                                                                                                    _v180 = _v178 & 65535 & 4294967295;
                                                                                                                                                                                                                                                    asm("fldcw word [ebp+0xffffff50]");
                                                                                                                                                                                                                                                    asm("fistp dword [ebp-0x50]");
                                                                                                                                                                                                                                                    asm("fldcw word [ebp+0xffffff52]");
                                                                                                                                                                                                                                                    if(_v84 < 224) {
                                                                                                                                                                                                                                                        _v84 = -32;
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                    if(_v84 > 31) {
                                                                                                                                                                                                                                                        _v84 = 31;
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                    if(_v84 < 0) {
                                                                                                                                                                                                                                                        _v84 = _v84 + 64;
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                    _t1051 = gfp;
                                                                                                                                                                                                                                                     *__esp = _t1051;
                                                                                                                                                                                                                                                    lame_get_exp_nspsytune();
                                                                                                                                                                                                                                                    _v216 = _t1051 | _v84 << 2;
                                                                                                                                                                                                                                                     *__esp = gfp;
                                                                                                                                                                                                                                                    lame_set_exp_nspsytune();
                                                                                                                                                                                                                                                    goto L275;
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                _t1057 = gfp;
                                                                                                                                                                                                                                                 *__esp = _t1057;
                                                                                                                                                                                                                                                lame_get_exp_nspsytune();
                                                                                                                                                                                                                                                _v216 = _t1057 | 2;
                                                                                                                                                                                                                                                 *__esp = gfp;
                                                                                                                                                                                                                                                lame_set_exp_nspsytune();
                                                                                                                                                                                                                                                goto L275;
L195:
                                                                                                                                                                                                                                                _v68 = 1;
                                                                                                                                                                                                                                                atof(_v64);
                                                                                                                                                                                                                                                asm("fstp qword [esp+0x4]");
                                                                                                                                                                                                                                                 *__esp = gfp;
                                                                                                                                                                                                                                                lame_set_msfix();
                                                                                                                                                                                                                                                goto L275;
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                            goto L188;
L190:
                                                                                                                                                                                                                                            _v68 = 1;
                                                                                                                                                                                                                                            _v216 = atoi(_v64) & 4294967295 & ;
                                                                                                                                                                                                                                             *__esp = gfp;
                                                                                                                                                                                                                                            lame_set_useTemporal();
                                                                                                                                                                                                                                            goto L275;
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                        goto L186;
L188:
                                                                                                                                                                                                                                        _v68 = 1;
                                                                                                                                                                                                                                        atof(_v64);
                                                                                                                                                                                                                                        asm("fstp dword [ebp+0xffffff54]");
                                                                                                                                                                                                                                        asm("fld dword [ebp+0xffffff54]");
                                                                                                                                                                                                                                        asm("fstp dword [esp+0x4]");
                                                                                                                                                                                                                                         *__esp = gfp;
                                                                                                                                                                                                                                        lame_set_interChRatio();
                                                                                                                                                                                                                                        goto L275;
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                    goto L182;
L186:
                                                                                                                                                                                                                                    _v216 = 0;
                                                                                                                                                                                                                                     *__esp = gfp;
                                                                                                                                                                                                                                    lame_set_useTemporal();
                                                                                                                                                                                                                                    goto L275;
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                goto L177;
L182:
                                                                                                                                                                                                                                _v68 = 1;
                                                                                                                                                                                                                                _t1069 = atof(_v64);
                                                                                                                                                                                                                                asm("fstp qword [ebp+0xffffff78]");
                                                                                                                                                                                                                                asm("fld qword [ebp+0xffffff78]");
                                                                                                                                                                                                                                asm("fld1 ");
                                                                                                                                                                                                                                asm("fucomip st0, st1");
                                                                                                                                                                                                                                asm("fstp st0");
                                                                                                                                                                                                                                if((_t1069 & 4294967295) == 0) {
                                                                                                                                                                                                                                    asm("fld qword [ebp+0xffffff78]");
                                                                                                                                                                                                                                    asm("fstp dword [ebp+0xffffff54]");
                                                                                                                                                                                                                                    asm("fld dword [ebp+0xffffff54]");
                                                                                                                                                                                                                                    asm("fstp dword [esp+0x4]");
                                                                                                                                                                                                                                     *__esp = gfp;
                                                                                                                                                                                                                                    lame_set_compression_ratio();
                                                                                                                                                                                                                                    goto L275;
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                error_printf("Must specify compression ratio >= 1.0\n");
                                                                                                                                                                                                                                return -1;
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                            goto L167;
L177:
                                                                                                                                                                                                                            _t1074 = atof(_v64);
                                                                                                                                                                                                                            asm("fstp qword [ebp+0xffffff78]");
                                                                                                                                                                                                                            _v68 = 1;
                                                                                                                                                                                                                            asm("fld qword [ebp+0xffffff78]");
                                                                                                                                                                                                                            asm("fld qword [0x8059830]");
                                                                                                                                                                                                                            asm("fucomip st0, st1");
                                                                                                                                                                                                                            asm("fstp st0");
                                                                                                                                                                                                                            if((_t1074 & 4294967295) != 0) {
L179:
                                                                                                                                                                                                                                error_printf("Must specify highpass width with --highpass-width freq, freq >= 0.001 kHz\n");
                                                                                                                                                                                                                                return -1;
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                            asm("fld qword [ebp+0xffffff78]");
                                                                                                                                                                                                                            asm("fld qword [0x8059838]");
                                                                                                                                                                                                                            asm("fxch st0, st1");
                                                                                                                                                                                                                            asm("fucomip st0, st1");
                                                                                                                                                                                                                            asm("fstp st0");
                                                                                                                                                                                                                            if((_t1074 & 4294967295) == 0) {
                                                                                                                                                                                                                                asm("fld qword [ebp+0xffffff78]");
                                                                                                                                                                                                                                asm("fnstcw word [ebp+0xffffff52]");
                                                                                                                                                                                                                                _v180 = _v178 & 65535 & 4294967295;
                                                                                                                                                                                                                                asm("fldcw word [ebp+0xffffff50]");
                                                                                                                                                                                                                                asm("fistp dword [ebp+0xffffff4c]");
                                                                                                                                                                                                                                asm("fldcw word [ebp+0xffffff52]");
                                                                                                                                                                                                                                _v216 = _v184;
                                                                                                                                                                                                                                 *__esp = gfp;
                                                                                                                                                                                                                                lame_set_highpasswidth();
                                                                                                                                                                                                                                goto L275;
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                            goto L179;
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                        goto L159;
L167:
                                                                                                                                                                                                                        _t1081 = atof(_v64);
                                                                                                                                                                                                                        asm("fstp qword [ebp+0xffffff78]");
                                                                                                                                                                                                                        _v68 = 1;
                                                                                                                                                                                                                        asm("fld qword [ebp+0xffffff78]");
                                                                                                                                                                                                                        asm("fldz ");
                                                                                                                                                                                                                        asm("fucomip st0, st1");
                                                                                                                                                                                                                        asm("fstp st0");
                                                                                                                                                                                                                        if((_t1081 & 4294967295) == 0) {
                                                                                                                                                                                                                            asm("fld qword [ebp+0xffffff78]");
                                                                                                                                                                                                                            asm("fld qword [0x8059830]");
                                                                                                                                                                                                                            asm("fucomip st0, st1");
                                                                                                                                                                                                                            asm("fstp st0");
                                                                                                                                                                                                                            if((_t1081 & 4294967295) != 0) {
L171:
                                                                                                                                                                                                                                error_printf("Must specify highpass with --highpass freq, freq >= 0.001 kHz\n");
                                                                                                                                                                                                                                return -1;
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                            goto L170;
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                        _v216 = -1;
                                                                                                                                                                                                                         *__esp = gfp;
                                                                                                                                                                                                                        lame_set_highpassfreq();
                                                                                                                                                                                                                        goto L275;
L170:
                                                                                                                                                                                                                        asm("fld qword [ebp+0xffffff78]");
                                                                                                                                                                                                                        asm("fld qword [0x8059838]");
                                                                                                                                                                                                                        asm("fxch st0, st1");
                                                                                                                                                                                                                        asm("fucomip st0, st1");
                                                                                                                                                                                                                        asm("fstp st0");
                                                                                                                                                                                                                        if((_t1081 & 4294967295) == 0) {
                                                                                                                                                                                                                            asm("fld qword [ebp+0xffffff78]");
                                                                                                                                                                                                                            asm("fld qword [0x8059850]");
                                                                                                                                                                                                                            asm("fucomip st0, st1");
                                                                                                                                                                                                                            asm("fstp st0");
                                                                                                                                                                                                                            if((_t1081 & 4294967295) == 0) {
                                                                                                                                                                                                                                asm("fld1 ");
                                                                                                                                                                                                                            } else {
                                                                                                                                                                                                                                asm("fld qword [0x8059828]");
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                            asm("fmul qword [ebp+0xffffff78]");
                                                                                                                                                                                                                            asm("fld qword [0x8059848]");
                                                                                                                                                                                                                            asm("faddp st1, st0");
                                                                                                                                                                                                                            asm("fnstcw word [ebp+0xffffff52]");
                                                                                                                                                                                                                            _v180 = _v178 & 65535 & 4294967295;
                                                                                                                                                                                                                            asm("fldcw word [ebp+0xffffff50]");
                                                                                                                                                                                                                            asm("fistp dword [ebp+0xffffff4c]");
                                                                                                                                                                                                                            asm("fldcw word [ebp+0xffffff52]");
                                                                                                                                                                                                                            _v216 = _v184;
                                                                                                                                                                                                                             *__esp = gfp;
                                                                                                                                                                                                                            lame_set_highpassfreq();
                                                                                                                                                                                                                            goto L275;
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                        goto L171;
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                    goto L149;
L159:
                                                                                                                                                                                                                    _t1089 = atof(_v64);
                                                                                                                                                                                                                    asm("fstp qword [ebp+0xffffff78]");
                                                                                                                                                                                                                    _v68 = 1;
                                                                                                                                                                                                                    asm("fld qword [ebp+0xffffff78]");
                                                                                                                                                                                                                    asm("fld qword [0x8059830]");
                                                                                                                                                                                                                    asm("fucomip st0, st1");
                                                                                                                                                                                                                    asm("fstp st0");
                                                                                                                                                                                                                    if((_t1089 & 4294967295) != 0) {
L161:
                                                                                                                                                                                                                        error_printf("Must specify lowpass width with --lowpass-width freq, freq >= 0.001 kHz\n");
                                                                                                                                                                                                                        return -1;
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                    asm("fld qword [ebp+0xffffff78]");
                                                                                                                                                                                                                    asm("fld qword [0x8059838]");
                                                                                                                                                                                                                    asm("fxch st0, st1");
                                                                                                                                                                                                                    asm("fucomip st0, st1");
                                                                                                                                                                                                                    asm("fstp st0");
                                                                                                                                                                                                                    if((_t1089 & 4294967295) == 0) {
                                                                                                                                                                                                                        asm("fld qword [ebp+0xffffff78]");
                                                                                                                                                                                                                        asm("fld qword [0x8059850]");
                                                                                                                                                                                                                        asm("fucomip st0, st1");
                                                                                                                                                                                                                        asm("fstp st0");
                                                                                                                                                                                                                        if((_t1089 & 4294967295) == 0) {
                                                                                                                                                                                                                            asm("fld1 ");
                                                                                                                                                                                                                        } else {
                                                                                                                                                                                                                            asm("fld qword [0x8059828]");
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                        asm("fmul qword [ebp+0xffffff78]");
                                                                                                                                                                                                                        asm("fld qword [0x8059848]");
                                                                                                                                                                                                                        asm("faddp st1, st0");
                                                                                                                                                                                                                        asm("fnstcw word [ebp+0xffffff52]");
                                                                                                                                                                                                                        _v180 = _v178 & 65535 & 4294967295;
                                                                                                                                                                                                                        asm("fldcw word [ebp+0xffffff50]");
                                                                                                                                                                                                                        asm("fistp dword [ebp+0xffffff4c]");
                                                                                                                                                                                                                        asm("fldcw word [ebp+0xffffff52]");
                                                                                                                                                                                                                        _v216 = _v184;
                                                                                                                                                                                                                         *__esp = gfp;
                                                                                                                                                                                                                        lame_set_lowpasswidth();
                                                                                                                                                                                                                        goto L275;
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                    goto L161;
                                                                                                                                                                                                                }
                                                                                                                                                                                                                goto L147;
L149:
                                                                                                                                                                                                                _t1096 = atof(_v64);
                                                                                                                                                                                                                asm("fstp qword [ebp+0xffffff78]");
                                                                                                                                                                                                                _v68 = 1;
                                                                                                                                                                                                                asm("fld qword [ebp+0xffffff78]");
                                                                                                                                                                                                                asm("fldz ");
                                                                                                                                                                                                                asm("fucomip st0, st1");
                                                                                                                                                                                                                asm("fstp st0");
                                                                                                                                                                                                                if((_t1096 & 4294967295) == 0) {
                                                                                                                                                                                                                    asm("fld qword [ebp+0xffffff78]");
                                                                                                                                                                                                                    asm("fld qword [0x8059830]");
                                                                                                                                                                                                                    asm("fucomip st0, st1");
                                                                                                                                                                                                                    asm("fstp st0");
                                                                                                                                                                                                                    if((_t1096 & 4294967295) != 0) {
L153:
                                                                                                                                                                                                                        error_printf("Must specify lowpass with --lowpass freq, freq >= 0.001 kHz\n");
                                                                                                                                                                                                                        return -1;
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                    goto L152;
                                                                                                                                                                                                                }
                                                                                                                                                                                                                _v216 = -1;
                                                                                                                                                                                                                 *__esp = gfp;
                                                                                                                                                                                                                lame_set_lowpassfreq();
                                                                                                                                                                                                                goto L275;
L152:
                                                                                                                                                                                                                asm("fld qword [ebp+0xffffff78]");
                                                                                                                                                                                                                asm("fld qword [0x8059838]");
                                                                                                                                                                                                                asm("fxch st0, st1");
                                                                                                                                                                                                                asm("fucomip st0, st1");
                                                                                                                                                                                                                asm("fstp st0");
                                                                                                                                                                                                                if((_t1096 & 4294967295) == 0) {
                                                                                                                                                                                                                    asm("fld qword [ebp+0xffffff78]");
                                                                                                                                                                                                                    asm("fld qword [0x8059840]");
                                                                                                                                                                                                                    asm("fucomip st0, st1");
                                                                                                                                                                                                                    asm("fstp st0");
                                                                                                                                                                                                                    if((_t1096 & 4294967295) == 0) {
                                                                                                                                                                                                                        asm("fld1 ");
                                                                                                                                                                                                                    } else {
                                                                                                                                                                                                                        asm("fld qword [0x8059828]");
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                    asm("fmul qword [ebp+0xffffff78]");
                                                                                                                                                                                                                    asm("fld qword [0x8059848]");
                                                                                                                                                                                                                    asm("faddp st1, st0");
                                                                                                                                                                                                                    asm("fnstcw word [ebp+0xffffff52]");
                                                                                                                                                                                                                    _v180 = _v178 & 65535 & 4294967295;
                                                                                                                                                                                                                    asm("fldcw word [ebp+0xffffff50]");
                                                                                                                                                                                                                    asm("fistp dword [ebp+0xffffff4c]");
                                                                                                                                                                                                                    asm("fldcw word [ebp+0xffffff52]");
                                                                                                                                                                                                                    _v216 = _v184;
                                                                                                                                                                                                                     *__esp = gfp;
                                                                                                                                                                                                                    lame_set_lowpassfreq();
                                                                                                                                                                                                                    goto L275;
                                                                                                                                                                                                                }
                                                                                                                                                                                                                goto L153;
                                                                                                                                                                                                            }
                                                                                                                                                                                                            goto L145;
L147:
                                                                                                                                                                                                            _v216 = 0;
                                                                                                                                                                                                             *__esp = genre_list_handler;
                                                                                                                                                                                                            id3tag_genre_list();
                                                                                                                                                                                                            return -2;
                                                                                                                                                                                                        }
                                                                                                                                                                                                        goto L143;
L145:
                                                                                                                                                                                                        _v80 = atoi(_v64);
                                                                                                                                                                                                        _t1107 = _v80 - 128000 <= 0 ? _v80 : 128000;
                                                                                                                                                                                                        _v80 = _v80 - 128000 <= 0 ? _v80 : 128000;
                                                                                                                                                                                                        _t1109 = _v80 >= 0 ? _v80 : 0;
                                                                                                                                                                                                        _v80 = _v80 >= 0 ? _v80 : 0;
                                                                                                                                                                                                        _v216 = _v80;
                                                                                                                                                                                                         *__esp = gfp;
                                                                                                                                                                                                        id3tag_set_pad();
                                                                                                                                                                                                        _v68 = 1;
                                                                                                                                                                                                        goto L275;
                                                                                                                                                                                                    }
                                                                                                                                                                                                    goto L141;
L143:
                                                                                                                                                                                                     *__esp = gfp;
                                                                                                                                                                                                    id3tag_pad_v2();
                                                                                                                                                                                                    goto L275;
                                                                                                                                                                                                }
                                                                                                                                                                                                goto L139;
L141:
                                                                                                                                                                                                 *__esp = gfp;
                                                                                                                                                                                                id3tag_space_v1();
                                                                                                                                                                                                goto L275;
                                                                                                                                                                                            }
                                                                                                                                                                                            goto L137;
L139:
                                                                                                                                                                                             *__esp = gfp;
                                                                                                                                                                                            id3tag_v2_only();
                                                                                                                                                                                            _v52 = 2;
                                                                                                                                                                                            goto L275;
                                                                                                                                                                                        }
                                                                                                                                                                                        goto L135;
L137:
                                                                                                                                                                                         *__esp = gfp;
                                                                                                                                                                                        id3tag_v1_only();
                                                                                                                                                                                        _v52 = 1;
                                                                                                                                                                                        goto L275;
                                                                                                                                                                                    }
                                                                                                                                                                                    goto L133;
L135:
                                                                                                                                                                                     *__esp = gfp;
                                                                                                                                                                                    id3tag_add_v2();
                                                                                                                                                                                    goto L275;
                                                                                                                                                                                }
                                                                                                                                                                                goto L129;
L133:
                                                                                                                                                                                ignore_tag_errors = 1;
                                                                                                                                                                                goto L275;
                                                                                                                                                                            }
                                                                                                                                                                            goto L125;
L129:
                                                                                                                                                                            _v68 = 1;
                                                                                                                                                                            if(set_id3_albumart(gfp, _v64) != 0) {
                                                                                                                                                                                if(ignore_tag_errors == 0) {
                                                                                                                                                                                    return -1;
                                                                                                                                                                                }
                                                                                                                                                                            }
                                                                                                                                                                            goto L275;
                                                                                                                                                                        }
                                                                                                                                                                        goto L113;
L125:
                                                                                                                                                                        _v68 = 1;
                                                                                                                                                                        if(id3_tag(gfp, 118, 0, _v64) != 0 && silent <= 9) {
                                                                                                                                                                            _v216 = _v64;
                                                                                                                                                                            error_printf("Invalid field value: '%s'. Ignored\n");
                                                                                                                                                                        }
                                                                                                                                                                        goto L275;
                                                                                                                                                                    }
                                                                                                                                                                    goto L105;
L113:
                                                                                                                                                                    _v76 = id3_tag(gfp, 103, 0, _v64);
                                                                                                                                                                    _v68 = 1;
                                                                                                                                                                    if(_v76 == 0 || ignore_tag_errors != 0) {
                                                                                                                                                                        goto L275;
                                                                                                                                                                    } else {
                                                                                                                                                                        if(_v76 != 255) {
                                                                                                                                                                            if(_v76 != 254) {
                                                                                                                                                                                error_printf("Internal error.\n");
                                                                                                                                                                                return -1;
                                                                                                                                                                            }
                                                                                                                                                                            goto L118;
                                                                                                                                                                        }
                                                                                                                                                                        _v216 = _v64;
                                                                                                                                                                        error_printf("Unknown ID3v1 genre number: '%s'.\n");
                                                                                                                                                                        return -1;
L118:
                                                                                                                                                                        if(_v52 != 1) {
                                                                                                                                                                            if(_v52 != 2 && silent <= 9) {
                                                                                                                                                                                _v216 = _v64;
                                                                                                                                                                                error_printf("Unknown ID3v1 genre: '%s'.  Setting ID3v1 genre to 'Other'\n");
                                                                                                                                                                            }
                                                                                                                                                                            goto L275;
                                                                                                                                                                        }
                                                                                                                                                                        _v216 = _v64;
                                                                                                                                                                        error_printf("Unknown ID3v1 genre: '%s'.\n");
                                                                                                                                                                        return -1;
                                                                                                                                                                    }
                                                                                                                                                                    goto L276;
                                                                                                                                                                }
                                                                                                                                                                goto L103;
L105:
                                                                                                                                                                _v72 = id3_tag(gfp, 110, 0, _v64);
                                                                                                                                                                _v68 = 1;
                                                                                                                                                                if(_v72 == 0 || ignore_tag_errors != 0) {
                                                                                                                                                                    goto L275;
                                                                                                                                                                } else {
                                                                                                                                                                    if(_v52 != 1) {
                                                                                                                                                                        if(_v52 != 2 && silent <= 9) {
                                                                                                                                                                            error_printf("The track number has to be between 1 and 255 for ID3v1, ignored for ID3v1.\n");
                                                                                                                                                                        }
                                                                                                                                                                        goto L275;
                                                                                                                                                                    }
                                                                                                                                                                    error_printf("The track number has to be between 1 and 255 for ID3v1.\n");
                                                                                                                                                                    return -1;
                                                                                                                                                                }
                                                                                                                                                                goto L276;
                                                                                                                                                            }
                                                                                                                                                            goto L101;
L103:
                                                                                                                                                            _v68 = 1;
                                                                                                                                                            id3_tag(gfp, 99, 0, _v64);
                                                                                                                                                            goto L275;
                                                                                                                                                        }
                                                                                                                                                        goto L99;
L101:
                                                                                                                                                        _v68 = 1;
                                                                                                                                                        id3_tag(gfp, 121, 0, _v64);
                                                                                                                                                        goto L275;
                                                                                                                                                    }
                                                                                                                                                    goto L97;
L99:
                                                                                                                                                    _v68 = 1;
                                                                                                                                                    id3_tag(gfp, 108, 0, _v64);
                                                                                                                                                    goto L275;
                                                                                                                                                }
                                                                                                                                                goto L95;
L97:
                                                                                                                                                _v68 = 1;
                                                                                                                                                id3_tag(gfp, 97, 0, _v64);
                                                                                                                                                goto L275;
                                                                                                                                            }
                                                                                                                                            goto L93;
L95:
                                                                                                                                            _v68 = 1;
                                                                                                                                            id3_tag(gfp, 116, 0, _v64);
                                                                                                                                            goto L275;
                                                                                                                                        }
                                                                                                                                        goto L91;
L93:
                                                                                                                                        brhist = 0;
                                                                                                                                        goto L275;
                                                                                                                                    }
                                                                                                                                    goto L89;
L91:
                                                                                                                                    print_clipping_info = 1;
                                                                                                                                    _v216 = 1;
                                                                                                                                     *__esp = gfp;
                                                                                                                                    lame_set_decode_on_the_fly();
                                                                                                                                    goto L275;
                                                                                                                                }
                                                                                                                                goto L87;
L89:
                                                                                                                                _v48 = 1;
                                                                                                                                _v216 = 0;
                                                                                                                                 *__esp = gfp;
                                                                                                                                lame_set_findReplayGain();
                                                                                                                                goto L275;
                                                                                                                            }
                                                                                                                            goto L85;
L87:
                                                                                                                            _v216 = 1;
                                                                                                                             *__esp = gfp;
                                                                                                                            lame_set_decode_on_the_fly();
                                                                                                                            _v216 = 1;
                                                                                                                             *__esp = gfp;
                                                                                                                            lame_set_findReplayGain();
                                                                                                                            goto L275;
                                                                                                                        }
                                                                                                                        goto L83;
L85:
                                                                                                                        _v216 = 1;
                                                                                                                         *__esp = gfp;
                                                                                                                        lame_set_findReplayGain();
                                                                                                                        goto L275;
                                                                                                                    }
                                                                                                                    goto L76;
L83:
                                                                                                                    _v216 = 1;
                                                                                                                     *__esp = gfp;
                                                                                                                    lame_set_free_format();
                                                                                                                    goto L275;
                                                                                                                }
                                                                                                                goto L74;
L76:
                                                                                                                _v68 = 1;
                                                                                                                if(strcmp(_v64, "mmx") == 0) {
                                                                                                                    _v212 = 0;
                                                                                                                    _v216 = 1;
                                                                                                                     *__esp = gfp;
                                                                                                                    lame_set_asm_optimizations();
                                                                                                                }
                                                                                                                if(strcmp(_v64, "3dnow") == 0) {
                                                                                                                    _v212 = 0;
                                                                                                                    _v216 = 2;
                                                                                                                     *__esp = gfp;
                                                                                                                    lame_set_asm_optimizations();
                                                                                                                }
                                                                                                                if(strcmp(_v64, "sse") == 0) {
                                                                                                                    _v212 = 0;
                                                                                                                    _v216 = 3;
                                                                                                                     *__esp = gfp;
                                                                                                                    lame_set_asm_optimizations();
                                                                                                                }
                                                                                                                goto L275;
                                                                                                            }
                                                                                                            goto L72;
L74:
                                                                                                            _v68 = 1;
                                                                                                            atof(_v64);
                                                                                                            asm("fstp dword [ebp+0xffffff54]");
                                                                                                            asm("fld dword [ebp+0xffffff54]");
                                                                                                            asm("fstp dword [esp+0x4]");
                                                                                                             *__esp = gfp;
                                                                                                            lame_set_scale_right();
                                                                                                            goto L275;
                                                                                                        }
                                                                                                        goto L70;
L72:
                                                                                                        _v68 = 1;
                                                                                                        atof(_v64);
                                                                                                        asm("fstp dword [ebp+0xffffff54]");
                                                                                                        asm("fld dword [ebp+0xffffff54]");
                                                                                                        asm("fstp dword [esp+0x4]");
                                                                                                         *__esp = gfp;
                                                                                                        lame_set_scale_left();
                                                                                                        goto L275;
                                                                                                    }
                                                                                                    goto L68;
L70:
                                                                                                    _v68 = 1;
                                                                                                    atof(_v64);
                                                                                                    asm("fstp dword [ebp+0xffffff54]");
                                                                                                    asm("fld dword [ebp+0xffffff54]");
                                                                                                    asm("fstp dword [esp+0x4]");
                                                                                                     *__esp = gfp;
                                                                                                    lame_set_scale();
                                                                                                    goto L275;
                                                                                                }
                                                                                                goto L66;
L68:
                                                                                                _v216 = 1;
                                                                                                 *__esp = gfp;
                                                                                                lame_set_strict_ISO();
                                                                                                goto L275;
                                                                                            }
                                                                                            goto L64;
L66:
                                                                                            _v216 = 1;
                                                                                             *__esp = gfp;
                                                                                            lame_set_disable_reservoir();
                                                                                            goto L275;
                                                                                        }
                                                                                        goto L62;
L64:
                                                                                        mp3_delay = atoi(_v64);
                                                                                        mp3_delay_set = 1;
                                                                                        _v68 = 1;
                                                                                        goto L275;
                                                                                    }
                                                                                    goto L60;
L62:
                                                                                    flush_write = 1;
                                                                                    goto L275;
                                                                                }
                                                                                goto L56;
L60:
                                                                                _v216 = 1;
                                                                                 *__esp = gfp;
                                                                                lame_set_decode_only();
                                                                                goto L275;
                                                                            }
                                                                            goto L52;
L56:
                                                                            if(presets_set(gfp, 0, 0, _v56, _v40) < 0) {
                                                                                return -1;
                                                                            }
                                                                            error_printf("Warning: --voice is deprecated, use --preset voice instead!");
                                                                            goto L275;
                                                                        }
                                                                        goto L50;
L52:
                                                                        if(presets_set(gfp, 0, 0, _v56, _v40) < 0) {
                                                                            return -1;
                                                                        }
                                                                        error_printf("Warning: --phone is deprecated, use --preset phone instead!");
                                                                        goto L275;
                                                                    }
                                                                    goto L48;
L50:
                                                                    error_printf("sorry, vorbis support in LAME is deprecated.\n");
                                                                    return -1;
                                                                }
                                                                goto L46;
L48:
                                                                input_format = 6;
                                                                goto L275;
                                                            }
                                                            goto L44;
L46:
                                                            input_format = 5;
                                                            goto L275;
                                                        }
                                                        goto L42;
L44:
                                                        input_format = 4;
                                                        goto L275;
                                                    }
                                                    goto L40;
L42:
                                                    in_endian = 1;
                                                    goto L275;
                                                }
                                                in_signed = 0;
                                                goto L275;
L40:
                                                in_endian = 0;
                                            } else {
                                                in_signed = 1;
                                            }
                                        } else {
                                            _v68 = 1;
                                            in_bitwidth = atoi(_v64);
                                        }
                                    } else {
                                        _v216 = 1000;
                                         *__esp = gfp;
                                        lame_set_preset();
                                    }
                                } else {
                                    _v68 = 1;
                                    _v216 = 3;
                                     *__esp = gfp;
                                    lame_set_VBR();
                                    _v216 = atoi(_v64);
                                     *__esp = gfp;
                                    lame_set_VBR_mean_bitrate_kbps();
                                    _t1216 = gfp;
                                     *__esp = _t1216;
                                    lame_get_VBR_mean_bitrate_kbps();
                                    if(_t1216 > 7999) {
                                        _t1223 = gfp;
                                         *__esp = _t1223;
                                        lame_get_VBR_mean_bitrate_kbps();
                                        _v216 = ((_t1223 + 500) * 274877907 >> 32 >> 6) - (_t1223 + 500 >> 31);
                                         *__esp = gfp;
                                        lame_set_VBR_mean_bitrate_kbps();
                                    }
                                    _t1217 = gfp;
                                     *__esp = _t1217;
                                    lame_get_VBR_mean_bitrate_kbps();
                                    if(_t1217 > 319) {
                                        _t1218 = 320;
                                    } else {
                                        _t1218 = gfp;
                                         *__esp = _t1218;
                                        lame_get_VBR_mean_bitrate_kbps();
                                    }
                                    _v216 = _t1218;
                                     *__esp = gfp;
                                    lame_set_VBR_mean_bitrate_kbps();
                                    _t1220 = gfp;
                                     *__esp = _t1220;
                                    lame_get_VBR_mean_bitrate_kbps();
                                    if(_t1220 <= 8) {
                                        _t1221 = 8;
                                    } else {
                                        _t1221 = gfp;
                                         *__esp = _t1221;
                                        lame_get_VBR_mean_bitrate_kbps();
                                    }
                                    _v216 = _t1221;
                                     *__esp = gfp;
                                    lame_set_VBR_mean_bitrate_kbps();
                                }
                            } else {
                                _v216 = 0;
                                 *__esp = gfp;
                                lame_set_VBR();
                            }
                        } else {
                            _v216 = 4;
                             *__esp = gfp;
                            lame_set_VBR();
                        }
                    } else {
                        _v216 = 4;
                         *__esp = gfp;
                        lame_set_VBR();
                    }
                } else {
                    _v216 = 2;
                     *__esp = gfp;
                    lame_set_VBR();
                }
            } else {
                _v68 = 1;
                atof(_v64);
                asm("fstp qword [esp]");
                _v216 = resample_rate();
                 *__esp = gfp;
                lame_set_out_samplerate();
            }
L275:
            _v24 = _v24 + _v68;
L283:
        }
        continue;
L285:
        if(num_nogap == 0 ||  *num_nogap <= _v44) {
            error_printf("Error: 'nogap option'.  Calling program does not allow nogap option, or\nyou have exceeded maximum number of input files for the nogap option\n");
             *num_nogap = -1;
            return -1;
        } else {
            _v44 = _v44 + 1;
            strncpy(nogap_inPath[_v44], argv[_v24], 4097);
            _v20 = 1;
            continue;
        }
        goto L289;
    }
    if(_v20 != 0) {
        if(( *inPath & 255 & 4294967295) == 45) {
            _t1302 = silent;
            _t1303 = _t1302 <= 0 ? 1 : _t1302;
            silent = _t1302 <= 0 ? 1 : _t1302;
        }
        if(( *outPath & 255 & 4294967295) == 0 && _v44 == 0) {
            if(( *inPath & 255 & 4294967295) != 45) {
                strncpy(outPath, inPath, 4093);
                _t1292 = gfp;
                 *__esp = _t1292;
                lame_get_decode_only();
                if(_t1292 == 0) {
                    strcat(outPath, ".mp3");
                } else {
                    strcat(outPath, ".wav");
                }
            } else {
                memcpy(outPath, "-", 2);
            }
        }
        if(_v48 == 0) {
            _v216 = 1;
             *__esp = gfp;
            lame_set_findReplayGain();
        }
        if(_v32 != 0) {
            _t1283 = gfp;
             *__esp = _t1283;
            lame_get_bWriteVbrTag();
            if(_t1283 != 0 && _v36 == 0) {
                console_printf("Note: Disabling VBR Xing/Info tag since it interferes with --nogap\n");
                _v216 = 0;
                 *__esp = gfp;
                lame_set_bWriteVbrTag();
            }
        }
        if(( *outPath & 255 & 4294967295) == 45) {
            _v216 = 0;
             *__esp = gfp;
            lame_set_bWriteVbrTag();
        }
        if(input_format == 0) {
            input_format = filename_to_type(inPath);
        }
        if(input_format != 8) {
            if(_v28 == 0) {
                _t1266 = gfp;
                 *__esp = _t1266;
                lame_get_mode();
                if(_t1266 != 3) {
                    _v216 = 2;
                     *__esp = gfp;
                    lame_set_num_channels();
                } else {
                    _v216 = 1;
                     *__esp = gfp;
                    lame_set_num_channels();
                }
            } else {
                _v216 = 2;
                 *__esp = gfp;
                lame_set_num_channels();
            }
            _t1268 = gfp;
             *__esp = _t1268;
            lame_get_free_format();
            if(_t1268 == 0) {
L327:
                if(num_nogap == 0) {
                    return 0;
                }
                 *num_nogap = _v44;
                return 0;
            }
            _t1271 = gfp;
             *__esp = _t1271;
            lame_get_brate();
            if(_t1271 <= 7) {
L326:
                error_printf("For free format, specify a bitrate between 8 and 640 kbps\n");
                error_printf("with the -b <bitrate> option\n");
                return -1;
            }
            _t1275 = gfp;
             *__esp = _t1275;
            lame_get_brate();
            if(_t1275 <= 640) {
                goto L327;
            }
            goto L326;
        }
        error_printf("sorry, vorbis support in LAME is deprecated.\n");
        return -1;
    }
    usage( *134593768, _v40);
    return -1;
}

int ReadByte(FILE* fp)
{// addr = 0x08052914
    int result;
    signed int _v16;
    _unknown_ __ebp;
    signed int _t7;

    _t7 = fp;
     *__esp = _t7;
    _IO_getc();
    _v16 = _t7 & 255;
    if((_v16 & 128) == 0) {
        return _v16;
    }
    _v16 = _v16 - 256;
    return _v16;
}

int Read16BitsLowHigh(FILE* fp)
{// addr = 0x08052945
    int first;
    int second;
    int result;
    signed int _v16;
    signed int _v20;
    signed int _v24;
    _unknown_ __ebp;
    signed int _t12;
    signed int _t14;

    _t12 = fp;
     *__esp = _t12;
    _IO_getc();
    _v16 = _t12 & 255;
    _t14 = fp;
     *__esp = _t14;
    _IO_getc();
    _v20 = _t14 & 255;
    _v24 = (_v20 << 8) + _v16;
    if((_v24 & 32768) == 0) {
        return _v24;
    }
    _v24 = _v24 - 65536;
    return _v24;
}

int Read16BitsHighLow(FILE* fp)
{// addr = 0x08052995
    int first;
    int second;
    int result;
    signed int _v16;
    signed int _v20;
    signed int _v24;
    _unknown_ __ebp;
    signed int _t12;
    signed int _t14;

    _t12 = fp;
     *__esp = _t12;
    _IO_getc();
    _v16 = _t12 & 255;
    _t14 = fp;
     *__esp = _t14;
    _IO_getc();
    _v20 = _t14 & 255;
    _v24 = (_v16 << 8) + _v20;
    if((_v24 & 32768) == 0) {
        return _v24;
    }
    _v24 = _v24 - 65536;
    return _v24;
}

Write8Bits(FILE* fp, int i)
{// addr = 0x080529E5
    FILE* _v24;
    _unknown_ __ebp;

    _v24 = fp;
     *__esp = i & 4294967295 & ;
    _IO_putc();
    return;
}

Write16BitsLowHigh(FILE* fp, int i)
{// addr = 0x08052A02
    FILE* _v24;
    _unknown_ __ebp;

    _v24 = fp;
     *__esp = i & 4294967295 & ;
    _IO_putc();
    _v24 = fp;
     *__esp = i >> 8 & 4294967295 & ;
    _IO_putc();
    return;
}

Write16BitsHighLow(FILE* fp, int i)
{// addr = 0x08052A37
    FILE* _v24;
    _unknown_ __ebp;

    _v24 = fp;
     *__esp = i >> 8 & 4294967295 & ;
    _IO_putc();
    _v24 = fp;
     *__esp = i & 4294967295 & ;
    _IO_putc();
    return;
}

int Read24BitsHighLow(FILE* fp)
{// addr = 0x08052A6C
    int first;
    int second;
    int third;
    int result;
    signed int _v16;
    signed int _v20;
    signed int _v24;
    signed int _v28;
    _unknown_ __ebp;
    signed int _t16;
    signed int _t18;
    signed int _t20;

    _t16 = fp;
     *__esp = _t16;
    _IO_getc();
    _v16 = _t16 & 255;
    _t18 = fp;
     *__esp = _t18;
    _IO_getc();
    _v20 = _t18 & 255;
    _t20 = fp;
     *__esp = _t20;
    _IO_getc();
    _v24 = _t20 & 255;
    _v28 = (_v16 << 16) + (_v20 << 8) + _v24;
    if((_v28 & 8388608) == 0) {
        return _v28;
    }
    _v28 = _v28 - 16777216;
    return _v28;
}

int Read32Bits(FILE* fp)
{// addr = 0x08052ADA
    int first;
    int second;
    int result;
    signed int _v16;
    signed int _v20;
    int _v24;
    _unknown_ __ebp;

    _v16 = Read16BitsLowHigh(fp) & 65535;
    _v20 = Read16BitsLowHigh(fp) & 65535;
    _v24 = (_v20 << 16) + _v16;
    return _v24;
}

int Read32BitsHighLow(FILE* fp)
{// addr = 0x08052B17
    int first;
    int second;
    int result;
    signed int _v16;
    signed int _v20;
    int _v24;
    _unknown_ __ebp;

    _v16 = Read16BitsHighLow(fp) & 65535;
    _v20 = Read16BitsHighLow(fp) & 65535;
    _v24 = (_v16 << 16) + _v20;
    return _v24;
}

Write32Bits(FILE* fp, int i)
{// addr = 0x08052B54
    _unknown_ _v24;
    _unknown_ __ebp;

    Write16BitsLowHigh(fp, i & 65535);
    Write16BitsLowHigh(fp, i >> 16);
    return;
}

Write32BitsLowHigh(FILE* fp, int i)
{// addr = 0x08052B88
    _unknown_ _v24;
    _unknown_ __ebp;

    Write16BitsLowHigh(fp, i & 65535);
    Write16BitsLowHigh(fp, i >> 16);
    return;
}

Write32BitsHighLow(FILE* fp, int i)
{// addr = 0x08052BBC
    _unknown_ _v24;
    _unknown_ __ebp;

    Write16BitsHighLow(fp, i >> 16);
    Write16BitsHighLow(fp, i & 65535);
    return;
}

ReadBytes(FILE* fp, char* p, int n)
{// addr = 0x08052BF0
    _unknown_ __ebp;
    signed int _t14;
    signed int _t16;

    __edx = __edx;
    while(1) {
        _t14 = feof(fp);
        n = n - 1;
        if((_t14 & __edx & 4294967295) == 0) {
            break;
        }
        _t16 = fp;
         *__esp = _t16;
        _IO_getc();
        __edx = _t16;
         *p = _t16 & 4294967295;
        p =  &(p[1]);
    }
    return;
}

ReadBytesSwapped(FILE* fp, char* p, int n)
{// addr = 0x08052C31
    char* q;
    _unknown_ __ebx;
    _unknown_ __ebp;
    signed int _t22;
    signed int _t24;
    char* _t29;
    signed int* _t30;
    signed int _t31;

    _t31 = __edx;
    _t29 = p;
    while(1) {
        _t22 = feof(fp);
        n = n - 1;
        if((_t22 & _t31 & 4294967295) == 0) {
            break;
        }
        _t24 = fp;
         *__esp = _t24;
        _IO_getc();
         *_t29 = _t24 & 4294967295;
        _t29 =  &(_t29[1]);
    }
    _t30 = _t29 - 1;
    while(p < _t30) {
        n =  *p & 255 & 4294967295;
         *p =  *_t30 & 255 & 4294967295;
         *_t30 = n & 4294967295;
        p =  &(p[1]);
        _t30 = _t30 - 1;
    }
}

WriteBytes(FILE* fp, char* p, int n)
{// addr = 0x08052C9E
    FILE* _v24;
    _unknown_ __ebp;
    signed int _t12;

    _t12 = __eax;
    while(1) {
        n = n - 1;
        if((_t12 & 4294967295) == 0) {
            break;
        }
        _t12 =  *p & 255 & 4294967295;
        p =  &(p[1]);
        _v24 = fp;
         *__esp = _t12;
        _IO_putc();
    }
    return;
}

WriteBytesSwapped(FILE* fp, char* p, int n)
{// addr = 0x08052CD3
    FILE* _v24;
    _unknown_ __ebp;
    signed int _t16;

    _t16 = n - 1;
    p =  &(p[_t16]);
    while(1) {
        n = n - 1;
        if((_t16 & 4294967295) == 0) {
            break;
        }
        _t16 =  *p & 255 & 4294967295;
        p = p - 1;
        _v24 = fp;
         *__esp = _t16;
        _IO_putc();
    }
    return;
}

double ConvertFromIeeeExtended(char* bytes)
{// addr = 0x08052D11
    double f;
    long int expon;
    long unsigned int hiMant;
    long unsigned int loMant;
    signed int _v16;
    signed int _v20;
    signed int _v24;
    intOrPtr _v48;
    signed int _v68;
    _unknown_ __ebp;
    double _t105;

    _v16 = bytes[1] & 255 & 4294967295 & 255 | ( *bytes & 255 & 4294967295 & 127) << 8;
    _v20 = bytes[5] & 255 & 4294967295 & 255 | (bytes[2] & 255 & 4294967295) << 24 | (bytes[3] & 255 & 4294967295 & 255) << 16 | (bytes[4] & 255 & 4294967295) << 8 & 65535;
    _v24 = bytes[9] & 255 & 4294967295 & 255 | (bytes[6] & 255 & 4294967295) << 24 | (bytes[7] & 255 & 4294967295 & 255) << 16 | (bytes[8] & 255 & 4294967295) << 8 & 65535;
    if(_v16 != 0 || _v20 != 0 || _v24 != 0) {
        if(_v16 != 32767) {
            _v16 = _v16 - 16383;
            _v16 = _v16 - 31;
            _v48 = _v20 - -2147483648;
            asm("fild dword [ebp-0x2c]");
            asm("fld qword [0x8059870]");
            asm("faddp st1, st0");
            _v68 = _v16;
            asm("fstp qword [esp]");
            ldexp();
            asm("fstp qword [ebp-0x20]");
            _v16 = _v16 - 32;
            _v48 = _v24 - -2147483648;
            asm("fild dword [ebp-0x2c]");
            asm("fld qword [0x8059870]");
            asm("faddp st1, st0");
            _v68 = _v16;
            asm("fstp qword [esp]");
            ldexp();
            asm("fld qword [ebp-0x20]");
            asm("faddp st1, st0");
            asm("fstp qword [ebp-0x20]");
        } else {
            asm("fld qword [0x8059868]");
            asm("fstp qword [ebp-0x20]");
        }
    } else {
        asm("fldz ");
        asm("fstp qword [ebp-0x20]");
    }
    _t105 =  *bytes & 255;
    if((_t105 & 4294967295) >= 0) {
        asm("fld qword [ebp-0x20]");
        return _t105;
    }
    asm("fld qword [ebp-0x20]");
    asm("fchs ");
    return _t105;
}

double ReadIeeeExtendedHighLow(FILE* fp)
{// addr = 0x08052E8B
    char[9] bytes;
    signed int _v16;
    char _v26;
    FILE* _v32;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ __ebp;
    _unknown_ _t12;
    double _t17;

    __eflags = __eflags;
    _v32 = fp;
    _v16 =  *gs:0x14];
    ReadBytes(_v32,  &_v26, 10);
    ConvertFromIeeeExtended( &_v26);
    _t17 = _v16 ^  *gs:0x14];
    if(__eflags == 0) {
        return _t17;
    }
    asm("fstp st0");
    __stack_chk_fail();
    return _t17;
}

ts_calc_times(const _None tstime, const int sample_freq, const int frameNum, const int totalframes, const int framesize)
{// addr = 0x08052EDC
    signed int _v8;
    _unknown_ __ebp;
    _unknown_ _t14;
    _unknown_ _t17;
    _unknown_ _t18;
    _unknown_ _t21;

    if(frameNum <= 0) {
L3:
        asm("fldz ");
        asm("fstp qword [eax+0x10]");
        asm("fldz ");
        asm("fstp qword [eax+0x18]");
        return tstime;
    }
    asm("fld qword [eax+0x8]");
    asm("fldz ");
    asm("fxch st0, st1");
    asm("fucomip st0, st1");
    asm("fstp st0");
    if((tstime & 4294967295) == 0) {
        goto L3;
    }
    asm("fld qword [eax+0x8]");
    asm("fild dword [ebp+0x14]");
    asm("fmulp st1, st0");
    asm("fild dword [ebp+0x10]");
    asm("fdivp st1, st0");
    asm("fstp qword [eax+0x10]");
    _v8 = framesize * frameNum;
    asm("fild dword [ebp-0x4]");
    asm("fild dword [ebp+0xc]");
    asm("fld qword [eax+0x8]");
    asm("fmulp st1, st0");
    asm("fdivp st1, st0");
    asm("fstp qword [eax+0x18]");
    return tstime;
    return __eax;
}

ts_time_decompose(const long unsigned int time_in_sec, const char padded_char)
{// addr = 0x08052F47
    const long unsigned int hour;
    const unsigned int min;
    const unsigned int sec;
    unsigned int _v16;
    signed int _v20;
    signed int _v24;
    signed int _v32;
    long unsigned int _v48;
    signed int _v76;
    signed int _v80;
    signed int _v84;
    signed int _v88;
    _unknown_ __ebp;
    _unknown_ _t55;
    _unknown_ _t60;
    _unknown_ _t62;
    _unknown_ _t70;
    _unknown_ _t78;
    _unknown_ _t83;
    _unknown_ _t87;
    signed int _t89;
    _unknown_ _t91;
    _unknown_ _t93;
    _unknown_ _t95;
    _unknown_ _t100;

    _v32 = padded_char & 4294967295;
    _v48 = time_in_sec;
    _v16 = _v48 * -1851608123 >> 32 >> 11;
    _v48 = time_in_sec;
    _t89 = _v48 * -2004318071 >> 32 >> 5;
    _v20 = _t89 * -2004318071 >> 32 >> 5;
    _v20 = _t89 - (_v20 << 2 << 4) - (_v20 << 2);
    _v24 = time_in_sec - (time_in_sec * -2004318071 >> 32 >> 5 << 2 << 4) - (time_in_sec * -2004318071 >> 32 >> 5 << 2);
    if(_v16 != 0) {
        if(_v16 > 99) {
            _v84 = _v32;
            _v88 = _v16;
            console_printf("%6lu h%c");
            return;
        }
        goto L3;
    }
    _v80 = _v32;
    _v84 = _v24;
    _v88 = _v20;
    console_printf("   %2u:%02u%c");
    return;
L3:
    _v76 = _v32;
    _v80 = _v24;
    _v84 = _v20;
    _v88 = _v16;
    console_printf("%2lu:%02u:%02u%c");
    return;
}

timestatus(const _None gfp)
{// addr = 0x0805303F
    int percent;
    double tmx;
    double delta;
    int samp_rate;
    int frameNum;
    int totalframes;
    int framesize;
    int _v16;
    int _v20;
    int _v24;
    int _v28;
    int _v32;
    signed int _v62;
    signed int _v64;
    _unknown_ _v72;
    signed int _v76;
    _unknown_ _v92;
    _unknown_ _v96;
    int _v100;
    int _v104;
    _unknown_ __ebp;
    const lame_global_flags* _t86;
    const lame_global_flags* _t87;
    const lame_global_flags* _t88;
    const lame_global_flags* _t89;
    signed int _t90;
    _unknown_ _t102;
    const char* _t103;
    _unknown_ _t104;
    signed int _t112;
    const char* _t113;
    _unknown_ _t114;
    _unknown_ _t119;
    _unknown_ _t121;
    _unknown_ _t122;
    _unknown_ _t123;
    _unknown_ _t124;
    _unknown_ _t125;

    _t86 = gfp;
     *__esp = _t86;
    lame_get_out_samplerate();
    _v20 = _t86;
    _t87 = gfp;
     *__esp = _t87;
    lame_get_frameNum();
    _v24 = _t87;
    _t88 = gfp;
     *__esp = _t88;
    lame_get_totalframes();
    _v28 = _t88;
    _t89 = gfp;
     *__esp = _t89;
    lame_get_framesize();
    _v32 = _t89;
    _t90 = _v28;
    if(_t90 < _v24) {
        _t90 = _v24;
        _v28 = _t90;
    }
    if(_v24 == 0) {
        GetRealTime();
        asm("fstp qword [0x805b420]");
        GetCPUTime();
        asm("fstp qword [0x805b440]");
        asm("fldz ");
        asm("fstp qword [0x805b428]");
        asm("fldz ");
        asm("fstp qword [0x805b448]");
    }
    GetRealTime();
    asm("fstp qword [ebp-0x28]");
    asm("fld qword [0x805b420]");
    asm("fld qword [ebp-0x28]");
    asm("fsubrp st1, st0");
    asm("fstp qword [ebp-0x30]");
    asm("fld qword [ebp-0x30]");
    asm("fldz ");
    asm("fucomip st0, st1");
    asm("fstp st0");
    if((_t90 & 4294967295) != 0) {
        asm("fldz ");
        asm("fstp qword [ebp-0x30]");
    }
    asm("fld qword [0x805b428]");
    asm("fadd qword [ebp-0x30]");
    asm("fstp qword [0x805b428]");
    asm("fld qword [ebp-0x28]");
    asm("fstp qword [0x805b420]");
    GetCPUTime();
    asm("fstp qword [ebp-0x28]");
    asm("fld qword [0x805b440]");
    asm("fld qword [ebp-0x28]");
    asm("fsubrp st1, st0");
    asm("fstp qword [ebp-0x30]");
    asm("fld qword [ebp-0x30]");
    asm("fldz ");
    asm("fucomip st0, st1");
    asm("fstp st0");
    if((_t90 & 4294967295) != 0) {
        asm("fldz ");
        asm("fstp qword [ebp-0x30]");
    }
    asm("fld qword [0x805b448]");
    asm("fadd qword [ebp-0x30]");
    asm("fstp qword [0x805b448]");
    asm("fld qword [ebp-0x28]");
    asm("fstp qword [0x805b440]");
    if(_v24 != 0 || init != 0) {
        if(_v24 > 0) {
            init = 0;
        }
        ts_calc_times( &real_time, _v20, _v24, _v28, _v32);
        ts_calc_times( &proc_time, _v20, _v24, _v28, _v32);
        if(_v24 >= _v28) {
            _v16 = 100;
        } else {
            asm("fild dword [ebp-0x14]");
            asm("fld qword [0x8059ae8]");
            asm("fmulp st1, st0");
            asm("fild dword [ebp-0x18]");
            asm("fdivp st1, st0");
            asm("fld qword [0x8059af0]");
            asm("faddp st1, st0");
            asm("fnstcw word [ebp-0x3a]");
            _v64 = _v62 & 65535 & 4294967295;
            asm("fldcw word [ebp-0x3c]");
            asm("fistp dword [ebp-0xc]");
            asm("fldcw word [ebp-0x3a]");
        }
        _v100 = _v28;
        _v104 = _v24;
        console_printf("%6i/%-6i");
        if(_v16 > 99) {
            _t103 = "(%3.3d%%)|";
        } else {
            _t103 = " (%2d%%)|";
        }
        _v104 = _v16;
        console_printf(_t103);
        asm("fld qword [0x805b448]");
        asm("fnstcw word [ebp-0x3a]");
        _v64 = _v62 & 65535 & 4294967295;
        asm("fldcw word [ebp-0x3c]");
        asm("fistp qword [ebp-0x48]");
        asm("fldcw word [ebp-0x3a]");
        ts_time_decompose(_v76, 47);
        asm("fld qword [0x805b450]");
        asm("fnstcw word [ebp-0x3a]");
        _v64 = _v62 & 65535 & 4294967295;
        asm("fldcw word [ebp-0x3c]");
        asm("fistp qword [ebp-0x48]");
        asm("fldcw word [ebp-0x3a]");
        ts_time_decompose(_v76, 124);
        asm("fld qword [0x805b428]");
        asm("fnstcw word [ebp-0x3a]");
        _v64 = _v62 & 65535 & 4294967295;
        asm("fldcw word [ebp-0x3c]");
        asm("fistp qword [ebp-0x48]");
        asm("fldcw word [ebp-0x3a]");
        ts_time_decompose(_v76, 47);
        asm("fld qword [0x805b430]");
        asm("fnstcw word [ebp-0x3a]");
        _v64 = _v62 & 65535 & 4294967295;
        asm("fldcw word [ebp-0x3c]");
        asm("fistp qword [ebp-0x48]");
        asm("fldcw word [ebp-0x3a]");
        _t112 = _v76;
        ts_time_decompose(_t112, 124);
        asm("fld qword [0x805b458]");
        asm("fld qword [0x805b458]");
        asm("fld1 ");
        asm("fucomip st0, st1");
        asm("fstp st0");
        asm("setnb al");
        if((_t112 & 4294967295) == 0) {
            _t113 = "%#9.5gx|";
        } else {
            _t113 = "%9.4fx|";
        }
        asm("fstp qword [esp+0x4]");
        console_printf(_t113);
        asm("fld qword [0x805b430]");
        asm("fld qword [0x805b428]");
        asm("fsubp st1, st0");
        asm("fnstcw word [ebp-0x3a]");
        _v64 = _v62 & 65535 & 4294967295;
        asm("fldcw word [ebp-0x3c]");
        asm("fistp qword [ebp-0x48]");
        asm("fldcw word [ebp-0x3a]");
        ts_time_decompose(_v76, 32);
        return;
    }
    console_printf("    Frame          |  CPU time/estim | REAL time/estim | play/CPU |    ETA \n     0/       ( 0%%)|    0:00/     :  |    0:00/     :  |         x|     :  ");
    init = 1;
    return;
}

timestatus_finish()
{// addr = 0x08053376
    _unknown_ __ebp;

    console_printf("\n");
    return;
}

encoder_progress_begin(const lame_global_flags* gf, const char* inPath, const char* outPath)
{// addr = 0x0805338A
    signed int _v30;
    signed int _v32;
    const lame_global_flags* _v36;
    char* _v40;
    const lame_global_flags* _v56;
    char* _v60;
    const lame_global_flags* _v72;
    char* _v88;
    const lame_global_flags* _v112;
    const lame_global_flags* _v116;
    char* _v128;
    char* _v132;
    const char* _v136;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    int _t107;
    const char* _t113;
    _unknown_ _t114;
    const lame_global_flags* _t115;
    _unknown_ _t116;
    const lame_global_flags* _t117;
    const lame_global_flags* _t118;
    const lame_global_flags* _t120;
    const lame_global_flags* _t121;
    signed int _t122;
    const lame_global_flags* _t123;
    _unknown_ _t126;
    const lame_global_flags* _t128;
    const lame_global_flags* _t129;
    const lame_global_flags* _t133;
    const lame_global_flags* _t134;
    signed int _t135;
    const lame_global_flags* _t136;
    _unknown_ _t139;
    const lame_global_flags* _t141;
    const lame_global_flags* _t142;
    signed int _t143;
    const lame_global_flags* _t144;
    _unknown_ _t147;
    const lame_global_flags* _t148;
    const lame_global_flags* _t149;
    const lame_global_flags* _t153;
    const lame_global_flags* _t154;
    signed int _t155;
    const lame_global_flags* _t156;
    _unknown_ _t159;
    char* _t161;
    const lame_global_flags* _t163;
    const lame_global_flags* _t165;
    _unknown_ _t166;
    _unknown_ _t168;
    _unknown_ _t170;
    _unknown_ _t172;
    _unknown_ _t175;
    _unknown_ _t179;
    _unknown_ _t181;
    const lame_global_flags* _t185;
    char* _t186;
    char* _t187;
    char* _t188;
    const char* _t189;
    char* _t190;
    _unknown_ _t192;

    if(silent > 9) {
        return ;
    }
     *__esp = gf;
    lame_print_config();
    if(strcmp(outPath, "-") == 0) {
        _t189 = "<stdout>";
    } else {
        _t189 = outPath;
    }
    _t107 = strlen(inPath);
    if(_t107 + strlen(outPath) > 65) {
        _t161 = "\n     ";
    } else {
        _t161 = 134584696;
    }
    if(strcmp(inPath, "-") == 0) {
        _t113 = "<stdin>";
    } else {
        _t113 = inPath;
    }
    _v128 = _t189;
    _v132 = _t161;
    _v136 = _t113;
    console_printf("Encoding %s%s to %s\n");
    _t115 = gf;
     *__esp = _t115;
    lame_get_out_samplerate();
    _v36 = _t115;
    asm("fild dword [ebp-0x20]");
    asm("fld qword [0x8059af8]");
    asm("fmulp st1, st0");
    asm("fstp qword [esp+0x4]");
    console_printf("Encoding as %g kHz ");
    _t117 = gf;
     *__esp = _t117;
    lame_get_VBR();
    if(_t117 == 2) {
        _t118 = gf;
         *__esp = _t118;
        lame_get_quality();
        _t185 = _t118;
         *__esp = gf;
        lame_get_VBR_quality();
        asm("fstp qword [ebp-0x60]");
        _t120 = gf;
         *__esp = _t120;
        lame_get_out_samplerate();
        if(_t120 > 15999) {
            _t190 = 134584696;
        } else {
            _t190 = ".5";
        }
        _t121 = gf;
         *__esp = _t121;
        lame_get_version();
        _v88 = 2 - _t121;
        _t122 = gf;
         *__esp = _t122;
        lame_get_force_ms();
        _t123 = gf;
         *__esp = _t123;
        lame_get_mode();
        _v116 = _t185;
        asm("fld qword [ebp-0x60]");
        asm("fstp qword [esp+0x10]");
        _v128 = _t190;
        _v132 = _v88;
        _v136 =  *( &mode_names + (0 + _t122 * 4 + _t123) * 4);
        console_printf("%s MPEG-%u%s Layer III VBR(q=%g) qval=%i\n");
        goto L33;
    } else {
        if(_t117 > 2) {
            if(_t117 == 3) {
                _t128 = gf;
                 *__esp = _t128;
                lame_get_quality();
                _t163 = _t128;
                _t129 = gf;
                 *__esp = _t129;
                lame_get_VBR_mean_bitrate_kbps();
                _v72 = _t129;
                 *__esp = gf;
                lame_get_compression_ratio();
                asm("fld qword [0x8059b00]");
                asm("fmulp st1, st0");
                asm("fld qword [0x8059af0]");
                asm("faddp st1, st0");
                asm("fnstcw word [ebp-0x1a]");
                _v32 = _v30 & 65535 & 4294967295;
                asm("fldcw word [ebp-0x1c]");
                asm("fistp dword [ebp-0x20]");
                asm("fldcw word [ebp-0x1a]");
                _v36 = _v36;
                asm("fild dword [ebp-0x20]");
                asm("fld qword [0x8059b08]");
                asm("fmulp st1, st0");
                asm("fstp qword [ebp-0x40]");
                _t133 = gf;
                 *__esp = _t133;
                lame_get_out_samplerate();
                if(_t133 > 15999) {
                    _t186 = 134584696;
                } else {
                    _t186 = ".5";
                }
                _t134 = gf;
                 *__esp = _t134;
                lame_get_version();
                _v60 = 2 - _t134;
                _t135 = gf;
                 *__esp = _t135;
                lame_get_force_ms();
                _t136 = gf;
                 *__esp = _t136;
                lame_get_mode();
                _v112 = _t163;
                _v116 = _v72;
                asm("fld qword [ebp-0x40]");
                asm("fstp qword [esp+0x10]");
                _v128 = _t186;
                _v132 = _v60;
                _v136 =  *( &mode_names + (0 + _t135 * 4 + _t136) * 4);
                console_printf("%s MPEG-%u%s Layer III (%gx) average %d kbps qval=%i\n");
                goto L33;
            }
            goto L15;
        }
        if(_t117 == 1) {
L21:
             *__esp = gf;
            lame_get_VBR_quality();
            asm("fstp qword [ebp-0x50]");
            _t141 = gf;
             *__esp = _t141;
            lame_get_out_samplerate();
            if(_t141 > 15999) {
                _t187 = 134584696;
            } else {
                _t187 = ".5";
            }
            _t142 = gf;
             *__esp = _t142;
            lame_get_version();
            _t143 = gf;
             *__esp = _t143;
            lame_get_force_ms();
            _t144 = gf;
             *__esp = _t144;
            lame_get_mode();
            asm("fld qword [ebp-0x50]");
            asm("fstp qword [esp+0x10]");
            _v128 = _t187;
            _v132 = 2 - _t142;
            _v136 =  *( &mode_names + (0 + _t143 * 4 + _t144) * 4);
            console_printf("%s MPEG-%u%s Layer III VBR(q=%g)\n");
L33:
            if(silent >= 247) {
                return ;
            }
             *__esp = gf;
            lame_print_internals();
            return;
        }
L29:
        _t148 = gf;
         *__esp = _t148;
        lame_get_quality();
        _t165 = _t148;
        _t149 = gf;
         *__esp = _t149;
        lame_get_brate();
        _v56 = _t149;
         *__esp = gf;
        lame_get_compression_ratio();
        asm("fld qword [0x8059b00]");
        asm("fmulp st1, st0");
        asm("fld qword [0x8059af0]");
        asm("faddp st1, st0");
        asm("fnstcw word [ebp-0x1a]");
        _v32 = _v30 & 65535 & 4294967295;
        asm("fldcw word [ebp-0x1c]");
        asm("fistp dword [ebp-0x20]");
        asm("fldcw word [ebp-0x1a]");
        _v36 = _v36;
        asm("fild dword [ebp-0x20]");
        asm("fld qword [0x8059b08]");
        asm("fmulp st1, st0");
        asm("fstp qword [ebp-0x30]");
        _t153 = gf;
         *__esp = _t153;
        lame_get_out_samplerate();
        if(_t153 > 15999) {
            _t188 = 134584696;
        } else {
            _t188 = ".5";
        }
        _t154 = gf;
         *__esp = _t154;
        lame_get_version();
        _v40 = 2 - _t154;
        _t155 = gf;
         *__esp = _t155;
        lame_get_force_ms();
        _t156 = gf;
         *__esp = _t156;
        lame_get_mode();
        _v112 = _t165;
        _v116 = _v56;
        asm("fld qword [ebp-0x30]");
        asm("fstp qword [esp+0x10]");
        _v128 = _t188;
        _v132 = _v40;
        _v136 =  *( &mode_names + (0 + _t155 * 4 + _t156) * 4);
        console_printf("%s MPEG-%u%s Layer III (%gx) %3d kbps qval=%i\n");
        goto L33;
L15:
        if(_t117 == 4) {
            goto L21;
        }
        goto L29;
    }
}

encoder_progress(const lame_global_flags* gf)
{// addr = 0x080537BE
    const int frames;
    const double act;
    const double dif;
    signed int _v16;
    _unknown_ __ebx;
    _unknown_ __ebp;
    signed int _t17;
    _unknown_ _t22;
    _unknown_ _t30;

    if(silent > 0) {
        return ;
    }
    _t17 = gf;
     *__esp = _t17;
    lame_get_frameNum();
    _v16 = _t17;
    asm("fld dword [0x805c550]");
    asm("fldz ");
    asm("fucomip st0, st1");
    asm("fstp st0");
    asm("setnb al");
    if((_t17 & 4294967295) == 0) {
        if(_v16 != 0 && _v16 != 9) {
            GetRealTime();
            asm("fstp qword [ebp-0x18]");
            asm("fld qword [0x805b408]");
            asm("fld qword [ebp-0x18]");
            asm("fsubrp st1, st0");
            asm("fstp qword [ebp-0x20]");
            asm("fld qword [ebp-0x20]");
            asm("fldz ");
            asm("fxch st0, st1");
            asm("fucomip st0, st1");
            asm("fstp st0");
            asm("setnb al");
            if((_t17 & 4294967295) != 0) {
                asm("fld dword [0x805c550]");
                asm("fld qword [ebp-0x20]");
                asm("fxch st0, st1");
                asm("fucomip st0, st1");
                asm("fstp st0");
                if((_t17 & 4294967295) != 0) {
                    return ;
                }
            }
        }
        GetRealTime();
        asm("fstp qword [0x805b408]");
L9:
        if(brhist != 0) {
            brhist_jump_back();
        }
        timestatus(gf);
        if(brhist != 0) {
            brhist_disp(gf);
        }
        console_flush();
        return;
    } else {
        if(_v16 == ((_v16 * 1374389535 >> 32 >> 5) - (__ecx >> 31)) * ((_v16 * 1374389535 >> 32 >> 5) - (__ecx >> 31))) {
            goto L9;
        } else {
            return;
        }
    }
}

encoder_progress_end(const lame_global_flags* gf)
{// addr = 0x080538AF
    _unknown_ __ebp;

    if(silent > 0) {
        return ;
    }
    if(brhist != 0) {
        brhist_jump_back();
    }
    timestatus(gf);
    if(brhist != 0) {
        brhist_disp(gf);
    }
    timestatus_finish();
    return;
}

decoder_progress(const _None mp3data)
{// addr = 0x080538F2
    int curr;
    signed int _v16;
    int _v32;
    int _v36;
    int _v40;
    _unknown_ __ebp;
    _unknown_ _t27;
    _unknown_ _t30;
    _unknown_ _t31;
    int _t38;
    char* _t43;
    _unknown_ _t44;
    int _t50;
    int _t52;

    _v32 = mp3data->bitrate;
    _v36 = mp3data->totalframes;
    _v40 = mp3data->framenum;
    console_printf("Frame#%6i/%-6i %3i kbps");
    if(mp3data->mode != 1) {
        console_printf("         ");
        last = 0;
    } else {
        _v16 = mp3data->mode_ext;
        if((_v16 & 1 & 4294967295) == 0) {
            if((last & 1 & 4294967295) == 0) {
                _t38 = 32;
            } else {
                _t38 = 105;
            }
            _t52 = _t38;
        } else {
            if((last & 1 & 4294967295) == 0) {
                _t50 = 105;
            } else {
                _t50 = 73;
            }
            _t52 = _t50;
        }
        if((_v16 & 2) == 0) {
            if((last & 2) == 0) {
                _t43 = "L  R";
            } else {
                _t43 = "LMSR";
            }
        } else {
            if((last & 2) == 0) {
                _t43 = "LMSR";
            } else {
                _t43 = " MS ";
            }
        }
        _v36 = _t52;
        _v40 = _t43;
        console_printf("  %s  %c");
        last = _v16;
    }
    console_printf(134584998);
    return;
}

decoder_progress_finish()
{// addr = 0x080539F8
    _unknown_ __ebp;

    console_printf("\n");
    return;
}

int calculate_index(const const int* array, const int len, const int value)
{// addr = 0x08053A0C
    int i;
    signed int _v8;
    _unknown_ __ebp;
    _unknown_ _t16;

    _v8 = 0;
    while(_v8 < len) {
        if( *((intOrPtr*)(array + (_v8 << 2))) == value) {
            return _v8;
        }
        _v8 = _v8 + 1;
    }
}

int brhist_init(const lame_global_flags* gf, const int bitrate_kbps_min, const int bitrate_kbps_max)
{// addr = 0x08053A43
    int _v20;
    const int* _v24;
    _unknown_ __ebp;
    _unknown_ _t29;
    _unknown_ _t30;
    _unknown_ _t32;
    _unknown_ _t33;
    _unknown_ _t34;
    _unknown_ _t35;
    _unknown_ _t36;

     *134591680 = 0;
    _v24 = 134591624;
     *__esp = gf;
    lame_bitrate_kbps();
     *134591616 = calculate_index(134591624, 14, bitrate_kbps_min);
     *134591620 = calculate_index(134591624, 14, bitrate_kbps_max);
    if( *134591616 > 13 ||  *134591620 > 13) {
        _v20 = bitrate_kbps_max;
        _v24 = bitrate_kbps_min;
        error_printf("lame internal error: VBR min %d kbps or VBR max %d kbps not allowed.\n");
        return -1;
    }
    memset(134591684, 42, 512);
    memset(134592197, 37, 512);
    memset(134593223, 45, 512);
    memset(134592710, 45, 512);
    return 0;
}

int digits(unsigned int number)
{// addr = 0x08053B52
    int ret;
    intOrPtr _v8;
    unsigned int _v24;
    _unknown_ __ebp;
    _unknown_ _t42;
    _unknown_ _t47;
    _unknown_ _t52;
    _unknown_ _t55;
    _unknown_ _t57;
    _unknown_ _t59;

    _v8 = 1;
    if(number > 99999999) {
        _v8 = _v8 + 8;
        _v24 = number;
        number = _v24 * 1441151881 >> 32 >> 25;
    }
    if(number > 9999) {
        _v8 = _v8 + 4;
        _v24 = number;
        number = _v24 * -776530087 >> 32 >> 13;
    }
    if(number > 99) {
        _v8 = _v8 + 2;
        _v24 = number;
        number = _v24 * 1374389535 >> 32 >> 5;
    }
    if(number <= 9) {
        return _v8;
    }
    _v8 = _v8 + 1;
    return _v8;
}

brhist_disp_line(int i, int br_hist_TOT, int br_hist_LR, int full, int frames)
{// addr = 0x08053BDA
    char[13] brppt;
    int barlen_TOT;
    int barlen_LR;
    int ppt;
    int res;
    signed int _v16;
    char _v30;
    signed int _v36;
    signed int _v40;
    signed int _v44;
    intOrPtr _v48;
    intOrPtr _v76;
    signed char* _v80;
    intOrPtr _v84;
    intOrPtr _v88;
    intOrPtr _v92;
    int _v96;
    char* _v100;
    intOrPtr _v104;
    _unknown_ __ebp;
    _unknown_ _t81;
    int _t87;
    _unknown_ _t89;
    _unknown_ _t96;
    signed int _t100;
    _unknown_ _t104;
    signed int _t121;
    signed int _t128;
    _unknown_ _t140;
    _unknown_ _t141;
    _unknown_ _t143;
    _unknown_ _t144;
    _unknown_ _t146;
    signed int _t149;

    _v16 =  *gs:0x14];
    _v44 = 0;
    _v48 = digits(frames) + 8;
    if(full == 0) {
        _v40 = 0;
        _v36 = _v40;
    } else {
        _v36 = (( *134593780 - _v48) * br_hist_TOT + full - 1) / full;
        _t121 = ( *134593780 - _v48) * br_hist_LR + full - 1;
        _t128 = _t121 % full;
        _v40 = _t121 / full;
    }
    if(frames > 0) {
        _v44 = (_t128 * br_hist_TOT + ((frames >> 31) + frames >> 1)) / frames;
    }
    _t87 = digits(frames);
    _v96 = br_hist_TOT;
    _v100 = _t87;
    sprintf( &_v30, " [%*i]");
    _t149 =  *134593798 & 255 & 4294967295;
    if(_t149 == 0) {
        _v76 = 134585199;
        _v80 =  *134593780 - _v48 - _v36;
        _v84 = 134591684;
        _v88 = _v36 - _v40;
        _v92 = 134592197;
        _v96 = _v40;
        _v100 =  &_v30;
        _v104 =  *((intOrPtr*)(134591624 + i * 4));
        console_printf("\n%3d%s %.*s%.*s%*s");
    } else {
        _v80 = 134593798;
        _v84 = 134591684;
        _v88 = _v36 - _v40;
        _v92 = 134592197;
        _v96 = _v40;
        _v100 =  &_v30;
        _v104 =  *((intOrPtr*)(134591624 + i * 4));
        console_printf("\n%3d%s %.*s%.*s%s");
    }
     *134591680 =  *134591680 + 1;
    _t100 = _v16 ^  *gs:0x14];
    if(_t149 == 0) {
        return _t100;
    }
    __stack_chk_fail();
    return _t100;
}

progress_line(const lame_global_flags* gf, int full, int frames)
{// addr = 0x08053D7C
    char[19] rst;
    int barlen_TOT;
    int barlen_COD;
    int barlen_RST;
    int res;
    float time_in_sec;
    unsigned int hour;
    unsigned int min;
    unsigned int sec;
    int fsize;
    int srate;
    signed int _v16;
    signed int _v18;
    signed int _v22;
    signed int _v26;
    signed int _v30;
    signed int _v34;
    char _v36;
    signed int _v40;
    signed int _v44;
    signed int _v48;
    intOrPtr _v52;
    signed int _v56;
    unsigned int _v60;
    signed int _v64;
    char* _v68;
    lame_global_flags* _v72;
    const lame_global_flags* _v76;
    lame_global_flags* _v80;
    signed short _v82;
    signed int _v84;
    signed int _v88;
    signed int _v92;
    intOrPtr _v96;
    intOrPtr _v112;
    signed char* _v116;
    signed int _v120;
    signed int _v124;
    char* _v128;
    int _v132;
    signed int _v136;
    _unknown_ __ebp;
    _unknown_ _t129;
    _unknown_ _t131;
    lame_global_flags* _t132;
    const lame_global_flags* _t133;
    _unknown_ _t153;
    signed int _t157;
    _unknown_ _t161;
    _unknown_ _t164;
    _unknown_ _t182;
    int _t184;
    _unknown_ _t186;
    _unknown_ _t202;
    _unknown_ _t203;
    _unknown_ _t204;
    _unknown_ _t207;
    _unknown_ _t208;
    _unknown_ _t212;
    _unknown_ _t213;
    _unknown_ _t215;
    _unknown_ _t216;
    signed int _t226;

    _v80 = gf;
    _v16 =  *gs:0x14];
    _v36 =  *134585277 & 65535 & 4294967295;
    _v34 = 0;
    _v30 = 0;
    _v26 = 0;
    _v22 = 0;
    _v18 = 0;
    _v40 = 0;
    _v44 = 0;
    _v48 = 0;
    _v52 = 1;
    _v56 = 0;
    _t132 = _v80;
     *__esp = _t132;
    lame_get_framesize();
    _v72 = _t132;
    _t133 = _v80;
     *__esp = _t133;
    lame_get_out_samplerate();
    _v76 = _t133;
    if(full < frames) {
        full = frames;
    }
    if(_v76 > 0) {
        _v96 = full - frames;
        asm("fild dword [ebp-0x5c]");
        asm("fstp dword [ebp-0x34]");
        asm("fild dword [ebp-0x44]");
        asm("fld dword [ebp-0x34]");
        asm("fmulp st1, st0");
        asm("fstp dword [ebp-0x34]");
        asm("fild dword [ebp-0x48]");
        asm("fld dword [ebp-0x34]");
        asm("fdivrp st1, st0");
        asm("fstp dword [ebp-0x34]");
    }
    asm("fld dword [ebp-0x34]");
    asm("fld dword [0x8059c48]");
    asm("fdivp st1, st0");
    asm("fnstcw word [ebp-0x4e]");
    _v84 = _v82 & 65535 & 4294967295;
    asm("fldcw word [ebp-0x50]");
    asm("fistp qword [ebp-0x58]");
    asm("fldcw word [ebp-0x4e]");
    _v60 = _v92;
    _v92 = _v60 * _v60;
    _v88 = 0;
    asm("fild qword [ebp-0x58]");
    asm("fld dword [ebp-0x34]");
    asm("fsubrp st1, st0");
    asm("fstp dword [ebp-0x34]");
    asm("fld dword [ebp-0x34]");
    asm("fld dword [0x8059c4c]");
    asm("fdivp st1, st0");
    asm("fldcw word [ebp-0x50]");
    asm("fistp qword [ebp-0x58]");
    asm("fldcw word [ebp-0x4e]");
    _v64 = _v92;
    _v92 = (_v64 << 2 << 4) - (_v64 << 2);
    _v88 = 0;
    asm("fild qword [ebp-0x58]");
    asm("fld dword [ebp-0x34]");
    asm("fsubrp st1, st0");
    asm("fstp dword [ebp-0x34]");
    asm("fld dword [ebp-0x34]");
    asm("fldcw word [ebp-0x50]");
    asm("fistp qword [ebp-0x58]");
    asm("fldcw word [ebp-0x4e]");
    _v68 = _v92;
    if(full == 0) {
        _v48 = 0;
        _v44 = _v48;
        _v40 = _v44;
    } else {
        if(_v60 == 0) {
            _v128 = _v68;
            _v132 = _v64;
            sprintf( &_v36, "%02u:%02u");
            _v52 = _v52 + 5;
        } else {
            _t184 = digits(_v60);
            _v120 = _v68;
            _v124 = _v64;
            _v128 = _v60;
            _v132 = _t184;
            sprintf( &_v36, "%*d:%02u:%02u");
            _v52 = _v52 + digits(_v60) + 6;
        }
        _v40 = (( *134593780 - _v52 + 1) * full - 1) / full;
        _v44 = (( *134593780 - _v52) * frames + full - 1) / full;
        _v48 = _v40 - _v44;
        if(_v48 == 0) {
            _v128 = 134592710;
            _v132 = _v52 - 1;
            sprintf( &_v36, "%.*s");
        }
    }
    _t226 =  *134593798 & 255 & 4294967295;
    if(_t226 == 0) {
        _v112 = 134585199;
        _v116 =  *134593780 - _v52 - _v40;
        _v120 = 134593223;
        _v124 = _v48;
        _v128 =  &_v36;
        _v132 = 134592710;
        _v136 = _v44;
        console_printf("\n%.*s%s%.*s%*s");
    } else {
        _v116 = 134593798;
        _v120 = 134593223;
        _v124 = _v48;
        _v128 =  &_v36;
        _v132 = 134592710;
        _v136 = _v44;
        console_printf("\n%.*s%s%.*s%s");
    }
     *134591680 =  *134591680 + 1;
    _t157 = _v16 ^  *gs:0x14];
    if(_t226 == 0) {
        return _t157;
    }
    __stack_chk_fail();
    return _t157;
}

int stats_value(double x)
{// addr = 0x0805409D
    signed int _v16;
    double _v20;
    _unknown_ __ebp;
    signed int _t8;
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t11;

    _v20 = x;
    _t8 = _a8;
    _v16 = _t8;
    asm("fld qword [ebp-0x10]");
    asm("fldz ");
    asm("fxch st0, st1");
    asm("fucomip st0, st1");
    asm("fstp st0");
    if((_t8 & 4294967295) == 0) {
        return 0;
    }
    asm("fld qword [ebp-0x10]");
    asm("fstp qword [esp+0x4]");
    console_printf(" %5.1f");
    return 6;
}

int stats_head(double x, const char* txt)
{// addr = 0x080540E2
    signed int _v16;
    double _v20;
    _unknown_ __ebp;
    signed int _t9;
    _unknown_ _t10;
    _unknown_ _t12;
    _unknown_ _t13;

    _v20 = x;
    _t9 = txt;
    _v16 = _t9;
    asm("fld qword [ebp-0x10]");
    asm("fldz ");
    asm("fxch st0, st1");
    asm("fucomip st0, st1");
    asm("fstp st0");
    if((_t9 & 4294967295) == 0) {
        return 0;
    }
    console_printf(_a12);
    return 6;
}

stats_line(double* stat)
{// addr = 0x0805411F
    int n;
    intOrPtr _v16;
    char* _v36;
    signed char* _v40;
    _unknown_ __ebp;
    _unknown_ _t80;
    _unknown_ _t82;
    _unknown_ _t85;
    _unknown_ _t88;
    _unknown_ _t91;
    _unknown_ _t93;
    _unknown_ _t95;
    _unknown_ _t98;
    _unknown_ _t101;
    _unknown_ _t104;
    _unknown_ _t110;
    _unknown_ _t113;
    _unknown_ _t114;
    _unknown_ _t116;
    _unknown_ _t119;
    _unknown_ _t122;
    _unknown_ _t125;
    _unknown_ _t127;
    _unknown_ _t129;
    _unknown_ _t132;
    _unknown_ _t135;
    _unknown_ _t138;
    _unknown_ _t143;
    _unknown_ _t146;
    _unknown_ _t147;

    _v16 = 1;
    console_printf("\n   kbps     ");
    _v16 = _v16 + 12;
    asm("fld qword [eax]");
    _v36 = "  mono";
    asm("fstp qword [esp]");
    _v16 = _v16 + stats_head();
    asm("fld qword [eax]");
    _v36 = "   IS ";
    asm("fstp qword [esp]");
    _v16 = _v16 + stats_head();
    asm("fld qword [eax]");
    _v36 = "   LR ";
    asm("fstp qword [esp]");
    _v16 = _v16 + stats_head();
    asm("fld qword [eax]");
    _v36 = "   MS ";
    asm("fstp qword [esp]");
    _v16 = _v16 + stats_head();
    console_printf(" %%    ");
    _v16 = _v16 + 6;
    asm("fld qword [eax]");
    _v36 = " long ";
    asm("fstp qword [esp]");
    _v16 = _v16 + stats_head();
    asm("fld qword [eax]");
    _v36 = "switch";
    asm("fstp qword [esp]");
    _v16 = _v16 + stats_head();
    asm("fld qword [eax]");
    _v36 = " short";
    asm("fstp qword [esp]");
    _v16 = _v16 + stats_head();
    asm("fld qword [eax]");
    _v36 = " mixed";
    asm("fstp qword [esp]");
    _v16 = _v16 + stats_head();
    _v16 = _v16 + console_printf(" %%");
    if(( *134593798 & 255 & 4294967295) == 0) {
        _v36 = 134585199;
        _v40 =  *134593780 - _v16;
        console_printf("%*s");
    } else {
        _v40 = 134593798;
        console_printf("%s");
    }
     *134591680 =  *134591680 + 1;
    _v16 = 1;
    asm("fld qword [eax]");
    asm("fstp qword [esp+0x4]");
    console_printf("\n  %5.1f     ");
    _v16 = _v16 + 12;
    asm("fld qword [eax]");
    asm("fstp qword [esp]");
    _v16 = _v16 + stats_value();
    asm("fld qword [eax]");
    asm("fstp qword [esp]");
    _v16 = _v16 + stats_value();
    asm("fld qword [eax]");
    asm("fstp qword [esp]");
    _v16 = _v16 + stats_value();
    asm("fld qword [eax]");
    asm("fstp qword [esp]");
    _v16 = _v16 + stats_value();
    console_printf("      ");
    _v16 = _v16 + 6;
    asm("fld qword [eax]");
    asm("fstp qword [esp]");
    _v16 = _v16 + stats_value();
    asm("fld qword [eax]");
    asm("fstp qword [esp]");
    _v16 = _v16 + stats_value();
    asm("fld qword [eax]");
    asm("fstp qword [esp]");
    _v16 = _v16 + stats_value();
    asm("fld qword [eax]");
    asm("fstp qword [esp]");
    _v16 = _v16 + stats_value();
    if(( *134593798 & 255 & 4294967295) == 0) {
        _v36 = 134585199;
        _v40 =  *134593780 - _v16;
        console_printf("%*s");
    } else {
        _v40 = 134593798;
        console_printf("%s");
    }
     *134591680 =  *134591680 + 1;
    return;
}

brhist_disp(const lame_global_flags* gf)
{// addr = 0x08054399
    int i;
    int lines_used;
    int[13] br_hist;
    int[13][3] br_sm_hist;
    int[3] st_mode;
    int[5] bl_type;
    int frames;
    int most_often;
    double sum;
    double[8] stat;
    int st_frames;
    int show;
    _unknown_ _v12;
    signed int _v16;
    int _v20;
    int _v24;
    int _v28;
    int _v32;
    _unknown_ _v36;
    _unknown_ _v52;
    char _v60;
    _unknown_ _v64;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ _v76;
    _unknown_ _v80;
    char _v84;
    char _v140;
    void _v212;
    char _v436;
    _unknown_ _v448;
    _unknown_ _v476;
    _unknown_ _v480;
    _unknown_ _v484;
    char* _v488;
    _unknown_ __edi;
    _unknown_ __ebp;
    _unknown_ _t126;
    _unknown_ _t127;
    _unknown_ _t149;
    _unknown_ _t160;
    _unknown_ _t180;
    _unknown_ _t181;
    _unknown_ _t186;
    _unknown_ _t194;

    _v20 = 0;
    asm("fldz ");
    asm("fstp qword [ebp-0x28]");
    memset( &_v212, 0, 18 << 2);
    _v32 = 0;
     *134591680 = 0;
    _v488 =  &_v436;
     *__esp = gf;
    lame_bitrate_stereo_mode_hist();
    _v488 =  &_v140;
     *__esp = gf;
    lame_bitrate_hist();
    _v488 =  &_v60;
     *__esp = gf;
    lame_stereo_mode_hist();
    _v488 =  &_v84;
     *__esp = gf;
    lame_block_type_hist();
    _v28 = 0;
    _v24 = _v28;
    _v16 = 0;
    while(_v16 <= 13) {
        if( *((intOrPtr*)(__ebp + -136 + _v16 * 4)) != 0) {
            _v20 = _v20 + 1;
        }
        _v16 = _v16 + 1;
    }
}

brhist_jump_back()
{// addr = 0x080546F4
    _unknown_ __ebp;

    console_up( *134591680);
     *134591680 = 0;
    return;
}

L0805478A()
{
    return;
}

L08054790(intOrPtr _a4, intOrPtr _a8)
{
    intOrPtr _v12;
    intOrPtr _v16;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t7;
    _unknown_ _t8;

    L0805478A();
     *__esp = 3;
    _v12 = _a8;
    _v16 = _a4;
    __xstat64();
    return;
}

L080547D0(intOrPtr _a4, intOrPtr _a8)
{
    intOrPtr _v12;
    intOrPtr _v16;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t7;
    _unknown_ _t8;

    L0805478A();
     *__esp = 3;
    _v12 = _a8;
    _v16 = _a4;
    __fxstat64();
    return;
}

L08054810()
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __eax =  *134590204;
    if(__eax == 255) {
        return ;
    }
    __ebx = 134590204;
    asm("o16 nop ");
    while(1) {
L2:
        __ebx = __ebx - 4;
         *__eax();
        __eax =  *__ebx;
        if(__eax == 255) {
            break;
        }
    }
    return;
}

L08054848()
{
    _unknown_ _t1;
    _unknown_ _t2;

    _pop(__ebx);
    L0804AB00(__esi);
    _pop(__ecx);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L08054848()
{
    _unknown_ _t1;
    _unknown_ _t2;

    _pop(__ebx);
    @rec 0x0804AB00@L0804AB00@(__esi);
    _pop(__ecx);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

// Statistics:
//     344 Register nodes
//     728 Temporaries nodes
//      10 Casts
//    4853 Statements
//     302 Labels
//     237 Gotos
//     269 Blocks
//   15302 Nodes
//     559 Assembly nodes
//     853 Unknown Types


