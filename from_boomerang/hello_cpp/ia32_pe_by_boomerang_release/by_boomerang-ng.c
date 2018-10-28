int global_0x00405558 = 0;
void *WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);
__size32 proc_0x004010c0(__size32 param1);
__size32 proc_0x00401150(HINSTANCE param1, int param2);

/** address: 0x00401000 */
void *WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    LRESULT eax; 		// r24
    __size32 eax_1; 		// r24{17}
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    HINSTANCE esi; 		// r30
    int esp; 		// r28
    union { __size32; LPCSTR; } *esp_1; 		// r28
    __size32 esp_10; 		// r28{30}
    __size32 esp_11; 		// r28{30}
    __size32 esp_12; 		// r28{30}
    __size32 esp_13; 		// r28{36}
    __size32 esp_14; 		// r28{52}
    __size32 esp_15; 		// r28{52}
    __size32 esp_16; 		// r28{52}
    __size32 esp_17; 		// r28{57}
    __size32 esp_18; 		// r28{57}
    __size32 esp_19; 		// r28{57}
    __size32 esp_2; 		// r28{3}
    __size32 esp_20; 		// r28{60}
    __size32 esp_21; 		// r28{60}
    __size32 esp_22; 		// r28{60}
    union { __size32; __size32 *; } esp_23; 		// r28{76}
    __size32 esp_24; 		// r28{40}
    __size32 esp_25; 		// r28{40}
    __size32 esp_26; 		// r28{40}
    __size32 esp_27; 		// r28{64}
    __size32 esp_28; 		// r28{64}
    __size32 esp_29; 		// r28{64}
    __size32 esp_3; 		// r28{3}
    unsigned int esp_30; 		// r28{1}
    unsigned int esp_31; 		// r28{1}
    __size32 esp_4; 		// r28{3}
    __size32 esp_5; 		// r28{9}
    __size32 esp_6; 		// r28{9}
    __size32 esp_7; 		// r28{9}
    union { __size32; LPCSTR; } *esp_8; 		// r28{12}
    union { __size32; LPCSTR; } *esp_9; 		// r28{12}
    HINSTANCE local0; 		// m[esp + 4]
    __size32 local1; 		// m[esp - 32]
    int local10; 		// m[esp + 16]
    int local100; 		// m[esp_30 - 56]{9}
    int local101; 		// m[esp_30 - 56]{0}
    int local102; 		// m[esp_30 - 56]{0}
    int local103; 		// m[esp_30 - 56]{52}
    int local104; 		// m[esp_30 - 56]{52}
    int local105; 		// m[esp_30 - 56]{0}
    int local106; 		// m[esp_30 - 56]{0}
    int local107; 		// m[esp_30 - 56]{0}
    int local108; 		// m[esp_30 - 56]{0}
    int local109; 		// %flags{3}
    int local11; 		// m[esp_30 + 4]{3}
    int local110; 		// %flags{3}
    int local111; 		// %flags{44}
    int local112; 		// %flags{3}
    int local113; 		// %flags{3}
    int local114; 		// %flags{68}
    int local115; 		// %flags{31}
    int local116; 		// %flags{31}
    int local117; 		// %flags{31}
    int local118; 		// %flags{53}
    int local119; 		// %flags{53}
    int local12; 		// m[esp_30 + 4]{9}
    int local120; 		// %flags{53}
    int local121; 		// %flags{53}
    int local122; 		// %flags{57}
    int local123; 		// %flags{57}
    int local124; 		// %flags{57}
    int local125; 		// %flags{57}
    int local126; 		// %flags{77}
    int local127; 		// %flags{44}
    int local128; 		// %flags{44}
    int local129; 		// %ZF{3}
    int local13; 		// m[esp_30 + 4]{30}
    int local130; 		// %ZF{3}
    int local131; 		// %ZF{45}
    int local132; 		// %ZF{3}
    int local133; 		// %ZF{3}
    int local134; 		// %ZF{69}
    int local135; 		// %ZF{31}
    int local136; 		// %ZF{31}
    int local137; 		// %ZF{31}
    int local138; 		// %ZF{53}
    int local139; 		// %ZF{53}
    int local14; 		// m[esp_30 + 4]{30}
    int local140; 		// %ZF{53}
    int local141; 		// %ZF{53}
    int local142; 		// %ZF{57}
    int local143; 		// %ZF{57}
    int local144; 		// %ZF{57}
    int local145; 		// %ZF{57}
    int local146; 		// %ZF{77}
    int local147; 		// %ZF{45}
    int local148; 		// %ZF{45}
    int local149; 		// %CF{3}
    int local15; 		// m[esp_30 + 4]{30}
    int local150; 		// %CF{3}
    int local151; 		// %CF{46}
    int local152; 		// %CF{3}
    int local153; 		// %CF{3}
    int local154; 		// %CF{70}
    int local155; 		// %CF{31}
    int local156; 		// %CF{31}
    int local157; 		// %CF{31}
    int local158; 		// %CF{53}
    int local159; 		// %CF{53}
    int local16; 		// m[esp_30 + 4]{52}
    int local160; 		// %CF{53}
    int local161; 		// %CF{53}
    int local162; 		// %CF{57}
    int local163; 		// %CF{57}
    int local164; 		// %CF{57}
    int local165; 		// %CF{57}
    int local166; 		// %CF{77}
    int local167; 		// %CF{46}
    int local168; 		// %CF{46}
    int local169; 		// m[esp - 28]
    int local17; 		// m[esp_30 + 4]{52}
    __size32 local170; 		// eax{19}
    __size32 local171; 		// esp_24{40}
    int local172; 		// local111{44}
    int local173; 		// local131{45}
    int local174; 		// local151{46}
    __size32 local175; 		// esp_27{64}
    int local176; 		// local114{68}
    int local177; 		// local134{69}
    int local178; 		// local154{70}
    union { __size32 *; __size32; } local179; 		// esp{80}
    int local18; 		// m[esp_30 + 8]{3}
    int local19; 		// m[esp_30 + 8]{9}
    __size32 local2; 		// m[esp - 36]
    int local20; 		// m[esp_30 + 8]{30}
    int local21; 		// m[esp_30 + 8]{30}
    int local22; 		// m[esp_30 + 8]{30}
    int local23; 		// m[esp_30 + 8]{52}
    int local24; 		// m[esp_30 + 8]{52}
    int local25; 		// m[esp_30 + 12]{3}
    int local26; 		// m[esp_30 + 12]{9}
    int local27; 		// m[esp_30 + 12]{30}
    int local28; 		// m[esp_30 + 12]{30}
    int local29; 		// m[esp_30 + 12]{30}
    int local3; 		// m[esp - 40]
    int local30; 		// m[esp_30 + 12]{52}
    int local31; 		// m[esp_30 + 12]{52}
    int local32; 		// m[esp_30 + 16]{3}
    int local33; 		// m[esp_30 + 16]{9}
    int local34; 		// m[esp_30 + 16]{30}
    int local35; 		// m[esp_30 + 16]{30}
    int local36; 		// m[esp_30 + 16]{30}
    int local37; 		// m[esp_30 + 16]{52}
    int local38; 		// m[esp_30 + 16]{52}
    int local39; 		// m[esp_30 - 32]{3}
    int local4; 		// m[esp - 44]
    int local40; 		// m[esp_30 - 32]{9}
    int local41; 		// m[esp_30 - 32]{0}
    int local42; 		// m[esp_30 - 32]{0}
    int local43; 		// m[esp_30 - 32]{52}
    int local44; 		// m[esp_30 - 32]{52}
    int local45; 		// m[esp_30 - 32]{0}
    int local46; 		// m[esp_30 - 32]{0}
    int local47; 		// m[esp_30 - 32]{0}
    int local48; 		// m[esp_30 - 32]{0}
    int local49; 		// m[esp_30 - 36]{3}
    int local5; 		// m[esp - 48]
    int local50; 		// m[esp_30 - 36]{9}
    int local51; 		// m[esp_30 - 36]{0}
    int local52; 		// m[esp_30 - 36]{0}
    int local53; 		// m[esp_30 - 36]{52}
    int local54; 		// m[esp_30 - 36]{52}
    int local55; 		// m[esp_30 - 36]{0}
    int local56; 		// m[esp_30 - 36]{0}
    int local57; 		// m[esp_30 - 36]{0}
    int local58; 		// m[esp_30 - 36]{0}
    int local59; 		// m[esp_30 - 40]{3}
    HINSTANCE local6; 		// m[esp - 52]
    int local60; 		// m[esp_30 - 40]{9}
    int local61; 		// m[esp_30 - 40]{0}
    int local62; 		// m[esp_30 - 40]{0}
    int local63; 		// m[esp_30 - 40]{52}
    int local64; 		// m[esp_30 - 40]{52}
    int local65; 		// m[esp_30 - 40]{0}
    int local66; 		// m[esp_30 - 40]{0}
    int local67; 		// m[esp_30 - 40]{0}
    int local68; 		// m[esp_30 - 40]{0}
    int local69; 		// m[esp_30 - 44]{3}
    unsigned int local7; 		// m[esp - 56]
    int local70; 		// m[esp_30 - 44]{9}
    int local71; 		// m[esp_30 - 44]{0}
    int local72; 		// m[esp_30 - 44]{0}
    int local73; 		// m[esp_30 - 44]{52}
    int local74; 		// m[esp_30 - 44]{52}
    int local75; 		// m[esp_30 - 44]{0}
    int local76; 		// m[esp_30 - 44]{0}
    int local77; 		// m[esp_30 - 44]{0}
    int local78; 		// m[esp_30 - 44]{0}
    int local79; 		// m[esp_30 - 48]{3}
    HINSTANCE local8; 		// m[esp + 8]
    int local80; 		// m[esp_30 - 48]{9}
    int local81; 		// m[esp_30 - 48]{0}
    int local82; 		// m[esp_30 - 48]{0}
    int local83; 		// m[esp_30 - 48]{52}
    int local84; 		// m[esp_30 - 48]{52}
    int local85; 		// m[esp_30 - 48]{0}
    int local86; 		// m[esp_30 - 48]{0}
    int local87; 		// m[esp_30 - 48]{0}
    int local88; 		// m[esp_30 - 48]{0}
    int local89; 		// m[esp_30 - 52]{3}
    LPSTR local9; 		// m[esp + 12]
    int local90; 		// m[esp_30 - 52]{9}
    int local91; 		// m[esp_30 - 52]{0}
    int local92; 		// m[esp_30 - 52]{0}
    int local93; 		// m[esp_30 - 52]{52}
    int local94; 		// m[esp_30 - 52]{52}
    int local95; 		// m[esp_30 - 52]{0}
    int local96; 		// m[esp_30 - 52]{0}
    int local97; 		// m[esp_30 - 52]{0}
    int local98; 		// m[esp_30 - 52]{0}
    int local99; 		// m[esp_30 - 56]{3}

    (*0x45de)(hInstance, 0x45de, SUBFLAGS32(esp_30, 28, (esp_30 - 28)), esp_30 == 28, esp_30 < 28, ebx, ebp, hInstance, esi, edi, 100, 0x4054f4, 103, hInstance, pc, hPrevInstance, lpCmdLine, nCmdShow);
    *(__size32*)(esp_2 - 4) = 100;
    *(__size32*)(esp_2 - 8) = 0x405490;
    *(__size32*)(esp_2 - 12) = 109;
    *(__size32*)(esp_2 - 16) = esi;
    (*edi)(esi, edi, <all>, local109, local129, local149, ebx, ebp, local11, local39, local49, local59, local69, local79, local89, local99, local18, local25, local32);
    *(__size32*)(esp_5 - 4) = esi;
    esp_8 = proc_0x004010c0(*(esp_5 - 4)); /* Warning: also results in esi */
    eax = *(esp_8 + 56);
    *(__size32*)(esp_8 - 4) = eax;
    *(__size32*)(esp_8 - 8) = esi;
    eax_1 = proc_0x00401150(*(esp_8 - 8), *(esp_8 - 4));
    local170 = eax_1;
    if (eax_1 != 0) {
        *(__size32*)esp_8 = 109;
        *(__size32*)(esp_8 - 4) = esi;
        eax = LoadAcceleratorsA(*(esp_8 - 4), *esp_8); /* Warning: also results in edx */
        *(__size32*)esp_8 = 0;
        *(__size32*)(esp_8 - 4) = 0;
        *(__size32*)(esp_8 - 8) = 0;
        *(union { void *; __size32; }*)(esp_8 - 12) = esp_8 + 12;
        (*0x45bc)(eax, esp_8 + 12, edx, eax, 0x45bc, <all>, LOGICALFLAGS32(eax_1), LOGICALFLAGS32(eax_1), LOGICALFLAGS32(eax_1), ebx, ebp, local12, local40, local50, local60, local70, local80, local90, local100, local19, local26, local33);
        local179 = esp_10;
        local115 = LOGICALFLAGS32(eax);
        local172 = local115;
        local173 = local135;
        local174 = local155;
        if (eax != 0) {
            *(__size32*)(esp_10 - 4) = ebx;
            ebx = 0x45a4;
            *(__size32*)(esp_10 - 8) = ebp;
            esp_13 = esp_10 - 8;
            ebp = 0x4590;
            local171 = esp_13;
            do {
                esp_24 = local171;
                local111 = local172;
                local131 = local173;
                local151 = local174;
                eax = *(esp_24 + 16);
                *(__size32*)(esp_24 - 4) = esp_24 + 16;
                *(__size32*)(esp_24 - 8) = esi;
                *(__size32*)(esp_24 - 12) = eax;
                (*ebx)(eax, ecx, esp_24 + 16, ebx, ebp, esi, edi, <all>, local111, local131, local151, local13, local42, local52, local62, local72, local82, local92, local102, local20, local27, local34);
                local175 = esp_14;
                local118 = LOGICALFLAGS32(eax);
                local176 = local118;
                local177 = local138;
                local178 = local158;
                if (eax == 0) {
                    *(__size32*)(esp_14 - 4) = esp_14 + 16;
                    (*ebp)(eax, esp_14 + 16, edx, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), local16, local43, local53, local63, local73, local83, local93, local103, local23, local30, local37);
                    local176 = local122;
                    local177 = local142;
                    local178 = local162;
                    *(__size32*)(esp_17 - 4) = esp_17 + 16;
                    ecx = DispatchMessageA(*(esp_17 - 4)); /* Warning: also results in edx, esp_20 */
                    local175 = esp_20;
                }
                esp_27 = local175;
                local114 = local176;
                local134 = local177;
                local154 = local178;
                *(__size32*)(esp_27 - 4) = 0;
                *(__size32*)(esp_27 - 8) = 0;
                *(__size32*)(esp_27 - 12) = 0;
                *(__size32*)(esp_27 - 16) = esp_27 + 16;
                (*edi)(esp_27 + 16, ecx, edx, ebx, ebp, esi, edi, <all>, local114, local134, local154, local16, local41, local51, local61, local71, local81, local91, local101, local23, local30, local37);
                local171 = esp_23;
                local126 = LOGICALFLAGS32(eax);
                local172 = local126;
                local173 = local146;
                local174 = local166;
            } while (eax != 0);
            esp = esp_23 + 8;
            local179 = esp;
        }
        esp = local179;
        eax = *(esp + 16);
        local170 = eax;
    }
    eax = local170;
    return eax;
}

/** address: 0x004010c0 */
__size32 proc_0x004010c0(__size32 param1)
{
    ATOM eax; 		// r24
    int ecx; 		// r25
    int edx; 		// r26
    __size32 esi; 		// r30
    int esp; 		// r28
    __size32 esp_1; 		// r28{3}
    __size32 esp_2; 		// r28{3}
    __size32 esp_3; 		// r28{3}
    unsigned int esp_4; 		// r28{1}
    unsigned int esp_5; 		// r28{1}
    __size32 local0; 		// m[esp + 4]
    __size32 local1; 		// m[esp - 28]
    unsigned int local10; 		// m[esp - 64]
    int local2; 		// m[esp - 32]
    int local3; 		// m[esp - 36]
    int local4; 		// m[esp - 40]
    int local5; 		// m[esp - 44]
    int local6; 		// m[esp - 48]
    __size32 local7; 		// m[esp - 52]
    int local8; 		// m[esp - 56]
    __size32 local9; 		// m[esp - 60]

    (*0x460e)(param1, 0x460e, SUBFLAGS32(esp_4, 48, esp_4 - 48), esp_4 == 48, esp_4 < 48, param1, param1, 0, 0, 0x4011b0, 3, 48, esi, 107, param1, pc);
    *(__size32*)(esp_1 - 4) = 0x7f00;
    *(__size32*)(esp_1 - 8) = 0;
    *(__size32*)(esp_1 + 28) = eax;
    eax = LoadCursorA(*(esp_1 - 8), *(esp_1 - 4)); /* Warning: also results in ecx, edx */
    *(HCURSOR*)(esp_1 + 32) = eax;
    eax = *(esp_1 + 24);
    *(__size32*)(esp_1 - 4) = 108;
    *(__size32*)(esp_1 - 8) = eax;
    *(__size32*)(esp_1 + 36) = 6;
    *(__size32*)(esp_1 + 40) = 109;
    *(__size32*)(esp_1 + 44) = 0x405490;
    (*esi)(eax, ecx, edx, esi, <all>, flags, ZF, CF, *(esp_4 + 4), *(esp_4 - 28), *(esp_4 - 32), *(esp_4 - 36), *(esp_4 - 40), *(esp_4 - 44), *(esp_4 - 48), *(esp_4 - 52), *(esp_4 - 56), *(esp_4 - 60), *(esp_4 - 64));
    *(__size32*)(esp + 48) = eax;
    *(__size32*)(esp - 4) = esp + 4;
    RegisterClassExA(*(esp - 4));
    esi = *esp;
    return esi;
}

/** address: 0x00401150 */
__size32 proc_0x00401150(HINSTANCE param1, int param2)
{
    BOOL eax; 		// r24

    global_0x00405558 = param1;
    eax = CreateWindowExA(0, "", "", 0xcf0000, 0x80000000, 0, 0x80000000, 0, 0, 0, param1, 0);
    if (eax != 0) {
        ShowWindow(eax, param2);
        UpdateWindow(eax);
        eax = 1;
    }
    return eax;
}

