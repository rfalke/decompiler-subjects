_init()
{// addr = 0x08048AD0
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t2;

    __esp = __esp - 4;
    L1();
    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 185624 + -4)) != 0) {
        L08048B60();
    }
    L08048E30();
    L08070890();
    _pop(__eax);
    return;
}

L08048ADC()
{
    _unknown_ _t2;

    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 185624 + -4)) != 0) {
        L08048B60();
    }
    L08048E30();
    L08070890();
    _pop(__eax);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

_gfortran_os_error()
{// addr = 0x08048B10
    goto __imp___gfortran_os_error;
}

_gfortran_exit_i4()
{// addr = 0x08048B20
    goto __imp___gfortran_exit_i4;
}

_gfortran_st_open()
{// addr = 0x08048B30
    goto __imp___gfortran_st_open;
}

dgemm_()
{// addr = 0x08048B40
    goto __imp__dgemm_;
}

_gfortran_st_write_done()
{// addr = 0x08048B50
    goto __imp___gfortran_st_write_done;
}

L08048B60()
{
    goto __imp____gmon_start__;
}

_gfortran_date_and_time()
{// addr = 0x08048B70
    goto __imp___gfortran_date_and_time;
}

_gfortran_st_inquire()
{// addr = 0x08048B80
    goto __imp___gfortran_st_inquire;
}

void* memset(void* __s, int __c, int __n)
{// addr = 0x08048B90
    goto __imp__memset;
}

_gfortran_transfer_complex()
{// addr = 0x08048BA0
    goto __imp___gfortran_transfer_complex;
}

__libc_start_main()
{// addr = 0x08048BB0
    goto __imp____libc_start_main;
}

void free(void* __ptr)
{// addr = 0x08048BC0
    goto __imp__free;
}

_gfortran_transfer_array()
{// addr = 0x08048BD0
    goto __imp___gfortran_transfer_array;
}

_gfortran_st_read_done()
{// addr = 0x08048BE0
    goto __imp___gfortran_st_read_done;
}

_gfortran_set_options()
{// addr = 0x08048BF0
    goto __imp___gfortran_set_options;
}

_gfortran_set_args()
{// addr = 0x08048C00
    goto __imp___gfortran_set_args;
}

_gfortran_internal_unpack()
{// addr = 0x08048C10
    goto __imp___gfortran_internal_unpack;
}

_gfortran_concat_string()
{// addr = 0x08048C20
    goto __imp___gfortran_concat_string;
}

_gfortran_runtime_error_at()
{// addr = 0x08048C30
    goto __imp___gfortran_runtime_error_at;
}

acos()
{// addr = 0x08048C40
    goto __imp__acos;
}

_gfortran_transfer_integer()
{// addr = 0x08048C50
    goto __imp___gfortran_transfer_integer;
}

_gfortran_system_clock_4()
{// addr = 0x08048C60
    goto __imp___gfortran_system_clock_4;
}

_gfortran_st_close()
{// addr = 0x08048C70
    goto __imp___gfortran_st_close;
}

_gfortran_runtime_error()
{// addr = 0x08048C80
    goto __imp___gfortran_runtime_error;
}

_gfortran_st_backspace()
{// addr = 0x08048C90
    goto __imp___gfortran_st_backspace;
}

_gfortran_string_trim()
{// addr = 0x08048CA0
    goto __imp___gfortran_string_trim;
}

cabs()
{// addr = 0x08048CB0
    goto __imp__cabs;
}

_gfortran_transfer_character()
{// addr = 0x08048CC0
    goto __imp___gfortran_transfer_character;
}

_gfortran_st_write()
{// addr = 0x08048CD0
    goto __imp___gfortran_st_write;
}

void* malloc(int __size)
{// addr = 0x08048CE0
    goto __imp__malloc;
}

_gfortran_internal_pack()
{// addr = 0x08048CF0
    goto __imp___gfortran_internal_pack;
}

_gfortran_string_index()
{// addr = 0x08048D00
    goto __imp___gfortran_string_index;
}

void* memmove(void* __dest, void* __src, int __n)
{// addr = 0x08048D10
    goto __imp__memmove;
}

_gfortran_st_rewind()
{// addr = 0x08048D20
    goto __imp___gfortran_st_rewind;
}

_gfortran_st_read()
{// addr = 0x08048D30
    goto __imp___gfortran_st_read;
}

dgemv_()
{// addr = 0x08048D40
    goto __imp__dgemv_;
}

_gfortran_transfer_real()
{// addr = 0x08048D50
    goto __imp___gfortran_transfer_real;
}

_gfortran_stop_numeric()
{// addr = 0x08048D60
    goto __imp___gfortran_stop_numeric;
}

_gfortran_compare_string()
{// addr = 0x08048D70
    goto __imp___gfortran_compare_string;
}

_gfortran_pow_i4_i4()
{// addr = 0x08048D80
    goto __imp___gfortran_pow_i4_i4;
}

_gfortran_store_exe_path()
{// addr = 0x08048D90
    goto __imp___gfortran_store_exe_path;
}

L08048DD0(_unknown_ __esi)
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

    if( *134701536 != 0) {
        return ;
    }
    _t5 =  *134701540;
    _t10 = (4 >> 2) - 1;
    if(_t5 >= _t10) {
L4:
         *134701536 = 1;
        return;
    } else {
        while(1) {
L3:
            _t6 = _t5 + 1;
             *134701540 = _t6;
             *((intOrPtr*)(134700788 + _t6 * 4))();
            _t5 =  *134701540;
            if(_t5 >= _t10) {
                break;
            }
        }
        goto L4;
    }
    return;
}

L08048E30()
{
    _unknown_ __ebp;

    __eax =  *134700796;
    if( *134700796 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
     *__esp = 134700796;
     *__eax();
    return;
}

optic()
{// addr = 0x08048E54
    intOrPtr _v32;
    intOrPtr _v36;
    intOrPtr _v40;
    _unknown_ _v44;
    _unknown_ _v48;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ _v60;
    intOrPtr _v64;
    char _v68;
    char _v92;
    _unknown_ _v96;
    _unknown_ _v100;
    _unknown_ _v104;
    _unknown_ _v108;
    _unknown_ _v112;
    char _v116;
    _unknown_ _v120;
    _unknown_ _v124;
    _unknown_ _v128;
    _unknown_ _v132;
    _unknown_ _v136;
    intOrPtr _v140;
    _unknown_ _v144;
    _unknown_ _v148;
    _unknown_ _v152;
    _unknown_ _v156;
    _unknown_ _v160;
    intOrPtr _v164;
    _unknown_ _v172;
    _unknown_ _v180;
    _unknown_ _v184;
    _unknown_ _v188;
    _unknown_ _v192;
    _unknown_ _v196;
    _unknown_ _v200;
    intOrPtr _v204;
    _unknown_ _v208;
    _unknown_ _v212;
    _unknown_ _v216;
    _unknown_ _v220;
    _unknown_ _v224;
    intOrPtr _v228;
    _unknown_ _v232;
    _unknown_ _v236;
    _unknown_ _v240;
    _unknown_ _v244;
    _unknown_ _v248;
    intOrPtr _v252;
    _unknown_ _v256;
    _unknown_ _v260;
    _unknown_ _v264;
    _unknown_ _v268;
    _unknown_ _v272;
    intOrPtr _v276;
    _unknown_ _v280;
    _unknown_ _v284;
    _unknown_ _v288;
    _unknown_ _v292;
    _unknown_ _v296;
    intOrPtr _v300;
    _unknown_ _v304;
    _unknown_ _v308;
    _unknown_ _v312;
    _unknown_ _v316;
    _unknown_ _v320;
    intOrPtr _v324;
    _unknown_ _v332;
    char _v336;
    char _v468;
    char _v600;
    char _v732;
    char _v864;
    char _v996;
    char _v1128;
    char _v1384;
    _unknown_ _v1388;
    _unknown_ _v1460;
    _unknown_ _v1532;
    _unknown_ _v1604;
    _unknown_ _v1840;
    _unknown_ _v1848;
    _unknown_ _v1852;
    _unknown_ _v1856;
    _unknown_ _v1860;
    _unknown_ _v1864;
    _unknown_ _v1868;
    _unknown_ _v1872;
    _unknown_ _v1876;
    _unknown_ _v1884;
    _unknown_ _v1888;
    _unknown_ _v2092;
    _unknown_ _v2096;
    _unknown_ _v2100;
    _unknown_ _v2104;
    _unknown_ _v2108;
    _unknown_ _v2112;
    _unknown_ _v2116;
    _unknown_ _v2120;
    _unknown_ _v2124;
    _unknown_ _v2132;
    _unknown_ _v2136;
    _unknown_ _v2316;
    _unknown_ _v2324;
    _unknown_ _v2328;
    intOrPtr _v2400;
    intOrPtr _v2404;
    _unknown_ _v2408;
    intOrPtr _v2412;
    intOrPtr _v2416;
    intOrPtr _v2428;
    intOrPtr _v2432;
    intOrPtr _v2444;
    char _v2452;
    intOrPtr _v2456;
    char _v2460;
    _unknown_ _v2464;
    _unknown_ _v2468;
    _unknown_ _v2472;
    _unknown_ _v2476;
    _unknown_ _v2480;
    _unknown_ _v2484;
    _unknown_ _v2488;
    _unknown_ _v2492;
    _unknown_ _v2496;
    _unknown_ _v2500;
    intOrPtr _v2504;
    _unknown_ _v2508;
    _unknown_ _v2512;
    _unknown_ _v2548;
    char _v2552;
    _unknown_ _v2564;
    _unknown_ _v2568;
    char _v2572;
    _unknown_ _v2576;
    _unknown_ _v2580;
    intOrPtr _v2584;
    _unknown_ _v2588;
    _unknown_ _v2592;
    _unknown_ _v2596;
    _unknown_ _v2600;
    _unknown_ _v2604;
    intOrPtr _v2608;
    _unknown_ _v2612;
    intOrPtr _v2616;
    _unknown_ _v2620;
    _unknown_ _v2624;
    _unknown_ _v2628;
    _unknown_ _v2736;
    _unknown_ _v2740;
    intOrPtr _v2744;
    _unknown_ _v2748;
    _unknown_ _v2752;
    _unknown_ _v2756;
    _unknown_ _v2760;
    _unknown_ _v2764;
    _unknown_ _v2768;
    intOrPtr _v2772;
    _unknown_ _v2776;
    _unknown_ _v2780;
    _unknown_ _v2784;
    _unknown_ _v2788;
    _unknown_ _v2792;
    _unknown_ _v2796;
    _unknown_ _v2800;
    _unknown_ _v2804;
    _unknown_ _v2808;
    _unknown_ _v2812;
    _unknown_ _v2816;
    _unknown_ _v2820;
    _unknown_ _v2824;
    _unknown_ _v2828;
    _unknown_ _v2832;
    _unknown_ _v2836;
    _unknown_ _v2840;
    _unknown_ _v2844;
    _unknown_ _v2848;
    _unknown_ _v2852;
    intOrPtr _v2856;
    char _v2860;
    _unknown_ _v2932;
    _unknown_ _v3004;
    _unknown_ _v3008;
    _unknown_ _v3012;
    _unknown_ _v3016;
    _unknown_ _v3028;
    char _v3032;
    _unknown_ _v3036;
    _unknown_ _v3040;
    _unknown_ _v3044;
    _unknown_ _v3048;
    _unknown_ _v3052;
    _unknown_ _v3056;
    _unknown_ _v3060;
    _unknown_ _v3064;
    _unknown_ _v3068;
    _unknown_ _v3072;
    _unknown_ _v3076;
    intOrPtr _v3080;
    _unknown_ _v3084;
    _unknown_ _v3088;
    _unknown_ _v3092;
    _unknown_ _v3096;
    _unknown_ _v3100;
    _unknown_ _v3104;
    _unknown_ _v3108;
    _unknown_ _v3112;
    _unknown_ _v3116;
    _unknown_ _v3120;
    _unknown_ _v3124;
    intOrPtr _v3128;
    _unknown_ _v3132;
    _unknown_ _v3136;
    _unknown_ _v3140;
    _unknown_ _v3144;
    _unknown_ _v3148;
    _unknown_ _v3152;
    _unknown_ _v3156;
    _unknown_ _v3160;
    _unknown_ _v3164;
    _unknown_ _v3168;
    _unknown_ _v3172;
    intOrPtr _v3176;
    _unknown_ _v3180;
    _unknown_ _v3436;
    _unknown_ _v3444;
    _unknown_ _v3452;
    _unknown_ _v3460;
    char _v3660;
    char _v3860;
    char _v4060;
    char _v4260;
    _unknown_ _v4264;
    _unknown_ _v4268;
    _unknown_ _v4272;
    _unknown_ _v4276;
    _unknown_ _v4280;
    intOrPtr _v4284;
    char _v4288;
    void* _v4292;
    intOrPtr _v4308;
    char* _v4312;
    intOrPtr _v4316;
    char _v4320;
    _unknown_ _v4324;
    _unknown_ _v4328;
    _unknown_ _v4332;
    _unknown_ _v4336;
    _unknown_ _v4340;
    _unknown_ _v4344;
    _unknown_ _v4348;
    _unknown_ _v4352;
    _unknown_ _v4356;
    _unknown_ _v4360;
    _unknown_ _v4364;
    _unknown_ _v4368;
    _unknown_ _v4372;
    _unknown_ _v4376;
    _unknown_ _v4380;
    _unknown_ _v4384;
    _unknown_ _v4388;
    _unknown_ _v4392;
    _unknown_ _v4404;
    _unknown_ _v4408;
    _unknown_ _v4412;
    _unknown_ _v4416;
    _unknown_ _v4420;
    _unknown_ _v4424;
    _unknown_ _v4428;
    _unknown_ _v4432;
    _unknown_ _v4436;
    _unknown_ _v4440;
    _unknown_ _v4444;
    _unknown_ _v4448;
    _unknown_ _v4452;
    _unknown_ _v4456;
    _unknown_ _v4460;
    _unknown_ _v4464;
    _unknown_ _v4468;
    _unknown_ _v4472;
    _unknown_ _v4476;
    _unknown_ _v4480;
    _unknown_ _v4484;
    _unknown_ _v4488;
    _unknown_ _v4492;
    _unknown_ _v4496;
    _unknown_ _v4500;
    _unknown_ _v4504;
    _unknown_ _v4508;
    _unknown_ _v4512;
    _unknown_ _v4516;
    _unknown_ _v4520;
    _unknown_ _v4524;
    _unknown_ _v4528;
    _unknown_ _v4532;
    _unknown_ _v4536;
    _unknown_ _v4540;
    _unknown_ _v4544;
    _unknown_ _v4548;
    _unknown_ _v4552;
    _unknown_ _v4556;
    _unknown_ _v4560;
    _unknown_ _v4564;
    _unknown_ _v4568;
    _unknown_ _v4572;
    _unknown_ _v4576;
    _unknown_ _v4580;
    _unknown_ _v4584;
    _unknown_ _v4588;
    _unknown_ _v4592;
    intOrPtr _v4872;
    char* _v4876;
    intOrPtr _v4880;
    char* _v4884;
    char* _v4896;
    intOrPtr _v4900;
    _unknown_ _v4904;
    _unknown_ _v4908;
    _unknown_ _v4912;
    _unknown_ _v4916;
    intOrPtr _v4920;
    char* _v4924;
    intOrPtr _v4928;
    char _v4932;
    _unknown_ _v4944;
    _unknown_ _v4946;
    _unknown_ _v4948;
    _unknown_ _v4952;
    _unknown_ _v4956;
    _unknown_ _v4960;
    _unknown_ _v4964;
    _unknown_ _v4968;
    _unknown_ _v4972;
    _unknown_ _v4976;
    _unknown_ _v4980;
    _unknown_ _v4984;
    _unknown_ _v4988;
    _unknown_ _v4992;
    _unknown_ _v4996;
    _unknown_ _v5000;
    _unknown_ _v5004;
    _unknown_ _v5008;
    _unknown_ _v5012;
    _unknown_ _v5016;
    _unknown_ _v5020;
    _unknown_ _v5024;
    _unknown_ _v5028;
    _unknown_ _v5032;
    _unknown_ _v5036;
    _unknown_ _v5040;
    _unknown_ _v5044;
    _unknown_ _v5048;
    _unknown_ _v5052;
    _unknown_ _v5056;
    _unknown_ _v5060;
    _unknown_ _v5064;
    _unknown_ _v5068;
    _unknown_ _v5072;
    _unknown_ _v5076;
    _unknown_ _v5080;
    _unknown_ _v5084;
    _unknown_ _v5088;
    _unknown_ _v5092;
    _unknown_ _v5096;
    _unknown_ _v5100;
    _unknown_ _v5104;
    _unknown_ _v5108;
    _unknown_ _v5112;
    _unknown_ _v5116;
    _unknown_ _v5120;
    _unknown_ _v5124;
    _unknown_ _v5128;
    _unknown_ _v5132;
    _unknown_ _v5136;
    _unknown_ _v5140;
    _unknown_ _v5144;
    _unknown_ _v5148;
    _unknown_ _v5152;
    _unknown_ _v5156;
    _unknown_ _v5160;
    _unknown_ _v5164;
    _unknown_ _v5168;
    _unknown_ _v5172;
    _unknown_ _v5176;
    _unknown_ _v5180;
    _unknown_ _v5184;
    _unknown_ _v5188;
    _unknown_ _v5192;
    _unknown_ _v5196;
    _unknown_ _v5200;
    _unknown_ _v5204;
    _unknown_ _v5208;
    _unknown_ _v5212;
    _unknown_ _v5216;
    intOrPtr _v5220;
    _unknown_ _v5224;
    _unknown_ _v5228;
    _unknown_ _v5232;
    _unknown_ _v5236;
    _unknown_ _v5240;
    _unknown_ _v5248;
    _unknown_ _v5252;
    _unknown_ _v5256;
    _unknown_ _v5264;
    _unknown_ _v5268;
    _unknown_ _v5272;
    _unknown_ _v5276;
    _unknown_ _v5280;
    _unknown_ _v5284;
    _unknown_ _v5288;
    _unknown_ _v5292;
    _unknown_ _v5296;
    _unknown_ _v5300;
    _unknown_ _v5304;
    intOrPtr _v5308;
    _unknown_ _v5312;
    _unknown_ _v5316;
    _unknown_ _v5320;
    intOrPtr _v5324;
    int _v5328;
    intOrPtr _v5332;
    void* _v5336;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t2317;
    _unknown_ _t2417;
    intOrPtr _t2418;
    _unknown_ _t2422;
    _unknown_ _t2424;
    _unknown_ _t2426;
    _unknown_ _t2427;
    _unknown_ _t2434;
    _unknown_ _t2437;
    _unknown_ _t2439;
    _unknown_ _t2440;
    _unknown_ _t2443;
    _unknown_ _t2446;
    _unknown_ _t2448;
    _unknown_ _t2451;
    _unknown_ _t2506;
    _unknown_ _t2509;
    _unknown_ _t2511;
    _unknown_ _t2512;
    _unknown_ _t2513;
    _unknown_ _t2514;
    _unknown_ _t2515;
    _unknown_ _t2516;
    _unknown_ _t2518;
    _unknown_ _t2530;
    _unknown_ _t2533;
    _unknown_ _t2541;
    _unknown_ _t2543;
    _unknown_ _t2544;
    _unknown_ _t2546;
    _unknown_ _t2547;
    _unknown_ _t2548;
    _unknown_ _t2549;
    _unknown_ _t2550;
    _unknown_ _t2551;
    _unknown_ _t2560;
    _unknown_ _t2582;
    _unknown_ _t2584;
    _unknown_ _t2592;
    _unknown_ _t2594;
    _unknown_ _t2601;
    _unknown_ _t2606;
    _unknown_ _t2608;
    _unknown_ _t2615;
    _unknown_ _t2623;
    _unknown_ _t2625;
    _unknown_ _t2635;
    _unknown_ _t2641;
    _unknown_ _t2642;
    _unknown_ _t2645;
    _unknown_ _t2646;
    _unknown_ _t2664;
    _unknown_ _t2671;
    _unknown_ _t2674;
    _unknown_ _t2677;
    _unknown_ _t2680;
    _unknown_ _t2683;
    _unknown_ _t2686;
    _unknown_ _t2689;
    _unknown_ _t2692;
    _unknown_ _t2695;
    _unknown_ _t2698;
    _unknown_ _t2701;
    _unknown_ _t2704;
    _unknown_ _t2707;
    _unknown_ _t2710;
    _unknown_ _t2731;
    _unknown_ _t2733;
    _unknown_ _t2735;
    _unknown_ _t2737;
    _unknown_ _t2739;
    _unknown_ _t2741;
    _unknown_ _t2743;
    _unknown_ _t2745;
    _unknown_ _t2747;
    _unknown_ _t2749;
    _unknown_ _t2751;
    _unknown_ _t2753;
    _unknown_ _t2755;
    _unknown_ _t2757;
    _unknown_ _t2759;
    _unknown_ _t2761;
    _unknown_ _t2775;
    _unknown_ _t2792;
    _unknown_ _t2794;
    _unknown_ _t2802;
    _unknown_ _t2804;
    _unknown_ _t2811;
    _unknown_ _t2816;
    _unknown_ _t2818;
    _unknown_ _t2825;
    _unknown_ _t2833;
    _unknown_ _t2835;
    _unknown_ _t2845;
    _unknown_ _t2852;
    _unknown_ _t2854;
    _unknown_ _t2865;
    _unknown_ _t2875;
    _unknown_ _t2877;
    _unknown_ _t2891;
    _unknown_ _t2899;
    _unknown_ _t2900;
    _unknown_ _t2903;
    _unknown_ _t2904;
    _unknown_ _t2924;
    _unknown_ _t2926;
    _unknown_ _t2928;
    _unknown_ _t2929;
    _unknown_ _t2930;
    _unknown_ _t2931;
    _unknown_ _t2932;
    _unknown_ _t2933;
    _unknown_ _t2934;
    _unknown_ _t2935;
    _unknown_ _t2936;
    _unknown_ _t2937;
    _unknown_ _t2938;
    _unknown_ _t2939;
    _unknown_ _t2940;
    _unknown_ _t2941;
    _unknown_ _t2942;
    _unknown_ _t2944;
    _unknown_ _t2945;
    _unknown_ _t2946;
    _unknown_ _t2947;
    _unknown_ _t2948;
    _unknown_ _t2949;
    _unknown_ _t2950;
    _unknown_ _t2951;
    _unknown_ _t2952;
    _unknown_ _t2953;
    _unknown_ _t2955;
    _unknown_ _t2967;
    _unknown_ _t2974;
    _unknown_ _t2977;
    _unknown_ _t2980;
    _unknown_ _t2982;
    _unknown_ _t2984;
    _unknown_ _t2985;
    _unknown_ _t2987;
    _unknown_ _t2989;
    _unknown_ _t2994;
    _unknown_ _t3055;
    _unknown_ _t3058;
    _unknown_ _t3061;
    _unknown_ _t3063;
    _unknown_ _t3064;
    _unknown_ _t3067;
    _unknown_ _t3082;
    _unknown_ _t3083;
    _unknown_ _t3086;
    _unknown_ _t3095;
    _unknown_ _t3098;
    _unknown_ _t3136;
    _unknown_ _t3142;
    _unknown_ _t3143;
    _unknown_ _t3148;
    _unknown_ _t3149;
    _unknown_ _t3154;
    _unknown_ _t3155;
    _unknown_ _t3160;
    _unknown_ _t3161;
    _unknown_ _t3163;
    _unknown_ _t3166;
    _unknown_ _t3176;
    _unknown_ _t3181;
    _unknown_ _t3184;
    _unknown_ _t3194;
    _unknown_ _t3199;
    _unknown_ _t3202;
    _unknown_ _t3212;
    _unknown_ _t3217;
    _unknown_ _t3220;
    _unknown_ _t3232;
    _unknown_ _t3235;
    _unknown_ _t3238;
    _unknown_ _t3240;
    _unknown_ _t3241;
    _unknown_ _t3247;
    _unknown_ _t3263;
    _unknown_ _t3264;
    _unknown_ _t3266;
    _unknown_ _t3271;
    _unknown_ _t3274;
    _unknown_ _t3289;
    _unknown_ _t3291;
    _unknown_ _t3294;
    _unknown_ _t3309;
    _unknown_ _t3314;
    _unknown_ _t3317;
    _unknown_ _t3318;
    _unknown_ _t3319;
    _unknown_ _t3320;
    _unknown_ _t3338;
    _unknown_ _t3345;
    _unknown_ _t3347;
    _unknown_ _t3350;
    _unknown_ _t3359;
    _unknown_ _t3362;
    _unknown_ _t3364;
    _unknown_ _t3370;
    _unknown_ _t3372;
    _unknown_ _t3375;
    _unknown_ _t3376;
    _unknown_ _t3377;
    _unknown_ _t3378;
    _unknown_ _t3380;
    _unknown_ _t3383;
    _unknown_ _t3384;
    _unknown_ _t3386;
    _unknown_ _t3393;
    _unknown_ _t3398;
    _unknown_ _t3400;
    _unknown_ _t3402;
    _unknown_ _t3413;
    _unknown_ _t3414;
    _unknown_ _t3419;
    _unknown_ _t3447;
    _unknown_ _t3450;
    _unknown_ _t3462;
    _unknown_ _t3463;
    _unknown_ _t3468;
    _unknown_ _t3469;
    _unknown_ _t3474;
    _unknown_ _t3475;
    _unknown_ _t3480;
    _unknown_ _t3481;
    _unknown_ _t3496;
    _unknown_ _t3498;
    _unknown_ _t3499;
    _unknown_ _t3501;
    _unknown_ _t3503;
    _unknown_ _t3507;
    _unknown_ _t3521;
    _unknown_ _t3522;
    _unknown_ _t3524;
    _unknown_ _t3525;
    _unknown_ _t3530;
    _unknown_ _t3531;
    _unknown_ _t3533;
    _unknown_ _t3536;
    _unknown_ _t3537;
    _unknown_ _t3539;
    _unknown_ _t3543;
    _unknown_ _t3545;
    _unknown_ _t3548;
    _unknown_ _t3551;
    _unknown_ _t3552;
    _unknown_ _t3561;
    _unknown_ _t3562;
    _unknown_ _t3569;
    _unknown_ _t3576;
    _unknown_ _t3580;
    _unknown_ _t3584;
    _unknown_ _t3590;
    _unknown_ _t3597;
    _unknown_ _t3600;
    _unknown_ _t3607;
    _unknown_ _t3611;
    _unknown_ _t3615;
    _unknown_ _t3621;
    _unknown_ _t3628;
    _unknown_ _t3636;
    _unknown_ _t3646;
    _unknown_ _t3652;
    _unknown_ _t3654;
    _unknown_ _t3656;
    _unknown_ _t3657;
    _unknown_ _t3659;
    _unknown_ _t3664;
    _unknown_ _t3665;
    _unknown_ _t3667;
    _unknown_ _t3668;
    _unknown_ _t3669;
    _unknown_ _t3670;
    _unknown_ _t3671;
    _unknown_ _t3672;
    _unknown_ _t3673;
    _unknown_ _t3674;
    _unknown_ _t3682;
    _unknown_ _t3683;
    _unknown_ _t3697;
    _unknown_ _t3706;
    _unknown_ _t3715;
    _unknown_ _t3724;
    _unknown_ _t3727;
    _unknown_ _t3728;
    _unknown_ _t3735;
    _unknown_ _t3736;
    _unknown_ _t3737;
    _unknown_ _t3744;
    _unknown_ _t3745;
    _unknown_ _t3746;
    _unknown_ _t3753;
    _unknown_ _t3754;
    _unknown_ _t3755;
    _unknown_ _t3760;
    _unknown_ _t3761;
    _unknown_ _t3762;
    _unknown_ _t3763;
    _unknown_ _t3764;
    _unknown_ _t3765;
    _unknown_ _t3766;
    _unknown_ _t3770;
    _unknown_ _t3771;
    _unknown_ _t3796;
    _unknown_ _t3797;
    _unknown_ _t3800;
    _unknown_ _t3801;
    _unknown_ _t3803;
    _unknown_ _t3804;
    _unknown_ _t3806;
    _unknown_ _t3807;
    _unknown_ _t3808;
    intOrPtr _t3816;
    _unknown_ _t3817;
    _unknown_ _t3818;
    _unknown_ _t3819;
    _unknown_ _t3821;
    _unknown_ _t3825;
    _unknown_ _t3827;
    _unknown_ _t3833;
    _unknown_ _t3834;
    _unknown_ _t3835;
    _unknown_ _t3836;
    _unknown_ _t3838;
    _unknown_ _t3841;
    _unknown_ _t3843;
    _unknown_ _t3854;
    _unknown_ _t3855;
    _unknown_ _t3856;
    _unknown_ _t3857;
    _unknown_ _t3858;
    _unknown_ _t3861;
    _unknown_ _t3862;
    _unknown_ _t3863;
    _unknown_ _t3876;
    _unknown_ _t3878;
    _unknown_ _t3880;
    _unknown_ _t3882;
    _unknown_ _t3884;
    _unknown_ _t3886;
    _unknown_ _t3888;
    _unknown_ _t3893;
    _unknown_ _t3896;
    _unknown_ _t3901;

    _v116 = 0;
    _v140 = 0;
    _v164 = 0;
    _v204 = 0;
    _v228 = 0;
    _v252 = 0;
    _v276 = 0;
    _v300 = 0;
    _v324 = 0;
    _v2504 = 0;
    _v2608 = 0;
    _v2772 = 0;
    _v2856 = 0;
    _v3080 = 0;
    _v3128 = 0;
    _v3176 = 0;
    _v4284 = 0;
    _v5336 = "D";
     *__esp = 8;
    _gfortran_set_options();
    memmove( &_v92, 134678784, 24);
    _v5324 = 6;
    _v5328 = 24;
    L0806E304( &_v92, "5.3.4 optic.F90", 134678808);
    _v4924 = "optic.F90";
    _v4920 = 139;
    _v4884 = "(a)";
    _v4880 = 3;
    _v4932 = 4096;
    _v4928 = 6;
     *__esp =  &_v4932;
    _gfortran_st_write();
    _v5332 = 43;
    _v5336 = " Please, give the name of the data file ...";
     *__esp =  &_v4932;
    _gfortran_transfer_character();
     *__esp =  &_v4932;
    _gfortran_st_write_done();
    _v4924 = "optic.F90";
    _v4920 = 140;
    _v4884 = "(a)";
    _v4880 = 3;
    _v4932 = 4096;
    _v4928 = 5;
     *__esp =  &_v4932;
    _gfortran_st_read();
    _v5332 = 132;
    _v5336 =  &_v468;
     *__esp =  &_v4932;
    _gfortran_transfer_character();
     *__esp =  &_v4932;
    _gfortran_st_read_done();
    _v4924 = "optic.F90";
    _v4920 = 141;
    _v4884 = "(a)";
    _v4880 = 3;
    _v4932 = 4096;
    _v4928 = 6;
     *__esp =  &_v4932;
    _gfortran_st_write();
    _v5332 = 31;
    _v5336 = " The name of the data file is :";
     *__esp =  &_v4932;
    _gfortran_transfer_character();
    _v5332 = 132;
    _v5336 =  &_v468;
     *__esp =  &_v4932;
    _gfortran_transfer_character();
     *__esp =  &_v4932;
    _gfortran_st_write_done();
    _v4924 = "optic.F90";
    _v4920 = 142;
    _v4884 = "(a)";
    _v4880 = 3;
    _v4932 = 4096;
    _v4928 = 6;
     *__esp =  &_v4932;
    _gfortran_st_write();
    _v5332 = 45;
    _v5336 = " Please, give the name of the output file ...";
     *__esp =  &_v4932;
    _gfortran_transfer_character();
     *__esp =  &_v4932;
    _gfortran_st_write_done();
    _v4924 = "optic.F90";
    _v4920 = 143;
    _v4884 = "(a)";
    _v4880 = 3;
    _v4932 = 4096;
    _v4928 = 5;
     *__esp =  &_v4932;
    _gfortran_st_read();
    _v5332 = 132;
    _v5336 =  &_v1128;
     *__esp =  &_v4932;
    _gfortran_transfer_character();
     *__esp =  &_v4932;
    _gfortran_st_read_done();
    _v4924 = "optic.F90";
    _v4920 = 144;
    _v4884 = "(a)";
    _v4880 = 3;
    _v4932 = 4096;
    _v4928 = 6;
     *__esp =  &_v4932;
    _gfortran_st_write();
    _v5332 = 33;
    _v5336 = " The name of the output file is :";
     *__esp =  &_v4932;
    _gfortran_transfer_character();
    _v5332 = 132;
    _v5336 =  &_v1128;
     *__esp =  &_v4932;
    _gfortran_transfer_character();
     *__esp =  &_v4932;
    _gfortran_st_write_done();
    _v4924 = "optic.F90";
    _v4920 = 145;
    _v4884 = "(a)";
    _v4880 = 3;
    _v4932 = 4096;
    _v4928 = 6;
     *__esp =  &_v4932;
    _gfortran_st_write();
    _v5332 = 76;
    _v5336 = " Please, give the root name for the (non)linear optical data output file ... The root name of the output files is :formatted\n";
     *__esp =  &_v4932;
    _gfortran_transfer_character();
     *__esp =  &_v4932;
    _gfortran_st_write_done();
    _v4924 = "optic.F90";
    _v4920 = 146;
    _v4884 = "(a)";
    _v4880 = 3;
    _v4932 = 4096;
    _v4928 = 5;
     *__esp =  &_v4932;
    _gfortran_st_read();
    _v5332 = 256;
    _v5336 =  &_v1384;
     *__esp =  &_v4932;
    _gfortran_transfer_character();
     *__esp =  &_v4932;
    _gfortran_st_read_done();
    _v4924 = "optic.F90";
    _v4920 = 147;
    _v4884 = "(a)";
    _v4880 = 3;
    _v4932 = 4096;
    _v4928 = 6;
     *__esp =  &_v4932;
    _gfortran_st_write();
    _v5332 = 39;
    _v5336 = " The root name of the output files is :formatted\n";
     *__esp =  &_v4932;
    _gfortran_transfer_character();
    _v5328 =  &_v1384;
    _v5332 = 256;
    _v5336 =  &_v4292;
     *__esp =  &_v4288;
    _gfortran_string_trim();
    _v5332 = _v4288;
    _v5336 = _v4292;
     *__esp =  &_v4932;
    _gfortran_transfer_character();
    if(_v4288 > 0) {
        _t3374 = _v4292;
        if(_v4292 != 0) {
            free(_t3374);
        }
    }
     *__esp =  &_v4932;
    _gfortran_st_write_done();
    _v4924 = "optic.F90";
    _v4920 = 150;
    _v4896 =  &_v468;
    _v4900 = 132;
    _v4876 = "formatted\n";
    _v4872 = 9;
    _v4932 = 2304;
    _v4928 = 15;
     *__esp =  &_v4932;
    _gfortran_st_open();
    _v4312 = "optic.F90";
    _v4308 = 151;
    _v4320 = 0;
    _v4316 = 15;
     *__esp =  &_v4320;
    _gfortran_st_rewind();
    _v4924 = "optic.F90";
    _v4920 = 152;
    _v4884 = "(a)";
    _v4880 = 3;
    _v4932 = 4096;
    _v4928 = 15;
     *__esp =  &_v4932;
    _gfortran_st_read();
    _v5332 = 132;
    _v5336 =  &_v732;
     *__esp =  &_v4932;
    _gfortran_transfer_character();
     *__esp =  &_v4932;
    _gfortran_st_read_done();
    _v4924 = "optic.F90";
    _v4920 = 153;
    _v4884 = "(a)";
    _v4880 = 3;
    _v4932 = 4096;
    _v4928 = 15;
     *__esp =  &_v4932;
    _gfortran_st_read();
    _v5332 = 132;
    _v5336 =  &_v864;
     *__esp =  &_v4932;
    _gfortran_transfer_character();
     *__esp =  &_v4932;
    _gfortran_st_read_done();
    _v4924 = "optic.F90";
    _v4920 = 154;
    _v4884 = "(a)";
    _v4880 = 3;
    _v4932 = 4096;
    _v4928 = 15;
     *__esp =  &_v4932;
    _gfortran_st_read();
    _v5332 = 132;
    _v5336 =  &_v996;
     *__esp =  &_v4932;
    _gfortran_transfer_character();
     *__esp =  &_v4932;
    _gfortran_st_read_done();
    _v4924 = "optic.F90";
    _v4920 = 155;
    _v4884 = "(a)";
    _v4880 = 3;
    _v4932 = 4096;
    _v4928 = 15;
     *__esp =  &_v4932;
    _gfortran_st_read();
    _v5332 = 132;
    _v5336 =  &_v600;
     *__esp =  &_v4932;
    _gfortran_transfer_character();
     *__esp =  &_v4932;
    _gfortran_st_read_done();
    _v68 = 0;
    _v3032 = 0;
    _v2552 = 0;
    _v2572 = 0;
    _v5308 = 132;
    L0806AF3C( &_v68,  &_v3032,  &_v600,  &_v2460,  &_v3660,  &_v2552,  &_v2572, 134679116);
    _v5308 = 132;
    L0806AF3C( &_v68,  &_v3032,  &_v732,  &_v2460,  &_v3860,  &_v2552,  &_v2572, 134679120);
    _v5308 = 132;
    L0806AF3C( &_v68,  &_v3032,  &_v864,  &_v2460,  &_v4060,  &_v2552,  &_v2572, 134679124);
    _v5308 = 132;
    L0806AF3C( &_v68,  &_v3032,  &_v996,  &_v2460,  &_v4260,  &_v2552,  &_v2572, 134679128);
    _v2860 = 1;
    L0805CAA0( &_v336,  &_v2452,  &_v2860,  &_v3660);
    _v2456 = _v2444;
    _v64 = _v2452;
    asm("fld qword [ebp+0xfffff80c]");
    asm("fstp qword [ebp+0xffffff50]");
    _v2584 = _v2432;
    _v2616 = _v2428;
    _v40 = _v2416;
    _v2744 = _v2412;
    _v36 = _v2404;
    _v32 = _v2400;
    _t2418 = 1;
    while(_t2418 <= 3) {
        _v5220 = _t2418 + _t2418 + _t2418 - 4;
        _t3816 = 1;
        while(_t3816 <= 3) {
            asm("fld qword [esi+ebx*8]");
            asm("fstp qword [ebp+ecx*8+0xfffff448]");
            _t3816 = _t3816 + 1;
        }
    }
}

L0804DDD8(signed int* _a4, _unknown_ _a8, signed int* _a12, _unknown_ _a16, signed int* _a20, _unknown_ _a24, signed int* _a28, _unknown_ _a32, _unknown_ _a36, _unknown_ _a40, _unknown_ _a44, intOrPtr* _a48, intOrPtr* _a52, signed int* _a56, signed int _a60, signed int _a64, signed int _a68, void* _a72)
{
    signed int _v32;
    signed int _v36;
    signed int _v40;
    signed int _v44;
    signed int _v48;
    signed int _v52;
    signed int _v56;
    signed int _v60;
    signed int _v64;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ _v76;
    _unknown_ _v80;
    _unknown_ _v84;
    _unknown_ _v88;
    _unknown_ _v92;
    _unknown_ _v96;
    _unknown_ _v100;
    signed int _v112;
    signed int _v116;
    signed int _v120;
    signed int _v216;
    signed int _v220;
    signed int _v224;
    intOrPtr _v228;
    char* _v232;
    signed int _v236;
    _unknown_ _v244;
    signed int _v248;
    signed int _v252;
    signed int _v256;
    intOrPtr _v260;
    char* _v264;
    signed int _v268;
    void _v524;
    _unknown_ _v540;
    _unknown_ _v544;
    signed int _v548;
    signed int _v552;
    signed int _v556;
    signed int _v560;
    signed int _v564;
    signed int _v568;
    intOrPtr _v572;
    intOrPtr _v576;
    signed int _v580;
    signed int _v584;
    signed int _v588;
    signed int _v592;
    signed int _v596;
    signed int _v600;
    signed int _v604;
    intOrPtr _v608;
    intOrPtr _v612;
    void* _v616;
    int _v640;
    void* _v644;
    _unknown_ _v652;
    _unknown_ _v660;
    _unknown_ _v668;
    _unknown_ _v676;
    _unknown_ _v684;
    _unknown_ _v692;
    _unknown_ _v700;
    _unknown_ _v708;
    _unknown_ _v716;
    _unknown_ _v972;
    _unknown_ _v976;
    _unknown_ _v996;
    _unknown_ _v1000;
    _unknown_ _v1004;
    _unknown_ _v1008;
    _unknown_ _v1020;
    _unknown_ _v1024;
    intOrPtr _v1044;
    char* _v1048;
    intOrPtr _v1052;
    char _v1056;
    signed int _v1072;
    signed int _v1076;
    signed int _v1080;
    signed int _v1084;
    intOrPtr _v1088;
    signed int _v1092;
    signed int _v1096;
    signed int _v1100;
    signed int _v1104;
    _unknown_ _v1108;
    _unknown_ _v1112;
    _unknown_ _v1116;
    _unknown_ _v1120;
    _unknown_ _v1124;
    _unknown_ _v1128;
    _unknown_ _v1132;
    _unknown_ _v1136;
    _unknown_ _v1140;
    _unknown_ _v1144;
    _unknown_ _v1148;
    _unknown_ _v1152;
    void* _v1156;
    intOrPtr _v1160;
    signed int _v1164;
    signed int _v1168;
    intOrPtr _v1172;
    intOrPtr _v1176;
    intOrPtr _v1180;
    signed int _v1200;
    signed int _v1204;
    signed int _v1208;
    signed int _v1212;
    signed int _v1216;
    signed int _v1220;
    signed int _v1224;
    signed int _v1228;
    signed int _v1232;
    signed int _v1236;
    signed int _v1240;
    signed int _v1244;
    signed int _v1248;
    signed int _v1252;
    signed int _v1256;
    signed int _v1260;
    intOrPtr _v1264;
    intOrPtr _v1280;
    char* _v1304;
    intOrPtr _v1308;
    void* _v1312;
    int _v1316;
    void* _v1320;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t1218;
    _unknown_ _t1222;
    signed int _t1225;
    signed int _t1229;
    signed int _t1233;
    _unknown_ _t1237;
    signed int _t1242;
    signed int _t1246;
    signed int _t1250;
    _unknown_ _t1253;
    signed int _t1257;
    _unknown_ _t1261;
    signed int _t1268;
    _unknown_ _t1272;
    signed int _t1275;
    signed int _t1279;
    signed int _t1283;
    _unknown_ _t1287;
    void* _t1326;
    void* _t1328;
    _unknown_ _t1329;
    _unknown_ _t1330;
    _unknown_ _t1337;
    void* _t1339;
    _unknown_ _t1345;
    _unknown_ _t1346;
    _unknown_ _t1348;
    _unknown_ _t1425;
    _unknown_ _t1446;
    _unknown_ _t1449;
    _unknown_ _t1452;
    _unknown_ _t1455;
    _unknown_ _t1462;
    _unknown_ _t1464;
    _unknown_ _t1466;
    _unknown_ _t1469;
    _unknown_ _t1473;
    _unknown_ _t1476;
    _unknown_ _t1480;
    _unknown_ _t1484;
    _unknown_ _t1487;
    _unknown_ _t1491;
    _unknown_ _t1492;
    _unknown_ _t1496;
    _unknown_ _t1499;
    _unknown_ _t1514;
    _unknown_ _t1517;
    _unknown_ _t1519;
    _unknown_ _t1520;
    _unknown_ _t1522;
    _unknown_ _t1526;
    _unknown_ _t1528;
    _unknown_ _t1529;
    _unknown_ _t1533;
    _unknown_ _t1534;
    _unknown_ _t1538;
    _unknown_ _t1544;
    _unknown_ _t1546;
    _unknown_ _t1547;
    _unknown_ _t1548;
    _unknown_ _t1550;
    _unknown_ _t1552;
    _unknown_ _t1553;
    _unknown_ _t1555;
    _unknown_ _t1557;
    _unknown_ _t1568;
    _unknown_ _t1569;
    _unknown_ _t1571;
    _unknown_ _t1574;
    _unknown_ _t1575;
    _unknown_ _t1578;
    _unknown_ _t1591;
    _unknown_ _t1596;
    _unknown_ _t1599;
    _unknown_ _t1601;
    _unknown_ _t1606;
    _unknown_ _t1608;
    _unknown_ _t1611;
    _unknown_ _t1618;
    _unknown_ _t1624;
    _unknown_ _t1629;
    _unknown_ _t1630;
    _unknown_ _t1635;
    _unknown_ _t1636;
    _unknown_ _t1637;
    _unknown_ _t1649;
    _unknown_ _t1651;
    _unknown_ _t1652;
    _unknown_ _t1657;
    _unknown_ _t1658;
    _unknown_ _t1660;
    _unknown_ _t1662;
    signed int _t1663;
    void* _t1665;
    signed int _t1667;
    void* _t1669;
    _unknown_ _t1758;
    _unknown_ _t1760;
    _unknown_ _t1762;
    _unknown_ _t1766;
    _unknown_ _t1768;
    _unknown_ _t1770;
    _unknown_ _t1774;
    _unknown_ _t1778;
    _unknown_ _t1780;
    _unknown_ _t1786;
    _unknown_ _t1787;
    _unknown_ _t1792;
    _unknown_ _t1794;
    _unknown_ _t1795;
    _unknown_ _t1798;
    _unknown_ _t1801;
    _unknown_ _t1802;
    _unknown_ _t1803;
    _unknown_ _t1807;
    _unknown_ _t1809;
    _unknown_ _t1815;
    _unknown_ _t1820;
    signed int _t1823;
    _unknown_ _t1824;
    _unknown_ _t1826;
    _unknown_ _t1828;
    _unknown_ _t1830;
    _unknown_ _t1832;
    _unknown_ _t1834;
    _unknown_ _t1836;
    _unknown_ _t1840;
    _unknown_ _t1843;
    _unknown_ _t1844;
    _unknown_ _t1846;
    _unknown_ _t1852;
    _unknown_ _t1854;
    _unknown_ _t1857;
    _unknown_ _t1859;
    _unknown_ _t1860;
    _unknown_ _t1862;
    _unknown_ _t1863;
    _unknown_ _t1864;
    _unknown_ _t1865;
    _unknown_ _t1866;
    _unknown_ _t1868;
    _unknown_ _t1871;
    _unknown_ _t1872;
    _unknown_ _t1873;
    _unknown_ _t1875;
    _unknown_ _t1876;
    _unknown_ _t1877;
    _unknown_ _t1879;
    _unknown_ _t1882;
    _unknown_ _t1883;
    _unknown_ _t1885;
    _unknown_ _t1886;
    _unknown_ _t1887;
    _unknown_ _t1888;
    _unknown_ _t1889;
    _unknown_ _t1891;
    _unknown_ _t1894;
    signed int _t1895;
    signed int _t1896;
    signed int _t1897;
    _unknown_ _t1903;
    _unknown_ _t1904;
    _unknown_ _t1906;
    _unknown_ _t1908;
    _unknown_ _t1910;
    _unknown_ _t1912;
    _unknown_ _t1914;
    _unknown_ _t1915;
    _unknown_ _t1917;
    _unknown_ _t1919;
    _unknown_ _t1921;
    _unknown_ _t1924;
    _unknown_ _t1925;
    _unknown_ _t1926;
    _unknown_ _t1930;
    _unknown_ _t1931;
    _unknown_ _t1932;
    _unknown_ _t1936;
    _unknown_ _t1937;
    _unknown_ _t1939;
    _unknown_ _t1940;
    _unknown_ _t1941;
    _unknown_ _t1943;
    _unknown_ _t1944;
    _unknown_ _t1945;
    _unknown_ _t1948;
    _unknown_ _t1950;
    _unknown_ _t1952;
    _unknown_ _t1953;
    _unknown_ _t1958;
    _unknown_ _t1961;
    _unknown_ _t1962;
    _unknown_ _t1963;
    _unknown_ _t1966;
    _unknown_ _t1967;
    _unknown_ _t1968;
    _unknown_ _t1976;
    _unknown_ _t1979;
    _unknown_ _t1981;
    _unknown_ _t1986;
    _unknown_ _t1987;
    signed int _t1990;
    _unknown_ _t1991;
    _unknown_ _t1992;
    signed int _t1993;
    signed int _t1996;
    _unknown_ _t1997;
    _unknown_ _t1998;
    _unknown_ _t2000;
    _unknown_ _t2001;
    _unknown_ _t2002;
    _unknown_ _t2003;
    void* _t2006;
    signed int _t2007;
    _unknown_ _t2009;
    _unknown_ _t2010;
    _unknown_ _t2012;
    _unknown_ _t2014;
    _unknown_ _t2015;

    _v36 =  *_a20;
    _t1859 = (_v36 << 3) + _v36;
    _t1219 = _t1859 >= 0 ? _t1859 : 0;
    _t1802 = _t1859 >= 0 ? _t1859 : 0;
    asm("shld edx, eax, 0x6");
    _v120 =  *_a28;
    _t1225 = _v120;
    _t1804 = _t1225 >= 0 ? _t1225 : 0;
    _v1104 = _t1225 >= 0 ? _t1225 : 0;
    _v116 =  *_a4;
    _t1229 = _v1104 * _v116;
    _t1761 = _t1229 >= 0 ? _t1229 : 0;
    _v1100 = _t1229 >= 0 ? _t1229 : 0;
    _v112 =  *_a12;
    _t1233 = _v1100 * _v112;
    _t1234 = _t1233 >= 0 ? 0 : _t1233;
    _t1805 = _t1233 >= 0 ? 0 : _t1233;
    _v1204 = _t1233 >= 0 ? 0 : _t1233;
    _v1200 = 0;
    asm("shld edx, eax, 0x6");
    _v1212 = _v1204 << 6;
    _v1208 = _v1200 & 15;
    _v1180 =  !_v1104 - _v1100;
    _v52 =  *_a28;
    _t1242 = _v52;
    _t1808 = _t1242 >= 0 ? _t1242 : 0;
    _v1096 = _t1242 >= 0 ? _t1242 : 0;
    _v48 =  *_a28;
    _t1246 = _v1096 * _v48;
    _t1767 = _t1246 >= 0 ? _t1246 : 0;
    _v1092 = _t1246 >= 0 ? _t1246 : 0;
    _v44 =  *_a12;
    _t1250 = _v1092 * _v44;
    _t1810 = _t1250 >= 0 ? _t1250 : 0;
    _v1088 = _t1250 >= 0 ? _t1250 : 0;
    _t1875 = _v1088 + _v1088 + _v1088;
    _t1769 = _t1875 >= 0 ? _t1875 : 0;
    _v1084 = _t1875 >= 0 ? _t1875 : 0;
    _v40 =  *_a4;
    _t1257 = _v1084 * _v40;
    _t1258 = _t1257 >= 0 ? 0 : _t1257;
    _t1811 = _t1257 >= 0 ? 0 : _t1257;
    _v1220 = _t1257 >= 0 ? 0 : _t1257;
    _v1216 = 0;
    asm("shld edx, eax, 0x7");
    _v1228 = _v1220 << 7;
    _v1224 = _v1216 & 15;
    _v1172 =  !_v1096 - _v1092 - _v1088 - _v1084;
    _v32 =  *_a12;
    _t1268 = _v32;
    _t1269 = _t1268 >= 0 ? 0 : _t1268;
    _t1813 = _t1268 >= 0 ? 0 : _t1268;
    _v1236 = _t1268 >= 0 ? 0 : _t1268;
    _v1232 = 0;
    asm("shld edx, eax, 0x6");
    _v1244 = _v1236 << 6;
    _v1240 = _v1232 & 15;
    _v64 =  *_a28;
    _t1275 = _v64;
    _t1816 = _t1275 >= 0 ? _t1275 : 0;
    _v1080 = _t1275 >= 0 ? _t1275 : 0;
    _v60 =  *_a4;
    _t1279 = _v1080 * _v60;
    _t1779 = _t1279 >= 0 ? _t1279 : 0;
    _v1076 = _t1279 >= 0 ? _t1279 : 0;
    _v56 =  *_a12;
    _t1283 = _v1076 * _v56;
    _t1284 = _t1283 >= 0 ? 0 : _t1283;
    _t1817 = _t1283 >= 0 ? 0 : _t1283;
    _v1252 = _t1283 >= 0 ? 0 : _t1283;
    _v1248 = 0;
    asm("shld edx, eax, 0x6");
    _v1260 = _v1252 << 6;
    _v1256 = _v1248 & 15;
    _v1176 =  !_v1080 - _v1076;
    _v236 = 0;
    _v268 = 0;
    _v580 = 0;
    _v616 = 0;
    if( *_a48 <= 0 ||  *_a52 <= 0 ||  *_a48 > 3 ||  *_a52 > 3) {
        _v1048 = "linopt.F90";
        _v1044 = 106;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "---------------------------------------------";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
        _v1048 = "linopt.F90";
        _v1044 = 107;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "    Error in linopt:                         ";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
        _v1048 = "linopt.F90";
        _v1044 = 108;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "    the polarisation directions incorrect    ";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
        _v1048 = "linopt.F90";
        _v1044 = 109;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "    1=x and 2=y and 3=z                      ";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
        _v1048 = "linopt.F90";
        _v1044 = 110;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "---------------------------------------------";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
         *__esp = -1;
        _gfortran_stop_numeric();
    }
    if( *_a56 <= 0) {
        _v1048 = "linopt.F90";
        _v1044 = 115;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "---------------------------------------------";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
        _v1048 = "linopt.F90";
        _v1044 = 116;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "    Error in linopt:                         ";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
        _v1048 = "linopt.F90";
        _v1044 = 117;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "    number of energy mesh points incorrect   ";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
        _v1048 = "linopt.F90";
        _v1044 = 118;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "    number has to integer greater than 0     ";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
        _v1048 = "linopt.F90";
        _v1044 = 119;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "    nmesh*de = max energy for calculation    ";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
        _v1048 = "linopt.F90";
        _v1044 = 120;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "---------------------------------------------";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
         *__esp = -1;
        _gfortran_stop_numeric();
    }
    asm("fld qword [eax]");
    asm("fldz ");
    asm("fucomip st0, st1");
    asm("fstp st0");
    asm("setnb al");
    if((_a60 & 4294967295 & ) != 0) {
        _v1048 = "linopt.F90";
        _v1044 = 125;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "---------------------------------------------";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
        _v1048 = "linopt.F90";
        _v1044 = 126;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "    Error in linopt:                         ";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
        _v1048 = "linopt.F90";
        _v1044 = 127;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "    energy step is incorrect                 ";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
        _v1048 = "linopt.F90";
        _v1044 = 128;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "    number has to real greater than 0.0      ";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
        _v1048 = "linopt.F90";
        _v1044 = 129;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "    nmesh*de = max energy for calculation    ";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
        _v1048 = "linopt.F90";
        _v1044 = 130;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "---------------------------------------------";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
         *__esp = -1;
        _gfortran_stop_numeric();
    }
    asm("fld qword [eax]");
    asm("fldz ");
    asm("fucomip st0, st1");
    asm("fstp st0");
    if((_a64 & 4294967295 & ) != 0) {
        _v1048 = "linopt.F90";
        _v1044 = 135;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "---------------------------------------------";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
        _v1048 = "linopt.F90";
        _v1044 = 136;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "    Error in linopt:                         ";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
        _v1048 = "linopt.F90";
        _v1044 = 137;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "    scissors shift is incorrect              ";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
        _v1048 = "linopt.F90";
        _v1044 = 138;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "    number has to real greater than 0.0      ";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
        _v1048 = "linopt.F90";
        _v1044 = 139;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "---------------------------------------------";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
         *__esp = -1;
        _gfortran_stop_numeric();
    }
    asm("fld qword [eax]");
    asm("fld qword [0x8071608]");
    asm("fxch st0, st1");
    asm("fucomip st0, st1");
    asm("fstp st0");
    if((_a68 & 4294967295 & ) == 0) {
        asm("fld qword [eax]");
        asm("fld qword [0x8071610]");
        asm("fxch st0, st1");
        asm("fucomip st0, st1");
        asm("fstp st0");
        if((_a68 & 4294967295 & ) != 0) {
            _v1048 = "linopt.F90";
            _v1044 = 149;
            _v1056 = 128;
            _v1052 = 6;
             *__esp =  &_v1056;
            _gfortran_st_write();
            _v1316 = 40;
            _v1320 = "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005   Attempt to allocate negative amount of memory. Possible integer overflow";
             *__esp =  &_v1056;
            _gfortran_transfer_character();
             *__esp =  &_v1056;
            _gfortran_st_write_done();
            _v1048 = "linopt.F90";
            _v1044 = 150;
            _v1056 = 128;
            _v1052 = 6;
             *__esp =  &_v1056;
            _gfortran_st_write();
            _v1316 = 40;
            _v1320 = "    ATTENTION: broadening is too high       ideally should be less than 0.005   Attempt to allocate negative amount of memory. Possible integer overflow";
             *__esp =  &_v1056;
            _gfortran_transfer_character();
             *__esp =  &_v1056;
            _gfortran_st_write_done();
            _v1048 = "linopt.F90";
            _v1044 = 151;
            _v1056 = 128;
            _v1052 = 6;
             *__esp =  &_v1056;
            _gfortran_st_write();
            _v1316 = 40;
            _v1320 = "    ideally should be less than 0.005   Attempt to allocate negative amount of memory. Possible integer overflow";
             *__esp =  &_v1056;
            _gfortran_transfer_character();
             *__esp =  &_v1056;
            _gfortran_st_write_done();
            _v1048 = "linopt.F90";
            _v1044 = 152;
            _v1056 = 128;
            _v1052 = 6;
             *__esp =  &_v1056;
            _gfortran_st_write();
            _v1316 = 40;
            _v1320 = "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005   Attempt to allocate negative amount of memory. Possible integer overflow";
             *__esp =  &_v1056;
            _gfortran_transfer_character();
             *__esp =  &_v1056;
            _gfortran_st_write_done();
        }
    } else {
        _v1048 = "linopt.F90";
        _v1044 = 144;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "---------------------------------------------";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
        _v1048 = "linopt.F90";
        _v1044 = 145;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "    ATTENTION: broadening is quite high      ";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
        _v1048 = "linopt.F90";
        _v1044 = 146;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "    ideally should be less than 0.005        ";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
        _v1048 = "linopt.F90";
        _v1044 = 147;
        _v1056 = 128;
        _v1052 = 6;
         *__esp =  &_v1056;
        _gfortran_st_write();
        _v1316 = 45;
        _v1320 = "---------------------------------------------";
         *__esp =  &_v1056;
        _gfortran_transfer_character();
         *__esp =  &_v1056;
        _gfortran_st_write_done();
    }
    _v228 = 1057;
    _v220 = 1;
    _v216 =  *_a56;
    _v224 = 1;
    _t1895 =  *_a56 >= 0 ?  *_a56 : 0;
    if(( *_a56 & 4294967295 & ) == 0) {
        _t1896 = _t1895 << 4;
    } else {
        _t1896 = 0;
    }
    if(_v236 != 0) {
        _v1316 = "chi";
        _v1320 = "Attempting to allocate already allocated array '%s'";
         *__esp = "At line 157 of file linopt.F90";
        _gfortran_runtime_error_at();
    } else {
        _t1667 = _t1896;
        if(_t1667 < 0) {
             *__esp = "Attempt to allocate negative amount of memory. Possible integer overflow";
            _gfortran_runtime_error();
        }
        _t1668 = _t1667 <= 0 ? 1 : _t1667;
        _t1669 = malloc(_t1667 <= 0 ? 1 : _t1667);
        if(_t1669 == 0) {
             *__esp = "Out of memory";
            _gfortran_os_error();
        }
        _v236 = _t1669;
        _v232 = -1;
        _v260 = 1057;
        _v252 = 1;
        _v248 =  *_a56;
        _v256 = 1;
        _t1993 =  *_a56 >= 0 ?  *_a56 : 0;
        if(( *_a56 & 4294967295 & ) != 0) {
            goto L26;
        }
        _t1897 = _t1993 << 4;
L28:
        if(_v268 != 0) {
            _v1316 = "eps";
            _v1320 = "Attempting to allocate already allocated array '%s'";
             *__esp = "At line 157 of file linopt.F90";
            _gfortran_runtime_error_at();
            goto L36;
        }
        _t1663 = _t1897;
        if(_t1663 < 0) {
             *__esp = "Attempt to allocate negative amount of memory. Possible integer overflow";
            _gfortran_runtime_error();
        }
        _t1897 = 1;
        _t1664 = _t1663 <= 0 ? _t1897 : _t1663;
        _t1665 = malloc(_t1663 <= 0 ? _t1897 : _t1663);
        if(_t1665 == 0) {
             *__esp = "Out of memory";
            _gfortran_os_error();
        }
        _v268 = _t1665;
        _v264 = -1;
        _v572 = 538;
        _v564 = 1;
        _v560 = 3;
        _v568 = 1;
        _v552 = 1;
        _v548 = 3;
        _v556 = 3;
        if(_v580 == 0) {
            goto L36;
        }
        _v1316 = "s";
        _v1320 = "Attempting to allocate already allocated array '%s'";
         *__esp = "At line 158 of file linopt.F90";
        _gfortran_runtime_error_at();
L41:
        _t1328 = malloc(72);
        if(_t1328 == 0) {
             *__esp = "Out of memory";
            _gfortran_os_error();
        }
        _v616 = _t1328;
        _v612 = -4;
        asm("fld qword [eax]");
        asm("fldz ");
        asm("fldz ");
        asm("fld st0, st2");
        asm("fmulp st1, st0");
        asm("fldz ");
        asm("fmul st0, st2");
        asm("fxch st0, st2");
        asm("fsubp st1, st0");
        asm("fxch st0, st2");
        asm("faddp st1, st0");
        asm("fxch st0, st1");
        asm("fstp qword [ebp+0xfffffde8]");
        asm("fstp qword [ebp+0xfffffdf0]");
        asm("fld qword [eax]");
        _v1072 =  *_a20;
        asm("fild dword [ebp+0xfffffbd4]");
        asm("fmulp st1, st0");
        asm("fld1 ");
        asm("fdivrp st1, st0");
        asm("fstp qword [ebp+0xffffff50]");
        asm("fld qword [0x8071618]");
        asm("fstp qword [ebp-0x68]");
        _v1312 = _a72;
        _v1316 = 256;
        _v1320 =  &_v644;
         *__esp =  &_v640;
        _gfortran_string_trim();
        _t1897 = _v640 + 11 << 5;
        if(_t1897 >= 0) {
L46:
             *__esp = "Attempt to allocate a negative amount of memory.";
            _gfortran_runtime_error();
        }
        _t1338 = _t1897 > 0 ? _t1897 : 1;
        _t1339 = malloc(_t1897 > 0 ? _t1897 : 1);
        if(_t1339 == 0) {
             *__esp = "Memory allocation failed";
            _gfortran_os_error();
        }
        _t2006 = _t1339;
        _v1304 = "-linopt.outofFORMATTEDWRITE(a) # Energy(eV)         Im(chi1(w))(a,2i3,a) #calculated the component:of linear susceptibilitycalculated the component:(a,2es16.6) #broadening: with broadening:(a,es16.6) #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)";
        _v1308 = 11;
        _v1312 = _v644;
        _v1316 = _v640;
        _v1320 = _t2006;
         *__esp = _v640 + 11;
        _gfortran_concat_string();
        if(_v640 > 0) {
            _t1661 = _v644;
            if(_v644 != 0) {
                free(_t1661);
            }
        }
        _t1784 = _v640 + 11;
        if(_v640 + 11 <= 255) {
            memmove( &_v524, _t2006, _t1784);
            memset( &_v524 + _t1784, 32, 256 - _t1784);
        } else {
            memmove( &_v524, _t2006, 256);
        }
        _t1349 = _t2006;
        if(_t2006 != 0) {
            free(_t1349);
        }
        _v1156 = _v616;
        _v1160 = _v612;
        _v1164 = _v600;
        _v1168 = _v596;
        _t1996 = _v584;
        _t2007 = _v604;
        _t1823 = _v588;
        while(_t1823 <= _t1996) {
            _v1280 = _v1160 + _v592 * _t1823;
            _t1990 = _v1164;
            while(_t1990 <= _v1168) {
                _v1264 = _v1280 + _t1990 * _t2007;
                asm("fldz ");
                asm("fstp qword [ebx+eax*8]");
                _t1990 = _t1990 + 1;
            }
        }
L36:
        _t1326 = malloc(72);
        if(_t1326 == 0) {
             *__esp = "Out of memory";
            _gfortran_os_error();
        }
        _v580 = _t1326;
        _v576 = -4;
        _v608 = 538;
        _v600 = 1;
        _v596 = 3;
        _v604 = 1;
        _v588 = 1;
        _v584 = 3;
        _v592 = 3;
        if(_v616 == 0) {
            goto L41;
        } else {
            _v1316 = "sym";
            _v1320 = "Attempting to allocate already allocated array '%s'";
             *__esp = "At line 158 of file linopt.F90";
            _gfortran_runtime_error_at();
            goto L46;
        }
    }
L26:
    _t1897 = 0;
    goto L28;
}

L08050B5C(signed int* _a4, _unknown_ _a8, signed int* _a12, _unknown_ _a16, signed int* _a20, signed int _a24, signed int* _a28, _unknown_ _a32, _unknown_ _a36, _unknown_ _a40, intOrPtr* _a44, intOrPtr* _a48, intOrPtr* _a52, signed int* _a56, signed int _a60, signed int _a64, signed int _a68, signed int _a72, void* _a76)
{
    signed int _v80;
    signed int _v120;
    signed int _v124;
    signed int _v128;
    signed int _v132;
    signed int _v136;
    _unknown_ _v140;
    _unknown_ _v144;
    _unknown_ _v148;
    _unknown_ _v152;
    _unknown_ _v156;
    _unknown_ _v160;
    signed int _v164;
    _unknown_ _v168;
    _unknown_ _v172;
    _unknown_ _v176;
    _unknown_ _v180;
    _unknown_ _v184;
    _unknown_ _v188;
    _unknown_ _v204;
    signed int _v216;
    signed int _v220;
    signed int _v224;
    signed int _v776;
    signed int _v780;
    signed int _v784;
    signed int _v788;
    signed int _v792;
    signed int _v796;
    signed int _v800;
    signed int _v804;
    signed int _v808;
    intOrPtr _v812;
    signed int _v816;
    signed int _v820;
    _unknown_ _v828;
    void _v1084;
    void _v1340;
    void _v1596;
    void _v1852;
    void _v2108;
    _unknown_ _v2128;
    signed int _v2132;
    signed int _v2136;
    signed int _v2140;
    intOrPtr _v2144;
    signed int _v2148;
    signed int _v2152;
    signed int _v2156;
    signed int _v2160;
    signed int _v2164;
    intOrPtr _v2168;
    signed int _v2172;
    signed int _v2176;
    signed int _v2180;
    signed int _v2184;
    signed int _v2188;
    intOrPtr _v2192;
    signed int _v2196;
    signed int _v2200;
    signed int _v2204;
    signed int _v2208;
    signed int _v2212;
    intOrPtr _v2216;
    signed int _v2220;
    signed int _v2224;
    signed int _v2312;
    signed int _v2316;
    intOrPtr _v2320;
    signed int _v2324;
    signed int _v2328;
    intOrPtr _v2332;
    signed int _v2336;
    signed int _v2340;
    signed int _v2344;
    signed int _v2348;
    signed int _v2352;
    signed int _v2356;
    signed int _v2360;
    signed int _v2364;
    signed int _v2368;
    intOrPtr _v2372;
    signed int _v2376;
    signed int _v2380;
    signed int _v2384;
    signed int _v2388;
    intOrPtr _v2392;
    signed int _v2396;
    signed int _v2400;
    intOrPtr _v2404;
    signed int _v2408;
    signed int _v2412;
    signed int _v2416;
    signed int _v2420;
    signed int _v2424;
    signed int _v2428;
    signed int _v2432;
    signed int _v2436;
    signed int _v2440;
    intOrPtr _v2444;
    signed int _v2448;
    signed int _v2452;
    signed int _v2456;
    signed int _v2460;
    intOrPtr _v2464;
    signed int _v2468;
    signed int _v2472;
    intOrPtr _v2476;
    signed int _v2480;
    signed int _v2484;
    signed int _v2488;
    signed int _v2492;
    signed int _v2496;
    signed int _v2500;
    signed int _v2504;
    signed int _v2508;
    signed int _v2512;
    intOrPtr _v2516;
    signed int _v2520;
    signed int _v2524;
    signed int _v2528;
    signed int _v2532;
    signed int _v2536;
    signed int _v2540;
    signed int _v2544;
    signed int _v2548;
    intOrPtr _v2552;
    intOrPtr _v2556;
    void* _v2560;
    signed int _v2564;
    signed int _v2568;
    signed int _v2572;
    signed int _v2576;
    signed int _v2580;
    signed int _v2584;
    signed int _v2588;
    signed int _v2592;
    signed int _v2596;
    intOrPtr _v2600;
    intOrPtr _v2604;
    void* _v2608;
    _unknown_ _v2620;
    _unknown_ _v2628;
    _unknown_ _v2636;
    int _v2672;
    void* _v2676;
    int _v2680;
    void* _v2684;
    int _v2688;
    void* _v2692;
    int _v2696;
    void* _v2700;
    int _v2704;
    void* _v2708;
    _unknown_ _v2716;
    _unknown_ _v2724;
    _unknown_ _v2732;
    _unknown_ _v2740;
    _unknown_ _v2748;
    _unknown_ _v2756;
    _unknown_ _v2764;
    _unknown_ _v2772;
    _unknown_ _v2780;
    _unknown_ _v2788;
    _unknown_ _v2796;
    _unknown_ _v2804;
    _unknown_ _v2812;
    _unknown_ _v2820;
    _unknown_ _v2828;
    _unknown_ _v2836;
    _unknown_ _v2844;
    _unknown_ _v2852;
    _unknown_ _v2860;
    _unknown_ _v2868;
    _unknown_ _v2876;
    _unknown_ _v2884;
    _unknown_ _v2892;
    _unknown_ _v3148;
    _unknown_ _v3152;
    _unknown_ _v3172;
    _unknown_ _v3176;
    _unknown_ _v3180;
    _unknown_ _v3184;
    _unknown_ _v3196;
    _unknown_ _v3200;
    int _v3220;
    char* _v3224;
    intOrPtr _v3228;
    char _v3232;
    signed int _v3248;
    _unknown_ _v3250;
    _unknown_ _v3252;
    signed int _v3256;
    intOrPtr _v3260;
    signed int _v3264;
    signed int _v3268;
    signed int _v3272;
    signed int _v3276;
    _unknown_ _v3280;
    _unknown_ _v3284;
    _unknown_ _v3288;
    _unknown_ _v3292;
    _unknown_ _v3296;
    _unknown_ _v3300;
    _unknown_ _v3304;
    _unknown_ _v3308;
    _unknown_ _v3312;
    _unknown_ _v3316;
    _unknown_ _v3320;
    _unknown_ _v3324;
    _unknown_ _v3328;
    _unknown_ _v3332;
    _unknown_ _v3336;
    _unknown_ _v3340;
    _unknown_ _v3344;
    _unknown_ _v3348;
    _unknown_ _v3352;
    _unknown_ _v3356;
    _unknown_ _v3360;
    _unknown_ _v3364;
    _unknown_ _v3368;
    _unknown_ _v3372;
    _unknown_ _v3376;
    _unknown_ _v3380;
    _unknown_ _v3384;
    _unknown_ _v3388;
    _unknown_ _v3392;
    _unknown_ _v3396;
    _unknown_ _v3400;
    _unknown_ _v3404;
    _unknown_ _v3408;
    _unknown_ _v3412;
    _unknown_ _v3416;
    _unknown_ _v3420;
    _unknown_ _v3424;
    _unknown_ _v3428;
    _unknown_ _v3432;
    _unknown_ _v3436;
    _unknown_ _v3440;
    _unknown_ _v3444;
    signed int _v3448;
    void* _v3452;
    intOrPtr _v3456;
    signed int _v3460;
    signed int _v3464;
    signed int _v3468;
    signed int _v3472;
    signed int _v3476;
    intOrPtr _v3480;
    intOrPtr _v3484;
    signed int _v3584;
    signed int _v3588;
    signed int _v3592;
    signed int _v3596;
    signed int _v3600;
    signed int _v3604;
    signed int _v3608;
    signed int _v3612;
    signed int _v3616;
    signed int _v3620;
    signed int _v3624;
    signed int _v3628;
    intOrPtr _v3632;
    intOrPtr _v3648;
    char* _v3672;
    intOrPtr _v3676;
    void* _v3680;
    int _v3684;
    void* _v3688;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t3566;
    _unknown_ _t3570;
    signed int _t3573;
    signed int _t3577;
    signed int _t3581;
    _unknown_ _t3585;
    signed int _t3590;
    signed int _t3594;
    signed int _t3598;
    _unknown_ _t3601;
    signed int _t3605;
    _unknown_ _t3609;
    signed int _t3616;
    _unknown_ _t3620;
    _unknown_ _t3621;
    _unknown_ _t3622;
    signed int _t3629;
    void* _t3631;
    _unknown_ _t3637;
    _unknown_ _t3638;
    _unknown_ _t3640;
    signed int _t3646;
    void* _t3648;
    _unknown_ _t3654;
    _unknown_ _t3655;
    _unknown_ _t3657;
    signed int _t3663;
    void* _t3665;
    _unknown_ _t3671;
    _unknown_ _t3672;
    _unknown_ _t3674;
    signed int _t3680;
    void* _t3682;
    _unknown_ _t3688;
    _unknown_ _t3689;
    _unknown_ _t3691;
    signed int _t3697;
    void* _t3699;
    _unknown_ _t3705;
    _unknown_ _t3706;
    _unknown_ _t3708;
    signed int _t3747;
    void* _t3773;
    void* _t3775;
    _unknown_ _t4029;
    _unknown_ _t4032;
    _unknown_ _t4035;
    _unknown_ _t4038;
    _unknown_ _t4041;
    _unknown_ _t4044;
    _unknown_ _t4047;
    _unknown_ _t4050;
    _unknown_ _t4053;
    _unknown_ _t4056;
    _unknown_ _t4125;
    _unknown_ _t4127;
    _unknown_ _t4129;
    _unknown_ _t4131;
    _unknown_ _t4133;
    _unknown_ _t4135;
    _unknown_ _t4137;
    _unknown_ _t4139;
    _unknown_ _t4141;
    _unknown_ _t4165;
    _unknown_ _t4166;
    _unknown_ _t4167;
    _unknown_ _t4168;
    _unknown_ _t4169;
    _unknown_ _t4178;
    _unknown_ _t4179;
    _unknown_ _t4180;
    _unknown_ _t4181;
    _unknown_ _t4193;
    _unknown_ _t4196;
    _unknown_ _t4199;
    _unknown_ _t4202;
    _unknown_ _t4209;
    _unknown_ _t4212;
    _unknown_ _t4215;
    _unknown_ _t4218;
    _unknown_ _t4222;
    _unknown_ _t4223;
    _unknown_ _t4224;
    _unknown_ _t4225;
    _unknown_ _t4233;
    _unknown_ _t4253;
    _unknown_ _t4256;
    _unknown_ _t4258;
    _unknown_ _t4259;
    _unknown_ _t4261;
    _unknown_ _t4265;
    _unknown_ _t4267;
    _unknown_ _t4268;
    _unknown_ _t4272;
    _unknown_ _t4273;
    _unknown_ _t4274;
    _unknown_ _t4284;
    _unknown_ _t4287;
    _unknown_ _t4290;
    _unknown_ _t4292;
    _unknown_ _t4293;
    _unknown_ _t4297;
    _unknown_ _t4300;
    _unknown_ _t4303;
    _unknown_ _t4305;
    _unknown_ _t4306;
    _unknown_ _t4310;
    _unknown_ _t4313;
    _unknown_ _t4316;
    _unknown_ _t4318;
    _unknown_ _t4319;
    _unknown_ _t4323;
    _unknown_ _t4329;
    _unknown_ _t4331;
    _unknown_ _t4332;
    _unknown_ _t4339;
    _unknown_ _t4341;
    _unknown_ _t4342;
    _unknown_ _t4343;
    _unknown_ _t4344;
    _unknown_ _t4345;
    _unknown_ _t4348;
    _unknown_ _t4350;
    _unknown_ _t4352;
    _unknown_ _t4353;
    _unknown_ _t4354;
    _unknown_ _t4355;
    _unknown_ _t4356;
    _unknown_ _t4361;
    _unknown_ _t4364;
    _unknown_ _t4365;
    _unknown_ _t4368;
    _unknown_ _t4370;
    _unknown_ _t4372;
    _unknown_ _t4375;
    _unknown_ _t4376;
    _unknown_ _t4379;
    _unknown_ _t4381;
    _unknown_ _t4384;
    _unknown_ _t4385;
    _unknown_ _t4388;
    _unknown_ _t4392;
    _unknown_ _t4395;
    _unknown_ _t4396;
    _unknown_ _t4399;
    _unknown_ _t4401;
    _unknown_ _t4403;
    _unknown_ _t4406;
    _unknown_ _t4407;
    _unknown_ _t4410;
    _unknown_ _t4412;
    _unknown_ _t4415;
    _unknown_ _t4416;
    _unknown_ _t4419;
    _unknown_ _t4423;
    _unknown_ _t4426;
    _unknown_ _t4427;
    _unknown_ _t4430;
    _unknown_ _t4432;
    _unknown_ _t4434;
    _unknown_ _t4437;
    _unknown_ _t4438;
    _unknown_ _t4441;
    _unknown_ _t4452;
    _unknown_ _t4454;
    _unknown_ _t4455;
    _unknown_ _t4458;
    _unknown_ _t4460;
    _unknown_ _t4462;
    _unknown_ _t4464;
    _unknown_ _t4466;
    _unknown_ _t4467;
    _unknown_ _t4468;
    _unknown_ _t4469;
    _unknown_ _t4470;
    _unknown_ _t4472;
    _unknown_ _t4473;
    _unknown_ _t4474;
    _unknown_ _t4475;
    _unknown_ _t4476;
    _unknown_ _t4482;
    _unknown_ _t4485;
    _unknown_ _t4486;
    _unknown_ _t4489;
    _unknown_ _t4491;
    _unknown_ _t4493;
    _unknown_ _t4496;
    _unknown_ _t4497;
    _unknown_ _t4500;
    _unknown_ _t4502;
    _unknown_ _t4505;
    _unknown_ _t4506;
    _unknown_ _t4509;
    _unknown_ _t4513;
    _unknown_ _t4516;
    _unknown_ _t4517;
    _unknown_ _t4520;
    _unknown_ _t4522;
    _unknown_ _t4524;
    _unknown_ _t4527;
    _unknown_ _t4528;
    _unknown_ _t4531;
    _unknown_ _t4533;
    _unknown_ _t4536;
    _unknown_ _t4537;
    _unknown_ _t4540;
    _unknown_ _t4544;
    _unknown_ _t4547;
    _unknown_ _t4548;
    _unknown_ _t4551;
    _unknown_ _t4553;
    _unknown_ _t4555;
    _unknown_ _t4558;
    _unknown_ _t4559;
    _unknown_ _t4562;
    _unknown_ _t4573;
    _unknown_ _t4575;
    _unknown_ _t4576;
    _unknown_ _t4577;
    _unknown_ _t4578;
    _unknown_ _t4581;
    _unknown_ _t4583;
    _unknown_ _t4585;
    _unknown_ _t4586;
    _unknown_ _t4587;
    _unknown_ _t4588;
    _unknown_ _t4589;
    _unknown_ _t4594;
    _unknown_ _t4597;
    _unknown_ _t4598;
    _unknown_ _t4601;
    _unknown_ _t4603;
    _unknown_ _t4605;
    _unknown_ _t4608;
    _unknown_ _t4609;
    _unknown_ _t4612;
    _unknown_ _t4614;
    _unknown_ _t4617;
    _unknown_ _t4618;
    _unknown_ _t4621;
    _unknown_ _t4625;
    _unknown_ _t4628;
    _unknown_ _t4629;
    _unknown_ _t4632;
    _unknown_ _t4634;
    _unknown_ _t4636;
    _unknown_ _t4639;
    _unknown_ _t4640;
    _unknown_ _t4643;
    _unknown_ _t4645;
    _unknown_ _t4648;
    _unknown_ _t4649;
    _unknown_ _t4652;
    _unknown_ _t4656;
    _unknown_ _t4659;
    _unknown_ _t4660;
    _unknown_ _t4663;
    _unknown_ _t4665;
    _unknown_ _t4667;
    _unknown_ _t4670;
    _unknown_ _t4671;
    _unknown_ _t4674;
    _unknown_ _t4687;
    _unknown_ _t4690;
    _unknown_ _t4691;
    _unknown_ _t4694;
    _unknown_ _t4696;
    _unknown_ _t4698;
    _unknown_ _t4701;
    _unknown_ _t4702;
    _unknown_ _t4705;
    _unknown_ _t4712;
    _unknown_ _t4714;
    _unknown_ _t4718;
    _unknown_ _t4721;
    _unknown_ _t4722;
    _unknown_ _t4725;
    _unknown_ _t4727;
    _unknown_ _t4729;
    _unknown_ _t4732;
    _unknown_ _t4733;
    _unknown_ _t4736;
    _unknown_ _t4747;
    _unknown_ _t4749;
    _unknown_ _t4754;
    _unknown_ _t4756;
    _unknown_ _t4762;
    _unknown_ _t4786;
    _unknown_ _t4792;
    _unknown_ _t4796;
    _unknown_ _t4799;
    _unknown_ _t4801;
    _unknown_ _t4802;
    _unknown_ _t4804;
    _unknown_ _t4808;
    _unknown_ _t4810;
    _unknown_ _t4811;
    _unknown_ _t4813;
    _unknown_ _t4814;
    _unknown_ _t4836;
    _unknown_ _t4837;
    _unknown_ _t4844;
    _unknown_ _t4845;
    _unknown_ _t4852;
    _unknown_ _t4853;
    _unknown_ _t4860;
    _unknown_ _t4861;
    _unknown_ _t4868;
    _unknown_ _t4869;
    _unknown_ _t4876;
    _unknown_ _t4877;
    _unknown_ _t4881;
    _unknown_ _t4884;
    _unknown_ _t4885;
    _unknown_ _t4888;
    _unknown_ _t4890;
    _unknown_ _t4893;
    _unknown_ _t4894;
    _unknown_ _t4897;
    _unknown_ _t4899;
    _unknown_ _t4903;
    _unknown_ _t4906;
    _unknown_ _t4907;
    _unknown_ _t4910;
    _unknown_ _t4912;
    _unknown_ _t4915;
    _unknown_ _t4916;
    _unknown_ _t4919;
    _unknown_ _t4921;
    _unknown_ _t4934;
    _unknown_ _t4937;
    _unknown_ _t4938;
    _unknown_ _t4941;
    _unknown_ _t4949;
    _unknown_ _t4954;
    _unknown_ _t4958;
    _unknown_ _t4962;
    _unknown_ _t4966;
    _unknown_ _t4970;
    _unknown_ _t4974;
    _unknown_ _t4981;
    _unknown_ _t4989;
    _unknown_ _t4996;
    _unknown_ _t4997;
    _unknown_ _t5002;
    _unknown_ _t5003;
    _unknown_ _t5004;
    _unknown_ _t5009;
    _unknown_ _t5010;
    _unknown_ _t5011;
    _unknown_ _t5023;
    _unknown_ _t5025;
    _unknown_ _t5026;
    _unknown_ _t5034;
    signed int _t5035;
    void* _t5037;
    signed int _t5039;
    void* _t5041;
    signed int _t5049;
    signed int _t5061;
    void* _t5063;
    signed int _t5071;
    void* _t5073;
    signed int _t5081;
    void* _t5083;
    signed int _t5091;
    void* _t5093;
    signed int _t5101;
    void* _t5103;
    signed int _t5111;
    signed int _t5129;
    void* _t5131;
    signed int _t5139;
    _unknown_ _t5254;
    _unknown_ _t5256;
    _unknown_ _t5257;
    _unknown_ _t5260;
    _unknown_ _t5261;
    _unknown_ _t5264;
    signed int _t5266;
    _unknown_ _t5270;
    _unknown_ _t5274;
    _unknown_ _t5278;
    _unknown_ _t5282;
    _unknown_ _t5286;
    _unknown_ _t5288;
    _unknown_ _t5291;
    _unknown_ _t5304;
    _unknown_ _t5306;
    _unknown_ _t5308;
    _unknown_ _t5309;
    _unknown_ _t5311;
    _unknown_ _t5313;
    _unknown_ _t5314;
    _unknown_ _t5316;
    _unknown_ _t5318;
    _unknown_ _t5319;
    _unknown_ _t5321;
    _unknown_ _t5323;
    _unknown_ _t5324;
    _unknown_ _t5326;
    _unknown_ _t5328;
    _unknown_ _t5329;
    _unknown_ _t5331;
    _unknown_ _t5334;
    _unknown_ _t5339;
    signed int _t5347;
    signed int _t5349;
    _unknown_ _t5352;
    _unknown_ _t5353;
    _unknown_ _t5354;
    _unknown_ _t5355;
    _unknown_ _t5358;
    _unknown_ _t5360;
    _unknown_ _t5361;
    _unknown_ _t5362;
    _unknown_ _t5363;
    _unknown_ _t5364;
    _unknown_ _t5365;
    _unknown_ _t5366;
    _unknown_ _t5367;
    _unknown_ _t5368;
    _unknown_ _t5369;
    _unknown_ _t5370;
    _unknown_ _t5371;
    _unknown_ _t5372;
    _unknown_ _t5373;
    _unknown_ _t5374;
    _unknown_ _t5379;
    _unknown_ _t5384;
    _unknown_ _t5385;
    _unknown_ _t5386;
    _unknown_ _t5388;
    _unknown_ _t5389;
    _unknown_ _t5390;
    _unknown_ _t5393;
    signed int _t5395;
    signed int _t5398;
    _unknown_ _t5400;
    _unknown_ _t5401;
    _unknown_ _t5403;
    _unknown_ _t5405;
    _unknown_ _t5407;
    _unknown_ _t5414;
    _unknown_ _t5417;
    _unknown_ _t5420;
    _unknown_ _t5423;
    _unknown_ _t5426;
    intOrPtr _t5429;
    _unknown_ _t5431;
    _unknown_ _t5432;
    _unknown_ _t5433;
    _unknown_ _t5434;
    _unknown_ _t5438;
    _unknown_ _t5440;
    _unknown_ _t5442;
    _unknown_ _t5444;
    _unknown_ _t5446;
    _unknown_ _t5448;
    _unknown_ _t5450;
    _unknown_ _t5452;
    _unknown_ _t5454;
    _unknown_ _t5456;
    _unknown_ _t5458;
    _unknown_ _t5460;
    _unknown_ _t5462;
    _unknown_ _t5464;
    _unknown_ _t5466;
    _unknown_ _t5468;
    _unknown_ _t5470;
    _unknown_ _t5472;
    _unknown_ _t5474;
    _unknown_ _t5476;
    _unknown_ _t5478;
    _unknown_ _t5479;
    _unknown_ _t5480;
    _unknown_ _t5481;
    _unknown_ _t5482;
    _unknown_ _t5484;
    _unknown_ _t5486;
    _unknown_ _t5487;
    _unknown_ _t5489;
    _unknown_ _t5491;
    _unknown_ _t5492;
    _unknown_ _t5494;
    _unknown_ _t5497;
    _unknown_ _t5499;
    _unknown_ _t5501;
    _unknown_ _t5502;
    _unknown_ _t5504;
    _unknown_ _t5506;
    _unknown_ _t5507;
    _unknown_ _t5509;
    _unknown_ _t5512;
    _unknown_ _t5514;
    _unknown_ _t5516;
    _unknown_ _t5517;
    _unknown_ _t5519;
    _unknown_ _t5521;
    _unknown_ _t5522;
    _unknown_ _t5524;
    _unknown_ _t5527;
    _unknown_ _t5529;
    _unknown_ _t5530;
    _unknown_ _t5531;
    _unknown_ _t5533;
    _unknown_ _t5534;
    _unknown_ _t5538;
    _unknown_ _t5543;
    _unknown_ _t5544;
    _unknown_ _t5545;
    _unknown_ _t5546;
    _unknown_ _t5547;
    _unknown_ _t5548;
    _unknown_ _t5549;
    _unknown_ _t5550;
    _unknown_ _t5552;
    _unknown_ _t5553;
    _unknown_ _t5555;
    _unknown_ _t5558;
    _unknown_ _t5559;
    _unknown_ _t5562;
    _unknown_ _t5564;
    _unknown_ _t5566;
    _unknown_ _t5569;
    signed int _t5570;
    _unknown_ _t5571;
    signed int _t5572;
    intOrPtr _t5573;
    intOrPtr _t5574;
    _unknown_ _t5576;
    _unknown_ _t5577;
    _unknown_ _t5579;
    _unknown_ _t5580;
    _unknown_ _t5581;
    _unknown_ _t5582;
    _unknown_ _t5583;
    _unknown_ _t5585;
    _unknown_ _t5588;
    _unknown_ _t5589;
    _unknown_ _t5590;
    _unknown_ _t5592;
    _unknown_ _t5593;
    _unknown_ _t5594;
    _unknown_ _t5596;
    _unknown_ _t5597;
    _unknown_ _t5598;
    _unknown_ _t5600;
    _unknown_ _t5602;
    _unknown_ _t5607;
    _unknown_ _t5612;
    _unknown_ _t5617;
    _unknown_ _t5622;
    _unknown_ _t5626;
    _unknown_ _t5627;
    intOrPtr _t5628;
    signed int _t5631;
    signed int _t5632;
    signed int _t5633;
    signed int _t5634;
    signed int _t5635;
    signed int _t5636;
    signed int _t5637;
    signed int _t5638;
    _unknown_ _t5640;
    _unknown_ _t5641;
    _unknown_ _t5642;
    _unknown_ _t5643;
    _unknown_ _t5646;
    _unknown_ _t5648;
    _unknown_ _t5650;
    _unknown_ _t5652;
    _unknown_ _t5654;
    _unknown_ _t5656;
    _unknown_ _t5658;
    _unknown_ _t5660;
    _unknown_ _t5662;
    _unknown_ _t5664;
    _unknown_ _t5666;
    _unknown_ _t5668;
    _unknown_ _t5670;
    _unknown_ _t5672;
    _unknown_ _t5674;
    _unknown_ _t5676;
    _unknown_ _t5678;
    _unknown_ _t5680;
    _unknown_ _t5682;
    _unknown_ _t5684;
    _unknown_ _t5686;
    _unknown_ _t5688;
    _unknown_ _t5690;
    _unknown_ _t5692;
    _unknown_ _t5694;
    _unknown_ _t5696;
    _unknown_ _t5698;
    _unknown_ _t5700;
    _unknown_ _t5702;
    _unknown_ _t5704;
    _unknown_ _t5706;
    _unknown_ _t5708;
    _unknown_ _t5710;
    _unknown_ _t5712;
    _unknown_ _t5714;
    _unknown_ _t5716;
    _unknown_ _t5718;
    _unknown_ _t5720;
    _unknown_ _t5722;
    _unknown_ _t5724;
    _unknown_ _t5728;
    _unknown_ _t5729;
    _unknown_ _t5730;
    _unknown_ _t5733;
    _unknown_ _t5734;
    _unknown_ _t5735;
    _unknown_ _t5739;
    _unknown_ _t5741;
    _unknown_ _t5742;
    _unknown_ _t5744;
    _unknown_ _t5746;
    _unknown_ _t5747;
    _unknown_ _t5749;
    _unknown_ _t5751;
    _unknown_ _t5752;
    _unknown_ _t5756;
    _unknown_ _t5757;
    _unknown_ _t5759;
    _unknown_ _t5760;
    _unknown_ _t5761;
    _unknown_ _t5763;
    _unknown_ _t5765;
    _unknown_ _t5767;
    _unknown_ _t5769;
    _unknown_ _t5771;
    _unknown_ _t5772;
    _unknown_ _t5774;
    _unknown_ _t5776;
    _unknown_ _t5777;
    _unknown_ _t5779;
    _unknown_ _t5781;
    _unknown_ _t5783;
    _unknown_ _t5785;
    _unknown_ _t5787;
    _unknown_ _t5788;
    _unknown_ _t5790;
    _unknown_ _t5792;
    _unknown_ _t5793;
    _unknown_ _t5795;
    _unknown_ _t5797;
    _unknown_ _t5799;
    _unknown_ _t5801;
    _unknown_ _t5803;
    _unknown_ _t5804;
    _unknown_ _t5809;
    _unknown_ _t5811;
    _unknown_ _t5812;
    _unknown_ _t5813;
    _unknown_ _t5815;
    _unknown_ _t5817;
    _unknown_ _t5819;
    _unknown_ _t5821;
    _unknown_ _t5823;
    _unknown_ _t5824;
    _unknown_ _t5826;
    _unknown_ _t5828;
    _unknown_ _t5829;
    _unknown_ _t5831;
    _unknown_ _t5833;
    _unknown_ _t5835;
    _unknown_ _t5837;
    _unknown_ _t5839;
    _unknown_ _t5840;
    _unknown_ _t5842;
    _unknown_ _t5844;
    _unknown_ _t5845;
    _unknown_ _t5847;
    _unknown_ _t5849;
    _unknown_ _t5851;
    _unknown_ _t5853;
    _unknown_ _t5855;
    _unknown_ _t5856;
    _unknown_ _t5861;
    _unknown_ _t5863;
    _unknown_ _t5864;
    _unknown_ _t5865;
    _unknown_ _t5867;
    _unknown_ _t5869;
    _unknown_ _t5871;
    _unknown_ _t5873;
    _unknown_ _t5875;
    _unknown_ _t5876;
    _unknown_ _t5878;
    _unknown_ _t5880;
    _unknown_ _t5881;
    _unknown_ _t5883;
    _unknown_ _t5885;
    _unknown_ _t5887;
    _unknown_ _t5889;
    _unknown_ _t5891;
    _unknown_ _t5892;
    _unknown_ _t5894;
    _unknown_ _t5896;
    _unknown_ _t5897;
    _unknown_ _t5899;
    _unknown_ _t5901;
    _unknown_ _t5903;
    _unknown_ _t5905;
    _unknown_ _t5907;
    _unknown_ _t5908;
    _unknown_ _t5913;
    _unknown_ _t5915;
    _unknown_ _t5917;
    _unknown_ _t5919;
    _unknown_ _t5921;
    _unknown_ _t5923;
    _unknown_ _t5924;
    _unknown_ _t5928;
    _unknown_ _t5930;
    _unknown_ _t5932;
    _unknown_ _t5934;
    _unknown_ _t5936;
    _unknown_ _t5938;
    _unknown_ _t5939;
    _unknown_ _t5945;
    _unknown_ _t5946;
    _unknown_ _t5947;
    _unknown_ _t5950;
    _unknown_ _t5951;
    _unknown_ _t5952;
    _unknown_ _t5966;
    _unknown_ _t5967;
    _unknown_ _t5968;
    _unknown_ _t5970;
    _unknown_ _t5971;
    _unknown_ _t5972;
    _unknown_ _t5974;
    _unknown_ _t5975;
    _unknown_ _t5976;
    _unknown_ _t5989;
    _unknown_ _t5993;
    _unknown_ _t5997;
    _unknown_ _t6001;
    _unknown_ _t6005;
    _unknown_ _t6009;
    _unknown_ _t6011;
    _unknown_ _t6013;
    _unknown_ _t6015;
    _unknown_ _t6017;
    _unknown_ _t6019;
    _unknown_ _t6020;
    _unknown_ _t6022;
    _unknown_ _t6024;
    _unknown_ _t6026;
    _unknown_ _t6028;
    _unknown_ _t6030;
    _unknown_ _t6031;
    _unknown_ _t6039;
    _unknown_ _t6041;
    _unknown_ _t6042;
    _unknown_ _t6043;
    _unknown_ _t6044;
    _unknown_ _t6045;
    _unknown_ _t6053;
    _unknown_ _t6057;
    _unknown_ _t6059;
    _unknown_ _t6061;
    _unknown_ _t6066;
    _unknown_ _t6067;
    signed int _t6068;
    _unknown_ _t6069;
    _unknown_ _t6070;
    _unknown_ _t6071;
    _unknown_ _t6072;
    signed int _t6074;
    _unknown_ _t6077;
    _unknown_ _t6078;
    signed int _t6079;
    _unknown_ _t6080;
    _unknown_ _t6081;
    signed int _t6082;
    _unknown_ _t6083;
    _unknown_ _t6084;
    signed int _t6085;
    _unknown_ _t6086;
    _unknown_ _t6087;
    signed int _t6088;
    _unknown_ _t6089;
    _unknown_ _t6090;
    _unknown_ _t6091;
    intOrPtr _t6092;
    _unknown_ _t6095;
    _unknown_ _t6096;
    _unknown_ _t6097;
    intOrPtr _t6098;
    _unknown_ _t6101;
    _unknown_ _t6102;
    _unknown_ _t6103;
    _unknown_ _t6104;
    _unknown_ _t6105;
    _unknown_ _t6106;
    _unknown_ _t6107;
    _unknown_ _t6108;
    _unknown_ _t6109;
    _unknown_ _t6110;
    _unknown_ _t6111;
    _unknown_ _t6112;
    _unknown_ _t6113;
    _unknown_ _t6114;
    _unknown_ _t6115;
    _unknown_ _t6116;
    _unknown_ _t6117;
    _unknown_ _t6118;
    signed int _t6121;
    _unknown_ _t6122;
    _unknown_ _t6123;
    _unknown_ _t6124;
    _unknown_ _t6125;
    _unknown_ _t6126;
    _unknown_ _t6129;
    _unknown_ _t6131;
    _unknown_ _t6132;
    _unknown_ _t6133;
    _unknown_ _t6134;
    _unknown_ _t6136;
    signed int _t6137;
    signed int _t6138;
    _unknown_ _t6145;
    _unknown_ _t6147;
    void* _t6153;
    void* _t6154;
    void* _t6155;
    void* _t6156;
    void* _t6157;
    _unknown_ _t6158;
    signed int _t6159;
    _unknown_ _t6162;
    _unknown_ _t6163;
    _unknown_ _t6164;
    _unknown_ _t6165;
    _unknown_ _t6172;
    _unknown_ _t6173;
    _unknown_ _t6174;
    _unknown_ _t6175;
    _unknown_ _t6178;
    _unknown_ _t6181;
    _unknown_ _t6187;
    _unknown_ _t6188;
    _unknown_ _t6189;
    _unknown_ _t6190;
    _unknown_ _t6193;
    _unknown_ _t6195;
    _unknown_ _t6196;

    _v120 =  *_a20;
    _t5576 = (_v120 << 3) + _v120;
    _t3567 = _t5576 >= 0 ? _t5576 : 0;
    _t5400 = _t5576 >= 0 ? _t5576 : 0;
    asm("shld edx, eax, 0x6");
    _v224 =  *_a28;
    _t3573 = _v224;
    _t5402 = _t3573 >= 0 ? _t3573 : 0;
    _v3276 = _t3573 >= 0 ? _t3573 : 0;
    _v220 =  *_a4;
    _t3577 = _v3276 * _v220;
    _t5332 = _t3577 >= 0 ? _t3577 : 0;
    _v3272 = _t3577 >= 0 ? _t3577 : 0;
    _v216 =  *_a12;
    _t3581 = _v3272 * _v216;
    _t3582 = _t3581 >= 0 ? 0 : _t3581;
    _t6141 = _t3581 >= 0 ? 0 : _t3581;
    _t6142 = (_t3581 >= 0 ? 0 : _t3581) & 255;
    _v3588 = (_t3581 >= 0 ? 0 : _t3581) & 255;
    _v3584 = 0;
    asm("shld edx, eax, 0x6");
    _v3596 = _v3588 << 6;
    _v3592 = _v3584 & 15;
    _v3484 =  !_v3276 - _v3272;
    _v136 =  *_a28;
    _t3590 = _v136;
    _t5406 = _t3590 >= 0 ? _t3590 : 0;
    _v3268 = _t3590 >= 0 ? _t3590 : 0;
    _v132 =  *_a28;
    _t3594 = _v3268 * _v132;
    _t5335 = _t3594 >= 0 ? _t3594 : 0;
    _v3264 = _t3594 >= 0 ? _t3594 : 0;
    _v128 =  *_a12;
    _t3598 = _v3264 * _v128;
    _t6146 = _t3598 >= 0 ? _t3598 : 0;
    _v3260 = _t3598 >= 0 ? _t3598 : 0;
    _t5592 = _v3260 + _v3260 + _v3260;
    _t5408 = _t5592 >= 0 ? _t5592 : 0;
    _v3256 = _t5592 >= 0 ? _t5592 : 0;
    _v124 =  *_a4;
    _t3605 = _v3256 * _v124;
    _t3606 = _t3605 >= 0 ? 0 : _t3605;
    _t5336 = _t3605 >= 0 ? 0 : _t3605;
    _v3604 = _t3605 >= 0 ? 0 : _t3605;
    _v3600 = 0;
    asm("shld edx, eax, 0x7");
    _v3612 = _v3604 << 7;
    _v3608 = _v3600 & 15;
    _v3480 =  !_v3268 - _v3264 - _v3260 - _v3256;
    _v80 =  *_a12;
    _t3616 = _v80;
    _t3617 = _t3616 >= 0 ? 0 : _t3616;
    _t5410 = _t3616 >= 0 ? 0 : _t3616;
    _v3620 = _t3616 >= 0 ? 0 : _t3616;
    _v3616 = 0;
    asm("shld edx, eax, 0x6");
    _v3628 = _v3620 << 6 & 255;
    _v3624 = _v3616 & 15;
    _v820 = 0;
    _v2152 = 0;
    _v2176 = 0;
    _v2200 = 0;
    _v2224 = 0;
    _v2380 = 0;
    _v2452 = 0;
    _v2524 = 0;
    _v2560 = 0;
    _v2608 = 0;
    asm("fldz ");
    asm("fstp qword [ebp+0xfffff598]");
    asm("fld1 ");
    asm("fstp qword [ebp+0xfffff5a0]");
    asm("fld qword [eax]");
    asm("fldz ");
    asm("fld qword [ebp+0xfffff598]");
    asm("fld qword [ebp+0xfffff5a0]");
    asm("fld st0, st3");
    asm("fmul st0, st2");
    asm("fld st0, st3");
    asm("fmul st0, st2");
    asm("fxch st0, st2");
    asm("fmulp st5, st0");
    asm("fxch st0, st2");
    asm("fmulp st3, st0");
    asm("fsubp st1, st0");
    asm("fxch st0, st1");
    asm("faddp st2, st0");
    asm("fstp qword [ebp+0xfffff7b8]");
    asm("fstp qword [ebp+0xfffff7c0]");
    asm("fld qword [eax]");
    _v3248 =  *_a20;
    asm("fild dword [ebp+0xfffff354]");
    asm("fmulp st1, st0");
    asm("fld qword [0x8071f68]");
    asm("fdivrp st1, st0");
    asm("fstp qword [ebp+0xfffffed0]");
    asm("fld qword [0x8071f70]");
    asm("fstp qword [ebp+0xfffffec0]");
    asm("fld qword [ebp+0xfffffed0]");
    asm("fmul qword [ebp+0xfffffec0]");
    asm("fstp qword [ebp+0xfffffec8]");
    asm("fld qword [0x8071f78]");
    asm("fstp qword [ebp+0xffffff30]");
    _v3680 = _a76;
    _v3684 = 256;
    _v3688 =  &_v2676;
     *__esp =  &_v2672;
    _gfortran_string_trim();
    _t3629 = _v2672 + 13 << 5;
    if(_t3629 < 0) {
         *__esp = "Attempt to allocate a negative amount of memory.";
        _gfortran_runtime_error();
    }
    _t3630 = _t3629 <= 0 ? 1 : _t3629;
    _t3631 = malloc(_t3629 <= 0 ? 1 : _t3629);
    if(_t3631 == 0) {
         *__esp = "Memory allocation failed";
        _gfortran_os_error();
    }
    _t6153 = _t3631;
    _v3672 = "-ChiTotIm.out-ChiTotRe.out-ChiIm.out-ChiRe.out-ChiAbs.outnlinopt.F90";
    _v3676 = 13;
    _v3680 = _v2676;
    _v3684 = _v2672;
    _v3688 = _t6153;
     *__esp = _v2672 + 13;
    _gfortran_concat_string();
    if(_v2672 > 0) {
        _t5327 = _v2676;
        if(_v2676 != 0) {
            free(_t5327);
        }
    }
    _t5341 = _v2672 + 13;
    if(_v2672 + 13 <= 255) {
        memmove( &_v1084, _t6153, _t5341);
        memset( &_v1084 + _t5341, 32, 256 - _t5341);
    } else {
        memmove( &_v1084, _t6153, 256);
    }
    _t3641 = _t6153;
    if(_t6153 != 0) {
        free(_t3641);
    }
    _v3680 = _a76;
    _v3684 = 256;
    _v3688 =  &_v2684;
     *__esp =  &_v2680;
    _gfortran_string_trim();
    _t3646 = _v2680 + 13 << 5;
    if(_t3646 < 0) {
         *__esp = "Attempt to allocate a negative amount of memory.";
        _gfortran_runtime_error();
    }
    _t3647 = _t3646 <= 0 ? 1 : _t3646;
    _t3648 = malloc(_t3646 <= 0 ? 1 : _t3646);
    if(_t3648 == 0) {
         *__esp = "Memory allocation failed";
        _gfortran_os_error();
    }
    _t6154 = _t3648;
    _v3672 = "-ChiTotRe.out-ChiIm.out-ChiRe.out-ChiAbs.outnlinopt.F90";
    _v3676 = 13;
    _v3680 = _v2684;
    _v3684 = _v2680;
    _v3688 = _t6154;
     *__esp = _v2680 + 13;
    _gfortran_concat_string();
    if(_v2680 > 0) {
        _t5322 = _v2684;
        if(_v2684 != 0) {
            free(_t5322);
        }
    }
    _t5342 = _v2680 + 13;
    if(_v2680 + 13 <= 255) {
        memmove( &_v1340, _t6154, _t5342);
        memset( &_v1340 + _t5342, 32, 256 - _t5342);
    } else {
        memmove( &_v1340, _t6154, 256);
    }
    _t3658 = _t6154;
    if(_t6154 != 0) {
        free(_t3658);
    }
    _v3680 = _a76;
    _v3684 = 256;
    _v3688 =  &_v2692;
     *__esp =  &_v2688;
    _gfortran_string_trim();
    _t3663 = _v2688 + 10 << 5;
    if(_t3663 < 0) {
         *__esp = "Attempt to allocate a negative amount of memory.";
        _gfortran_runtime_error();
    }
    _t3664 = _t3663 <= 0 ? 1 : _t3663;
    _t3665 = malloc(_t3663 <= 0 ? 1 : _t3663);
    if(_t3665 == 0) {
         *__esp = "Memory allocation failed";
        _gfortran_os_error();
    }
    _t6155 = _t3665;
    _v3672 = "-ChiIm.out-ChiRe.out-ChiAbs.outnlinopt.F90";
    _v3676 = 10;
    _v3680 = _v2692;
    _v3684 = _v2688;
    _v3688 = _t6155;
     *__esp = _v2688 + 10;
    _gfortran_concat_string();
    if(_v2688 > 0) {
        _t5317 = _v2692;
        if(_v2692 != 0) {
            free(_t5317);
        }
    }
    _t5343 = _v2688 + 10;
    if(_v2688 + 10 <= 255) {
        memmove( &_v1596, _t6155, _t5343);
        memset( &_v1596 + _t5343, 32, 256 - _t5343);
    } else {
        memmove( &_v1596, _t6155, 256);
    }
    _t3675 = _t6155;
    if(_t6155 != 0) {
        free(_t3675);
    }
    _v3680 = _a76;
    _v3684 = 256;
    _v3688 =  &_v2700;
     *__esp =  &_v2696;
    _gfortran_string_trim();
    _t3680 = _v2696 + 10 << 5;
    if(_t3680 < 0) {
         *__esp = "Attempt to allocate a negative amount of memory.";
        _gfortran_runtime_error();
    }
    _t3681 = _t3680 <= 0 ? 1 : _t3680;
    _t3682 = malloc(_t3680 <= 0 ? 1 : _t3680);
    if(_t3682 == 0) {
         *__esp = "Memory allocation failed";
        _gfortran_os_error();
    }
    _t6156 = _t3682;
    _v3672 = "-ChiRe.out-ChiAbs.outnlinopt.F90";
    _v3676 = 10;
    _v3680 = _v2700;
    _v3684 = _v2696;
    _v3688 = _t6156;
     *__esp = _v2696 + 10;
    _gfortran_concat_string();
    if(_v2696 > 0) {
        _t5312 = _v2700;
        if(_v2700 != 0) {
            free(_t5312);
        }
    }
    _t5344 = _v2696 + 10;
    if(_v2696 + 10 <= 255) {
        memmove( &_v1852, _t6156, _t5344);
        memset( &_v1852 + _t5344, 32, 256 - _t5344);
    } else {
        memmove( &_v1852, _t6156, 256);
    }
    _t3692 = _t6156;
    if(_t6156 != 0) {
        free(_t3692);
    }
    _v3680 = _a76;
    _v3684 = 256;
    _v3688 =  &_v2708;
     *__esp =  &_v2704;
    _gfortran_string_trim();
    _t3697 = _v2704 + 11 << 5;
    if(_t3697 < 0) {
         *__esp = "Attempt to allocate a negative amount of memory.";
        _gfortran_runtime_error();
    }
    _t3698 = _t3697 <= 0 ? 1 : _t3697;
    _t3699 = malloc(_t3697 <= 0 ? 1 : _t3697);
    if(_t3699 == 0) {
         *__esp = "Memory allocation failed";
        _gfortran_os_error();
    }
    _t6157 = _t3699;
    _v3672 = "-ChiAbs.outnlinopt.F90";
    _v3676 = 11;
    _v3680 = _v2708;
    _v3684 = _v2704;
    _v3688 = _t6157;
     *__esp = _v2704 + 11;
    _gfortran_concat_string();
    if(_v2704 > 0) {
        _t5307 = _v2708;
        if(_v2708 != 0) {
            free(_t5307);
        }
    }
    _t5345 = _v2704 + 11;
    if(_v2704 + 11 <= 255) {
        memmove( &_v2108, _t6157, _t5345);
        memset( &_v2108 + _t5345, 32, 256 - _t5345);
    } else {
        memmove( &_v2108, _t6157, 256);
    }
    _t3709 = _t6157;
    if(_t6157 != 0) {
        free(_t3709);
    }
    asm("fld qword [0x8071f80]");
    asm("fstp qword [ebp-0x58]");
    _v164 = 1;
    if(_v164 >  *_a20) {
L74:
        if( *_a44 <= 0 ||  *_a48 <= 0 ||  *_a52 <= 0 ||  *_a44 > 3 ||  *_a48 > 3 ||  *_a52 > 3) {
            _v3224 = "nlinopt.F90";
            _v3220 = 186;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "---------------------------------------------";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 187;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "    Error in nlinopt:                        ";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 188;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "    the polarisation directions incorrect    ";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 189;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "    1=x,  2=y  and 3=z                       ";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 190;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "---------------------------------------------";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
             *__esp = -1;
            _gfortran_stop_numeric();
        }
        if( *_a56 <= 0) {
            _v3224 = "nlinopt.F90";
            _v3220 = 195;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "---------------------------------------------";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 196;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "    Error in nlinopt:                        ";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 197;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "    number of energy mesh points incorrect   ";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 198;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "    number has to integer greater than 0     ";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 199;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "    nmesh*de = max energy for calculation    ";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 200;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "---------------------------------------------";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
             *__esp = -1;
            _gfortran_stop_numeric();
        }
        asm("fld qword [eax]");
        asm("fldz ");
        asm("fucomip st0, st1");
        asm("fstp st0");
        asm("setnb al");
        if((_a60 & 4294967295 & ) != 0) {
            _v3224 = "nlinopt.F90";
            _v3220 = 205;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "---------------------------------------------";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 206;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "    Error in nlinopt:                        ";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 207;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "    energy step is incorrect                 ";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 208;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "    number has to real greater than 0.0      ";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 209;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "    nmesh*de = max energy for calculation    ";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 210;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "---------------------------------------------";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
             *__esp = -1;
            _gfortran_stop_numeric();
        }
        asm("fld qword [eax]");
        asm("fldz ");
        asm("fucomip st0, st1");
        asm("fstp st0");
        if((_a64 & 4294967295 & ) != 0) {
            _v3224 = "nlinopt.F90";
            _v3220 = 215;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "---------------------------------------------";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 216;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "    Error in nlinopt:                        ";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 217;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "    scissors shift is incorrect              ";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 218;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "    number has to real greater than 0.0      ";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 219;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "---------------------------------------------";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
             *__esp = -1;
            _gfortran_stop_numeric();
        }
        asm("fld qword [eax]");
        asm("fld qword [0x8071f88]");
        asm("fxch st0, st1");
        asm("fucomip st0, st1");
        asm("fstp st0");
        if((_a68 & 4294967295 & ) == 0) {
            asm("fld qword [eax]");
            asm("fld qword [0x8071f90]");
            asm("fxch st0, st1");
            asm("fucomip st0, st1");
            asm("fstp st0");
            if((_a68 & 4294967295 & ) != 0) {
                _v3224 = "nlinopt.F90";
                _v3220 = 229;
                _v3232 = 128;
                _v3228 = 6;
                 *__esp =  &_v3232;
                _gfortran_st_write();
                _v3684 = 40;
                _v3688 = "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow";
                 *__esp =  &_v3232;
                _gfortran_transfer_character();
                 *__esp =  &_v3232;
                _gfortran_st_write_done();
                _v3224 = "nlinopt.F90";
                _v3220 = 230;
                _v3232 = 128;
                _v3228 = 6;
                 *__esp =  &_v3232;
                _gfortran_st_write();
                _v3684 = 40;
                _v3688 = "    ATTENTION: broadening is too high       ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow";
                 *__esp =  &_v3232;
                _gfortran_transfer_character();
                 *__esp =  &_v3232;
                _gfortran_st_write_done();
                _v3224 = "nlinopt.F90";
                _v3220 = 231;
                _v3232 = 128;
                _v3228 = 6;
                 *__esp =  &_v3232;
                _gfortran_st_write();
                _v3684 = 40;
                _v3688 = "    ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow";
                 *__esp =  &_v3232;
                _gfortran_transfer_character();
                 *__esp =  &_v3232;
                _gfortran_st_write_done();
                _v3224 = "nlinopt.F90";
                _v3220 = 232;
                _v3232 = 128;
                _v3228 = 6;
                 *__esp =  &_v3232;
                _gfortran_st_write();
                _v3684 = 40;
                _v3688 = "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow";
                 *__esp =  &_v3232;
                _gfortran_transfer_character();
                 *__esp =  &_v3232;
                _gfortran_st_write_done();
            }
        } else {
            _v3224 = "nlinopt.F90";
            _v3220 = 224;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "---------------------------------------------";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 225;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "    ATTENTION: broadening is quite high      ";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 226;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "    ideally should be less than 0.005        ";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 227;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 45;
            _v3688 = "---------------------------------------------";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
        }
        asm("fld qword [eax]");
        asm("fld qword [0x8071f98]");
        asm("fxch st0, st1");
        asm("fucomip st0, st1");
        asm("fstp st0");
        if((_a72 & 4294967295 & ) != 0) {
            _v3224 = "nlinopt.F90";
            _v3220 = 236;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 40;
            _v3688 = "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 237;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 40;
            _v3688 = "    ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 238;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 40;
            _v3688 = "    ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
            _v3224 = "nlinopt.F90";
            _v3220 = 239;
            _v3232 = 128;
            _v3228 = 6;
             *__esp =  &_v3232;
            _gfortran_st_write();
            _v3684 = 40;
            _v3688 = "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow";
             *__esp =  &_v3232;
            _gfortran_transfer_character();
             *__esp =  &_v3232;
            _gfortran_st_write_done();
        }
        _v2372 = 1061;
        _v2364 = 1;
        _v2360 =  *_a28;
        _v2368 = 1;
        _t6159 =  *_a28 >= 0 ?  *_a28 : 0;
        _v2352 = 1;
        _v2348 =  *_a28;
        _v2356 = _t6159;
        _t3747 =  *_a28;
        _t3748 = _t3747 >= 0 ? 0 : _t3747;
        _t5346 = _t3747 >= 0 ? 0 : _t3747;
        _t5347 = (_t3747 >= 0 ? 0 : _t3747) * _t6159;
        _v2340 = 1;
        _v2336 = 3;
        _v2344 = _t5347;
        _t5429 = _t5347 + _t5347 + _t5347;
        _v2328 = 1;
        _v2324 = 3;
        _v2332 = _t5429;
        _t5628 = _t5429 + _t5429 + _t5429;
        _v2316 = 1;
        _v2312 = 3;
        _v2320 = _t5628;
        _t6121 = _t5628 + _t5628 + _t5628;
        _t5349 =  !_t6159 - _t5347 - _t5429 - _t5628;
        if(( *_a28 & 4294967295 &  |  *_a28 & 4294967295 & ) == 0) {
            _t5631 = _t6121 << 4;
        } else {
            _t5631 = 0;
        }
        if(_v2380 != 0) {
            _v3684 = "px";
            _v3688 = "Attempting to allocate already allocated array '%s'";
             *__esp = "At line 245 of file nlinopt.F90";
            _gfortran_runtime_error_at();
        } else {
            _t5129 = _t5631;
            if(_t5129 < 0) {
                 *__esp = "Attempt to allocate negative amount of memory. Possible integer overflow";
                _gfortran_runtime_error();
            }
            _t5130 = _t5129 <= 0 ? 1 : _t5129;
            _t5131 = malloc(_t5129 <= 0 ? 1 : _t5129);
            if(_t5131 == 0) {
                 *__esp = "Out of memory";
                _gfortran_os_error();
            }
            _v2380 = _t5131;
            _v2376 = _t5349;
            _v2444 = 1061;
            _v2436 = 1;
            _v2432 =  *_a28;
            _v2440 = 1;
            _t6159 =  *_a28 >= 0 ?  *_a28 : 0;
            _v2424 = 1;
            _v2420 =  *_a28;
            _v2428 = _t6159;
            _t5139 =  *_a28;
            _t5140 = _t5139 >= 0 ? 0 : _t5139;
            _t5397 = _t5139 >= 0 ? 0 : _t5139;
            _t5398 = (_t5139 >= 0 ? 0 : _t5139) * _t6159;
            _v2412 = 1;
            _v2408 = 3;
            _v2416 = _t5398;
            _t5574 = _t5398 + _t5398 + _t5398;
            _v2400 = 1;
            _v2396 = 3;
            _v2404 = _t5574;
            _t6098 = _t5574 + _t5574 + _t5574;
            _v2388 = 1;
            _v2384 = 3;
            _v2392 = _t6098;
            _t6138 = _t6098 + _t6098 + _t6098;
            _t5349 =  !_t6159 - _t5398 - _t5574 - _t6098;
            if(( *_a28 & 4294967295 &  |  *_a28 & 4294967295 & ) != 0) {
                goto L104;
            }
            _t5632 = _t6138 << 4;
L106:
            if(_v2452 != 0) {
                _v3684 = "py";
                _v3688 = "Attempting to allocate already allocated array '%s'";
                 *__esp = "At line 246 of file nlinopt.F90";
                _gfortran_runtime_error_at();
                goto L114;
            }
            _t5101 = _t5632;
            if(_t5101 < 0) {
                 *__esp = "Attempt to allocate negative amount of memory. Possible integer overflow";
                _gfortran_runtime_error();
            }
            _t5102 = _t5101 <= 0 ? 1 : _t5101;
            _t5103 = malloc(_t5101 <= 0 ? 1 : _t5101);
            if(_t5103 == 0) {
                 *__esp = "Out of memory";
                _gfortran_os_error();
            }
            _v2452 = _t5103;
            _v2448 = _t5349;
            _v2516 = 1061;
            _v2508 = 1;
            _v2504 =  *_a28;
            _v2512 = 1;
            _t6159 =  *_a28 >= 0 ?  *_a28 : 0;
            _v2496 = 1;
            _v2492 =  *_a28;
            _v2500 = _t6159;
            _t5111 =  *_a28;
            _t5112 = _t5111 >= 0 ? 0 : _t5111;
            _t5394 = _t5111 >= 0 ? 0 : _t5111;
            _t5395 = (_t5111 >= 0 ? 0 : _t5111) * _t6159;
            _v2484 = 1;
            _v2480 = 3;
            _v2488 = _t5395;
            _t5573 = _t5395 + _t5395 + _t5395;
            _v2472 = 1;
            _v2468 = 3;
            _v2476 = _t5573;
            _t6092 = _t5573 + _t5573 + _t5573;
            _v2460 = 1;
            _v2456 = 3;
            _v2464 = _t6092;
            _t6137 = _t6092 + _t6092 + _t6092;
            _t5349 =  !_t6159 - _t5395 - _t5573 - _t6092;
            if(( *_a28 & 4294967295 &  |  *_a28 & 4294967295 & ) != 0) {
                goto L114;
            }
            _t5633 = _t6137 << 4;
L116:
            if(_v2524 != 0) {
                _v3684 = "pz";
                _v3688 = "Attempting to allocate already allocated array '%s'";
                 *__esp = "At line 247 of file nlinopt.F90";
                _gfortran_runtime_error_at();
                goto L124;
            }
            _t5091 = _t5633;
            if(_t5091 < 0) {
                 *__esp = "Attempt to allocate negative amount of memory. Possible integer overflow";
                _gfortran_runtime_error();
            }
            _t5092 = _t5091 <= 0 ? 1 : _t5091;
            _t5093 = malloc(_t5091 <= 0 ? 1 : _t5091);
            if(_t5093 == 0) {
                 *__esp = "Out of memory";
                _gfortran_os_error();
            }
            _v2524 = _t5093;
            _v2520 = _t5349;
            _v2168 = 1057;
            _v2160 = 1;
            _v2156 =  *_a56;
            _v2164 = 1;
            _t6088 =  *_a56 >= 0 ?  *_a56 : 0;
            if(( *_a56 & 4294967295 & ) != 0) {
                goto L124;
            }
            _t5634 = _t6088 << 4;
L126:
            if(_v2176 != 0) {
                _v3684 = "inter2w";
                _v3688 = "Attempting to allocate already allocated array '%s'";
                 *__esp = "At line 248 of file nlinopt.F90";
                _gfortran_runtime_error_at();
                goto L134;
            }
            _t5081 = _t5634;
            if(_t5081 < 0) {
                 *__esp = "Attempt to allocate negative amount of memory. Possible integer overflow";
                _gfortran_runtime_error();
            }
            _t5082 = _t5081 <= 0 ? 1 : _t5081;
            _t5083 = malloc(_t5081 <= 0 ? 1 : _t5081);
            if(_t5083 == 0) {
                 *__esp = "Out of memory";
                _gfortran_os_error();
            }
            _v2176 = _t5083;
            _v2172 = -1;
            _v2144 = 1057;
            _v2136 = 1;
            _v2132 =  *_a56;
            _v2140 = 1;
            _t6085 =  *_a56 >= 0 ?  *_a56 : 0;
            if(( *_a56 & 4294967295 & ) != 0) {
                goto L134;
            }
            _t5635 = _t6085 << 4;
L136:
            if(_v2152 != 0) {
                _v3684 = "inter1w";
                _v3688 = "Attempting to allocate already allocated array '%s'";
                 *__esp = "At line 249 of file nlinopt.F90";
                _gfortran_runtime_error_at();
                goto L144;
            }
            _t5071 = _t5635;
            if(_t5071 < 0) {
                 *__esp = "Attempt to allocate negative amount of memory. Possible integer overflow";
                _gfortran_runtime_error();
            }
            _t5072 = _t5071 <= 0 ? 1 : _t5071;
            _t5073 = malloc(_t5071 <= 0 ? 1 : _t5071);
            if(_t5073 == 0) {
                 *__esp = "Out of memory";
                _gfortran_os_error();
            }
            _v2152 = _t5073;
            _v2148 = -1;
            _v2216 = 1057;
            _v2208 = 1;
            _v2204 =  *_a56;
            _v2212 = 1;
            _t6082 =  *_a56 >= 0 ?  *_a56 : 0;
            if(( *_a56 & 4294967295 & ) != 0) {
                goto L144;
            }
            _t5636 = _t6082 << 4;
L146:
            if(_v2224 != 0) {
                _v3684 = "intra2w";
                _v3688 = "Attempting to allocate already allocated array '%s'";
                 *__esp = "At line 250 of file nlinopt.F90";
                _gfortran_runtime_error_at();
                goto L154;
            }
            _t5061 = _t5636;
            if(_t5061 < 0) {
                 *__esp = "Attempt to allocate negative amount of memory. Possible integer overflow";
                _gfortran_runtime_error();
            }
            _t5062 = _t5061 <= 0 ? 1 : _t5061;
            _t5063 = malloc(_t5061 <= 0 ? 1 : _t5061);
            if(_t5063 == 0) {
                 *__esp = "Out of memory";
                _gfortran_os_error();
            }
            _v2224 = _t5063;
            _v2220 = -1;
            _v2192 = 1057;
            _v2184 = 1;
            _v2180 =  *_a56;
            _v2188 = 1;
            _t6079 =  *_a56 >= 0 ?  *_a56 : 0;
            if(( *_a56 & 4294967295 & ) != 0) {
                goto L154;
            }
            _t5637 = _t6079 << 4;
L156:
            if(_v2200 != 0) {
                _v3684 = "intra1w";
                _v3688 = "Attempting to allocate already allocated array '%s'";
                 *__esp = "At line 251 of file nlinopt.F90";
                _gfortran_runtime_error_at();
                goto L164;
            }
            _t5039 = _t5637;
            if(_t5039 < 0) {
                 *__esp = "Attempt to allocate negative amount of memory. Possible integer overflow";
                _gfortran_runtime_error();
            }
            _t5040 = _t5039 <= 0 ? 1 : _t5039;
            _t5041 = malloc(_t5039 <= 0 ? 1 : _t5039);
            if(_t5041 == 0) {
                 *__esp = "Out of memory";
                _gfortran_os_error();
            }
            _v2200 = _t5041;
            _v2196 = -1;
            _v812 = 1059;
            _v804 = 1;
            _v800 =  *_a28;
            _v808 = 1;
            _t5572 =  *_a28 >= 0 ?  *_a28 : 0;
            _v792 = 1;
            _v788 =  *_a28;
            _v796 = _t5572;
            _t5049 =  *_a28;
            _t5050 = _t5049 >= 0 ? 0 : _t5049;
            _t6073 = _t5049 >= 0 ? 0 : _t5049;
            _t6074 = (_t5049 >= 0 ? 0 : _t5049) * _t5572;
            _v780 = 1;
            _v776 = 3;
            _v784 = _t6074;
            _t5349 = _t6074 + _t6074 + _t6074;
            _t6159 =  !_t5572 - _t6074;
            if(( *_a28 & 4294967295 &  |  *_a28 & 4294967295 & ) != 0) {
                goto L164;
            }
            _t5638 = _t5349 << 4;
L166:
            if(_v820 != 0) {
                _v3684 = "delta";
                _v3688 = "Attempting to allocate already allocated array '%s'";
                 *__esp = "At line 252 of file nlinopt.F90";
                _gfortran_runtime_error_at();
                goto L174;
            }
            _t5035 = _t5638;
            if(_t5035 < 0) {
                 *__esp = "Attempt to allocate negative amount of memory. Possible integer overflow";
                _gfortran_runtime_error();
            }
            _t5036 = _t5035 <= 0 ? 1 : _t5035;
            _t5037 = malloc(_t5035 <= 0 ? 1 : _t5035);
            if(_t5037 == 0) {
                 *__esp = "Out of memory";
                _gfortran_os_error();
            }
            _v820 = _t5037;
            _v816 = _t6159;
            _v2600 = 539;
            _v2592 = 1;
            _v2588 = 3;
            _v2596 = 1;
            _v2580 = 1;
            _v2576 = 3;
            _v2584 = 3;
            _v2568 = 1;
            _v2564 = 3;
            _v2572 = 9;
            if(_v2608 == 0) {
                goto L174;
            }
            _v3684 = "sym";
            _v3688 = "Attempting to allocate already allocated array '%s'";
             *__esp = "At line 253 of file nlinopt.F90";
            _gfortran_runtime_error_at();
L179:
            _t3775 = malloc(72);
            if(_t3775 == 0) {
                 *__esp = "Out of memory";
                _gfortran_os_error();
            }
            _v2560 = _t3775;
            _v2556 = -4;
            _v3452 = _v2608;
            _v3456 = _v2604;
            _v3460 = _v2592;
            _v3464 = _v2588;
            _v3468 = _v2580;
            _v3472 = _v2576;
            _v3476 = _v2564;
            _v3448 = _v2596;
            _t5349 = _v2568;
L183:
            while(_t5349 <= _v3476) {
                _t6136 = _v2572 * _t5349 + _v3456;
                _t5570 = _v3468;
                while(_t5570 <= _v3472) {
                    _v3648 = _v2584 * _t5570 + _t6136;
                    _t6068 = _v3460;
                    while(_t6068 <= _v3464) {
                        _v3632 = _v3648 + _v3448 * _t6068;
                        asm("fldz ");
                        asm("fstp qword [esi+eax*8]");
                        _t6068 = _t6068 + 1;
                    }
                }
            }
L174:
            _t3773 = malloc(216);
            if(_t3773 == 0) {
                 *__esp = "Out of memory";
                _gfortran_os_error();
            }
            _v2608 = _t3773;
            _v2604 = -13;
            _v2552 = 538;
            _v2544 = 1;
            _v2540 = 3;
            _v2548 = 1;
            _v2532 = 1;
            _v2528 = 3;
            _v2536 = 3;
            if(_v2560 == 0) {
                goto L179;
            } else {
                _v3684 = "s";
                _v3688 = "Attempting to allocate already allocated array '%s'";
                 *__esp = "At line 254 of file nlinopt.F90";
                _gfortran_runtime_error_at();
                goto L183;
            }
L164:
            _t5638 = 0;
            goto L166;
L154:
            _t5637 = 0;
            goto L156;
L144:
            _t5636 = 0;
            goto L146;
L134:
            _t5635 = 0;
            goto L136;
L124:
            _t5634 = 0;
            goto L126;
L114:
            _t5633 = 0;
            goto L116;
        }
L104:
        _t5632 = 0;
        goto L106;
    }
    while(1) {
        asm("fld qword [eax+edx*8]");
        asm("fld1 ");
        asm("faddp st1, st0");
        asm("fstp qword [ebp-0x70]");
        asm("fld qword [eax+edx*8]");
        asm("fld1 ");
        asm("faddp st1, st0");
        asm("fstp qword [ebp-0x68]");
        asm("fld qword [eax+edx*8]");
        asm("fld1 ");
        asm("faddp st1, st0");
        asm("fstp qword [ebp-0x60]");
        asm("fld qword [ebp-0x70]");
        asm("fabs ");
        asm("fld qword [ebp-0x58]");
        asm("fucomip st0, st1");
        asm("fstp st0");
        _t5266 = _a24 & 4294967295 & ;
        if(_t5266 != 0) {
            asm("fld qword [ebp-0x68]");
            asm("fabs ");
            asm("fld qword [ebp-0x58]");
            asm("fucomip st0, st1");
            asm("fstp st0");
            _t5266 = _t5266 & 4294967295 & ;
            if(_t5266 != 0) {
                asm("fld qword [ebp-0x60]");
                asm("fabs ");
                asm("fld qword [ebp-0x58]");
                asm("fucomip st0, st1");
                asm("fstp st0");
                _t5266 = _t5266 & 4294967295 & ;
                if(_t5266 != 0) {
                    asm("fld qword [eax+edx*8]");
                    asm("fabs ");
                    asm("fld qword [ebp-0x58]");
                    asm("fucomip st0, st1");
                    asm("fstp st0");
                    _t5266 = _a24 & 4294967295 & ;
                    if(_t5266 != 0) {
                        asm("fld qword [eax+edx*8]");
                        asm("fabs ");
                        asm("fld qword [ebp-0x58]");
                        asm("fucomip st0, st1");
                        asm("fstp st0");
                        _t5266 = _a24 & 4294967295 & ;
                        if(_t5266 != 0) {
                            asm("fld qword [eax+edx*8]");
                            asm("fabs ");
                            asm("fld qword [ebp-0x58]");
                            asm("fucomip st0, st1");
                            asm("fstp st0");
                            _t5266 = _a24 & 4294967295 & ;
                            if(_t5266 != 0) {
                                asm("fld qword [eax+edx*8]");
                                asm("fabs ");
                                asm("fld qword [ebp-0x58]");
                                asm("fucomip st0, st1");
                                asm("fstp st0");
                                _t5266 = _a24 & 4294967295 & ;
                                if(_t5266 != 0) {
                                    asm("fld qword [eax+edx*8]");
                                    asm("fabs ");
                                    asm("fld qword [ebp-0x58]");
                                    asm("fucomip st0, st1");
                                    asm("fstp st0");
                                    _t5266 = _a24 & 4294967295 & ;
                                    if(_t5266 != 0) {
                                        asm("fld qword [eax+edx*8]");
                                        asm("fabs ");
                                        asm("fld qword [ebp-0x58]");
                                        asm("fucomip st0, st1");
                                        asm("fstp st0");
                                        _t5266 = _a24 & 4294967295 & ;
                                        if(_t5266 != 0) {
                                            _v3224 = "nlinopt.F90";
                                            _v3220 = 176;
                                            _v3232 = 128;
                                            _v3228 = 6;
                                             *__esp =  &_v3232;
                                            _gfortran_st_write();
                                            _v3684 = 41;
                                            _v3688 = "-----------------------------------------";
                                             *__esp =  &_v3232;
                                            _gfortran_transfer_character();
                                             *__esp =  &_v3232;
                                            _gfortran_st_write_done();
                                            _v3224 = "nlinopt.F90";
                                            _v3220 = 177;
                                            _v3232 = 128;
                                            _v3228 = 6;
                                             *__esp =  &_v3232;
                                            _gfortran_st_write();
                                            _v3684 = 41;
                                            _v3688 = "    the crystal has inversion symmetry   ";
                                             *__esp =  &_v3232;
                                            _gfortran_transfer_character();
                                             *__esp =  &_v3232;
                                            _gfortran_st_write_done();
                                            _v3224 = "nlinopt.F90";
                                            _v3220 = 178;
                                            _v3232 = 128;
                                            _v3228 = 6;
                                             *__esp =  &_v3232;
                                            _gfortran_st_write();
                                            _v3684 = 41;
                                            _v3688 = "    the SHG sussceptibility is zero      ";
                                             *__esp =  &_v3232;
                                            _gfortran_transfer_character();
                                             *__esp =  &_v3232;
                                            _gfortran_st_write_done();
                                            _v3224 = "nlinopt.F90";
                                            _v3220 = 179;
                                            _v3232 = 128;
                                            _v3228 = 6;
                                             *__esp =  &_v3232;
                                            _gfortran_st_write();
                                            _v3684 = 41;
                                            _v3688 = "-----------------------------------------";
                                             *__esp =  &_v3232;
                                            _gfortran_transfer_character();
                                            _t5266 =  &_v3232;
                                             *__esp = _t5266;
                                            _gfortran_st_write_done();
                                             *__esp = -1;
                                            _gfortran_stop_numeric();
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        _v164 = _v164 + 1;
        if((_t5266 & 4294967295 & ) != 0) {
            break;
        }
    }
    goto L74;
}

L0805ACD4(intOrPtr _a4)
{
    intOrPtr _v16;
    intOrPtr _v36;
    char* _v40;
    _unknown_ __ebp;
    _unknown_ _t270;
    _unknown_ _t276;
    _unknown_ _t282;
    _unknown_ _t288;
    _unknown_ _t294;
    _unknown_ _t300;
    _unknown_ _t306;
    _unknown_ _t312;
    _unknown_ _t318;
    _unknown_ _t324;
    _unknown_ _t330;
    _unknown_ _t336;
    _unknown_ _t342;
    _unknown_ _t348;
    _unknown_ _t354;
    _unknown_ _t360;
    _unknown_ _t366;
    _unknown_ _t372;
    _unknown_ _t378;
    _unknown_ _t384;
    _unknown_ _t390;
    _unknown_ _t399;
    _unknown_ _t425;
    _unknown_ _t461;
    _unknown_ _t497;
    _unknown_ _t508;

    if( *(_a4 + 76) == 0) {
        _v36 = 134684640;
        _v40 = "Attempt to DEALLOCATE unallocated '%s'";
         *__esp = "At line 59 of file hdr_clean.F90";
        _gfortran_runtime_error_at();
    }
    free( *(_a4 + 76));
     *(_a4 + 76) = 0;
    if( *(_a4 + 564) == 0) {
        _v36 = 134684640;
        _v40 = "Attempt to DEALLOCATE unallocated '%s'";
         *__esp = "At line 60 of file hdr_clean.F90";
        _gfortran_runtime_error_at();
    }
    free( *(_a4 + 564));
     *(_a4 + 564) = 0;
    if( *(_a4 + 100) == 0) {
        _v36 = 134684640;
        _v40 = "Attempt to DEALLOCATE unallocated '%s'";
         *__esp = "At line 61 of file hdr_clean.F90";
        _gfortran_runtime_error_at();
    }
    free( *(_a4 + 100));
     *(_a4 + 100) = 0;
    if( *(_a4 + 124) == 0) {
        _v36 = 134684640;
        _v40 = "Attempt to DEALLOCATE unallocated '%s'";
         *__esp = "At line 62 of file hdr_clean.F90";
        _gfortran_runtime_error_at();
    }
    free( *(_a4 + 124));
     *(_a4 + 124) = 0;
    if( *(_a4 + 148) == 0) {
        _v36 = 134684640;
        _v40 = "Attempt to DEALLOCATE unallocated '%s'";
         *__esp = "At line 63 of file hdr_clean.F90";
        _gfortran_runtime_error_at();
    }
    free( *(_a4 + 148));
     *(_a4 + 148) = 0;
    if( *(_a4 + 600) == 0) {
        _v36 = 134684640;
        _v40 = "Attempt to DEALLOCATE unallocated '%s'";
         *__esp = "At line 64 of file hdr_clean.F90";
        _gfortran_runtime_error_at();
    }
    free( *(_a4 + 600));
     *(_a4 + 600) = 0;
    if( *(_a4 + 172) == 0) {
        _v36 = 134684640;
        _v40 = "Attempt to DEALLOCATE unallocated '%s'";
         *__esp = "At line 65 of file hdr_clean.F90";
        _gfortran_runtime_error_at();
    }
    free( *(_a4 + 172));
     *(_a4 + 172) = 0;
    if( *(_a4 + 196) == 0) {
        _v36 = 134684640;
        _v40 = "Attempt to DEALLOCATE unallocated '%s'";
         *__esp = "At line 66 of file hdr_clean.F90";
        _gfortran_runtime_error_at();
    }
    free( *(_a4 + 196));
     *(_a4 + 196) = 0;
    if( *(_a4 + 220) == 0) {
        _v36 = 134684640;
        _v40 = "Attempt to DEALLOCATE unallocated '%s'";
         *__esp = "At line 67 of file hdr_clean.F90";
        _gfortran_runtime_error_at();
    }
    free( *(_a4 + 220));
     *(_a4 + 220) = 0;
    if( *(_a4 + 244) == 0) {
        _v36 = 134684640;
        _v40 = "Attempt to DEALLOCATE unallocated '%s'";
         *__esp = "At line 68 of file hdr_clean.F90";
        _gfortran_runtime_error_at();
    }
    free( *(_a4 + 244));
     *(_a4 + 244) = 0;
    if( *(_a4 + 268) == 0) {
        _v36 = 134684640;
        _v40 = "Attempt to DEALLOCATE unallocated '%s'";
         *__esp = "At line 69 of file hdr_clean.F90";
        _gfortran_runtime_error_at();
    }
    free( *(_a4 + 268));
     *(_a4 + 268) = 0;
    if( *(_a4 + 292) == 0) {
        _v36 = 134684640;
        _v40 = "Attempt to DEALLOCATE unallocated '%s'";
         *__esp = "At line 70 of file hdr_clean.F90";
        _gfortran_runtime_error_at();
    }
    free( *(_a4 + 292));
     *(_a4 + 292) = 0;
    if( *(_a4 + 316) == 0) {
        _v36 = 134684640;
        _v40 = "Attempt to DEALLOCATE unallocated '%s'";
         *__esp = "At line 71 of file hdr_clean.F90";
        _gfortran_runtime_error_at();
    }
    free( *(_a4 + 316));
     *(_a4 + 316) = 0;
    if( *(_a4 + 800) == 0) {
        _v36 = 134684640;
        _v40 = "Attempt to DEALLOCATE unallocated '%s'";
         *__esp = "At line 72 of file hdr_clean.F90";
        _gfortran_runtime_error_at();
    }
    free( *(_a4 + 800));
     *(_a4 + 800) = 0;
    if( *(_a4 + 624) == 0) {
        _v36 = 134684640;
        _v40 = "Attempt to DEALLOCATE unallocated '%s'";
         *__esp = "At line 73 of file hdr_clean.F90";
        _gfortran_runtime_error_at();
    }
    free( *(_a4 + 624));
     *(_a4 + 624) = 0;
    if( *(_a4 + 364) == 0) {
        _v36 = 134684640;
        _v40 = "Attempt to DEALLOCATE unallocated '%s'";
         *__esp = "At line 74 of file hdr_clean.F90";
        _gfortran_runtime_error_at();
    }
    free( *(_a4 + 364));
     *(_a4 + 364) = 0;
    if( *(_a4 + 660) == 0) {
        _v36 = 134684640;
        _v40 = "Attempt to DEALLOCATE unallocated '%s'";
         *__esp = "At line 75 of file hdr_clean.F90";
        _gfortran_runtime_error_at();
    }
    free( *(_a4 + 660));
     *(_a4 + 660) = 0;
    if( *(_a4 + 684) == 0) {
        _v36 = 134684640;
        _v40 = "Attempt to DEALLOCATE unallocated '%s'";
         *__esp = "At line 76 of file hdr_clean.F90";
        _gfortran_runtime_error_at();
    }
    free( *(_a4 + 684));
     *(_a4 + 684) = 0;
    if( *(_a4 + 720) == 0) {
        _v36 = 134684640;
        _v40 = "Attempt to DEALLOCATE unallocated '%s'";
         *__esp = "At line 77 of file hdr_clean.F90";
        _gfortran_runtime_error_at();
    }
    free( *(_a4 + 720));
     *(_a4 + 720) = 0;
    if( *(_a4 + 744) == 0) {
        _v36 = 134684640;
        _v40 = "Attempt to DEALLOCATE unallocated '%s'";
         *__esp = "At line 78 of file hdr_clean.F90";
        _gfortran_runtime_error_at();
    }
    free( *(_a4 + 744));
     *(_a4 + 744) = 0;
    if( *(_a4 + 768) == 0) {
        _v36 = 134684640;
        _v40 = "Attempt to DEALLOCATE unallocated '%s'";
         *__esp = "At line 79 of file hdr_clean.F90";
        _gfortran_runtime_error_at();
    }
    free( *(_a4 + 768));
     *(_a4 + 768) = 0;
    if( *((intOrPtr*)(_a4 + 60)) != 1) {
        return ;
    }
    _v16 = 1;
    if(_v16 >  *((intOrPtr*)(_a4 + 20))) {
        if( *(_a4 + 824) == 0) {
            _v36 = 134684640;
            _v40 = "Attempt to DEALLOCATE unallocated '%s'";
             *__esp = "At line 86 of file hdr_clean.F90";
            _gfortran_runtime_error_at();
        }
        free( *(_a4 + 824));
         *(_a4 + 824) = 0;
        return;
    }
    while() {
    }
}

L0805B598(intOrPtr _a4, signed int* _a8, intOrPtr _a12, intOrPtr _a16, intOrPtr _a20, signed int* _a24, intOrPtr _a28, intOrPtr _a32, intOrPtr _a36)
{
    signed int _v16;
    char _v36;
    char _v40;
    signed int _v44;
    intOrPtr _v48;
    intOrPtr _v52;
    intOrPtr _v56;
    intOrPtr _v60;
    intOrPtr _v64;
    intOrPtr _v68;
    intOrPtr _v72;
    void* _v76;
    char _v80;
    char _v84;
    char _v88;
    char _v92;
    signed int _v96;
    intOrPtr _v100;
    intOrPtr _v104;
    intOrPtr _v108;
    intOrPtr _v112;
    void* _v116;
    char _v120;
    char _v124;
    intOrPtr _v128;
    intOrPtr _v132;
    _unknown_ _v148;
    _unknown_ _v152;
    _unknown_ _v156;
    _unknown_ _v160;
    _unknown_ _v164;
    _unknown_ _v168;
    _unknown_ _v172;
    _unknown_ _v176;
    _unknown_ _v180;
    _unknown_ _v184;
    _unknown_ _v188;
    _unknown_ _v192;
    _unknown_ _v196;
    _unknown_ _v200;
    _unknown_ _v204;
    _unknown_ _v208;
    char* _v212;
    signed int _v216;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t119;
    signed int _t121;
    _unknown_ _t125;
    void* _t132;
    void* _t133;
    _unknown_ _t135;
    _unknown_ _t138;
    _unknown_ _t143;
    void* _t145;
    void* _t157;
    _unknown_ _t166;
    _unknown_ _t175;
    _unknown_ _t176;
    _unknown_ _t178;
    _unknown_ _t179;
    signed int _t181;
    _unknown_ _t184;
    _unknown_ _t192;
    _unknown_ _t193;
    signed int _t194;

    _t119 =  *_a8;
    _v216 = _t119;
     *__esp =  *_a24 +  *_a24;
    _gfortran_pow_i4_i4();
    _v16 = _t119 *  *_a24;
    _t121 = _v16;
    _t122 = _t121 >= 0 ? 0 : _t121;
    _t165 = _t121 >= 0 ? 0 : _t121;
    _v132 = _t121 >= 0 ? 0 : _t121;
    _v128 = 0;
    asm("shld edx, eax, 0x6");
    _v76 = 0;
    _v116 = 0;
    _v120 = 3;
    _v80 = 1;
    _v40 = 0;
    _v124 = 0;
    _v68 = 266;
    _v60 = 1;
    _v56 = 3;
    _v64 = 1;
    _v48 = 1;
    _v44 = _v124;
    _v52 = 3;
    _t181 = (_v124 >= 0 ? _v124 : 0) + (_v124 >= 0 ? _v124 : 0) + (_v124 >= 0 ? _v124 : 0);
    if((_v124 & 4294967295 & ) == 0) {
        _t132 =  &((0)[_t181]);
    } else {
        _t132 = 0;
    }
    if(_v76 != 0) {
        _v212 = "kg_dum";
        _v216 = "Attempting to allocate already allocated array '%s'";
         *__esp = "At line 88 of file WffReadEigK.F90";
        _gfortran_runtime_error_at();
L11:
        _t133 = 0;
L13:
        if(_v116 != 0) {
            _v212 = "occ_dum";
            _v216 = "Attempting to allocate already allocated array '%s'";
             *__esp = "At line 88 of file WffReadEigK.F90";
            _gfortran_runtime_error_at();
L21:
            _v212 = "kg_dum";
            _v216 = "Attempt to DEALLOCATE unallocated '%s'";
             *__esp = "At line 97 of file WffReadEigK.F90";
            _gfortran_runtime_error_at();
L22:
            free(_v76);
            _v76 = 0;
            if(_v116 == 0) {
                _v212 = "occ_dum";
                _v216 = "Attempt to DEALLOCATE unallocated '%s'";
                 *__esp = "At line 97 of file WffReadEigK.F90";
                _gfortran_runtime_error_at();
            }
            free(_v116);
            _v116 = 0;
            if(_v116 != 0) {
                free(_v116);
            }
            _v116 = 0;
            _t140 = _v76;
            if(_v76 != 0) {
                free(_v76);
            }
            _v76 = 0;
            return;
        }
        if(_t133 < 0) {
             *__esp = "Attempt to allocate negative amount of memory. Possible integer overflow";
            _gfortran_runtime_error();
        }
        _t144 = _t133 <= 0 ? 1 : _t133;
        _t145 = malloc(_t133 <= 0 ? 1 : _t133);
        if(_t145 == 0) {
             *__esp = "Out of memory";
            _gfortran_os_error();
        }
        _v116 = _t145;
        _v112 = -1;
        L08067F38( &_v36, _a4, _a8, _a12,  &_v40, _a16, _a20, _v76, _a24,  &_v80, _a28,  &_v84,  &_v88,  &_v92, _v116,  &_v120,  &_v124, _a32, _a36);
        if(_v76 == 0) {
            goto L21;
        } else {
        }
        goto L22;
    }
    if(_t132 < 0) {
         *__esp = "Attempt to allocate negative amount of memory. Possible integer overflow";
        _gfortran_runtime_error();
    }
    _t156 = _t132 <= 0 ? 1 : _t132;
    _t157 = malloc(_t132 <= 0 ? 1 : _t132);
    if(_t157 == 0) {
         *__esp = "Out of memory";
        _gfortran_os_error();
    }
    _v76 = _t157;
    _v72 = -4;
    _v108 = 537;
    _v100 = 1;
    _v96 =  *_a24;
    _v104 = 1;
    _t194 =  *_a24 >= 0 ?  *_a24 : 0;
    if(( *_a24 & 4294967295 & ) != 0) {
        goto L11;
    } else {
        _t133 = 0 + _t194 * 8;
    }
    goto L13;
}

L0805B8D4(_unknown_ _a4, intOrPtr* _a8, signed int* _a12, _unknown_ _a16, _unknown_ _a20)
{
    intOrPtr _v32;
    signed int _v48;
    void* _v52;
    signed int _v56;
    void* _v60;
    intOrPtr _v64;
    void _v68;
    _unknown_ _v72;
    void* _v76;
    signed int _v80;
    intOrPtr _v84;
    _unknown_ _v88;
    signed int _v92;
    _unknown_ _v96;
    signed int _v128;
    _unknown_ _v140;
    _unknown_ _v164;
    _unknown_ _v172;
    _unknown_ _v196;
    _unknown_ _v200;
    _unknown_ _v204;
    _unknown_ _v208;
    _unknown_ _v212;
    _unknown_ _v216;
    _unknown_ _v220;
    _unknown_ _v528;
    _unknown_ _v532;
    _unknown_ _v536;
    _unknown_ _v540;
    _unknown_ _v544;
    intOrPtr _v548;
    char* _v552;
    intOrPtr _v556;
    char _v560;
    void _v576;
    _unknown_ _v580;
    intOrPtr _v584;
    _unknown_ _v588;
    _unknown_ _v592;
    intOrPtr _v596;
    intOrPtr _v600;
    signed int _v608;
    signed int _v612;
    signed int _v616;
    signed int _v620;
    signed int _v624;
    signed int _v628;
    signed int _v632;
    signed int _v636;
    signed int _v640;
    signed int _v644;
    signed int _v648;
    signed int _v652;
    signed int _v656;
    signed int _v660;
    signed int _v664;
    signed int _v668;
    signed int _v672;
    signed int _v676;
    signed int _v680;
    signed int _v684;
    _unknown_ _v688;
    _unknown_ _v692;
    _unknown_ _v696;
    _unknown_ _v700;
    _unknown_ _v704;
    _unknown_ _v708;
    _unknown_ _v712;
    _unknown_ _v716;
    _unknown_ _v720;
    intOrPtr _v724;
    char* _v728;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t310;
    _unknown_ _t314;
    _unknown_ _t319;
    _unknown_ _t323;
    intOrPtr _t326;
    _unknown_ _t330;
    _unknown_ _t338;
    _unknown_ _t342;
    _unknown_ _t343;
    void* _t345;
    _unknown_ _t352;
    _unknown_ _t353;
    void* _t355;
    _unknown_ _t364;
    _unknown_ _t365;
    void* _t367;
    signed int _t372;
    intOrPtr _t374;
    void* _t375;
    void* _t376;
    void* _t377;
    _unknown_ _t378;
    _unknown_ _t379;
    _unknown_ _t380;
    _unknown_ _t389;
    _unknown_ _t397;
    _unknown_ _t404;
    _unknown_ _t409;
    _unknown_ _t411;
    _unknown_ _t415;
    _unknown_ _t420;
    _unknown_ _t425;
    _unknown_ _t427;
    _unknown_ _t433;
    _unknown_ _t434;
    _unknown_ _t437;
    _unknown_ _t442;
    _unknown_ _t443;
    _unknown_ _t446;
    _unknown_ _t447;
    _unknown_ _t450;
    _unknown_ _t451;
    intOrPtr _t459;
    _unknown_ _t468;
    _unknown_ _t470;
    _unknown_ _t474;
    _unknown_ _t479;
    _unknown_ _t485;
    _unknown_ _t491;
    _unknown_ _t498;
    _unknown_ _t499;
    _unknown_ _t500;
    _unknown_ _t501;
    _unknown_ _t502;
    _unknown_ _t505;
    _unknown_ _t506;
    _unknown_ _t511;
    signed int _t512;
    _unknown_ _t513;
    signed int _t514;
    _unknown_ _t515;
    signed int _t516;
    _unknown_ _t517;
    _unknown_ _t522;
    _unknown_ _t525;
    _unknown_ _t526;
    _unknown_ _t527;
    _unknown_ _t534;
    _unknown_ _t535;
    _unknown_ _t537;
    _unknown_ _t539;
    _unknown_ _t540;
    _unknown_ _t542;
    _unknown_ _t543;
    _unknown_ _t544;
    _unknown_ _t546;
    _unknown_ _t550;
    _unknown_ _t552;
    _unknown_ _t553;
    _unknown_ _t554;
    _unknown_ _t555;
    _unknown_ _t557;
    _unknown_ _t558;
    _unknown_ _t560;
    _unknown_ _t561;
    _unknown_ _t563;
    _unknown_ _t564;
    void _t565;
    _unknown_ _t567;
    _unknown_ _t571;
    signed int _t572;
    signed int _t575;
    _unknown_ _t584;
    _unknown_ _t585;
    _unknown_ _t586;
    _unknown_ _t587;
    _unknown_ _t589;
    _unknown_ _t590;
    _unknown_ _t591;
    _unknown_ _t592;
    signed int _t594;
    signed int _t597;
    _unknown_ _t598;
    _unknown_ _t599;
    intOrPtr _t602;
    signed int _t603;
    _unknown_ _t604;
    _unknown_ _t605;
    _unknown_ _t606;
    _unknown_ _t607;

    _v48 =  *_a12;
    _t534 = (_v48 << 3) + _v48;
    _t311 = _t534 >= 0 ? _t534 : 0;
    _t506 = _t534 >= 0 ? _t534 : 0;
    asm("shld edx, eax, 0x5");
    _v84 =  *_a8;
    _t539 = _v84 + _v84 + _v84;
    _t320 = _t539 >= 0 ? _t539 : 0;
    _t507 = _t539 >= 0 ? _t539 : 0;
    _v612 = _t539 >= 0 ? _t539 : 0;
    _v608 = 0;
    asm("shld edx, eax, 0x6");
    _v620 = _v612 << 6;
    _v616 = _v608 & 15;
    _v32 =  *_a8;
    _t326 = _v32;
    _t327 = _t326 >= 0 ? 0 : _t326;
    _t509 = _t326 >= 0 ? 0 : _t326;
    _v628 = _t326 >= 0 ? 0 : _t326;
    _v624 = 0;
    asm("shld edx, eax, 0x6");
    _v636 = _v628 << 6;
    _v632 = _v624 & 15;
    _v80 =  *_a12 * ( *_a8 +  *_a8);
    _t512 = _v80 + _v80 + _v80 >= 0 ? _v80 + _v80 + _v80 : 0;
    _v644 = _t512;
    _v640 = 0;
    asm("shld edx, eax, 0x6");
    _v652 = _v644 << 6;
    _v648 = _v640 & 15;
    _t343 = 0 + _t512 * 8;
    if(_t343 < 0) {
         *__esp = "Attempt to allocate a negative amount of memory.";
        _gfortran_runtime_error();
    }
    _t344 = _t343 <= 0 ? 1 : _t343;
    _t345 = malloc(_t343 <= 0 ? 1 : _t343);
    if(_t345 == 0) {
         *__esp = "Memory allocation failed";
        _gfortran_os_error();
    }
    _v76 = _t345;
    _v64 =  *_a8;
    _t514 = _v64 >= 0 ? _v64 : 0;
    _v660 = _t514;
    _v656 = 0;
    asm("shld edx, eax, 0x5");
    _v668 = _v660 << 5;
    _v664 = _v656 & 15;
    _t353 = 0 + _t514 * 4;
    if(_t353 < 0) {
         *__esp = "Attempt to allocate a negative amount of memory.";
        _gfortran_runtime_error();
    }
    _t354 = _t353 <= 0 ? 1 : _t353;
    _t355 = malloc(_t353 <= 0 ? 1 : _t353);
    if(_t355 == 0) {
         *__esp = "Memory allocation failed";
        _gfortran_os_error();
    }
    _v60 = _t355;
    _v56 =  *_a12;
    _t516 = (_v56 << 3) + _v56 >= 0 ? (_v56 << 3) + _v56 : 0;
    _v676 = _t516;
    _v672 = 0;
    asm("shld edx, eax, 0x6");
    _v684 = _v676 << 6;
    _v680 = _v672 & 15;
    _t365 = 0 + _t516 * 8;
    if(_t365 < 0) {
         *__esp = "Attempt to allocate a negative amount of memory.";
        _gfortran_runtime_error();
    }
    _t366 = _t365 <= 0 ? 1 : _t365;
    _t367 = malloc(_t365 <= 0 ? 1 : _t365);
    if(_t367 == 0) {
         *__esp = "Memory allocation failed";
        _gfortran_os_error();
    }
    _v52 = _t367;
    _t597 =  *_a12;
    _v92 = 1;
    if(_v92 > _t597) {
        _v584 =  *_a8;
        _v128 = 1;
        __eflags = _v128 - _v584;
        if(_v128 > _v584) {
            _t565 = 0;
            _t602 = _v64;
            _t372 = 1;
            while(1) {
                __eflags = _t372 - _t602;
                if(_t372 > _t602) {
                    break;
                }
                _t565 = _t565 + _v60[_t372 - 1];
                _t372 = _t372 + 1;
            }
            _v68 = _t565;
            _t374 =  *_a8;
            _v128 = 1;
            __eflags = _v128 - _t374;
            if(_v128 > _t374) {
L72:
                _t375 = _v52;
                __eflags = _t375;
                if(_t375 != 0) {
                    free(_t375);
                }
                _t376 = _v60;
                __eflags = _t376;
                if(_t376 != 0) {
                    free(_t376);
                }
                _t377 = _v76;
                __eflags = _t377;
                if(_t377 == 0) {
                    return ;
                }
                free(_t377);
                return;
            }
            while(1) {
                _v576 = _v60[_v128 - 1];
                asm("fild dword [ebp+0xfffffdc4]");
                asm("fild dword [ebp-0x40]");
                asm("fdivp st1, st0");
                asm("fstp qword [edx+ecx*8]");
                _t572 = _v128;
                __eflags = _t572 - _t374;
                _v128 = _v128 + 1;
                __eflags = _t572 & 4294967295 & ;
                if((_t572 & 4294967295 & ) != 0) {
                    break;
                }
            }
            goto L72;
        }
    } else {
        while(1) {
            _v596 = (_v92 << 3) + _v92 - 13;
            _t459 = (_v92 << 3) + _v92 - 13;
            _v600 = _t459;
            _t594 = 1;
            goto L16;
        }
    }
L23:
    while(1) {
        _v552 = "getwtk.F90";
        _v548 = 74;
        _v560 = 128;
        _v556 = 6;
         *__esp =  &_v560;
        _gfortran_st_write();
        _v724 = 17;
        _v728 = " getwtk : ikpt = ";
         *__esp =  &_v560;
        _gfortran_transfer_character();
        _v724 = 4;
        _v728 =  &_v128;
         *__esp =  &_v560;
        _gfortran_transfer_integer();
         *__esp =  &_v560;
        _gfortran_st_write_done();
        _v60[_v128 - 1] = 0;
        _t603 = _v80;
        _t575 = 1;
        goto L26;
    }
}

L0805C23C(_unknown_ _a4, _unknown_ _a8, _unknown_ _a12, signed int* _a16, signed int* _a20, signed int* _a24, _unknown_ _a28, _unknown_ _a32)
{
    signed int _v24;
    signed int _v28;
    signed int _v32;
    signed int _v36;
    intOrPtr _v48;
    intOrPtr _v52;
    intOrPtr _v56;
    _unknown_ _v60;
    _unknown_ _v64;
    signed int _v68;
    signed int _v72;
    signed int _v76;
    signed int _v80;
    signed int _v84;
    signed int _v88;
    signed int _v92;
    signed int _v96;
    signed int _v100;
    signed int _v104;
    signed int _v108;
    signed int _v112;
    signed int _v200;
    signed int _v204;
    signed int _v208;
    signed int _v212;
    signed int _v216;
    signed int _v220;
    signed int _v224;
    signed int _v228;
    signed int _v232;
    signed int _v236;
    intOrPtr _v240;
    signed int _v244;
    signed int _v248;
    _unknown_ _v252;
    _unknown_ _v256;
    signed int _v260;
    signed int _v264;
    intOrPtr _v268;
    intOrPtr _v272;
    intOrPtr _v276;
    intOrPtr _v280;
    signed int _v336;
    signed int _v340;
    signed int _v344;
    signed int _v348;
    signed int _v352;
    signed int _v356;
    signed int _v360;
    signed int _v364;
    signed int _v368;
    signed int _v372;
    signed int _v376;
    signed int _v380;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t337;
    signed int _t341;
    signed int _t345;
    _unknown_ _t348;
    signed int _t352;
    _unknown_ _t356;
    _unknown_ _t364;
    signed int _t368;
    signed int _t372;
    signed int _t376;
    _unknown_ _t380;
    _unknown_ _t381;
    _unknown_ _t387;
    signed int _t391;
    signed int _t395;
    signed int _t399;
    _unknown_ _t403;
    _unknown_ _t404;
    _unknown_ _t410;
    signed int _t414;
    signed int _t418;
    signed int _t422;
    _unknown_ _t426;
    _unknown_ _t427;
    signed int _t434;
    _unknown_ _t438;
    _unknown_ _t440;
    _unknown_ _t442;
    _unknown_ _t443;
    _unknown_ _t445;
    _unknown_ _t446;
    _unknown_ _t447;
    _unknown_ _t448;
    _unknown_ _t450;
    _unknown_ _t452;
    _unknown_ _t454;
    _unknown_ _t455;
    _unknown_ _t456;
    _unknown_ _t457;
    _unknown_ _t458;
    _unknown_ _t460;
    _unknown_ _t461;
    _unknown_ _t463;
    _unknown_ _t464;
    _unknown_ _t465;
    _unknown_ _t466;
    _unknown_ _t468;
    _unknown_ _t470;
    _unknown_ _t472;
    _unknown_ _t473;
    _unknown_ _t474;
    _unknown_ _t475;
    _unknown_ _t476;
    _unknown_ _t478;
    _unknown_ _t479;
    _unknown_ _t481;
    _unknown_ _t482;
    _unknown_ _t483;
    _unknown_ _t484;
    _unknown_ _t486;
    _unknown_ _t488;
    _unknown_ _t490;
    _unknown_ _t491;
    _unknown_ _t492;
    _unknown_ _t493;
    _unknown_ _t500;
    _unknown_ _t503;
    _unknown_ _t504;
    _unknown_ _t505;
    _unknown_ _t507;
    _unknown_ _t509;
    _unknown_ _t510;
    _unknown_ _t511;
    _unknown_ _t513;
    _unknown_ _t514;
    _unknown_ _t517;
    _unknown_ _t518;
    _unknown_ _t521;
    _unknown_ _t522;
    _unknown_ _t523;
    _unknown_ _t526;
    _unknown_ _t527;
    _unknown_ _t528;
    _unknown_ _t531;
    _unknown_ _t532;
    _unknown_ _t535;
    _unknown_ _t538;
    _unknown_ _t540;
    _unknown_ _t543;
    _unknown_ _t544;
    _unknown_ _t545;
    _unknown_ _t547;
    _unknown_ _t549;
    _unknown_ _t551;
    _unknown_ _t553;
    _unknown_ _t554;
    _unknown_ _t556;
    _unknown_ _t558;
    _unknown_ _t561;
    _unknown_ _t566;
    _unknown_ _t568;
    _unknown_ _t570;
    _unknown_ _t573;
    _unknown_ _t578;
    _unknown_ _t580;
    _unknown_ _t582;
    _unknown_ _t585;
    _unknown_ _t592;
    _unknown_ _t593;
    _unknown_ _t594;
    _unknown_ _t595;
    _unknown_ _t596;
    _unknown_ _t597;
    _unknown_ _t599;
    intOrPtr _t601;
    _unknown_ _t602;
    _unknown_ _t603;
    _unknown_ _t604;
    _unknown_ _t606;
    _unknown_ _t607;
    _unknown_ _t608;
    _unknown_ _t610;
    _unknown_ _t613;
    _unknown_ _t614;
    _unknown_ _t615;
    _unknown_ _t616;
    _unknown_ _t617;
    _unknown_ _t619;
    _unknown_ _t622;
    _unknown_ _t623;
    _unknown_ _t624;
    _unknown_ _t625;
    _unknown_ _t626;
    _unknown_ _t628;
    _unknown_ _t631;
    _unknown_ _t632;
    _unknown_ _t633;
    _unknown_ _t634;
    _unknown_ _t635;
    _unknown_ _t637;
    _unknown_ _t642;
    _unknown_ _t644;
    _unknown_ _t645;
    _unknown_ _t646;
    _unknown_ _t647;
    _unknown_ _t649;
    _unknown_ _t650;
    _unknown_ _t651;
    _unknown_ _t652;
    _unknown_ _t654;
    _unknown_ _t655;
    _unknown_ _t656;
    _unknown_ _t657;
    _unknown_ _t659;
    _unknown_ _t660;
    _unknown_ _t661;
    _unknown_ _t662;
    _unknown_ _t664;
    _unknown_ _t665;
    _unknown_ _t666;
    _unknown_ _t667;
    _unknown_ _t669;
    _unknown_ _t670;
    _unknown_ _t671;
    _unknown_ _t676;
    _unknown_ _t677;
    _unknown_ _t678;
    _unknown_ _t679;
    _unknown_ _t680;
    _unknown_ _t681;
    _unknown_ _t682;
    _unknown_ _t683;
    _unknown_ _t684;
    _unknown_ _t685;
    _unknown_ _t686;
    _unknown_ _t687;
    _unknown_ _t688;
    _unknown_ _t689;
    _unknown_ _t690;
    _unknown_ _t694;
    _unknown_ _t700;

    _v36 =  *_a16;
    _t337 = _v36;
    _t546 = _t337 >= 0 ? _t337 : 0;
    _v248 = _t337 >= 0 ? _t337 : 0;
    _v32 =  *_a16;
    _t341 = _v248 * _v32;
    _t548 = _t341 >= 0 ? _t341 : 0;
    _v244 = _t341 >= 0 ? _t341 : 0;
    _v28 =  *_a20;
    _t345 = _v244 * _v28;
    _t550 = _t345 >= 0 ? _t345 : 0;
    _v240 = _t345 >= 0 ? _t345 : 0;
    _t606 = _v240 + _v240 + _v240;
    _t552 = _t606 >= 0 ? _t606 : 0;
    _v236 = _t606 >= 0 ? _t606 : 0;
    _v24 =  *_a24;
    _t352 = _v236 * _v24;
    _t353 = _t352 >= 0 ? 0 : _t352;
    _t553 = _t352 >= 0 ? 0 : _t352;
    asm("shld edx, eax, 0x7");
    _v268 =  !_v248 - _v244 - _v240 - _v236;
    _v112 =  *_a16;
    _t613 = _v112 + _v112;
    _t555 = _t613 >= 0 ? _t613 : 0;
    _v232 = _t613 >= 0 ? _t613 : 0;
    _v108 =  *_a16;
    _t368 = _v232 * _v108;
    _t557 = _t368 >= 0 ? _t368 : 0;
    _v228 = _t368 >= 0 ? _t368 : 0;
    _v104 =  *_a20;
    _t372 = _v228 * _v104;
    _t559 = _t372 >= 0 ? _t372 : 0;
    _v224 = _t372 >= 0 ? _t372 : 0;
    _v100 =  *_a24;
    _t376 = _v224 * _v100;
    _t377 = _t376 >= 0 ? 0 : _t376;
    _t560 = _t376 >= 0 ? 0 : _t376;
    _v340 = _t376 >= 0 ? 0 : _t376;
    _v336 = 0;
    asm("shld edx, eax, 0x6");
    _v348 = _v340 << 6;
    _v344 = _v336 & 15;
    _v280 = -3 - _v232 - _v228 - _v224;
    _v96 =  *_a16;
    _t622 = _v96 + _v96;
    _t567 = _t622 >= 0 ? _t622 : 0;
    _v220 = _t622 >= 0 ? _t622 : 0;
    _v92 =  *_a16;
    _t391 = _v220 * _v92;
    _t569 = _t391 >= 0 ? _t391 : 0;
    _v216 = _t391 >= 0 ? _t391