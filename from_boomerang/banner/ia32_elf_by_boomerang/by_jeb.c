
int main(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22, int param23, int param24, int param25, int param26, int param27, int param28, int param29, int param30, int param31, int param32, int param33, int param34, int param35, int param36, int param37, int param38, int param39, int param40, int param41, int param42, int param43, int param44, int param45, int param46, int param47, int param48, int param49, int param50, int param51, int param52, int param53, int param54, int param55, int param56, int param57, int param58, int param59, int param60, int param61, int param62, int param63, int param64, int param65, int param66, int param67, int param68, int param69, int param70, int param71, int param72, int param73, int param74, int param75, int param76, int param77, int param78, int param79, int param80, int param81, int param82, int param83, int param84, int param85, int param86, int param87, int param88, int param89, int param90, int param91, int param92, int param93, int param94, int param95, int param96, int param97, int param98, int param99, int par194, int par198, int par19C, int par1A0, int par1A4, int par1A8, int par1AC, int par1B0, int par1B4, int par1B8, int par1BC, int par1C0, int par1C4, int par1C8, int par1CC, int par1D0, int par1D4, int par1D8, int par1DC, int par1E0, int par1E4, int par1E8, int par1EC, int par1F0, int par1F4, int par1F8, int par1FC, int par200) {
    char v0;
    char v1;
    void* ptr0 = →malloc(12);
    *(int*)((int)ptr0 + 4) = "HelloWorld";
    int v2 = 2;
    ptr0 = (void*)((int)ptr0 + 4);
    --v2;
    while(v2) {
        size_t v3 = →strlen(*(char**)ptr0);
        if((int)v3 > 10) {
            v3 = 10;
        }
        for(int i = 0; i <= 6; ++i) {
            int j;
            for(j = 0; j < (int)v3; ++j) {
                int v4 = (int)*(char*)(*(int*)ptr0 + j) - 32;
                if(v4 < 0) {
                    v4 = 0;
                }
                for(int k = 0; k <= 6; ++k) {
                    char* ptr1 = (char*)((int)(int*)(j * 8 + (int)&v1) + k);
                    int v5 = v4;
                    if(v5 < 0) {
                        v5 += 7;
                    }
                    int v6 = (v5 >> 3) * 7 + i;
                    int v7 = v4;
                    int v8 = v4;
                    if(v8 < 0) {
                        v8 += 7;
                    }
                    *ptr1 = *(char*)((v7 - (v8 >> 3) * 8) * 7 + *(int*)(v6 * 4 + (int)&glyphs) + k);
                }
                *(char*)(j * 8 + (int)&v0) = 32;
            }
            for(j = v3 * 8 - 1; j >= 0 && *(char*)((int)&v1 + j) == 32; --j) {
                *(char*)((int)&v1 + j) = 0;
            }
            →puts(&v1);
        }
        →puts((char*)0x8049B04);
        ptr0 = (void*)((int)ptr0 + 4);
        --v2;
    }
    return 0;
}

void sub_8048290() {
    jump gvar_804AD74;
}

int sub_80482A6() {
    /*BAD_CALL!*/ sub_8048290();
}

int sub_80482B6() {
    /*BAD_CALL!*/ sub_8048290();
}

int sub_80482C6() {
    /*BAD_CALL!*/ sub_8048290();
}

int sub_80482D6() {
    /*BAD_CALL!*/ sub_8048290();
}

void sub_8048362() {
}

int sub_80485BE() {
    int result;
    int v0;
    int v1;
    int v2;
    do {
        *(int*)(v1 * 4 + 134523660)();
        v0 = v1;
        --v1;
    }
    while(v0);
    finalizer_0(v2, 0);
    return result;
}
