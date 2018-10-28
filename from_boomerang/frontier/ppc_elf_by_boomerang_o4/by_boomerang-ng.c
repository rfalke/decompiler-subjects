int main(int argc, char *argv[]);

/** address: 0x100003f0 */
int main(int argc, char *argv[])
{
    int g3_1; 		// r3{7}
    int g3_2; 		// r3{8}
    int g3_5; 		// r3{10}
    int local0; 		// g3_1{7}

    local0 = argc;
    if (argc == 5) {
        do {
bb0x10000414:
            g3_1 = local0;
            g3_2 = g3_1 - 1;
            local0 = g3_2;
            if (g3_1 - 1 <= 12) {
bb0x1000040c:
            }
            else {
                g3_5 = g3_1 - 2;
                local0 = g3_5;
                if (g3_1 <= 2) {
                    if (g3_1 > 2) {
                        goto bb0x10000414;
                    }
                    return 13;
                }
                return 13;
            }
            goto bb0x1000040c;
        } while (g3_1 - 1 <= 12);
    }
    else {
        if (argc <= 5 && argc == 2) {
            do {
            } while (argc > 0);
        }
    }
    return 13;
}

