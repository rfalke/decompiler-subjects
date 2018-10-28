int main(int argc, char *argv[]);

/** address: 0x08048450 */
int main(int argc, char *argv[])
{
    int eax; 		// r24
    char *eax_12; 		// r24{11}
    int eax_15; 		// r24{15}
    int eax_3; 		// r24{16}
    FILE *eax_4; 		// r24{6}
    int eax_6; 		// r24{7}
    char *eax_9; 		// r24{9}
    int edx; 		// r26
    char local0; 		// m[esp - 0x40c]
    int local6; 		// eax_3{16}

    if (argc <= 1) {
        eax = 1;
        local6 = eax;
    }
    else {
        edx = *(argv + 4);
        eax_4 = fopen(edx, "r");
        eax_6 = 1;
        local6 = eax_6;
        if (eax_4 != 0) {
            eax_9 = fgets(&local0, 1024, eax_4);
            if (eax_9 != 0) {
                eax_12 = strchr(eax_9, 10);
                if (eax_12 != 0) {
                    *(union { char; __size8; }*)eax_12 = 0;
                }
                puts(&local0);
            }
            eax_15 = fclose(eax_4);
            local6 = eax_15;
        }
    }
    eax_3 = local6;
    return eax_3;
}

