int main(int argc, char *argv[]);
void copy1_four_times();
void copy1_eight_times();
void copy2_four_times(__size32 param1, __size32 param2, int param3);
void copy2_eight_times(__size32 param1, __size32 param2, int param3);

/** address: 0x08048704 */
int main(int argc, char *argv[])
{
    __size32 eax; 		// r24
    void *eax_1; 		// r24{0}
    int ebp; 		// r29
    int ecx; 		// r25
    int edx; 		// r26
    int esp; 		// r28

    eax_1 = malloc(200);
    eax = malloc(200); /* Warning: also results in ecx, edx */
    copy1_four_times(eax, ecx, edx, esp - 4, SUBFLAGS32(esp - 4, 32, esp - 36), esp == 36, (unsigned int)(esp - 4) < 32, ebp, eax, eax_1, 200, 100, eax_1, eax, pc, argc, argv);
}



/** address: 0x08048586 */
void copy2_four_times(__size32 param1, __size32 param2, int param3)
{
    __size32 eax; 		// r24
    unsigned int edx; 		// r26
    union { __size32; __size16 *; } local0; 		// m[esp + 4]
    union { __size32; unsigned short *; } local1; 		// m[esp + 8]
    union { __size16 *; __size32; } local10; 		// local0{0}
    union { unsigned short *; __size32; } local11; 		// local1{0}
    int local2; 		// m[esp + 12]
    union { __size16 *; __size32; } local3; 		// param1{0}
    union { unsigned short *; __size32; } local4; 		// param2{0}
    int local5; 		// param3{0}
    union { __size16 *; __size32; } local6; 		// local0{0}
    union { unsigned short *; __size32; } local7; 		// local1{0}
    union { __size16 *; __size32; } local8; 		// local0{0}
    union { unsigned short *; __size32; } local9; 		// local1{0}

    local3 = param1;
    local4 = param2;
    local5 = param3;
    if (param3 <= 0) {
    }
    else {
        param1 = local3;
        param2 = local4;
        param3 = local5;
        local6 = param1;
        local7 = param2;
        local8 = param1;
        local9 = param2;
        local10 = param1;
        local11 = param2;
        while (param3 != 0) {
            eax = 4 - param3;
            if (eax == 2) {
bb0x80485da:
                local0 = local8;
                local1 = local9;
                edx = *(unsigned short*)local1;
                *(__size16*)local0 = (unsigned short) edx;
                local0 += 2;
                local1 += 2;
                local10 = local0;
                local11 = local1;
            }
            else {
                if (eax == 3) {
                    goto bb0x80485f1;
                }
                else {
                    if (eax == 1) {
                        goto bb0x80485c3;
                    }
                    else {
                        edx = *(unsigned short*)param2;
                        *(__size16*)param1 = (unsigned short) edx;
                        local0 = param1 + 2;
                        local1 = param2 + 2;
                        local6 = local0;
                        local7 = local1;
                    }
bb0x80485c3:
                    local0 = local6;
                    local1 = local7;
                    edx = *(unsigned short*)local1;
                    *(__size16*)local0 = (unsigned short) edx;
                    local0 += 2;
                    local1 += 2;
                    local8 = local0;
                    local9 = local1;
                    goto bb0x80485da;
                }
            }
bb0x80485f1:
            local0 = local10;
            local1 = local11;
            edx = *(unsigned short*)local1;
            *(__size16*)local0 = (unsigned short) edx;
            local0 += 2;
            local1 += 2;
            local2 = param3 - 4;
            local3 = local0;
            local4 = local1;
            local5 = local2;
            param1 = local3;
            param2 = local4;
            param3 = local5;
            local6 = param1;
            local7 = param2;
            local8 = param1;
            local9 = param2;
            local10 = param1;
            local11 = param2;
        }
    }
    return;
}

/** address: 0x08048612 */
void copy2_eight_times(__size32 param1, __size32 param2, int param3)
{
    unsigned int edx; 		// r26
    union { __size16 *; unsigned int; } local0; 		// m[esp + 4]
    union { unsigned short *; int; } local1; 		// m[esp + 8]
    union { unsigned int; __size16 *; } local10; 		// param1{0}
    union { int; unsigned short *; } local11; 		// param2{0}
    int local12; 		// local3{0}
    union { unsigned int; __size16 *; } local13; 		// local0{0}
    union { int; unsigned short *; } local14; 		// local1{0}
    union { unsigned int; __size16 *; } local15; 		// local0{0}
    union { int; unsigned short *; } local16; 		// local1{0}
    union { unsigned int; __size16 *; } local17; 		// local0{0}
    union { int; unsigned short *; } local18; 		// local1{0}
    union { unsigned int; __size16 *; } local19; 		// local0{0}
    int local2; 		// m[esp + 12]
    union { int; unsigned short *; } local20; 		// local1{0}
    union { unsigned int; __size16 *; } local21; 		// local0{0}
    union { int; unsigned short *; } local22; 		// local1{0}
    union { unsigned int; __size16 *; } local23; 		// local0{0}
    union { int; unsigned short *; } local24; 		// local1{0}
    union { __size16 *; __size32; } local25; 		// local0{0}
    union { unsigned short *; __size32; } local26; 		// local1{0}
    int local3; 		// m[esp + 12]{0}
    int local4; 		// m[esp + 12]{0}

    local10 = param1;
    local11 = param2;
    local12 = param3;
    if (param3 <= 0) {
    }
    else {
        param1 = local10;
        param2 = local11;
        local3 = local12;
        local13 = param1;
        local14 = param2;
        local15 = param1;
        local16 = param2;
        local17 = param1;
        local18 = param2;
        local19 = param1;
        local20 = param2;
        local21 = param1;
        local22 = param2;
        local23 = param1;
        local24 = param2;
        local25 = param1;
        local26 = param2;
        while (local3 != 0) {
            if (8 - local3 > 7) {
bb0x804863f:
                edx = *(unsigned short*)param2;
                *(__size16*)param1 = (unsigned short) edx;
                local0 = param1 + 2;
                local1 = param2 + 2;
                local13 = local0;
                local14 = local1;
bb0x8048656:
                local0 = local13;
                local1 = local14;
                edx = *(unsigned short*)local1;
                *(__size16*)local0 = (unsigned short) edx;
                local0 += 2;
                local1 += 2;
                local15 = local0;
                local16 = local1;
bb0x804866d:
                local0 = local15;
                local1 = local16;
                edx = *(unsigned short*)local1;
                *(__size16*)local0 = (unsigned short) edx;
                local0 += 2;
                local1 += 2;
                local17 = local0;
                local18 = local1;
bb0x8048684:
                local0 = local17;
                local1 = local18;
                edx = *(unsigned short*)local1;
                *(__size16*)local0 = (unsigned short) edx;
                local0 += 2;
                local1 += 2;
                local19 = local0;
                local20 = local1;
bb0x804869b:
                local0 = local19;
                local1 = local20;
                edx = *(unsigned short*)local1;
                *(__size16*)local0 = (unsigned short) edx;
                local0 += 2;
                local1 += 2;
                local21 = local0;
                local22 = local1;
bb0x80486b2:
                local0 = local21;
                local1 = local22;
                edx = *(unsigned short*)local1;
                *(__size16*)local0 = (unsigned short) edx;
                local0 += 2;
                local1 += 2;
                local23 = local0;
                local24 = local1;
bb0x80486c9:
                local0 = local23;
                local1 = local24;
                edx = *(unsigned short*)local1;
                *(__size16*)local0 = (unsigned short) edx;
                local0 += 2;
                local1 += 2;
                local25 = local0;
                local26 = local1;
                goto bb0x80486e0;
            }
            switch(8 - local4) {
            case 0:
                goto bb0x804863f;
            case 1:
                goto bb0x8048656;
            case 2:
                goto bb0x804866d;
            case 3:
                goto bb0x8048684;
            case 4:
                goto bb0x804869b;
            case 5:
                goto bb0x80486b2;
            case 6:
                goto bb0x80486c9;
            case 7:
                goto bb0x80486e0;
            }
bb0x80486e0:
            local0 = local25;
            local1 = local26;
            edx = *(unsigned short*)local1;
            *(__size16*)local0 = (unsigned short) edx;
            local0 += 2;
            local1 += 2;
            local2 = local3 - 8;
            local10 = local0;
            local11 = local1;
            local12 = local2;
            param1 = local10;
            param2 = local11;
            local3 = local12;
            local13 = param1;
            local14 = param2;
            local15 = param1;
            local16 = param2;
            local17 = param1;
            local18 = param2;
            local19 = param1;
            local20 = param2;
            local21 = param1;
            local22 = param2;
            local23 = param1;
            local24 = param2;
            local25 = param1;
            local26 = param2;
        }
    }
    return;
}

