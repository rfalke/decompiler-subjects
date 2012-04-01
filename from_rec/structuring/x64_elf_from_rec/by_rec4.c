L00400378()
{
    goto ( *6293888);
}

int main()
{// addr = 0x0040047C
    _unknown_ __rbp;

    return __eax;
}

enter()
{// addr = 0x00400482
    _unknown_ __rbp;

    return;
}

leave()
{// addr = 0x00400488
    _unknown_ __rbp;

    return;
}

loop1()
{// addr = 0x0040048E
    _unknown_ __rbp;
    _unknown_ _t3;
    _unknown_ _t5;
    _unknown_ _t8;

    __rax = __rax;
    enter();
    i = 0;
    while(i <= 99) {
        asm("dec eax");
         *( &arr + __rax * 4) = i;
        i = i + 1;
    }
}

int loop2()
{// addr = 0x004004E3
    int x;
    int _v12;
    _unknown_ __rbp;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;
    _unknown_ _t16;

    __rdx = __rdx;
    __rax = __rax;
    enter();
    goto L1;
    do {
        while(1) {
L1:
            asm("dec eax");
            _v12 = _v12 + __rdx + __rax;
            if(_v12 == 10) {
                _v12 = _v12 + 12;
            }
            if(j > 99) {
                break;
            }
        }
        j = 0;
    } while(i <= 99);
    leave();
    return _v12;
}

int loop2()
{// addr = 0x004004E3
    int x;
    int _v12;
    _unknown_ __rbp;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;
    _unknown_ _t16;

    __rdx = __rdx;
    __rax = __rax;
    @rec 0x00400482@enter@();
    goto L1;
    do {
        while(1) {
L1:
            asm("dec eax");
            _v12 = _v12 + __rdx + __rax;
            if(_v12 == 10) {
                _v12 = _v12 + 12;
            }
            if(j > 99) {
                break;
            }
        }
        j = 0;
    } while(i <= 99);
    @rec 0x00400488@leave@();
    return _v12;
}

// Statistics:
//      10 Register nodes
//       0 Temporaries nodes
//       0 Casts
//      37 Statements
//       2 Labels
//       1 Gotos
//       6 Blocks
//      71 Nodes
//       2 Assembly nodes
//      12 Unknown Types


