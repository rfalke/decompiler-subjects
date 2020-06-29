typedef unsigned char   undefined;




long _f(int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar2 = (long)param_1 + 1;
    lVar3 = 0;
    do {
      lVar1 = lVar3 * lVar3;
      param_1 = param_1 + -1;
      lVar3 = lVar2 + -1 + lVar1;
      lVar2 = lVar2 + -1;
    } while (param_1 != 0);
    lVar1 = lVar1 + lVar2;
  }
  return lVar1;
}


