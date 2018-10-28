void h();
void g();
__size32 f(__size32 param1, __size32 param2, __size32 param3, __size32 param4, __size32 param5);

/** address: 0x080480dd */
void h()
{
    return;
}

/** address: 0x080480d8 */
void g()
{
    return;
}

/** address: 0x080480e2 */
__size32 f(__size32 param1, __size32 param2, __size32 param3, __size32 param4, __size32 param5)
{
    __size32 eax; 		// r24
    __size32 ebp; 		// r29
    __size32 esp; 		// r28
    __size32 *esp_1; 		// r28{28}
    __size32 *esp_2; 		// r28{30}
    __size32 *esp_3; 		// r28{28}
    __size32 *esp_4; 		// r28{28}
    int local0; 		// m[esp - 4]
    __size32 *local10; 		// esp_3{32}
    __size32 local3; 		// m[esp + 8]
    __size32 local4; 		// m[esp + 4]
    __size32 local5; 		// param2{11}
    __size32 local6; 		// param4{17}
    __size32 local7; 		// local3{18}
    __size32 local8; 		// param1{22}
    __size32 local9; 		// local4{27}

    local0 = param5;
    ebp = esp - 4;
    local5 = param2;
    local6 = param4;
    local8 = param1;
    param2 = local5;
    local7 = param2;
    while (param1 != 0) {
        local3 = param2 + 1;
        local5 = local3;
        param2 = local5;
        local7 = param2;
    }
    do {
        param4 = local6;
        local3 = local7;
        if (param1 != 0) {
bb0x80480f6:
            local3++;
            eax = local3;
            local6 = eax;
            local7 = local3;
        }
        else {
            for(;;) {
                param1 = local8;
                h();
                local9 = param1;
                if (param4 == 0) {
                    break;
                }
                local4 = param1 + 1;
                local8 = local4;
            }
            for(;;) {
                local4 = local9;
                esp_1 = g();
                local10 = esp_1;
                if (param4 != 0) {
                    esp_2 = h();
                    local10 = esp_2;
                    if (param4 == 0) {
                        break;
                    }
                    local4++;
                    local9 = local4;
                }
            }
            do {
                esp_3 = local10;
                eax = *(ebp + 16);
                *(__size32*)(esp_3 + 12) = eax;
                eax = *(ebp + 12);
                *(__size32*)(esp_3 + 8) = eax;
                eax = *(ebp + 8);
                *(__size32*)(esp_3 + 4) = eax;
                eax = *(ebp + 20);
                *(__size32*)esp_3 = eax;
                eax = f(*esp_3, *(esp_3 + 4), *(esp_3 + 8), eax, ebp);
                esp_4 = g();
                local10 = esp_4;
            } while (eax != 0);
            do {
                if (*(ebp + 8) == 0) {
                    esp = g();
                    *(__size32*)(ebp + 20) = eax;
                    if (*(ebp + 20) != 0) {
                        esp = h();
                        goto bb0x804819f;
                    }
                }
                else {
                    eax = *(ebp + 8);
                    *(__size32*)(esp_3 + 12) = eax;
                    eax = *(ebp + 12);
                    *(__size32*)(esp_3 + 8) = eax;
                    eax = *(ebp + 16);
                    *(__size32*)(esp_3 + 4) = eax;
                    eax = *(ebp + 20);
                    *(__size32*)esp_3 = eax;
                    eax = f(*esp_3, *(esp_3 + 4), *(esp_3 + 8), eax, ebp);
                    return eax;
                }
                return eax;
            } while (*(ebp + 8) != 0);
            do {
bb0x804819f:
                g();
                eax -= *(ebp + 12);
                *(__size32*)(ebp + 8) = eax;
                if (*(ebp + 8) == 0) {
                    g();
                    if (eax != 0) {
                        esp = h();
                    }
                    return eax;
                }
                return eax;
            } while (eax != 0);
            return eax;
        }
        goto bb0x80480f6;
    } while (local3 == param3);
    return eax;
}

