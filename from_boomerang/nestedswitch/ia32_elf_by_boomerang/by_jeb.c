
int main(unsigned int param0) {
alab1:
    switch(param0) {
        case 2: {
            →puts("Two!");
            return 0;
        }
        case 3: {
            break;
        }
        case 4: {
            switch((unsigned int)(7 - param0)) {
                case 0: {
                    →puts("Seven!");
                    return 0;
                }
                case 1: {
                    →puts("Six!");
                    return 0;
                }
                case 2: {
                    →puts("Five!");
                    return 0;
                }
                case 3: {
                    break;
                }
                case 4: {
                    break alab1;
                }
                case 5: {
                    →puts("Two!");
                    return 0;
                }
                default: {
                    →puts("Other!");
                    return 0;
                }
            }
            →puts("Four!");
            return 0;
        }
        case 5: {
            →puts("Five!");
            return 0;
        }
        case 6: {
            →puts("Six!");
            return 0;
        }
        case 7: {
            →puts("Seven!");
            return 0;
        }
        default: {
            →puts("Other!");
            return 0;
        }
    }
    →puts("Three!");
    return 0;
}

int sub_804829E() {
    return gvar_8049630();
}
