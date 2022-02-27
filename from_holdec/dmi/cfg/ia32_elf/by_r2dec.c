/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x80484bb */
#include <stdint.h>
 
void entry0 (void) {
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048360 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x80484f0 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = 0x804b027;
    eax -= obj.completed.6532;
    if (eax > 6) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.completed.6532);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048520 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    eax = obj.completed.6532;
    eax -= obj.completed.6532;
    eax >>= 2;
    edx = eax;
    edx >>= 0x1f;
    eax += edx;
    eax >>= 1;
    if (eax != 0) {
        edx = 0;
        if (edx == 0) {
            goto label_0;
        }
        void (*edx)(uint32_t, uint32_t) (obj.completed.6532, eax);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048560 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6532) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6532) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048580 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    eax = obj.__JCR_LIST__;
    edx = *(eax);
    while (edx == 0) {
        void (*0x8048520)() ();
        edx = 0;
    }
    void (*edx)(uint32_t) (eax);
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8049290 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x80484e0 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x80488a0 */
#include <stdint.h>
 
uint32_t intermediate_13_loop_with_one_continue (int32_t arg_10h) {
    ebx = *((esp + 0x10));
    if (ebx <= 0x7b) {
        goto label_1;
    }
    do {
label_0:
        puts ("head");
        eax = time (0);
    } while (ebx == eax);
    eax = puts (0x8049363);
    goto label_0;
label_1:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8049050 */
#include <stdint.h>
 
int32_t advanced_21_computed_jumps (int32_t arg_1ch) {
    ebx = *((esp + 0x1c));
    puts ("start");
    if (ebx <= 2) {
        if (ebx != 0) {
            eax = 0x80490b0;
            eax -= 0x8049098;
            if (ebx == 2) {
                eax += 0x80490d0;
                eax -= 0x80490b0;
            }
            eax += 0x8049098;
            void (*eax)() ();
        }
        eax = puts ("is 0");
        eax = 0;
        return eax;
    }
    eax = puts ("is something else");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x80491b0 */
#include <stdint.h>
 
int32_t basic_8_forever_loop (uint32_t arg_10h) {
    if (*((esp + 0x10)) == 0x2a) {
        goto label_0;
    }
    eax = 0;
    return eax;
    do {
label_0:
        puts ("loop body");
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048350 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048620 */
#include <stdint.h>
 
int32_t basic_3_if_elseif (int32_t arg_10h) {
    eax = *((esp + 0x10));
    if (eax == 0x2a) {
        goto label_0;
    }
    while (1) {
        eax = 0;
        return eax;
        eax = puts ("else-if block");
        eax = 0;
        return eax;
label_0:
        puts (0x80492c4);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8049294 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 20 named .fini */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x1d63;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048830 */
#include <stdint.h>
 
uint32_t intermediate_12_loop_with_break_and_block (int32_t arg_10h) {
    ebx = *((esp + 0x10));
    while (eax != ebx) {
        puts ("barrier");
        eax = rand ();
        if (ebx == eax) {
            goto label_0;
        }
        puts (0x8049363);
        puts ("head");
        eax = time (0);
    }
    eax = puts ("will break");
label_0:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048c30 */
#include <stdint.h>
 
uint32_t advanced_1_loop_with_multiple_entries (int32_t arg_10h) {
    ebx = *((esp + 0x10));
    if (ebx == 0x2a) {
        goto label_1;
    }
    if (ebx <= 0) {
        goto label_2;
    }
    do {
        ebx--;
        puts ("body 1");
label_0:
        eax = puts ("body 2");
    } while (ebx > 0);
label_2:
    eax = 0;
    return eax;
label_1:
    ebx = 0x29;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x80488f0 */
#include <stdint.h>
 
uint32_t intermediate_14_loop_with_two_continues (int32_t arg_10h) {
    ebx = *((esp + 0x10));
    if (ebx <= 0x7b) {
        goto label_1;
    }
    do {
label_0:
        puts ("head");
        eax = time (0);
    } while (ebx == eax);
    puts ("barrier");
    eax = rand ();
    if (ebx == eax) {
        goto label_0;
    }
    eax = puts (0x8049363);
    goto label_0;
label_1:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048960 */
#include <stdint.h>
 
uint32_t intermediate_15_loop_with_continue_and_block (int32_t arg_10h) {
    ebx = *((esp + 0x10));
    if (ebx <= 0x7b) {
        goto label_1;
    }
    do {
label_0:
        puts ("head");
        eax = time (0);
        if (ebx == eax) {
            goto label_2;
        }
        puts ("barrier");
        eax = rand ();
    } while (ebx == eax);
    puts (0x8049363);
    goto label_0;
label_2:
    eax = puts ("will continue");
    goto label_0;
label_1:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048720 */
#include <stdint.h>
 
uint32_t intermediate_1_short_circuit_and (int32_t arg_10h, uint32_t arg_14h) {
    eax = rand ();
    edx = *((esp + 0x10));
    if (edx != 0) {
        if (eax != *((esp + 0x14))) {
            goto label_0;
        }
        eax = puts ("both true");
    }
label_0:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048380 */
#include <stdint.h>
 
void rand (void) {
    rand ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048d30 */
#include <stdint.h>
 
uint32_t advanced_10_irreducible (int32_t arg_1ch) {
    ebx = *((esp + 0x1c));
    puts (0x80493f9);
    eax = time (0);
    if (eax != ebx) {
        ebx++;
        puts (0x80493ff);
        eax = time (0);
        if (eax == ebx) {
            goto label_0;
        }
    }
    puts (0x80493fc);
    do {
        eax = puts (0x8049405);
        eax = 0;
        return eax;
label_0:
        puts (0x8049402);
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048e80 */
#include <stdint.h>
 
uint32_t advanced_12_nested_if_in_loop (int32_t arg_10h) {
    ebx = *((esp + 0x10));
    esi = ebx + 2;
    edi = ebx + 1;
    puts (0x8049408);
    do {
label_0:
        puts (0x80493f9);
        eax = time (0);
        if (eax == ebx) {
            goto label_2;
        }
        puts (0x80493fc);
        eax = time (0);
    } while (eax == esi);
label_1:
    eax = puts (0x8049402);
    eax = 0;
    return eax;
label_2:
    puts (0x80493ff);
    eax = time (0);
    if (eax == edi) {
        goto label_0;
    }
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048f30 */
#include <stdint.h>
 
int32_t advanced_20_jump_table_on_stack (int32_t arg_30h) {
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    eax = *((esp + 0x30));
    *((esp + 8)) = 0x8048f90;
    *((esp + 0xc)) = 0x8049030;
    *((esp + 0x10)) = 0x8049010;
    *((esp + 0x14)) = 0x8048ff0;
    *((esp + 0x18)) = 0x8048fd0;
    *((esp + 0x1c)) = 0x8048fb0;
    if (eax <= 5) {
        uint32_t (*esp + eax*4 + 8)() ();
    }
    eax = puts ("is something else");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x80487e0 */
#include <stdint.h>
 
uint32_t intermediate_11_loop_with_two_breaks (int32_t arg_10h) {
    ebx = *((esp + 0x10));
    if (ebx > 0) {
        goto label_0;
    }
    goto label_1;
    do {
        puts (0x8049363);
        ebx--;
        if (ebx == 0) {
            goto label_1;
        }
label_0:
        puts ("head");
        eax = time (0);
    } while (eax != ebx);
label_1:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048790 */
#include <stdint.h>
 
uint32_t intermediate_10_loop_with_one_break (int32_t arg_10h) {
    ebx = *((esp + 0x10));
    while (eax != ebx) {
        puts (0x8049363);
        puts ("head");
        eax = time (0);
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x80486f0 */
#include <stdint.h>
 
uint32_t basic_7_for_loop (void) {
    ebx = 0x30;
    do {
        ebx++;
        eax = putchar (ebx);
    } while (ebx != 0x3a);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048370 */
#include <stdint.h>
 
void putchar (void) {
    putchar ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8049230 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_20h, int32_t arg_2ch) {
    _x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x1dc7;
    ebp = *((esp + 0x20));
    esi = ebx - 0xf4;
    _init ();
    eax = ebx - 0xf8;
    esi -= eax;
    esi >>= 2;
    if (esi == 0) {
        goto label_0;
    }
    edi = 0;
    do {
        uint32_t (*ebx + edi*4 - 0xf8)(uint32_t, uint32_t*) (ebp, *((esp + 0x2c)));
        edi++;
    } while (esi != edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x80491d2 */
#include <stdint.h>
 
void basic_9_dead_block (void) {
    puts ("entry");
    return void (*0x80491fa)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x80491fa */
#include <stdint.h>
 
int32_t loc_080491fa (void) {
    puts ("exit");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048750 */
#include <stdint.h>
 
uint32_t intermediate_2_short_circuit_or (int32_t arg_10h, uint32_t arg_14h) {
    eax = rand ();
    edx = *((esp + 0x10));
    if (edx == 0) {
        if (eax == *((esp + 0x14))) {
            goto label_0;
        }
        eax = 0;
        return eax;
    }
label_0:
    eax = puts ("at least one is true");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x80485b0 */
#include <stdint.h>
 
int32_t basic_1_if (uint32_t arg_10h) {
    if (*((esp + 0x10)) != 0x2a) {
        eax = 0;
        return eax;
    }
    eax = puts (0x80492c4);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048dc0 */
#include <stdint.h>
 
uint32_t advanced_11_nested_loops_complex_condition (uint32_t arg_10h) {
    puts (0x8049408);
    eax = time (0);
    while (eax != esi) {
label_2:
        eax = puts (0x804940b);
        eax = 0;
        return eax;
        ebx = eax + 2;
        esi = eax + 3;
        edi = eax;
label_1:
        puts (0x80493ff);
        goto label_3;
label_0:
        eax = time (0);
    }
label_3:
    puts (0x80493fc);
    eax = time (0);
    if (eax != ebx) {
        goto label_0;
    }
    puts (0x80493f9);
    eax = time (0);
    edx = edi + 1;
    if (eax == edx) {
        goto label_1;
    }
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x80483a0 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    int32_t var_1ch;
    int32_t var_10h;
    /* [14] -r-x section size 3826 named .text */
    ecx = esp + 4;
    ebx = *(ecx);
    edx = *((ecx + 4));
    esi = ebx;
    *((ebp - 0x1c)) = edx;
    esi = ~esi;
    basic_1_if (ebx, ecx, ebx, esi, edi, ebp);
    esi &= 1;
    basic_2_if_else (ebx);
    basic_3_if_elseif (ebx);
    basic_4_if_elseif_else (ebx);
    basic_5_head_controlled_loop (ebx);
    basic_6_tail_controlled_loop (ebx);
    basic_7_for_loop ();
    basic_8_forever_loop (ebx);
    basic_9_dead_block ();
    eax = 0;
    al = (ebx > 4) ? 1 : 0;
    edi = eax;
    intermediate_1_short_circuit_and (edi, esi);
    intermediate_2_short_circuit_or (edi, esi);
    intermediate_10_loop_with_one_break (ebx);
    intermediate_11_loop_with_two_breaks (ebx);
    intermediate_12_loop_with_break_and_block (ebx);
    intermediate_13_loop_with_one_continue (ebx);
    intermediate_14_loop_with_two_continues (ebx);
    intermediate_15_loop_with_continue_and_block (ebx);
    intermediate_16_loop_with_breaks_and_continues (ebx);
    intermediate_17_forever_loop_with_extra_statement ();
    intermediate_20_nested_loops (ebx);
    intermediate_30_switch_case (ebx);
    advanced_1_loop_with_multiple_entries (ebx);
    advanced_2_loop_with_multiple_exits (ebx);
    advanced_10_irreducible (ebx);
    advanced_11_nested_loops_complex_condition (ebx);
    advanced_12_nested_if_in_loop (ebx);
    advanced_20_jump_table_on_stack (ebx);
    advanced_21_computed_jumps (ebx);
    edx = *((ebp - 0x1c));
    eax = *(edx);
    eax = *(eax);
    esp = ebp - 0x10;
    esp = ecx - 4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x80485e0 */
#include <stdint.h>
 
uint32_t basic_2_if_else (uint32_t arg_10h) {
    if (*((esp + 0x10)) != 0x2a) {
        eax = puts ("else block");
        eax = 0;
        return eax;
    }
    eax = puts (0x80492c4);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048680 */
#include <stdint.h>
 
int32_t basic_4_if_elseif_else (int32_t arg_10h) {
    eax = *((esp + 0x10));
    if (eax == 0x2a) {
        goto label_0;
    }
    if (eax == 0x2b) {
        goto label_1;
    }
    eax = puts ("else block");
    do {
        eax = 0;
        return eax;
label_1:
        eax = puts ("else-if block");
        eax = 0;
        return eax;
label_0:
        puts (0x80492c4);
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8049110 */
#include <stdint.h>
 
uint32_t basic_5_head_controlled_loop (int32_t arg_1ch) {
    ebx = *((esp + 0x1c));
    puts (0x804946c);
    do {
        if (ebx == 0x2a) {
            goto label_0;
        }
        ebx++;
        puts ("body");
    } while (1);
label_0:
    eax = puts ("after");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8049160 */
#include <stdint.h>
 
uint32_t basic_6_tail_controlled_loop (int32_t arg_1ch) {
    ebx = *((esp + 0x1c));
    puts (0x804946c);
    do {
        ebx++;
        puts ("body");
    } while (ebx != 0x2a);
    eax = puts ("after");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x80489e0 */
#include <stdint.h>
 
uint32_t intermediate_16_loop_with_breaks_and_continues (int32_t arg_10h) {
    ebx = *((esp + 0x10));
    do {
label_0:
        puts ("head");
        eax = time (0);
        eax++;
    } while (eax == ebx);
    puts ("after first continue");
    eax = time (0);
    eax += 2;
    if (ebx == eax) {
        goto label_1;
    }
    puts ("after first break");
    eax = time (0);
    eax += 3;
    if (ebx == eax) {
        goto label_0;
    }
    puts ("after second continue");
    eax = time (0);
    eax += 4;
    if (ebx != eax) {
        eax = puts ("after second break; tail");
        goto label_0;
    }
label_1:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8049211 */
#include <stdint.h>
 
void intermediate_17_forever_loop_with_extra_statement (void) {
    while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048aa0 */
#include <stdint.h>
 
uint32_t intermediate_20_nested_loops (int32_t arg_1ch) {
    ebx = *((esp + 0x1c));
    puts ("before");
label_0:
    puts ("outer loop");
    do {
        puts ("inner loop");
        eax = time (0);
    } while (eax != ebx);
    eax = rand ();
    if (ebx != eax) {
        goto label_0;
    }
    eax = puts ("after");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048340 */
#include <stdint.h>
 
void time (void) {
    time ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048b10 */
#include <stdint.h>
 
int32_t intermediate_30_switch_case (int32_t arg_10h) {
    eax = *((esp + 0x10));
    if (eax > 9) {
        goto label_1;
    }
    /* switch table (10 cases) at 0x8049444 */
    puts ("7 with fall through");
    puts (0x80493a8);
    do {
label_0:
        eax = puts ("common exit");
        eax = 0;
        return eax;
        puts (0x804940c);
    } while (1);
    puts (0x8049423);
    goto label_0;
    puts (0x8049428);
    goto label_0;
    puts ("2 or 3");
    goto label_0;
    puts (0x8049437);
    goto label_0;
    puts (0x804943c);
    goto label_0;
    puts (0x8049392);
    goto label_0;
label_1:
    puts ("some other value");
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048c80 */
#include <stdint.h>
 
uint32_t advanced_2_loop_with_multiple_exits (int32_t arg_10h) {
    ebx = *((esp + 0x10));
    if (ebx > 0) {
        goto label_0;
    }
    goto label_1;
    do {
        puts ("body 2");
        eax = time (0);
        if (eax == 2) {
            goto label_2;
        }
        ebx--;
        if (ebx == 0) {
            goto label_1;
        }
label_0:
        puts ("body 1");
        eax = time (0);
    } while (eax != 1);
    eax = puts ("took exit 1");
    eax = 0;
    return eax;
label_1:
    eax = puts ("normal exit");
    eax = 0;
    return eax;
label_2:
    eax = puts ("took exit 2");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048308 */
#include <stdint.h>
 
uint32_t init (void) {
    /* [11] -r-x section size 35 named .init */
    al = _x86_get_pc_thunk_bx (ebx);
    *(eax) += al;
    ebx += 0x2cef;
    eax = *((ebx - 4));
    if (eax != 0) {
        _plt_got ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x8048390 */
#include <stdint.h>
 
void _plt_got (void) {
    /* [13] -r-x section size 8 named .plt.got */
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/cfg/ia32_elf/subject.exe @ 0x80481b2 */
#include <stdint.h>
 
int32_t fcn_080481b2 (int32_t arg_c0e34bh) {
    *(eax) += al;
    *(eax) += eax;
    *(eax) += al;
    eax += 0;
    *(eax) &= al;
    *(eax) &= al;
    *(eax) += al;
    *(edi) += al;
    *(eax) += al;
    *((ebp + 0xc0e34b)) += ch;
    /* [05] -r-- section size 128 named .dynsym */
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(edx) += dl;
    *(eax) += al;
    *(edx) += bl;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(edx) += dl;
    *(eax) += al;
    *(ebx) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) &= al;
    *(eax) += al;
    *(eax) ^= eax;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    al += *(eax);
    *(eax) += al;
    al = 0;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    al += *(eax);
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    al += *(eax);
    *(eax) += al;
    eax |= *(eax);
    *(eax) += al;
    al = *(esi);
    esi++;
    tmp_0 = eax;
    eax = edx;
    edx = tmp_0;
    al += 8;
    al += 0;
    *(eax) += al;
    *(eax) += eax;
    *(eax) += al;
    /* [06] -r-- section size 92 named .dynstr */
    *((ecx + ebp*2 + 0x62)) += ch;
    __asm ("arpl word [esi], bp");
    if (*((ecx + ebp*2 + 0x62)) >= 0) {
        goto label_0;
    }
    *((ss:edi + 0x49)) += bl;
    edi--;
    if (edi >= 0) {
        goto label_1;
    }
    ebp = *((fs:esi + 0x5f)) * 0x64657375;
    *((eax + 0x75)) += dh;
    if (*((eax + 0x75)) == 0) {
        goto label_2;
    }
    *((ecx + ebp*2 + 0x6d)) += dh;
    *((gs:eax + 0x75)) += dh;
    if (*((gs:eax + 0x75)) == 0) {
        goto label_3;
    }
    __asm ("popal");
    __asm ("outsb dx, byte [esi]");
    *((fs:edi + 0x5f)) += bl;
    __asm ("insb byte es:[edi], dx");
    esp = *((edx + 0x63)) * 0x6174735f;
    if (*((fs:edi + 0x5f)) < 0) {
        goto label_4;
    }
    __asm ("insd dword es:[edi], dx");
    __asm ("popal");
    ebp = *(esi) * 0x6d675f5f;
    __asm ("outsd dx, dword [esi]");
    __asm ("outsb dx, byte [esi]");
    if (*((fs:edi + 0x5f)) >= 0) {
        void (*0x804830c)() ();
    }
    __asm ("popal");
    if (*((fs:edi + 0x5f)) >= 0) {
        *((edi + 0x4c)) += al;
        ecx--;
        edx++;
        ebx++;
        ch ^= *(esi);
        *(eax) ^= al;
        /* [07] -r-- section size 16 named .gnu.version */
        *(eax) += al;
        al += *(eax);
        al += *(eax);
        *(eax) += al;
        al += *(eax);
        al += *(eax);
        al += *(eax);
        *(eax) += eax;
        /* [08] -r-- section size 32 named .gnu.version_r */
        *(eax) += eax;
        *(eax) += eax;
        *(eax) += eax;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
label_0:
        *(eax) += al;
        *(eax) += al;
        *(eax) += dl;
        ebp = *((ecx + 0xd)) * 0x20000;
label_1:
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
label_3:
        ah += bh;
        __asm ("scasd eax, dword es:[edi]");
        al += 8;
label_2:
        eax += *(eax);
        *((eax + esi*4)) += cl;
        /* [10] -r-- section size 40 named .rel.plt */
        al |= 0xb0;
        al += 8;
        *(eax) += eax;
        *(eax) += dl;
        al = 4;
        *(edi) |= al;
        al += *(eax);
        *((eax + esi*4)) += dl;
        al += 8;
        al += 0;
        *(eax) += bl;
        al = 4;
        *(edi) |= al;
label_4:
        eax += 0xb01c0000;
        al += 8;
        *(eax) += al;
    }
    *(eax) += al;
}
