
int main(unsigned int param0) {
    switch(param0) {
        case 0: 
        case 1: {
            →puts("0 or 1");
            return 0;
        }
        case 2: {
            →puts((char*)&gvar_804854B);
            return 0;
        }
        case 3: {
            →puts((char*)&gvar_804854D);
            return 0;
        }
        case 4: {
            →puts((char*)&gvar_804854F);
            return 0;
        }
        case 5: {
            →puts((char*)&gvar_8048551);
            return 0;
        }
        case 7: {
            →puts((char*)&gvar_8048553);
            return 0;
        }
        default: {
            →puts("all other cases");
            return 0;
        }
    }
}

void sub_80482D0() {
    jump gvar_804A008;
}

void sub_8048300() {
    jump __gmon_start__;
}
