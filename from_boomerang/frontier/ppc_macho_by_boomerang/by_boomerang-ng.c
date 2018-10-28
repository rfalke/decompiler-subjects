int main(int argc, char *argv[]);

/** address: 0x00001c90 */
int main(int argc, char *argv[])
{
    int local0; 		// m[g1 + 24]
    int local1; 		// m[g1 + 24]{13}
    int local2; 		// m[g1 + 24]{12}
    int local3; 		// local0{20}

    local0 = argc;
    if (argc == 5) {
        do {
            local2 = local0;
            local1 = local2 - 1;
            local3 = local1;
            if (local2 <= 1) {
                if (local1 == 12) {
                    break;
                }
bb0x1d74:
                local0 = local3;
            }
            else {
                local0 = local1 - 1;
                local3 = local0;
                if (local1 > 2) {
bb0x1d08:
                    return 13;
                }
                goto bb0x1d74;
            }
        } while (local0 > 0);
    }
    else {
        if (argc > 5) {
            if (argc == 9) {
                if (argc == 10) {
                }
            }
        }
        else {
            if (argc == 2) {
                do {
                } while (argc > 0);
                goto bb0x1d08;
            }
        }
    }
    return 13;
}

