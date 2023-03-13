typedef unsigned char   undefined;

typedef unsigned char    undefined1;



// WARNING: Stack frame is not setup normally: Input value of stackpointer is not used
// WARNING: This function may have set the stack pointer
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  code *pcVar1;
  
  _DAT_1000_0079 = 0x1000;
  _DAT_1000_0077 = 0xd;
  FUN_1001_0007();
  _DAT_1000_0079 = 0x1000;
  _DAT_1000_0077 = 0x12;
  FUN_1001_0007();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



void __cdecl16far FUN_1001_0007(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}


