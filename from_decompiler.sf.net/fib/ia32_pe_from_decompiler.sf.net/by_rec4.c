L00401000(_unknown_ __esp, intOrPtr _a4)
{
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t7;
    _unknown_ _t8;
    intOrPtr _t10;

    __esp = __esp;
    _t10 = _a4;
    if(_t10 < 1) {
        return 1;
    }
    _push(_t8);
    _push(_t10 - 2);
    _t4 = L00401000(__esp);
    _push(_t10 - 1);
    _t5 = L00401000(__esp);
    __esp = __esp + 8;
    _pop(__edi);
    return _t5 + _t4;
}

L00401050(_unknown_ __esp, signed int _a4, signed int* _a8, intOrPtr _a12)
{
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ _t16;
    _unknown_ _t17;
    _unknown_ _t21;
    signed int _t24;
    _unknown_ _t25;
    _unknown_ _t26;
    _unknown_ _t27;
    signed int _t28;

    __esp = __esp;
    __ecx = _a8;
    _push(_t25);
    _t26 = __ecx + _a12 - 1;
    if(__ecx < _t26) {
        _push(_t21);
        _push(_t27);
        _t28 = _a4;
        while(1) {
L2:
            _t24 = -858993459 * _t28 >> 32 >> 3;
             *__ecx = _t28 - _t24 + _t24 * 4 + _t24 + _t24 * 4 & 4294967295;
            __ecx =  &((__ecx)[0]);
            _t28 = _t24;
            if(__ecx >= _t26) {
                break;
            }
        }
        _pop(__esi);
        _pop(__ebx);
    }
     *__ecx = 0;
    _pop(__edi);
    return;
}

L00401050(_unknown_ __esp, signed int _a4, signed int* _a8, intOrPtr _a12)
{
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ _t16;
    _unknown_ _t17;
    _unknown_ _t21;
    signed int _t24;
    _unknown_ _t25;
    _unknown_ _t26;
    _unknown_ _t27;
    signed int _t28;

    __esp = __esp;
    __ecx = _a8;
    _push(_t25);
    _t26 = __ecx + _a12 - 1;
    if(__ecx < _t26) {
        _push(_t21);
        _push(_t27);
        _t28 = _a4;
        while(1) {
L2:
            _t24 = -858993459 * _t28 >> 32 >> 3;
             *__ecx = _t28 - _t24 + _t24 * 4 + _t24 + _t24 * 4 & 4294967295;
            __ecx =  &((__ecx)[0]);
            _t28 = _t24;
            if(__ecx >= _t26) {
                break;
            }
        }
        _pop(__esi);
        _pop(__ebx);
    }
     *__ecx = 0;
    _pop(__edi);
    return;
}

// Statistics:
//      20 Register nodes
//      25 Temporaries nodes
//       0 Casts
//      41 Statements
//       2 Labels
//       0 Gotos
//       2 Blocks
//     119 Nodes
//       0 Assembly nodes
//      17 Unknown Types


