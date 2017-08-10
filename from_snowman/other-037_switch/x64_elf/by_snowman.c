
/* vowels(char const*) */
int64_t _Z6vowelsPKc(unsigned char* rdi) {
    unsigned char* v2;
    int32_t v3;
    uint32_t eax4;
    uint32_t eax5;
    int32_t eax6;
    int64_t rax7;

    v2 = rdi;
    v3 = 0;
    while (eax4 = *v2, reinterpret_cast<uint1_t>(!!*reinterpret_cast<signed char*>(&eax4))) {
        eax5 = *v2;
        eax6 = *reinterpret_cast<signed char*>(&eax5);
        if (eax6 == 0x6f) 
            goto addr_400194_4;
        if (eax6 > 0x6f) {
            if (eax6 == 0x75 || (eax6 == 0x79 || eax6 == 0x72)) {
                addr_400194_4:
                ++v3;
            } else {
                addr_4001a1_7:
            }
            ++v2;
            continue;
        }
        if (eax6 == 0x65) 
            goto addr_400194_4;
        if (eax6 <= 0x65) 
            goto addr_400173_11;
        if (eax6 == 0x69) 
            goto addr_400194_4;
        goto addr_4001a1_7;
        addr_400173_11:
        if (!eax6) 
            goto addr_40019a_14;
        if (eax6 == 97) 
            goto addr_400194_4;
        goto addr_4001a1_7;
    }
    *reinterpret_cast<int32_t*>(&rax7) = v3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    addr_4001ba_18:
    return rax7;
    addr_40019a_14:
    *reinterpret_cast<int32_t*>(&rax7) = -1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    goto addr_4001ba_18;
}
