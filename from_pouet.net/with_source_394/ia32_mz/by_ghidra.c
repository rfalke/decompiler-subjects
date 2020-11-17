typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



void __cdecl16near FUN_1e76_0061(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  return;
}



void __cdecl16near FUN_1e76_0068(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  return;
}



void __cdecl16near FUN_1e76_006f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  return;
}



void __cdecl16near FUN_1e76_0084(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar4 = (undefined *)0x8c0;
  puVar5 = (undefined *)0x3200;
  iVar3 = -0x6f00;
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



void __cdecl16near FUN_1e76_009b(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar4 = (undefined *)(DAT_1000_db62 + 0x8c0 + (DAT_1000_db64 + -0x28) * 0x140);
  puVar5 = (undefined *)(DAT_1000_db62 + DAT_1000_db64 * 0x140);
  DAT_1000_db5e = 0;
  DAT_1000_db6c = puVar4;
  DAT_1000_db6e = puVar5;
  do {
    iVar3 = 0x39;
    while (iVar3 != 0) {
      iVar3 = iVar3 + -1;
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    DAT_1000_db5e = DAT_1000_db5e + 1;
    puVar4 = DAT_1000_db6c + DAT_1000_db5e * 0x140;
    puVar5 = DAT_1000_db6e + DAT_1000_db5e * 0x140;
  } while (DAT_1000_db5e != 6);
  DAT_1000_db5e = 0;
  return;
}



void __cdecl16near FUN_1e76_0104(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = (char *)0x0;
  pcVar3 = (char *)(DAT_1000_db62 + DAT_1000_db64 * 0x140);
  DAT_1000_db6c = 0;
  DAT_1000_db5e = 0;
  DAT_1000_db6e = pcVar3;
  do {
    iVar2 = 0x39;
    do {
      cVar1 = *pcVar4;
      if (cVar1 != '\0') {
        *pcVar3 = cVar1;
      }
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    DAT_1000_db5e = DAT_1000_db5e + 1;
    pcVar4 = (char *)(DAT_1000_db6c + DAT_1000_db5e * 0x140);
    pcVar3 = DAT_1000_db6e + DAT_1000_db5e * 0x140;
  } while (DAT_1000_db5e != 6);
  DAT_1000_db5e = 0;
  return;
}



void FUN_1e76_0165(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int extraout_DX;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar7 = (undefined *)0xd840;
  puVar6 = (undefined *)0xd842;
  cVar3 = '\b';
  do {
    iVar5 = 0x13e;
    while (iVar5 != 0) {
      iVar5 = iVar5 + -1;
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    puVar7 = puVar7 + 2;
    puVar6 = puVar6 + 2;
    cVar3 = cVar3 + -1;
  } while (cVar3 != '\0');
  while( true ) {
    cVar3 = (char)*(undefined2 *)(DAT_1000_db6a + -0x1fab);
    if (cVar3 != '\0') break;
    DAT_1000_db60 = 0;
    DAT_1000_db6a = 0;
  }
  if (cVar3 == ' ') {
    iVar5 = 0xa00;
  }
  else {
    if (cVar3 == '0') {
      iVar5 = 0xd0;
    }
    else {
      if (cVar3 == '1') {
        iVar5 = 0xd8;
      }
      else {
        if (cVar3 == '2') {
          iVar5 = 0xe0;
        }
        else {
          if (cVar3 == '3') {
            iVar5 = 0xe8;
          }
          else {
            if (cVar3 == '4') {
              iVar5 = 0xf0;
            }
            else {
              if (cVar3 == '5') {
                iVar5 = 0xf8;
              }
              else {
                if (cVar3 == '6') {
                  iVar5 = 0x100;
                }
                else {
                  if (cVar3 == '7') {
                    iVar5 = 0x108;
                  }
                  else {
                    if (cVar3 == '8') {
                      iVar5 = 0x110;
                    }
                    else {
                      if (cVar3 == '9') {
                        iVar5 = 0x118;
                      }
                      else {
                        if (cVar3 == '?') {
                          iVar5 = 0x120;
                        }
                        else {
                          if (cVar3 == '!') {
                            iVar5 = 0x128;
                          }
                          else {
                            if (cVar3 == '.') {
                              iVar5 = 0x130;
                            }
                            else {
                              if (cVar3 == ',') {
                                iVar5 = 0x138;
                              }
                              else {
                                iVar5 = (uint)(byte)(cVar3 + 0xbf) * 8;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  puVar7 = (undefined *)(DAT_1000_db60 + -0x6640 + iVar5);
  puVar8 = (undefined *)0xd97e;
  cVar3 = '\0';
  iVar5 = -0x2682;
  puVar6 = puVar7;
  while( true ) {
    cVar4 = '\b';
    do {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 0x140;
      puVar8 = puVar8 + 0x140;
      cVar4 = cVar4 + -1;
    } while (cVar4 != '\0');
    puVar8 = (undefined *)(iVar5 + 1);
    if (cVar3 == '\x01') break;
    puVar6 = puVar7 + 1;
    cVar3 = FUN_1e76_0287();
    cVar3 = cVar3 + '\x01';
    iVar5 = extraout_DX;
  }
  if (DAT_1000_db60 != 7) {
    DAT_1000_db60 = DAT_1000_db60 + 1;
    return;
  }
  DAT_1000_db60 = 0;
  DAT_1000_db6a = DAT_1000_db6a + 1;
  return;
}



void FUN_1e76_0198(void)

{
  char cVar1;
  char cVar2;
  int extraout_DX;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 unaff_DS;
  
  do {
    *(undefined2 *)0xdb60 = 0;
    *(undefined2 *)0xdb6a = 0;
    unaff_DS = 0x1000;
    cVar1 = (char)*(undefined2 *)(DAT_1000_db6a + -0x1fab);
  } while (cVar1 == '\0');
  if (cVar1 == ' ') {
    iVar3 = 0xa00;
  }
  else {
    if (cVar1 == '0') {
      iVar3 = 0xd0;
    }
    else {
      if (cVar1 == '1') {
        iVar3 = 0xd8;
      }
      else {
        if (cVar1 == '2') {
          iVar3 = 0xe0;
        }
        else {
          if (cVar1 == '3') {
            iVar3 = 0xe8;
          }
          else {
            if (cVar1 == '4') {
              iVar3 = 0xf0;
            }
            else {
              if (cVar1 == '5') {
                iVar3 = 0xf8;
              }
              else {
                if (cVar1 == '6') {
                  iVar3 = 0x100;
                }
                else {
                  if (cVar1 == '7') {
                    iVar3 = 0x108;
                  }
                  else {
                    if (cVar1 == '8') {
                      iVar3 = 0x110;
                    }
                    else {
                      if (cVar1 == '9') {
                        iVar3 = 0x118;
                      }
                      else {
                        if (cVar1 == '?') {
                          iVar3 = 0x120;
                        }
                        else {
                          if (cVar1 == '!') {
                            iVar3 = 0x128;
                          }
                          else {
                            if (cVar1 == '.') {
                              iVar3 = 0x130;
                            }
                            else {
                              if (cVar1 == ',') {
                                iVar3 = 0x138;
                              }
                              else {
                                iVar3 = (uint)(byte)(cVar1 + 0xbf) * 8;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  puVar4 = (undefined *)(DAT_1000_db60 + -0x6640 + iVar3);
  puVar6 = (undefined *)0xd97e;
  cVar1 = '\0';
  iVar3 = -0x2682;
  puVar5 = puVar4;
  while( true ) {
    cVar2 = '\b';
    do {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 0x140;
      puVar6 = puVar6 + 0x140;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    puVar6 = (undefined *)(iVar3 + 1);
    if (cVar1 == '\x01') break;
    puVar5 = puVar4 + 1;
    cVar1 = FUN_1e76_0287();
    cVar1 = cVar1 + '\x01';
    iVar3 = extraout_DX;
  }
  if (DAT_1000_db60 != 7) {
    DAT_1000_db60 = DAT_1000_db60 + 1;
    return;
  }
  DAT_1000_db60 = 0;
  DAT_1000_db6a = DAT_1000_db6a + 1;
  return;
}



void __cdecl16near FUN_1e76_0287(void)

{
  int *piVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0xdb60 != 7) {
    piVar1 = (int *)0xdb60;
    *piVar1 = *piVar1 + 1;
    return;
  }
  *(undefined2 *)0xdb60 = 0;
  piVar1 = (int *)0xdb6a;
  *piVar1 = *piVar1 + 1;
  return;
}



undefined __cdecl16near FUN_1e76_029e(void)

{
  char *pcVar1;
  undefined uVar2;
  undefined2 unaff_DS;
  
  if (*(char *)0xdb5d == '\x01') {
    out(0x3c8,0xfe);
    uVar2 = *(undefined *)0xdb5c;
    out(0x3c9,uVar2);
    out(0x3c9,uVar2);
    out(0x3c9,uVar2);
    if (*(char *)0xdb5c != '\x0f') {
      pcVar1 = (char *)0xdb5c;
      *pcVar1 = *pcVar1 + -1;
      return uVar2;
    }
    *(undefined *)0xdb5d = 0;
    uVar2 = FUN_1e76_029e();
    return uVar2;
  }
  out(0x3c8,0xfe);
  uVar2 = *(undefined *)0xdb5c;
  out(0x3c9,uVar2);
  out(0x3c9,uVar2);
  out(0x3c9,uVar2);
  if (*(char *)0xdb5c != '?') {
    pcVar1 = (char *)0xdb5c;
    *pcVar1 = *pcVar1 + '\x01';
    return uVar2;
  }
  *(undefined *)0xdb5d = 1;
  uVar2 = FUN_1e76_029e();
  return uVar2;
}



void __cdecl16near FUN_1e76_02e7(void)

{
  DAT_1000_db64 = *(int *)(DAT_1000_db68 + -0x2740) + 100;
  DAT_1000_db62 = *(int *)(DAT_1000_db66 + -0x26e0) + 0x44;
  if (DAT_1000_db68 == 0x5e) {
    DAT_1000_db68 = 0;
  }
  else {
    DAT_1000_db68 = DAT_1000_db68 + 2;
  }
  if (DAT_1000_db66 == 0xfe) {
    DAT_1000_db66 = 0;
    return;
  }
  DAT_1000_db66 = DAT_1000_db66 + 2;
  DAT_1000_db72 = 0;
  return;
}



undefined __cdecl16near FUN_1e76_0340(void)

{
  undefined2 unaff_DS;
  
  FUN_1e76_0061();
  FUN_1e76_006f();
  FUN_1e76_0084();
  FUN_1e76_0198();
  *(undefined2 *)0xdb66 = 0;
  *(undefined2 *)0xdb68 = 0;
  out(0x3c8,0xfe);
  out(0x3c9,0);
  out(0x3c9,0);
  out(0x3c9,0);
  return 0;
}



void __cdecl16near FUN_1e76_0365(void)

{
  byte bVar1;
  
  do {
    bVar1 = in(0x3da);
  } while ((bVar1 & 8) == 0);
  return;
}



undefined __cdecl16near FUN_1e76_036e(void)

{
  undefined uVar1;
  undefined2 unaff_DS;
  
  out(0x3c8,0xfd);
  uVar1 = *(undefined *)0xdb7c;
  out(0x3c9,uVar1);
  out(0x3c9,uVar1);
  out(0x3c9,uVar1);
  return uVar1;
}



void __cdecl16near FUN_1e76_037c(void)

{
  char *pcVar1;
  undefined2 unaff_DS;
  
  if (*(char *)0xdb77 == '\x01') {
    if (*(char *)0xdb7c != '\0') {
      FUN_1e76_036e();
      pcVar1 = (char *)0xdb7c;
      *pcVar1 = *pcVar1 + -1;
      return;
    }
    FUN_1e76_03bf();
    return;
  }
  if (*(char *)0xdb7c != '?') {
    pcVar1 = (char *)0xdb7c;
    *pcVar1 = *pcVar1 + '\x01';
    FUN_1e76_036e();
    return;
  }
  if (*(char *)0xdb76 != -1) {
    pcVar1 = (char *)0xdb76;
    *pcVar1 = *pcVar1 + '\x01';
    return;
  }
  *(undefined *)0xdb77 = 1;
  *(undefined *)0xdb76 = 0;
  return;
}



void __cdecl16near FUN_1e76_03bf(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  iVar4 = *(int *)(DAT_1000_db78 + -0x2483);
  if ((char)iVar4 == ' ') {
    uVar5 = 0x1400;
  }
  else {
    uVar5 = (iVar4 + -1) * 8 & 0xff;
  }
  puVar6 = (undefined *)(uVar5 + 0xadc0);
  puVar7 = (undefined *)((uint)DAT_1000_db7b * 8 + 0xf00);
  iVar4 = 0x10;
  do {
    iVar3 = 8;
    while (iVar3 != 0) {
      iVar3 = iVar3 + -1;
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    puVar6 = puVar6 + 0x138;
    puVar7 = puVar7 + 0x138;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (DAT_1000_db7b != 0x27) {
    DAT_1000_db78 = DAT_1000_db78 + 1;
    DAT_1000_db7b = DAT_1000_db7b + 1;
    return;
  }
  if (DAT_1000_db78 < 0x4b1) {
    DAT_1000_db77 = 0;
    DAT_1000_db78 = DAT_1000_db78 + 1;
    DAT_1000_db7b = 0;
    return;
  }
  DAT_1000_db77 = 0;
  DAT_1000_db78 = 0;
  DAT_1000_db7b = 0;
  return;
}



// WARNING: Stack frame is not setup normally: Input value of stackpointer is not used
// WARNING: This function may have set the stack pointer

void __cdecl16near entry(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined2 extraout_DX;
  undefined *puVar4;
  undefined2 *puVar5;
  
  puVar4 = (undefined *)0x200;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  *(undefined2 *)(puVar4 + -2) = 0xebb1;
  FUN_1e76_0068();
  iVar3 = 100;
  do {
    *(undefined2 *)(puVar4 + -2) = 0xebb7;
    FUN_1e76_0365();
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined2 *)(puVar4 + -2) = 0xebbc;
  FUN_1e76_0068();
  *(undefined2 *)(puVar4 + -2) = 0x1000;
  *(undefined2 *)(puVar4 + -4) = extraout_DX;
  *(undefined2 *)(puVar4 + -6) = 0xebc1;
  FUN_1e76_0340();
  out(0x21,0x5e);
  do {
    *(undefined2 *)(puVar4 + -2) = 0xebca;
    FUN_1e76_02e7();
    *(undefined2 *)(puVar4 + -2) = 0xebcd;
    FUN_1e76_0104();
    *(undefined2 *)(puVar4 + -2) = 0xebd0;
    FUN_1e76_0365();
    puVar5 = (undefined2 *)(puVar4 + -2);
    puVar4 = puVar4 + -2;
    *puVar5 = 0xebd3;
    FUN_1e76_0165();
    *(undefined2 *)(puVar4 + -2) = 0xebd6;
    FUN_1e76_037c();
    *(undefined2 *)(puVar4 + -2) = 0xebd9;
    FUN_1e76_029e();
    *(undefined2 *)(puVar4 + -2) = 0xebdc;
    FUN_1e76_009b();
    cVar2 = in(0x60);
  } while (cVar2 != '\x01');
  out(0x21,0);
  *(undefined2 *)(puVar4 + -2) = 0xebe9;
  FUN_1e76_0068();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}


