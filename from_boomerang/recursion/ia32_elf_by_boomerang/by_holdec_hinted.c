// Decompiled by holdec 1.1 (2012-03-24)

// addr = 0804837c.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(InitStackPointer + -40, ARG_0);
  (void) STORE(InitStackPointer + -44, 134514348);
  (void) printf(134514348, ARG_0);
  (void) STORE(InitStackPointer + -44, ARG_0 * 3);
  (void) b(ARG_0 * 3);
  return 0;
}

// addr = 080483c7.0
// signature= func(b, ret=[<0, void,,unknown>], para=[<0, int(undef, 4),x,unknown>], varargs=false)
??? b(???)
{
  (void) printf("b(%d)\n", x);
  (void) c(x + -1);
  return;
}

// addr = 080483f2.0
// signature= func(c, ret=[<0, void,,unknown>], para=[<0, int(undef, 4),x,unknown>], varargs=false)
??? c(???)
{
  (void) printf("c(%d)\n", x);
  if(x  !=  0 && x  !=  1 && x  <  3) {
    (void) d(2);
  } else if(x  <=  6 && x  !=  0 && x  !=  1 && x  ==  3) {
    (void) f(3);
  } else if(x  <=  6 && x  !=  0 && x  !=  1 && x  ==  4) {
    (void) h(4);
  } else if(x  <=  6 && x  !=  0 && x  !=  1 && x  ==  5) {
    (void) j(5);
  } else if(x  <=  6 && x  !=  0 && x  !=  1) {
    (void) l(6);
  }
  return;
}

// addr = 0804846a.0
// signature= func(d, ret=[<0, void,,unknown>], para=[<0, int(undef, 4),x,unknown>], varargs=false)
??? d(???)
{
  (void) printf("d(%d)\n", x);
  if(x  >  1) {
    (void) e(x + -1);
  }
  return;
}

// addr = 0804849b.0
// signature= func(e, ret=[<0, void,,unknown>], para=[<0, int(undef, 4),x,unknown>], varargs=false)
??? e(???)
{
  (void) printf("e(%d)\n", x);
  (void) c(x / 2);
  return;
}

// addr = 080484c7.0
// signature= func(f, ret=[<0, void,,unknown>], para=[<0, int(undef, 4),x,unknown>], varargs=false)
??? f(???)
{
  (void) printf("f(%d)\n", x);
  if(x  >  1) {
    (void) g(x + -1);
  }
  return;
}

// addr = 080484f8.0
// signature= func(g, ret=[<0, void,,unknown>], para=[<0, int(undef, 4),x,unknown>], varargs=false)
??? g(???)
{
  (void) printf("g(%d)\n", x);
  if(x  >  1) {
    (void) f(x + -1);
  }
  return;
}

// addr = 08048529.0
// signature= func(h, ret=[<0, void,,unknown>], para=[<0, int(undef, 4),x,unknown>], varargs=false)
??? h(???)
{
  (void) printf("h(%d)\n", x);
  if(x  >  0) {
    (void) i(x + -1);
  }
  return;
}

// addr = 0804855a.0
// signature= func(i, ret=[<0, void,,unknown>], para=[<0, int(undef, 4),x,unknown>], varargs=false)
??? i(???)
{
  (void) printf("i(%d)\n", x);
  return;
}

// addr = 08048575.0
// signature= func(j, ret=[<0, void,,unknown>], para=[<0, int(undef, 4),x,unknown>], varargs=false)
??? j(???)
{
  (void) printf("j(%d)\n", x);
  if(x  >  1) {
    (void) k(x);
  }
  return;
}

// addr = 080485a4.0
// signature= func(k, ret=[<0, void,,unknown>], para=[<0, int(undef, 4),x,unknown>], varargs=false)
??? k(???)
{
  (void) printf("k(%d)\n", x);
  if(x  >  1) {
    (void) e(x + -1);
  }
  return;
}

// addr = 080485d5.0
// signature= func(l, ret=[<0, void,,unknown>], para=[<0, int(undef, 4),x,unknown>], varargs=false)
??? l(???)
{
  (void) printf("l(%d)\n", x);
  if(x  >  1) {
    (void) b(x + 2);
  }
  return;
}

