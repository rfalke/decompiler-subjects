
int64_t deregister_tm_clones() {
    int64_t rax1;

    *reinterpret_cast<int32_t*>(&rax1) = 0x43b028;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

int64_t inst_0_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf r9w, r10w");
    return -0xcd7884bb594efabf + 0x66ea309d41dc81f3 + 0x51c22e08a9fdf48e - 0x689c67095123c2ab + 0x2d6992ad4ebf875b + 0x50dddcc98b7bb675 - 0x7392694bd9f2a648 - 0x77d8eb1fcceea7da + 0x3f78d59439ca2667 - 0x2d680ffe6bccddd2 - 0x29b468724c1d1800 - 0x1fd487af1f95e88e - 0xb0a3bd215c7ea7 - 0x3057c861a3b0c917 - 0x9b8d65ed1c2ae3 + 0x53a89623db1da83b;
}

int64_t inst_0_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf r11w, r10w");
    return -0xa8a8ffc07edeedfb - 0x6c7000f2a73b10b4 + 0x2761b9b4014e0612 + 0x2f6658ab3d8d5067 - 0x102fd4c82529ea58 - 0x5846c15f1cfe2e60 - 0x48f279afb1f49bf4 + 0x57cd7ab5597af321 + 0x4fdc3b105c2ed6e6 - 0x41f0a4db1ede7853 - 0x10bde42309204ed5 - 0x6dde18f4d9a6ed80 + 0x638e7b8978925130 + 0x773bf7511a61e788 - 0x25c591b642f4a04d - 0x2c67f6cc28a79fbd;
}

int64_t inst_0_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf bx, r11w");
    return -0xafe569bc98690de0 - 0x4c43cf9d6a348209 - 0x39aafeae3579f700 - 0x6b0bd698ea5a0797 + 0x2aba5f0a0317b59 + 0x42cdc0e4e1edb04c - 0x534d0a74b5918a76 - 0x793e9d34caa7827a + 0x6703b5027339d85f + 0xe8466bc1e37bd2c + 0x750f29851371846e - 0x53314742fb7e8808 + 0x13d12bd1c6b8528a + 0x662d6f6883e031ce - 0x2dab8386f775eedc + 0x443939c12404c654;
}

int64_t inst_0_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf si, r12w");
    return -0xbbe14e5083868057 - 0x2a41a26d54256bf8 - 0x4541716c37b13390 + 0x2167376d79627759 - 0x51c53b6cccbf47e0 + 0x5c7343aa339de3d0 + 0x1f28bd0cca33e8ba + 0x200719a72dd5c3f1 + 0x2689186351fa132a - 0x6b75c9cc2374bcf0 + 0x6ac6bee70873336e - 0x42ef81de2cfc9c54 + 0x70ad8b75f9fbc1ba + 0x2d672bef703e41b7 + 0x4b77038981cef7b6 - 0xc56fac3bef1a4c2;
}

int64_t inst_0_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf si, r12w");
    return -0xeb5229a48f259fc8 + 0x4bbcecedb5e7e3e0 - 0x6980eb9f50e626c7 + 0xf9edbeb0dbd4f6b + 0x7ed954a2f8004102 - 0x70bdba7300368dc1 - 0x63d9d5b974a5db22 - 0x4c417223436afaf8 + 0x5624d48555a03923 + 0x6bc0851c61646b2f + 0x5417d1c8fd6c4d6 - 0x2965d6a14a1b7f1 + 0x6428f3bf2c13b601 - 0x687d1819b1092e92 - 0x348107a1e0993997 + 0xfbbacc01003294d;
}

int64_t inst_0_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf r9w, bp");
    return -0xf4e6119bdbafafd - 0x75ccbe3022092d81 - 0x44f077a4bb4162e6 - 0x69262a0f38c91a6e - 0x1e395136928fd5c5 + 0x19e9e09e3d20896 + 0x1c1ff4bb712837be - 0x36d5b1f497cfa25c + 0x411fd7c19bf04607 - 0x1d4c712bc8cd71ea - 0x720f087d55d8796d + 0x1f48d31c996c6b4a + 0x14cde9354ecedb47 - 0x32910f6ef26ad101 + 0x5ff3c2f988ecf49e + 0x5744636ead2c5ec8;
}

int64_t inst_0_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf cx, r11w");
    return -0xaa7119362c274df2 - 0x261e2dea0f67c2c6 + 0x58d82bdae1a7d4ff - 0x4b8a9e6bb9fcbec7 + 0x74ea67db4c2a899 - 0x7e1f163517d04454 - 0x45e802dd22aa195b + 0x4832d7d4da371caa - 0x51936ff6c15639d5 - 0x332d70fac227a16b - 0x7af0a25d084e1ea4 - 0x7682cfed776b2ec0 - 0x25c83fefd6111069 + 0x7f1c41f2871083cf - 0x3ee0e3961419f73c - 0x6c7776bfda48eb9d;
}

int64_t inst_0_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf ax, si");
    return -0x6ffce431f2a642c8 + 0x12ab40edba84b752 - 0x3297ad8d59f9c3c5 - 0x2fbeee127bafa8aa + 0x40969f355867abb - 0x5659e8480a242e24 - 0x5d942c998f43d97b - 0x3b546ffe5aae498f + 0x7f87c6b3aee0fd2a + 0x144148ee1f69596a - 0x3a96c9f7e9891cd3 - 0x40d3913a722cad05 + 0x4ed8af4fefa0ab04 + 0x54a7e9d9220066de + 0x6d198617d89e0252 - 0x7e1779dfb0781562;
}

int64_t inst_0_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf cx, r15w");
    return -0xc70a573ab86aac2a - 0x5090a178cee9cfa0 - 0x26df90acef833528 + 0x32ceb7a662a54c5 - 0x37eba570db9336b3 + 0x3318271699fbf14f - 0x7070d38521ed458d - 0x805afca8f64a84 - 0x266cce040749e266 + 0x726677d794164464 + 0x5aec05c11187f03a + 0xd46de48e125947f + 0x3a090c0cc89be08c - 0x2da562b24940b255 - 0x35f33315636d432e + 0x2675469f81c12ab9;
}

int64_t inst_0_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf r14w, r8w");
    return -0x573fd03548e6a9f4 - 0x49a2d67edb728165 + 0x64ce135d104fccb5 + 0x48e98e928821753c + 0x46974697bf64572b - 0x325a940ea078475c + 0x31df1190842ed5f6 + 0x77576e080f5c8d8c + 0xc3c650f3376afee + 0x33e879a68b09dea8 + 0x21f75c92b2c92921 - 0x33917e597d3774d9 - 0x701bbdc0a7a5d07d - 0x6a4040a546d695b4 + 0x125aa316cd7516eb - 0x30d18efcf99a1337;
}

int64_t inst_1_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf r12d, r14d");
    return -0xcab076c3797522bd + 0x5e94c158e9bdb641 + 0x36fc2e7d38f29130 + 0x1af8d8859c8cc036 + 0x70ea201531c1f377 + 0x10b0637c08af850a - 0x6c52d85e08db5feb - 0x7b45a5974d83b711 + 0x6c487bc2a9a4bc57 + 0x393b908aa4cfc6a7 + 0x3f6284cb31c79d96 + 0x6f3aff9de448ad37 - 0x6f01cc991dc284af + 0x24adcc90f58883be - 0x1e487bed3535162d + 0x3da93a8b358b01a;
}

int64_t inst_1_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf edi, r9d");
    return -0x5aa9d44a8d65b842 + 0x281dc107879ea7f5 - 0xf8f7681841485ac - 0x5db372aa3adb4553 + 0x5806d697eea01306 + 0x70b668624ad9655a + 0x7f7131f7b497d1a5 + 0x4715365caa7d5b - 0x3894a640ee11e5be - 0x5b12ac6611b120c3 + 0x58e9808c88ca768b + 0x61d82ce6f8627ad2 - 0x8bdb88fa9c5fc54 + 0x22b3be6c729b6c5e - 0x6c218ce8f5638688 + 0x1dbd47dd9b71132;
}

int64_t inst_1_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf r10d, ebx");
    return -0x4e12a6e5f757a9c8 - 0x1161242fcf9bf3c5 - 0x1adbb4a5b0e35a06 + 0x5911bc5f01e70acd + 0x23dd035cdda6695c + 0x196c5012b9d3ab61 - 0x5a24994a1abfe38c + 0x3c746c91c8179bad + 0xcc8184b5f578969 + 0x4274c6d8c0803e03 - 0x514b5b239fe92188 + 0x30aa83522a12e111 + 0x698291d6a1832fbc + 0x6cf7a92b77e75a30 - 0x1986c0becdeee07d + 0x5889e1e7fc212d87;
}

int64_t inst_1_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf r13d, r15d");
    return -0xf509592163146ed3 + 0x520ac96bf05d3f67 - 0x3979998ec6d95978 - 0xb5289a03b593cf9 + 0x55c5ab14ee47d603 - 0x2dc91a9d7c55d892 + 0x215d0cd2de19ec80 + 0x5fff410f435c0f53 - 0x4dcfbe1b3b648f82 - 0x7a3f196acc325b3a - 0x671c31ef11c194e2 + 0x44f607c47ef701c - 0x574bc22edf09bacc - 0x1440cfbb27fd8e40 - 0x38ee1324792c954e - 0x49839f9cabeb0058;
}

int64_t inst_1_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf r14d, ebp");
    return -0xdf34553555168963 - 0x6328a595130d38e6 + 0x3b8ad4d56cee6b96 + 0x6ed28492e6e95855 + 0x365c5168b1eeac97 - 0x694a4db81f73a492 + 0x3431e4abc8e70f02 - 0x24192b028c289604 - 0x38933001098248a6 + 0xedae772326b425c + 0x3cb2559f6f5f70e6 - 0xa1938c309331045 + 0x6d49a5e895b79a6e + 0x4aafa5a3ef0217f0 + 0x3ddc6d8b40a27b38 + 0x6cdfc46dfa30d5e;
}

int64_t inst_1_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf edx, r10d");
    return -0x18cf36353f7088db + 0x73449e8e6c5dc8b0 + 0x3fb448d57bc85205 + 0x9a330eb7b0a9f5f - 0x709e39a01519931f + 0xe39bed192ec28c4 - 0x2e3025d429b65e1b + 0x3775e8ae3c14bd3b + 0x4fc1b3a44e0751b - 0x68624479fe8d5834 + 0x7b684ede6c1b6e81 + 0x65e298fecf3355f + 0x7f5c90848bbef3a8 + 0x3a00bed2cc52e5d3 + 0x5221fc5db1c731ea - 0x6aea941de22152cd;
}

int64_t inst_1_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf ecx, r14d");
    return -0x8d9a093ffb234a7c - 0x2eda10b380cdbb2d + 0x6f65464045e9211f - 0x5acb5538bb5f9b1d - 0x7fee0810dc119ff3 - 0x1ab4c28360a4bb2a + 0x5c6fb87fc4d1a27f - 0x16efae82e42c56b0 - 0x35a992f6af9979c9 - 0x6bb1262f6c402a95 + 0x4b8a0510c4dac9d7 - 0x2e7b95ccb19eb711 - 0x2a84b0bd6d0d3422 + 0x2e0d1a5b442bcee0 - 0x24f0d6982760dcd - 0x108ae28eb8a94b4a;
}

int64_t inst_1_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf r10d, r8d");
    return -0x812d646461aa4adf - 0x41b9d0414426aa3f + 0x1364637881859556 + 0x80fe8d342ab4c6d - 0x2a020573bcd7c504 + 0x30cd696298957b4 + 0x2069ee96de747e76 - 0x4725ab507b11bec9 + 0x7b77456913364286 + 0x14e2b5a214cbfa50 - 0x25149582fac2bede + 0x589782bea4ebb07c - 0x620b161c5c1e2cc1 - 0x4fdcdd5629254397 - 0x292db31d6b1af047 + 0x213f47dc448aed79;
}

int64_t inst_1_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf r13d, r13d");
    return -0x9dfb09944a01c82e - 0x46831f1862e84ebd + 0x31e95ac6882822f7 - 0x1577f74059f9b2e3 - 0x980cff0129e8a6e - 0x3b3d47b84c6236ea + 0x2bb8b0b26c9f04b3 - 0x7bc4efb8674b12e3 - 0x251b81053556409a + 0x66b7406690b42bcc + 0x53d362bf67f7580d + 0x172f0ef850b7d973 + 0x5a2c94c539496291 + 0x5a5c2ee200025c64 - 0x37aff6de5db6bfc0 - 0x72734d47ddf042f7;
}

int64_t inst_1_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf r14d, r8d");
    return -0x1f9bdb6f0ff69019 - 0x1fdf09a36f3cb401 + 0x4e8550c33906662f + 0x556e785b3f70ff48 - 0x4348a4178bc85d21 + 0x7c27e68075ed9d18 + 0x3fb9694c304c727b - 0x27dbcc00467a6d4b - 0x43607d1455178952 - 0xcf4f8b35470eb7a + 0x2093806150160bc + 0x35a35274af2e357c + 0x39ec7a64fe3fce6d - 0x5ac29afe6045ec8 - 0x29f849840f5ab85b + 0x537ef6ab293861fe;
}

int64_t inst_2_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf rax, rcx");
    return -0x1147efad46e1b527 - 0x73ec4118dda6e777 - 0x439fc0ac08fdc1bb + 0x435003dfab50e6f - 0x1fb6077224732305 + 0x25f22c60e46586f8 - 0x29e7ae060c91ccdb + 0x1c46e97569d5ace1 + 0x5900d36b93926b68 - 0x1c230445b18e2dbc - 0x1d551be21869951c + 0x67f1c1b9bcc5557 + 0x30cbae7714e488ea + 0x32576eafaeee76d3 - 0xe478bb0d3aefa51 + 0x3fd84053792e5377;
}

int64_t inst_2_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf rbp, rcx");
    return -0xfde1c08ae784614b - 0x73952a2c43a90532 + 0x35fd7df0eb82c540 + 0x2a84382a5425790 + 0xd90272331f7815d - 0x541b1b97d35335a1 + 0x43518544901c1846 + 0x3fe29b3c96b33c53 - 0x13698249d65c4451 - 0x24a9d3c2e1a0a0a1 + 0x24c97bfbc4d52024 + 0x30f02f0f786bacef + 0x62bae9648301d783 + 0xcf0fef0c27710fc + 0x3059e94fa99d09f5 + 0x4c0bfdb6d292501a;
}

int64_t inst_2_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf rbp, rcx");
    return -0xd7488ca16d48e6cb - 0x6fe5030b805f0a69 - 0x46f3b03a56944891 - 0x745b79730e533c2c - 0x35d18b29b59c2d03 - 0x5a7fc352a959e085 + 0x6ef4fc3dea47eeb7 + 0x34e8f4c557f71d78 + 0x4aae54b551e3cb42 - 0x4aa0060f50106d41 - 0x7599660e006964df + 0x18fbe47ef9f90913 + 0x403aaebf8aae3569 + 0x2dedc69c5946068 - 0x5569f321be0ef591 + 0x27fe268b2c13a7d2;
}

int64_t inst_2_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf r12, rsi");
    return -0xb06bf005d1f0cf1e + 0x43fb3b1b1ce69baa - 0x4b37235dcd52e94a - 0x4d26bc8e40a186b + 0x8ab9202c2d4bc5c + 0xa26f01fbb9ee4a1 + 0x3f46c788d0e0681d - 0x124426db94426e25 + 0x78e6478cc38ffdfd - 0x2601dfe3a40f6934 - 0x3b9eb40359b49f6f + 0x47d86e6fa587fdd - 0xd8d5ae27a54ab48 + 0x43f0644fb3d270da - 0x31db8ca3ed8f4081 + 0x60d7f0d2999b1fc9;
}

int64_t inst_2_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf rax, r9");
    return -0x3e54d736e66f2019 - 0x61c4dff916fd5db9 - 0x6a9847352b8b329f - 0x3861be3f706c70e + 0x44ef249df8a99674 + 0x67baced1e6175b0f - 0x1aece18930db074b - 0x2235959631b65dd9 + 0x39a0a35155e21fd3 + 0x1d1cf8025a49b250 - 0x5c548ad4db1eddbd + 0x3bfb4dac2f355ff5 - 0x162a1f2ac7786b42 - 0x70ea0f29dbc4882e + 0x193b979ebde5f6dc - 0x683000b3618b8cc0;
}

int64_t inst_2_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf rax, rbx");
    return -0x8b29ead66a38c192 + 0x5e2dfe33f6e281d1 + 0x808d007f3316dc1 + 0x3854393eecdf3f87 + 0x6587b4299163d56b + 0x1fdbbd7c51f2aa91 - 0x4b45266f5a9c735e + 0x45997f6da5f1186c - 0x511a719864ab6fa - 0x8c6fc3923c0e227 + 0x1bfdc0da80ea9016 + 0x7e1b18b754766c34 + 0x1ec23c088d8a3c5b - 0x7ee288e667b3b6ad + 0x77518e3a4f2d3231 + 0x3e4bb6455a0890d5;
}

int64_t inst_2_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf r10, r10");
    return -0xd633df6e8ca16898 - 0x4f134f32fc040e0d + 0x27289e67cf102e95 + 0x247d5d7e9ef109c0 + 0x5f384fae491eb985 + 0x747858cc1fec6e48 - 0x1deeffdc878fd292 + 0x21501adc2f67ab17 + 0x7c836aaef45123be - 0x41d8674c2234c1eb - 0x78f680c3ebdbcf3e + 0x32a31bee77d4d16 - 0x335f737529aaa392 - 0x32bb4c8d9667d115 - 0x7886f879c96b86e9 - 0x2585f3ec5cb36808;
}

int64_t inst_2_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf rsi, r9");
    return -0x2dd505d9d2877c1f + 0x599516cc4e0457d5 + 0x2ad3f919387c1172 + 0x24f5bf94e2f60e6d - 0x1f7f9704b9e2da5f - 0x40a2f93475867af + 0x37c3a2c7112e6d74 + 0x211699c7e9131008 - 0x3b1216cb6d6f5ffb - 0x683cfe5bad06d689 + 0x6f371475026acb33 - 0x551c6729a01c49ca + 0x74f7a36d9ac747ea - 0x41eb529fd904f218 + 0x5d80f156fd242fa1 + 0x43c2b68c21f390f6;
}

int64_t inst_2_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf r8, r12");
    return -0x803bfc377012d484 - 0x5eeeef23112b7ee + 0x2fbf306179a78012 + 0x115821d451f7b650 - 0x380198c550393ddd - 0x43e18d9854819d8c - 0x79be096119531426 + 0x4c5092bc0474b8b1 + 0xee5b67d7f39a080 + 0x52b0b5b992339603 - 0x7a5712e454e7bd7b - 0x2c2ac8c0a8ee820d - 0x15470846957fa450 + 0x282b53d829c8b68a + 0x692a3fb66b394980 + 0x391acd8807af2ea;
}

int64_t inst_2_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsf rdi, rbx");
    return -0x35955c8f9ad2dfa - 0x166dff487c7ce139 - 0x65ae9de3ce05f49e + 0x3ee25e29e37c255e + 0x688317a6fd7091c7 + 0x4a0583053da4afb0 - 0x376b30e87a2753e7 - 0x16202da4e8e6c73b - 0x1be271295f6a94d4 + 0x5f21ed7bbd9f9d42 - 0x497c9c772c5449c9 - 0x15252c9494f515da - 0x4e3d02c84c9fc769 - 0x410f21a1d68b120f - 0x1f1b112bd3f596d4 + 0x6df4aa1368ba2bb8;
}

int64_t inst_3_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_3_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_3_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_3_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_3_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_3_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_3_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_3_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_3_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_3_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_3_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_3_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_4_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_4_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_4_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_4_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_4_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_4_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_4_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_4_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_4_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_4_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_4_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_4_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_4_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_4_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_4_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_4_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_5_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_5_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_5_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_5_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_5_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_5_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_5_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_5_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_5_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_5_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_5_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_6_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_6_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_6_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_6_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_6_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_6_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_6_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_6_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_6_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_6_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_6_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_6_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_6_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_6_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_6_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_6_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_6_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_7_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_7_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_7_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_7_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_7_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_7_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_7_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_7_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_7_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_7_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_7_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_7_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_7_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_8_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_8_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_8_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_8_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_8_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_8_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_8_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_8_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_8_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_8_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_8_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_8_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_8_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_8_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_8_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_8_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_9_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_9_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_9_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_9_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_9_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_9_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_9_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_9_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_10_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_10_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_10_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_10_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_10_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_10_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_10_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_10_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_10_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_10_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_10_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_10_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_10_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_10_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_11_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_11_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_11_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_11_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_11_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_11_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_11_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_11_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_11_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_11_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_11_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_11_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_11_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_11_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_11_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_11_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_11_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_11_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_11_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_12_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_12_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_12_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_12_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_12_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_12_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_12_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_12_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_12_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_12_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_12_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_12_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_12_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_12_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_12_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_12_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_13_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_13_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_13_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_13_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_13_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_13_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_13_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_13_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_13_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_13_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_13_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_13_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_13_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_13_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_13_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_13_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_13_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_13_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_14_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_14_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_14_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_14_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_14_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_14_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_14_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_14_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_14_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_14_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_14_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_14_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_14_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_14_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_14_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_14_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_14_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_15_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_15_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_15_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_15_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_15_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_15_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_15_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_15_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_15_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_15_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_15_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_15_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_15_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_16_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_16_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_16_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_16_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_16_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_16_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_16_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_16_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_16_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_16_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_16_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_16_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_16_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_16_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_17_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_17_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_17_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_17_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_17_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_17_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_17_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_17_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_17_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_17_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_17_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_17_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_17_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_17_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_18_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_18_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_18_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_18_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_18_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_18_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_18_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_18_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_18_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_18_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_18_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_18_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_18_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_18_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_19_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_19_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_19_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_19_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_19_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_19_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_19_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_19_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_19_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_19_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_19_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_20_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_20_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_20_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_20_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_20_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_20_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_20_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_20_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_20_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_20_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_20_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_20_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_20_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_20_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_20_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_20_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_21_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_21_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_21_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_21_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_21_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_21_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_21_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_21_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_21_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_21_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_21_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_21_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_21_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_21_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_21_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

signed char* fun_42ac7f() {
    int64_t v1;

    goto v1;
}

int64_t inst_21_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_21_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_22_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_22_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_22_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_22_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_22_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_22_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_22_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_22_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_22_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_22_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_22_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_22_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_22_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_22_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_22_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_22_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_22_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_23_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_23_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_23_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_23_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_23_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_23_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_23_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_23_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_23_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_23_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_23_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_23_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_23_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_23_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_23_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_24_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_24_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_24_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_24_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_24_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_24_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_24_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_24_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_24_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_24_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_24_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_24_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_24_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_24_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_24_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_24_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_24_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_24_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_24_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_25_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_25_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_25_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_25_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_25_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_25_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_25_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_25_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_25_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_25_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_25_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_25_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_26_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_26_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_26_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_26_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_26_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_26_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_26_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_26_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_26_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_26_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_26_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_26_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_26_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_26_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_27_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_27_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_27_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_27_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_27_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_27_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_27_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_27_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_27_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_27_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_28_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_28_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_28_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_28_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_28_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_28_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_28_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_28_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_28_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_28_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_28_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_28_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_29_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_29_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_29_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_29_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_29_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_29_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_29_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_29_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_29_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_29_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_29_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_29_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_29_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_29_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_29_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_29_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_29_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_29_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_29_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_30_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_30_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_30_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_30_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_30_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_30_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_30_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_30_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_30_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_30_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_30_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_30_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_30_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_30_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_30_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_30_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_30_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_30_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_30_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_30_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_31_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_31_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_31_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_31_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_31_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_31_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_31_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_31_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_31_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_31_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_31_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_31_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_31_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_31_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_31_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_31_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_31_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_31_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_31_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_32_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_32_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_32_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_32_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_32_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_32_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_32_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_32_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_32_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_32_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_32_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_32_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_32_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_32_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_32_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_32_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_32_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_32_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_33_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_33_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_33_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_33_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

void fun_42d3e5() {
}

int64_t inst_33_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_33_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_33_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_33_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_33_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_33_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_33_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_33_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_33_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_33_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_33_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_33_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_33_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_33_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_33_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_33_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_34_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_34_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_34_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_34_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_34_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_34_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_34_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_34_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_34_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_34_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_34_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_34_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_34_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_34_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_34_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_34_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_34_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_34_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_34_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_35_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_35_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_35_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_35_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_35_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_35_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_35_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_35_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_35_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_35_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_35_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_35_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_35_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_35_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_35_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_35_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_35_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_35_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_35_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_36_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_36_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_36_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_36_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_36_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_36_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_36_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_36_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_36_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_36_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_36_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_36_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_36_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_36_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_36_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_36_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_36_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_37_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_37_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_37_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_37_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_37_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_37_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_37_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_37_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_37_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_37_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_37_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_37_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_37_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_37_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_37_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_37_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_37_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_38_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_38_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_38_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_38_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_38_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_38_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_38_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_38_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_38_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_38_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_38_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_38_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_38_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_38_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_38_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_38_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_38_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_38_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_38_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_38_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_39_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr dx, bp");
    return -0x5ab0dc82c91d207f + 0x355bffd08e4050c9 - 0x6790c609f90a6326 - 0x34298d355075fab1 - 0x70dadfa09b7f7e58 - 0x5a53dd60267f20bb - 0x2d9413ef0b643120 + 0x3eb920c2dabecaa2 - 0x476fa433723e856 + 0x6aea21e020070291 + 0x425b4485e5e7c530 + 0x290cd9081ecdcd7f + 0x4774b2374ec53753 + 0x6660e2aa84a1004b - 0xcb786259d5af233 + 0x81f8c37535d4618;
}

int64_t __assert_fail = 0x401036;

void fun_401030(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    goto __assert_fail;
}

int64_t inst_0_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf cx, r9w");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_0_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf r15w, bp");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_0_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf r14w, r12w");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_0_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf r9w, r12w");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_0_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf r10w, di");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_0_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf bx, r11w");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_0_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf r12w, ax");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_0_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf di, cx");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_0_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf si, r9w");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_0_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf ax, r15w");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_1_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf r15d, r12d");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_1_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf ebp, r14d");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_1_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf r10d, r12d");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_1_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf r8d, ebp");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_1_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf ebp, r15d");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_1_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf ecx, r14d");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_1_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf r8d, esi");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_1_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf r9d, edi");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_1_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf esi, edx");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_1_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf eax, r12d");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_2_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf r14, r10");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_2_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf r13, r10");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_2_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf rcx, rdi");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_2_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf r10, rcx");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_2_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf r12, rbp");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_2_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf rdi, rsi");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_2_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf rbx, r13");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_2_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf r10, r14");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_2_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf rdi, rsi");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_2_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;

    __asm__("rep bsf rdi, r9");
    *reinterpret_cast<int32_t*>(&rbp7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    return rbp7;
}

int64_t inst_3_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_3_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_3_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_3_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_3_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_3_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_3_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_4_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_4_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_4_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_4_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

struct s0 {
    signed char[1] pad1;
    unsigned char 0x1;
};

struct s0* fun_408cda() {
}

int64_t inst_5_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_5_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_5_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_5_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_5_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_5_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_5_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_5_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_5_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_6_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_6_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_6_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_7_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_7_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_7_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_7_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_7_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_7_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_7_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_8_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_8_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_8_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_8_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_9_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_9_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_9_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_9_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_9_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_9_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_9_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_9_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_9_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_9_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_9_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_9_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_10_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_10_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_10_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_10_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_10_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_10_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_11_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_12_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_12_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_12_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_12_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_13_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_13_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_14_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_14_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_14_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_15_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_15_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_15_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_15_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

void fun_4174d8() {
}

int64_t inst_15_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_15_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_15_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_16_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_16_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_16_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_16_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_16_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_17_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_17_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_17_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_17_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_17_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_18_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_18_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_18_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_18_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_18_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_18_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_19_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_19_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_19_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_19_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_19_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_19_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_19_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_19_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_20_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_20_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_20_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_20_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_21_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_21_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_21_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_31_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_22_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_22_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_22_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_23_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_23_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_23_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_23_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_23_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_24_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_25_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_25_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_25_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_25_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_25_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_25_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_25_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_25_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_26_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_26_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_26_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_26_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_26_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_26_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_27_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_27_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_27_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_27_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_27_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_27_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_27_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_27_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_28_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_28_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_28_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_28_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_28_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_28_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_28_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_28_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_29_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_32_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_32_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_34_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_35_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_36_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_36_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_36_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_37_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_37_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_37_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_39_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r8w, bx");
    return 0;
}

int64_t inst_3_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_16_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_17_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_19_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_27_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_27_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

int64_t inst_39_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr cx, r11w");
    return -0x1508b42f14e4e228 + 0x5e19eec51b1faa0e - 0x7a020fbf1b1adc89 + 0x57c6e76393fad3c8 + 0x2eba87cbf8e09ebc + 0x7babc6247139ac1 - 0x5f84fbd6f44e2646 + 0x3d67d866fc40b417 + 0x5a0e7983e745d732 + 0x10ba24b0e54fd4f + 0x7be6c24ac72ce523 - 0x382a6738f2ecfb4d - 0x5f16c5ca2fde1fb2 - 0x3c214a3744f3c191 + 0x7d2ca3bd4050ec78 + 0x4406c26aa3a4d378;
}

int64_t inst_39_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr cx, r12w");
    return 0;
}

int64_t inst_39_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r14w, r8w");
    return -0xda5746176e374ebe - 0x74c2f8fd4397cb42 + 0x628354c1abac6979 + 0x597402b3ed3dfd9d + 0x2489129e9ee49d66 - 0x11d3c6f995373405 - 0x53a097336c963b77 - 0x1ec37006521113e3 - 0x309ebdb604f5a543 - 0x280e845250351285 + 0x41b22d0b9751f007 + 0xb2ed54856229ece + 0x1c0480019c98ca80 + 0x11bf02c1b37a7298 + 0xcfbaf47a0d07c43 - 0x3c214f22bb4e84ed;
}

int64_t inst_39_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r15w, cx");
    return 0;
}

int64_t inst_39_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr cx, r8w");
    return -0x16c1f7661373ba73 - 0x106bc42de7a5e3c5 + 0x18a208d52d57225c + 0x1733abb1e9473b6d - 0x7ee5009d30cae1f0 + 0x47db9262042daeca - 0x73ff602c61e24883 - 0x10c202522ed8660f + 0x746a7fdaa1c53444 - 0x10cbee39a308d810 - 0x42104986f264ac4c - 0x2af31b031d9b6898 + 0x698c1641e96b4065 + 0x41b2f4f88f29d8a3 - 0x55c6877df074b125 + 0x670f26f32af69550;
}

int64_t inst_39_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r13W, si");
    return 0;
}

int64_t inst_39_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r15w, si");
    return -0xb367e086b629f970 - 0x2506989c696c43b3 + 0x20ab02e410a74654 + 0x4174505ed7fbf4d - 0x61d5e57d6538f773 - 0x709ebba1fa02b9d0 - 0x53dc3d61d778365a + 0x163a4da0903a23fc + 0x22453f9b816a64f7 - 0x3855c1ea5f8d280e - 0x2d2581043bcc6ce1 - 0xb5679596b39db88 - 0x67cfc8bbfd19b19f - 0x1fce1e38ec8045f7 - 0x555ee02b0a79704a - 0x10b3fa19beda01c8;
}

int64_t inst_39_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r9w, di");
    return 0;
}

int64_t inst_39_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r14w, r8w");
    return -0x911c35dd37b5e634 + 0xb8cc41bad5f3b5f - 0x4d18a4ed44695243 + 0x513513db6ca81bd8 + 0x328af8f5b5460f01 + 0x62bd3259b06350ff + 0x3e706849c74613ba - 0x1fa64140c9305b6 + 0x25c376b53d62af10 + 0x63a2b9fef88d7fac + 0x3fea5a0c0b3614dd - 0x74d2146f1f92dbe4 + 0x42c9ec836cbc037d + 0x4baa1eff89406881 - 0x2f9e83037e5cfef4 - 0x39f2b825776f902;
}

int64_t inst_39_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r9w, r12w");
    return 0;
}

int64_t inst_39_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr dx, r9w");
    return -0xe8a3f4dd3178afa + 0x6ce09f8a8738ca6 + 0x700a47a19e96c09d - 0x1b6655a498483fba + 0x3ced55ff19817290 - 0x88b5d179b694bb9 + 0x1ce54dcf5e378609 - 0x7ec82b70e4dc8aa4 + 0x849346bdf88b23 + 0x2ed2383a68e9fbae + 0x281ae930a51da3c8 + 0x5b97bb2b8dc37264 + 0x335c7a8b78db310d + 0x6b97005045ee829c - 0x49b90d907a14a92b - 0x27aab51671958c00;
}

int64_t inst_39_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr ax, r12w");
    return 0;
}

int64_t inst_39_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r11w, r12w");
    return -0xfa015525b2611ae3 + 0x5b74584995deda06 - 0x44decdaa2f5be762 + 0x40b39cf823caeb00 + 0x70ab1368a6220782 + 0x177b4f5b98f5a113 + 0x17ed7e2f30f9b823 + 0x27ac7f0190704e9b + 0x1a87d595bab04444 - 0x487343b92a3b13e3 - 0x6b8b090e51a17400 + 0x46361205d692f739 + 0x79bc8b9259b09665 - 0x5aeb98717dc4932b - 0x262c12a884bd780c + 0x3593524cbafcdb24;
}

int64_t inst_39_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r15w, bx");
    return 0;
}

int64_t inst_39_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr di, cx");
    return -0xcc3fb8954c079455 - 0x354df3370317722e - 0x4d2ca2c2ef367e6a - 0x3c4d37a28ae8d6ef - 0x1dc59db74f50033a - 0x1bbeb3fbfc242cec - 0x785fd82309728c6b - 0x49e449ef8ecacf06 + 0x1a86d377a8852de - 0x2c959dfd326d31c8 - 0x53ef49e5053530dd + 0x5854bbae5eab516a + 0x3d0ba11ffd80297c + 0x6dc61fde6433a6f8 - 0x799b3a327ab7a6be + 0x7c2132282462efaf;
}

int64_t inst_39_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r10w, r15w");
    return 0;
}

int64_t inst_39_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r11w, ax");
    return -0x6c9d0bf36f665854 + 0x592d0e25b72e61ab - 0x4e0f7ed016ec530a + 0x7852e246ca95035a - 0x77f3ab62f9c2ec03 + 0x205739e97d6bf477 - 0x55c99611eef14ef5 + 0x3d25941eca16442f - 0x7df2da6f09139aac + 0x4d2310722d3a0c33 - 0xa45a851986b1671 + 0x56341fbe4f019ee9 - 0x23b28e5bbb88b2bb + 0x7663816ae77f1eda - 0x52539dc8a686f5e0 + 0x3df10b0d4595c1fc;
}

int64_t inst_39_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr cx, r8w");
    return 0;
}

int64_t inst_40_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr esi, edx");
    return -0x1cc7acc94f0ccd4d + 0x78d2daa202d7bd2a + 0x3670b75f8bb91c15 - 0x2067bd83c13a4d41 - 0x446391cd8ad56150 - 0x712be40fd339e8b + 0x5d68baa61a7ee4a3 - 0x37766f1bfd33a154 + 0x67e9c443442976c - 0x555789d362c8a163 - 0xb78388aca95d42c + 0x5c7569e5a9653f70 + 0x23899b8d993e1d42 - 0x367d69e60fa70d10 - 0x5abb47df0737984a + 0x17e7f0fabc978619;
}

int64_t inst_40_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r14d, ebx");
    return 0;
}

int64_t inst_40_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr edx, ebx");
    return -0x5488d64c64ce51d2 + 0x42780a191fe3cc1a - 0x28d9c6dd4e5d2c2e + 0x44a574c9979dcbec - 0x614de5e9ef5193f9 - 0x3e2b0868748d842b - 0x153efc013b4b95e5 - 0x301189ad63c75ba5 + 0x13815d35a7b4fdd7 + 0x13ef9a5380f78065 - 0x2008162d09406f21 + 0x3a844f9afb7ed009 - 0x40e455395e49f842 - 0x56bdb46344f40351 + 0x1d8aa1ed52b09da8 + 0x57de3dc9cbdc3a58;
}

int64_t inst_40_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r14d, ecx");
    return 0;
}

int64_t inst_40_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r15d, esi");
    return -0x101e7abb2dd855a4 - 0x4686d3c11e291b8e - 0x19f19a024857efc - 0x7b6151975debbbc - 0x22d2d004be5cda21 + 0x2844c1bb7ef12343 + 0x7e1dd70a2a6d7606 - 0x60bd9cb4cdfe8615 - 0x2e0ef31284051e42 - 0x9bc331ee5dc4c54 + 0x85a2719c9aee34f - 0x62a3468fb300c022 + 0x6daf72ac76e2d981 - 0x6ee505f30b379ddc - 0x75bf8a5e421ce7f - 0x2f8dd5e84f158166;
}

int64_t inst_40_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr edi, edx");
    return 0;
}

int64_t inst_40_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r15d, r8d");
    return -0x3773e87be1f5181c + 0x160056814c04a8bd - 0x348490b54b20927d - 0x4f3d0d17bcfb25eb + 0x49fb7c069d189e95 + 0x75d5cedf188333d0 - 0x14af94954796b631 - 0x435e25e712e12823 - 0x74664b9d5c8b0da5 - 0x6695d1576027f22d + 0x47420f0b64585447 - 0x2af835086ac0ec2 - 0x67e6ef7920491c36 - 0x260149fd172778fc - 0x129858987ac51e7c + 0x61c36a0e595f8335;
}

int64_t inst_40_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r9d, esi");
    return 0;
}

int64_t inst_40_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr ecx, r9d");
    return -0x44ed04340f13717a - 0x134444c0ccd4f533 - 0x1eecd00bf2cc4fcd - 0x21ee680609bece6e + 0x13ca715304bbc673 - 0x346b97881e19d4c4 + 0x305ba2d2ddef694b + 0x566310abd102615b - 0x187474c4c83a3f2e - 0x6001d45596d26a6b + 0x727380cbe7d9b9f6 + 0x6060fc48a14f1f0e + 0x5b084a15e5a74d45 + 0x5d0c2da0bbdce07 - 0x4b0dbb7516b36bff - 0x5c2761c3b4ba65f4;
}

int64_t inst_40_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r14d, r9d");
    return 0;
}

int64_t inst_40_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r10d, r14d");
    return -0x4fef421b149dc14 - 0x3ce2315559ed0aee - 0x294f7b70bee6981a - 0xefebfc29ffe0a20 + 0x3ad8c12c54d4951f - 0x71852ec6a48d6436 - 0x68bc387f8d0377f6 + 0x3f6fc33b5a20a18 - 0x4fa582f0cf400042 + 0x4c207a9e2e75c02b + 0x78c05970cdd7cae5 + 0x172a2f7ca507b1fd - 0x65fb7b7b6e9909e - 0x2308d708d087f94e - 0x1ae197fc67b16a99 + 0x19a62b50dcb93e14;
}

int64_t inst_40_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr ecx, r8d");
    return 0;
}

int64_t inst_40_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r14d, r12d");
    return -0x1c4cd5ba11ac05da + 0x640fd514dc23a652 + 0x2780a2420b20e22e + 0xa0261a8e613df07 + 0xc839260ffe274d8 + 0x7ab9130b3c3af7a6 - 0x3d5793312e9d5953 + 0x79b24d8200eae02 + 0x68668f1ec6aa592b + 0x3be4ca3674a579fb - 0x5b38759034b93fe8 + 0x4d3487f4acdeafa3 + 0x4e31b3ca8b8a60d1 - 0x59b9ee749deb5fb - 0x2b71cb30621eae0 + 0x5377c2d5dde72454;
}

int64_t inst_40_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr esi, ebx");
    return 0;
}

int64_t inst_40_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r8d, ebx");
    return -0x77f0282a4ffe0753 - 0x6d3e633cf0a00ab5 - 0x4db6ebf2c94d12ba + 0x17b59e83d7ccbb11 + 0x6e5cda3d06b6c0a1 + 0x46dae636e1128130 - 0x766a34ba9aef5d3 - 0x3eca1b3d167592 + 0x1fc86a1dc50635ce + 0x4e41ff73a636d961 + 0x593a0ec3d40a9bed + 0x3bb74a948bbaf3e8 + 0xa7b4679af25f6a8 - 0x386a655237b04466 + 0x7066717915cb4ef5 + 0x27eba6239bc07d74;
}

int64_t inst_40_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r8d, r13d");
    return 0;
}

int64_t inst_40_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r11d, eax");
    return -0xbdac6da562993059 + 0x35963ad58f77c5c4 - 0x66976b7e9988477f - 0x3b8cec3be2316955 - 0x57bb6edf87da65e6 - 0x33f19dd09b69993a - 0x7663bccaf1f7cd41 + 0x15d49e6e3ee8b7c3 - 0x3917489e5766028a + 0x37f146c4e7ade32e + 0x54be182006d81dc5 + 0x614be65f124a7d92 + 0x4ca4410562526caa - 0x335ebae5ce3f9d01 - 0x549514d0f8519c3c - 0xe5fa03d1925619c;
}

int64_t inst_40_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr eax, edi");
    return 0;
}

int64_t inst_40_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r14d, r14d");
    return -0xdda50a7488c7a430 + 0x678dcf9713c06b0e + 0x6d3403aabebde9c + 0x5ea5901b90a55821 - 0x495002d2ca8cd053 - 0x33ad431640239c7d + 0xdd7d96e05af1081 + 0xdbaf0b0475566ad + 0x5279e8a28be2d1e1 - 0x4330d44885dab719 - 0x6a391584b2965e1 + 0x2c2ca520c1601b48 - 0x3f3c3b6fc290f26a - 0x518f5ee70c4d4610 - 0x7619c29a8c5774e6 - 0xd7343c6373470d8;
}

int64_t inst_40_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr edi, r15d");
    return 0;
}

int64_t inst_41_values_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r12, r13");
    return -0x20e0fdf660afdb0f - 0x2aecc22b46aac992 - 0x69e35487e2ddca47 - 0x11574a5abac256b7 - 0x4776f639d06fe877 + 0x6c3b64f800927a6e + 0x3455beaaa2cb2de1 - 0x7857103ebbd3f104 - 0x56977e2a32a1886d + 0x2522a151f64674fa + 0x1416bfcc1fb6eee5 - 0x4bcac691dc1cd82c - 0x347d80483dc8d836 - 0x65cff3ade9085f7c - 0x199e30799fe17bf0 - 0x4870fca9eec83105;
}

int64_t inst_41_flags_var_0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r14, r9");
    return 0;
}

int64_t inst_41_values_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r8, rcx");
    return -0x8246a40f2b041033 + 0x11515b46a751c1b2 + 0x20c74de7ee05e0fa + 0x17c917c80046c085 - 0xe8785f9471a2540 - 0x6ff6d1ea05a81203 + 0x169c448e1038e6e0 - 0x3225630c1894e7d2 - 0x777931635e221273 - 0x601a6c8bdef59aae - 0x1eec8a4c32e2fb04 - 0x22b203e98c31cf6a - 0x34f53e9789de2992 + 0xe2905f87d9fde49 - 0x7dd6935ba7d4539b + 0x5e1bee8d822e13d6;
}

int64_t inst_41_flags_var_1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r15, r14");
    return 0;
}

int64_t inst_41_values_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr rax, rbp");
    return -0xe4248019c0cfe68e - 0x1c5de90d6b973c13 - 0x18a3e04ae2104bde - 0x75c950bf8637e5e2 - 0x7be4f2dbd603d280 + 0xdf238e3d7320c00 - 0x28e4f4adb274c731 - 0x62b009bc91cc4f3c + 0x50376d21375ae4c9 - 0x733abfd5679f309d - 0x327cfc881dc4ef9f - 0x2e6a7427419719ed + 0x46b8dbac4e362937 - 0x4edec5834a12822f + 0x5090d56bb136c629 - 0x202d55b70ec7cd11;
}

int64_t inst_41_flags_var_2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr rbp, r15");
    return 0;
}

int64_t inst_41_values_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r12, rax");
    return -0xdccd2715edf6da6e + 0x6c59493e0b84b004 - 0x4322fbee6954ddb9 - 0x3e60b1950a3d929d + 0x6cd4268d24aa71e2 - 0x6bddd52593321b9b + 0xa01c371b49e191f - 0x1a5cb978033a78c1 - 0x6930c69ed5004a5e + 0x71e603734ad6f74 - 0x2a46172cae087fe2 - 0x5d6d9ef3299111d9 - 0x36fed9b100da4a25 - 0x5bcb1705b72135f8 - 0x4273bbc4ecac1f7f + 0x62f25a0a062b9e81;
}

int64_t inst_41_flags_var_3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr rbp, r13");
    return 0;
}

int64_t inst_41_values_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr rbp, r8");
    return -0x9afb070101886eed - 0x50e9644b2777f705 - 0x3d7b8ed47184a52c + 0xf9d544184371ee7 + 0x3db77f5bba1ddefb + 0x5470ab094eae48e5 - 0x72713cec5729809f - 0x7f2cabd9d6187a69 - 0x7b6acb82ec383ca5 - 0x5f1fd0ba41a7a834 - 0x4db60e1c22a9bc99 + 0xdf7de254ad580ff - 0x7a00e757c4d2c44 - 0x3ccb46a2cfb51032 - 0x531b318ee6f03d65 + 0x68bf36772d8838a8;
}

int64_t inst_41_flags_var_4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r10, r12");
    return 0;
}

int64_t inst_41_values_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr rbx, r10");
    return -0x910e315783c7a4f6 + 0x3234cf41f70ffdeb + 0x381c7e01d0eea47c - 0x430250bf6d28df4d + 0x5a0f69e7bc92af2d - 0x42331d1368211fcd - 0x56de1e51e1f62ab5 - 0x6d2ba3c4ccf64f32 - 0x7cded88b526fe701 - 0x39f3afccec59e11e + 0x5bf67c212c0009c5 - 0x343ff11b9cad7c2d + 0x4871d604a30113ac - 0x330a4bfc72c3eb87 + 0x740bdfec3e9462b9 + 0x4dca0cb5bb2279f7;
}

int64_t inst_41_flags_var_5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r13, rbp");
    return 0;
}

int64_t inst_41_values_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r13, r14");
    return -0x75ea663cf7f1f37e - 0x61d240705fea65b3 + 0x7aa1333f28b7b74f + 0x2fb4e49abe619f02 - 0x313df27d4da9e802 - 0x126edeeb9ed6adb5 - 0x7b514d35b0065db - 0x6ce7dceb3e0a25ac - 0x194a7cedb56c2c49 - 0x76cd82205c1f258a - 0x53abb15ffd714864 + 0x27aa525ca723fdb5 - 0x24f5b4e9736c581a - 0x4d346356067d788b + 0x6e5044c939c324fb - 0x7f523166d51eebd0;
}

int64_t inst_41_flags_var_6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr rdi, rdi");
    return 0;
}

int64_t inst_41_values_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r13, r14");
    return -0x7d07e79b978deffb + 0x4dca563782e21719 + 0x5de4066e38568345 - 0x326e4d6a9c987d7f - 0x3abfd22cda79901a + 0x3dd63345f827eb75 + 0x1fbabf31f48cb09e - 0x20caca91b2041916 - 0x28d4154e5a0103c0 - 0x4ee6c7dd67c12b11 + 0x331357f0ae672910 - 0x2a51652effad9a8a + 0x298ee48707dc26c5 + 0x65718c3b49041ecf - 0x2f52538ba0fa1fcf + 0x3a9b346183b58183;
}

int64_t inst_41_flags_var_7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr rdx, r9");
    return 0;
}

int64_t inst_41_values_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr rdx, rbp");
    return -0xe14819e9cf5b1bb4 + 0x7c02ea293e469c73 - 0x443057ae620b3970 - 0x7656498d5b8e07dd - 0x6536ec3d3fec1917 + 0xad5d0e5b62e4fdf - 0x3baa329804672798 + 0x3f5157cc3e0082c7 - 0xf65500c8e8e5440 + 0x56a62b55320d2d10 - 0x207457e31cbd4116 - 0x50ab8420bec9d23e + 0x72b81db6d20887cb - 0x6924ab23a5bc0a84 - 0x1dbef1efb3979cd1 + 0x3e39fdaa029780c8;
}

int64_t inst_41_flags_var_8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r15, rbp");
    return 0;
}

int64_t inst_41_values_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr rdi, rdx");
    return -0x1c4bbfb456af9f1a - 0x791ed2ea0b9a9b82 - 0x6f2c5ab9040b928b - 0x7d08f05175da164c - 0x5bf5923705cd9761 + 0x50ba4a7d2af335e4 - 0x578d031c5d738ee2 - 0x6fb73890c9096e03 + 0x4a862a9f421fce6b - 0x17765c8c7331c25c - 0x6199af5e7276fb86 - 0x5bc4a07c29eb5fc5 - 0x47dd7a49fbdcfb91 + 0x4a04de96fef3155e + 0x1bfcfe426e08a830 + 0x68bc7d2bdc694032;
}

int64_t inst_41_flags_var_9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rep bsr r8, r10");
    return 0;
}

int64_t __gmon_start__ = 0;

void fun_401003() {
    int64_t rax1;

    __asm__("cli ");
    rax1 = __gmon_start__;
    if (rax1) {
        rax1();
    }
    return;
}

int64_t __libc_start_main = 0;

int64_t main(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9);

void fun_402aa3() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    __asm__("cli ");
    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, 0x4384a0, 0x438510, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void fun_402ad3() {
    __asm__("cli ");
    return;
}

signed char __bss_start = 0;

int64_t fun_402b53() {
    int1_t zf1;
    int64_t rax2;
    int64_t rax3;

    __asm__("cli ");
    zf1 = __bss_start == 0;
    if (!zf1) {
        return rax2;
    } else {
        rax3 = deregister_tm_clones();
        __bss_start = 1;
        return rax3;
    }
}

int64_t fun_402b83() {
    __asm__("cli ");
    if (1 || 1) {
        return 0;
    } else {
        goto 0;
    }
}

void fun_406974(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("repne out dx, al");
    goto a20;
}

void fun_406a75() {
    unsigned char tmp8_1;
    signed char* rax2;
    signed char al3;
    int1_t cf4;
    unsigned char* rax5;
    unsigned char* rax6;
    signed char* rax7;
    int64_t v8;

    __asm__("enter 0xbd, 0x0");
    tmp8_1 = reinterpret_cast<unsigned char>(*rax2 + al3);
    cf4 = tmp8_1 < *rax5;
    *rax6 = tmp8_1;
    if (cf4) {
    }
    if (__intrinsic()) {
    }
    if (*rax7 < 0) {
    }
    goto v8;
}

void fun_406b8d(int64_t rdi) {
    int64_t rcx2;
    int64_t v3;

    if (rcx2 - 1) {
        goto v3;
    } else {
        return;
    }
}

void fun_406c8f() {
    return;
}

void fun_406da7() {
    return;
}

void fun_406ea9() {
    return;
}

void fun_406fc1() {
    return;
}

void fun_4070c3() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    unsigned char tmp8_4;
    signed char* rax5;
    signed char al6;
    int1_t cf7;
    unsigned char* rax8;
    unsigned char* rax9;
    signed char* rax10;
    int64_t v11;

    __asm__("out 0xbd, eax");
    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    tmp8_4 = reinterpret_cast<unsigned char>(*rax5 + al6);
    cf7 = tmp8_4 < *rax8;
    *rax9 = tmp8_4;
    if (cf7) {
    }
    if (__intrinsic()) {
    }
    if (*rax10 < 0) {
    }
    goto v11;
}

void fun_4071db(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (!(rcx3 - 1)) {
        __asm__("repne fisttp dword [rax+0x1]");
        __asm__("fmul dword [rax+0x1]");
        __asm__("enter 0x148, 0xd0");
    }
    goto v4;
}

void fun_4072dd() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int64_t v5;

    if (!(rcx1 - 1)) {
        __asm__("repne fstp tword [rbp+0x0]");
        if (cf2) {
        }
        if (of3) {
        }
        if (sf4) {
        }
    }
    goto v5;
}

void fun_4073f5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (!(rcx - 1)) {
        __asm__("repne out dx, al");
    }
    goto a20;
}

void fun_4074f8() {
    int1_t of1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    if (of1) 
        goto 0x4074ec;
    if (1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_407610(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_407711() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x40778b;
}

void fun_407715() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_407829() {
    return;
}

void fun_40792b() {
    unsigned char dl1;
    unsigned char sil2;
    signed char dl3;
    signed char sil4;
    int64_t v5;

    __asm__("int1 ");
    if (dl1 < sil2) {
    }
    if (__intrinsic()) {
    }
    if (dl3 < sil4) {
    }
    goto v5;
}

void fun_407a44(int64_t rdi, int64_t rsi, int16_t dx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    int64_t rdx3;

    *reinterpret_cast<int16_t*>(&rdx3) = dx;
    __asm__("int1 ");
    goto a20;
}

void fun_407b45() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x407baf;
}

void fun_407b49() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_407c5d() {
    __asm__("hlt ");
}

void fun_407d5f() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int64_t v5;

    if (!(rcx1 - 1)) {
        __asm__("repne retf ");
        if (cf2) {
        }
        if (of3) {
        }
        if (sf4) {
        }
    }
    goto v5;
}

void fun_407e77() {
    return;
}

void fun_407f79() {
    int1_t of1;
    int64_t v2;

    if (__intrinsic()) {
    }
    if (of1) {
    }
    if (__undefined()) {
    }
    goto v2;
}

struct s1 {
    signed char[1] pad1;
    signed char 0x1;
};

struct s2 {
    signed char[1] pad1;
    signed char 0x1;
};

void fun_408091(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    struct s1* rax4;
    struct s2* rax5;
    int64_t v6;

    if (rcx3 - 1) 
        goto 0x40801b;
    rax4->0x1 = reinterpret_cast<signed char>(rax5->0x1 - 1);
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v6;
}

void fun_408194() {
}

void fun_408197() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_4082ac(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    int1_t zf21;

    if (reinterpret_cast<uint1_t>(!!(rcx - 1)) & reinterpret_cast<uint1_t>(!zf21)) 
        goto 0x4082a0;
    __asm__("in eax, 0x48");
    goto a20;
}

void fun_4083ad() {
    return;
}

void fun_4084c5() {
    return;
}

void fun_4085c7() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x408559;
}

void fun_4085cb() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_4086df(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("lock repne in eax, 0x48");
    goto a20;
}

void fun_4087e1() {
    int64_t rcx1;
    int64_t v2;

    if (rcx1 - 1) 
        goto 0x408763;
    if (__undefined()) {
    }
    if (__undefined()) {
    }
    if (__undefined()) {
    }
    goto v2;
}

void fun_4088f9() {
    return;
}

void fun_4089fb() {
    return;
}

void fun_408b13() {
    int64_t rcx1;
    int1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & reinterpret_cast<uint1_t>(!zf2)) 
        goto 0x408b08;
}

void fun_408b17(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_408c15() {
    return;
}

void fun_408d2d(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

void fun_408e2f() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int64_t v5;

    if (rcx1 - 1) 
        goto 0x408df1;
    if (!cf2) {
    }
    if (of3) {
    }
    if (sf4) {
    }
    goto v5;
}

void fun_408f47() {
    return;
}

void fun_408f4b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_409049() {
    return;
}

void fun_409161(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx - 1) 
        goto 0x40911b;
    goto a20;
}

void fun_409263() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x40920d;
}

void fun_409267() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_40937b() {
    return;
}

void fun_40947d() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int64_t v5;

    if (!(rcx1 - 1)) {
        __asm__("rep fistp qword [rbp+0x0]");
        if (cf2) {
        }
    }
    if (of3) {
    }
    if (sf4) {
    }
    goto v5;
}

void fun_409595() {
    return;
}

void fun_409697() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int64_t v5;

    if (rcx1 - 1) 
        goto 0x409701;
    __asm__("rep fidivr word [rbp+0x0]");
    if (cf2) {
    }
    if (of3) {
    }
    if (sf4) {
    }
    goto v5;
}

void fun_4097af() {
    return;
}

void fun_4098b1() {
    return;
}

void fun_4099c9(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (!(rcx3 - 1)) {
        __asm__("rep fimul dword [rax+0x1]");
        __asm__("fmul dword [rax+0x1]");
        __asm__("enter 0x148, 0xd0");
    }
    goto v4;
}

void fun_409acb() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int64_t v5;

    if (!(rcx1 - 1)) {
        __asm__("rep fidivr dword [rbp+0x0]");
        if (cf2) {
        }
        if (of3) {
        }
    }
    if (sf4) {
    }
    goto v5;
}

void fun_409be3(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (rcx3 - 1) 
        goto 0x409c45;
    __asm__("rep fimul word [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v4;
}

void fun_409ce5() {
    return;
}

void fun_409dfd(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    __asm__("rep fisttp qword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v4;
}

void fun_409eff() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int64_t v5;

    if (!(rcx1 - 1)) {
        __asm__("rep fidivr word [rbp+0x0]");
        if (cf2) {
        }
        if (of3) {
        }
        if (sf4) {
        }
    }
    goto v5;
}

void fun_40a017(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (rcx3 - 1) 
        goto inst_5_flags_var_6;
    __asm__("rep fisttp dword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v4;
}

void fun_40a119() {
    int64_t rcx1;
    int16_t* rbp2;
    int16_t fpu_status_word3;
    int1_t cf4;
    int1_t of5;
    int1_t sf6;
    int64_t v7;

    if (!(rcx1 - 1)) {
        *rbp2 = fpu_status_word3;
        if (cf4) {
        }
    }
    if (of5) {
    }
    if (sf6) {
    }
    goto v7;
}

void fun_40a231(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (!(rcx3 - 1)) {
        __asm__("rep fisttp word [rax+0x1]");
        __asm__("fmul dword [rax+0x1]");
        __asm__("enter 0x148, 0xd0");
    }
    goto v4;
}

void fun_40a333() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int64_t v5;

    if (!(rcx1 - 1)) {
        __asm__("rep fidivr word [rbp+0x0]");
        if (cf2) {
        }
        if (of3) {
        }
        if (sf4) {
        }
    }
    goto v5;
}

void fun_40a44b(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (!(rcx3 - 1)) {
        __asm__("rep fisttp dword [rax+0x1]");
        __asm__("fmul dword [rax+0x1]");
        __asm__("enter 0x148, 0xd0");
    }
    goto v4;
}

void fun_40a54d() {
    int64_t rcx1;
    int16_t* rbp2;
    int16_t fpu_status_word3;
    int1_t cf4;
    int1_t of5;
    int1_t sf6;
    int64_t v7;

    if (!(rcx1 - 1)) {
        *rbp2 = fpu_status_word3;
        if (cf4) {
        }
    }
    if (of5) {
    }
    if (sf6) {
    }
    goto v7;
}

void fun_40a665() {
    return;
}

void fun_40a767() {
    return;
}

void fun_40a87f(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (rcx3 - 1) 
        goto 0x40a811;
    __asm__("rep fisttp word [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v4;
}

void fun_40a981() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int64_t v5;

    if (rcx1 - 1) 
        goto 0x40a923;
    __asm__("rep fistp qword [rbp+0x0]");
    if (cf2) {
    }
    if (of3) {
    }
    if (sf4) {
    }
    goto v5;
}

void fun_40aa99(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (rcx3 - 1) 
        goto 0x40aa8b;
    __asm__("rep fimul dword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v4;
}

void fun_40ab9b() {
    return;
}

void fun_40acb3() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x40ac65;
}

void fun_40acb7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_40adb5() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int64_t v5;

    if (rcx1 - 1) 
        goto 0x40ad7f;
    __asm__("rep fidivr dword [rbp+0x0]");
    if (cf2) {
    }
    if (of3) {
    }
    if (sf4) {
    }
    goto v5;
}

void fun_40aecd(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (rcx3 - 1) 
        goto 0x40ae6f;
    __asm__("rep fimul dword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v4;
}

void fun_40afcf() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int64_t v5;

    if (rcx1 - 1) 
        goto 0x40af59;
    __asm__("rep fidivr dword [rbp+0x0]");
    if (cf2) {
    }
    if (of3) {
    }
    if (sf4) {
    }
    goto v5;
}

void fun_40b0e7() {
    return;
}

void fun_40b1e9() {
    return;
}

void fun_40b301() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x40b2bb;
}

void fun_40b305(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_40b403() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int64_t v5;

    if (rcx1 - 1) 
        goto 0x40b3fd;
    __asm__("rep fdivr dword [rbp+0x0]");
    if (cf2) {
    }
    if (of3) {
    }
    if (sf4) {
    }
    goto v5;
}

void fun_40b51b() {
    return;
}

void fun_40b61d() {
    return;
}

void fun_40b735() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x40b6ff;
}

void fun_40b739(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_40b837() {
    return;
}

void fun_40b94f() {
    return;
}

void fun_40ba51() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int64_t v5;

    if (rcx1 - 1) 
        goto 0x40ba03;
    __asm__("rep fstp tword [rbp+0x0]");
    if (cf2) {
    }
    if (of3) {
    }
    if (sf4) {
    }
    goto v5;
}

void fun_40bb69(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (rcx3 - 1) 
        goto 0x40bb4b;
    __asm__("rep fisttp dword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v4;
}

void fun_40bc6b() {
    return;
}

void fun_40bd83() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x40bdfd;
}

void fun_40bd87(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_40be85() {
    return;
}

void fun_40bf9d() {
    return;
}

void fun_40bfa1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_40c09f() {
    return;
}

void fun_40c0a3() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_40c1b7() {
    return;
}

void fun_40c1bb(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_40c2b9() {
    return;
}

void fun_40c2bd() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_40c3d1() {
    return;
}

void fun_40c3d5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_40c4d3() {
    int64_t rcx1;
    int64_t rcx2;
    int32_t* rbp3;
    int32_t* rbp4;
    int1_t of5;
    int64_t v6;

    rcx1 = rcx2 - 1;
    if (!rcx1) {
        *rbp3 = *rbp4 >> *reinterpret_cast<signed char*>(&rcx1);
        if (__intrinsic()) {
        }
        if (of5) {
        }
        if (__undefined()) {
        }
    }
    goto v6;
}

void fun_40c5eb() {
    return;
}

void fun_40c6ed() {
    return;
}

void fun_40c805(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (!(rcx3 - 1)) {
        __asm__("rep ror dword [rax+0x1], 1");
        __asm__("fmul dword [rax+0x1]");
        __asm__("enter 0x148, 0xd0");
    }
    goto v4;
}

void fun_40c907() {
    return;
}

void fun_40ca1f(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (!(rcx3 - 1)) {
        __asm__("rep ror dword [rax+0x1], cl");
        __asm__("fmul dword [rax+0x1]");
        __asm__("enter 0x148, 0xd0");
    }
    goto v4;
}

void fun_40cb21() {
    return;
}

void fun_40cc39() {
    return;
}

void fun_40cc3d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_40cd3b() {
    int64_t rcx1;
    int32_t* rbp2;
    int32_t* rbp3;
    int1_t of4;
    int64_t v5;

    if (rcx1 - 1) 
        goto 0x40cdad;
    *rbp2 = *rbp3 >> 1;
    if (__intrinsic()) {
    }
    if (of4) {
    }
    if (__undefined()) {
    }
    goto v5;
}

void fun_40ce53() {
    return;
}

void fun_40cf55() {
    int64_t rcx1;
    int64_t v2;

    if (rcx1 - 1) {
        goto v2;
    }
}

void fun_40cf59() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;

    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
}

void fun_40d06d() {
    return;
}

void fun_40d16f() {
    int64_t rcx1;
    int64_t rcx2;
    int32_t* rbp3;
    int32_t* rbp4;
    int1_t of5;
    int64_t v6;

    rcx1 = rcx2 - 1;
    if (!rcx1) {
        *rbp3 = *rbp4 >> *reinterpret_cast<signed char*>(&rcx1);
        if (__intrinsic()) {
        }
        if (of5) {
        }
        if (__undefined()) {
        }
    }
    goto v6;
}

void fun_40d287() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x40d221;
}

void fun_40d28b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_40d389() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x40d30b;
}

void fun_40d38d() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_40d4a1() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x40d46b;
}

void fun_40d4a5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_40d5a3() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int64_t v5;

    if (rcx1 - 1) 
        goto 0x40d575;
    __asm__("rep xlatb ");
    if (cf2) {
    }
    if (of3) {
    }
    if (sf4) {
    }
    goto v5;
}

void fun_40d6bb(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (rcx3 - 1) 
        goto 0x40d69d;
    __asm__("rep ror byte [rax+0x1], 1");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v4;
}

void fun_40d7bd() {
    int64_t rcx1;
    int64_t rcx2;
    int32_t* rbp3;
    int32_t* rbp4;
    int1_t of5;
    int64_t v6;

    rcx1 = rcx2 - 1;
    if (rcx1) 
        goto 0x40d75f;
    *rbp3 = *rbp4 >> *reinterpret_cast<signed char*>(&rcx1);
    if (__intrinsic()) {
    }
    if (of5) {
    }
    if (__undefined()) {
    }
    goto v6;
}

void fun_40d8d5() {
    return;
}

void fun_40d8d9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_40d9d7() {
    return;
}

void fun_40daef() {
    return;
}

void fun_40dbf1() {
    return;
}

void fun_40dbf5() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_40dd09() {
    return;
}

void fun_40de0b() {
    return;
}

void fun_40de0f() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_40df23() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x40df15;
}

void fun_40df27(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_40e025() {
    return;
}

void fun_40e13d() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x40e127;
}

void fun_40e141(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_40e23f() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x40e1c9;
}

void fun_40e243() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_40e357(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (rcx3 - 1) 
        goto 0x40e309;
    __asm__("rep ror dword [rax+0x1], 1");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v4;
}

void fun_40e459() {
    return;
}

void fun_40e45d() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_40e571() {
    return;
}

void fun_40e673() {
    return;
}

void fun_40e78b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx - 1) 
        goto 0x40e7ed;
    __asm__("rep retf ");
    goto a20;
}

void fun_40e88d() {
    return;
}

void fun_40e891() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_40e9a5() {
    return;
}

void fun_40eaa7() {
    int64_t rcx1;
    unsigned char tmp8_2;
    signed char* rax3;
    signed char al4;
    int1_t cf5;
    unsigned char* rax6;
    unsigned char* rax7;
    int1_t sf8;
    signed char* rax9;
    int64_t v10;

    if (!(rcx1 - 1)) {
        __asm__("rep enter 0xbd, 0x0");
        tmp8_2 = reinterpret_cast<unsigned char>(*rax3 + al4);
        cf5 = tmp8_2 < *rax6;
        *rax7 = tmp8_2;
        sf8 = *rax9 < 0;
        if (cf5) {
        }
        if (__intrinsic()) {
        }
    }
    if (sf8) {
    }
    goto v10;
}

void fun_40ebbf(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (!(rcx - 1)) {
        __asm__("rep int 0x48");
    }
    goto a20;
}

void fun_40ecc1() {
    int64_t rcx1;
    int64_t v2;

    if (rcx1 - 1) {
        goto v2;
    }
}

void fun_40ecc5() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;

    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
}

void fun_40edd9() {
    return;
}

void fun_40eedb() {
    int64_t rcx1;
    signed char* rax2;
    signed char* rax3;
    signed char al4;
    unsigned char tmp8_5;
    signed char* rax6;
    signed char al7;
    int1_t cf8;
    unsigned char* rax9;
    unsigned char* rax10;
    signed char* rax11;
    int64_t v12;

    if (!(rcx1 - 1)) {
        __asm__("rep int 0xbd");
        *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
        tmp8_5 = reinterpret_cast<unsigned char>(*rax6 + al7);
        cf8 = tmp8_5 < *rax9;
        *rax10 = tmp8_5;
        if (cf8) {
        }
        if (__intrinsic()) {
        }
        if (*rax11 < 0) {
        }
    }
    goto v12;
}

void fun_40eff3(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (!(rcx3 - 1)) {
        __asm__("rep retf 0x148");
        __asm__("fmul dword [rax+0x1]");
        __asm__("enter 0x148, 0xd0");
    }
    goto v4;
}

void fun_40f0f5() {
    return;
}

void fun_40f20d() {
    return;
}

struct s3 {
    signed char[1] pad1;
    signed char 0x1;
};

struct s4 {
    signed char[1] pad1;
    unsigned char 0x1;
};

struct s5 {
    signed char[1] pad1;
    unsigned char 0x1;
};

struct s6 {
    signed char[1] pad1;
    signed char 0x1;
};

void fun_40f30f() {
    int64_t rcx1;
    signed char* rax2;
    signed char* rax3;
    signed char al4;
    unsigned char tmp8_5;
    struct s3* rax6;
    signed char bh7;
    int1_t cf8;
    struct s4* rax9;
    struct s5* rax10;
    struct s6* rax11;
    int64_t v12;

    if (rcx1 - 1) 
        goto 0x40f379;
    __asm__("rep retf 0xbd");
    *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
    tmp8_5 = reinterpret_cast<unsigned char>(rax6->0x1 + bh7);
    cf8 = tmp8_5 < rax9->0x1;
    rax10->0x1 = tmp8_5;
    if (cf8) {
    }
    if (__intrinsic()) {
    }
    if (rax11->0x1 < 0) {
    }
    goto v12;
}

void fun_40f427() {
    return;
}

void fun_40f529() {
    int64_t rcx1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    if (rcx1 - 1) {
        if (of2) {
        }
        if (sf3) {
        }
        goto v4;
    }
}

void fun_40f52d() {
    int1_t cf1;

    if (cf1) {
    }
}

void fun_40f641() {
    return;
}

void fun_40f743() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int64_t v5;

    if (!(rcx1 - 1)) {
        __asm__("rep iretd ");
        if (cf2) {
        }
        if (of3) {
        }
    }
    if (sf4) {
    }
    goto v5;
}

void fun_40f85b() {
    return;
}

void fun_40f95d() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int64_t v5;

    if (!(rcx1 - 1)) {
        __asm__("rep retf ");
        if (cf2) {
        }
        if (of3) {
        }
        if (sf4) {
        }
    }
    goto v5;
}

void fun_40fa75() {
    return;
}

void fun_40fb77() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int64_t v5;

    if (!(rcx1 - 1)) {
        __asm__("rep iretd ");
        if (cf2) {
        }
        if (of3) {
        }
        if (sf4) {
        }
    }
    goto v5;
}

void fun_40fc8f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    void* rbp7;

    if (rcx - 1) 
        goto 0x40fc19;
    goto *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp7) + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8);
}

void fun_40fd91() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int64_t v5;

    if (rcx1 - 1) 
        goto 0x40fd43;
    __asm__("rep retf ");
    if (cf2) {
    }
    if (of3) {
    }
    if (sf4) {
    }
    goto v5;
}

void fun_40fea9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx - 1) 
        goto 0x40fe2b;
    __asm__("rep iretd ");
    goto a20;
}

void fun_40ffab() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int64_t v5;

    if (rcx1 - 1) 
        goto 0x40ff55;
    __asm__("rep iretd ");
    if (cf2) {
    }
    if (of3) {
    }
    if (sf4) {
    }
    goto v5;
}

void fun_4100c3() {
    return;
}

void fun_4101c5() {
    int64_t rcx1;
    unsigned char tmp8_2;
    signed char* rax3;
    signed char al4;
    int1_t cf5;
    unsigned char* rax6;
    unsigned char* rax7;
    signed char* rax8;
    int64_t v9;

    if (rcx1 - 1) 
        goto 0x41016f;
    __asm__("rep enter 0xbd, 0x0");
    tmp8_2 = reinterpret_cast<unsigned char>(*rax3 + al4);
    cf5 = tmp8_2 < *rax6;
    *rax7 = tmp8_2;
    if (cf5) {
    }
    if (__intrinsic()) {
    }
    if (*rax8 < 0) {
    }
    goto v9;
}

void fun_4102dd() {
    return;
}

void fun_4103df() {
    return;
}

void fun_4103e3() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_4104f7() {
    return;
}

void fun_4104fb(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_4105f9() {
    return;
}

void fun_410711() {
    return;
}

void fun_410813() {
    return;
}

void fun_410817() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_41092b() {
    return;
}

void fun_410a2d() {
    return;
}

void fun_410b45() {
    return;
}

void fun_410c47() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    void* rbp5;

    if (rcx1 - 1) 
        goto 0x410bd9;
    if (cf2) {
    }
    if (of3) {
    }
    if (sf4) {
    }
    goto *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp5) + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8);
}

void fun_410d5f() {
    return;
}

void fun_410d63(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_410e61() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int64_t v5;

    if (rcx1 - 1) 
        goto 0x410e2b;
    __asm__("rep retf ");
    if (cf2) {
    }
    if (of3) {
    }
    if (sf4) {
    }
    goto v5;
}

void fun_410f79(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (rcx3 - 1) 
        goto 0x410f73;
    __asm__("rep retf 0x148");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v4;
}

void fun_41107b() {
    return;
}

void fun_411193() {
    return;
}

void fun_411197(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_411295() {
    int64_t v1;

    if (__undefined()) {
    }
    if (__undefined()) {
    }
    goto v1;
}

void fun_4113a7(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

struct s7 {
    signed char[1] pad1;
    signed char 0x1;
};

struct s8 {
    signed char[1] pad1;
    unsigned char 0x1;
};

struct s9 {
    signed char[1] pad1;
    unsigned char 0x1;
};

void fun_4114a8() {
    unsigned char tmp8_1;
    struct s7* rax2;
    signed char bh3;
    int1_t cf4;
    struct s8* rax5;
    struct s9* rax6;
    int64_t v7;

    tmp8_1 = reinterpret_cast<unsigned char>(rax2->0x1 + bh3);
    cf4 = tmp8_1 < rax5->0x1;
    rax6->0x1 = tmp8_1;
    if (cf4) {
    }
    if (__intrinsic()) {
    }
    goto v7;
}

void fun_4115b8(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

struct s10 {
    signed char[1] pad1;
    signed char 0x1;
};

struct s11 {
    signed char[1] pad1;
    unsigned char 0x1;
};

struct s12 {
    signed char[1] pad1;
    unsigned char 0x1;
};

void fun_4116ba() {
    unsigned char tmp8_1;
    struct s10* rax2;
    signed char bh3;
    int1_t cf4;
    struct s11* rax5;
    struct s12* rax6;
    int64_t v7;

    tmp8_1 = reinterpret_cast<unsigned char>(rax2->0x1 + bh3);
    cf4 = tmp8_1 < rax5->0x1;
    rax6->0x1 = tmp8_1;
    if (cf4) {
    }
    if (__intrinsic()) {
    }
    goto v7;
}

void fun_4117c9(signed char dil, int64_t rsi) {
    int64_t v3;

    __asm__("fisttp dword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_4118cb() {
    return;
}

void fun_4119dc(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("retf 0x148");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_411add(signed char dil, signed char sil) {
}

void fun_411ae1() {
    int1_t cf1;
    int1_t of2;
    int64_t v3;

    if (cf1) {
    }
    if (of2) {
    }
    goto v3;
}

void fun_411bed() {
    return;
}

void fun_411cef() {
    return;
}

void fun_411dff() {
    return;
}

void fun_411e03(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_411f02() {
    int64_t rcx1;
    signed char* rax2;
    signed char* rax3;
    signed char al4;
    unsigned char tmp8_5;
    signed char* rax6;
    signed char al7;
    int1_t cf8;
    unsigned char* rax9;
    unsigned char* rax10;
    int64_t v11;

    if (rcx1) 
        goto 0x411ec3;
    *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
    tmp8_5 = reinterpret_cast<unsigned char>(*rax6 + al7);
    cf8 = tmp8_5 < *rax9;
    *rax10 = tmp8_5;
    if (cf8) {
    }
    if (__intrinsic()) {
    }
    goto v11;
}

void fun_412012(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fimul dword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

struct s13 {
    signed char[1] pad1;
    signed char 0x1;
};

struct s14 {
    signed char[1] pad1;
    unsigned char 0x1;
};

struct s15 {
    signed char[1] pad1;
    unsigned char 0x1;
};

void fun_412115() {
    unsigned char tmp8_1;
    struct s13* rax2;
    signed char bh3;
    int1_t cf4;
    struct s14* rax5;
    struct s15* rax6;
    int64_t v7;

    tmp8_1 = reinterpret_cast<unsigned char>(rax2->0x1 + bh3);
    cf4 = tmp8_1 < rax5->0x1;
    rax6->0x1 = tmp8_1;
    if (cf4) {
    }
    if (__intrinsic()) {
    }
    goto v7;
}

void fun_412223(int64_t rdi, int64_t rsi) {
    int1_t sf3;
    int64_t v4;

    if (sf3) 
        goto 0x41221d;
    __asm__("ror byte [rax+0x1], cl");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v4;
}

void fun_412325() {
    int1_t of1;
    int1_t cf2;
    int1_t of3;
    int64_t v4;

    if (of1) 
        goto 0x41231f;
    __asm__("retf ");
    if (cf2) {
    }
    if (of3) {
    }
    goto v4;
}

void fun_412436(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    int1_t sf21;

    if (sf21) 
        goto 0x41242f;
    __asm__("in eax, dx");
    goto a20;
}

void fun_412537() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int64_t v4;

    if (!(rcx1 - 1)) {
        if (cf2) {
        }
        if (of3) {
        }
    }
    goto v4;
}

void fun_412648(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

signed char gf800000000bddef7;

void fun_412749() {
    unsigned char* rax1;
    unsigned char tmp8_2;
    int1_t cf3;
    int64_t v4;

    *reinterpret_cast<signed char*>(&rax1) = gf800000000bddef7;
    *rax1 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<int32_t*>(&rax1));
    tmp8_2 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
    cf3 = tmp8_2 < *rax1;
    *rax1 = tmp8_2;
    if (cf3) {
    }
    if (__intrinsic()) {
    }
    goto v4;
}

void fun_412859() {
    return;
}

void fun_41295b(signed char dil) {
    int64_t v2;

    if (0) {
    }
    if (0) {
    }
    goto v2;
}

void fun_412a6b(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx - 1) 
        goto 0x412a55;
    goto a20;
}

struct s16 {
    signed char[1] pad1;
    signed char 0x1;
};

struct s17 {
    signed char[1] pad1;
    unsigned char 0x1;
};

struct s18 {
    signed char[1] pad1;
    unsigned char 0x1;
};

void fun_412b6d() {
    int64_t rcx1;
    unsigned char tmp8_2;
    struct s16* rax3;
    signed char bh4;
    int1_t cf5;
    struct s17* rax6;
    struct s18* rax7;
    int64_t v8;

    if (rcx1 - 1) 
        goto 0x412b27;
    tmp8_2 = reinterpret_cast<unsigned char>(rax3->0x1 + bh4);
    cf5 = tmp8_2 < rax6->0x1;
    rax7->0x1 = tmp8_2;
    if (cf5) {
    }
    if (__intrinsic()) {
    }
    goto v8;
}

void fun_412c7d() {
    return;
}

void fun_412d7f() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    unsigned char tmp8_4;
    signed char* rax5;
    signed char al6;
    int1_t cf7;
    unsigned char* rax8;
    unsigned char* rax9;
    int64_t v10;

    __asm__("enter 0xcef7, 0xbd");
    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    tmp8_4 = reinterpret_cast<unsigned char>(*rax5 + al6);
    cf7 = tmp8_4 < *rax8;
    *rax9 = tmp8_4;
    if (cf7) {
    }
    if (__intrinsic()) {
    }
    goto v10;
}

void fun_412e8f() {
    return;
}

void fun_412f92() {
    int1_t cf1;
    int1_t of2;
    int64_t v3;

    if (cf1) {
    }
    if (of2) {
    }
    goto v3;
}

void fun_4130a2(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_4131a3() {
    int1_t cf1;
    int1_t of2;
    int64_t v3;

    if (cf1) {
    }
    if (of2) {
    }
    goto v3;
}

void fun_4132b3(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (rcx3 - 1) 
        goto 0x413265;
    goto v4;
}

void fun_4133b5(int32_t edi) {
    int64_t rcx2;
    int64_t v3;

    if (rcx2 - 1) 
        goto 0x413337;
    if (edi) {
    }
    if (__intrinsic()) {
    }
    goto v3;
}

void fun_4134c5(int64_t rdi, int64_t rsi, int32_t edx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_4135c8() {
    int1_t of1;
    int64_t v2;

    if (__intrinsic()) {
    }
    if (of1) {
    }
    goto v2;
}

void fun_4136d7(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_4137d9() {
    return;
}

void fun_4138ea(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("enter 0xe2f7, 0x48");
    goto a20;
}

void fun_4139eb() {
    return;
}

void fun_413afc(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fmul dword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_413bfe() {
    int1_t sf1;

    if (sf1) 
        goto 0x413bf5;
    goto 0x413cc2;
}

void fun_413d15(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    int1_t of21;

    if (of21) 
        goto 0x413d0d;
    goto a20;
}

void fun_413e18() {
    int1_t sf1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int64_t v5;

    if (sf1) 
        goto 0x413e0f;
    if (cf2) {
    }
    if (of3) {
    }
    if (sf4) {
    }
    goto v5;
}

void fun_413f2f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx - 1) 
        goto 0x413f91;
    goto a20;
}

void fun_414031() {
    uint1_t cf1;
    unsigned char bpl2;
    signed char sil3;
    uint1_t cf4;
    signed char bpl5;
    signed char sil6;
    int64_t v7;

    cf1 = reinterpret_cast<uint1_t>(bpl2 < reinterpret_cast<unsigned char>(sil3 + cf4));
    __asm__("fnstcw word [rbp+0x0]");
    if (cf1) {
    }
    if (__intrinsic()) {
    }
    if (reinterpret_cast<signed char>(bpl5 - reinterpret_cast<unsigned char>(sil6 + cf1)) < reinterpret_cast<signed char>(static_cast<uint32_t>(cf1))) {
    }
    goto v7;
}

void fun_414149() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x4141bb;
}

void fun_41414d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_41424b() {
    int1_t sf1;
    signed char* rbp2;
    signed char* rbp3;
    signed char cl4;
    int1_t of5;
    int64_t v6;

    if (sf1) 
        goto 0x414243;
    *rbp2 = reinterpret_cast<signed char>(*rbp3 >> cl4);
    if (__intrinsic()) {
    }
    if (of5) {
    }
    if (__undefined()) {
    }
    goto v6;
}

void fun_414364(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rcx4;
    unsigned char ch5;
    int64_t v6;

    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx4) + 1) = reinterpret_cast<unsigned char>(ch5 ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx) + 1));
    if (!(rcx4 - 1)) {
    }
    goto v6;
}

struct s19 {
    signed char[1] pad1;
    signed char 0x1;
};

struct s20 {
    signed char[1] pad1;
    unsigned char 0x1;
};

struct s21 {
    signed char[1] pad1;
    unsigned char 0x1;
};

struct s22 {
    signed char[1] pad1;
    signed char 0x1;
};

void fun_414466() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    unsigned char tmp8_4;
    struct s19* rax5;
    signed char bh6;
    int1_t cf7;
    struct s20* rax8;
    struct s21* rax9;
    struct s22* rax10;
    int64_t v11;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    tmp8_4 = reinterpret_cast<unsigned char>(rax5->0x1 + bh6);
    cf7 = tmp8_4 < rax8->0x1;
    rax9->0x1 = tmp8_4;
    if (cf7) {
    }
    if (__intrinsic()) {
    }
    if (rax10->0x1 < 0) {
    }
    goto v11;
}

void fun_41457d() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x4145ef;
}

void fun_414581(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_41467f() {
    return;
}

void fun_414798(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    __asm__("cli ");
    goto v4;
}

void fun_414899() {
    return;
}

void fun_4149b1(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (rcx3 - 1) 
        goto inst_13_flags_var_7;
    __asm__("fimul word [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v4;
}

struct s23 {
    signed char[1] pad1;
    signed char 0x1;
};

struct s24 {
    signed char[1] pad1;
    unsigned char 0x1;
};

struct s25 {
    signed char[1] pad1;
    unsigned char 0x1;
};

struct s26 {
    signed char[1] pad1;
    signed char 0x1;
};

void fun_414ab3() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    unsigned char tmp8_4;
    struct s23* rax5;
    signed char bh6;
    int1_t cf7;
    struct s24* rax8;
    struct s25* rax9;
    struct s26* rax10;
    int64_t v11;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    tmp8_4 = reinterpret_cast<unsigned char>(rax5->0x1 + bh6);
    cf7 = tmp8_4 < rax8->0x1;
    rax9->0x1 = tmp8_4;
    if (cf7) {
    }
    if (__intrinsic()) {
    }
    if (rax10->0x1 < 0) {
    }
    goto v11;
}

void fun_414bcc(int64_t rdi, int64_t rsi) {
    int1_t sf3;
    int64_t v4;

    if (sf3) 
        goto 0x414bc3;
    __asm__("fisttp word [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v4;
}

void fun_414ccd() {
    int64_t rcx1;
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int64_t v5;

    if (!(rcx1 - 1)) {
        __asm__("fistp qword [rbp+0x0]");
        if (!cf2) {
        }
    }
    if (of3) {
    }
    if (sf4) {
    }
    goto v5;
}

void fun_414de5() {
    return;
}

void fun_414ee8() {
}

void fun_414eeb() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_414fff() {
    return;
}

void fun_415101() {
    int64_t rcx1;
    int32_t* rbp2;
    int32_t* rbp3;
    int32_t* rax4;
    int32_t* rax5;
    int32_t eax6;
    unsigned char tmp8_7;
    signed char* rax8;
    signed char al9;
    int1_t cf10;
    unsigned char* rax11;
    unsigned char* rax12;
    signed char* rax13;
    int64_t v14;

    if (rcx1 - 1) 
        goto 0x4150e3;
    *rbp2 = *rbp3 >> -72;
    *rax4 = *rax5 + eax6;
    tmp8_7 = reinterpret_cast<unsigned char>(*rax8 + al9);
    cf10 = tmp8_7 < *rax11;
    *rax12 = tmp8_7;
    if (cf10) {
    }
    if (__intrinsic()) {
    }
    if (*rax13 < 0) {
    }
    goto v14;
}

void fun_415219() {
}

void fun_41521d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

struct s27 {
    signed char 0x0;
    unsigned char 0x1;
};

struct s27* fun_ff4d16();

void fun_41531b() {
    struct s27* rax1;
    unsigned char tmp8_2;
    unsigned char bh3;
    int1_t cf4;
    int64_t v5;

    rax1 = fun_ff4d16();
    rax1->0x0 = reinterpret_cast<signed char>(rax1->0x0 + *reinterpret_cast<signed char*>(&rax1));
    tmp8_2 = reinterpret_cast<unsigned char>(rax1->0x1 + bh3);
    cf4 = tmp8_2 < rax1->0x1;
    rax1->0x1 = tmp8_2;
    if (cf4) {
    }
    if (__intrinsic()) {
    }
    if (reinterpret_cast<signed char>(rax1->0x1) < reinterpret_cast<signed char>(0)) {
    }
    goto v5;
}

void fun_415433() {
    return;
}

void fun_415535() {
    return;
}

void fun_41564e(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_41574f() {
    signed char* rbp1;
    signed char* rbp2;
    int1_t of3;
    int64_t v4;

    *rbp1 = reinterpret_cast<signed char>(*rbp2 >> 1);
    if (__intrinsic()) {
    }
    if (of3) {
    }
    if (__undefined()) {
    }
    goto v4;
}

void fun_415868(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

signed char gbdeaf5;

unsigned char gbdeaf6;

void fun_41596a() {
    signed char tmp8_1;
    unsigned char tmp8_2;
    unsigned char bh3;
    int1_t cf4;
    int1_t sf5;
    int64_t v6;

    tmp8_1 = reinterpret_cast<signed char>(gbdeaf5 - 11);
    gbdeaf5 = tmp8_1;
    tmp8_2 = reinterpret_cast<unsigned char>(gbdeaf6 + bh3);
    cf4 = tmp8_2 < gbdeaf6;
    gbdeaf6 = tmp8_2;
    sf5 = reinterpret_cast<signed char>(gbdeaf6) < reinterpret_cast<signed char>(0);
    if (cf4) {
    }
    if (__intrinsic()) {
    }
    if (sf5) {
    }
    goto v6;
}

void fun_415a81(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx - 1) 
        goto 0x415a73;
    __asm__("iretd ");
    goto a20;
}

void fun_415b83() {
    int64_t rcx1;
    int32_t* rbp2;
    int32_t* rbp3;
    int1_t of4;
    int64_t v5;

    if (rcx1 - 1) 
        goto 0x415b0d;
    *rbp2 = *rbp3 >> 1;
    if (__intrinsic()) {
    }
    if (of4) {
    }
    if (__undefined()) {
    }
    goto v5;
}

void fun_415c9b() {
    return;
}

void fun_415d9d() {
    return;
}

void fun_415eb5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    int1_t zf21;

    if (reinterpret_cast<uint1_t>(!!(rcx - 1)) & reinterpret_cast<uint1_t>(!zf21)) 
        goto 0x415ead;
    goto a20;
}

unsigned char gf800000000bdc9f5;

void fun_415fb7() {
    unsigned char* rax1;
    unsigned char tmp8_2;
    int1_t cf3;
    int64_t v4;

    *reinterpret_cast<unsigned char*>(&rax1) = gf800000000bdc9f5;
    *rax1 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<uint32_t*>(&rax1));
    tmp8_2 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<unsigned char*>(&rax1));
    cf3 = tmp8_2 < *rax1;
    *rax1 = tmp8_2;
    if (cf3) {
    }
    if (__intrinsic()) {
    }
    if (reinterpret_cast<signed char>(*rax1) < reinterpret_cast<signed char>(0)) {
    }
    goto v4;
}

void fun_4160cf(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("ror byte [rax+0x1], cl");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_4161d1() {
    int64_t rcx1;
    int64_t v2;

    if (rcx1 - 1) 
        goto 0x416193;
    if (__undefined()) {
    }
    if (__undefined()) {
    }
    if (__undefined()) {
    }
    goto v2;
}

void fun_4162e9() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x4162d3;
}

void fun_4162ed(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_4163ed() {
    goto 0x4163ad;
}

void fun_416503(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (rcx3 - 1) 
        goto 0x416578;
    goto v4;
}

void fun_416606() {
    int64_t v1;

    goto v1;
}

void fun_416705() {
    return;
}

void fun_416808() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    int64_t v7;

    __asm__("out 0xbd, eax");
    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    goto v7;
}

void fun_416908(int64_t rdi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("int 0x48");
    goto a20;
}

void fun_416a0a() {
    int64_t v1;

    __asm__("fstp tword [rbp+0x0]");
    goto v1;
}

void fun_416b0a(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_416c0c() {
    int64_t v1;

    goto v1;
}

void fun_416d0b(int64_t rdi, int64_t rsi, signed char dl, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (!(rcx - 1)) {
    }
    goto a20;
}

void fun_416e0d() {
    return;
}

void fun_416f0d(int64_t rdi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_41700f() {
    return;
}

void fun_417110(int64_t rdi) {
    int64_t v2;

    __asm__("ror byte [rax+0x1], 0xd8");
    goto v2;
}

void fun_417212() {
    int32_t* rbp1;
    int32_t* rbp2;
    int64_t v3;

    *rbp1 = *rbp2 >> 1;
    goto v3;
}

void fun_417311() {
}

void fun_417315(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_417413() {
    return;
}

void fun_417513(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int1_t pf7;
    void* rbp8;

    if (!pf7) 
        goto 0x41750c;
    goto *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp8) + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8);
}

void fun_417615() {
    int64_t rcx1;
    signed char* rax2;
    signed char* rax3;
    signed char al4;
    signed char* rax5;
    signed char* rax6;
    signed char al7;
    int64_t v8;

    if (!(rcx1 - 1)) {
        *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
        *rax5 = reinterpret_cast<signed char>(*rax6 + al7);
    }
    goto v8;
}

void fun_417715() {
    return;
}

void fun_417817() {
    int64_t rcx1;
    int64_t v2;

    if (!(rcx1 - 1)) {
    }
    goto v2;
}

void fun_417918(int64_t rdi, int64_t rsi, signed char dl, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("wait ");
    goto a20;
}

void fun_417a19() {
    return;
}

void fun_417b19() {
    return;
}

void fun_417c1b() {
    int64_t v1;

    goto v1;
}

void fun_417d1b() {
    return;
}

void fun_417e1e() {
    int64_t v1;

    __asm__("sti ");
    goto v1;
}

void fun_417f1d(int32_t* rdi, int64_t rsi) {
    int32_t eax3;
    int64_t v4;

    *rdi = eax3;
    goto v4;
}

void fun_41801f() {
    int64_t v1;

    goto v1;
}

void fun_41811f() {
    return;
}

void fun_418221() {
    int64_t rcx1;
    signed char* rax2;
    signed char* rax3;
    signed char al4;
    signed char* rax5;
    signed char* rax6;
    signed char al7;
    int64_t v8;

    if (rcx1 - 1) 
        goto 0x41820e;
    *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
    *rax5 = reinterpret_cast<signed char>(*rax6 + al7);
    goto v8;
}

void fun_418321(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx) 
        goto 0x41831a;
    __asm__("out dx, eax");
    goto a20;
}

void fun_418423() {
    int64_t rcx1;
    int64_t v2;

    if (rcx1 - 1) 
        goto 0x418408;
    goto v2;
}

void fun_418523(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx - 1) 
        goto 0x4184b8;
    goto a20;
}

void fun_418625() {
    int64_t v1;

    __asm__("wait ");
    goto v1;
}

void fun_418725() {
    return;
}

void fun_418828() {
    int64_t v1;

    goto v1;
}

void fun_418927(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx - 1) 
        goto 0x4188ac;
    goto a20;
}

void fun_418a29(int32_t* rdi, int64_t rsi) {
    int32_t eax3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    signed char* rax7;
    signed char* rax8;
    signed char al9;
    int64_t v10;

    *rdi = eax3;
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    goto v10;
}

void fun_418b29(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fimul dword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_418c2b() {
    return;
}

void fun_418d2b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    int1_t cf21;

    if (!cf21) 
        goto 0x418d23;
    __asm__("int 0x48");
    goto a20;
}

void fun_418e2d() {
    int64_t rcx1;
    int64_t v2;

    if (rcx1 - 1) 
        goto 0x418ea2;
    goto v2;
}

void fun_418f2d() {
    return;
}

void fun_41902f(int64_t rdi, int32_t esi) {
    signed char* rbp3;
    signed char* rbp4;
    signed char* rax5;
    signed char* rax6;
    signed char al7;
    signed char* rax8;
    signed char* rax9;
    signed char al10;
    int64_t v11;

    *rbp3 = reinterpret_cast<signed char>(*rbp4 >> -65);
    *rax5 = reinterpret_cast<signed char>(*rax6 + al7);
    *rax8 = reinterpret_cast<signed char>(*rax9 + al10);
    goto v11;
}

void fun_419130(int64_t rdi) {
    int64_t v2;

    __asm__("fisttp qword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v2;
}

void fun_419231() {
    int32_t* rbp1;
    int32_t* rbp2;
    int64_t v3;

    *rbp1 = *rbp2 >> 1;
    goto v3;
}

void fun_419331() {
}

void fun_419335(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_419433() {
    int64_t rcx1;
    int64_t v2;

    if (rcx1 - 1) 
        goto 0x4194b0;
    __asm__("fistp qword [rbp+0x0]");
    goto v2;
}

void fun_419534(int64_t rdi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("retf ");
    goto a20;
}

void fun_419636() {
    int64_t v1;

    __asm__("in eax, dx");
    goto v1;
}

void fun_419735() {
    int1_t cf1;

    if (!cf1) 
        goto 0x41972d;
}

void fun_419739(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_419837() {
    return;
}

void fun_419937(int64_t rdi) {
    int64_t v2;

    __asm__("ror byte [rax+0x1], 0xd8");
    goto v2;
}

void fun_419a39() {
    int64_t rcx1;
    signed char* rbp2;
    signed char* rbp3;
    int64_t v4;

    if (rcx1 - 1) 
        goto 0x419a8e;
    *rbp2 = reinterpret_cast<signed char>(*rbp3 >> 1);
    goto v4;
}

void fun_419b39(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx - 1) 
        goto 0x419ba6;
    __asm__("cli ");
    goto a20;
}

void fun_419c3b() {
    int16_t* rbp1;
    int16_t fpu_status_word2;
    int64_t v3;

    *rbp1 = fpu_status_word2;
    goto v3;
}

void fun_419d3b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (!(rcx - 1)) {
        __asm__("retf ");
    }
    goto a20;
}

void fun_419e3d() {
    return;
}

void fun_419f3d(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (!(rcx3 - 1)) {
        __asm__("fimul dword [rax+0x1]");
        __asm__("fmul dword [rax+0x1]");
        __asm__("enter 0x148, 0xd0");
    }
    goto v4;
}

void fun_41a03f() {
    int64_t v1;

    __asm__("sti ");
    goto v1;
}

void fun_41a13f() {
    return;
}

void fun_41a242(int32_t* rdi, int64_t rsi) {
    int32_t eax3;
    int64_t v4;

    *rdi = eax3;
    __asm__("fnstcw word [rbp+0x0]");
    goto v4;
}

int64_t fun_41a342() {
    int64_t rax1;
    int32_t ebx2;

    *reinterpret_cast<int32_t*>(&rax1) = ebx2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    return rax1;
}

void fun_41a444(int32_t* rdi, int64_t rsi) {
    int32_t eax3;
    signed char* rbp4;
    signed char* rbp5;
    int64_t v6;

    *rdi = eax3;
    *rbp4 = reinterpret_cast<signed char>(*rbp5 >> 1);
    goto v6;
}

void fun_41a543() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x41a4c8;
}

void fun_41a547(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_41a645() {
    return;
}

void fun_41a745(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    void* rbp7;

    if (rcx - 1) 
        goto 0x41a742;
    goto *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp7) + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8);
}

void fun_41a847() {
    return;
}

void fun_41a947() {
    return;
}

void fun_41aa49() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x41a9f6;
}

void fun_41aa4d() {
    int64_t v1;

    goto v1;
}

void fun_41ab49(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (rcx3 - 1) 
        goto 0x41aae6;
    __asm__("retf 0x148");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v4;
}

void fun_41ac4b() {
    return;
}

void fun_41ad4b(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_41ae4d(signed char* rdi) {
    int32_t ebx2;
    signed char* rax3;
    signed char* rax4;
    signed char al5;
    int64_t v6;

    ebx2 = 0xbdfdf5;
    *rax3 = reinterpret_cast<signed char>(*rax4 + al5);
    *rdi = reinterpret_cast<signed char>(*rdi + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ebx2) + 1));
    goto v6;
}

void fun_41af4d() {
    return;
}

void fun_41af51(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_41b04f(int32_t* rdi, int64_t rsi) {
    int32_t eax3;
    int64_t v4;

    *rdi = eax3;
    goto v4;
}

void fun_41b150() {
    goto 0x41b147;
}

int32_t gff00000000bdf1f5;

void fun_41b252(int64_t rdi) {
    int32_t eax2;
    signed char* rax3;
    signed char* rax4;
    signed char al5;
    signed char* rax6;
    signed char* rax7;
    signed char al8;
    int64_t v9;

    gff00000000bdf1f5 = eax2;
    *rax3 = reinterpret_cast<signed char>(*rax4 + al5);
    *rax6 = reinterpret_cast<signed char>(*rax7 + al8);
    goto v9;
}

void fun_41b352() {
    goto 0x41b349;
}

void fun_41b453() {
    int64_t rcx1;
    int64_t v2;

    if (rcx1 - 1) 
        goto 0x41b438;
    goto v2;
}

void fun_41b553() {
    return;
}

void fun_41b655() {
    return;
}

void fun_41b659() {
    int64_t v1;

    goto v1;
}

void fun_41b756(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_41b857() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    int64_t v7;

    __asm__("out 0xbd, eax");
    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    goto v7;
}

void fun_41b958(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fimul dword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_41ba5a() {
    int64_t v1;

    goto v1;
}

void fun_41bb59() {
    return;
}

void fun_41bc5c() {
    int64_t v1;

    goto v1;
}

void fun_41bd5b(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (!(rcx3 - 1)) {
        __asm__("fimul word [rax+0x1]");
        __asm__("fmul dword [rax+0x1]");
        __asm__("enter 0x148, 0xd0");
    }
    goto v4;
}

void fun_41be5d() {
    return;
}

void fun_41be61() {
    int64_t v1;

    goto v1;
}

void fun_41bf5d(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (!(rcx3 - 1)) {
        __asm__("fisttp qword [rax+0x1]");
        __asm__("fmul dword [rax+0x1]");
        __asm__("enter 0x148, 0xd0");
    }
    goto v4;
}

void fun_41c05f() {
    int64_t rcx1;
    int32_t* rbp2;
    int32_t* rbp3;
    int64_t v4;

    if (!(rcx1 - 1)) {
        *rbp2 = *rbp3 >> 1;
    }
    goto v4;
}

void fun_41c15f() {
    return;
}

void fun_41c262() {
}

void fun_41c265() {
    int64_t v1;

    goto v1;
}

void fun_41c361() {
    return;
}

void fun_41c463() {
    return;
}

void fun_41c563(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (!(rcx - 1)) {
        __asm__("ror dword [rax+0x1], 0xd8");
    }
    goto a20;
}

void fun_41c665() {
}

void fun_41c669() {
    int64_t v1;

    goto v1;
}

void fun_41c766(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("retf ");
    goto a20;
}

void fun_41c868() {
    int64_t v1;

    goto v1;
}

void fun_41c967(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    int1_t zf21;

    if (!(reinterpret_cast<uint1_t>(!!(rcx - 1)) & reinterpret_cast<uint1_t>(!zf21))) {
    }
    goto a20;
}

void fun_41ca69() {
}

void fun_41ca6d() {
    int64_t v1;

    goto v1;
}

signed char g80148d80148c1f5;

void fun_41cb69(int64_t rdi, int64_t rsi, int64_t rdx) {
    signed char al4;
    int64_t v5;

    g80148d80148c1f5 = al4;
    goto v5;
}

void fun_41cc6b() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x41cc0f;
    goto 0x41cd30;
}

void fun_41cd6d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("xlatb ");
    goto a20;
}

void fun_41ce6e() {
    int64_t rcx1;
    signed char ch2;
    unsigned char cl3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    signed char* rax7;
    signed char* rax8;
    signed char al9;
    int64_t v10;

    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx1) + 1) = reinterpret_cast<signed char>(ch2 << cl3);
    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx1) + 1) == 0)) 
        goto 0x41ce2f;
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    goto v10;
}

void fun_41cf6d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx - 1) 
        goto 0x41cf39;
    __asm__("cli ");
    goto a20;
}

void fun_41d06f() {
    int64_t rcx1;
    signed char* rax2;
    signed char* rax3;
    signed char al4;
    signed char* rax5;
    signed char* rax6;
    signed char al7;
    int64_t v8;

    if (rcx1) 
        goto 0x41d031;
    *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
    *rax5 = reinterpret_cast<signed char>(*rax6 + al7);
    goto v8;
}

void fun_41d16f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx - 1) 
        goto 0x41d167;
    __asm__("ror byte [rax+0x1], 0xd8");
    goto a20;
}

void fun_41d271() {
    return;
}

void fun_41d373() {
    int64_t v1;

    goto v1;
}

void fun_41d473(int64_t rdi) {
    int64_t rcx2;
    signed char* rbp3;
    signed char* rbp4;
    signed char* rax5;
    signed char* rax6;
    signed char al7;
    signed char* rax8;
    signed char* rax9;
    signed char al10;
    int64_t v11;

    if (rcx2 - 1) 
        goto 0x41d43f;
    *rbp3 = reinterpret_cast<signed char>(*rbp4 >> -65);
    *rax5 = reinterpret_cast<signed char>(*rax6 + al7);
    *rax8 = reinterpret_cast<signed char>(*rax9 + al10);
    goto v11;
}

void fun_41d575(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("enter 0x148, 0xd8");
    goto a20;
}

void fun_41d675() {
    int64_t rcx1;
    int64_t v2;

    if (rcx1 - 1) 
        goto 0x41d66d;
    goto v2;
}

void fun_41d775(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (rcx3 - 1) 
        goto 0x41d701;
    __asm__("ror dword [rax+0x1], 1");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v4;
}

void fun_41d877() {
    int64_t v1;

    goto v1;
}

void fun_41d977(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx - 1) 
        goto 0x41d973;
    __asm__("iretd ");
    goto a20;
}

void fun_41da79() {
    int64_t v1;

    __asm__("in eax, dx");
    goto v1;
}

void fun_41db79(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx - 1) 
        goto 0x41db65;
    __asm__("int1 ");
    goto a20;
}

void fun_41dc7b() {
    return;
}

void fun_41dd7b() {
    return;
}

void fun_41de7e() {
    return;
}

void fun_41df7f() {
    return;
}

void fun_41e082(signed char* rdi) {
    int64_t rcx2;
    signed char bh3;
    int64_t v4;

    if (rcx2) 
        goto 0x41e0ff;
    *rdi = reinterpret_cast<signed char>(*rdi + bh3);
    goto v4;
}

void fun_41e183(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    int1_t pf21;

    if (!pf21) 
        goto 0x41e176;
    if (rcx) 
        goto 0x41e16f;
    goto a20;
}

void fun_41e286() {
    int64_t rcx1;
    int64_t v2;

    if (rcx1) 
        goto 0x41e303;
    __asm__("lock sti ");
    goto v2;
}

void fun_41e387(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    int1_t pf21;

    if (!pf21) 
        goto 0x41e37a;
    __asm__("ficomp word [rax+rcx*2]");
    goto a20;
}

void fun_41e48a() {
    int64_t v1;

    goto v1;
}

void fun_41e58b() {
    int64_t v1;

    __asm__("fidiv word [rcx+0x48d80148]");
    goto v1;
}

void fun_41e68e() {
    return;
}

void fun_41e78f(int64_t rdi, int64_t rsi, int64_t rdx, int32_t ecx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    int1_t pf21;

    if (!pf21) 
        goto 0x41e782;
    __asm__("fisttp word [rsi+0x48d80148]");
    goto a20;
}

void fun_41e892() {
    int1_t pf1;

    if (!pf1) 
        goto 0x41e885;
}

void fun_41e896() {
    int64_t v1;

    __asm__("fidivr dword [rbp+0x0]");
    goto v1;
}

struct s28 {
    signed char[72] pad72;
    unsigned char 0x48;
};

void fun_41e993(int64_t rdi, int64_t rsi, struct s28* rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx) 
        goto 0x41ea10;
    rdx->0x48 = reinterpret_cast<unsigned char>(rdx->0x48 >> *reinterpret_cast<signed char*>(&rcx));
    goto a20;
}

void fun_41ea96() {
    int1_t pf1;

    if (!pf1) 
        goto 0x41ea89;
    goto 0x41ea57;
}

void fun_41eb97(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    int1_t pf21;

    if (!pf21) 
        goto 0x41eb8a;
    __asm__("in al, dx");
    goto a20;
}

void fun_41ec9a() {
    int1_t pf1;
    int64_t v2;

    if (!pf1) 
        goto 0x41ec8d;
    goto v2;
}

int32_t fun_4931eef8();

void fun_41ed9b(int32_t edi) {
    int64_t rcx2;
    int64_t v3;

    if (rcx2) 
        goto 0x41ee18;
    __asm__("lock cli ");
    __asm__("ror byte [rax+0x1], 1");
    fun_4931eef8();
    goto v3;
}

void fun_41ee9e() {
    int64_t rcx1;
    signed char* rax2;
    int64_t v3;

    if (rcx1) 
        goto 0x41ef1b;
    rax2 = fun_42ac7f();
    *rax2 = reinterpret_cast<signed char>(*rax2 + *reinterpret_cast<signed char*>(&rax2));
    goto v3;
}

void fun_41ef9f(int64_t rdi, int64_t rsi) {
    int1_t pf3;
    int64_t v4;

    if (!pf3) 
        goto 0x41ef92;
    __asm__("in eax, dx");
    __asm__("fisttp dword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v4;
}

void fun_41f0a2() {
    int64_t v1;

    __asm__("out dx, eax");
    goto v1;
}

void fun_41f1a3(int64_t rdi, int64_t rsi, int64_t rdx, int32_t ecx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("sti ");
    *reinterpret_cast<int32_t*>(rdi + 0x48d80148) = *reinterpret_cast<int32_t*>(rdi + 0x48d80148) + 1;
    goto a20;
}

void fun_41f2a6(signed char* rdi) {
    int64_t rcx2;
    signed char bh3;
    int64_t v4;

    if (rcx2) 
        goto 0x41f2a3;
    __asm__("lock sti ");
    *rdi = reinterpret_cast<signed char>(*rdi + bh3);
    goto v4;
}

void fun_41f3a7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx) 
        goto 0x41f3a4;
    __asm__("lock sti ");
    __asm__("insb ");
    goto a20;
}

void fun_41f4aa() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    int64_t v7;

    __asm__("lock ficomp word [rdi-0x43]");
    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    goto v7;
}

void fun_41f5ab() {
    int64_t v1;

    __asm__("lock iretd ");
    __asm__("lahf ");
    goto v1;
}

void fun_41f6ae() {
    __asm__("sti ");
}

void fun_41f6b2(signed char* rdi) {
    signed char bh2;
    int64_t v3;

    *rdi = reinterpret_cast<signed char>(*rdi + bh2);
    goto v3;
}

void fun_41f7af() {
    return;
}

void fun_41f8b2() {
    int64_t rcx1;
    int64_t v2;

    if (rcx1) 
        goto 0x41f8af;
    __asm__("lock retf ");
    goto v2;
}

void fun_41f9b3() {
    return;
}

void fun_41f9b7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19) {
    goto a19;
}

void fun_41fab6() {
    int32_t* rax1;
    signed char* rax2;
    signed char* rax3;
    signed char al4;
    signed char* rax5;
    signed char* rax6;
    signed char al7;
    int64_t v8;

    __asm__("sti ");
    *rax1 = 0;
    *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
    *rax5 = reinterpret_cast<signed char>(*rax6 + al7);
    goto v8;
}

void fun_41fbb7() {
}

void fun_41fcba() {
    __asm__("sti ");
}

void fun_41fcbe() {
    int64_t v1;

    goto v1;
}

void fun_41fdbb() {
    int64_t v1;

    __asm__("lock in eax, 0xd4");
    goto v1;
}

void fun_41febe() {
    int64_t rcx1;
    uint1_t zf2;
    int64_t v3;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & zf2) 
        goto 0x41fe74;
    goto v3;
}

void fun_41ffbf() {
    return;
}

void fun_4200c2() {
}

void fun_4200c7() {
    int64_t v1;

    goto v1;
}

void fun_4201c3(signed char* rdi, signed char* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("sti ");
    __asm__("lock xlatb ");
    *rdi = *rsi;
    goto a20;
}

void fun_4202c6() {
    unsigned char* rax1;
    signed char al2;
    unsigned char al3;
    uint1_t cf4;
    int64_t v5;

    __asm__("sti ");
    *reinterpret_cast<unsigned char*>(&rax1) = reinterpret_cast<unsigned char>(al2 - reinterpret_cast<unsigned char>(67 - reinterpret_cast<uint1_t>(al3 < reinterpret_cast<unsigned char>(67 - cf4))));
    *rax1 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<unsigned char*>(&rax1));
    *rax1 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<unsigned char*>(&rax1));
    goto v5;
}

void fun_4203c7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx) 
        goto 0x4203c4;
    __asm__("lock retf ");
    goto a20;
}

void fun_4204ca() {
    __asm__("sti ");
}

void fun_4204cf() {
    int64_t v1;

    goto v1;
}

void fun_4205cb(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_4206cd(int32_t edi) {
    int64_t rcx2;
    int64_t v3;

    if (!(rcx2 - 1)) {
    }
    goto v3;
}

void fun_4207ce(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    int1_t pf21;

    if (pf21) 
        goto 0x4207c7;
    goto a20;
}

void fun_4208cf() {
    int64_t v1;

    goto v1;
}

void fun_4209cf(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    int1_t pf21;

    if (pf21) 
        goto 0x4209c9;
    __asm__("retf ");
    goto a20;
}

void fun_420ad2(signed char* rdi) {
    signed char bh2;
    int64_t v3;

    *rdi = reinterpret_cast<signed char>(*rdi + bh2);
    goto v3;
}

void fun_420bd2() {
}

void fun_420bd5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_420cd3() {
    return;
}

void fun_420dd3() {
    return;
}

void fun_420ed5() {
    return;
}

void fun_420fd5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx - 1) 
        goto 0x421049;
    goto a20;
}

void fun_4210d7(signed char* rdi) {
    signed char bh2;
    int64_t v3;

    *rdi = reinterpret_cast<signed char>(*rdi + bh2);
    goto v3;
}

void fun_4211d7(int64_t rdi, signed char sil) {
    int64_t v3;

    __asm__("retf 0x148");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_4212d9(signed char* rdi, int32_t esi) {
    signed char bh3;
    int64_t v4;

    *rdi = reinterpret_cast<signed char>(*rdi + bh3);
    goto v4;
}

void fun_4213d9() {
    return;
}

void fun_4214db() {
    int1_t pf1;
    int64_t v2;

    if (pf1) 
        goto 0x4214d5;
    __asm__("iretd ");
    goto v2;
}

void fun_4215db(signed char dil, signed char sil) {
}

void fun_4215df(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_4216de() {
    int64_t v1;

    goto v1;
}

void fun_4217de(int64_t rdi, int64_t rsi) {
    int1_t cf3;
    int64_t v4;

    if (cf3) 
        goto 0x4217d7;
    __asm__("fmul dword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v4;
}

void fun_4218e0() {
    int1_t pf1;
    int64_t v2;

    if (pf1) 
        goto "T";
    goto v2;
}

void fun_4219e0(int32_t edi, int64_t rsi, int32_t edx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_421ae1(int64_t rdi) {
    signed char* rbp2;
    signed char* rbp3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    signed char* rax7;
    signed char* rax8;
    signed char al9;
    int64_t v10;

    *rbp2 = reinterpret_cast<signed char>(*rbp3 >> -65);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    goto v10;
}

void fun_421be3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_421ce3() {
    return;
}

void fun_421ce7() {
    int64_t v1;

    goto v1;
}

void fun_421de3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_421ee5(signed char* rdi) {
    int64_t rcx2;
    signed char bh3;
    int64_t v4;

    if (rcx2 - 1) 
        goto 0x421e89;
    *rdi = reinterpret_cast<signed char>(*rdi + bh3);
    goto v4;
}

void fun_421fe5(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_4220e7() {
    int64_t v1;

    goto v1;
}

void fun_4221e7() {
    return;
}

void fun_4221eb(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_4222e9(int32_t edi) {
    int64_t rcx2;
    int64_t v3;

    if (rcx2 - 1) 
        goto 0x4222b5;
    goto v3;
}

void fun_4223e9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx - 1) 
        goto 0x4223b5;
    goto a20;
}

void fun_4224eb(signed char* rdi) {
    signed char* rax2;
    signed char* rax3;
    signed char al4;
    signed char bh5;
    int64_t v6;

    *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
    *rdi = reinterpret_cast<signed char>(*rdi + bh5);
    goto v6;
}

struct s29 {
    signed char[1] pad1;
    int32_t 0x1;
};

struct s30 {
    signed char[1] pad1;
    int32_t 0x1;
};

void fun_4225eb(int64_t rdi, int64_t rsi) {
    struct s29* rax3;
    struct s30* rax4;
    int64_t v5;

    rax3->0x1 = rax4->0x1 - 1;
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v5;
}

void fun_4226ed() {
    int64_t v1;

    goto v1;
}

void fun_4227ed(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx - 1) 
        goto 0x422791;
    goto a20;
}

void fun_4228f0() {
    return;
}

void fun_4229ef() {
    return;
}

void fun_4229f3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_422af1() {
    int64_t v1;

    goto v1;
}

void fun_422bf1(int64_t rdi) {
    int64_t v2;

    __asm__("out 0x48, eax");
    goto v2;
}

void fun_422cf3() {
    return;
}

void fun_422df3(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (!(rcx3 - 1)) {
    }
    goto v4;
}

void fun_422ef5() {
    int64_t rcx1;
    int64_t v2;

    if (rcx1 - 1) 
        goto 0x422f48;
    goto v2;
}

void fun_422ff5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("cli ");
    goto a20;
}

void fun_4230f8(int32_t edi) {
    signed char* rax2;
    signed char* rax3;
    signed char al4;
    int64_t v5;

    *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
    goto v5;
}

void fun_4231f7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx - 1) 
        goto 0x42326a;
    goto a20;
}

void fun_4232f9() {
    int64_t v1;

    goto v1;
}

void fun_4233f9() {
    return;
}

void fun_4234fb(int32_t edi, int32_t esi) {
    int64_t v3;

    goto v3;
}

void fun_4235fb(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_4236fd() {
    int64_t rcx1;
    int64_t v2;

    if (!(rcx1 - 1)) {
    }
    goto v2;
}

void fun_4237fd(int32_t edi, int32_t esi) {
}

void fun_423801(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_423900(signed char* rdi) {
    signed char bh2;
    int64_t v3;

    *rdi = reinterpret_cast<signed char>(*rdi + bh2);
    goto v3;
}

void fun_4239ff(int64_t rdi, int64_t rsi, int32_t edx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (!(rcx - 1)) {
    }
    goto a20;
}

void fun_423b01() {
    int64_t v1;

    goto v1;
}

void fun_423c01(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (!(rcx3 - 1)) {
    }
    goto v4;
}

void fun_423d04(int32_t edi, int32_t esi) {
    int64_t v3;

    __asm__("int1 ");
    goto v3;
}

void fun_423e03(int64_t rdi) {
    int64_t v2;

    goto v2;
}

void fun_423f05(signed char* rdi) {
    int64_t rcx2;
    signed char bh3;
    int64_t v4;

    if (!(rcx2 - 1)) {
    }
    *rdi = reinterpret_cast<signed char>(*rdi + bh3);
    goto v4;
}

void fun_424005(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (!(rcx3 - 1)) {
    }
    goto v4;
}

void fun_424107() {
    int64_t rcx1;
    int64_t v2;

    if (!(rcx1 - 1)) {
    }
    goto v2;
}

void fun_424208() {
}

void fun_42430a() {
    int64_t rcx1;
    uint1_t zf2;
    int64_t v3;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & zf2) 
        goto 0x424303;
    __asm__("sti ");
    goto v3;
}

void fun_424409() {
    return;
}

void fun_42450b(signed char* rdi) {
    signed char* rax2;
    signed char* rax3;
    signed char al4;
    signed char bh5;
    int64_t v6;

    *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
    *rdi = reinterpret_cast<signed char>(*rdi + bh5);
    goto v6;
}

void fun_42460c(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_42470d() {
    int64_t v1;

    __asm__("sti ");
    goto v1;
}

void fun_42480d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx - 1) 
        goto 0x4247f0;
    goto a20;
}

void fun_42490f() {
    return;
}

void fun_424a0f(int64_t rdi, int64_t rsi, int32_t edx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx - 1) 
        goto 0x4249fa;
    goto a20;
}

void fun_424b11() {
    return;
}

void fun_424c12() {
}

void fun_424d13() {
    return;
}

void fun_424d17() {
    int64_t v1;

    goto v1;
}

void fun_424e14(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

void fun_424f16(int32_t edi) {
    int64_t v2;

    goto v2;
}

void fun_425015(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx - 1) 
        goto 0x424fb8;
    goto a20;
}

int32_t gff00000000bdeff7;

void fun_425118(int64_t rdi) {
    signed char* rax2;
    int64_t v3;

    *reinterpret_cast<int32_t*>(&rax2) = gff00000000bdeff7;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    *rax2 = reinterpret_cast<signed char>(*rax2 + *reinterpret_cast<signed char*>(&rax2));
    *rax2 = reinterpret_cast<signed char>(*rax2 + *reinterpret_cast<signed char*>(&rax2));
    goto v3;
}

void fun_425218(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_425319(int32_t edi) {
    int64_t v2;

    goto v2;
}

void fun_425419(int64_t rdi, int64_t rsi, int64_t rdx, int32_t ecx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_42551c() {
    int64_t v1;

    goto v1;
}

void fun_42561c(int32_t edi, int32_t esi) {
    return;
}

void fun_42571e(signed char* rdi) {
    signed char bh2;
    int64_t v3;

    *rdi = reinterpret_cast<signed char>(*rdi + bh2);
    goto v3;
}

void fun_42581d() {
    return;
}

void fun_42591f(int32_t edi, int32_t esi) {
}

void fun_425923() {
    int64_t v1;

    goto v1;
}

void fun_425a20(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_425b22(int32_t edi, int32_t esi) {
}

void fun_425b25() {
    int64_t v1;

    goto v1;
}

void fun_425c21(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (!(rcx3 - 1)) {
    }
    goto v4;
}

void fun_425d23() {
    return;
}

void fun_425e23() {
    return;
}

void fun_425f25() {
    int64_t rcx1;
    int64_t v2;

    if (!(rcx1 - 1)) {
    }
    goto v2;
}

void fun_426026(int64_t rdi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("sti ");
    goto a20;
}

void fun_426127() {
    return;
}

void fun_426227() {
    return;
}

void fun_426329(int32_t edi, int32_t esi) {
    int64_t v3;

    goto v3;
}

void fun_426429() {
    return;
}

void fun_42652c(int32_t edi, int32_t esi) {
    int64_t v3;

    goto v3;
}

void fun_42662b(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (rcx3 - 1) 
        goto 0x426698;
    goto v4;
}

void fun_42672d(int32_t edi, int32_t esi) {
    int64_t rcx3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    signed char* rax7;
    signed char* rax8;
    signed char al9;
    int64_t v10;

    if (rcx3) 
        goto 0x4266ef;
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    goto v10;
}

void fun_42682d(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t v4;

    if (!(rcx3 - 1)) {
    }
    goto v4;
}

void fun_42692f() {
    int64_t rcx1;
    int64_t v2;

    if (!(rcx1 - 1)) {
    }
    goto v2;
}

void fun_426a2f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx - 1) 
        goto 0x426a14;
    goto a20;
}

void fun_426b32() {
    goto 0x426b2b;
}

void fun_426c32() {
    return;
}

void fun_426d33() {
    int64_t v1;

    __asm__("retf ");
    goto v1;
}

void fun_426e33() {
    return;
}

void fun_426f35(int32_t edi) {
    signed char* rbp2;
    signed char* rbp3;
    int64_t v4;

    *rbp2 = reinterpret_cast<signed char>(*rbp3 >> 1);
    goto v4;
}

void fun_427036(int64_t rdi) {
    void* rbp2;

    goto *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp2) + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8);
}

void fun_427137(signed char* rdi, int32_t esi) {
    int64_t rcx3;
    signed char bh4;
    int64_t v5;

    if (rcx3 - 1) 
        goto 0x4270f4;
    *rdi = reinterpret_cast<signed char>(*rdi + bh4);
    goto v5;
}

void fun_427237() {
    return;
}

void fun_42723b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_427339() {
    return;
}

void fun_427439(int64_t rdi, int64_t rsi, int64_t rdx, int32_t ecx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("retf ");
    goto a20;
}

void fun_42753c() {
    int64_t v1;

    goto v1;
}

void fun_42763b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t ecx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("retf ");
    goto a20;
}

void fun_42773d() {
    int64_t rcx1;
    int64_t v2;

    if (rcx1 - 1) 
        goto 0x4276f2;
    goto v2;
}

void fun_42783d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (rcx - 1) 
        goto 0x4277e2;
    goto a20;
}

void fun_427940() {
    return;
}

void fun_427a40(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    int1_t zf21;

    if (rcx) 
        goto 0x427a39;
    if (!(reinterpret_cast<uint1_t>(!!(rcx - 1)) & reinterpret_cast<uint1_t>(!zf21))) {
    }
    goto a20;
}

void fun_427b41() {
    return;
}

void fun_427c42(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("retf ");
    goto v3;
}

void fun_427d43() {
}

void fun_427d47() {
    int64_t v1;

    goto v1;
}

void fun_427e44(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("cli ");
    goto a20;
}

void fun_427f47() {
    signed char* rbp1;
    signed char* rbp2;
    signed char* rax3;
    signed char* rax4;
    signed char al5;
    signed char* rax6;
    signed char* rax7;
    signed char al8;
    int64_t v9;

    *rbp1 = reinterpret_cast<signed char>(*rbp2 >> -65);
    *rax3 = reinterpret_cast<signed char>(*rax4 + al5);
    *rax6 = reinterpret_cast<signed char>(*rax7 + al8);
    if (__intrinsic()) {
    }
    goto v9;
}

void fun_428050(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_428153() {
}

void fun_428156() {
    int1_t of1;
    int64_t v2;

    if (of1) {
    }
    goto v2;
}

void fun_42825c(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("ror dword [rax+0x1], cl");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_42835f() {
    int32_t* rbp1;
    int32_t* rbp2;
    signed char cl3;
    int64_t v4;

    *rbp1 = *rbp2 >> cl3;
    if (__intrinsic()) {
    }
    goto v4;
}

void fun_428468(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fisttp word [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_42856b() {
    int64_t v1;

    if (__intrinsic()) {
    }
    goto v1;
}

void fun_428674(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    void* rbp7;

    goto *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp7) + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8);
}

void fun_428777() {
    int64_t v1;

    __asm__("sti ");
    if (__intrinsic()) {
    }
    goto v1;
}

void fun_428880() {
}

void fun_428883(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_428983() {
    int64_t v1;

    if (__intrinsic()) {
    }
    goto v1;
}

void fun_428a8c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_428b8e() {
}

void fun_428b91() {
    int1_t of1;
    int64_t v2;

    if (of1) {
    }
    goto v2;
}

void fun_428c96(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("retf 0x148");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_428d99() {
}

void fun_428d9c() {
    int1_t of1;
    int64_t v2;

    if (of1) {
    }
    goto v2;
}

void fun_428ea2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("sti ");
    goto a20;
}

void fun_428fa5() {
    void* rbp1;

    if (__intrinsic()) {
    }
    goto *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp1) + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8);
}

void fun_4290ae() {
    __asm__("hlt ");
}

void fun_4291b0() {
    int64_t v1;

    __asm__("sti ");
    if (__intrinsic()) {
    }
    goto v1;
}

void fun_4292b9() {
}

void fun_4292bc(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_4293bc() {
    return;
}

int32_t fun_491a9614();

void fun_4294c5(int64_t rdi, int64_t rsi, int64_t rdx, int32_t ecx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    fun_491a9614();
    goto a20;
}

void fun_4295c8() {
}

void fun_4295cb() {
    int1_t of1;
    int64_t v2;

    if (of1) {
    }
    goto v2;
}

void fun_4296d1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("in eax, 0x48");
    goto a20;
}

void fun_4297d4() {
    int64_t v1;

    __asm__("fistp qword [rbp+0x0]");
    if (__intrinsic()) {
    }
    goto v1;
}

void fun_4298dd(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("iretd ");
    goto a20;
}

void fun_4299e0() {
    signed char* rbp1;
    signed char* rbp2;
    signed char cl3;
    int64_t v4;

    *rbp1 = reinterpret_cast<signed char>(*rbp2 >> cl3);
    if (__intrinsic()) {
    }
    goto v4;
}

void fun_429ae9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("int 0x48");
    goto a20;
}

void fun_429bec() {
    signed char* rbp1;
    signed char* rbp2;
    int64_t v3;

    *rbp1 = reinterpret_cast<signed char>(*rbp2 >> 1);
    if (__intrinsic()) {
    }
    goto v3;
}

void fun_429cf5(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("ror dword [rax+0x1], cl");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_429df8() {
    return;
}

void fun_429f01(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_42a004() {
    int64_t v1;

    __asm__("in al, dx");
    if (__intrinsic()) {
    }
    goto v1;
}

void fun_42a10d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    void* rbp7;

    goto *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp7) + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8);
}

void fun_42a210() {
    int64_t v1;

    if (__intrinsic()) {
    }
    goto v1;
}

void fun_42a319(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_42a41c() {
    int64_t rcx1;
    signed char dh2;
    signed char dh3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    signed char* rax7;
    signed char* rax8;
    signed char al9;
    int64_t v10;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & reinterpret_cast<uint1_t>(dh2 != dh3)) 
        goto 0x42a3dd;
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    if (__intrinsic()) {
    }
    goto v10;
}

void fun_42a525(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("ror byte [rax+0x1], cl");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_42a628() {
    int64_t v1;

    __asm__("xlatb ");
    if (__intrinsic()) {
    }
    goto v1;
}

void fun_42a731(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    void* rbp7;

    goto *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp7) + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8);
}

void fun_42a834() {
    unsigned char dh1;
    unsigned char dh2;
    int64_t v3;

    if (dh1 < dh2) {
    }
    goto v3;
}

void fun_42a93d(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("ror dword [rax+0x1], 1");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_42aa40() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    unsigned char tmp8_4;
    signed char* rax5;
    signed char al6;
    int1_t cf7;
    unsigned char* rax8;
    unsigned char* rax9;
    int64_t v10;

    __asm__("out 0xbd, eax");
    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    tmp8_4 = reinterpret_cast<unsigned char>(*rax5 + al6);
    cf7 = tmp8_4 < *rax8;
    *rax9 = tmp8_4;
    if (cf7) {
    }
    goto v10;
}

void fun_42ab48(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fisttp dword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_42ac4b() {
    unsigned char dh1;
    unsigned char dh2;

    if (dh1 < dh2) {
    }
}

void fun_42ad53() {
}

void fun_42ad56(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_42ae56() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    unsigned char tmp8_4;
    signed char* rax5;
    signed char al6;
    int1_t cf7;
    unsigned char* rax8;
    unsigned char* rax9;
    int64_t v10;

    __asm__("in al, 0xbd");
    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    tmp8_4 = reinterpret_cast<unsigned char>(*rax5 + al6);
    cf7 = tmp8_4 < *rax8;
    *rax9 = tmp8_4;
    if (cf7) {
    }
    goto v10;
}

void fun_42af5f(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fmul dword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_42b062() {
    signed char* rbp1;
    signed char* rbp2;
    int64_t v3;

    *rbp1 = reinterpret_cast<signed char>(*rbp2 >> 1);
    if (__intrinsic()) {
    }
    goto v3;
}

void fun_42b16b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("ror byte [rax+0x1], 0xd8");
    goto a20;
}

void fun_42b26e() {
    unsigned char dh1;
    unsigned char dh2;
    int64_t v3;

    __asm__("fnstcw word [rbp+0x0]");
    if (dh1 < dh2) {
    }
    goto v3;
}

void fun_42b377() {
}

void fun_42b37a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_42b47a() {
    unsigned char dh1;
    unsigned char dh2;
    int64_t v3;

    __asm__("int1 ");
    if (dh1 < dh2) {
    }
    goto v3;
}

int32_t fun_491ab6d2();

void fun_42b583(int64_t rdi, int64_t rsi, int64_t rdx, int32_t ecx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    fun_491ab6d2();
    goto a20;
}

void fun_42b685() {
    unsigned char dh1;
    unsigned char dh2;
    int64_t v3;

    __asm__("out dx, al");
    if (dh1 < dh2) {
    }
    goto v3;
}

struct s31 {
    signed char[1] pad1;
    int32_t 0x1;
};

struct s32 {
    signed char[1] pad1;
    int32_t 0x1;
};

void fun_42b78e(int64_t rdi, int64_t rsi) {
    struct s31* rax3;
    struct s32* rax4;
    int64_t v5;

    rax3->0x1 = rax4->0x1 - 1;
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v5;
}

void fun_42b891() {
    unsigned char dh1;
    unsigned char dh2;
    int64_t v3;

    __asm__("fnstcw word [rbp+0x0]");
    if (dh1 < dh2) {
    }
    goto v3;
}

void fun_42b99a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("enter 0x148, 0xd8");
    goto a20;
}

void fun_42ba9d() {
}

void fun_42baa0() {
    int1_t cf1;
    int64_t v2;

    if (cf1) {
    }
    goto v2;
}

struct s33 {
    signed char[1] pad1;
    signed char 0x1;
};

struct s34 {
    signed char[1] pad1;
    signed char 0x1;
};

void fun_42bba6(int64_t rdi, int64_t rsi) {
    struct s33* rax3;
    struct s34* rax4;
    int64_t v5;

    rax3->0x1 = reinterpret_cast<signed char>(rax4->0x1 - 1);
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v5;
}

void fun_42bca9() {
    int64_t rcx1;
    signed char dh2;
    signed char dh3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    unsigned char tmp8_7;
    signed char* rax8;
    signed char al9;
    int1_t cf10;
    unsigned char* rax11;
    unsigned char* rax12;
    int64_t v13;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & reinterpret_cast<uint1_t>(dh2 == dh3)) 
        goto 0x42bc6a;
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    tmp8_7 = reinterpret_cast<unsigned char>(*rax8 + al9);
    cf10 = tmp8_7 < *rax11;
    *rax12 = tmp8_7;
    if (cf10) {
    }
    goto v13;
}

void fun_42bdb2() {
}

void fun_42bdb5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_42beb5() {
    unsigned char dh1;
    unsigned char dh2;
    int64_t v3;

    __asm__("fstp tword [rbp+0x0]");
    if (dh1 < dh2) {
    }
    goto v3;
}

void fun_42bfbe() {
    return;
}

void fun_42c0c1() {
    unsigned char dh1;
    unsigned char dh2;
    int64_t v3;

    if (dh1 < dh2) {
    }
    goto v3;
}

void fun_42c1ca(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_42c2cd() {
    goto 0x42c28e;
}

void fun_42c3d6(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fimul word [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_42c4d9() {
}

void fun_42c4dc() {
    int1_t cf1;
    int64_t v2;

    if (cf1) {
    }
    goto v2;
}

void fun_42c5e2() {
}

void fun_42c5e5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_42c6e5() {
    unsigned char dh1;
    unsigned char dh2;
    int64_t v3;

    __asm__("out dx, eax");
    if (dh1 < dh2) {
    }
    goto v3;
}

void fun_42c7ee(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (!(reinterpret_cast<uint1_t>(!!(rcx - 1)) & reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx) + 1) == *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx) + 1)))) {
    }
    goto a20;
}

void fun_42c8f1() {
}

void fun_42c8f4() {
    int1_t cf1;
    int64_t v2;

    if (cf1) {
    }
    goto v2;
}

void fun_42c9fa(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fmul dword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_42cafd() {
}

void fun_42cb00() {
    int1_t cf1;
    int64_t v2;

    if (cf1) {
    }
    goto v2;
}

void fun_42cc06(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("in eax, dx");
    goto a20;
}

void fun_42cd09() {
    unsigned char dh1;
    unsigned char dh2;
    int64_t v3;

    __asm__("fidivr word [rbp+0x0]");
    if (dh1 < dh2) {
    }
    goto v3;
}

void fun_42ce12() {
}

void fun_42ce15(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_42cf15() {
    unsigned char dh1;
    unsigned char dh2;
    int64_t v3;

    __asm__("sti ");
    if (dh1 < dh2) {
    }
    goto v3;
}

void fun_42d01d(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

void fun_42d11f() {
    int64_t v1;

    __asm__("fistp qword [rbp+0x0]");
    goto v1;
}

void fun_42d21f(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fmul qword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_42d321(signed char* rdi) {
    signed char bh2;
    int64_t v3;

    fun_42d3e5();
    *rdi = reinterpret_cast<signed char>(*rdi + bh2);
    goto v3;
}

struct s35 {
    signed char[1] pad1;
    signed char 0x1;
};

struct s36 {
    signed char[1] pad1;
    signed char 0x1;
};

void fun_42d421(int64_t rdi, int64_t rsi) {
    struct s35* rax3;
    struct s36* rax4;
    int64_t v5;

    rax3->0x1 = reinterpret_cast<signed char>(rax4->0x1 - 1);
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v5;
}

void fun_42d523() {
    int64_t v1;

    __asm__("fnstcw word [rbp+0x0]");
    goto v1;
}

void fun_42d623(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fmul qword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_42d725() {
    int64_t v1;

    __asm__("cli ");
    goto v1;
}

void fun_42d825(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_42d927(signed char* rdi) {
    signed char* rax2;
    signed char* rax3;
    signed char al4;
    signed char bh5;
    int64_t v6;

    __asm__("retf 0xbd");
    *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
    *rdi = reinterpret_cast<signed char>(*rdi + bh5);
    goto v6;
}

int32_t fun_491adb76();

void fun_42da27(int64_t rdi, int64_t rsi, int64_t rdx, int32_t ecx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    fun_491adb76();
    goto a20;
}

void fun_42db29() {
    int64_t v1;

    __asm__("in eax, dx");
    goto v1;
}

void fun_42dc29() {
}

void fun_42dc2c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_42dd2b() {
    int64_t v1;

    __asm__("cli ");
    goto v1;
}

void fun_42de2b() {
}

void fun_42de2e(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_42df2d() {
    int64_t v1;

    goto v1;
}

void fun_42e02d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("cli ");
    goto a20;
}

void fun_42e12f() {
    int64_t v1;

    __asm__("in al, dx");
    goto v1;
}

void fun_42e22f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("sti ");
    goto a20;
}

void fun_42e331() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    int64_t v4;

    __asm__("enter 0xbd, 0x0");
    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    goto v4;
}

void fun_42e432(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_42e535() {
}

void fun_42e538() {
    int64_t v1;

    goto v1;
}

void fun_42e636(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_42e739() {
    int64_t v1;

    goto v1;
}

void fun_42e839(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fisttp dword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_42e93c() {
    int64_t v1;

    __asm__("in al, dx");
    goto v1;
}

void fun_42ea3d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("int1 ");
    goto a20;
}

void fun_42eb40() {
}

void fun_42eb43() {
    int64_t v1;

    goto v1;
}

void fun_42ec41(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_42ed44() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    int64_t v7;

    __asm__("in eax, 0xbd");
    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    goto v7;
}

void fun_42ee45(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("in eax, 0x48");
    goto a20;
}

void fun_42ef48() {
}

void fun_42ef4b() {
    int64_t v1;

    goto v1;
}

void fun_42f049(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("in eax, dx");
    goto a20;
}

void fun_42f14c() {
    int64_t v1;

    goto v1;
}

void fun_42f24d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_42f350() {
    goto 0x42f414;
}

struct s37 {
    signed char[1] pad1;
    int32_t 0x1;
};

struct s38 {
    signed char[1] pad1;
    int32_t 0x1;
};

void fun_42f451(int64_t rdi, int64_t rsi) {
    struct s37* rax3;
    struct s38* rax4;
    int64_t v5;

    rax3->0x1 = rax4->0x1 - 1;
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v5;
}

void fun_42f554() {
}

void fun_42f557() {
    int64_t v1;

    goto v1;
}

void fun_42f655(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("cli ");
    goto a20;
}

void fun_42f758() {
    int32_t* rbp1;
    int32_t* rbp2;
    int64_t v3;

    *rbp1 = *rbp2 >> 1;
    goto v3;
}

void fun_42f859(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_42f95d() {
    int64_t v1;

    __asm__("fidivr word [rbp+0x0]");
    goto v1;
}

void fun_42fa5e() {
}

void fun_42fa61(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_42fb61() {
    int64_t v1;

    goto v1;
}

void fun_42fc62() {
}

void fun_42fc65(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_42fd66() {
    int64_t v1;

    __asm__("out dx, al");
    goto v1;
}

void fun_42fe68(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_42ff6c() {
    int64_t v1;

    goto v1;
}

void fun_43006e(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fisttp word [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_430172() {
    int64_t v1;

    goto v1;
}

void fun_430274(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("out dx, eax");
    goto a20;
}

void fun_430378() {
    int64_t v1;

    __asm__("fdivr dword [rbp+0x0]");
    goto v1;
}

void fun_43047a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("enter 0x148, 0xd8");
    goto a20;
}

void fun_43057e() {
    int64_t v1;

    __asm__("fdivr qword [rbp+0x0]");
    goto v1;
}

void fun_430680(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("iretd ");
    goto a20;
}

void fun_430784() {
}

void fun_430787() {
    int64_t v1;

    goto v1;
}

void fun_430886(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fisttp word [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_43098a() {
    int64_t v1;

    __asm__("fidivr dword [rbp+0x0]");
    goto v1;
}

void fun_430a8c() {
    int64_t v1;

    goto v1;
}

void fun_430b8f() {
    return;
}

void fun_430c90() {
}

void fun_430c93(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_430d93() {
    int64_t v1;

    goto v1;
}

void fun_430e94(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fisttp qword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_430f97() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    int64_t v7;

    __asm__("in eax, 0xbd");
    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    goto v7;
}

void fun_431098(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("ror dword [rax+0x1], 1");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_43119b() {
    int64_t v1;

    __asm__("fstp tword [rbp+0x0]");
    goto v1;
}

void fun_43129c() {
}

void fun_43129f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_43139f() {
    int64_t v1;

    __asm__("fnstcw word [rbp+0x0]");
    goto v1;
}

void fun_4314a0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_4315a3() {
    int32_t* rbp1;
    int32_t* rbp2;
    signed char cl3;
    int64_t v4;

    *rbp1 = *rbp2 >> cl3;
    goto v4;
}

void fun_4316a4() {
}

void fun_4316a7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_4317a6() {
    return;
}

int32_t fun_491b19f6();

void fun_4318a7(int64_t rdi, int64_t rsi, int64_t rdx, int32_t ecx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    fun_491b19f6();
    goto a20;
}

void fun_4319aa() {
    int64_t v1;

    __asm__("iretd ");
    goto v1;
}

void fun_431aab(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (!(reinterpret_cast<uint1_t>(!!(rcx - 1)) & reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&rcx) != *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx) + 1)))) {
    }
    goto a20;
}

void fun_431bad() {
    void* rbp1;

    goto *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp1) + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8);
}

void fun_431cae(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("in eax, 0x48");
    goto a20;
}

void fun_431db0() {
}

void fun_431db3() {
    int64_t v1;

    goto v1;
}

void fun_431eb1() {
}

void fun_431eb4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_431fb4() {
    int64_t v1;

    __asm__("fistp qword [rbp+0x0]");
    goto v1;
}

void fun_4320b5() {
    __asm__("hlt ");
}

void fun_4321b8() {
}

void fun_4321bb() {
    int64_t v1;

    goto v1;
}

void fun_4322b9() {
}

void fun_4322bc(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_4323bc() {
}

void fun_4323bf() {
    int64_t v1;

    goto v1;
}

void fun_4324bd(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fimul dword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_4325c0() {
    int64_t v1;

    __asm__("fidivr word [rbp+0x0]");
    goto v1;
}

void fun_4326c1() {
}

void fun_4326c4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_4327c4() {
}

void fun_4327c7() {
    int64_t v1;

    goto v1;
}

void fun_4328c5() {
    return;
}

void fun_4329c8() {
    int32_t* rbp1;
    int32_t* rbp2;
    signed char cl3;
    int64_t v4;

    *rbp1 = *rbp2 >> cl3;
    goto v4;
}

void fun_432ac9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("sti ");
    goto a20;
}

void fun_432bcc() {
    int64_t v1;

    __asm__("fidivr word [rbp+0x0]");
    goto v1;
}

void fun_432ccd(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("sti ");
    goto a20;
}

void fun_432dd0() {
    int64_t v1;

    __asm__("int1 ");
    goto v1;
}

int32_t fun_491b3020();

void fun_432ed1(int64_t rdi, int64_t rsi, int64_t rdx, int32_t ecx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    fun_491b3020();
    goto a20;
}

void fun_432fd4() {
}

void fun_432fd7() {
    int64_t v1;

    goto v1;
}

void fun_4330d5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("ror byte [rax+0x1], 0xd8");
    goto a20;
}

void fun_4331d8() {
    return;
}

void fun_4332d9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_4333dc() {
    int16_t* rbp1;
    int16_t fpu_status_word2;
    int64_t v3;

    *rbp1 = fpu_status_word2;
    goto v3;
}

void fun_4334dd(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("int 0x48");
    goto a20;
}

void fun_4335e0() {
}

void fun_4335e3() {
    int64_t v1;

    goto v1;
}

void fun_4336e1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_4337e4() {
    int64_t v1;

    __asm__("in eax, dx");
    goto v1;
}

void fun_4338e5(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fimul word [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_4339e8() {
    int64_t v1;

    __asm__("fnstcw word [rbp+0x0]");
    goto v1;
}

void fun_433ae9(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("ror dword [rax+0x1], cl");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_433bec() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    int64_t v7;

    __asm__("out 0xbd, al");
    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    goto v7;
}

void fun_433ced(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("retf 0x148");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_433df0() {
    int64_t v1;

    goto v1;
}

void fun_433ef1() {
}

void fun_433ef4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_433ff4() {
}

void fun_433ff7() {
    int64_t v1;

    goto v1;
}

void fun_4340f5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("enter 0x148, 0xd8");
    goto a20;
}

void fun_4341f8() {
    int16_t* rbp1;
    int16_t fpu_status_word2;
    int64_t v3;

    *rbp1 = fpu_status_word2;
    goto v3;
}

void fun_4342f9(int64_t rdi, int64_t rsi, int64_t rdx, signed char cl, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_4343fc() {
    int64_t v1;

    __asm__("fistp qword [rbp+0x0]");
    goto v1;
}

void fun_4344fd(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("int 0x48");
    goto a20;
}

void fun_434600() {
    int64_t v1;

    goto v1;
}

struct s39 {
    signed char[1] pad1;
    int32_t 0x1;
};

struct s40 {
    signed char[1] pad1;
    int32_t 0x1;
};

void fun_434701(int64_t rdi, int64_t rsi) {
    struct s39* rax3;
    struct s40* rax4;
    int64_t v5;

    rax3->0x1 = rax4->0x1 - 1;
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v5;
}

void fun_434804() {
    int64_t v1;

    __asm__("fdivr dword [rbp+0x0]");
    goto v1;
}

void _init();

void fun_4384a3(int32_t edi, int64_t rsi, int64_t rdx) {
    int64_t r15_4;
    int64_t r14_5;
    int32_t r13d6;
    int64_t rbx7;
    int64_t rdi8;

    __asm__("cli ");
    r15_4 = rdx;
    r14_5 = rsi;
    r13d6 = edi;
    _init();
    if (!0) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r13d6;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x43ae10 + rbx7 * 8)(rdi8, r14_5, r15_4);
            ++rbx7;
        } while (1 != rbx7);
    }
    return;
}

void fun_438513() {
    __asm__("cli ");
    return;
}

void fun_43851b() {
    __asm__("cli ");
    return;
}

void fun_406b91() {
}

void fun_406c92() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    __asm__("fdivr qword [rbp+0x0]");
    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_406daa() {
    int64_t v1;

    goto v1;
}

void fun_406eac() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    __asm__("fnstcw word [rbp+0x0]");
    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

struct s41 {
    signed char[1] pad1;
    signed char 0x1;
};

struct s42 {
    signed char[1] pad1;
    signed char 0x1;
};

void fun_406fc4(int64_t rdi, int64_t rsi) {
    struct s41* rax3;
    struct s42* rax4;
    int64_t v5;

    rax3->0x1 = reinterpret_cast<signed char>(rax4->0x1 - 1);
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v5;
}

void fun_40782c(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fisttp dword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_407c61(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_407e7a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("int 0x48");
    goto a20;
}

void fun_4083b0() {
    return;
}

void fun_4084c8(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fmul qword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_4088fc(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("out dx, al");
    goto a20;
}

void fun_4089fe() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    __asm__("in eax, dx");
    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_408c18() {
    struct s0* rax1;
    unsigned char tmp8_2;
    unsigned char bh3;
    int1_t cf4;
    int64_t v5;

    rax1 = fun_408cda();
    tmp8_2 = reinterpret_cast<unsigned char>(rax1->0x1 + bh3);
    cf4 = tmp8_2 < rax1->0x1;
    rax1->0x1 = tmp8_2;
    if (cf4) {
    }
    if (__intrinsic()) {
    }
    if (reinterpret_cast<signed char>(rax1->0x1) < reinterpret_cast<signed char>(0)) {
    }
    goto v5;
}

void fun_40904c() {
    int1_t of1;
    int1_t sf2;
    int64_t v3;

    if (0) {
    }
    if (of1) {
    }
    if (sf2) {
    }
    goto v3;
}

void fun_40937e(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fmul qword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_409598(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fimul word [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_4097b2(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fmul dword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_4098b4() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    __asm__("fidivr dword [rbp+0x0]");
    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_409ce8() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    __asm__("fnstcw word [rbp+0x0]");
    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_40a668(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fisttp dword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_40a76a() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    __asm__("fdivr qword [rbp+0x0]");
    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_40ab9e() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    __asm__("fnstcw word [rbp+0x0]");
    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_40b0ea(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fimul dword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_40b1ec() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    __asm__("fistp qword [rbp+0x0]");
    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_40b51e(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fisttp qword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_40b620() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    __asm__("fdivr qword [rbp+0x0]");
    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_40b83a() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    __asm__("fidivr word [rbp+0x0]");
    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_40b952(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fmul dword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_40bc6e() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    __asm__("fstp tword [rbp+0x0]");
    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_40be88() {
    signed char* rbp1;
    signed char* rbp2;
    signed char cl3;
    int1_t of4;
    int64_t v5;

    *rbp1 = reinterpret_cast<signed char>(*rbp2 >> cl3);
    if (__intrinsic()) {
    }
    if (of4) {
    }
    if (__undefined()) {
    }
    goto v5;
}

void fun_40c5ee(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("xlatb ");
    goto a20;
}

void fun_40c6f0() {
    int32_t* rbp1;
    int32_t* rbp2;
    int1_t of3;
    int64_t v4;

    *rbp1 = *rbp2 >> 1;
    if (__intrinsic()) {
    }
    if (of3) {
    }
    if (__undefined()) {
    }
    goto v4;
}

void fun_40c90a() {
    int32_t* rbp1;
    int32_t* rbp2;
    signed char cl3;
    int1_t of4;
    int64_t v5;

    *rbp1 = *rbp2 >> cl3;
    if (__intrinsic()) {
    }
    if (of4) {
    }
    if (__undefined()) {
    }
    goto v5;
}

void fun_40cb24() {
    int32_t* rbp1;
    int32_t* rbp2;
    int1_t of3;
    int64_t v4;

    *rbp1 = *rbp2 >> 1;
    if (__intrinsic()) {
    }
    if (of3) {
    }
    if (__undefined()) {
    }
    goto v4;
}

void fun_40ce56(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("ror dword [rax+0x1], 1");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_40d070(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("ror dword [rax+0x1], 1");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_40d9da() {
    signed char* rbp1;
    signed char* rbp2;
    int1_t of3;
    int64_t v4;

    *rbp1 = reinterpret_cast<signed char>(*rbp2 >> 1);
    if (__intrinsic()) {
    }
    if (of3) {
    }
    if (__undefined()) {
    }
    goto v4;
}

void fun_40daf2(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("ror byte [rax+0x1], 1");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_40dd0c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("xlatb ");
    goto a20;
}

void fun_40e028() {
    signed char* rbp1;
    signed char* rbp2;
    int1_t of3;
    int64_t v4;

    *rbp1 = reinterpret_cast<signed char>(*rbp2 >> 1);
    if (__intrinsic()) {
    }
    if (of3) {
    }
    if (__undefined()) {
    }
    goto v4;
}

void fun_40e574(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("ror byte [rax+0x1], cl");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_40e676() {
    signed char* rbp1;
    signed char* rbp2;
    signed char cl3;
    int1_t of4;
    int64_t v5;

    *rbp1 = reinterpret_cast<signed char>(*rbp2 >> cl3);
    if (__intrinsic()) {
    }
    if (of4) {
    }
    if (__undefined()) {
    }
    goto v5;
}

void fun_40e9a8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("iretd ");
    goto a20;
}

void fun_40eddc(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("iretd ");
    goto a20;
}

void fun_40f0f8() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    void* rbp4;

    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp4) + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8);
}

void fun_40f210(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("enter 0x148, 0xd8");
    goto a20;
}

void fun_40f42a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    void* rbp7;

    goto *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp7) + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8);
}

void fun_40f644(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("int 0x48");
    goto a20;
}

void fun_40f85e(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("retf 0x148");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_40fa78(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("retf 0x148");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_4100c6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("int 0x48");
    goto a20;
}

void fun_4102e0(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("retf 0x148");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_4105fc() {
    unsigned char tmp8_1;
    signed char* rax2;
    signed char al3;
    int1_t cf4;
    unsigned char* rax5;
    unsigned char* rax6;
    signed char* rax7;
    int64_t v8;

    __asm__("enter 0xbd, 0x0");
    tmp8_1 = reinterpret_cast<unsigned char>(*rax2 + al3);
    cf4 = tmp8_1 < *rax5;
    *rax6 = tmp8_1;
    if (cf4) {
    }
    if (__intrinsic()) {
    }
    if (*rax7 < 0) {
    }
    goto v8;
}

void fun_410714(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("retf 0x148");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_41092e(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    void* rbp7;

    goto *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp7) + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8);
}

void fun_410a30() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    __asm__("retf ");
    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_410b48(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    void* rbp7;

    goto *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp7) + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8);
}

void fun_41107e() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    __asm__("retf ");
    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_4118ce() {
    signed char* rbp1;
    signed char* rbp2;
    int1_t of3;
    int64_t v4;

    *rbp1 = reinterpret_cast<signed char>(*rbp2 >> 1);
    if (__intrinsic()) {
    }
    if (of3) {
    }
    goto v4;
}

void fun_411bf0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_411cf2() {
    int1_t cf1;
    int1_t of2;
    int64_t v3;

    __asm__("fnstcw word [rbp+0x0]");
    if (cf1) {
    }
    if (of2) {
    }
    goto v3;
}

void fun_41285c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_412c80(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("ror dword [rax+0x1], 0xd8");
    goto a20;
}

void fun_412e92(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("ror dword [rax+0x1], 1");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_4137dc() {
    int1_t cf1;
    int1_t of2;
    int64_t v3;

    if (cf1) {
    }
    if (of2) {
    }
    goto v3;
}

void fun_4139ee() {
    int1_t cf1;
    int1_t of2;
    int64_t v3;

    __asm__("sti ");
    if (cf1) {
    }
    if (of2) {
    }
    goto v3;
}

struct s43 {
    signed char[1] pad1;
    signed char 0x1;
};

struct s44 {
    signed char[1] pad1;
    unsigned char 0x1;
};

struct s45 {
    signed char[1] pad1;
    unsigned char 0x1;
};

struct s46 {
    signed char[1] pad1;
    signed char 0x1;
};

void fun_413c05() {
    unsigned char tmp8_1;
    struct s43* rax2;
    signed char bh3;
    int1_t cf4;
    struct s44* rax5;
    struct s45* rax6;
    struct s46* rax7;
    int64_t v8;

    tmp8_1 = reinterpret_cast<unsigned char>(rax2->0x1 + bh3);
    cf4 = tmp8_1 < rax5->0x1;
    rax6->0x1 = tmp8_1;
    if (cf4) {
    }
    if (__intrinsic()) {
    }
    if (rax7->0x1 < 0) {
    }
    goto v8;
}

void fun_414682() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    __asm__("out dx, eax");
    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_41489c() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    __asm__("fstp tword [rbp+0x0]");
    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_414de8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_415002(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("enter 0x148, 0xd8");
    goto a20;
}

void fun_415436(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("retf ");
    goto a20;
}

void fun_415538() {
    int32_t* rbp1;
    int32_t* rbp2;
    int1_t of3;
    int64_t v4;

    *rbp1 = *rbp2 >> 1;
    if (__intrinsic()) {
    }
    if (of3) {
    }
    if (__undefined()) {
    }
    goto v4;
}

void fun_415c9e(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_415da0() {
    int1_t cf1;
    int1_t of2;
    int1_t sf3;
    int64_t v4;

    __asm__("fnstcw word [rbp+0x0]");
    if (cf1) {
    }
    if (of2) {
    }
    if (sf3) {
    }
    goto v4;
}

void fun_4163f0() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    unsigned char tmp8_4;
    signed char* rax5;
    signed char al6;
    int1_t cf7;
    unsigned char* rax8;
    unsigned char* rax9;
    signed char* rax10;
    int64_t v11;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    tmp8_4 = reinterpret_cast<unsigned char>(*rax5 + al6);
    cf7 = tmp8_4 < *rax8;
    *rax9 = tmp8_4;
    if (cf7) {
    }
    if (__intrinsic()) {
    }
    if (*rax10 < 0) {
    }
    goto v11;
}

void fun_416708(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    void* rbp7;

    goto *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp7) + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8);
}

void fun_416e10(int64_t rdi) {
    signed char* rbp2;
    signed char* rbp3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    signed char* rax7;
    signed char* rax8;
    signed char al9;
    int64_t v10;

    *rbp2 = reinterpret_cast<signed char>(*rbp3 >> -65);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    goto v10;
}

void fun_417012() {
    int64_t v1;

    __asm__("in eax, dx");
    goto v1;
}

void fun_417416(signed char* rdi) {
    signed char bh2;
    int64_t v3;

    fun_4174d8();
    *rdi = reinterpret_cast<signed char>(*rdi + bh2);
    goto v3;
}

void fun_417718(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("ror dword [rax+0x1], 1");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_417a1c() {
    int64_t v1;

    __asm__("cli ");
    goto v1;
}

void fun_417b1c() {
    __asm__("hlt ");
}

void fun_417d1e(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fisttp word [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_418122(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_418728(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("ror byte [rax+0x1], cl");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_418c2e() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    int64_t v4;

    __asm__("enter 0xbd, 0x0");
    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    goto v4;
}

void fun_418f30(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fimul word [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_41983a() {
    return;
}

void fun_419e40() {
    int64_t v1;

    goto v1;
}

void fun_41a142(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("iretd ");
    goto a20;
}

void fun_41a347(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_41a648() {
    int64_t v1;

    __asm__("fdivr dword [rbp+0x0]");
    goto v1;
}

void fun_41a84a() {
    int64_t v1;

    __asm__("fnstcw word [rbp+0x0]");
    goto v1;
}

void fun_41a94a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("ror byte [rax+0x1], 0xd8");
    goto a20;
}

void fun_41ac4e() {
    int64_t v1;

    __asm__("sti ");
    goto v1;
}

void fun_41b152(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (!rcx) {
    }
    goto a20;
}

void fun_41b354(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    if (!rcx) {
    }
    goto a20;
}

void fun_41b556(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("int 0x48");
    goto a20;
}

void fun_41bb5c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_41c162(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_41c364(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("ror byte [rax+0x1], 1");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_41c466() {
    goto 0x41c528;
}

void fun_41cc73(signed char* rdi) {
    signed char bh2;
    int64_t v3;

    *rdi = reinterpret_cast<signed char>(*rdi + bh2);
    goto v3;
}

void fun_41d274() {
    int32_t* rbp1;
    int32_t* rbp2;
    signed char cl3;
    int64_t v4;

    *rbp1 = *rbp2 >> cl3;
    goto v4;
}

void fun_41d376(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15) {
}

void fun_41dc7e() {
    int64_t v1;

    __asm__("xlatb ");
    goto v1;
}

void fun_41dd7c() {
    int1_t pf1;

    if (!pf1) 
        goto 0x41dd6e;
}

void fun_41dd83(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_41de7f(signed char* rdi, int32_t esi) {
    int1_t pf3;
    signed char bh4;
    int64_t v5;

    if (!pf3) 
        goto 0x41de71;
    *rdi = reinterpret_cast<signed char>(*rdi + bh4);
    goto v5;
}

struct s47 {
    signed char[1] pad1;
    uint32_t 0x1;
};

struct s48 {
    signed char[1] pad1;
    uint32_t 0x1;
};

void fun_41df80(int64_t rdi, int64_t rsi) {
    int1_t pf3;
    struct s47* rax4;
    struct s48* rax5;
    uint32_t ecx6;
    int64_t v7;

    if (!pf3) 
        goto 0x41df72;
    rax4->0x1 = rax5->0x1 | ecx6;
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v7;
}

void fun_41e68f() {
    int1_t pf1;
    int64_t v2;

    if (!pf1) 
        goto 0x41e681;
    goto v2;
}

void fun_41ea9b() {
    int64_t v1;

    goto v1;
}

void fun_41f7b0(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    __asm__("sti ");
    __asm__("lock in al, dx");
    goto v4;
}

void fun_41f9b4() {
    __asm__("sti ");
}

void fun_41fbbf(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_41ffc0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("sti ");
    __asm__("lock rol ecx, 1");
    goto a20;
}

void fun_420cd6() {
    int32_t* rbp1;
    int32_t* rbp2;
    int64_t v3;

    *rbp1 = *rbp2 >> 1;
    goto v3;
}

void fun_420dd6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_420ed8() {
    int64_t v1;

    goto v1;
}

void fun_4213dc(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    __asm__("ror byte [rax+0x1], 0xd8");
    goto a20;
}

void fun_4228f3() {
    int64_t v1;

    goto v1;
}

void fun_422cf6() {
    int64_t v1;

    __asm__("iretd ");
    goto v1;
}

void fun_4233fc(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_42420d(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_42440c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_424912(signed char* rdi) {
    signed char* rax2;
    signed char* rax3;
    signed char al4;
    signed char bh5;
    int64_t v6;

    __asm__("retf 0xbd");
    *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
    *rdi = reinterpret_cast<signed char>(*rdi + bh5);
    goto v6;
}

void fun_424b14() {
    int64_t v1;

    __asm__("xlatb ");
    goto v1;
}

void fun_424c17(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_42561f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_425820(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("ror byte [rax+0x1], cl");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_425d26() {
    int64_t v1;

    goto v1;
}

void fun_425e26(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fmul qword [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_42612a() {
    int64_t v1;

    goto v1;
}

void fun_42622a() {
    return;
}

void fun_42642c() {
    return;
}

void fun_426b34() {
    int64_t v1;

    goto v1;
}

void fun_426c33(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_426e36(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fisttp word [rax+0x1]");
    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_42733c() {
    int16_t* rbp1;
    int16_t fpu_status_word2;
    int64_t v3;

    *rbp1 = fpu_status_word2;
    goto v3;
}

void fun_427941() {
    int64_t v1;

    goto v1;
}

void fun_427b44() {
    int64_t v1;

    goto v1;
}

void fun_4290b1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_4293bf() {
    int1_t of1;
    int64_t v2;

    if (of1) {
    }
    goto v2;
}

void fun_429dfb() {
    int1_t of1;
    int64_t v2;

    if (of1) {
    }
    goto v2;
}

void fun_42bfc3(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

void fun_42c2d1() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    unsigned char tmp8_4;
    signed char* rax5;
    signed char al6;
    int1_t cf7;
    unsigned char* rax8;
    unsigned char* rax9;
    int64_t v10;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    tmp8_4 = reinterpret_cast<unsigned char>(*rax5 + al6);
    cf7 = tmp8_4 < *rax8;
    *rax9 = tmp8_4;
    if (cf7) {
    }
    goto v10;
}

void fun_42f357(signed char* rdi) {
    signed char bh2;
    int64_t v3;

    *rdi = reinterpret_cast<signed char>(*rdi + bh2);
    goto v3;
}

void fun_430a90(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15) {
}

void fun_430b94(signed char* rdi) {
    signed char* rax2;
    signed char* rax3;
    signed char al4;
    signed char bh5;
    int64_t v6;

    *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
    *rdi = reinterpret_cast<signed char>(*rdi + bh5);
    goto v6;
}

void fun_4317a9() {
    int64_t v1;

    goto v1;
}

void fun_4320b8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_4328c8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_4331db() {
    int64_t v1;

    goto v1;
}

int64_t g43b010 = 0;

void fun_401036() {
    goto g43b010;
}

void fun_406dac(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15) {
}

struct s49 {
    signed char[1] pad1;
    signed char 0x1;
};

struct s50 {
    signed char[1] pad1;
    unsigned char 0x1;
};

struct s51 {
    signed char[1] pad1;
    unsigned char 0x1;
};

struct s52 {
    signed char[1] pad1;
    signed char 0x1;
};

void fun_4083b3() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    unsigned char tmp8_4;
    struct s49* rax5;
    signed char bh6;
    int1_t cf7;
    struct s50* rax8;
    struct s51* rax9;
    struct s52* rax10;
    int64_t v11;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    tmp8_4 = reinterpret_cast<unsigned char>(rax5->0x1 + bh6);
    cf7 = tmp8_4 < rax8->0x1;
    rax9->0x1 = tmp8_4;
    if (cf7) {
    }
    if (__intrinsic()) {
    }
    if (rax10->0x1 < 0) {
    }
    goto v11;
}

void fun_417b1d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_41983b() {
    int64_t v1;

    goto v1;
}

void fun_41c46b(signed char* rdi) {
    signed char bh2;
    int64_t v3;

    *rdi = reinterpret_cast<signed char>(*rdi + bh2);
    goto v3;
}

void fun_42622b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20) {
    goto a20;
}

void fun_42642f(int64_t rdi, int64_t rsi) {
    int64_t v3;

    __asm__("fmul dword [rax+0x1]");
    __asm__("enter 0x148, 0xd0");
    goto v3;
}

int64_t main(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rax7;
    int64_t rax8;
    int64_t rax9;
    int64_t rax10;
    int64_t rax11;
    int64_t rax12;
    int64_t rax13;
    int64_t rax14;
    int64_t rax15;
    int64_t rax16;
    int64_t rax17;
    int64_t rax18;
    int64_t rax19;
    int64_t rax20;
    int64_t rax21;
    int64_t rax22;
    int64_t rax23;
    int64_t rax24;
    int64_t rax25;
    int64_t rax26;
    int64_t rax27;
    int64_t rax28;
    int64_t rax29;
    int64_t rax30;
    int64_t rax31;
    int64_t rax32;
    int64_t rax33;
    int64_t rax34;
    int64_t rax35;
    int64_t rax36;
    int64_t rax37;
    int64_t rax38;
    int64_t rax39;
    int64_t rax40;
    int64_t rax41;
    int64_t rax42;
    int64_t rax43;
    int64_t rax44;
    int64_t rax45;
    int64_t rax46;
    int64_t rax47;
    int64_t rax48;
    int64_t rax49;
    int64_t rax50;
    int64_t rax51;
    int64_t rax52;
    int64_t rax53;
    int64_t rax54;
    int64_t rax55;
    int64_t rax56;
    int64_t rax57;
    int64_t rax58;
    int64_t rax59;
    int64_t rax60;
    int64_t rax61;
    int64_t rax62;
    int64_t rax63;
    int64_t rax64;
    int64_t rax65;
    int64_t rax66;
    int64_t rax67;
    int64_t rax68;
    int64_t rax69;
    int64_t rax70;
    int64_t rax71;
    int64_t rax72;
    int64_t rax73;
    int64_t rax74;
    int64_t rax75;
    int64_t rax76;
    int64_t rax77;
    int64_t rax78;
    int64_t rax79;
    int64_t rax80;
    int64_t rax81;
    int64_t rax82;
    int64_t rax83;
    int64_t rax84;
    int64_t rax85;
    int64_t rax86;
    int64_t rax87;
    int64_t rax88;
    int64_t rax89;
    int64_t rax90;
    int64_t rax91;
    int64_t rax92;
    int64_t rax93;
    int64_t rax94;
    int64_t rax95;
    int64_t rax96;
    int64_t rax97;
    int64_t rax98;
    int64_t rax99;
    int64_t rax100;
    int64_t rax101;
    int64_t rax102;
    int64_t rax103;
    int64_t rax104;
    int64_t rax105;
    int64_t rax106;
    int64_t rax107;
    int64_t rax108;
    int64_t rax109;
    int64_t rax110;
    int64_t rax111;
    int64_t rax112;
    int64_t rax113;
    int64_t rax114;
    int64_t rax115;
    int64_t rax116;
    int64_t rax117;
    int64_t rax118;
    int64_t rax119;
    int64_t rax120;
    int64_t rax121;
    int64_t rax122;
    int64_t rax123;
    int64_t rax124;
    int64_t rax125;
    int64_t rax126;
    int64_t rax127;
    int64_t rax128;
    int64_t rax129;
    int64_t rax130;
    int64_t rax131;
    int64_t rax132;
    int64_t rax133;
    int64_t rax134;
    int64_t rax135;
    int64_t rax136;
    int64_t rax137;
    int64_t rax138;
    int64_t rax139;
    int64_t rax140;
    int64_t rax141;
    int64_t rax142;
    int64_t rax143;
    int64_t rax144;
    int64_t rax145;
    int64_t rax146;
    int64_t rax147;
    int64_t rax148;
    int64_t rax149;
    int64_t rax150;
    int64_t rax151;
    int64_t rax152;
    int64_t rax153;
    int64_t rax154;
    int64_t rax155;
    int64_t rax156;
    int64_t rax157;
    int64_t rax158;
    int64_t rax159;
    int64_t rax160;
    int64_t rax161;
    int64_t rax162;
    int64_t rax163;
    int64_t rax164;
    int64_t rax165;
    int64_t rax166;
    int64_t rax167;
    int64_t rax168;
    int64_t rax169;
    int64_t rax170;
    int64_t rax171;
    int64_t rax172;
    int64_t rax173;
    int64_t rax174;
    int64_t rax175;
    int64_t rax176;
    int64_t rax177;
    int64_t rax178;
    int64_t rax179;
    int64_t rax180;
    int64_t rax181;
    int64_t rax182;
    int64_t rax183;
    int64_t rax184;
    int64_t rax185;
    int64_t rax186;
    int64_t rax187;
    int64_t rax188;
    int64_t rax189;
    int64_t rax190;
    int64_t rax191;
    int64_t rax192;
    int64_t rax193;
    int64_t rax194;
    int64_t rax195;
    int64_t rax196;
    int64_t rax197;
    int64_t rax198;
    int64_t rax199;
    int64_t rax200;
    int64_t rax201;
    int64_t rax202;
    int64_t rax203;
    int64_t rax204;
    int64_t rax205;
    int64_t rax206;
    int64_t rax207;
    int64_t rax208;
    int64_t rax209;
    int64_t rax210;
    int64_t rax211;
    int64_t rax212;
    int64_t rax213;
    int64_t rax214;
    int64_t rax215;
    int64_t rax216;
    int64_t rax217;
    int64_t rax218;
    int64_t rax219;
    int64_t rax220;
    int64_t rax221;
    int64_t rax222;
    int64_t rax223;
    int64_t rax224;
    int64_t rax225;
    int64_t rax226;
    int64_t rax227;
    int64_t rax228;
    int64_t rax229;
    int64_t rax230;
    int64_t rax231;
    int64_t rax232;
    int64_t rax233;
    int64_t rax234;
    int64_t rax235;
    int64_t rax236;
    int64_t rax237;
    int64_t rax238;
    int64_t rax239;
    int64_t rax240;
    int64_t rax241;
    int64_t rax242;
    int64_t rax243;
    int64_t rax244;
    int64_t rax245;
    int64_t rax246;
    int64_t rax247;
    int64_t rax248;
    int64_t rax249;
    int64_t rax250;
    int64_t rax251;
    int64_t rax252;
    int64_t rax253;
    int64_t rax254;
    int64_t rax255;
    int64_t rax256;
    int64_t rax257;
    int64_t rax258;
    int64_t rax259;
    int64_t rax260;
    int64_t rax261;
    int64_t rax262;
    int64_t rax263;
    int64_t rax264;
    int64_t rax265;
    int64_t rax266;
    int64_t rax267;
    int64_t rax268;
    int64_t rax269;
    int64_t rax270;
    int64_t rax271;
    int64_t rax272;
    int64_t rax273;
    int64_t rax274;
    int64_t rax275;
    int64_t rax276;
    int64_t rax277;
    int64_t rax278;
    int64_t rax279;
    int64_t rax280;
    int64_t rax281;
    int64_t rax282;
    int64_t rax283;
    int64_t rax284;
    int64_t rax285;
    int64_t rax286;
    int64_t rax287;
    int64_t rax288;
    int64_t rax289;
    int64_t rax290;
    int64_t rax291;
    int64_t rax292;
    int64_t rax293;
    int64_t rax294;
    int64_t rax295;
    int64_t rax296;
    int64_t rax297;
    int64_t rax298;
    int64_t rax299;
    int64_t rax300;
    int64_t rax301;
    int64_t rax302;
    int64_t rax303;
    int64_t rax304;
    int64_t rax305;
    int64_t rax306;
    int64_t rax307;
    int64_t rax308;
    int64_t rax309;
    int64_t rax310;
    int64_t rax311;
    int64_t rax312;
    int64_t rax313;
    int64_t rax314;
    int64_t rax315;
    int64_t rax316;
    int64_t rax317;
    int64_t rax318;
    int64_t rax319;
    int64_t rax320;
    int64_t rax321;
    int64_t rax322;
    int64_t rax323;
    int64_t rax324;
    int64_t rax325;
    int64_t rax326;
    int64_t rax327;
    int64_t rax328;
    int64_t rax329;
    int64_t rax330;
    int64_t rax331;
    int64_t rax332;
    int64_t rax333;
    int64_t rax334;
    int64_t rax335;
    int64_t rax336;
    int64_t rax337;
    int64_t rax338;
    int64_t rax339;
    int64_t rax340;
    int64_t rax341;
    int64_t rax342;
    int64_t rax343;
    int64_t rax344;
    int64_t rax345;
    int64_t rax346;
    int64_t rax347;
    int64_t rax348;
    int64_t rax349;
    int64_t rax350;
    int64_t rax351;
    int64_t rax352;
    int64_t rax353;
    int64_t rax354;
    int64_t rax355;
    int64_t rax356;
    int64_t rax357;
    int64_t rax358;
    int64_t rax359;
    int64_t rax360;
    int64_t rax361;
    int64_t rax362;
    int64_t rax363;
    int64_t rax364;
    int64_t rax365;
    int64_t rax366;
    int64_t rax367;
    int64_t rax368;
    int64_t rax369;
    int64_t rax370;
    int64_t rax371;
    int64_t rax372;
    int64_t rax373;
    int64_t rax374;
    int64_t rax375;
    int64_t rax376;
    int64_t rax377;
    int64_t rax378;
    int64_t rax379;
    int64_t rax380;
    int64_t rax381;
    int64_t rax382;
    int64_t rax383;
    int64_t rax384;
    int64_t rax385;
    int64_t rax386;
    int64_t rax387;
    int64_t rax388;
    int64_t rax389;
    int64_t rax390;
    int64_t rax391;
    int64_t rax392;
    int64_t rax393;
    int64_t rax394;
    int64_t rax395;
    int64_t rax396;
    int64_t rax397;
    int64_t rax398;
    int64_t rax399;
    int64_t rax400;
    int64_t rax401;
    int64_t rax402;
    int64_t rax403;
    int64_t rax404;
    int64_t rax405;
    int64_t rax406;
    int64_t rax407;
    int64_t rax408;
    int64_t rax409;
    int64_t rax410;
    int64_t rax411;
    int64_t rax412;
    int64_t rax413;
    int64_t rax414;
    int64_t rax415;
    int64_t rax416;
    int64_t rax417;
    int64_t rax418;
    int64_t rax419;
    int64_t rax420;
    int64_t rax421;
    int64_t rax422;
    int64_t rax423;
    int64_t rax424;
    int64_t rax425;
    int64_t rax426;
    int64_t rax427;
    int64_t rax428;
    int64_t rax429;
    int64_t rax430;
    int64_t rax431;
    int64_t rax432;
    int64_t rax433;
    int64_t rax434;
    int64_t rax435;
    int64_t rax436;
    int64_t rax437;
    int64_t rax438;
    int64_t rax439;
    int64_t rax440;
    int64_t rax441;
    int64_t rax442;
    int64_t rax443;
    int64_t rax444;
    int64_t rax445;
    int64_t rax446;
    int64_t rax447;
    int64_t rax448;
    int64_t rax449;
    int64_t rax450;
    int64_t rax451;
    int64_t rax452;
    int64_t rax453;
    int64_t rax454;
    int64_t rax455;
    int64_t rax456;
    int64_t rax457;
    int64_t rax458;
    int64_t rax459;
    int64_t rax460;
    int64_t rax461;
    int64_t rax462;
    int64_t rax463;
    int64_t rax464;
    int64_t rax465;
    int64_t rax466;
    int64_t rax467;
    int64_t rax468;
    int64_t rax469;
    int64_t rax470;
    int64_t rax471;
    int64_t rax472;
    int64_t rax473;
    int64_t rax474;
    int64_t rax475;
    int64_t rax476;
    int64_t rax477;
    int64_t rax478;
    int64_t rax479;
    int64_t rax480;
    int64_t rax481;
    int64_t rax482;
    int64_t rax483;
    int64_t rax484;
    int64_t rax485;
    int64_t rax486;
    int64_t rax487;
    int64_t rax488;
    int64_t rax489;
    int64_t rax490;
    int64_t rax491;
    int64_t rax492;
    int64_t rax493;
    int64_t rax494;
    int64_t rax495;
    int64_t rax496;
    int64_t rax497;
    int64_t rax498;
    int64_t rax499;
    int64_t rax500;
    int64_t rax501;
    int64_t rax502;
    int64_t rax503;
    int64_t rax504;
    int64_t rax505;
    int64_t rax506;
    int64_t rax507;
    int64_t rax508;
    int64_t rax509;
    int64_t rax510;
    int64_t rax511;
    int64_t rax512;
    int64_t rax513;
    int64_t rax514;
    int64_t rax515;
    int64_t rax516;
    int64_t rax517;
    int64_t rax518;
    int64_t rax519;
    int64_t rax520;
    int64_t rax521;
    int64_t rax522;
    int64_t rax523;
    int64_t rax524;
    int64_t rax525;
    int64_t rax526;
    int64_t rax527;
    int64_t rax528;
    int64_t rax529;
    int64_t rax530;
    int64_t rax531;
    int64_t rax532;
    int64_t rax533;
    int64_t rax534;
    int64_t rax535;
    int64_t rax536;
    int64_t rax537;
    int64_t rax538;
    int64_t rax539;
    int64_t rax540;
    int64_t rax541;
    int64_t rax542;
    int64_t rax543;
    int64_t rax544;
    int64_t rax545;
    int64_t rax546;
    int64_t rax547;
    int64_t rax548;
    int64_t rax549;
    int64_t rax550;
    int64_t rax551;
    int64_t rax552;
    int64_t rax553;
    int64_t rax554;
    int64_t rax555;
    int64_t rax556;
    int64_t rax557;
    int64_t rax558;
    int64_t rax559;
    int64_t rax560;
    int64_t rax561;
    int64_t rax562;
    int64_t rax563;
    int64_t rax564;
    int64_t rax565;
    int64_t rax566;
    int64_t rax567;
    int64_t rax568;
    int64_t rax569;
    int64_t rax570;
    int64_t rax571;
    int64_t rax572;
    int64_t rax573;
    int64_t rax574;
    int64_t rax575;
    int64_t rax576;
    int64_t rax577;
    int64_t rax578;
    int64_t rax579;
    int64_t rax580;
    int64_t rax581;
    int64_t rax582;
    int64_t rax583;
    int64_t rax584;
    int64_t rax585;
    int64_t rax586;
    int64_t rax587;
    int64_t rax588;
    int64_t rax589;
    int64_t rax590;
    int64_t rax591;
    int64_t rax592;
    int64_t rax593;
    int64_t rax594;
    int64_t rax595;
    int64_t rax596;
    int64_t rax597;
    int64_t rax598;
    int64_t rax599;
    int64_t rax600;
    int64_t rax601;
    int64_t rax602;
    int64_t rax603;
    int64_t rax604;
    int64_t rax605;
    int64_t rax606;
    int64_t rax607;
    int64_t rax608;
    int64_t rax609;
    int64_t rax610;
    int64_t rax611;
    int64_t rax612;
    int64_t rax613;
    int64_t rax614;
    int64_t rax615;
    int64_t rax616;
    int64_t rax617;
    int64_t rax618;
    int64_t rax619;
    int64_t rax620;
    int64_t rax621;
    int64_t rax622;
    int64_t rax623;
    int64_t rax624;
    int64_t rax625;
    int64_t rax626;
    int64_t rax627;
    int64_t rax628;
    int64_t rax629;
    int64_t rax630;
    int64_t rax631;
    int64_t rax632;
    int64_t rax633;
    int64_t rax634;
    int64_t rax635;
    int64_t rax636;
    int64_t rax637;
    int64_t rax638;
    int64_t rax639;
    int64_t rax640;
    int64_t rax641;
    int64_t rax642;
    int64_t rax643;
    int64_t rax644;
    int64_t rax645;
    int64_t rax646;
    int64_t rax647;
    int64_t rax648;
    int64_t rax649;
    int64_t rax650;
    int64_t rax651;
    int64_t rax652;
    int64_t rax653;
    int64_t rax654;
    int64_t rax655;
    int64_t rax656;
    int64_t rax657;
    int64_t rax658;
    int64_t rax659;
    int64_t rax660;
    int64_t rax661;
    int64_t rax662;
    int64_t rax663;
    int64_t rax664;
    int64_t rax665;
    int64_t rax666;
    int64_t rax667;
    int64_t rax668;
    int64_t rax669;
    int64_t rax670;
    int64_t rax671;
    int64_t rax672;
    int64_t rax673;
    int64_t rax674;
    int64_t rax675;
    int64_t rax676;
    int64_t rax677;
    int64_t rax678;
    int64_t rax679;
    int64_t rax680;
    int64_t rax681;
    int64_t rax682;
    int64_t rax683;
    int64_t rax684;
    int64_t rax685;
    int64_t rax686;
    int64_t rax687;
    int64_t rax688;
    int64_t rax689;
    int64_t rax690;
    int64_t rax691;
    int64_t rax692;
    int64_t rax693;
    int64_t rax694;
    int64_t rax695;
    int64_t rax696;
    int64_t rax697;
    int64_t rax698;
    int64_t rax699;
    int64_t rax700;
    int64_t rax701;
    int64_t rax702;
    int64_t rax703;
    int64_t rax704;
    int64_t rax705;
    int64_t rax706;
    int64_t rax707;
    int64_t rax708;
    int64_t rax709;
    int64_t rax710;
    int64_t rax711;
    int64_t rax712;
    int64_t rax713;
    int64_t rax714;
    int64_t rax715;
    int64_t rax716;
    int64_t rax717;
    int64_t rax718;
    int64_t rax719;
    int64_t rax720;
    int64_t rax721;
    int64_t rax722;
    int64_t rax723;
    int64_t rax724;
    int64_t rax725;
    int64_t rax726;
    int64_t rax727;
    int64_t rax728;
    int64_t rax729;
    int64_t rax730;
    int64_t rax731;
    int64_t rax732;
    int64_t rax733;
    int64_t rax734;
    int64_t rax735;
    int64_t rax736;
    int64_t rax737;
    int64_t rax738;
    int64_t rax739;
    int64_t rax740;
    int64_t rax741;
    int64_t rax742;
    int64_t rax743;
    int64_t rax744;
    int64_t rax745;
    int64_t rax746;
    int64_t rax747;
    int64_t rax748;
    int64_t rax749;
    int64_t rax750;
    int64_t rax751;
    int64_t rax752;
    int64_t rax753;
    int64_t rax754;
    int64_t rax755;
    int64_t rax756;
    int64_t rax757;
    int64_t rax758;
    int64_t rax759;
    int64_t rax760;
    int64_t rax761;
    int64_t rax762;
    int64_t rax763;
    int64_t rax764;
    int64_t rax765;
    int64_t rax766;
    int64_t rax767;
    int64_t rax768;
    int64_t rax769;
    int64_t rax770;
    int64_t rax771;
    int64_t rax772;
    int64_t rax773;
    int64_t rax774;
    int64_t rax775;
    int64_t rax776;
    int64_t rax777;
    int64_t rax778;
    int64_t rax779;
    int64_t rax780;
    int64_t rax781;
    int64_t rax782;
    int64_t rax783;
    int64_t rax784;
    int64_t rax785;
    int64_t rax786;
    int64_t rax787;
    int64_t rax788;
    int64_t rax789;
    int64_t rax790;
    int64_t rax791;
    int64_t rax792;
    int64_t rax793;
    int64_t rax794;
    int64_t rax795;
    int64_t rax796;
    int64_t rax797;
    int64_t rax798;
    int64_t rax799;
    int64_t rax800;
    int64_t rax801;
    int64_t rax802;
    int64_t rax803;
    int64_t rax804;
    int64_t rax805;
    int64_t rax806;
    int64_t rax807;
    int64_t rax808;
    int64_t rax809;
    int64_t rax810;
    int64_t rax811;
    int64_t rax812;
    int64_t rax813;
    int64_t rax814;
    int64_t rax815;
    int64_t rax816;
    int64_t rax817;
    int64_t rax818;
    int64_t rax819;
    int64_t rax820;
    int64_t rax821;
    int64_t rax822;
    int64_t rax823;
    int64_t rax824;
    int64_t rax825;
    int64_t rax826;
    int64_t rax827;
    int64_t rax828;
    int64_t rax829;
    int64_t rax830;
    int64_t rax831;
    int64_t rax832;
    int64_t rax833;
    int64_t rax834;
    int64_t rax835;
    int64_t rax836;
    int64_t rax837;
    int64_t rax838;
    int64_t rax839;
    int64_t rax840;
    int64_t rax841;
    int64_t rax842;
    int64_t rax843;
    int64_t rax844;
    int64_t rax845;
    int64_t rax846;

    rax7 = inst_0_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax8 = inst_0_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax9 = inst_0_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax10 = inst_0_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax11 = inst_0_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax12 = inst_0_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax13 = inst_0_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax14 = inst_0_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax15 = inst_0_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax16 = inst_0_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax17 = inst_0_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax18 = inst_0_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax19 = inst_0_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax20 = inst_0_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax21 = inst_0_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax22 = inst_0_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax23 = inst_0_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax24 = inst_0_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax25 = inst_0_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax26 = inst_0_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax27 = inst_1_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax28 = inst_1_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax29 = inst_1_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax30 = inst_1_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax31 = inst_1_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax32 = inst_1_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax33 = inst_1_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax34 = inst_1_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax35 = inst_1_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax36 = inst_1_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax37 = inst_1_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax38 = inst_1_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax39 = inst_1_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax40 = inst_1_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax41 = inst_1_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax42 = inst_1_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax43 = inst_1_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax44 = inst_1_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax45 = inst_1_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax46 = inst_1_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax47 = inst_2_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax48 = inst_2_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax49 = inst_2_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax50 = inst_2_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax51 = inst_2_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax52 = inst_2_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax53 = inst_2_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax54 = inst_2_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax55 = inst_2_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax56 = inst_2_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax57 = inst_2_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax58 = inst_2_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax59 = inst_2_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax60 = inst_2_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax61 = inst_2_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax62 = inst_2_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax63 = inst_2_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax64 = inst_2_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax65 = inst_2_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax66 = inst_2_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax67 = inst_3_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax68 = inst_3_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax69 = inst_3_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax70 = inst_3_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax71 = inst_3_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax72 = inst_3_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax73 = inst_3_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax74 = inst_3_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax75 = inst_3_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax76 = inst_3_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax77 = inst_3_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax78 = inst_3_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax79 = inst_3_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax80 = inst_3_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax81 = inst_3_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax82 = inst_3_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax83 = inst_3_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax84 = inst_3_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax85 = inst_3_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax86 = inst_3_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax87 = inst_4_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax88 = inst_4_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax89 = inst_4_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax90 = inst_4_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax91 = inst_4_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax92 = inst_4_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax93 = inst_4_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax94 = inst_4_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax95 = inst_4_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax96 = inst_4_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax97 = inst_4_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax98 = inst_4_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax99 = inst_4_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax100 = inst_4_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax101 = inst_4_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax102 = inst_4_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax103 = inst_4_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax104 = inst_4_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax105 = inst_4_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax106 = inst_4_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax107 = inst_5_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax108 = inst_5_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax109 = inst_5_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax110 = inst_5_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax111 = inst_5_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax112 = inst_5_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax113 = inst_5_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax114 = inst_5_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax115 = inst_5_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax116 = inst_5_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax117 = inst_5_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax118 = inst_5_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax119 = inst_5_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax120 = inst_5_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax121 = inst_5_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax122 = inst_5_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax123 = inst_5_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax124 = inst_5_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax125 = inst_5_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax126 = inst_5_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax127 = inst_6_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax128 = inst_6_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax129 = inst_6_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax130 = inst_6_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax131 = inst_6_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax132 = inst_6_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax133 = inst_6_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax134 = inst_6_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax135 = inst_6_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax136 = inst_6_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax137 = inst_6_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax138 = inst_6_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax139 = inst_6_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax140 = inst_6_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax141 = inst_6_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax142 = inst_6_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax143 = inst_6_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax144 = inst_6_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax145 = inst_6_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax146 = inst_6_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax147 = inst_7_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax148 = inst_7_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax149 = inst_7_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax150 = inst_7_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax151 = inst_7_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax152 = inst_7_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax153 = inst_7_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax154 = inst_7_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax155 = inst_7_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax156 = inst_7_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax157 = inst_7_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax158 = inst_7_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax159 = inst_7_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax160 = inst_7_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax161 = inst_7_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax162 = inst_7_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax163 = inst_7_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax164 = inst_7_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax165 = inst_7_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax166 = inst_7_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax167 = inst_8_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax168 = inst_8_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax169 = inst_8_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax170 = inst_8_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax171 = inst_8_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax172 = inst_8_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax173 = inst_8_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax174 = inst_8_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax175 = inst_8_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax176 = inst_8_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax177 = inst_8_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax178 = inst_8_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax179 = inst_8_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax180 = inst_8_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax181 = inst_8_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax182 = inst_8_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax183 = inst_8_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax184 = inst_8_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax185 = inst_8_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax186 = inst_8_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax187 = inst_9_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax188 = inst_9_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax189 = inst_9_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax190 = inst_9_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax191 = inst_9_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax192 = inst_9_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax193 = inst_9_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax194 = inst_9_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax195 = inst_9_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax196 = inst_9_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax197 = inst_9_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax198 = inst_9_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax199 = inst_9_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax200 = inst_9_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax201 = inst_9_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax202 = inst_9_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax203 = inst_9_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax204 = inst_9_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax205 = inst_9_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax206 = inst_9_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax207 = inst_10_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax208 = inst_10_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax209 = inst_10_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax210 = inst_10_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax211 = inst_10_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax212 = inst_10_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax213 = inst_10_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax214 = inst_10_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax215 = inst_10_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax216 = inst_10_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax217 = inst_10_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax218 = inst_10_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax219 = inst_10_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax220 = inst_10_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax221 = inst_10_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax222 = inst_10_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax223 = inst_10_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax224 = inst_10_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax225 = inst_10_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax226 = inst_10_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax227 = inst_11_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax228 = inst_11_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax229 = inst_11_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax230 = inst_11_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax231 = inst_11_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax232 = inst_11_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax233 = inst_11_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax234 = inst_11_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax235 = inst_11_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax236 = inst_11_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax237 = inst_11_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax238 = inst_11_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax239 = inst_11_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax240 = inst_11_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax241 = inst_11_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax242 = inst_11_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax243 = inst_11_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax244 = inst_11_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax245 = inst_11_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax246 = inst_11_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax247 = inst_12_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax248 = inst_12_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax249 = inst_12_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax250 = inst_12_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax251 = inst_12_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax252 = inst_12_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax253 = inst_12_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax254 = inst_12_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax255 = inst_12_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax256 = inst_12_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax257 = inst_12_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax258 = inst_12_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax259 = inst_12_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax260 = inst_12_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax261 = inst_12_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax262 = inst_12_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax263 = inst_12_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax264 = inst_12_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax265 = inst_12_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax266 = inst_12_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax267 = inst_13_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax268 = inst_13_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax269 = inst_13_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax270 = inst_13_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax271 = inst_13_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax272 = inst_13_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax273 = inst_13_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax274 = inst_13_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax275 = inst_13_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax276 = inst_13_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax277 = inst_13_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax278 = inst_13_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax279 = inst_13_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax280 = inst_13_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax281 = inst_13_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax282 = inst_13_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax283 = inst_13_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax284 = inst_13_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax285 = inst_13_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax286 = inst_13_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax287 = inst_14_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax288 = inst_14_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax289 = inst_14_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax290 = inst_14_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax291 = inst_14_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax292 = inst_14_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax293 = inst_14_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax294 = inst_14_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax295 = inst_14_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax296 = inst_14_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax297 = inst_14_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax298 = inst_14_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax299 = inst_14_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax300 = inst_14_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax301 = inst_14_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax302 = inst_14_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax303 = inst_14_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax304 = inst_14_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax305 = inst_14_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax306 = inst_14_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax307 = inst_15_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax308 = inst_15_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax309 = inst_15_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax310 = inst_15_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax311 = inst_15_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax312 = inst_15_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax313 = inst_15_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax314 = inst_15_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax315 = inst_15_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax316 = inst_15_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax317 = inst_15_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax318 = inst_15_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax319 = inst_15_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax320 = inst_15_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax321 = inst_15_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax322 = inst_15_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax323 = inst_15_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax324 = inst_15_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax325 = inst_15_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax326 = inst_15_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax327 = inst_16_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax328 = inst_16_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax329 = inst_16_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax330 = inst_16_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax331 = inst_16_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax332 = inst_16_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax333 = inst_16_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax334 = inst_16_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax335 = inst_16_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax336 = inst_16_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax337 = inst_16_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax338 = inst_16_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax339 = inst_16_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax340 = inst_16_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax341 = inst_16_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax342 = inst_16_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax343 = inst_16_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax344 = inst_16_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax345 = inst_16_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax346 = inst_16_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax347 = inst_17_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax348 = inst_17_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax349 = inst_17_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax350 = inst_17_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax351 = inst_17_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax352 = inst_17_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax353 = inst_17_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax354 = inst_17_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax355 = inst_17_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax356 = inst_17_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax357 = inst_17_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax358 = inst_17_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax359 = inst_17_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax360 = inst_17_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax361 = inst_17_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax362 = inst_17_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax363 = inst_17_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax364 = inst_17_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax365 = inst_17_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax366 = inst_17_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax367 = inst_18_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax368 = inst_18_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax369 = inst_18_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax370 = inst_18_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax371 = inst_18_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax372 = inst_18_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax373 = inst_18_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax374 = inst_18_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax375 = inst_18_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax376 = inst_18_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax377 = inst_18_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax378 = inst_18_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax379 = inst_18_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax380 = inst_18_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax381 = inst_18_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax382 = inst_18_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax383 = inst_18_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax384 = inst_18_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax385 = inst_18_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax386 = inst_18_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax387 = inst_19_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax388 = inst_19_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax389 = inst_19_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax390 = inst_19_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax391 = inst_19_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax392 = inst_19_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax393 = inst_19_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax394 = inst_19_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax395 = inst_19_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax396 = inst_19_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax397 = inst_19_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax398 = inst_19_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax399 = inst_19_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax400 = inst_19_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax401 = inst_19_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax402 = inst_19_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax403 = inst_19_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax404 = inst_19_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax405 = inst_19_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax406 = inst_19_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax407 = inst_20_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax408 = inst_20_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax409 = inst_20_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax410 = inst_20_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax411 = inst_20_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax412 = inst_20_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax413 = inst_20_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax414 = inst_20_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax415 = inst_20_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax416 = inst_20_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax417 = inst_20_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax418 = inst_20_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax419 = inst_20_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax420 = inst_20_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax421 = inst_20_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax422 = inst_20_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax423 = inst_20_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax424 = inst_20_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax425 = inst_20_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax426 = inst_20_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax427 = inst_21_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax428 = inst_21_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax429 = inst_21_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax430 = inst_21_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax431 = inst_21_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax432 = inst_21_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax433 = inst_21_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax434 = inst_21_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax435 = inst_21_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax436 = inst_21_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax437 = inst_21_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax438 = inst_21_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax439 = inst_21_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax440 = inst_21_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax441 = inst_21_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax442 = inst_21_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax443 = inst_21_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax444 = inst_21_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax445 = inst_21_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax446 = inst_21_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax447 = inst_22_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax448 = inst_22_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax449 = inst_22_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax450 = inst_22_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax451 = inst_22_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax452 = inst_22_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax453 = inst_22_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax454 = inst_22_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax455 = inst_22_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax456 = inst_22_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax457 = inst_22_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax458 = inst_22_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax459 = inst_22_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax460 = inst_22_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax461 = inst_22_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax462 = inst_22_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax463 = inst_22_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax464 = inst_22_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax465 = inst_22_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax466 = inst_22_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax467 = inst_23_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax468 = inst_23_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax469 = inst_23_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax470 = inst_23_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax471 = inst_23_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax472 = inst_23_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax473 = inst_23_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax474 = inst_23_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax475 = inst_23_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax476 = inst_23_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax477 = inst_23_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax478 = inst_23_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax479 = inst_23_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax480 = inst_23_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax481 = inst_23_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax482 = inst_23_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax483 = inst_23_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax484 = inst_23_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax485 = inst_23_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax486 = inst_23_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax487 = inst_24_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax488 = inst_24_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax489 = inst_24_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax490 = inst_24_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax491 = inst_24_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax492 = inst_24_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax493 = inst_24_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax494 = inst_24_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax495 = inst_24_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax496 = inst_24_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax497 = inst_24_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax498 = inst_24_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax499 = inst_24_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax500 = inst_24_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax501 = inst_24_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax502 = inst_24_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax503 = inst_24_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax504 = inst_24_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax505 = inst_24_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax506 = inst_24_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax507 = inst_25_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax508 = inst_25_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax509 = inst_25_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax510 = inst_25_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax511 = inst_25_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax512 = inst_25_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax513 = inst_25_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax514 = inst_25_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax515 = inst_25_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax516 = inst_25_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax517 = inst_25_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax518 = inst_25_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax519 = inst_25_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax520 = inst_25_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax521 = inst_25_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax522 = inst_25_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax523 = inst_25_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax524 = inst_25_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax525 = inst_25_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax526 = inst_25_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax527 = inst_26_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax528 = inst_26_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax529 = inst_26_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax530 = inst_26_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax531 = inst_26_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax532 = inst_26_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax533 = inst_26_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax534 = inst_26_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax535 = inst_26_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax536 = inst_26_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax537 = inst_26_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax538 = inst_26_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax539 = inst_26_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax540 = inst_26_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax541 = inst_26_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax542 = inst_26_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax543 = inst_26_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax544 = inst_26_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax545 = inst_26_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax546 = inst_26_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax547 = inst_27_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax548 = inst_27_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax549 = inst_27_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax550 = inst_27_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax551 = inst_27_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax552 = inst_27_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax553 = inst_27_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax554 = inst_27_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax555 = inst_27_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax556 = inst_27_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax557 = inst_27_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax558 = inst_27_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax559 = inst_27_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax560 = inst_27_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax561 = inst_27_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax562 = inst_27_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax563 = inst_27_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax564 = inst_27_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax565 = inst_27_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax566 = inst_27_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax567 = inst_28_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax568 = inst_28_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax569 = inst_28_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax570 = inst_28_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax571 = inst_28_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax572 = inst_28_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax573 = inst_28_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax574 = inst_28_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax575 = inst_28_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax576 = inst_28_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax577 = inst_28_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax578 = inst_28_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax579 = inst_28_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax580 = inst_28_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax581 = inst_28_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax582 = inst_28_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax583 = inst_28_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax584 = inst_28_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax585 = inst_28_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax586 = inst_28_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax587 = inst_29_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax588 = inst_29_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax589 = inst_29_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax590 = inst_29_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax591 = inst_29_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax592 = inst_29_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax593 = inst_29_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax594 = inst_29_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax595 = inst_29_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax596 = inst_29_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax597 = inst_29_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax598 = inst_29_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax599 = inst_29_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax600 = inst_29_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax601 = inst_29_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax602 = inst_29_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax603 = inst_29_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax604 = inst_29_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax605 = inst_29_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax606 = inst_29_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax607 = inst_30_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax608 = inst_30_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax609 = inst_30_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax610 = inst_30_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax611 = inst_30_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax612 = inst_30_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax613 = inst_30_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax614 = inst_30_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax615 = inst_30_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax616 = inst_30_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax617 = inst_30_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax618 = inst_30_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax619 = inst_30_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax620 = inst_30_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax621 = inst_30_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax622 = inst_30_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax623 = inst_30_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax624 = inst_30_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax625 = inst_30_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax626 = inst_30_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax627 = inst_31_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax628 = inst_31_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax629 = inst_31_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax630 = inst_31_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax631 = inst_31_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax632 = inst_31_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax633 = inst_31_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax634 = inst_31_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax635 = inst_31_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax636 = inst_31_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax637 = inst_31_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax638 = inst_31_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax639 = inst_31_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax640 = inst_31_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax641 = inst_31_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax642 = inst_31_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax643 = inst_31_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax644 = inst_31_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax645 = inst_31_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax646 = inst_31_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax647 = inst_32_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax648 = inst_32_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax649 = inst_32_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax650 = inst_32_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax651 = inst_32_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax652 = inst_32_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax653 = inst_32_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax654 = inst_32_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax655 = inst_32_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax656 = inst_32_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax657 = inst_32_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax658 = inst_32_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax659 = inst_32_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax660 = inst_32_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax661 = inst_32_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax662 = inst_32_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax663 = inst_32_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax664 = inst_32_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax665 = inst_32_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax666 = inst_32_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax667 = inst_33_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax668 = inst_33_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax669 = inst_33_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax670 = inst_33_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax671 = inst_33_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax672 = inst_33_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax673 = inst_33_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax674 = inst_33_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax675 = inst_33_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax676 = inst_33_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax677 = inst_33_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax678 = inst_33_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax679 = inst_33_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax680 = inst_33_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax681 = inst_33_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax682 = inst_33_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax683 = inst_33_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax684 = inst_33_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax685 = inst_33_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax686 = inst_33_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax687 = inst_34_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax688 = inst_34_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax689 = inst_34_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax690 = inst_34_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax691 = inst_34_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax692 = inst_34_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax693 = inst_34_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax694 = inst_34_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax695 = inst_34_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax696 = inst_34_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax697 = inst_34_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax698 = inst_34_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax699 = inst_34_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax700 = inst_34_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax701 = inst_34_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax702 = inst_34_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax703 = inst_34_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax704 = inst_34_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax705 = inst_34_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax706 = inst_34_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax707 = inst_35_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax708 = inst_35_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax709 = inst_35_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax710 = inst_35_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax711 = inst_35_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax712 = inst_35_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax713 = inst_35_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax714 = inst_35_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax715 = inst_35_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax716 = inst_35_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax717 = inst_35_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax718 = inst_35_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax719 = inst_35_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax720 = inst_35_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax721 = inst_35_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax722 = inst_35_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax723 = inst_35_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax724 = inst_35_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax725 = inst_35_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax726 = inst_35_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax727 = inst_36_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax728 = inst_36_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax729 = inst_36_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax730 = inst_36_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax731 = inst_36_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax732 = inst_36_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax733 = inst_36_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax734 = inst_36_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax735 = inst_36_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax736 = inst_36_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax737 = inst_36_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax738 = inst_36_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax739 = inst_36_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax740 = inst_36_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax741 = inst_36_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax742 = inst_36_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax743 = inst_36_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax744 = inst_36_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax745 = inst_36_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax746 = inst_36_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax747 = inst_37_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax748 = inst_37_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax749 = inst_37_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax750 = inst_37_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax751 = inst_37_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax752 = inst_37_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax753 = inst_37_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax754 = inst_37_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax755 = inst_37_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax756 = inst_37_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax757 = inst_37_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax758 = inst_37_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax759 = inst_37_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax760 = inst_37_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax761 = inst_37_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax762 = inst_37_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax763 = inst_37_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax764 = inst_37_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax765 = inst_37_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax766 = inst_37_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax767 = inst_38_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax768 = inst_38_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax769 = inst_38_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax770 = inst_38_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax771 = inst_38_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax772 = inst_38_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax773 = inst_38_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax774 = inst_38_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax775 = inst_38_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax776 = inst_38_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax777 = inst_38_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax778 = inst_38_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax779 = inst_38_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax780 = inst_38_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax781 = inst_38_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax782 = inst_38_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax783 = inst_38_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax784 = inst_38_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax785 = inst_38_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax786 = inst_38_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax787 = inst_39_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax788 = inst_39_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax789 = inst_39_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax790 = inst_39_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax791 = inst_39_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax792 = inst_39_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax793 = inst_39_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax794 = inst_39_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax795 = inst_39_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax796 = inst_39_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax797 = inst_39_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax798 = inst_39_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax799 = inst_39_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax800 = inst_39_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax801 = inst_39_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax802 = inst_39_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax803 = inst_39_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax804 = inst_39_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax805 = inst_39_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax806 = inst_39_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax807 = inst_40_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax808 = inst_40_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax809 = inst_40_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax810 = inst_40_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax811 = inst_40_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax812 = inst_40_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax813 = inst_40_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax814 = inst_40_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax815 = inst_40_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax816 = inst_40_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax817 = inst_40_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax818 = inst_40_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax819 = inst_40_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax820 = inst_40_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax821 = inst_40_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax822 = inst_40_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax823 = inst_40_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax824 = inst_40_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax825 = inst_40_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax826 = inst_40_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax827 = inst_41_values_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax828 = inst_41_flags_var_0(rdi, rsi, rdx, rcx, r8, r9);
    rax829 = inst_41_values_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax830 = inst_41_flags_var_1(rdi, rsi, rdx, rcx, r8, r9);
    rax831 = inst_41_values_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax832 = inst_41_flags_var_2(rdi, rsi, rdx, rcx, r8, r9);
    rax833 = inst_41_values_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax834 = inst_41_flags_var_3(rdi, rsi, rdx, rcx, r8, r9);
    rax835 = inst_41_values_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax836 = inst_41_flags_var_4(rdi, rsi, rdx, rcx, r8, r9);
    rax837 = inst_41_values_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax838 = inst_41_flags_var_5(rdi, rsi, rdx, rcx, r8, r9);
    rax839 = inst_41_values_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax840 = inst_41_flags_var_6(rdi, rsi, rdx, rcx, r8, r9);
    rax841 = inst_41_values_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax842 = inst_41_flags_var_7(rdi, rsi, rdx, rcx, r8, r9);
    rax843 = inst_41_values_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax844 = inst_41_flags_var_8(rdi, rsi, rdx, rcx, r8, r9);
    rax845 = inst_41_values_var_9(rdi, rsi, rdx, rcx, r8, r9);
    rax846 = inst_41_flags_var_9(rdi, rsi, rdx, rcx, r8, r9);
    if (rax7 + rax8 + rax9 + rax10 + rax11 + rax12 + rax13 + rax14 + rax15 + rax16 + rax17 + rax18 + rax19 + rax20 + rax21 + rax22 + rax23 + rax24 + rax25 + rax26 + rax27 + rax28 + rax29 + rax30 + rax31 + rax32 + rax33 + rax34 + rax35 + rax36 + rax37 + rax38 + rax39 + rax40 + rax41 + rax42 + rax43 + rax44 + rax45 + rax46 + rax47 + rax48 + rax49 + rax50 + rax51 + rax52 + rax53 + rax54 + rax55 + rax56 + rax57 + rax58 + rax59 + rax60 + rax61 + rax62 + rax63 + rax64 + rax65 + rax66 + rax67 + rax68 + rax69 + rax70 + rax71 + rax72 + rax73 + rax74 + rax75 + rax76 + rax77 + rax78 + rax79 + rax80 + rax81 + rax82 + rax83 + rax84 + rax85 + rax86 + rax87 + rax88 + rax89 + rax90 + rax91 + rax92 + rax93 + rax94 + rax95 + rax96 + rax97 + rax98 + rax99 + rax100 + rax101 + rax102 + rax103 + rax104 + rax105 + rax106 + rax107 + rax108 + rax109 + rax110 + rax111 + rax112 + rax113 + rax114 + rax115 + rax116 + rax117 + rax118 + rax119 + rax120 + rax121 + rax122 + rax123 + rax124 + rax125 + rax126 + rax127 + rax128 + rax129 + rax130 + rax131 + rax132 + rax133 + rax134 + rax135 + rax136 + rax137 + rax138 + rax139 + rax140 + rax141 + rax142 + rax143 + rax144 + rax145 + rax146 + rax147 + rax148 + rax149 + rax150 + rax151 + rax152 + rax153 + rax154 + rax155 + rax156 + rax157 + rax158 + rax159 + rax160 + rax161 + rax162 + rax163 + rax164 + rax165 + rax166 + rax167 + rax168 + rax169 + rax170 + rax171 + rax172 + rax173 + rax174 + rax175 + rax176 + rax177 + rax178 + rax179 + rax180 + rax181 + rax182 + rax183 + rax184 + rax185 + rax186 + rax187 + rax188 + rax189 + rax190 + rax191 + rax192 + rax193 + rax194 + rax195 + rax196 + rax197 + rax198 + rax199 + rax200 + rax201 + rax202 + rax203 + rax204 + rax205 + rax206 + rax207 + rax208 + rax209 + rax210 + rax211 + rax212 + rax213 + rax214 + rax215 + rax216 + rax217 + rax218 + rax219 + rax220 + rax221 + rax222 + rax223 + rax224 + rax225 + rax226 + rax227 + rax228 + rax229 + rax230 + rax231 + rax232 + rax233 + rax234 + rax235 + rax236 + rax237 + rax238 + rax239 + rax240 + rax241 + rax242 + rax243 + rax244 + rax245 + rax246 + rax247 + rax248 + rax249 + rax250 + rax251 + rax252 + rax253 + rax254 + rax255 + rax256 + rax257 + rax258 + rax259 + rax260 + rax261 + rax262 + rax263 + rax264 + rax265 + rax266 + rax267 + rax268 + rax269 + rax270 + rax271 + rax272 + rax273 + rax274 + rax275 + rax276 + rax277 + rax278 + rax279 + rax280 + rax281 + rax282 + rax283 + rax284 + rax285 + rax286 + rax287 + rax288 + rax289 + rax290 + rax291 + rax292 + rax293 + rax294 + rax295 + rax296 + rax297 + rax298 + rax299 + rax300 + rax301 + rax302 + rax303 + rax304 + rax305 + rax306 + rax307 + rax308 + rax309 + rax310 + rax311 + rax312 + rax313 + rax314 + rax315 + rax316 + rax317 + rax318 + rax319 + rax320 + rax321 + rax322 + rax323 + rax324 + rax325 + rax326 + rax327 + rax328 + rax329 + rax330 + rax331 + rax332 + rax333 + rax334 + rax335 + rax336 + rax337 + rax338 + rax339 + rax340 + rax341 + rax342 + rax343 + rax344 + rax345 + rax346 + rax347 + rax348 + rax349 + rax350 + rax351 + rax352 + rax353 + rax354 + rax355 + rax356 + rax357 + rax358 + rax359 + rax360 + rax361 + rax362 + rax363 + rax364 + rax365 + rax366 + rax367 + rax368 + rax369 + rax370 + rax371 + rax372 + rax373 + rax374 + rax375 + rax376 + rax377 + rax378 + rax379 + rax380 + rax381 + rax382 + rax383 + rax384 + rax385 + rax386 + rax387 + rax388 + rax389 + rax390 + rax391 + rax392 + rax393 + rax394 + rax395 + rax396 + rax397 + rax398 + rax399 + rax400 + rax401 + rax402 + rax403 + rax404 + rax405 + rax406 + rax407 + rax408 + rax409 + rax410 + rax411 + rax412 + rax413 + rax414 + rax415 + rax416 + rax417 + rax418 + rax419 + rax420 + rax421 + rax422 + rax423 + rax424 + rax425 + rax426 + rax427 + rax428 + rax429 + rax430 + rax431 + rax432 + rax433 + rax434 + rax435 + rax436 + rax437 + rax438 + rax439 + rax440 + rax441 + rax442 + rax443 + rax444 + rax445 + rax446 + rax447 + rax448 + rax449 + rax450 + rax451 + rax452 + rax453 + rax454 + rax455 + rax456 + rax457 + rax458 + rax459 + rax460 + rax461 + rax462 + rax463 + rax464 + rax465 + rax466 + rax467 + rax468 + rax469 + rax470 + rax471 + rax472 + rax473 + rax474 + rax475 + rax476 + rax477 + rax478 + rax479 + rax480 + rax481 + rax482 + rax483 + rax484 + rax485 + rax486 + rax487 + rax488 + rax489 + rax490 + rax491 + rax492 + rax493 + rax494 + rax495 + rax496 + rax497 + rax498 + rax499 + rax500 + rax501 + rax502 + rax503 + rax504 + rax505 + rax506 + rax507 + rax508 + rax509 + rax510 + rax511 + rax512 + rax513 + rax514 + rax515 + rax516 + rax517 + rax518 + rax519 + rax520 + rax521 + rax522 + rax523 + rax524 + rax525 + rax526 + rax527 + rax528 + rax529 + rax530 + rax531 + rax532 + rax533 + rax534 + rax535 + rax536 + rax537 + rax538 + rax539 + rax540 + rax541 + rax542 + rax543 + rax544 + rax545 + rax546 + rax547 + rax548 + rax549 + rax550 + rax551 + rax552 + rax553 + rax554 + rax555 + rax556 + rax557 + rax558 + rax559 + rax560 + rax561 + rax562 + rax563 + rax564 + rax565 + rax566 + rax567 + rax568 + rax569 + rax570 + rax571 + rax572 + rax573 + rax574 + rax575 + rax576 + rax577 + rax578 + rax579 + rax580 + rax581 + rax582 + rax583 + rax584 + rax585 + rax586 + rax587 + rax588 + rax589 + rax590 + rax591 + rax592 + rax593 + rax594 + rax595 + rax596 + rax597 + rax598 + rax599 + rax600 + rax601 + rax602 + rax603 + rax604 + rax605 + rax606 + rax607 + rax608 + rax609 + rax610 + rax611 + rax612 + rax613 + rax614 + rax615 + rax616 + rax617 + rax618 + rax619 + rax620 + rax621 + rax622 + rax623 + rax624 + rax625 + rax626 + rax627 + rax628 + rax629 + rax630 + rax631 + rax632 + rax633 + rax634 + rax635 + rax636 + rax637 + rax638 + rax639 + rax640 + rax641 + rax642 + rax643 + rax644 + rax645 + rax646 + rax647 + rax648 + rax649 + rax650 + rax651 + rax652 + rax653 + rax654 + rax655 + rax656 + rax657 + rax658 + rax659 + rax660 + rax661 + rax662 + rax663 + rax664 + rax665 + rax666 + rax667 + rax668 + rax669 + rax670 + rax671 + rax672 + rax673 + rax674 + rax675 + rax676 + rax677 + rax678 + rax679 + rax680 + rax681 + rax682 + rax683 + rax684 + rax685 + rax686 + rax687 + rax688 + rax689 + rax690 + rax691 + rax692 + rax693 + rax694 + rax695 + rax696 + rax697 + rax698 + rax699 + rax700 + rax701 + rax702 + rax703 + rax704 + rax705 + rax706 + rax707 + rax708 + rax709 + rax710 + rax711 + rax712 + rax713 + rax714 + rax715 + rax716 + rax717 + rax718 + rax719 + rax720 + rax721 + rax722 + rax723 + rax724 + rax725 + rax726 + rax727 + rax728 + rax729 + rax730 + rax731 + rax732 + rax733 + rax734 + rax735 + rax736 + rax737 + rax738 + rax739 + rax740 + rax741 + rax742 + rax743 + rax744 + rax745 + rax746 + rax747 + rax748 + rax749 + rax750 + rax751 + rax752 + rax753 + rax754 + rax755 + rax756 + rax757 + rax758 + rax759 + rax760 + rax761 + rax762 + rax763 + rax764 + rax765 + rax766 + rax767 + rax768 + rax769 + rax770 + rax771 + rax772 + rax773 + rax774 + rax775 + rax776 + rax777 + rax778 + rax779 + rax780 + rax781 + rax782 + rax783 + rax784 + rax785 + rax786 + rax787 + rax788 + rax789 + rax790 + rax791 + rax792 + rax793 + rax794 + rax795 + rax796 + rax797 + rax798 + rax799 + rax800 + rax801 + rax802 + rax803 + rax804 + rax805 + rax806 + rax807 + rax808 + rax809 + rax810 + rax811 + rax812 + rax813 + rax814 + rax815 + rax816 + rax817 + rax818 + rax819 + rax820 + rax821 + rax822 + rax823 + rax824 + rax825 + rax826 + rax827 + rax828 + rax829 + rax830 + rax831 + rax832 + rax833 + rax834 + rax835 + rax836 + rax837 + rax838 + rax839 + rax840 + rax841 + rax842 + rax843 + rax844 + rax845 + rax846) {
        fun_401030("sum==0", "source_extensions_inst__10_vars__no_complex.c", 0x69b, "main");
    } else {
        return 0;
    }
}
