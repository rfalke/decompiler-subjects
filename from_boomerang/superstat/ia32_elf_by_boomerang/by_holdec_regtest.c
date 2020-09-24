// Decompiled by holdec

// address: 0804835c.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  reg_a = __xstat(3, LOAD(argv + 4), &st);
  (void) printf("res: %i\n", reg_a);
  (void) printf("dev: %i\n", st);
  (void) printf("ino: %i\n", LOAD(&st + 12));
  (void) printf("mode: %i\n", LOAD(&st + 16));
  (void) printf("nlink: %i\n", LOAD(&st + 20));
  (void) printf("uid: %i\n", LOAD(&st + 24));
  (void) printf("gid: %i\n", LOAD(&st + 28));
  (void) printf("rdev: %i\n", LOAD(&st + 32));
  (void) printf("size: %i\n", LOAD(&st + 44));
  (void) printf("blksize: %i\n", LOAD(&st + 48));
  (void) printf("blocks: %i\n", LOAD(&st + 52));
  (void) printf("atime: %i\n", LOAD(&st + 56));
  (void) printf("mtime: %i\n", LOAD(&st + 64));
  (void) printf("ctime: %i\n", LOAD(&st + 72));
  return 0;
}

