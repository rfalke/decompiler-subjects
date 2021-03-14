
int main(char* param0, char* param1, char* param2) {
    char* ptr0;
    int result;
    char* ptr0;
    char* ptr1;
    int* ptr2;
    int result1;
    char* ptr3;
    char* ptr4;
    char v0;
    int v1;
    char* ptr5;
    if((int)param0 > 1) {
        if((int)param0 <= 2) {
            ptr3 = ptr4;
            int v2 = main(-86, 0, (int)(int*)(param2 + 1));
            int v3 = main(-87, (int)(int*)(1 - (int)param1), (int)(int*)(v2 + (int)param2));
            ptr4 = (char*)main(-79, -13, (int)(int*)(v3 + (int)param2));
        }
        if((int)param0 < (int)param1) {
            ptr3 = ptr4;
            ptr4 = (char*)main((int)(int*)(param0 + 1), (int)param1, (int)param2);
        }
        ptr3 = ptr4;
        char* ptr6 = (char*)main(-94, (int)(int*)(param0 - 27), (int)param2);
        if(!ptr6 || param0 != 2) {
            result1 = 16;
        }
        else if((int)param1 > 12) {
            result1 = 9;
        }
        else {
            ptr3 = ptr6;
            ptr2 = "%s %d %d\n";
            ptr1 = param1 + 1;
            ptr0 = (char*)0x2;
            result = main((int)ptr0, (int)ptr1, (int)ptr2);
            return result;
        }
    }
    else {
        if((int)param0 < 0) {
            if((int)param0 < -72) {
                ptr2 = "@n\'+,#\'/*{}w+/w#cdnr/+,{}r/*de}+,/*{*+,/w{%+,/w#q#n+,/#{l,+,/n{n+,/+#n+,/#;#q#n+,/+k#;*+,/\'r :\'d*\'3,}{w+K w\'K:\'+}e#\';dq#\'l q#\'+d\'K#!/+k#;q#\'r}eKK#}w\'r}eKK{nl]\'/#;#q#n\'){)#}w\'){){nl]\'/+#n\';d}rw\' i;# ){nl]!/n{n#\'; r{#w\'r nc{nl]\'/#{l,+\'K {rw\' iK{;[{nl]\'/w#q#n\'wk nw\' iwk{KK{nl]!/w{%\'l##w#\' i; :{nl]\'/*{q#\'ld;r\'}{nlwb!/*de}\'c ;;{nl\'-{}rw]\'/+,}##\'*}#nc,\',#nw]\'/+kd\'+e}+;#\'rdq#w! nr\'/ \') }+}{rl#\'{n\' \')# }\'+}##(!!/";
                ptr1 = param0;
                ptr0 = param1;
            }
            else if((int)param0 >= -50) {
                ptr3 = ptr5;
                ptr2 = (int*)(param2 + 1);
                ptr1 = param1;
                char* ptr7 = param0;
                if(*param2 == 47) {
                    ptr7 = param0 + 1;
                }
                ptr0 = ptr7;
            }
            else if((int)*param2 != param1) {
                ptr3 = param0;
                ptr2 = (int*)(param2 + 1);
                ptr1 = param1;
                ptr0 = (char*)0xFFFFFFBF;
            }
            else {
                result = →_IO_putc((int)*(param2 + 31), stdout);
                return result;
            }
            result = main((int)ptr0, (int)ptr1, (int)ptr2);
            return result;
        }
        else if((int)param0 > 0) {
            ptr3 = (unsigned int)v0 | ((unsigned int)v1 << 8);
            ptr2 = (int*)&gvar_8048532;
            ptr1 = (char*)0x2;
            ptr0 = (char*)0x2;
            result = main((int)ptr0, (int)ptr1, (int)ptr2);
            return result;
        }
        v0 = *param2;
        result1 = 0;
        if(v0 != 47) {
            ptr3 = ptr4;
            ptr2 = (int*)(param2 + 1);
            int v4 = main(-61, (int)v0, "!ek;dc i@bK\'(q)-[w]*%n+r3#l,{}:\nuwloca-O;m .vpbks,fxntdCeghiry");
            int v5 = main(0, v4, (int)ptr2);
            if(v5) {
                return 1;
            }
        }
        else {
            return 1;
        }
    }
    return result1;
}

void sub_8048270() {
    jump gvar_8049810;
}

int sub_8048286() {
    /*BAD_CALL!*/ sub_8048270();
}

int sub_8048296() {
    /*BAD_CALL!*/ sub_8048270();
}

void sub_8048322() {
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80483C6(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int* ptr0;
    int v4 = v0;
    int v5 = main(v1 + 1, v2, v3);
    v4 = v5;
    int v6 = main(-94, v1 - 27, v3);
    if(v6 && v1 == 2 && v2 <= 12) {
        v4 = v6;
        int v7 = main(2, v2 + 1, "%s %d %d\n");
    }
    jump *(ptr0 + 1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804842A(int param0, int param1) {
    int v0;
    char* ptr0;
    char v1 = *ptr0;
    if(v1 != 47) {
        int v2 = v0;
        int* ptr1 = (int*)(ptr0 + 1);
        int v3 = main(-61, (int)v1, "!ek;dc i@bK\'(q)-[w]*%n+r3#l,{}:\nuwloca-O;m .vpbks,fxntdCeghiry");
        int v4 = main(0, v3, (int)ptr1);
    }
    jump param0;
}
