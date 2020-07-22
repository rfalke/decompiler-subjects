// Decompiled by holdec

// address: 08049634.0
// full-signature: func(var0019_0123456789, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 var0019_0123456789(void)
{
  (void) fputs("0019 signed start:0, iter:10, inc:+1, order:buj cmp:< 0 exp:+48        expected='0123456789' >", stdout);
  for(reg_var1 = 0; reg_var1 < 10; reg_var1++) {
    (void) putchar(reg_var1 + 48);
  }
  (void) puts("<");
  return 0;
}

// address: 08049674.0
// full-signature: func(var0020_0123456789, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 var0020_0123456789(void)
{
  (void) fputs("0020 signed start:0, iter:10, inc:+1, order:buj cmp:<=0 exp:+48        expected='0123456789' >", stdout);
  for(reg_var1 = 0; reg_var1 < 10; reg_var1++) {
    (void) putchar(reg_var1 + 48);
  }
  (void) puts("<");
  return 0;
}

// address: 08049942.0
// full-signature: func(var0031_0123456789, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 var0031_0123456789(void)
{
  (void) fputs("0031 signed start:0, iter:10, inc:+1, order:jbu cmp:< 0 exp:+48        expected='0123456789' >", stdout);
  for(reg_var1 = 0; reg_var1 < 10; reg_var1++) {
    (void) putchar(reg_var1 + 48);
  }
  (void) puts("<");
  return 0;
}

// address: 08049984.0
// full-signature: func(var0032_0123456789, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 var0032_0123456789(void)
{
  (void) fputs("0032 signed start:0, iter:10, inc:+1, order:jbu cmp:<=0 exp:+48        expected='0123456789' >", stdout);
  for(reg_var1 = 0; reg_var1 < 10; reg_var1++) {
    (void) putchar(reg_var1 + 48);
  }
  (void) puts("<");
  return 0;
}

// address: 0804af4d.0
// full-signature: func(var0115_0123456789, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 var0115_0123456789(void)
{
  (void) fputs("0115 signed start:0, iter:10, inc:+1, order:buj cmp:< 0 second:=48 +1  expected='0123456789' >", stdout);
  reg_var1 = 48;
  for(reg_var2 = 0; reg_var2 < 10; reg_var2++) {
    (void) putchar(reg_var1);
    reg_var1++;
  }
  (void) puts("<");
  return 0;
}

// address: 0804af90.0
// full-signature: func(var0116_0123456789, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 var0116_0123456789(void)
{
  (void) fputs("0116 signed start:0, iter:10, inc:+1, order:buj cmp:<=0 second:=48 +1  expected='0123456789' >", stdout);
  reg_var1 = 48;
  for(reg_var2 = 0; reg_var2 < 10; reg_var2++) {
    (void) putchar(reg_var1);
    reg_var1++;
  }
  (void) puts("<");
  return 0;
}

// address: 0804b27f.0
// full-signature: func(var0127_0123456789, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 var0127_0123456789(void)
{
  (void) fputs("0127 signed start:0, iter:10, inc:+1, order:jbu cmp:< 0 second:=48 +1  expected='0123456789' >", stdout);
  reg_var1 = 48;
  for(reg_var2 = 0; reg_var2 < 10; reg_var2++) {
    (void) putchar(reg_var1);
    reg_var1++;
  }
  (void) puts("<");
  return 0;
}

// address: 0804b2c4.0
// full-signature: func(var0128_0123456789, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 var0128_0123456789(void)
{
  (void) fputs("0128 signed start:0, iter:10, inc:+1, order:jbu cmp:<=0 second:=48 +1  expected='0123456789' >", stdout);
  reg_var1 = 48;
  for(reg_var2 = 0; reg_var2 < 10; reg_var2++) {
    (void) putchar(reg_var1);
    reg_var1++;
  }
  (void) puts("<");
  return 0;
}

// address: 0804c4ca.0
// full-signature: func(var0199_0, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 var0199_0(void)
{
  (void) fputs("0199 signed start:0, iter:1, inc:+1, order:jbu cmp:< 0 exp:+48         expected='0'   >", stdout);
  for(reg_var1 = 0; reg_var1 < 1; reg_var1++) {
    (void) putchar(reg_var1 + 48);
  }
  (void) puts("<");
  return 0;
}

// address: 0804c50c.0
// full-signature: func(var0200_0, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 var0200_0(void)
{
  (void) fputs("0200 signed start:0, iter:1, inc:+1, order:jbu cmp:<=0 exp:+48         expected='0'   >", stdout);
  for(reg_var1 = 0; reg_var1 < 1; reg_var1++) {
    (void) putchar(reg_var1 + 48);
  }
  (void) puts("<");
  return 0;
}

// address: 0804de07.0
// full-signature: func(var0295_0, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 var0295_0(void)
{
  (void) fputs("0295 signed start:0, iter:1, inc:+1, order:jbu cmp:< 0 second:=48 +1   expected='0'   >", stdout);
  reg_var1 = 48;
  for(reg_var2 = 0; reg_var2 < 1; reg_var2++) {
    (void) putchar(reg_var1);
    reg_var1++;
  }
  (void) puts("<");
  return 0;
}

// address: 0804de4c.0
// full-signature: func(var0296_0, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 var0296_0(void)
{
  (void) fputs("0296 signed start:0, iter:1, inc:+1, order:jbu cmp:<=0 second:=48 +1   expected='0'   >", stdout);
  reg_var1 = 48;
  for(reg_var2 = 0; reg_var2 < 1; reg_var2++) {
    (void) putchar(reg_var1);
    reg_var1++;
  }
  (void) puts("<");
  return 0;
}

// address: 08050340.0
// full-signature: func(var0439_0123456789, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 var0439_0123456789(void)
{
  (void) fputs("0439 unsign start:0, iter:10, inc:+1, order:buj cmp:< 0 exp:+48        expected='0123456789' >", stdout);
  for(reg_var1 = 0; reg_var1 < 10; reg_var1++) {
    (void) putchar(reg_var1 + 48);
  }
  (void) puts("<");
  return 0;
}

// address: 08050380.0
// full-signature: func(var0440_0123456789, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 var0440_0123456789(void)
{
  (void) fputs("0440 unsign start:0, iter:10, inc:+1, order:buj cmp:<=0 exp:+48        expected='0123456789' >", stdout);
  for(reg_var1 = 0; reg_var1 < 10; reg_var1++) {
    (void) putchar(reg_var1 + 48);
  }
  (void) puts("<");
  return 0;
}

// address: 080505cc.0
// full-signature: func(var0449_0123456789, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 var0449_0123456789(void)
{
  (void) fputs("0449 unsign start:0, iter:10, inc:+1, order:jbu cmp:< 0 exp:+48        expected='0123456789' >", stdout);
  for(reg_var1 = 0; reg_var1 < 10; reg_var1++) {
    (void) putchar(reg_var1 + 48);
  }
  (void) puts("<");
  return 0;
}

// address: 0805060e.0
// full-signature: func(var0450_0123456789, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 var0450_0123456789(void)
{
  (void) fputs("0450 unsign start:0, iter:10, inc:+1, order:jbu cmp:<=0 exp:+48        expected='0123456789' >", stdout);
  for(reg_var1 = 0; reg_var1 < 10; reg_var1++) {
    (void) putchar(reg_var1 + 48);
  }
  (void) puts("<");
  return 0;
}

// address: 08051b53.0
// full-signature: func(var0531_0123456789, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 var0531_0123456789(void)
{
  (void) fputs("0531 unsign start:0, iter:10, inc:+1, order:buj cmp:< 0 second:=48 +1  expected='0123456789' >", stdout);
  reg_var1 = 48;
  for(reg_var2 = 0; reg_var2 < 10; reg_var2++) {
    (void) putchar(reg_var1);
    reg_var1++;
  }
  (void) puts("<");
  return 0;
}

// address: 08051b96.0
// full-signature: func(var0532_0123456789, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 var0532_0123456789(void)
{
  (void) fputs("0532 unsign start:0, iter:10, inc:+1, order:buj cmp:<=0 second:=48 +1  expected='0123456789' >", stdout);
  reg_var1 = 48;
  for(reg_var2 = 0; reg_var2 < 10; reg_var2++) {
    (void) putchar(reg_var1);
    reg_var1++;
  }
  (void) puts("<");
  return 0;
}

// address: 08051dfd.0
// full-signature: func(var0541_0123456789, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 var0541_0123456789(void)
{
  (void) fputs("0541 unsign start:0, iter:10, inc:+1, order:jbu cmp:< 0 second:=48 +1  expected='0123456789' >", stdout);
  reg_var1 = 48;
  for(reg_var2 = 0; reg_var2 < 10; reg_var2++) {
    (void) putchar(reg_var1);
    reg_var1++;
  }
  (void) puts("<");
  return 0;
}

// address: 08051e42.0
// full-signature: func(var0542_0123456789, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 var0542_0123456789(void)
{
  (void) fputs("0542 unsign start:0, iter:10, inc:+1, order:jbu cmp:<=0 second:=48 +1  expected='0123456789' >", stdout);
  reg_var1 = 48;
  for(reg_var2 = 0; reg_var2 < 10; reg_var2++) {
    (void) putchar(reg_var1);
    reg_var1++;
  }
  (void) puts("<");
  return 0;
}

