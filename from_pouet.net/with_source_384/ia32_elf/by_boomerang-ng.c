unsigned int global_0x0804a18c;
unsigned int global_0x0804a190;
unsigned int global_0x0804a194;
__size32 global_0x0804a198;// 4 bytes
__size32 global_0x0804a19c;// 4 bytes
__size32 global_0x0804a1a0;// 4 bytes
__size32 global_0x0804a1a4;// 4 bytes
__size32 global_0x08084b18;// 4 bytes
__size32 global_0x08084b1c;// 4 bytes
__size32 global_0x08084b20;// 4 bytes
__size32 global_0x08084b24;// 4 bytes
__size32 global_0x08084b28;// 4 bytes
__size32 global_0x08084b2c;// 4 bytes
__size32 global_0x08084b30;// 4 bytes
__size32 global_0x08084b34;// 4 bytes
__size32 global_0x08084b38;// 4 bytes
__size32 global_0x08084b3c;// 4 bytes
__size32 global_0x08084b40;// 4 bytes
__size32 global_0x08084b44;// 4 bytes
int main(int argc, char *argv[]);
__size80 proc_0x0804908a(__size32 param1, __size32 param2, __size32 param3, __size80 param4, __size80 param5, __size80 param6);
__size32 proc_0x080489e4(float param1, float param2, float param3, union { float; __size32; } param4, float param5, float param6, int param7, int param8, int param9, __size80 param10);

/** address: 0x0804922c */
int main(int argc, char *argv[])
{
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    int ecx; 		// r25
    int edx; 		// r26
    int local0; 		// m[esp - 32]
    GLdouble local1; 		// m[esp - 124]
    unsigned int local10; 		// m[esp - 100]
    __size32 local16; 		// m[esp - 88]
    __size32 local17; 		// m[esp - 92]
    __size32 local18; 		// m[esp - 96]
    GLdouble local2; 		// m[esp - 116]
    GLdouble local3; 		// m[esp - 108]
    __size8 local4; 		// m[esp - 52]
    __size32 local5; 		// m[esp - 44]
    unsigned int local6; 		// m[esp - 68]
    __size80 st; 		// r32
    __size80 st5; 		// r37
    double st6; 		// r38
    double st7; 		// r39

    memcpy(&local0, 0x8049460, 12);
    SDL_Init();
    SDL_SetVideoMode();
    SDL_ShowCursor();
    glClearColor(0, 0, 0, 0);
    glMatrixMode(0x1701);
    glLoadIdentity();
    glEnable(0xb71);
    glEnable(0xb50);
    glEnable(0x4000);
    glEnable(0xba1);
    glEnableClientState();
    glEnableClientState();
    local16 = 0;
    local17 = 0xbff00000;
    local18 = 0;
    st6 = 0.5;
    st7 = -0.5;
    glOrtho(-0.5, local1, 0.5, local2, -0.5, local3);
    glLightfv();
    ebx = 0;
    for(;;) {
bb0x8049341:
        eax = SDL_PollEvent();
        if (eax != 0) {
            tmpb = local4 - 2;
            if (local4 != 2 || local5 != 27) {
                continue;
            }
            ebx = 1;
        }
    }
    glClear(0x4100);
    local16 = 0x3f800000;
    local17 = 0x3f800000;
    local18 = 0x3f800000;
    eax = glColor4f(); /* Warning: also results in ecx, edx */
    st = proc_0x0804908a(eax, ecx, edx, st, st5, st6); /* Warning: also results in st5, st6, st7 */
    SDL_GL_SwapBuffers();
    if (ebx == 0) {
        goto bb0x8049341;
    }
    SDL_ShowCursor();
    SDL_Quit();
    return 0;
}

/** address: 0x0804908a */
__size80 proc_0x0804908a(__size32 param1, __size32 param2, __size32 param3, __size80 param4, __size80 param5, __size80 param6)
{
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{19}
    int ecx; 		// r25
    int edx; 		// r26
    union { double; __size32; } local0; 		// m[esp - 32]
    __size32 local14; 		// param1{16}
    __size32 local15; 		// param2{17}
    __size32 local16; 		// param3{18}
    __size80 local17; 		// param4{20}
    __size80 local18; 		// param5{21}
    __size80 local19; 		// param6{22}
    __size80 st; 		// r32
    __size80 st5; 		// r37
    __size80 st6; 		// r38
    double st6_1; 		// r38{26}
    double st7; 		// r39
    union { __size80; double; } st_1; 		// r32{25}

    global_0x0804a190 = 0;
    global_0x0804a18c = 0;
    global_0x0804a194 = 0;
    st7 = 0.;
    local0 = 0.;
    ebx = 0;
    local14 = param1;
    local15 = param2;
    local16 = param3;
    local17 = param4;
    local18 = param5;
    local19 = param6;
    for(;;) {
        param1 = local14;
        param2 = local15;
        param3 = local16;
        ebx_1 = ebx;
        param4 = local17;
        param5 = local18;
        param6 = local19;
        eax = proc_0x080489e4(0., 0., 0., 0, local0, 0.1, 14, 1, 1, param4); /* Warning: also results in st_1, ecx, edx, st5 */
        local14 = eax;
        local15 = ecx;
        local16 = edx;
        local17 = st_1;
        local18 = st5;
        st6_1 = local0;
        st6 = st6_1 + 90.;
        local0 = st6_1 + 90.;
        ebx = ebx_1 + 1;
        local19 = st6;
        if (ebx_1 + 1 == 4) {
            break;
        }
        st7 = 90.;
    }
    eax = proc_0x080489e4(0., 0., 0., st_1, st_1, 0.1, 14, 1, 1, st_1); /* Warning: also results in st, ecx, edx, st5, st6 */
    st = proc_0x080489e4(0., 0., 0., 0x43870000, st_1, 0.1, 14, 1, 1, st); /* Warning: also results in st5, st6, st7 */
    glNormalPointer();
    glColor4f();
    glVertexPointer();
    glPushMatrix();
    glRotatef(0x428c6666, 0x3f800000, 0x3f333333, 0);
    glDrawElements();
    glPopMatrix();
    global_0x08084b18 = 0xbf000000;
    global_0x08084b1c = 0xbf000000;
    global_0x08084b20 = 0xbf000000;
    global_0x0804a198 = 0;
    global_0x08084b24 = 0x3f000000;
    global_0x08084b28 = 0xbf000000;
    global_0x08084b2c = 0xbf000000;
    global_0x0804a19c = 1;
    global_0x08084b30 = 0x3f000000;
    global_0x08084b34 = 0x3f000000;
    global_0x08084b38 = 0xbf000000;
    global_0x0804a1a0 = 2;
    global_0x08084b3c = 0xbf000000;
    global_0x08084b40 = 0x3f000000;
    global_0x08084b44 = 0xbf000000;
    global_0x0804a1a4 = 3;
    glDrawElements();
    return st; /* WARNING: Also returning: st5 := st5, st6 := st6, st7 := st7 */
}

/** address: 0x080489e4 */
__size32 proc_0x080489e4(float param1, float param2, float param3, union { float; __size32; } param4, float param5, float param6, int param7, int param8, int param9, __size80 param10)
{
    float eax; 		// r24
    __size32 ebx; 		// r27
    union { int; union { __size32; float; } *; } ebx_1; 		// r27{79}
    int ebx_2; 		// r27{86}
    union { __size32; union { __size32; float; } *; } ebx_4; 		// r27{130}
    __size32 ebx_5; 		// r27{136}
    int ecx; 		// r25
    unsigned int edi; 		// r31
    unsigned int edi_1; 		// r31{81}
    unsigned int edi_2; 		// r31{84}
    unsigned int edi_4; 		// r31{132}
    int edx; 		// r26
    __size32 esi; 		// r30
    union { int; union { __size32; float; } *; } esi_1; 		// r30{80}
    int esi_2; 		// r30{85}
    union { __size32; union { __size32; float; } *; } esi_4; 		// r30{131}
    __size32 esi_5; 		// r30{135}
    int esi_7; 		// r30{162}
    int esi_8; 		// r30{168}
    int local12; 		// m[esp - 124]
    int local13; 		// m[esp - 120]
    int local14; 		// m[esp - 44]
    int local17; 		// m[esp - 112]
    int local19; 		// m[esp - 268]
    int local30; 		// m[esp - 204]
    int local36; 		// m[esp - 96]
    int local40; 		// m[esp - 184]
    int local49; 		// m[esp - 80]
    int local66; 		// m[esp - 92]
    union { double; __size64; } local68; 		// m[esp - 68]
    float local69; 		// m[esp - 112]
    union { double; __size64; } local70; 		// m[esp - 244]
    union { double; __size64; } local71; 		// m[esp - 236]
    union { double; __size64; } local72; 		// m[esp - 228]
    union { double; __size64; } local73; 		// m[esp - 220]
    union { double; __size64; } local74; 		// m[esp - 212]
    union { double; __size64; } local75; 		// m[esp - 60]
    float local76; 		// m[esp - 96]
    union { double; __size64; } local77; 		// m[esp - 172]
    union { double; __size64; } local78; 		// m[esp - 164]
    union { double; __size64; } local79; 		// m[esp - 148]
    union { union { __size32; float; } *; int; } local85; 		// ebx_1{79}
    union { union { __size32; float; } *; int; } local86; 		// esi_1{80}
    unsigned int local87; 		// edi_1{81}
    double local88; 		// st_47{82}
    union { union { __size32; float; } *; __size32; } local89; 		// ebx_4{130}
    union { union { __size32; float; } *; __size32; } local90; 		// esi_4{131}
    int local91; 		// esi_7{162}
    __size80 local92; 		// param10{173}
    __size80 st5; 		// r37
    __size80 st6; 		// r38
    double st6_1; 		// r38{19}
    double st6_12; 		// r38{109}
    double st6_15; 		// r38{123}
    double st6_4; 		// r38{20}
    double st6_6; 		// r38{55}
    double st6_9; 		// r38{71}
    __size80 st7; 		// r39
    double st7_1; 		// r39{26}
    double st7_4; 		// r39{27}
    double st7_6; 		// r39{49}
    double st7_9; 		// r39{50}
    double st_1; 		// r32{24}
    double st_10; 		// r32{0}
    __size80 st_13; 		// r32{158}
    __size80 st_14; 		// r32{0}
    __size80 st_15; 		// r32{164}
    __size80 st_18; 		// r32{165}
    double st_19; 		// r32{44}
    double st_22; 		// r32{46}
    double st_25; 		// r32{65}
    double st_28; 		// r32{67}
    double st_31; 		// r32{75}
    double st_34; 		// r32{99}
    double st_37; 		// r32{101}
    double st_4; 		// r32{31}
    double st_40; 		// r32{117}
    double st_43; 		// r32{119}
    double st_47; 		// r32{82}
    double st_7; 		// r32{33}

    local92 = param10;
    if (param7 >= 0) {
        st6_1 = 3.1415927 * param4;
        st6_4 = 3.1415927 * param5;
        sinf(st6_4 / 180.);
        st7 = param6;
        cosf(st6_1 / 180.);
        st_1 = st7 * param10 * st7 * param10 + param1;
        sinf(st6_1 / 180.);
        st7_1 = st7 * param10;
        st7_4 = param2;
        local12 = st7_1 * st_1 + st7_4;
        cosf(st6_4 / 180.);
        local13 = param6 * (st7_1 * st_1 + st7_4) + param3;
        st_4 = param6;
        local14 = st_4 * 0.5 * 1.4142135;
        st_7 = st_4 * 0.5 * 1.4142135 * 0.80000001;
        local88 = st_7;
        if (param9 == 1) {
            %eax = global_0x0804a18c;
            esi = global_0x0804a18c * 4 + 0x8084b18;
            ebx = global_0x0804a194 * 4 + 0x80d2d18;
            local17 = -1.5707964;
            edi = 0;
            local85 = ebx;
            local86 = esi;
            local87 = edi;
            ebx_1 = local85;
            esi_1 = local86;
            edi_1 = local87;
            st_47 = local88;
            local69 = local17;
            edi_2 = edi_1 + 1;
            esi_2 = esi_1 + 24;
            ebx_2 = ebx_1 + 24;
            local85 = ebx_2;
            local86 = esi_2;
            local87 = edi_2;
            while (edi_1 * 6 + 6 != 18) {
                local68 = st6_4 / 180.;
                local19 = 0.78539816 + local68;
                sinf(local19);
                st_19 = st6_1 / 180. + local69;
                cosf(st_19);
                st_22 = local14 * st_47 * st_19 + param1;
                *(union { float; __size32; }*)esi_1 = st_22;
                sinf(st_19);
                st7_6 = local14 * st_47;
                st7_9 = param2;
                *(union { float; __size32; }*)(esi_1 + 4) = st7_6 * st_22 + st7_9;
                cosf(local19);
                *(union { float; __size32; }*)(esi_1 + 8) = local14 * (st7_6 * st_22 + st7_9) + param3;
                local70 = param1;
                st6_6 = (1. + local14) * st_47;
                local71 = st_19;
                *(union { float; __size32; }*)ebx_1 = local71 * st6_6 + local70;
                local72 = param2;
                local73 = st_22;
                *(union { float; __size32; }*)(ebx_1 + 4) = st6_6 * local73 + local72;
                local74 = param3;
                *(union { float; __size32; }*)(ebx_1 + 8) = (1. + local14) * (st7_6 * st_22 + st7_9) + local74;
                local30 = local68 - 0.78539816;
                sinf(local30);
                st_25 = local14 * (1. + local14);
                *(union { float; __size32; }*)(esi_1 + 12) = st_19 * st_25 + param1;
                st_28 = st_25 * st_22 + param2;
                *(union { float; __size32; }*)(esi_1 + 16) = st_28;
                cosf(local30);
                *(union { float; __size32; }*)(esi_1 + 20) = local14 * st_28 + param3;
                st6_9 = (1. + local14) * (1. + local14);
                *(union { float; __size32; }*)(ebx_1 + 12) = local70 + local71 * st6_9;
                *(union { float; __size32; }*)(ebx_1 + 16) = st6_9 * local73 + local72;
                *(union { float; __size32; }*)(ebx_1 + 20) = (1. + local14) * st_28 + local74;
                st_31 = local69 + 3.1415927;
                local17 = local69 + 3.1415927;
                %eax += 6;
                local88 = st_31;
                ebx_1 = local85;
                esi_1 = local86;
                edi_1 = local87;
                st_47 = local88;
                local69 = local17;
                edi_2 = edi_1 + 1;
                esi_2 = esi_1 + 24;
                ebx_2 = ebx_1 + 24;
                local85 = ebx_2;
                local86 = esi_2;
                local87 = edi_2;
            }
            global_0x0804a194 = edi_1 * 6 + global_0x0804a194;
            global_0x0804a18c = %eax;
        }
        ecx = global_0x0804a18c;
        esi = global_0x0804a18c * 4 + 0x8084b18;
        ebx = global_0x0804a194 * 4 + 0x80d2d18;
        local36 = -1.5707964;
        edi = 0;
        local89 = ebx;
        local90 = esi;
        ebx_4 = local89;
        esi_4 = local90;
        edi_4 = edi;
        local76 = local36;
        edi = edi_4 + 1;
        esi_5 = esi_4 + 24;
        ebx_5 = ebx_4 + 24;
        local89 = ebx_5;
        local90 = esi_5;
        while (edi_4 * 6 + 6 != 18) {
            local75 = st6_4 / 180.;
            sinf(0.78539816 + local75);
            local40 = st_7 * (0.78539816 + local75);
            st_34 = st6_1 / 180. + local76;
            cosf(st_34);
            st_37 = local40 * st_34 + st_1;
            *(union { float; __size32; }*)esi_4 = st_37;
            sinf(st_34);
            *(union { float; __size32; }*)(esi_4 + 4) = local40 * st_37 + local12;
            cosf(0.78539816 + local75);
            *(union { float; __size32; }*)(esi_4 + 8) = st_7 * (local40 * st_37 + local12) + local13;
            local77 = st_1;
            st7 = 1. + st_7;
            st6_12 = st7 * (0.78539816 + local75);
            local78 = st_34;
            *(union { float; __size32; }*)ebx_4 = local78 * st6_12 + local77;
            local79 = st_37;
            *(union { float; __size32; }*)(ebx_4 + 4) = st6_12 * local79 + local12;
            *(union { float; __size32; }*)(ebx_4 + 8) = st7 * (local40 * st_37 + local12) + local13;
            local49 = local75 - 0.78539816;
            sinf(local49);
            st_40 = st_7 * st7;
            *(union { float; __size32; }*)(esi_4 + 12) = st_34 * st_40 + st_1;
            st_43 = st_40 * st_37 + local12;
            *(union { float; __size32; }*)(esi_4 + 16) = st_43;
            cosf(local49);
            *(union { float; __size32; }*)(esi_4 + 20) = st_7 * st_43 + local13;
            st6_15 = st7 * st7;
            *(union { float; __size32; }*)(ebx_4 + 12) = local77 + local78 * st6_15;
            *(union { float; __size32; }*)(ebx_4 + 16) = st6_15 * local79 + local12;
            *(union { float; __size32; }*)(ebx_4 + 20) = st7 * st_43 + local13;
            local36 = local76 + 3.1415927;
            ecx += 6;
            ebx_4 = local89;
            esi_4 = local90;
            edi_4 = edi;
            local76 = local36;
            edi = edi_4 + 1;
            esi_5 = esi_4 + 24;
            ebx_5 = ebx_4 + 24;
            local89 = ebx_5;
            local90 = esi_5;
        }
        global_0x0804a194 = edi_4 * 6 + global_0x0804a194;
        global_0x0804a18c = ecx;
        %eax = (ecx) / 3 - 8;
        global_0x0804a198[global_0x0804a190] = %eax;
        global_0x0804a19c[global_0x0804a190] = (ecx) / 3 - 7;
        global_0x0804a1a0[global_0x0804a190] = (ecx) / 3 - 3;
        global_0x0804a1a4[global_0x0804a190] = (ecx) / 3 - 4;
        global_0x0804a1a8[global_0x0804a190] = (ecx) / 3 - 6;
        global_0x0804a1ac[global_0x0804a190] = (ecx) / 3 - 5;
        global_0x0804a1b0[global_0x0804a190] = (ecx) / 3 - 1;
        global_0x0804a1b4[global_0x0804a190] = (ecx) / 3 - 2;
        global_0x0804a1b8[global_0x0804a190] = (ecx) / 3 - 7;
        global_0x0804a1bc[global_0x0804a190] = (ecx) / 3 - 3;
        global_0x0804a1c0[global_0x0804a190] = (ecx) / 3 - 1;
        global_0x0804a1c4[global_0x0804a190] = (ecx) / 3 - 5;
        global_0x0804a1c8[global_0x0804a190] = %eax;
        global_0x0804a1cc[global_0x0804a190] = (ecx) / 3 - 4;
        global_0x0804a1d0[global_0x0804a190] = (ecx) / 3 - 2;
        global_0x0804a1d4[global_0x0804a190] = (ecx) / 3 - 6;
        global_0x0804a190 += 16;
        eax = proc_0x080489e4(st_1, local12, local13, param4, st_10 + 10., (st_7 + st_7) / 1.4142135, param7 - 1, param8, 0, st_10 + 10.); /* Warning: also results in st_13, ecx, edx, st5, st6, st7 */
        local92 = st_13;
        if (param8 != 0) {
            local66 = -90.;
            esi = 0;
            local91 = esi;
            do {
                esi_7 = local91;
                st_15 = proc_0x080489e4(st_1, local12, local13, param4 + local66, param5, (st_7 + st_7) / 1.4142135, param7 - 1, 0, 1, st_14);
                eax = proc_0x080489e4(st_1, local12, local13, param4, param5 + local66, (st_7 + st_7) / 1.4142135, param7 - 1, 0, 1, st_15); /* Warning: also results in st_18, ecx, edx, st5, st6 */
                local92 = st_18;
                st7 = local66 + 180.;
                local66 = local66 + 180.;
                esi_8 = esi_7 + 1;
                local91 = esi_8;
            } while (esi_7 + 1 != 2);
        }
    }
    param10 = local92;
    return eax; /* WARNING: Also returning: st := param10, ecx := ecx, edx := edx, st5 := st5, st6 := st6, st7 := st7 */
}

