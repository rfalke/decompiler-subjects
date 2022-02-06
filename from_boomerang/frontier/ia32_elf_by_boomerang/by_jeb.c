
int main(unsigned int param0) {
    if(param0 == 5) {
        do {
            unsigned int v0 = param0;
            --param0;
            if((int)v0 > 1) {
                unsigned int v1 = param0;
                --param0;
                if((int)v1 > 2) {
                    return 13;
                }
            }
        }
        while(param0 != 12 && (int)param0 > 0);
    }
    else if((int)param0 <= 5 && param0 == 2) {
        while((int)param0 > 0) {
        }
    }
    return 13;
}

int sub_804822A() {
    return gvar_8049568();
}
