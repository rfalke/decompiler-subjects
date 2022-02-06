
long main() {
    →printf("lea1 should=0x1a2a3a4a5a6a7b8b/1885383485026892683 is=0x%016lx\n");
    →printf("lea2 should=0x1a2a3a4a5a6a7b8b/1885383485026892683 is=0x%016lx\n");
    →printf("lea3 should=0x000000005b6b7b8b/         1533770635 is=0x%016lx\n");
    →printf("lea4 should=0x000000005b6b7b8b/         1533770635 is=0x%016lx\n");
    →printf("lea5 should=0x1b2b3b4b5b6b7b8b/1957723657864969099 is=0x%016lx\n");
    →printf("lea6 should=0x000000005b6b7b8b/         1533770635 is=0x%016lx\n");
    return 0L;
}

long sub_40117D() {
    return 0L;
}

long sub_4011BF() {
    return 0L;
}

long sub_4011ED() {
    long result = deregister_tm_clones();
    completed.7287 = 1;
    return result;
}

void sub_401200() {
}
