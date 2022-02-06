
int main(unsigned int param0) {
    int v0;
    int v1;
    int v2;
    if((int)param0 > 2) {
        do {
            if(((int)param0 > 2 || (int)param0 <= 3)) {
                →printf((char*)&gvar_804849E, v0, v1, v2);
            loc_804837D:
                →printf((char*)&gvar_804849C, v0, v1, v2);
            }
            else if((int)param0 > 4) {
                goto loc_804837D;
            }
        }
        while((int)param0 <= 5);
    }
    else {
        while(param0 != 11 && (int)param0 <= 11) {
        }
    }
    return 7;
}

int sub_804824E() {
    return gvar_8049594();
}
