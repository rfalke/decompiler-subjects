
struct s0 {
    signed char[88] pad88;
    signed char f58;
};

struct s1 {
    signed char[88] pad88;
    signed char f58;
};

void* g8048087;

void fun_8048000(int32_t* ecx) {
    int1_t less_or_equal2;
    int32_t eax3;
    int32_t* ebx4;
    int32_t* ebx5;
    int32_t eax6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    void** eax19;
    signed char al20;
    signed char* eax21;
    void** eax22;
    signed char dh23;
    void** tmp32_24;
    void** eax25;
    void** edx26;
    void** tmp8_27;
    uint1_t cf28;
    struct s0* ebp29;
    struct s1* ebp30;
    signed char bl31;
    void** edi32;
    int32_t ebp33;
    int32_t ebp34;

    if (less_or_equal2) {
        *ecx = *ecx + eax3;
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        *reinterpret_cast<void***>(eax22) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax22)) + reinterpret_cast<unsigned char>(eax22));
        *reinterpret_cast<void***>(eax22) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax22)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax22) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax22) + reinterpret_cast<int32_t>(ecx)) + 44);
        *reinterpret_cast<void***>(eax22) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax22)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void***>(eax22) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax22)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void***>(eax22) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax22)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void***>(eax22) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax22)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void***>(eax22) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax22)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax22) + reinterpret_cast<unsigned char>(eax22)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax22) + reinterpret_cast<unsigned char>(eax22)) + dh23);
        *reinterpret_cast<void***>(eax22) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax22)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void***>(eax22) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax22)) + reinterpret_cast<unsigned char>(eax22));
        *reinterpret_cast<void***>(eax22) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax22)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void***>(eax22) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax22)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void***>(eax22) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax22)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8);
        tmp32_24 = *reinterpret_cast<void***>(eax22);
        *reinterpret_cast<void***>(eax22) = eax22;
        eax25 = tmp32_24;
        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<void***>(eax25) = edx26;
        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax25)));
    }
    tmp8_27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax25)));
    cf28 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_27) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)));
    *reinterpret_cast<void***>(eax25) = tmp8_27;
    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax25))) + cf28);
    ebp29->f58 = reinterpret_cast<signed char>(ebp30->f58 + bl31);
    edi32 = reinterpret_cast<void**>(0x8048087);
    ebp33 = ebp34 - 1;
    if (ebp33) {
        while (1) {
            do {
                __asm__("lodsb ");
                if (!*reinterpret_cast<void**>(&eax25)) 
                    break;
                *edi32 = *reinterpret_cast<void**>(&eax25);
                ++edi32;
            } while (reinterpret_cast<int32_t>(edi32) < 0x8049085);
            break;
            addr_804805c_10:
            --ebp33;
            if (!ebp33) 
                break;
            *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(32);
            *edi32 = reinterpret_cast<void*>(32);
            ++edi32;
        }
        *edi32 = reinterpret_cast<void*>(10);
        while (1) {
            __asm__("int 0x80");
        }
    } else {
        g8048087 = reinterpret_cast<void*>(0x79);
        edi32 = reinterpret_cast<void**>(0x8048088);
        ++ebp33;
        goto addr_804805c_10;
    }
}
