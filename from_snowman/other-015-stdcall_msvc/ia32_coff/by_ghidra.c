typedef unsigned char   undefined;

typedef unsigned int    undefined4;



undefined4 _h(void)

{
  return 1;
}



int _g_16(int param_1,int param_2,int param_3,int param_4)

{
  return param_1 + param_2 + param_3 + param_4;
}



void _f(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x14;
  iVar1 = _h(0x14);
  if (iVar1 != 0) {
    iVar1 = _g_16(1,2,3,4);
    iVar2 = iVar1 + iVar2;
  }
  iVar2 = iVar2 + 10;
  _g_16(iVar2,iVar2,iVar2,iVar2);
  return;
}


