// Decompiled by holdec

// address: 0804837c.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  (void) printf("a(%d)\n", argc);
  (void) b(argc * 3);
  return 0;
}

// address: 080483c7.0
// full-signature: func(b, return=[], parameter=[<int(undef, 4),x,unknown>], varargs=false)
void b(d4 x)
{
  (void) printf("b(%d)\n", x);
  (void) c(x + -1);
}

// address: 080483f2.0
// full-signature: func(c, return=[], parameter=[<int(undef, 4),x,unknown>], varargs=false)
void c(d4 x)
{
  (void) printf("c(%d)\n", x);
  if(x != 0 && x != 1 && x < 3) {
    (void) d(2);
  } else if(x == 3) {
    (void) f(3);
  } else if(x == 4) {
    (void) h(4);
  } else if(x == 5) {
    (void) j(5);
  } else if(x != 0 && x != 1 && x < 7) {
    (void) l(6);
  }
}

// address: 0804846a.0
// full-signature: func(d, return=[], parameter=[<int(undef, 4),x,unknown>], varargs=false)
void d(d4 x)
{
  (void) printf("d(%d)\n", x);
  if(x > 1) {
    (void) e(x + -1);
  }
}

// address: 0804849b.0
// full-signature: func(e, return=[], parameter=[<int(undef, 4),x,unknown>], varargs=false)
void e(d4 x)
{
  (void) printf("e(%d)\n", x);
  (void) c(x >> 1);
}

// address: 080484c7.0
// full-signature: func(f, return=[], parameter=[<int(undef, 4),x,unknown>], varargs=false)
void f(d4 x)
{
  (void) printf("f(%d)\n", x);
  if(x > 1) {
    (void) g(x + -1);
  }
}

// address: 080484f8.0
// full-signature: func(g, return=[], parameter=[<int(undef, 4),x,unknown>], varargs=false)
void g(d4 x)
{
  (void) printf("g(%d)\n", x);
  if(x > 1) {
    (void) f(x + -1);
  }
}

// address: 08048529.0
// full-signature: func(h, return=[], parameter=[<int(undef, 4),x,unknown>], varargs=false)
void h(d4 x)
{
  (void) printf("h(%d)\n", x);
  if(x > 0) {
    (void) i(x + -1);
  }
}

// address: 0804855a.0
// full-signature: func(i, return=[], parameter=[<int(undef, 4),x,unknown>], varargs=false)
void i(d4 x)
{
  (void) printf("i(%d)\n", x);
}

// address: 08048575.0
// full-signature: func(j, return=[], parameter=[<int(undef, 4),x,unknown>], varargs=false)
void j(d4 x)
{
  (void) printf("j(%d)\n", x);
  if(x > 1) {
    (void) k(x);
  }
}

// address: 080485a4.0
// full-signature: func(k, return=[], parameter=[<int(undef, 4),x,unknown>], varargs=false)
void k(d4 x)
{
  (void) printf("k(%d)\n", x);
  if(x > 1) {
    (void) e(x + -1);
  }
}

// address: 080485d5.0
// full-signature: func(l, return=[], parameter=[<int(undef, 4),x,unknown>], varargs=false)
void l(d4 x)
{
  (void) printf("l(%d)\n", x);
  if(x > 1) {
    (void) b(x + 2);
  }
}

