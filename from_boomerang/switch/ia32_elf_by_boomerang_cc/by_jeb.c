
void __fsr(int param0, int param1) {
}

void _mcount() {
}

int main(int param0) {
    switch((unsigned int)(param0 - 2)) {
        case 0: {
            →printf("Two!\n");
            return 0;
        }
        case 1: {
            →printf("Three!\n");
            return 0;
        }
        case 2: {
            →printf("Four!\n");
            return 0;
        }
        case 3: {
            →printf("Five!\n");
            return 0;
        }
        case 4: {
            break;
        }
        case 5: {
            →printf("Seven!\n");
            return 0;
        }
        default: {
            →printf("Other!\n");
            return 0;
        }
    }
    →printf("Six!\n");
    return 0;
}

int sub_8048795() {
    jump gvar_8049A08;
}

int sub_8048839() {
    call();
    hlt();
}
