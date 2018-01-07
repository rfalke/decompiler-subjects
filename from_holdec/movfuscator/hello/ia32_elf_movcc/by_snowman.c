
int32_t sigaction = 0x8048226;

void fun_8048220() {
    goto sigaction;
}

int32_t printf = 0x8048206;

void fun_80481fc() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    goto printf;
}

int32_t g804b008 = 0;

void fun_8048206() {
    goto g804b008;
}

int32_t exit = 0x8048216;

void exit() {
    goto exit;
}

void fun_8048216() {
    goto 0x80481f0;
}

void fun_8048226() {
    goto 0x80481f0;
}

int32_t external = 0;

void dispatch() {
    goto external;
}

int32_t* sesp = reinterpret_cast<int32_t*>(0);

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s0* sp = reinterpret_cast<struct s0*>(0x85f4160);

struct s1 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

struct s2 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

int32_t toggle_execution = 1;

int32_t* alu_x = reinterpret_cast<int32_t*>(0);

int32_t alu_y = 0;

int32_t alu_c = 0;

int32_t alu_s = 0;

int32_t stack_temp = 0;

int32_t on = 0;

struct s0* data_p = reinterpret_cast<struct s0*>(0);

int32_t branch_temp = 0;

struct s3 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t f12;
};

int32_t R0 = 0;

int32_t R1 = 0;

int32_t R2 = 0;

int32_t R3 = 0;

struct s4 {
    int32_t f0;
    int32_t f4;
};

int32_t F0 = 0;

int32_t F1 = 0;

struct s5 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t f12;
};

int32_t D0 = 0;

int32_t g804b054 = 0;

int32_t D1 = 0;

int32_t g804b05c = 0;

int32_t* target = reinterpret_cast<int32_t*>(0);

int32_t b0 = 0;

int32_t b1 = 0;

int32_t b2 = 0;

int32_t b3 = 0;

int32_t jmp_r0 = 0;

int32_t jmp_r1 = 0;

int32_t jmp_r2 = 0;

int32_t jmp_r3 = 0;

int32_t jmp_f0 = 0;

int32_t jmp_f1 = 0;

struct s6 {
    int32_t f0;
    int32_t f4;
};

int32_t jmp_d0 = 0;

int32_t g85f418c = 0;

struct s7 {
    int32_t f0;
    int32_t f4;
};

int32_t jmp_d1 = 0;

int32_t g85f4194 = 0;

struct s8 {
    int32_t f0;
    int32_t f4;
};

struct s9 {
    int32_t f0;
    int32_t f4;
};

int32_t fp = 0x85f4160;

int32_t g81f40f4 = 0;

struct s10 {
    int32_t f0;
    int32_t f4;
};

struct s11 {
    int32_t f0;
    int32_t f4;
};

struct s12 {
    int32_t f0;
    int32_t f4;
};

struct s13 {
    int32_t f0;
    int32_t f4;
};

struct s14 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t f12;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

struct s16 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t f12;
};

void _start() {
    struct s0* esp1;
    struct s1* esp2;
    struct s0* esp3;
    struct s2* esp4;
    int32_t eax5;
    int32_t* eax6;
    int32_t eax7;
    int32_t ecx8;
    int32_t edx9;
    int32_t edx10;
    int32_t eax11;
    int32_t edx12;
    struct s0* edx13;
    struct s0* eax14;
    int32_t edx15;
    int32_t edx16;
    int32_t* eax17;
    int32_t edx18;
    struct s0* edx19;
    struct s0* eax20;
    int32_t edx21;
    int32_t edx22;
    int32_t edx23;
    struct s0* edx24;
    struct s0* eax25;
    int32_t edx26;
    int32_t edx27;
    int32_t eax28;
    int32_t edx29;
    int32_t ecx30;
    struct s3* eax31;
    int32_t edx32;
    int32_t edx33;
    int32_t edx34;
    int32_t edx35;
    struct s4* eax36;
    int32_t edx37;
    int32_t edx38;
    struct s5* eax39;
    int32_t edx40;
    int32_t edx41;
    int32_t edx42;
    int32_t edx43;
    int32_t eax44;
    int32_t* eax45;
    int32_t eax46;
    int32_t edx47;
    int32_t eax48;
    int32_t edx49;
    int32_t eax50;
    int32_t edx51;
    int32_t eax52;
    int32_t edx53;
    int32_t eax54;
    int32_t ecx55;
    int32_t edx56;
    int32_t edx57;
    int32_t edx58;
    int32_t edx59;
    int32_t edx60;
    int32_t edx61;
    struct s6* eax62;
    int32_t edx63;
    int32_t edx64;
    struct s7* eax65;
    int32_t edx66;
    int32_t edx67;
    int32_t eax68;
    int32_t edx69;
    struct s0* edx70;
    struct s0* eax71;
    int32_t edx72;
    int32_t edx73;
    int32_t* eax74;
    int32_t eax75;
    int32_t edx76;
    int32_t eax77;
    int32_t edx78;
    int32_t eax79;
    int32_t edx80;
    int32_t eax81;
    int32_t edx82;
    int32_t eax83;
    int32_t ecx84;
    int32_t edx85;
    int32_t edx86;
    int32_t edx87;
    int32_t edx88;
    int32_t edx89;
    int32_t edx90;
    struct s8* eax91;
    int32_t edx92;
    int32_t edx93;
    struct s9* eax94;
    int32_t edx95;
    int32_t edx96;
    int32_t eax97;
    int32_t eax98;
    int32_t edx99;
    struct s0* edx100;
    struct s0* eax101;
    int32_t edx102;
    int32_t edx103;
    int32_t eax104;
    int32_t edx105;
    struct s0* edx106;
    struct s0* eax107;
    int32_t edx108;
    int32_t edx109;
    int32_t eax110;
    int32_t edx111;
    struct s0* edx112;
    struct s0* eax113;
    int32_t edx114;
    int32_t edx115;
    int32_t eax116;
    int32_t edx117;
    struct s0* edx118;
    struct s0* eax119;
    int32_t edx120;
    int32_t edx121;
    int32_t eax122;
    int32_t edx123;
    struct s0* edx124;
    struct s0* eax125;
    int32_t edx126;
    int32_t edx127;
    int32_t eax128;
    int32_t eax129;
    int32_t edx130;
    struct s0* edx131;
    struct s0* eax132;
    int32_t edx133;
    struct s10* eax134;
    int32_t edx135;
    int32_t edx136;
    int32_t edx137;
    struct s0* edx138;
    int32_t eax139;
    int32_t edx140;
    struct s0* edx141;
    struct s0* eax142;
    int32_t edx143;
    int32_t edx144;
    int32_t eax145;
    int32_t ecx146;
    int32_t edx147;
    int32_t edx148;
    int32_t eax149;
    int32_t edx150;
    struct s0* edx151;
    struct s0* eax152;
    int32_t edx153;
    int32_t edx154;
    int32_t eax155;
    struct s0* eax156;
    int32_t edx157;
    struct s0* edx158;
    struct s0* eax159;
    int32_t edx160;
    int32_t edx161;
    int32_t* eax162;
    int32_t eax163;
    int32_t edx164;
    int32_t eax165;
    int32_t edx166;
    int32_t eax167;
    int32_t edx168;
    int32_t eax169;
    int32_t edx170;
    int32_t eax171;
    int32_t ecx172;
    int32_t edx173;
    int32_t edx174;
    int32_t edx175;
    int32_t edx176;
    int32_t edx177;
    int32_t edx178;
    struct s11* eax179;
    int32_t edx180;
    int32_t edx181;
    struct s12* eax182;
    int32_t edx183;
    int32_t edx184;
    int32_t eax185;
    int32_t edx186;
    int32_t edx187;
    struct s0* eax188;
    int32_t edx189;
    struct s0* edx190;
    int32_t edx191;
    struct s13* eax192;
    int32_t edx193;
    int32_t edx194;
    struct s0* eax195;
    int32_t edx196;
    struct s0* edx197;
    int32_t edx198;
    int32_t edx199;
    struct s0* eax200;
    int32_t edx201;
    struct s0* edx202;
    int32_t edx203;
    int32_t edx204;
    struct s0* eax205;
    int32_t edx206;
    struct s0* edx207;
    int32_t edx208;
    int32_t edx209;
    struct s0* eax210;
    int32_t edx211;
    struct s0* edx212;
    int32_t edx213;
    int32_t edx214;
    struct s0* eax215;
    int32_t edx216;
    struct s0* edx217;
    int32_t edx218;
    int32_t edx219;
    struct s0* eax220;
    int32_t edx221;
    struct s0* edx222;
    int32_t edx223;
    int32_t eax224;
    int32_t edx225;
    int32_t ecx226;
    struct s14* eax227;
    int32_t edx228;
    int32_t edx229;
    int32_t edx230;
    int32_t edx231;
    struct s15* eax232;
    int32_t edx233;
    int32_t edx234;
    struct s16* eax235;
    int32_t edx236;
    int32_t edx237;
    int32_t edx238;
    int32_t edx239;
    int32_t eax240;

    sesp = reinterpret_cast<int32_t*>(__zero_stack_offset());
    esp1 = sp;
    esp2 = *reinterpret_cast<struct s1**>(reinterpret_cast<int32_t>(*reinterpret_cast<struct s2**>(*reinterpret_cast<int32_t*>((esp1 - 0x4000d)->f0 - 0x200068) - 0x200068)) - 0x200068);
    esp2->f0 = 11;
    esp2->f4 = 0x85f41b4;
    esp2->f8 = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp2) - 4) = 0x8048280;
    fun_8048220();
    esp3 = sp;
    esp4 = *reinterpret_cast<struct s2**>(*reinterpret_cast<int32_t*>((esp3 - 0x4000d)->f0 - 0x200068) - 0x200068);
    esp4->f0 = 4;
    esp4->f4 = 0x85f4240;
    esp4->f8 = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp4) - 4) = 0x80482b7;
    fun_8048220();
    eax5 = toggle_execution;
    **reinterpret_cast<int32_t**>(eax5 * 4 + 0x83f4130) = 1;
    toggle_execution = 0;
    eax6 = sesp;
    alu_x = eax6;
    alu_y = 4;
    eax7 = 0;
    ecx8 = 0;
    alu_c = 0;
    *reinterpret_cast<int16_t*>(&eax7) = *reinterpret_cast<int16_t*>(&alu_x);
    *reinterpret_cast<int16_t*>(&ecx8) = *reinterpret_cast<int16_t*>(&alu_y);
    *reinterpret_cast<int16_t*>(&ecx8) = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&alu_c) + 2);
    edx9 = (*reinterpret_cast<int32_t**>((*reinterpret_cast<int32_t**>(eax7 * 4 + 0x805ef10))[ecx8] * 4 + 0x805ef10))[ecx8];
    *reinterpret_cast<int16_t*>(&alu_s) = *reinterpret_cast<int16_t*>(&edx9);
    alu_c = edx9;
    *reinterpret_cast<int16_t*>(&eax7) = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&alu_x) + 2);
    *reinterpret_cast<int16_t*>(&ecx8) = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&alu_y) + 2);
    *reinterpret_cast<int16_t*>(&ecx8) = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&alu_c) + 2);
    edx10 = (*reinterpret_cast<int32_t**>((*reinterpret_cast<int32_t**>(eax7 * 4 + 0x805ef10))[ecx8] * 4 + 0x805ef10))[ecx8];
    *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&alu_s) + 2) = *reinterpret_cast<int16_t*>(&edx10);
    alu_c = edx10;
    eax11 = alu_s;
    stack_temp = eax11;
    edx12 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4110);
    edx13 = sp;
    **reinterpret_cast<int32_t**>(edx12 * 4 + 0x83f4150) = (edx13 - 0x4000d)->f0;
    eax14 = sp;
    edx15 = on;
    data_p = eax14;
    edx16 = stack_temp;
    **reinterpret_cast<int32_t**>(edx15 * 4 + 0x83f4150) = edx16;
    eax17 = sesp;
    stack_temp = *eax17;
    edx18 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4110);
    edx19 = sp;
    **reinterpret_cast<int32_t**>(edx18 * 4 + 0x83f4150) = (edx19 - 0x4000d)->f0;
    eax20 = sp;
    edx21 = on;
    data_p = eax20;
    edx22 = stack_temp;
    **reinterpret_cast<int32_t**>(edx21 * 4 + 0x83f4150) = edx22;
    stack_temp = 0x8804851e;
    edx23 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4110);
    edx24 = sp;
    **reinterpret_cast<int32_t**>(edx23 * 4 + 0x83f4150) = (edx24 - 0x4000d)->f0;
    eax25 = sp;
    edx26 = on;
    data_p = eax25;
    edx27 = stack_temp;
    **reinterpret_cast<int32_t**>(edx26 * 4 + 0x83f4150) = edx27;
    branch_temp = 0x88048764;
    eax28 = on;
    edx29 = branch_temp;
    **reinterpret_cast<int32_t**>(eax28 * 4 + 0x83f4140) = edx29;
    ecx30 = on;
    data_p = reinterpret_cast<struct s0*>(0x85f4170);
    eax31 = *reinterpret_cast<struct s3**>(ecx30 * 4 + 0x83f4150);
    edx32 = R0;
    eax31->f0 = edx32;
    edx33 = R1;
    eax31->f4 = edx33;
    edx34 = R2;
    eax31->f8 = edx34;
    edx35 = R3;
    eax31->f12 = edx35;
    data_p = reinterpret_cast<struct s0*>(0x85f4180);
    eax36 = *reinterpret_cast<struct s4**>(ecx30 * 4 + 0x83f4150);
    edx37 = F0;
    eax36->f0 = edx37;
    edx38 = F1;
    eax36->f4 = edx38;
    data_p = reinterpret_cast<struct s0*>(0x85f4188);
    eax39 = *reinterpret_cast<struct s5**>(ecx30 * 4 + 0x83f4150);
    edx40 = D0;
    eax39->f0 = edx40;
    edx41 = g804b054;
    eax39->f4 = edx41;
    edx42 = D1;
    eax39->f8 = edx42;
    edx43 = g804b05c;
    eax39->f12 = edx43;
    eax44 = on;
    **reinterpret_cast<int32_t**>(eax44 * 4 + 0x83f4130) = 0;
    eax45 = target;
    alu_x = eax45;
    alu_y = 0x8804851e;
    eax46 = 0;
    edx47 = 0;
    *reinterpret_cast<signed char*>(&eax46) = *reinterpret_cast<signed char*>(&alu_x);
    *reinterpret_cast<signed char*>(&edx47) = *reinterpret_cast<signed char*>(&alu_y);
    *reinterpret_cast<signed char*>(&edx47) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(eax46 * 4 + 0x804e5e0)) + edx47);
    b0 = edx47;
    *reinterpret_cast<signed char*>(&eax46) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&alu_x) + 1);
    *reinterpret_cast<signed char*>(&edx47) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&alu_y) + 1);
    *reinterpret_cast<signed char*>(&edx47) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(eax46 * 4 + 0x804e5e0)) + edx47);
    b1 = edx47;
    *reinterpret_cast<signed char*>(&eax46) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&alu_x) + 2);
    *reinterpret_cast<signed char*>(&edx47) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&alu_y) + 2);
    *reinterpret_cast<signed char*>(&edx47) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(eax46 * 4 + 0x804e5e0)) + edx47);
    b2 = edx47;
    *reinterpret_cast<signed char*>(&eax46) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&alu_x) + 3);
    *reinterpret_cast<signed char*>(&edx47) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&alu_y) + 3);
    *reinterpret_cast<signed char*>(&edx47) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(eax46 * 4 + 0x804e5e0)) + edx47);
    b3 = edx47;
    eax48 = b0;
    edx49 = b1;
    b0 = (*reinterpret_cast<int32_t**>(eax48 * 4 + 0x804b080))[edx49];
    eax50 = b0;
    edx51 = b2;
    b0 = (*reinterpret_cast<int32_t**>(eax50 * 4 + 0x804b080))[edx51];
    eax52 = b0;
    edx53 = b3;
    b0 = (*reinterpret_cast<int32_t**>(eax52 * 4 + 0x804b080))[edx53];
    eax54 = b0;
    b0 = eax54;
    ecx55 = b0;
    data_p = reinterpret_cast<struct s0*>(0x804b030);
    edx56 = jmp_r0;
    **reinterpret_cast<int32_t**>(ecx55 * 4 + 0x83f4150) = edx56;
    data_p = reinterpret_cast<struct s0*>(0x804b034);
    edx57 = jmp_r1;
    **reinterpret_cast<int32_t**>(ecx55 * 4 + 0x83f4150) = edx57;
    data_p = reinterpret_cast<struct s0*>(0x804b038);
    edx58 = jmp_r2;
    **reinterpret_cast<int32_t**>(ecx55 * 4 + 0x83f4150) = edx58;
    data_p = reinterpret_cast<struct s0*>(0x804b03c);
    edx59 = jmp_r3;
    **reinterpret_cast<int32_t**>(ecx55 * 4 + 0x83f4150) = edx59;
    data_p = reinterpret_cast<struct s0*>(0x804b040);
    edx60 = jmp_f0;
    **reinterpret_cast<int32_t**>(ecx55 * 4 + 0x83f4150) = edx60;
    data_p = reinterpret_cast<struct s0*>(0x804b044);
    edx61 = jmp_f1;
    **reinterpret_cast<int32_t**>(ecx55 * 4 + 0x83f4150) = edx61;
    data_p = reinterpret_cast<struct s0*>(0x804b050);
    eax62 = *reinterpret_cast<struct s6**>(ecx55 * 4 + 0x83f4150);
    edx63 = jmp_d0;
    eax62->f0 = edx63;
    edx64 = g85f418c;
    eax62->f4 = edx64;
    data_p = reinterpret_cast<struct s0*>(0x804b058);
    eax65 = *reinterpret_cast<struct s7**>(ecx55 * 4 + 0x83f4150);
    edx66 = jmp_d1;
    eax65->f0 = edx66;
    edx67 = g85f4194;
    eax65->f4 = edx67;
    eax68 = b0;
    **reinterpret_cast<int32_t**>(eax68 * 4 + 0x83f4130) = 1;
    stack_temp = 0;
    edx69 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4110);
    edx70 = sp;
    **reinterpret_cast<int32_t**>(edx69 * 4 + 0x83f4150) = (edx70 - 0x4000d)->f0;
    eax71 = sp;
    edx72 = on;
    data_p = eax71;
    edx73 = stack_temp;
    **reinterpret_cast<int32_t**>(edx72 * 4 + 0x83f4150) = edx73;
    external = reinterpret_cast<int32_t>(exit);
    eax74 = target;
    alu_x = eax74;
    alu_y = 0x88048764;
    eax75 = 0;
    edx76 = 0;
    *reinterpret_cast<signed char*>(&eax75) = *reinterpret_cast<signed char*>(&alu_x);
    *reinterpret_cast<signed char*>(&edx76) = *reinterpret_cast<signed char*>(&alu_y);
    *reinterpret_cast<signed char*>(&edx76) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(eax75 * 4 + 0x804e5e0)) + edx76);
    b0 = edx76;
    *reinterpret_cast<signed char*>(&eax75) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&alu_x) + 1);
    *reinterpret_cast<signed char*>(&edx76) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&alu_y) + 1);
    *reinterpret_cast<signed char*>(&edx76) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(eax75 * 4 + 0x804e5e0)) + edx76);
    b1 = edx76;
    *reinterpret_cast<signed char*>(&eax75) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&alu_x) + 2);
    *reinterpret_cast<signed char*>(&edx76) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&alu_y) + 2);
    *reinterpret_cast<signed char*>(&edx76) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(eax75 * 4 + 0x804e5e0)) + edx76);
    b2 = edx76;
    *reinterpret_cast<signed char*>(&eax75) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&alu_x) + 3);
    *reinterpret_cast<signed char*>(&edx76) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&alu_y) + 3);
    *reinterpret_cast<signed char*>(&edx76) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(eax75 * 4 + 0x804e5e0)) + edx76);
    b3 = edx76;
    eax77 = b0;
    edx78 = b1;
    b0 = (*reinterpret_cast<int32_t**>(eax77 * 4 + 0x804b080))[edx78];
    eax79 = b0;
    edx80 = b2;
    b0 = (*reinterpret_cast<int32_t**>(eax79 * 4 + 0x804b080))[edx80];
    eax81 = b0;
    edx82 = b3;
    b0 = (*reinterpret_cast<int32_t**>(eax81 * 4 + 0x804b080))[edx82];
    eax83 = b0;
    b0 = eax83;
    ecx84 = b0;
    data_p = reinterpret_cast<struct s0*>(0x804b030);
    edx85 = jmp_r0;
    **reinterpret_cast<int32_t**>(ecx84 * 4 + 0x83f4150) = edx85;
    data_p = reinterpret_cast<struct s0*>(0x804b034);
    edx86 = jmp_r1;
    **reinterpret_cast<int32_t**>(ecx84 * 4 + 0x83f4150) = edx86;
    data_p = reinterpret_cast<struct s0*>(0x804b038);
    edx87 = jmp_r2;
    **reinterpret_cast<int32_t**>(ecx84 * 4 + 0x83f4150) = edx87;
    data_p = reinterpret_cast<struct s0*>(0x804b03c);
    edx88 = jmp_r3;
    **reinterpret_cast<int32_t**>(ecx84 * 4 + 0x83f4150) = edx88;
    data_p = reinterpret_cast<struct s0*>(0x804b040);
    edx89 = jmp_f0;
    **reinterpret_cast<int32_t**>(ecx84 * 4 + 0x83f4150) = edx89;
    data_p = reinterpret_cast<struct s0*>(0x804b044);
    edx90 = jmp_f1;
    **reinterpret_cast<int32_t**>(ecx84 * 4 + 0x83f4150) = edx90;
    data_p = reinterpret_cast<struct s0*>(0x804b050);
    eax91 = *reinterpret_cast<struct s8**>(ecx84 * 4 + 0x83f4150);
    edx92 = jmp_d0;
    eax91->f0 = edx92;
    edx93 = g85f418c;
    eax91->f4 = edx93;
    data_p = reinterpret_cast<struct s0*>(0x804b058);
    eax94 = *reinterpret_cast<struct s9**>(ecx84 * 4 + 0x83f4150);
    edx95 = jmp_d1;
    eax94->f0 = edx95;
    edx96 = g85f4194;
    eax94->f4 = edx96;
    eax97 = b0;
    **reinterpret_cast<int32_t**>(eax97 * 4 + 0x83f4130) = 1;
    eax98 = fp;
    stack_temp = eax98;
    edx99 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4110);
    edx100 = sp;
    **reinterpret_cast<int32_t**>(edx99 * 4 + 0x83f4150) = (edx100 - 0x4000d)->f0;
    eax101 = sp;
    edx102 = on;
    data_p = eax101;
    edx103 = stack_temp;
    **reinterpret_cast<int32_t**>(edx102 * 4 + 0x83f4150) = edx103;
    eax104 = R1;
    stack_temp = eax104;
    edx105 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4110);
    edx106 = sp;
    **reinterpret_cast<int32_t**>(edx105 * 4 + 0x83f4150) = (edx106 - 0x4000d)->f0;
    eax107 = sp;
    edx108 = on;
    data_p = eax107;
    edx109 = stack_temp;
    **reinterpret_cast<int32_t**>(edx108 * 4 + 0x83f4150) = edx109;
    eax110 = R2;
    stack_temp = eax110;
    edx111 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4110);
    edx112 = sp;
    **reinterpret_cast<int32_t**>(edx111 * 4 + 0x83f4150) = (edx112 - 0x4000d)->f0;
    eax113 = sp;
    edx114 = on;
    data_p = eax113;
    edx115 = stack_temp;
    **reinterpret_cast<int32_t**>(edx114 * 4 + 0x83f4150) = edx115;
    eax116 = R3;
    stack_temp = eax116;
    edx117 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4110);
    edx118 = sp;
    **reinterpret_cast<int32_t**>(edx117 * 4 + 0x83f4150) = (edx118 - 0x4000d)->f0;
    eax119 = sp;
    edx120 = on;
    data_p = eax119;
    edx121 = stack_temp;
    **reinterpret_cast<int32_t**>(edx120 * 4 + 0x83f4150) = edx121;
    eax122 = F1;
    stack_temp = eax122;
    edx123 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4110);
    edx124 = sp;
    **reinterpret_cast<int32_t**>(edx123 * 4 + 0x83f4150) = (edx124 - 0x4000d)->f0;
    eax125 = sp;
    edx126 = on;
    data_p = eax125;
    edx127 = stack_temp;
    **reinterpret_cast<int32_t**>(edx126 * 4 + 0x83f4150) = edx127;
    eax128 = D1;
    stack_temp = eax128;
    eax129 = g804b05c;
    g81f40f4 = eax129;
    edx130 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4110);
    edx131 = sp;
    **reinterpret_cast<int32_t**>(edx130 * 4 + 0x83f4150) = *reinterpret_cast<int32_t*>((edx131 - 0x4000d)->f0 - 0x200068);
    eax132 = sp;
    edx133 = on;
    data_p = eax132;
    eax134 = *reinterpret_cast<struct s10**>(edx133 * 4 + 0x83f4150);
    edx135 = stack_temp;
    eax134->f0 = edx135;
    edx136 = g81f40f4;
    eax134->f4 = edx136;
    edx137 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4114);
    edx138 = sp;
    **reinterpret_cast<struct s0***>(edx137 * 4 + 0x83f4150) = edx138;
    R3 = reinterpret_cast<int32_t>("Hello, world!\n");
    eax139 = R3;
    stack_temp = eax139;
    edx140 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4110);
    edx141 = sp;
    **reinterpret_cast<int32_t**>(edx140 * 4 + 0x83f4150) = (edx141 - 0x4000d)->f0;
    eax142 = sp;
    edx143 = on;
    data_p = eax142;
    edx144 = stack_temp;
    **reinterpret_cast<int32_t**>(edx143 * 4 + 0x83f4150) = edx144;
    alu_x = reinterpret_cast<int32_t*>(0x88048ca4);
    alu_y = 0x80000000;
    eax145 = 0;
    ecx146 = 0;
    alu_c = 0;
    *reinterpret_cast<int16_t*>(&eax145) = *reinterpret_cast<int16_t*>(&alu_x);
    *reinterpret_cast<int16_t*>(&ecx146) = *reinterpret_cast<int16_t*>(&alu_y);
    *reinterpret_cast<int16_t*>(&ecx146) = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&alu_c) + 2);
    edx147 = (*reinterpret_cast<int32_t**>((*reinterpret_cast<int32_t**>(eax145 * 4 + 0x805ef10))[ecx146] * 4 + 0x805ef10))[ecx146];
    *reinterpret_cast<int16_t*>(&alu_s) = *reinterpret_cast<int16_t*>(&edx147);
    alu_c = edx147;
    *reinterpret_cast<int16_t*>(&eax145) = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&alu_x) + 2);
    *reinterpret_cast<int16_t*>(&ecx146) = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&alu_y) + 2);
    *reinterpret_cast<int16_t*>(&ecx146) = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&alu_c) + 2);
    edx148 = (*reinterpret_cast<int32_t**>((*reinterpret_cast<int32_t**>(eax145 * 4 + 0x805ef10))[ecx146] * 4 + 0x805ef10))[ecx146];
    *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&alu_s) + 2) = *reinterpret_cast<int16_t*>(&edx148);
    alu_c = edx148;
    eax149 = alu_s;
    stack_temp = eax149;
    edx150 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4110);
    edx151 = sp;
    **reinterpret_cast<int32_t**>(edx150 * 4 + 0x83f4150) = (edx151 - 0x4000d)->f0;
    eax152 = sp;
    edx153 = on;
    data_p = eax152;
    edx154 = stack_temp;
    **reinterpret_cast<int32_t**>(edx153 * 4 + 0x83f4150) = edx154;
    external = 0x8048200;
    eax155 = on;
    R0 = **reinterpret_cast<int32_t**>(eax155 * 4 + 0x85f41a8);
    eax156 = sp;
    stack_temp = eax156->f0;
    edx157 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4110);
    edx158 = sp;
    **reinterpret_cast<int32_t**>(edx157 * 4 + 0x83f4150) = (edx158 - 0x4000c)->f0;
    eax159 = sp;
    stack_temp = (eax159 - 0x4000c)->f0;
    edx160 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4110);
    edx161 = stack_temp;
    **reinterpret_cast<int32_t**>(edx160 * 4 + 0x83f4150) = edx161;
    R0 = 0;
    eax162 = target;
    alu_x = eax162;
    alu_y = 0x88048d1c;
    eax163 = 0;
    edx164 = 0;
    *reinterpret_cast<signed char*>(&eax163) = *reinterpret_cast<signed char*>(&alu_x);
    *reinterpret_cast<signed char*>(&edx164) = *reinterpret_cast<signed char*>(&alu_y);
    *reinterpret_cast<signed char*>(&edx164) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(eax163 * 4 + 0x804e5e0)) + edx164);
    b0 = edx164;
    *reinterpret_cast<signed char*>(&eax163) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&alu_x) + 1);
    *reinterpret_cast<signed char*>(&edx164) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&alu_y) + 1);
    *reinterpret_cast<signed char*>(&edx164) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(eax163 * 4 + 0x804e5e0)) + edx164);
    b1 = edx164;
    *reinterpret_cast<signed char*>(&eax163) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&alu_x) + 2);
    *reinterpret_cast<signed char*>(&edx164) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&alu_y) + 2);
    *reinterpret_cast<signed char*>(&edx164) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(eax163 * 4 + 0x804e5e0)) + edx164);
    b2 = edx164;
    *reinterpret_cast<signed char*>(&eax163) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&alu_x) + 3);
    *reinterpret_cast<signed char*>(&edx164) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&alu_y) + 3);
    *reinterpret_cast<signed char*>(&edx164) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(eax163 * 4 + 0x804e5e0)) + edx164);
    b3 = edx164;
    eax165 = b0;
    edx166 = b1;
    b0 = (*reinterpret_cast<int32_t**>(eax165 * 4 + 0x804b080))[edx166];
    eax167 = b0;
    edx168 = b2;
    b0 = (*reinterpret_cast<int32_t**>(eax167 * 4 + 0x804b080))[edx168];
    eax169 = b0;
    edx170 = b3;
    b0 = (*reinterpret_cast<int32_t**>(eax169 * 4 + 0x804b080))[edx170];
    eax171 = b0;
    b0 = eax171;
    ecx172 = b0;
    data_p = reinterpret_cast<struct s0*>(0x804b030);
    edx173 = jmp_r0;
    **reinterpret_cast<int32_t**>(ecx172 * 4 + 0x83f4150) = edx173;
    data_p = reinterpret_cast<struct s0*>(0x804b034);
    edx174 = jmp_r1;
    **reinterpret_cast<int32_t**>(ecx172 * 4 + 0x83f4150) = edx174;
    data_p = reinterpret_cast<struct s0*>(0x804b038);
    edx175 = jmp_r2;
    **reinterpret_cast<int32_t**>(ecx172 * 4 + 0x83f4150) = edx175;
    data_p = reinterpret_cast<struct s0*>(0x804b03c);
    edx176 = jmp_r3;
    **reinterpret_cast<int32_t**>(ecx172 * 4 + 0x83f4150) = edx176;
    data_p = reinterpret_cast<struct s0*>(0x804b040);
    edx177 = jmp_f0;
    **reinterpret_cast<int32_t**>(ecx172 * 4 + 0x83f4150) = edx177;
    data_p = reinterpret_cast<struct s0*>(0x804b044);
    edx178 = jmp_f1;
    **reinterpret_cast<int32_t**>(ecx172 * 4 + 0x83f4150) = edx178;
    data_p = reinterpret_cast<struct s0*>(0x804b050);
    eax179 = *reinterpret_cast<struct s11**>(ecx172 * 4 + 0x83f4150);
    edx180 = jmp_d0;
    eax179->f0 = edx180;
    edx181 = g85f418c;
    eax179->f4 = edx181;
    data_p = reinterpret_cast<struct s0*>(0x804b058);
    eax182 = *reinterpret_cast<struct s12**>(ecx172 * 4 + 0x83f4150);
    edx183 = jmp_d1;
    eax182->f0 = edx183;
    edx184 = g85f4194;
    eax182->f4 = edx184;
    eax185 = b0;
    **reinterpret_cast<int32_t**>(eax185 * 4 + 0x83f4130) = 1;
    edx186 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4110);
    edx187 = fp;
    **reinterpret_cast<int32_t**>(edx186 * 4 + 0x83f4150) = edx187;
    eax188 = sp;
    stack_temp = eax188->f0;
    g81f40f4 = eax188->f4;
    edx189 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4110);
    edx190 = sp;
    **reinterpret_cast<int32_t**>(edx189 * 4 + 0x83f4150) = *reinterpret_cast<int32_t*>((edx190 - 0x4000c)->f0 - 0x200060);
    edx191 = on;
    data_p = reinterpret_cast<struct s0*>(0x804b058);
    eax192 = *reinterpret_cast<struct s13**>(edx191 * 4 + 0x83f4150);
    edx193 = stack_temp;
    eax192->f0 = edx193;
    edx194 = g81f40f4;
    eax192->f4 = edx194;
    eax195 = sp;
    stack_temp = eax195->f0;
    edx196 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4110);
    edx197 = sp;
    **reinterpret_cast<int32_t**>(edx196 * 4 + 0x83f4150) = (edx197 - 0x4000c)->f0;
    edx198 = on;
    data_p = reinterpret_cast<struct s0*>(0x804b044);
    edx199 = stack_temp;
    **reinterpret_cast<int32_t**>(edx198 * 4 + 0x83f4150) = edx199;
    eax200 = sp;
    stack_temp = eax200->f0;
    edx201 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4110);
    edx202 = sp;
    **reinterpret_cast<int32_t**>(edx201 * 4 + 0x83f4150) = (edx202 - 0x4000c)->f0;
    edx203 = on;
    data_p = reinterpret_cast<struct s0*>(0x804b03c);
    edx204 = stack_temp;
    **reinterpret_cast<int32_t**>(edx203 * 4 + 0x83f4150) = edx204;
    eax205 = sp;
    stack_temp = eax205->f0;
    edx206 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4110);
    edx207 = sp;
    **reinterpret_cast<int32_t**>(edx206 * 4 + 0x83f4150) = (edx207 - 0x4000c)->f0;
    edx208 = on;
    data_p = reinterpret_cast<struct s0*>(0x804b038);
    edx209 = stack_temp;
    **reinterpret_cast<int32_t**>(edx208 * 4 + 0x83f4150) = edx209;
    eax210 = sp;
    stack_temp = eax210->f0;
    edx211 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4110);
    edx212 = sp;
    **reinterpret_cast<int32_t**>(edx211 * 4 + 0x83f4150) = (edx212 - 0x4000c)->f0;
    edx213 = on;
    data_p = reinterpret_cast<struct s0*>(0x804b034);
    edx214 = stack_temp;
    **reinterpret_cast<int32_t**>(edx213 * 4 + 0x83f4150) = edx214;
    eax215 = sp;
    stack_temp = eax215->f0;
    edx216 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4110);
    edx217 = sp;
    **reinterpret_cast<int32_t**>(edx216 * 4 + 0x83f4150) = (edx217 - 0x4000c)->f0;
    edx218 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4114);
    edx219 = stack_temp;
    **reinterpret_cast<int32_t**>(edx218 * 4 + 0x83f4150) = edx219;
    eax220 = sp;
    stack_temp = eax220->f0;
    edx221 = on;
    data_p = reinterpret_cast<struct s0*>(0x83f4110);
    edx222 = sp;
    **reinterpret_cast<int32_t**>(edx221 * 4 + 0x83f4150) = (edx222 - 0x4000c)->f0;
    edx223 = stack_temp;
    branch_temp = edx223;
    eax224 = on;
    edx225 = branch_temp;
    **reinterpret_cast<int32_t**>(eax224 * 4 + 0x83f4140) = edx225;
    ecx226 = on;
    data_p = reinterpret_cast<struct s0*>(0x85f4170);
    eax227 = *reinterpret_cast<struct s14**>(ecx226 * 4 + 0x83f4150);
    edx228 = R0;
    eax227->f0 = edx228;
    edx229 = R1;
    eax227->f4 = edx229;
    edx230 = R2;
    eax227->f8 = edx230;
    edx231 = R3;
    eax227->f12 = edx231;
    data_p = reinterpret_cast<struct s0*>(0x85f4180);
    eax232 = *reinterpret_cast<struct s15**>(ecx226 * 4 + 0x83f4150);
    edx233 = F0;
    eax232->f0 = edx233;
    edx234 = F1;
    eax232->f4 = edx234;
    data_p = reinterpret_cast<struct s0*>(0x85f4188);
    eax235 = *reinterpret_cast<struct s16**>(ecx226 * 4 + 0x83f4150);
    edx236 = D0;
    eax235->f0 = edx236;
    edx237 = g804b054;
    eax235->f4 = edx237;
    edx238 = D1;
    eax235->f8 = edx238;
    edx239 = g804b05c;
    eax235->f12 = edx239;
    eax240 = on;
    **reinterpret_cast<int32_t**>(eax240 * 4 + 0x83f4130) = 0;
}
