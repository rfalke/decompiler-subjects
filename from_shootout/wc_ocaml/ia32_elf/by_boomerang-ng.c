union { stack_t; union { __size32 *; unsigned int; }[]; } caml_globals;
__size32 array_bound_error_msg = 0;// 4 bytes
__size8 global_0x0807b727 = 0;// 1 bytes
__size32 caml_last_return_address = 1;// 4 bytes
int caml_fl_merge = 0x807b748;
union { unsigned int; int *; } global_0x0807b748;
unsigned int fl_prev = 0x807b748;
__size32 caml_weak_none = 0x80820f8;// 4 bytes
__size32 stderr;// 4 bytes
unsigned int caml_exception_pointer;
__size32 array_bound_error_bucket_inited;// 4 bytes
__size32 array_bound_error_bucket;// 4 bytes
__size32 global_0x0807b9ec;// 4 bytes
__size32 global_0x0807b9f0;// 4 bytes
unsigned int caml_local_roots;
union { void *; __size32; } caml_frame_descriptors;
__size32 caml_bottom_of_stack;// 4 bytes
int caml_globals_inited;
int caml_globals_scanned;
__size32 caml_force_major_slice;// 4 bytes
int caml_verb_gc;
unsigned int caml_fl_cur_size;
unsigned int caml_allocation_policy;
int flp_size;
unsigned int beyond;
unsigned int fl_last;
union { unsigned int; unsigned int *; } global_0x0807db9c[9999999];
union { unsigned int; int *; } flp[9999999];
union { union { __size32; __size8 *; }[]; int; } named_value_table;
int main(int argc, char *argv[]);
void caml_main();
void caml_sys_exit(int param1);
void caml_init_ieee_floats();
__size8 caml_init_custom_operations();
void caml_init_gc(__size32 param1, __size32 param2);
__size32 caml_page_table_add(__size32 param1, int param2, int param3, __size32 param5, __size32 param5);
void caml_fatal_error(union { char *; __size32; } param1);
void caml_init_signals(sigset_t param1);
void caml_debugger_init();
__size8 caml_register_custom_operations();
void norm_heapincr();
void caml_page_table_initialize();
void norm_minsize();
void caml_set_minor_heap_size(__size32 param1);
void norm_pfree();
void norm_pmax();
void caml_init_major_heap(__size32 param1);
__size32 caml_gc_message(int param1, union { char *; __size32; } param2);
__size32 caml_page_table_modify(int param1, __size32 param2, __size32 param3);
__size32 caml_stat_alloc(size_t param1);
void caml_minor_collection();
__size32 caml_aligned_malloc(__size32 param1, __size32 param2, union { union { __size32; void *; } *; __size32; } param3);
__size32 caml_raise_out_of_memory(int param1, __size32 param2, __size32 param1);
void caml_page_table_remove(__size32 param1, int param2, int param3);
__size32 reset_table(union { __size32; __size32 *; } param1, __size32 param2, __size32 param3);
void clip_heap_chunk_size();
void caml_alloc_for_heap(__size32 param1, __size32 param2);
void caml_fl_init_merge();
void caml_make_free_blocks(__size32 param1);
void caml_empty_minor_heap(__size8 param1, unsigned int param4);
void caml_major_collection_slice();
void caml_final_do_calls(__size32 param3, __size32 param4);
__size32 caml_raise(int param1, __size32 param2, __size32 param3, __size32 param4);
__size32 caml_alloc_small(unsigned int param1, __size32 param2);
__size32 caml_raise_with_arg(int param1, __size32 param1, __size32 param2, __size32 param3);
__size32 caml_copy_string(__size32 param1);
__size32 caml_raise_with_string(__size32 param1, __size32 param2);
__size8 caml_raise_constant(int param1, __size32 param1, __size32 param2);
__size32 caml_stat_free(union { void *; __size32; } param1);
void caml_oldify_local_roots(__size8 param1, int param2, unsigned int param3, __size32 param4, unsigned int param5, unsigned int param6);
__size32 caml_oldify_one(__size32 param1, __size32 param2, char param3, unsigned int param4, unsigned int param5, unsigned int param6);
void caml_oldify_mopup();
void caml_final_empty_young();
__size32 start_cycle();
__size32 caml_callback_exn();
void caml_fatal_uncaught_exception(__size32 param1, unsigned char param2);
__size32 caml_raise_exception(__size8 param2, __size8 param3, __size8 param3);
__size32 caml_alloc_string(__size32 param1, __size8 param2);
__size8 caml_init_frame_descriptors();
__size8 caml_scan_global_young_roots(__size32 param1, __size32 param2);
__size32 caml_final_do_young_roots(__size32 param1, __size32 param2);
void caml_alloc_shr(unsigned int param1, unsigned int param2, __size8 param3, __size8 param4, __size8 param5, unsigned int param6, __size32 param7, __size32 param8, __size32 param9, __size32 param10);
__size32 caml_darken_all_roots(__size8 param2, __size8 param3, __size8 param3, __size32 param5, unsigned int param6, unsigned int param7, __size32 param7);
void caml_format_exception(union { __size32 *; __size32; } param1);
__size32 caml_named_value(union { char *; __size32; } param1);
void caml_print_exception_backtrace(__size32 param1, __size32 param2, __size32 param3, __size32 param4, int param5, int param6, int param7, unsigned int param8, union { char[] *; __size32; } param9, int param10, int param11, int param12, unsigned char param13, int param14);
__size32 caml_stash_backtrace(unsigned int param1, __size32 param2, int param3, unsigned int param4, __size8 param5, __size8 param6, __size8 param7);
__size32 caml_check_urgent_gc();
__size32 caml_register_frametable(__size32 param1);
__size32 caml_iterate_global_roots(__size32 param1, __size32 param2);
__size8 caml_insert_global_root(unsigned int param1, unsigned int param2);
__size32 caml_fl_allocate(int param1, unsigned int param2, unsigned int param3);
void caml_round_heap_chunk_size();
void caml_urge_major_slice();
void caml_fl_add_blocks(unsigned int param1);
void caml_add_to_heap(unsigned int param1);
void caml_free_for_heap(__size32 param1);
__size32 caml_do_roots(__size32 param1, __size8 param2, __size8 param3, __size8 param4, __size32 param5, unsigned int param6, __size32 param7, unsigned int param8, __size32 param9);
void add_string(__size32 param1);
void add_char(__size8 param1, union { __size32; __size32 *; } param2);
__size32 hash_value_name(union { __size32; unsigned char *; } param1);
__size8 extract_location_info(unsigned char param1, unsigned int param2, int param3, union { __size32; __size32 *; } param4);
__size32 cons();
__size32 allocate_block(union { __size32 *; __size32; } param1, unsigned int param2, union { __size32; __size32 *; } param3);
void truncate_flp(unsigned int param1);
__size8 caml_do_local_roots(__size32 param1, __size32 param2, __size32 param3, unsigned int param4, __size32 param5, __size32 param6, unsigned int param7, unsigned int param8, __size32 param9, unsigned int param10, unsigned int param11);
__size32 caml_scan_global_roots(__size32 param1);
__size32 caml_final_do_strong_roots(__size32 param1, __size32 param2, __size32 param3, __size32 param4, unsigned int param5, __size32 param6);
__size32 scanmult(int param1, union { __size32; int *; } param2);
void caml_set_allocation_policy(__size32 param1);
__size8 caml_record_backtrace(int param1, __size8 param3, __size8 param4, __size32 param5, __size32 param6, __size32 param7, int param8, __size32 param9);
__size8 caml_register_global_root(unsigned int param1);
__size32 caml_remove_global_root(unsigned int param1, int param2);
__size32 caml_delete_global_root(__size32 param1, unsigned int param2, int param3);

/** address: 0x080618dc */
int main(int argc, char *argv[])
{
    int ebp; 		// r29
    unsigned int esp; 		// r28

    caml_main(argv, esp - 4, SUBFLAGS32(esp - 4, 16, esp - 20), esp == 20, (unsigned int)(esp - 4) < 16, argv, ebp, argv, pc, argc);
}

/** address: 0x0806160e */
void caml_main()
{
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    char *eax; 		// r24
    unsigned int eax_1; 		// r24
    unsigned int eax_11; 		// r24{92}
    unsigned int eax_12; 		// r24{94}
    __size32 eax_2; 		// r24{0}
    char *eax_4; 		// r24{6}
    char *eax_6; 		// r24{11}
    unsigned int eax_9; 		// r24{75}
    __size32 ebp; 		// r29
    union { char *; __size32; } ebx; 		// r27
    union { __size32; unsigned char *; } ebx_1; 		// r27{70}
    __size32 ebx_2; 		// r27{15}
    int ebx_4; 		// r27{111}
    int ebx_5; 		// r27{121}
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    int esi; 		// r30
    int esp; 		// r28
    union { __size32; char *; } *esp_1; 		// r28{2}
    union { __size32; int *; } esp_4; 		// r28{11}
    union { unsigned char *; __size32; } local0; 		// ebx_1{70}
    union { int *; __size32; } local1; 		// esp{78}
    unsigned int local2; 		// eax_11{92}
    int local3; 		// ebx_4{111}

    caml_init_ieee_floats();
    cl = caml_init_custom_operations(); /* Warning: also results in dl, esp_1, ebp */
    *(__size32*)(&caml_globals + 0x10010) = ebp - 25;
    *(__size32*)esp_1 = 0x8070e3e;
    eax_4 = getenv(*esp_1); /* Warning: also results in ecx, edx */
    ebx = eax_4;
    if (eax_4 != 0) {
bb0x8061703:
        esp = esp_1;
        esi = 0x8070e88;
        edi = ebp - 32;
        local0 = ebx;
        ebx_1 = local0;
        eax_9 = *(unsigned char*)ebx_1;
        local1 = esp;
        while ((unsigned char) eax_9 != 0) {
            ebx_2 = ebx_1 + 1;
            local0 = ebx_2;
            local0 = ebx_2;
            local0 = ebx_2;
            local0 = ebx_2;
            local0 = ebx_2;
            local0 = ebx_2;
            local0 = ebx_2;
            local0 = ebx_2;
            local0 = ebx_2;
            local0 = ebx_2;
            local0 = ebx_2;
            if ((unsigned char) eax_9 - 79 > 39) {
                continue;
            }
            ebx_1 = local0;
            eax_9 = *(unsigned char*)ebx_1;
            local1 = esp;
        }
    }
    else {
        *(__size32*)esp_1 = 0x8070e3f;
        eax_6 = getenv(*esp_1); /* Warning: also results in ecx, edx, esp_4 */
        local1 = esp_4;
        ebx = eax_6;
        if (eax_6 != 0) {
            goto bb0x8061703;
        }
    }
    esp = local1;
    eax = *(&caml_globals + 0x9104);
    *(__size32*)(esp + 16) = eax;
    eax = *(&caml_globals + 0x9108);
    *(__size32*)(esp + 12) = eax;
    eax = *(&caml_globals + 0x910c);
    *(__size32*)(esp + 8) = eax;
    eax = *(&caml_globals + 0x9110);
    *(__size32*)(esp + 4) = eax;
    eax = *(&caml_globals + 0x9114);
    *(__size32*)esp = eax;
    caml_init_gc(*esp, *(esp + 4));
    eax_1 = 0;
    local2 = eax_1;
    do {
        eax_11 = local2;
        caml_globals[eax_11] = eax_11;
        eax_12 = eax_11 + 1;
        local2 = eax_12;
    } while (eax_11 + 1 != 256);
    *(__size32*)(esp + 4) = 0x8082600;
    *(__size32*)esp = 0x8082200;
    *(__size32*)(esp - 4) = 4;
    eax = caml_page_table_add(*(esp - 4), *esp, *(esp + 4), ecx, 0x8082200); /* Warning: also results in ecx */
    if (eax != 0) {
        *(__size32*)(esp - 4) = 0x8070e4c;
        caml_fatal_error(*(esp - 4));
    }
    eax = *(&caml_globals + 748);
    ebx = 0;
    local3 = ebx;
    if (eax == 0) {
bb0x80617d5:
        eax = *(&caml_globals + 872);
        *(__size32*)(&caml_globals + 0xfb4c) = eax;
        ecx = *(&caml_globals + 876);
        *(__size32*)(&caml_globals + 0xfc08) = ecx;
        eax = *(&caml_globals + 880);
        if (eax != 0) {
        }
        caml_init_signals(*(esp - 168));
        caml_debugger_init();
    }
    do {
        ebx_4 = local3;
        *(__size32*)(esp + 4) = caml_globals[ebx_4];
        *(__size32*)esp = eax;
        *(__size32*)(esp - 4) = 4;
        eax = caml_page_table_add(*(esp - 4), *esp, *(esp + 4), ecx, caml_globals[ebx_4]); /* Warning: also results in ecx */
        if (eax != 0) {
            *(__size32*)(esp - 4) = 0x8070e4c;
            caml_fatal_error(*(esp - 4));
        }
        ebx_5 = ebx_4 + 1;
        eax = caml_globals[(ebx_4 + 1)];
        local3 = ebx_5;
    } while (caml_globals[(ebx_4 + 1)] != 0);
    goto bb0x80617d5;
}

/** address: 0x0806ba38 */
void caml_sys_exit(int param1)
{
    exit(param1 >> 1);
    return;
}

/** address: 0x08067007 */
void caml_init_ieee_floats()
{
    return;
}

/** address: 0x0806f86e */
__size8 caml_init_custom_operations()
{
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    __size32 ebp; 		// r29
    __size32 edi; 		// r31
    __size32 esi; 		// r30

    caml_register_custom_operations();
    *(__size32*)esp = 0x807b794;
    caml_register_custom_operations();
    *(__size32*)esp = 0x807b778;
    cl = caml_register_custom_operations(); /* Warning: also results in dl, ebp, esi, edi */
    ebp = *ebp;
    return cl; /* WARNING: Also returning: dl := dl, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x0806c5ef */
void caml_init_gc(__size32 param1, __size32 param2)
{
    int ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 esi; 		// r30
    unsigned int esp; 		// r28

    norm_heapincr(param2, esp - 4, param1, SUBFLAGS32(esp - 12, 16, (esp - 28)), esp == 28, (unsigned int)(esp - 12) < 16, ebx, param1, param2, ebp, esi, ebx, pc);
}

/** address: 0x08064df1 */
__size32 caml_page_table_add(__size32 param1, int param2, int param3, __size32 param5, __size32 param5)
{
    int eax; 		// r24
    int ebx; 		// r27
    int ebx_1; 		// r27{9}
    int ebx_2; 		// r27{14}
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    int local0; 		// ebx_1{9}
    __size32 local1; 		// param5{16}
    __size32 local2; 		// param5{17}
    __size32 local3; 		// ecx{20}
    __size32 local4; 		// edx{21}

    ebx = param2 & ~0xfff;
    local0 = ebx;
    local1 = param5;
    local2 = param5;
    if ((unsigned int)(param2 & ~0xfff) > (unsigned int)(param3 - 1 & ~0xfff)) {
bb0x8064e39:
        param5 = local1;
        param5 = local2;
        eax = 0;
        local3 = param5;
        local4 = param5;
    }
    else {
        do {
            ebx_1 = local0;
            eax = caml_page_table_modify(ebx_1, param1, 0); /* Warning: also results in ecx, edx */
            local1 = ecx;
            local2 = edx;
            local3 = ecx;
            local4 = edx;
            if (eax != 0) {
                eax = -1;
                ecx = local3;
                edx = local4;
                return eax; /* WARNING: Also returning: ecx := ecx, edx := edx */
            }
            ebx_2 = ebx_1 + 0x1000;
            local0 = ebx_2;
        } while ((unsigned int)(param3 - 1 & ~0xfff) >= ebx_1 + 0x1000);
        goto bb0x8064e39;
    }
    ecx = local3;
    edx = local4;
    return eax; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x08062e49 */
void caml_fatal_error(union { char *; __size32; } param1)
{
    __size32 eax; 		// r24

    eax = *0x807b860;
    fputs(param1, eax);
    exit(2);
    return;
}

/** address: 0x08062ac0 */
void caml_init_signals(sigset_t param1)
{
    int eax; 		// r24
    int esp; 		// r28

    sigemptyset(&param1);
    *(__size32*)(&caml_globals + 0x954c) = (esp - 164);
    eax = sigaltstack(&0x807bb60, 0);
    if (eax == 0) {
        sigaction(11, &0x8062bef, 0);
    }
    return;
}

/** address: 0x0807018c */
void caml_debugger_init()
{
    return;
}

/** address: 0x0806f847 */
__size8 caml_register_custom_operations()
{
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    __size32 *eax; 		// r24
    union { __size32; __size32 *; } ebp; 		// r29
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30

    eax = caml_stat_alloc(8); /* Warning: also results in cl, dl, ebp, esi, edi */
    edx = *(ebp + 8);
    *(__size32*)eax = edx;
    edx = *(&caml_globals + 0xfb2c);
    *(__size32*)(eax + 4) = edx;
    *(union { __size32 *; __size32; }*)0x8082120 = eax;
    ebp = *ebp;
    return cl; /* WARNING: Also returning: dl := dl, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x0806c5b4 */
void norm_heapincr()
{
}

/** address: 0x080649a0 */
void caml_page_table_initialize()
{
    unsigned int eax; 		// r24
    unsigned int eax_1; 		// r24{2}

    eax = 0;
    do {
        eax_1 = eax;
        caml_globals[eax_1] = 0x807ebc0;
        eax = eax_1 + 1;
    } while (eax_1 + 1 != 512);
    return;
}

/** address: 0x0806c5d0 */
void norm_minsize()
{
}

/** address: 0x08064772 */
void caml_set_minor_heap_size(__size32 param1)
{
    __size32 eax; 		// r24
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30
    int esp; 		// r28
    __size32 esp_1; 		// r28{4}
    __size32 esp_10; 		// r28{1}
    __size32 esp_4; 		// r28{8}
    union { __size32; __size32 *; } esp_5; 		// r28{10}
    __size32 *esp_6; 		// r28{15}
    __size32 *esp_7; 		// r28{15}
    int local0; 		// m[esp - 4]
    union { __size32 *; __size32; } local4; 		// esp_5{10}
    __size32 *local5; 		// esp_7{24}

    ebp = (esp_10 - 4);
    esp_1 = (esp_10 - 60);
    edi = param1;
    eax = *(&caml_globals + 0xc580);
    local4 = esp_1;
    if (eax != *0x807eb70) {
        esp_4 = (esp_10 - 64);
        caml_minor_collection();
        local4 = esp_4;
    }
    esp_5 = local4;
    *(__size32*)(esp_5 + 8) = (esp_10 - 32);
    *(__size32*)(esp_5 + 4) = 0;
    *(__size32*)esp_5 = param1;
    eax = caml_aligned_malloc(*esp_5, *(esp_5 + 4), *(esp_5 + 8)); /* Warning: also results in ecx, edx, esp_6 */
    local5 = esp_6;
    ebx = eax;
    if (eax == 0) {
        eax = caml_raise_out_of_memory(esp_10 - 4, *(esp_5 - 68), eax); /* Warning: also results in ecx, edx, ebx, esp, ebp, edi */
        local5 = esp;
    }
    esp_7 = local5;
    esi = eax + edi;
    *(__size32*)(esp_7 + 8) = eax + edi;
    *(__size32*)(esp_7 + 4) = eax;
    *(__size32*)esp_7 = 2;
    eax = caml_page_table_add(*esp_7, *(esp_7 + 4), *(esp_7 + 8), ecx, edx); /* Warning: also results in ecx, edx, esp */
    if (eax != 0) {
        ecx = caml_raise_out_of_memory(ebp, *(esp_7 - 68), ebx); /* Warning: also results in edx, ebx, esp, ebp, esi, edi */
    }
    eax = *(&caml_globals + 0xc578);
    if (eax != 0) {
        edx = *(&caml_globals + 0xc57c);
        *(__size32*)(esp + 8) = edx;
        *(__size32*)(esp + 4) = eax;
        *(__size32*)esp = 2;
        caml_page_table_remove(*esp, *(esp + 4), *(esp + 8));
        eax = *(&caml_globals + 0xc5c8);
        *(__size32*)esp = eax;
        ecx = free(*esp); /* Warning: also results in edx */
    }
    eax = *(ebp - 28);
    *(__size32*)(&caml_globals + 0xc5c8) = eax;
    *(__size32*)(&caml_globals + 0xc578) = ebx;
    *(__size32*)(&caml_globals + 0xc57c) = esi;
    *(__size32*)(&caml_globals + 0xc584) = ebx;
    *(__size32*)(&caml_globals + 0xc580) = esi;
    *(__size32*)(&caml_globals + 0x10160) = edi;
    ecx = reset_table(0x807eb7c, ecx, edx); /* Warning: also results in edx */
    reset_table(0x807eb98, ecx, edx);
    return;
}

/** address: 0x0806c5a0 */
void norm_pfree()
{
}

/** address: 0x0806c5af */
void norm_pmax()
{
    return;
}

/** address: 0x0806379c */
void caml_init_major_heap(__size32 param1)
{
    int ebp; 		// r29
    int esp; 		// r28

    clip_heap_chunk_size(param1, esp - 4, SUBFLAGS32(esp - 4, 24, (esp - 28)), esp == 28, (unsigned int)(esp - 4) < 24, param1, ebp, pc);
}

/** address: 0x08062e6f */
__size32 caml_gc_message(int param1, union { char *; __size32; } param2)
{
    int eax; 		// r24
    __size32 ecx; 		// r25
    __size32 edx; 		// r26

    if ( ~(param1 >= 0 && (caml_verb_gc & param1) == 0)) {
        eax = *0x807b860;
        fprintf(eax, param2);
        eax = *0x807b860;
        ecx = fflush(eax); /* Warning: also results in edx */
    }
    return ecx; /* WARNING: Also returning: edx := edx */
}

/** address: 0x08064c97 */
__size32 caml_page_table_modify(int param1, __size32 param2, __size32 param3)
{
    unsigned char al; 		// r8
    int eax_1; 		// r24
    void *eax_2; 		// r24{5}
    int eax_4; 		// r24{7}
    union { __size32; __size8 *; } ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 ecx_1; 		// r25{10}
    __size32 ecx_2; 		// r25{5}
    int edx; 		// r26
    union { void *; __size32; } edx_1; 		// r26{11}
    union { void *; __size32; } edx_2; 		// r26{6}
    __size32 local2; 		// ecx_1{10}
    union { __size32; void *; } local3; 		// edx_1{11}
    int local4; 		// eax_1{16}
    __size32 local5; 		// ecx{17}
    union { void *; __size32; } local6; 		// edx{18}

    local2 = param2;
    local3 = param3;
    if (named_value_table[((unsigned int)param1 >> 23)] != 0x807ebc0) {
bb0x8064ce5:
        ecx_1 = local2;
        edx_1 = local3;
        ebx = ((unsigned int)param1 >> 12 & 0x7ff) + named_value_table[((unsigned int)param1 >> 23)];
        al = ((unsigned char)  ~param3 & *ebx);
        *(__size8*)ebx = (al | param2);
        eax_1 = 0;
        local4 = eax_1;
        local5 = ecx_1;
        local6 = edx_1;
    }
    else {
        eax_2 = calloc(0x800, 1); /* Warning: also results in ecx_2 */
        local2 = ecx_2;
        local5 = ecx_2;
        edx_2 = eax_2;
        eax_4 = -1;
        local3 = edx_2;
        local4 = eax_4;
        local6 = edx_2;
        if (eax_2 != 0) {
            named_value_table[((unsigned int)param1 >> 23)] = eax_2;
            goto bb0x8064ce5;
        }
    }
    eax_1 = local4;
    ecx = local5;
    edx = local6;
    return eax_1; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x08064a7a */
__size32 caml_stat_alloc(size_t param1)
{
    __size8 al; 		// r8
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    void *eax; 		// r24
    __size32 ebp; 		// r29
    size_t ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30
    __size32 esp; 		// r28
    __size32 esp_1; 		// r28{9}
    __size32 esp_4; 		// r28{1}
    __size32 local5; 		// esp{18}

    eax = malloc(param1); /* Warning: also results in ecx, edx, esp_1 */
    local5 = esp_1;
    if ( ~(eax != 0 || param1 == 0)) {
        eax = caml_raise_out_of_memory(esp_4 - 4, *(esp_4 - 96), param1); /* Warning: also results in al, cl, dl, ecx, edx, esp, esi, edi */
        local5 = esp;
    }
    esp = local5;
    ebx = *(esp + 20);
    ebp = *(esp + 24);
    return eax; /* WARNING: Also returning: al := al, cl := cl, dl := dl, ecx := ecx, edx := edx, ebx := ebx, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x08064673 */
void caml_minor_collection()
{
    __size8 bl; 		// r11
    __size32 eax; 		// r24
    __size32 ebp; 		// r29
    __size32 ebx_1; 		// r27{4}
    __size32 ebx_4; 		// r27{0}
    __size32 ecx; 		// r25
    unsigned int edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30
    __size32 esp; 		// r28
    double st7; 		// r39

    ebx_1 = *(global_0x0807db9c + 0x4bac);
    caml_empty_minor_heap(bl, edi);
    eax = *(global_0x0807db9c + 0x4bac);
    st7 = (float)(eax - ebx_1) + *((double *)&*0x8082088);
    *(union { double; __size64; }*)0x8082088 = st7;
    tmp1 = *(global_0x0807db9c + 0x44fc);
    *(__size32*)(global_0x0807db9c + 0x44fc)++;
    caml_major_collection_slice(eax - ebx_1, ebx_1, esp - 4, 0, st7, ADDFLAGS32(tmp1, 1, *0x8082098), ADDFLAGS32(tmp1, 1, *0x8082098), ADDFLAGS32(tmp1, 1, *0x8082098), ebp, esi, ebx_4, 0, eax - ebx_1, 0, pc, ecx, edx);
}

/** address: 0x08062d94 */
__size32 caml_aligned_malloc(__size32 param1, __size32 param2, union { union { __size32; void *; } *; __size32; } param3)
{
    void *eax; 		// r24
    void *eax_1; 		// r24{5}
    __size32 eax_4; 		// r24{7}
    int ecx; 		// r25
    int edx; 		// r26
    __size32 local1; 		// eax{13}

    eax_1 = malloc(param1 + 0x1000); /* Warning: also results in ecx */
    edx = eax_1;
    eax_4 = 0;
    local1 = eax_4;
    if (eax_1 != 0) {
        *(union { void *; __size32; }*)param3 = eax_1;
        edx = eax_1 + param2 & ~0xfff;
        eax = (eax_1 + param2 & ~0xfff) + 0x1000;
        eax = (eax_1 + param2 & ~0xfff) - param2 + 0x1000;
        local1 = eax;
    }
    eax = local1;
    return eax; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x080619e9 */
__size32 caml_raise_out_of_memory(int param1, __size32 param2, __size32 param1)
{
    char al; 		// r8
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    union { __size32; unsigned int *; } eax; 		// r24
    int eax_1; 		// r24{180}
    union { __size32; __size32 *; } eax_10; 		// r24{263}
    union { __size32; __size32 *; } eax_11; 		// r24{263}
    __size32 eax_12; 		// r24{265}
    __size32 eax_13; 		// r24{265}
    int eax_14; 		// r24{180}
    int eax_15; 		// r24{180}
    int eax_2; 		// r24{181}
    int eax_3; 		// r24{181}
    unsigned int eax_4; 		// r24{204}
    unsigned int eax_5; 		// r24{204}
    unsigned int eax_6; 		// r24{204}
    __size32 eax_7; 		// r24{210}
    __size32 eax_8; 		// r24{210}
    union { __size32; __size32 *; } eax_9; 		// r24{263}
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{268}
    __size32 ebx_2; 		// r27{268}
    __size32 ebx_3; 		// r27{268}
    unsigned int ebx_4; 		// r27{269}
    unsigned int ebx_5; 		// r27{269}
    __size32 ecx; 		// r25
    unsigned int edi; 		// r31
    unsigned int edi_1; 		// r31{281}
    unsigned int edi_2; 		// r31{287}
    unsigned int edi_3; 		// r31{287}
    unsigned int edi_4; 		// r31{281}
    unsigned int edi_5; 		// r31{281}
    unsigned int edx; 		// r26
    unsigned int edx_1; 		// r26{33}
    unsigned int edx_2; 		// r26{36}
    unsigned int edx_3; 		// r26{36}
    unsigned int edx_4; 		// r26{33}
    unsigned int edx_5; 		// r26{33}
    __size32 esi; 		// r30
    unsigned int esi_1; 		// r30{221}
    unsigned int esi_2; 		// r30{221}
    unsigned int esi_3; 		// r30{221}
    unsigned int esi_4; 		// r30{222}
    unsigned int esi_5; 		// r30{222}
    __size32 esp; 		// r28
    void *esp_1; 		// r28{10}
    __size32 esp_10; 		// r28{72}
    __size32 esp_11; 		// r28{72}
    __size32 esp_12; 		// r28{72}
    union { __size32; __size32 *; } esp_13; 		// r28{77}
    union { __size32; __size32 *; } esp_14; 		// r28{77}
    union { __size32; __size32 *; } esp_15; 		// r28{77}
    __size32 esp_16; 		// r28{82}
    __size32 esp_17; 		// r28{82}
    __size32 esp_18; 		// r28{82}
    __size32 esp_19; 		// r28{88}
    void *esp_2; 		// r28{10}
    __size32 esp_20; 		// r28{88}
    __size32 esp_21; 		// r28{88}
    __size32 esp_22; 		// r28{94}
    __size32 esp_23; 		// r28{94}
    __size32 esp_24; 		// r28{94}
    __size32 esp_25; 		// r28{116}
    __size32 esp_26; 		// r28{116}
    __size32 esp_27; 		// r28{116}
    __size32 esp_28; 		// r28{120}
    __size32 esp_29; 		// r28{120}
    void *esp_3; 		// r28{10}
    __size32 esp_30; 		// r28{120}
    __size32 esp_31; 		// r28{124}
    __size32 esp_32; 		// r28{124}
    __size32 esp_33; 		// r28{124}
    __size32 esp_34; 		// r28{128}
    __size32 esp_35; 		// r28{128}
    __size32 esp_36; 		// r28{128}
    __size32 esp_37; 		// r28{132}
    __size32 esp_38; 		// r28{132}
    __size32 esp_39; 		// r28{132}
    __size32 esp_4; 		// r28{40}
    __size32 esp_40; 		// r28{138}
    __size32 esp_41; 		// r28{138}
    __size32 esp_42; 		// r28{138}
    __size32 esp_43; 		// r28{221}
    __size32 esp_44; 		// r28{221}
    __size32 esp_45; 		// r28{221}
    __size32 esp_46; 		// r28{268}
    __size32 esp_47; 		// r28{268}
    __size32 esp_48; 		// r28{268}
    union { __size32; __size32 *; } esp_49; 		// r28{256}
    __size32 esp_5; 		// r28{40}
    __size32 esp_50; 		// r28{1}
    __size32 esp_51; 		// r28{1}
    union { __size32; __size32 *; } esp_52; 		// r28{197}
    union { __size32; __size32 *; } esp_53; 		// r28{197}
    __size32 esp_54; 		// r28{168}
    __size32 esp_55; 		// r28{295}
    __size32 esp_56; 		// r28{331}
    __size32 esp_57; 		// r28{278}
    __size32 esp_58; 		// r28{154}
    __size32 esp_59; 		// r28{314}
    __size32 esp_6; 		// r28{40}
    __size32 esp_60; 		// r28{230}
    __size32 esp_61; 		// r28{230}
    __size32 esp_62; 		// r28{278}
    __size32 esp_63; 		// r28{278}
    __size32 esp_64; 		// r28{295}
    __size32 esp_65; 		// r28{295}
    __size32 esp_66; 		// r28{168}
    __size32 esp_67; 		// r28{168}
    __size32 esp_68; 		// r28{331}
    __size32 esp_69; 		// r28{331}
    __size32 esp_7; 		// r28{66}
    __size32 esp_70; 		// r28{154}
    __size32 esp_71; 		// r28{154}
    union { __size32; __size32 *; } esp_72; 		// r28{256}
    union { __size32; __size32 *; } esp_73; 		// r28{256}
    __size32 esp_8; 		// r28{66}
    __size32 esp_9; 		// r28{66}
    int local0; 		// m[esp - 4]
    int local1; 		// m[esp - 28]
    int local10; 		// m[esp_50 - 4]{221}
    int local100; 		// tmpb{282}
    int local101; 		// tmpb{156}
    int local102; 		// tmpb{317}
    int local103; 		// tmpb{299}
    int local104; 		// tmpb{268}
    int local105; 		// tmpb{268}
    int local106; 		// tmpb{268}
    int local107; 		// tmpb{221}
    int local108; 		// tmpb{171}
    int local109; 		// tmpb{3}
    __size32 local11; 		// m[esp_50 - 4]{260}
    int local110; 		// tmpb{3}
    int local111; 		// tmpb{334}
    int local112; 		// tmpb{334}
    int local113; 		// tmpb{171}
    int local114; 		// tmpb{171}
    int local115; 		// tmpb{282}
    int local116; 		// tmpb{282}
    int local117; 		// tmpb{233}
    int local118; 		// tmpb{233}
    __size16 local119; 		// tmph{185}
    __size32 local12; 		// m[esp_50 - 4]{301}
    __size16 local120; 		// tmph{335}
    __size16 local121; 		// tmph{283}
    __size16 local122; 		// tmph{157}
    __size16 local123; 		// tmph{318}
    __size16 local124; 		// tmph{300}
    __size16 local125; 		// tmph{185}
    __size16 local126; 		// tmph{335}
    __size16 local127; 		// tmph{283}
    __size16 local128; 		// tmph{157}
    __size16 local129; 		// tmph{318}
    __size32 local13; 		// m[esp_50 - 4]{336}
    __size16 local130; 		// tmph{300}
    int local131; 		// tmph{268}
    int local132; 		// tmph{268}
    int local133; 		// tmph{268}
    __size16 local134; 		// tmph{157}
    __size16 local135; 		// tmph{318}
    __size16 local136; 		// tmph{335}
    __size16 local137; 		// tmph{335}
    __size16 local138; 		// tmph{335}
    int local139; 		// tmph{268}
    __size32 local14; 		// m[esp_50 - 4]{284}
    __size16 local140; 		// tmph{335}
    __size16 local141; 		// tmph{283}
    __size16 local142; 		// tmph{157}
    __size16 local143; 		// tmph{318}
    __size16 local144; 		// tmph{300}
    __size16 local145; 		// tmph{185}
    __size16 local146; 		// tmph{4}
    __size16 local147; 		// tmph{4}
    __size16 local148; 		// tmph{283}
    __size16 local149; 		// tmph{283}
    int local15; 		// m[esp_50 - 4]{268}
    unsigned int local150; 		// edx_1{33}
    __size32 local151; 		// esp_58{154}
    int local152; 		// local96{156}
    __size16 local153; 		// local122{157}
    __size32 local154; 		// local27{158}
    __size32 local155; 		// m[esp_50 - 28]{159}
    unsigned int local156; 		// m[esp_50 - 32]{160}
    __size32 local157; 		// esp_54{168}
    int local158; 		// local88{171}
    __size32 local159; 		// local8{172}
    int local16; 		// m[esp_50 - 4]{268}
    __size32 local160; 		// local36{173}
    unsigned int local161; 		// local64{174}
    int local162; 		// eax_1{180}
    union { __size32 *; __size32; } local163; 		// esp_52{197}
    unsigned int local164; 		// esi{199}
    __size32 local165; 		// local7{201}
    __size32 local166; 		// local35{202}
    unsigned int local167; 		// local63{203}
    union { __size32 *; unsigned int; } local168; 		// eax{212}
    __size32 local169; 		// esp_60{230}
    __size32 local17; 		// m[esp_50 - 4]{234}
    int local170; 		// local92{233}
    __size32 local171; 		// local17{234}
    __size32 local172; 		// local45{235}
    unsigned int local173; 		// local75{236}
    unsigned int local174; 		// ebx{255}
    union { __size32 *; __size32; } local175; 		// esp_49{256}
    __size32 local176; 		// local11{260}
    __size32 local177; 		// local39{261}
    unsigned int local178; 		// local67{262}
    unsigned int local179; 		// ebx{277}
    __size32 local18; 		// m[esp_50 - 4]{234}
    __size32 local180; 		// esp_57{278}
    int local181; 		// local95{282}
    __size16 local182; 		// local121{283}
    __size32 local183; 		// local14{284}
    __size32 local184; 		// local42{285}
    unsigned int local185; 		// local70{286}
    __size32 local186; 		// esp_55{295}
    unsigned int local187; 		// edi{298}
    int local188; 		// local98{299}
    __size16 local189; 		// local124{300}
    __size32 local19; 		// m[esp_50 - 4]{201}
    __size32 local190; 		// local12{301}
    __size32 local191; 		// local40{302}
    unsigned int local192; 		// local68{303}
    __size32 local193; 		// esp_59{314}
    int local194; 		// local97{317}
    __size16 local195; 		// local123{318}
    __size32 local196; 		// m[esp_50 - 4]{319}
    __size32 local197; 		// local49{320}
    unsigned int local198; 		// local79{321}
    __size32 local199; 		// esp_56{331}
    int local2; 		// m[esp - 32]
    __size32 local20; 		// m[esp_50 - 4]{201}
    int local200; 		// local94{334}
    __size16 local201; 		// local120{335}
    __size32 local202; 		// local13{336}
    __size32 local203; 		// local41{337}
    unsigned int local204; 		// local69{338}
    __size32 local205; 		// esp{348}
    __size32 local21; 		// m[esp_50 - 4]{260}
    __size32 local22; 		// m[esp_50 - 4]{260}
    __size32 local23; 		// m[esp_50 - 4]{284}
    __size32 local24; 		// m[esp_50 - 4]{284}
    __size32 local25; 		// m[esp_50 - 4]{301}
    __size32 local26; 		// m[esp_50 - 4]{301}
    __size32 local27; 		// m[esp_50 - 4]{158}
    __size32 local28; 		// m[esp_50 - 4]{336}
    __size32 local29; 		// m[esp_50 - 4]{336}
    int local3; 		// m[esp - 64]
    __size32 local30; 		// m[esp_50 - 4]{172}
    __size32 local31; 		// m[esp_50 - 4]{172}
    __size32 local32; 		// m[esp_50 - 28]{8}
    __size32 local33; 		// m[esp_50 - 28]{8}
    __size32 local34; 		// m[esp_50 - 28]{8}
    __size32 local35; 		// m[esp_50 - 28]{202}
    __size32 local36; 		// m[esp_50 - 28]{173}
    int local37; 		// m[esp_50 - 28]{221}
    int local38; 		// m[esp_50 - 28]{221}
    __size32 local39; 		// m[esp_50 - 28]{261}
    __size32 local4; 		// m[esp_50 - 4]{7}
    __size32 local40; 		// m[esp_50 - 28]{302}
    __size32 local41; 		// m[esp_50 - 28]{337}
    __size32 local42; 		// m[esp_50 - 28]{285}
    int local43; 		// m[esp_50 - 28]{268}
    int local44; 		// m[esp_50 - 28]{268}
    __size32 local45; 		// m[esp_50 - 28]{235}
    __size32 local46; 		// m[esp_50 - 28]{235}
    __size32 local47; 		// m[esp_50 - 28]{173}
    __size32 local48; 		// m[esp_50 - 28]{173}
    __size32 local49; 		// m[esp_50 - 28]{320}
    __size32 local5; 		// m[esp_50 - 4]{7}
    __size32 local50; 		// m[esp_50 - 28]{261}
    __size32 local51; 		// m[esp_50 - 28]{261}
    __size32 local52; 		// m[esp_50 - 28]{285}
    __size32 local53; 		// m[esp_50 - 28]{285}
    __size32 local54; 		// m[esp_50 - 28]{302}
    __size32 local55; 		// m[esp_50 - 28]{302}
    __size32 local56; 		// m[esp_50 - 28]{337}
    __size32 local57; 		// m[esp_50 - 28]{337}
    __size32 local58; 		// m[esp_50 - 28]{202}
    __size32 local59; 		// m[esp_50 - 28]{202}
    __size32 local6; 		// m[esp_50 - 4]{7}
    unsigned int local60; 		// m[esp_50 - 32]{9}
    unsigned int local61; 		// m[esp_50 - 32]{9}
    unsigned int local62; 		// m[esp_50 - 32]{9}
    unsigned int local63; 		// m[esp_50 - 32]{203}
    unsigned int local64; 		// m[esp_50 - 32]{174}
    int local65; 		// m[esp_50 - 32]{221}
    int local66; 		// m[esp_50 - 32]{221}
    unsigned int local67; 		// m[esp_50 - 32]{262}
    unsigned int local68; 		// m[esp_50 - 32]{303}
    unsigned int local69; 		// m[esp_50 - 32]{338}
    __size32 local7; 		// m[esp_50 - 4]{201}
    unsigned int local70; 		// m[esp_50 - 32]{286}
    int local71; 		// m[esp_50 - 32]{268}
    int local72; 		// m[esp_50 - 32]{268}
    unsigned int local73; 		// m[esp_50 - 32]{203}
    unsigned int local74; 		// m[esp_50 - 32]{203}
    unsigned int local75; 		// m[esp_50 - 32]{236}
    unsigned int local76; 		// m[esp_50 - 32]{236}
    unsigned int local77; 		// m[esp_50 - 32]{174}
    unsigned int local78; 		// m[esp_50 - 32]{174}
    unsigned int local79; 		// m[esp_50 - 32]{321}
    __size32 local8; 		// m[esp_50 - 4]{172}
    unsigned int local80; 		// m[esp_50 - 32]{262}
    unsigned int local81; 		// m[esp_50 - 32]{262}
    unsigned int local82; 		// m[esp_50 - 32]{286}
    unsigned int local83; 		// m[esp_50 - 32]{286}
    unsigned int local84; 		// m[esp_50 - 32]{303}
    unsigned int local85; 		// m[esp_50 - 32]{303}
    unsigned int local86; 		// m[esp_50 - 32]{338}
    unsigned int local87; 		// m[esp_50 - 32]{338}
    int local88; 		// tmpb{171}
    int local89; 		// tmpb{221}
    int local9; 		// m[esp_50 - 4]{221}
    int local90; 		// tmpb{221}
    int local91; 		// tmpb{221}
    int local92; 		// tmpb{233}
    int local93; 		// tmpb{221}
    int local94; 		// tmpb{334}
    int local95; 		// tmpb{282}
    int local96; 		// tmpb{156}
    int local97; 		// tmpb{317}
    int local98; 		// tmpb{299}
    int local99; 		// tmpb{334}

    local4 = param1;
    local32 = 0x8072464;
    ebx = caml_raise(param1, 0x8072464, param2, esp_50 - 4); /* Warning: also results in esp_1, ebp, esi */
    local152 = local109;
    local153 = local146;
    local154 = local4;
    local155 = local32;
    local156 = local60;
    local158 = local109;
    local159 = local4;
    local160 = local32;
    local161 = local60;
    *(__size32*)(esp_1 - 4) = ebp;
    *(__size32*)(esp_1 - 8) = esi;
    *(__size32*)(esp_1 - 12) = ebx;
    esi = *(esp_1 + 8);
    ebx = *(esp_1 + 12);
    *(__size32*)(esp_1 - 44) = caml_local_roots;
    *(__size32*)(esp_1 - 36) = 1;
    *(__size32*)(esp_1 - 40) = 1;
    *(union { void *; __size32; }*)(esp_1 - 32) = esp_1 + 4;
    *(int*)(esp_1 - 76) = esp_1 - 44;
    caml_local_roots = esp_1 - 76;
    *(__size32*)(esp_1 - 68) = esi;
    *(__size32*)(esp_1 - 72) = 1;
    *(__size32*)(esp_1 - 64) = ebx;
    *(__size32*)(esp_1 - 88) = 0;
    *(__size32*)(esp_1 - 92) = esi + 1;
    eax = caml_alloc_small(*(esp_1 - 92), *(esp_1 - 88)); /* Warning: also results in ebx, esi */
    edx = *(esp_1 + 4);
    *(unsigned int*)eax = edx;
    if (esi > 0) {
        edx = 0;
        local150 = edx;
        do {
            edx_1 = local150;
            ecx = *(ebx + edx_1 * 4);
            *(__size32*)(eax + edx_1 * 4 + 4) = ecx;
            edx_2 = edx_1 + 1;
            local150 = edx_2;
        } while (edx_1 + 1 != esi);
    }
    *(__size32*)(esp_1 - 92) = eax;
    esp_4 = caml_raise(*(esp_1 - 128), *(esp_1 - 92), ebx, esp_1 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_4 - 4) = ebp;
    *(__size32*)(esp_4 - 44) = caml_local_roots;
    *(__size32*)(esp_4 - 36) = 1;
    *(__size32*)(esp_4 - 40) = 2;
    *(__size32*)(esp_4 - 32) = esp_4 + 4;
    *(__size32*)(esp_4 - 28) = esp_4 + 8;
    *(__size32*)(esp_4 - 48) = 0;
    *(__size32*)(esp_4 - 80) = esp_4 - 44;
    caml_local_roots = esp_4 - 80;
    *(__size32*)(esp_4 - 72) = 1;
    *(__size32*)(esp_4 - 76) = 1;
    *(__size32*)(esp_4 - 68) = esp_4 - 48;
    *(__size32*)(esp_4 - 104) = 0;
    *(__size32*)(esp_4 - 108) = 2;
    eax = caml_alloc_small(*(esp_4 - 108), *(esp_4 - 104)); /* Warning: also results in ebx */
    *(__size32*)(esp_4 - 48) = eax;
    edx = *(esp_4 + 4);
    *(__size32*)eax = edx;
    edx = *(esp_4 + 8);
    eax = *(esp_4 - 48);
    *(__size32*)(eax + 4) = edx;
    eax = *(esp_4 - 48);
    *(__size32*)(esp_4 - 108) = eax;
    esp_7 = caml_raise(*(esp_4 - 144), *(esp_4 - 108), ebx, esp_4 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_7 - 4) = ebp;
    eax = *(esp_7 + 4);
    *(__size32*)(esp_7 - 24) = eax;
    *(__size32*)(esp_7 - 28) = 0x807246c;
    esp_10 = caml_raise_with_arg(*(esp_7 - 28), *(esp_7 - 24), esp_7 - 4, *(esp_7 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_10 - 4) = ebp;
    eax = *(esp_10 + 8);
    *(__size32*)(esp_10 - 28) = eax;
    eax = caml_copy_string(*(esp_10 - 28)); /* Warning: also results in esp_13, ebp */
    *(__size32*)(esp_13 + 4) = eax;
    eax = *(ebp + 8);
    *(__size32*)esp_13 = eax;
    esp_16 = caml_raise_with_arg(*esp_13, *(esp_13 + 4), ebp, *(esp_13 - 148)); /* Warning: also results in ebp */
    *(__size32*)(esp_16 - 4) = ebp;
    eax = *(esp_16 + 4);
    *(__size32*)(esp_16 - 24) = eax;
    *(__size32*)(esp_16 - 28) = 0x80724a8;
    esp_19 = caml_raise_with_string(*(esp_16 - 24), esp_16 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_19 - 4) = ebp;
    eax = *(esp_19 + 4);
    *(__size32*)(esp_19 - 24) = eax;
    *(__size32*)(esp_19 - 28) = 0x807248c;
    esp_22 = caml_raise_with_string(*(esp_19 - 24), esp_19 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_22 - 4) = ebp;
    *(__size32*)(esp_22 - 44) = caml_local_roots;
    *(__size32*)(esp_22 - 36) = 1;
    *(__size32*)(esp_22 - 40) = 1;
    *(__size32*)(esp_22 - 32) = esp_22 + 4;
    *(__size32*)(esp_22 - 48) = 0;
    *(__size32*)(esp_22 - 80) = esp_22 - 44;
    caml_local_roots = esp_22 - 80;
    *(__size32*)(esp_22 - 72) = 1;
    *(__size32*)(esp_22 - 76) = 1;
    *(__size32*)(esp_22 - 68) = esp_22 - 48;
    *(__size32*)(esp_22 - 104) = 0;
    *(__size32*)(esp_22 - 108) = 1;
    eax = caml_alloc_small(*(esp_22 - 108), *(esp_22 - 104)); /* Warning: also results in ebx */
    *(__size32*)(esp_22 - 48) = eax;
    edx = *(esp_22 + 4);
    *(__size32*)eax = edx;
    eax = *(esp_22 - 48);
    *(__size32*)(esp_22 - 108) = eax;
    esp_25 = caml_raise(*(esp_22 - 144), *(esp_22 - 108), ebx, esp_22 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_25 - 4) = ebp;
    *(__size32*)(esp_25 - 28) = 0x8072580;
    esp_28 = caml_raise_constant(*(esp_25 - 28), esp_25 - 4, *(esp_25 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_28 - 4) = ebp;
    *(__size32*)(esp_28 - 28) = 0x8072518;
    esp_31 = caml_raise_constant(*(esp_28 - 28), esp_28 - 4, *(esp_28 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_31 - 4) = ebp;
    *(__size32*)(esp_31 - 28) = 0x80724f0;
    esp_34 = caml_raise_constant(*(esp_31 - 28), esp_31 - 4, *(esp_31 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_34 - 4) = ebp;
    *(__size32*)(esp_34 - 28) = 0x80724d0;
    cl = caml_raise_constant(*(esp_34 - 28), esp_34 - 4, *(esp_34 - 176)); /* Warning: also results in dl, ecx, edx, ebx, esp_37, ebp, esi, edi */
    *(__size32*)(esp_37 - 4) = ebp;
    ebp = esp_37 - 4;
    *(unsigned int*)(esp_37 - 8) = edi;
    *(unsigned int*)(esp_37 - 12) = esi;
    *(unsigned int*)(esp_37 - 16) = ebx;
    esp_40 = esp_37 - 60;
    eax = *(esp_37 + 8);
    al = (unsigned char) eax;
    local151 = esp_40;
    local157 = esp_40;
    if (eax != 0) {
        edx = *(esp_37 + 16);
        *(__size32*)(esp_37 - 36) = edx;
        edx = *(esp_37 + 12);
        *(__size32*)(esp_37 - 32) = eax;
        do {
bb0x8061c57:
            esp_54 = local157;
            local88 = local158;
            local8 = local159;
            local36 = local160;
            local64 = local161;
            esi = *(global_0x0807db9c + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local151 = esp_54;
            local152 = local88;
            local154 = local8;
            local155 = local36;
            local156 = local64;
            local157 = esp_54;
            local158 = local88;
            local159 = local8;
            local160 = local36;
            local161 = local64;
            local162 = eax;
            local163 = esp_54;
            local165 = local8;
            local166 = local36;
            local167 = local64;
            local169 = esp_54;
            local170 = local88;
            local171 = local8;
            local172 = local36;
            local173 = local64;
            if (*ebx != edx) {
                do {
                    eax_1 = local162;
                    eax_2 = eax_1 + 1 & esi;
                    ebx = *(caml_frame_descriptors + (eax_1 + 1 & esi) * 4);
                    local162 = eax_2;
                } while (*ebx != edx);
            }
            local119 = *(ebx + 4) + 1;
            local153 = local119;
            if (*(ebx + 4) != -1) {
                esi = *(unsigned short*)(ebx + 6);
                local164 = esi;
                if ((int)esi > 0) {
                    edi = ebx + 8;
                    *(__size32*)(ebp - 36) = ebx;
                    ebx = *(ebp + 8);
                    for(;;) {
                        esp_52 = local163;
                        esi = local164;
                        local7 = local165;
                        local35 = local166;
                        local63 = local167;
                        eax_4 = *(unsigned short*)edi;
                        if (((unsigned char) eax_4 & 0x1) == 0) {
                            eax_7 = eax_4 + *(ebp - 28);
                            flags = ADDFLAGS32(eax_4, *(ebp - 28), eax_7);
                            local168 = eax_7;
                        }
                        else {
                            flags = SARFLAGS((int)eax_4 >> 1, eax_4, 1);
                            edx = *(ebp - 32);
                            eax = edx + ((int)eax_4 >> 1) * 4;
                            local168 = eax;
                        }
                        eax = local168;
                        *(__size32*)(esp_52 + 4) = eax;
                        eax = *eax;
                        *(__size32*)esp_52 = eax;
                        (*ebx)((unsigned char) eax, cl, dl, eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, local7, local35, local63, param1);
                        local163 = esp_43;
                        local165 = local9;
                        local166 = local37;
                        local167 = local65;
                        local169 = esp_43;
                        local170 = local89;
                        local171 = local9;
                        local172 = local37;
                        local173 = local65;
                        esi_4 = esi_1 - 1;
                        local164 = esi_4;
                        if ((int)esi_1 <= 1) {
                            break;
                        }
                        edi += 2;
                    }
                    ebx = *(ebp - 36);
                }
                esp_60 = local169;
                local92 = local170;
                local17 = local171;
                local45 = local172;
                local75 = local173;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local157 = esp_60;
                local158 = local92;
                local159 = local17;
                local160 = local45;
                local161 = local75;
                goto bb0x8061c57;
            }
            eax = *(ebp - 28);
            edx = *(eax + 8);
            *(__size32*)(ebp - 28) = edx;
            edx = *(eax + 12);
            eax = *(eax + 16);
            al = (unsigned char) eax;
            *(__size32*)(ebp - 32) = eax;
        } while (*(ebp - 28) != 0);
    }
    esp_58 = local151;
    local96 = local152;
    local122 = local153;
    local27 = local154;
    *(__size32*)(esp_50 - 28) = local155;
    *(unsigned int*)(esp_50 - 32) = local156;
    local199 = esp_58;
    local200 = local96;
    local201 = local122;
    local202 = local27;
    local203 = *(esp_50 - 28);
    local204 = *(esp_50 - 32);
    local205 = esp_58;
    if (*(ebp + 24) != 0) {
        esi = *(ebp + 24);
        *(__size32*)(ebp - 28) = 0;
        do {
            esp_56 = local199;
            local94 = local200;
            local120 = local201;
            local13 = local202;
            local41 = local203;
            local69 = local204;
            edi = 0;
            local186 = esp_56;
            local187 = edi;
            local188 = local94;
            local189 = local120;
            local190 = local13;
            local191 = local41;
            local192 = local69;
            local193 = esp_56;
            local194 = local94;
            local195 = local120;
            local196 = local13;
            local197 = local41;
            local198 = local69;
            if (*(esi + 4) > 0) {
                do {
                    esp_55 = local186;
                    edi = local187;
                    local98 = local188;
                    local124 = local189;
                    local12 = local190;
                    local40 = local191;
                    local68 = local192;
                    ebx = *(ebp - 28);
                    local174 = ebx;
                    local175 = esp_55;
                    local176 = local12;
                    local177 = local40;
                    local178 = local68;
                    local179 = ebx;
                    local180 = esp_55;
                    local181 = local98;
                    local182 = local124;
                    local183 = local12;
                    local184 = local40;
                    local185 = local68;
                    if (*(esi + 8) > 0) {
                        do {
                            ebx = local174;
                            esp_49 = local175;
                            local11 = local176;
                            local39 = local177;
                            local67 = local178;
                            eax_9 = ebx * 4 + *(esi + edi * 4 + 12);
                            *(__size32*)(esp_49 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_49 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, cl, dl, eax_12, ecx, edx, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), local11, local39, local67, param1);
                            local175 = esp_46;
                            local176 = local15;
                            local177 = local43;
                            local178 = local71;
                            local180 = esp_46;
                            local181 = local104;
                            local182 = local131;
                            local183 = local15;
                            local184 = local43;
                            local185 = local71;
                            ebx_4 = ebx_1 + 1;
                            local174 = ebx_4;
                            local179 = ebx_4;
                        } while (*(esi + 8) > ebx_1 + 1);
                    }
                    ebx = local179;
                    esp_57 = local180;
                    edi_1 = edi;
                    local95 = local181;
                    local121 = local182;
                    local14 = local183;
                    local42 = local184;
                    local70 = local185;
                    edi_2 = edi_1 + 1;
                    local186 = esp_57;
                    local187 = edi_2;
                    local188 = local95;
                    local189 = local121;
                    local190 = local14;
                    local191 = local42;
                    local192 = local70;
                    local193 = esp_57;
                    local194 = local95;
                    local195 = local121;
                    local196 = local14;
                    local197 = local42;
                    local198 = local70;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_59 = local193;
            local97 = local194;
            local123 = local195;
            *(__size32*)(esp_50 - 4) = local196;
            local49 = local197;
            local79 = local198;
            esi = *esi;
            local199 = esp_59;
            local200 = local97;
            local201 = local123;
            local202 = *(esp_50 - 4);
            local203 = local49;
            local204 = local79;
            local205 = esp_59;
        } while (esi == 0);
    }
    esp = local205;
    ebx = *(esp + 44);
    esi = *(esp + 48);
    edi = *(esp + 52);
    ebp = *(esp + 56);
    return eax; /* WARNING: Also returning: al := al, cl := cl, dl := dl, ecx := ecx, edx := edx, ebx := ebx, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x08064d12 */
void caml_page_table_remove(__size32 param1, int param2, int param3)
{
    int eax; 		// r24
    int ebx; 		// r27
    int ebx_1; 		// r27{7}
    int ebx_2; 		// r27{11}
    int local0; 		// ebx_1{7}

    ebx = param2 & ~0xfff;
    local0 = ebx;
    if ((unsigned int)(param2 & ~0xfff) <= (unsigned int)(param3 - 1 & ~0xfff)) {
        do {
            ebx_1 = local0;
            eax = caml_page_table_modify(ebx_1, 0, param1);
            if (eax != 0) {
                return;
            }
            ebx_2 = ebx_1 + 0x1000;
            local0 = ebx_2;
        } while ((unsigned int)(param3 - 1 & ~0xfff) >= ebx_1 + 0x1000);
    }
    return;
}

/** address: 0x08064725 */
__size32 reset_table(union { __size32; __size32 *; } param1, __size32 param2, __size32 param3)
{
    __size32 eax_1; 		// r24{6}
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    __size32 local1; 		// param2{9}
    __size32 local2; 		// param3{10}

    *(__size32*)(param1 + 20) = 0;
    *(__size32*)(param1 + 24) = 0;
    eax_1 = *param1;
    local1 = param2;
    local2 = param3;
    if (eax_1 != 0) {
        ecx = caml_stat_free(eax_1); /* Warning: also results in edx */
        local1 = ecx;
        local2 = edx;
    }
    param2 = local1;
    param3 = local2;
    *(__size32*)(param1 + 4) = 0;
    *(__size32*)(param1 + 16) = 0;
    *(__size32*)(param1 + 8) = 0;
    *(__size32*)(param1 + 12) = 0;
    *(__size32*)param1 = 0;
    return param2; /* WARNING: Also returning: edx := param3 */
}

/** address: 0x08063780 */
void clip_heap_chunk_size()
{
}

/** address: 0x08064c5b */
void caml_alloc_for_heap(__size32 param1, __size32 param2)
{
    union { __size32; __size32 *; } eax; 		// r24
    __size32 esp; 		// r28

    eax = caml_aligned_malloc(param2 + 16, 16, esp - 16);
    if (eax != 0) {
        *(__size32*)(eax + 8) = param2;
        *(__size32*)eax = param1;
    }
    return;
}

/** address: 0x08062f82 */
void caml_fl_init_merge()
{
    *(__size32*)(&caml_globals + 0xc54c) = 0;
    *(__size32*)(&caml_globals + 0x9148) = 0x807b748;
    return;
}

/** address: 0x08063279 */
void caml_make_free_blocks(__size32 param1)
{
    if (param1 != 0) {
    }
    return;
}

/** address: 0x08064529 */
void caml_empty_minor_heap(__size8 param1, unsigned int param4)
{
    char dl; 		// r10
    __size32 eax; 		// r24
    union { unsigned int; __size32 *; } eax_1; 		// r24{25}
    unsigned int ebx; 		// r27
    unsigned int ebx_1; 		// r27{8}
    int ebx_4; 		// r27{17}
    union { unsigned int; union { unsigned int *; __size32; } *; } ebx_7; 		// r27{10}
    unsigned int ebx_8; 		// r27{18}
    int ecx; 		// r25
    __size32 ecx_1; 		// r25{0}
    unsigned int edx; 		// r26
    unsigned int esi; 		// r30
    int esi_1; 		// r30{17}
    __size32 esp; 		// r28
    int local0; 		// m[esp - 4]
    union { union { unsigned int *; __size32; } *; unsigned int; } local7; 		// ebx_7{10}

    eax = *(global_0x0807db9c + 0xfd8);
    if (eax != *0x807eb70) {
        *(__size32*)(global_0x0807db9c + 0x1018) = 1;
        caml_gc_message(2, 0x807119c);
        esp = caml_oldify_local_roots(param1, ecx, ebx, esp - 4, esi, param4);
        ebx_1 = *(global_0x0807db9c + 0xfe0);
        local7 = ebx_1;
        if (ebx_1 < *(global_0x0807db9c + 0xfec)) {
            do {
                ebx_7 = local7;
                eax = *ebx_7;
                *(__size32*)(esp + 4) = eax;
                eax = *eax;
                *(unsigned int*)esp = eax;
                esp = caml_oldify_one(*esp, *(esp + 4), dl, eax, ecx_1, edx);
                ebx_8 = ebx_4 + 4;
                local7 = ebx_8;
            } while (*esi_1 > ebx_4 + 4);
        }
        caml_oldify_mopup();
        eax = *(global_0x0807db9c + 0xffc);
        if (eax < *(global_0x0807db9c + 0x1008)) {
            do {
                eax_1 = eax;
                ecx = *eax_1;
                edx = *ecx;
                if ( ~(((unsigned char) edx & 0x1) != 0 || edx >= *(global_0x0807db9c + 0xfd4) || edx <= *(global_0x0807db9c + 0xfd0))) {
                    if (*(edx - 4) == 0) {
                        edx = *edx;
                        *(__size32*)ecx = edx;
                        goto bb0x80645db;
                    }
                    *(__size32*)ecx = caml_weak_none;
                    goto bb0x80645db;
                }
bb0x80645db:
                eax = eax_1 + 4;
            } while (*(global_0x0807db9c + 0x1008) > eax_1 + 4);
        }
    }
    caml_final_empty_young();
    return;
}

/** address: 0x08064018 */
void caml_major_collection_slice()
{
    __size32 eax; 		// r24
    __size32 ebp; 		// r29
    __size32 edx; 		// r26
    __size32 esi; 		// r30
    __size32 esp; 		// r28
    double st4; 		// r36
    double st5; 		// r37
    double st6; 		// r38
    double st7; 		// r39

    ebp = esp - 4;
    if (*0x808273c != 2) {
bb0x8064032:
        eax = *(global_0x0807db9c + 0x4bac);
        edx = *(global_0x0807db9c + 0x4b94);
        *(__size32*)(ebp - 32) = edx + 100;
        *(__size32*)(ebp - 28) = 0;
        st7 = (float)*(ebp - 32);
        *(__size32*)(ebp - 32) = edx;
        *(__size32*)(ebp - 28) = 0;
        st6 = (float)*(ebp - 32);
        *(__size32*)(ebp - 32) = eax;
        *(__size32*)(ebp - 28) = 0;
        st5 = (float)*(ebp - 32);
        edx = *(global_0x0807db9c + 0x4504);
        *(int*)(ebp - 32) = (unsigned int)edx >> 2;
        *(__size32*)(ebp - 28) = 0;
        st4 = (float)*(ebp - 32);
        *(union { double; __size64; }*)(ebp - 48) = st5 * 3. * st7 / st4 / st6 * 0.5;
        edx = *(global_0x0807db9c + 0x4b98);
        if (edx != 0) {
            esi = *(global_0x0807db9c + 0x4bb4);
            *(__size32*)(ebp - 32) = esi;
            *(__size32*)(ebp - 28) = 0;
            *(__size32*)(ebp - 32) = edx;
            *(__size32*)(ebp - 28) = 0;
bb0x80640d0:
        }
        goto bb0x80640d0;
    }
    ebp = start_cycle();
    goto bb0x8064032;
}

/** address: 0x0806f4b9 */
void caml_final_do_calls(__size32 param3, __size32 param4)
{
    __size32 eax; 		// r24
    __size32 ebp; 		// r29
    int ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    int edx; 		// r26
    __size32 esi; 		// r30
    union { __size32; void *; } *esp; 		// r28
    int local0; 		// m[esp - 4]
    __size32 local6; 		// param3{19}
    __size32 local7; 		// param4{20}

    ebp = esp - 4;
    local6 = param3;
    local7 = param4;
    if ( ~(*0x8082100 != 0 || *0x8082114 == 0)) {
        ecx = caml_gc_message(128, 0x8071c34); /* Warning: also results in edx, esp */
bb0x806f516:
        param3 = local6;
        param4 = local7;
        eax = *0x8082114;
        local6 = param3;
        local6 = param3;
        local7 = param4;
        local7 = param4;
        while (eax != 0) {
            edx = *(eax + 4);
            if (edx == 0) {
                ebx = *eax;
                *(__size32*)esp = eax;
                ecx = free(*esp); /* Warning: also results in edx, esp */
                *(int*)(global_0x0807db9c + 0x4578) = ebx;
                if (ebx != 0) {
                    continue;
                }
                *(__size32*)(global_0x0807db9c + 0x457c) = 0;
            }
            else {
                *(int*)(eax + 4) = edx - 1;
                eax += (edx - 1) * 12;
                edx = *(eax + 8);
                ecx = *(eax + 16);
                eax = *(eax + 12);
                *(__size32*)(global_0x0807db9c + 0x4564) = 1;
                *(__size32*)(esp + 4) = eax + ecx;
                *(__size32*)esp = edx;
                ebx = caml_callback_exn(); /* Warning: also results in esp, ebp, esi, edi */
                local6 = esi;
                local7 = edi;
                *(__size32*)(global_0x0807db9c + 0x4564) = 0;
                edx = eax + ecx & 0x3;
                if ((eax + ecx & 0x3) != 2) {
                    goto bb0x806f516;
                }
                *(union { void *; int; }*)esp = eax + ecx & ~0x3;
                ecx = caml_raise(*(esp - 36), *esp, ebx, ebp); /* Warning: also results in edx, esp */
                goto bb0x806f572;
            }
bb0x806f516:
            param3 = local6;
            param4 = local7;
            eax = *0x8082114;
            local6 = param3;
            local6 = param3;
            local7 = param4;
            local7 = param4;
        }
bb0x806f572:
        *(__size32*)(esp + 8) = 0;
        *(__size32*)(esp + 4) = 0x8071c58;
        *(__size32*)esp = 128;
        caml_gc_message(*esp, *(esp + 4));
    }
    return;
}

/** address: 0x08061910 */
__size32 caml_raise(int param1, __size32 param2, __size32 param3, __size32 param4)
{
    unsigned char al; 		// r8
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    __size32 eax; 		// r24
    int eax_1; 		// r24{239}
    union { __size32; __size32 *; } eax_10; 		// r24{323}
    union { __size32; __size32 *; } eax_11; 		// r24{323}
    __size32 eax_12; 		// r24{325}
    __size32 eax_13; 		// r24{325}
    int eax_14; 		// r24{239}
    int eax_15; 		// r24{239}
    int eax_2; 		// r24{240}
    int eax_3; 		// r24{240}
    unsigned int eax_4; 		// r24{263}
    unsigned int eax_5; 		// r24{263}
    unsigned int eax_6; 		// r24{263}
    __size32 eax_7; 		// r24{269}
    __size32 eax_8; 		// r24{269}
    union { __size32; __size32 *; } eax_9; 		// r24{323}
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{11}
    __size32 ebx_2; 		// r27{11}
    __size32 ebx_3; 		// r27{328}
    __size32 ebx_4; 		// r27{328}
    __size32 ebx_5; 		// r27{328}
    unsigned int ebx_6; 		// r27{329}
    unsigned int ebx_7; 		// r27{329}
    __size32 ebx_8; 		// r27{3}
    __size32 ebx_9; 		// r27{3}
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    unsigned int edi_1; 		// r31{341}
    unsigned int edi_2; 		// r31{348}
    unsigned int edi_3; 		// r31{348}
    unsigned int edi_4; 		// r31{341}
    unsigned int edi_5; 		// r31{341}
    __size32 edx; 		// r26
    unsigned int edx_1; 		// r26{90}
    unsigned int edx_2; 		// r26{93}
    unsigned int edx_3; 		// r26{93}
    unsigned int edx_4; 		// r26{90}
    unsigned int edx_5; 		// r26{90}
    __size32 esi; 		// r30
    unsigned int esi_1; 		// r30{280}
    unsigned int esi_2; 		// r30{280}
    unsigned int esi_3; 		// r30{280}
    unsigned int esi_4; 		// r30{281}
    unsigned int esi_5; 		// r30{281}
    __size32 esp; 		// r28
    __size32 esp_1; 		// r28{10}
    __size32 esp_10; 		// r28{59}
    __size32 esp_11; 		// r28{59}
    __size32 esp_12; 		// r28{59}
    __size32 esp_13; 		// r28{63}
    __size32 esp_14; 		// r28{63}
    __size32 esp_15; 		// r28{63}
    __size32 esp_16; 		// r28{67}
    __size32 esp_17; 		// r28{67}
    __size32 esp_18; 		// r28{67}
    __size32 esp_19; 		// r28{97}
    __size32 esp_2; 		// r28{10}
    __size32 esp_20; 		// r28{97}
    __size32 esp_21; 		// r28{97}
    __size32 esp_22; 		// r28{123}
    __size32 esp_23; 		// r28{123}
    __size32 esp_24; 		// r28{123}
    void *esp_25; 		// r28{129}
    void *esp_26; 		// r28{129}
    void *esp_27; 		// r28{129}
    union { __size32; __size32 *; } esp_28; 		// r28{134}
    union { __size32; __size32 *; } esp_29; 		// r28{134}
    __size32 esp_3; 		// r28{10}
    union { __size32; __size32 *; } esp_30; 		// r28{134}
    __size32 esp_31; 		// r28{139}
    __size32 esp_32; 		// r28{139}
    __size32 esp_33; 		// r28{139}
    __size32 esp_34; 		// r28{145}
    __size32 esp_35; 		// r28{145}
    __size32 esp_36; 		// r28{145}
    __size32 esp_37; 		// r28{151}
    __size32 esp_38; 		// r28{151}
    __size32 esp_39; 		// r28{151}
    __size32 esp_4; 		// r28{15}
    __size32 esp_40; 		// r28{173}
    __size32 esp_41; 		// r28{173}
    __size32 esp_42; 		// r28{173}
    __size32 esp_43; 		// r28{177}
    __size32 esp_44; 		// r28{177}
    __size32 esp_45; 		// r28{177}
    __size32 esp_46; 		// r28{181}
    __size32 esp_47; 		// r28{181}
    __size32 esp_48; 		// r28{181}
    __size32 esp_49; 		// r28{185}
    __size32 esp_5; 		// r28{15}
    __size32 esp_50; 		// r28{185}
    __size32 esp_51; 		// r28{185}
    __size32 esp_52; 		// r28{189}
    __size32 esp_53; 		// r28{189}
    __size32 esp_54; 		// r28{189}
    __size32 esp_55; 		// r28{195}
    __size32 esp_56; 		// r28{195}
    __size32 esp_57; 		// r28{195}
    __size32 esp_58; 		// r28{280}
    __size32 esp_59; 		// r28{280}
    __size32 esp_6; 		// r28{15}
    __size32 esp_60; 		// r28{280}
    __size32 esp_61; 		// r28{328}
    __size32 esp_62; 		// r28{328}
    __size32 esp_63; 		// r28{328}
    union { __size32; __size32 *; } esp_64; 		// r28{316}
    __size32 esp_65; 		// r28{1}
    __size32 esp_66; 		// r28{1}
    union { __size32; __size32 *; } esp_67; 		// r28{256}
    union { __size32; __size32 *; } esp_68; 		// r28{256}
    __size32 esp_69; 		// r28{226}
    __size32 esp_7; 		// r28{42}
    union { __size32; __size32 *; } esp_70; 		// r28{18}
    __size32 esp_71; 		// r28{356}
    __size32 esp_72; 		// r28{394}
    __size32 esp_73; 		// r28{338}
    __size32 esp_74; 		// r28{211}
    __size32 esp_75; 		// r28{376}
    __size32 esp_76; 		// r28{289}
    __size32 esp_77; 		// r28{289}
    __size32 esp_78; 		// r28{226}
    __size32 esp_79; 		// r28{226}
    __size32 esp_8; 		// r28{42}
    __size32 esp_80; 		// r28{211}
    __size32 esp_81; 		// r28{211}
    union { __size32; __size32 *; } esp_82; 		// r28{316}
    union { __size32; __size32 *; } esp_83; 		// r28{316}
    __size32 esp_84; 		// r28{338}
    __size32 esp_85; 		// r28{338}
    __size32 esp_86; 		// r28{356}
    __size32 esp_87; 		// r28{356}
    __size32 esp_88; 		// r28{394}
    __size32 esp_89; 		// r28{394}
    __size32 esp_9; 		// r28{42}
    union { __size32; __size32 *; } esp_90; 		// r28{18}
    union { __size32; __size32 *; } esp_91; 		// r28{18}
    int local0; 		// m[esp - 4]
    int local1; 		// m[esp - 8]
    int local10; 		// m[esp_65 + 4]{280}
    int local100; 		// m[esp_65 - 32]{15}
    int local101; 		// m[esp_65 - 32]{262}
    int local102; 		// m[esp_65 - 32]{232}
    int local103; 		// m[esp_65 - 32]{280}
    int local104; 		// m[esp_65 - 32]{280}
    int local105; 		// m[esp_65 - 32]{322}
    int local106; 		// m[esp_65 - 32]{364}
    int local107; 		// m[esp_65 - 32]{401}
    int local108; 		// m[esp_65 - 32]{346}
    int local109; 		// m[esp_65 - 32]{328}
    __size32 local11; 		// m[esp_65 + 4]{233}
    int local110; 		// m[esp_65 - 32]{328}
    int local111; 		// m[esp_65 - 32]{23}
    int local112; 		// m[esp_65 - 32]{23}
    int local113; 		// m[esp_65 - 32]{262}
    int local114; 		// m[esp_65 - 32]{262}
    int local115; 		// m[esp_65 - 32]{295}
    int local116; 		// m[esp_65 - 32]{295}
    int local117; 		// m[esp_65 - 32]{232}
    int local118; 		// m[esp_65 - 32]{232}
    int local119; 		// m[esp_65 - 32]{383}
    __size32 local12; 		// m[esp_65 + 4]{24}
    int local120; 		// m[esp_65 - 32]{322}
    int local121; 		// m[esp_65 - 32]{322}
    int local122; 		// m[esp_65 - 32]{346}
    int local123; 		// m[esp_65 - 32]{346}
    int local124; 		// m[esp_65 - 32]{364}
    int local125; 		// m[esp_65 - 32]{364}
    int local126; 		// m[esp_65 - 32]{401}
    int local127; 		// m[esp_65 - 32]{401}
    int local128; 		// m[esp_65 - 32]{7}
    int local129; 		// m[esp_65 - 32]{7}
    int local13; 		// m[esp_65 + 4]{328}
    int local130; 		// tmpb{280}
    int local131; 		// tmpb{229}
    int local132; 		// tmpb{19}
    int local133; 		// tmpb{292}
    int local134; 		// tmpb{328}
    int local135; 		// tmpb{397}
    int local136; 		// tmpb{5}
    int local137; 		// tmpb{5}
    int local138; 		// tmpb{342}
    int local139; 		// tmpb{213}
    int local14; 		// m[esp_65 + 4]{328}
    int local140; 		// tmpb{379}
    int local141; 		// tmpb{360}
    int local142; 		// tmpb{280}
    int local143; 		// tmpb{280}
    int local144; 		// tmpb{328}
    int local145; 		// tmpb{328}
    int local146; 		// tmpb{19}
    int local147; 		// tmpb{19}
    int local148; 		// tmpb{292}
    int local149; 		// tmpb{292}
    __size32 local15; 		// m[esp_65 + 4]{296}
    int local150; 		// tmpb{229}
    int local151; 		// tmpb{229}
    int local152; 		// tmpb{342}
    int local153; 		// tmpb{342}
    int local154; 		// tmpb{397}
    int local155; 		// tmpb{397}
    __size16 local156; 		// tmph{244}
    __size16 local157; 		// tmph{398}
    __size16 local158; 		// tmph{343}
    __size16 local159; 		// tmph{214}
    __size32 local16; 		// m[esp_65 + 4]{347}
    __size16 local160; 		// tmph{380}
    __size16 local161; 		// tmph{361}
    __size16 local162; 		// tmph{244}
    __size16 local163; 		// tmph{244}
    __size16 local164; 		// tmph{398}
    __size16 local165; 		// tmph{343}
    __size16 local166; 		// tmph{214}
    __size16 local167; 		// tmph{380}
    __size16 local168; 		// tmph{361}
    int local169; 		// tmph{328}
    __size32 local17; 		// m[esp_65 + 4]{218}
    int local170; 		// tmph{328}
    int local171; 		// tmph{328}
    int local172; 		// tmph{328}
    int local173; 		// tmph{328}
    __size16 local174; 		// tmph{398}
    __size16 local175; 		// tmph{343}
    __size16 local176; 		// tmph{214}
    __size16 local177; 		// tmph{380}
    __size16 local178; 		// tmph{361}
    __size16 local179; 		// tmph{20}
    __size32 local18; 		// m[esp_65 + 4]{384}
    __size16 local180; 		// tmph{244}
    __size16 local181; 		// tmph{20}
    __size16 local182; 		// tmph{20}
    __size16 local183; 		// tmph{20}
    __size16 local184; 		// tmph{214}
    __size16 local185; 		// tmph{343}
    __size16 local186; 		// tmph{343}
    __size16 local187; 		// tmph{343}
    __size16 local188; 		// tmph{361}
    __size16 local189; 		// tmph{380}
    __size32 local19; 		// m[esp_65 + 4]{365}
    __size16 local190; 		// tmph{398}
    __size16 local191; 		// tmph{398}
    __size16 local192; 		// tmph{398}
    __size32 local193; 		// ebx{17}
    union { __size32 *; __size32; } local194; 		// esp_70{18}
    __size32 local195; 		// local48{21}
    __size32 local196; 		// local81{22}
    int local197; 		// local111{23}
    __size32 local198; 		// local12{24}
    unsigned int local199; 		// edx_1{90}
    int local2; 		// m[esp - 28]
    __size32 local20; 		// m[esp_65 + 4]{402}
    __size32 local200; 		// esp_74{211}
    int local201; 		// local139{213}
    __size16 local202; 		// local159{214}
    __size32 local203; 		// m[esp_65 - 4]{215}
    __size32 local204; 		// m[esp_65 - 8]{216}
    int local205; 		// m[esp_65 - 32]{217}
    __size32 local206; 		// local17{218}
    __size32 local207; 		// esp_69{226}
    int local208; 		// local131{229}
    __size32 local209; 		// local39{230}
    __size32 local21; 		// m[esp_65 + 4]{402}
    __size32 local210; 		// local72{231}
    int local211; 		// local102{232}
    __size32 local212; 		// local11{233}
    int local213; 		// eax_1{239}
    union { __size32 *; __size32; } local214; 		// esp_67{256}
    unsigned int local215; 		// esi{258}
    __size32 local216; 		// local38{260}
    __size32 local217; 		// local71{261}
    int local218; 		// local101{262}
    union { __size32 *; unsigned int; } local219; 		// eax{271}
    __size32 local22; 		// m[esp_65 + 4]{347}
    __size32 local220; 		// esp_76{289}
    int local221; 		// local133{292}
    __size32 local222; 		// local52{293}
    __size32 local223; 		// local85{294}
    int local224; 		// local115{295}
    __size32 local225; 		// local15{296}
    unsigned int local226; 		// ebx{315}
    union { __size32 *; __size32; } local227; 		// esp_64{316}
    __size32 local228; 		// local42{320}
    __size32 local229; 		// local75{321}
    __size32 local23; 		// m[esp_65 + 4]{347}
    int local230; 		// local105{322}
    unsigned int local231; 		// ebx{337}
    __size32 local232; 		// esp_73{338}
    int local233; 		// local138{342}
    __size16 local234; 		// local158{343}
    __size32 local235; 		// local45{344}
    __size32 local236; 		// local78{345}
    int local237; 		// local108{346}
    __size32 local238; 		// local16{347}
    __size32 local239; 		// esp_71{356}
    __size32 local24; 		// m[esp_65 + 4]{24}
    unsigned int local240; 		// edi{359}
    int local241; 		// local141{360}
    __size16 local242; 		// local161{361}
    __size32 local243; 		// local43{362}
    __size32 local244; 		// local76{363}
    int local245; 		// local106{364}
    __size32 local246; 		// local19{365}
    __size32 local247; 		// esp_75{376}
    int local248; 		// local140{379}
    __size16 local249; 		// local160{380}
    __size32 local25; 		// m[esp_65 + 4]{24}
    __size32 local250; 		// local56{381}
    __size32 local251; 		// local89{382}
    int local252; 		// local119{383}
    __size32 local253; 		// local18{384}
    __size32 local254; 		// esp_72{394}
    int local255; 		// local135{397}
    __size16 local256; 		// local157{398}
    __size32 local257; 		// local44{399}
    __size32 local258; 		// local77{400}
    int local259; 		// local107{401}
    __size32 local26; 		// m[esp_65 + 4]{4}
    __size32 local260; 		// local20{402}
    __size32 local261; 		// esp{408}
    __size32 local27; 		// m[esp_65 + 4]{4}
    __size32 local28; 		// m[esp_65 + 4]{233}
    __size32 local29; 		// m[esp_65 + 4]{233}
    int local3; 		// m[esp - 32]
    __size32 local30; 		// m[esp_65 + 4]{296}
    __size32 local31; 		// m[esp_65 + 4]{296}
    __size32 local32; 		// m[esp_65 - 4]{8}
    __size32 local33; 		// m[esp_65 - 4]{8}
    __size32 local34; 		// m[esp_65 - 4]{8}
    int local35; 		// m[esp_65 - 4]{15}
    int local36; 		// m[esp_65 - 4]{15}
    int local37; 		// m[esp_65 - 4]{15}
    __size32 local38; 		// m[esp_65 - 4]{260}
    __size32 local39; 		// m[esp_65 - 4]{230}
    __size32 local4; 		// m[esp + 4]
    int local40; 		// m[esp_65 - 4]{280}
    int local41; 		// m[esp_65 - 4]{280}
    __size32 local42; 		// m[esp_65 - 4]{320}
    __size32 local43; 		// m[esp_65 - 4]{362}
    __size32 local44; 		// m[esp_65 - 4]{399}
    __size32 local45; 		// m[esp_65 - 4]{344}
    int local46; 		// m[esp_65 - 4]{328}
    int local47; 		// m[esp_65 - 4]{328}
    __size32 local48; 		// m[esp_65 - 4]{21}
    __size32 local49; 		// m[esp_65 - 4]{21}
    int local5; 		// m[esp_65 + 4]{15}
    __size32 local50; 		// m[esp_65 - 4]{260}
    __size32 local51; 		// m[esp_65 - 4]{260}
    __size32 local52; 		// m[esp_65 - 4]{293}
    __size32 local53; 		// m[esp_65 - 4]{293}
    __size32 local54; 		// m[esp_65 - 4]{230}
    __size32 local55; 		// m[esp_65 - 4]{230}
    __size32 local56; 		// m[esp_65 - 4]{381}
    __size32 local57; 		// m[esp_65 - 4]{320}
    __size32 local58; 		// m[esp_65 - 4]{320}
    __size32 local59; 		// m[esp_65 - 4]{344}
    int local6; 		// m[esp_65 + 4]{15}
    __size32 local60; 		// m[esp_65 - 4]{344}
    __size32 local61; 		// m[esp_65 - 4]{362}
    __size32 local62; 		// m[esp_65 - 4]{362}
    __size32 local63; 		// m[esp_65 - 4]{399}
    __size32 local64; 		// m[esp_65 - 4]{399}
    __size32 local65; 		// m[esp_65 - 8]{9}
    __size32 local66; 		// m[esp_65 - 8]{9}
    __size32 local67; 		// m[esp_65 - 8]{9}
    int local68; 		// m[esp_65 - 8]{15}
    int local69; 		// m[esp_65 - 8]{15}
    int local7; 		// m[esp_65 + 4]{15}
    int local70; 		// m[esp_65 - 8]{15}
    __size32 local71; 		// m[esp_65 - 8]{261}
    __size32 local72; 		// m[esp_65 - 8]{231}
    int local73; 		// m[esp_65 - 8]{280}
    int local74; 		// m[esp_65 - 8]{280}
    __size32 local75; 		// m[esp_65 - 8]{321}
    __size32 local76; 		// m[esp_65 - 8]{363}
    __size32 local77; 		// m[esp_65 - 8]{400}
    __size32 local78; 		// m[esp_65 - 8]{345}
    int local79; 		// m[esp_65 - 8]{328}
    int local8; 		// m[esp_65 + 4]{280}
    int local80; 		// m[esp_65 - 8]{328}
    __size32 local81; 		// m[esp_65 - 8]{22}
    __size32 local82; 		// m[esp_65 - 8]{22}
    __size32 local83; 		// m[esp_65 - 8]{261}
    __size32 local84; 		// m[esp_65 - 8]{261}
    __size32 local85; 		// m[esp_65 - 8]{294}
    __size32 local86; 		// m[esp_65 - 8]{294}
    __size32 local87; 		// m[esp_65 - 8]{231}
    __size32 local88; 		// m[esp_65 - 8]{231}
    __size32 local89; 		// m[esp_65 - 8]{382}
    int local9; 		// m[esp_65 + 4]{280}
    __size32 local90; 		// m[esp_65 - 8]{321}
    __size32 local91; 		// m[esp_65 - 8]{321}
    __size32 local92; 		// m[esp_65 - 8]{345}
    __size32 local93; 		// m[esp_65 - 8]{345}
    __size32 local94; 		// m[esp_65 - 8]{363}
    __size32 local95; 		// m[esp_65 - 8]{363}
    __size32 local96; 		// m[esp_65 - 8]{400}
    __size32 local97; 		// m[esp_65 - 8]{400}
    int local98; 		// m[esp_65 - 32]{15}
    int local99; 		// m[esp_65 - 32]{15}

    local32 = param4;
    local65 = param3;
    esp_1 = esp_65 - 28;
    ebx_1 = param2;
    eax = *(global_0x0807db9c + 0x2434);
    al = (unsigned char) eax;
    local193 = ebx_1;
    local194 = esp_1;
    local195 = local32;
    local196 = local65;
    local197 = param1;
    local198 = param2;
    if (eax != 0) {
        (*eax)((unsigned char) eax, eax, param2, esp_65 - 4, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), param4, param3, pc, cl, dl, ecx, edx, esi, edi, param2);
        local193 = ebx;
        local194 = esp_4;
        local195 = local35;
        local196 = local68;
        local197 = local98;
        local198 = local5;
    }
    ebx = local193;
    esp_70 = local194;
    local132 = local136;
    local179 = tmph;
    local48 = local195;
    local81 = local196;
    local111 = local197;
    local12 = local198;
    local201 = local132;
    local202 = local179;
    local203 = local48;
    local204 = local81;
    local205 = local111;
    local206 = local12;
    local208 = local132;
    local209 = local48;
    local210 = local81;
    local211 = local111;
    local212 = local12;
    if (caml_exception_pointer == 0) {
        *(__size32*)esp_70 = ebx;
        caml_fatal_uncaught_exception(*esp_70, al);
    }
    eax = caml_local_roots;
    al = (unsigned char) caml_local_roots;
    if (caml_local_roots != 0) {
        if (caml_local_roots < caml_exception_pointer) {
            do {
                eax = *eax;
                al = (unsigned char) eax;
                caml_local_roots = eax;
            } while (eax != 0 && caml_exception_pointer > eax);
        }
    }
    *(__size32*)esp_70 = ebx;
    ecx = caml_raise_exception(al, cl, dl); /* Warning: also results in edx, ebx, esp_7, ebp */
    *(__size32*)(esp_7 - 4) = ebp;
    if (*0x807b9e4 == 0) {
        array_bound_error_msg = 0x14fc;
        global_0x0807b727 = 0;
        array_bound_error_bucket = 0x800;
        global_0x0807b9ec = 0x80724a8;
        global_0x0807b9f0 = 0x807b714;
        array_bound_error_bucket_inited = 1;
        *(__size32*)(esp_7 - 20) = 0x807b72c;
        *(__size32*)(esp_7 - 24) = 0x807b710;
        *(__size32*)(esp_7 - 28) = 4;
        caml_page_table_add(*(esp_7 - 28), *(esp_7 - 24), *(esp_7 - 20), ecx, edx);
        array_bound_error_bucket_inited = 1;
    }
    *(__size32*)(esp_7 - 28) = 0x807b9ec;
    ebx = caml_raise(*(esp_7 - 64), *(esp_7 - 28), ebx, esp_7 - 4); /* Warning: also results in esp_10, ebp */
    *(__size32*)(esp_10 - 4) = ebp;
    *(__size32*)(esp_10 - 28) = 0x8072578;
    ebx = caml_raise(*(esp_10 - 64), *(esp_10 - 28), ebx, esp_10 - 4); /* Warning: also results in esp_13, ebp */
    *(__size32*)(esp_13 - 4) = ebp;
    *(__size32*)(esp_13 - 28) = 0x8072464;
    ebx = caml_raise(*(esp_13 - 64), *(esp_13 - 28), ebx, esp_13 - 4); /* Warning: also results in esp_16, ebp, esi */
    *(__size32*)(esp_16 - 4) = ebp;
    *(__size32*)(esp_16 - 8) = esi;
    *(__size32*)(esp_16 - 12) = ebx;
    esi = *(esp_16 + 8);
    ebx = *(esp_16 + 12);
    *(__size32*)(esp_16 - 44) = caml_local_roots;
    *(__size32*)(esp_16 - 36) = 1;
    *(__size32*)(esp_16 - 40) = 1;
    *(__size32*)(esp_16 - 32) = esp_16 + 4;
    *(__size32*)(esp_16 - 76) = esp_16 - 44;
    caml_local_roots = esp_16 - 76;
    *(__size32*)(esp_16 - 68) = esi;
    *(__size32*)(esp_16 - 72) = 1;
    *(__size32*)(esp_16 - 64) = ebx;
    *(__size32*)(esp_16 - 88) = 0;
    *(__size32*)(esp_16 - 92) = esi + 1;
    eax = caml_alloc_small(*(esp_16 - 92), *(esp_16 - 88)); /* Warning: also results in ebx, esi */
    edx = *(esp_16 + 4);
    *(unsigned int*)eax = edx;
    if (esi > 0) {
        edx = 0;
        local199 = edx;
        do {
            edx_1 = local199;
            ecx = *(ebx + edx_1 * 4);
            *(__size32*)(eax + edx_1 * 4 + 4) = ecx;
            edx_2 = edx_1 + 1;
            local199 = edx_2;
        } while (edx_1 + 1 != esi);
    }
    *(__size32*)(esp_16 - 92) = eax;
    esp_19 = caml_raise(*(esp_16 - 128), *(esp_16 - 92), ebx, esp_16 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_19 - 4) = ebp;
    *(__size32*)(esp_19 - 44) = caml_local_roots;
    *(__size32*)(esp_19 - 36) = 1;
    *(__size32*)(esp_19 - 40) = 2;
    *(__size32*)(esp_19 - 32) = esp_19 + 4;
    *(__size32*)(esp_19 - 28) = esp_19 + 8;
    *(__size32*)(esp_19 - 48) = 0;
    *(__size32*)(esp_19 - 80) = esp_19 - 44;
    caml_local_roots = esp_19 - 80;
    *(__size32*)(esp_19 - 72) = 1;
    *(__size32*)(esp_19 - 76) = 1;
    *(__size32*)(esp_19 - 68) = esp_19 - 48;
    *(__size32*)(esp_19 - 104) = 0;
    *(__size32*)(esp_19 - 108) = 2;
    eax = caml_alloc_small(*(esp_19 - 108), *(esp_19 - 104)); /* Warning: also results in ebx */
    *(__size32*)(esp_19 - 48) = eax;
    edx = *(esp_19 + 4);
    *(__size32*)eax = edx;
    edx = *(esp_19 + 8);
    eax = *(esp_19 - 48);
    *(__size32*)(eax + 4) = edx;
    eax = *(esp_19 - 48);
    *(__size32*)(esp_19 - 108) = eax;
    esp_22 = caml_raise(*(esp_19 - 144), *(esp_19 - 108), ebx, esp_19 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_22 - 4) = ebp;
    eax = *(esp_22 + 4);
    *(__size32*)(esp_22 - 24) = eax;
    *(__size32*)(esp_22 - 28) = 0x807246c;
    esp_25 = caml_raise_with_arg(*(esp_22 - 28), *(esp_22 - 24), esp_22 - 4, *(esp_22 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_25 - 4) = ebp;
    eax = *(esp_25 + 8);
    *(__size32*)(esp_25 - 28) = eax;
    eax = caml_copy_string(*(esp_25 - 28)); /* Warning: also results in esp_28, ebp */
    *(__size32*)(esp_28 + 4) = eax;
    eax = *(ebp + 8);
    *(__size32*)esp_28 = eax;
    esp_31 = caml_raise_with_arg(*esp_28, *(esp_28 + 4), ebp, *(esp_28 - 148)); /* Warning: also results in ebp */
    *(__size32*)(esp_31 - 4) = ebp;
    eax = *(esp_31 + 4);
    *(__size32*)(esp_31 - 24) = eax;
    *(__size32*)(esp_31 - 28) = 0x80724a8;
    esp_34 = caml_raise_with_string(*(esp_31 - 24), esp_31 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_34 - 4) = ebp;
    eax = *(esp_34 + 4);
    *(__size32*)(esp_34 - 24) = eax;
    *(__size32*)(esp_34 - 28) = 0x807248c;
    esp_37 = caml_raise_with_string(*(esp_34 - 24), esp_34 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_37 - 4) = ebp;
    *(__size32*)(esp_37 - 44) = caml_local_roots;
    *(__size32*)(esp_37 - 36) = 1;
    *(__size32*)(esp_37 - 40) = 1;
    *(__size32*)(esp_37 - 32) = esp_37 + 4;
    *(__size32*)(esp_37 - 48) = 0;
    *(__size32*)(esp_37 - 80) = esp_37 - 44;
    caml_local_roots = esp_37 - 80;
    *(__size32*)(esp_37 - 72) = 1;
    *(__size32*)(esp_37 - 76) = 1;
    *(__size32*)(esp_37 - 68) = esp_37 - 48;
    *(__size32*)(esp_37 - 104) = 0;
    *(__size32*)(esp_37 - 108) = 1;
    eax = caml_alloc_small(*(esp_37 - 108), *(esp_37 - 104)); /* Warning: also results in ebx */
    *(__size32*)(esp_37 - 48) = eax;
    edx = *(esp_37 + 4);
    *(__size32*)eax = edx;
    eax = *(esp_37 - 48);
    *(__size32*)(esp_37 - 108) = eax;
    esp_40 = caml_raise(*(esp_37 - 144), *(esp_37 - 108), ebx, esp_37 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_40 - 4) = ebp;
    *(__size32*)(esp_40 - 28) = 0x8072580;
    esp_43 = caml_raise_constant(*(esp_40 - 28), esp_40 - 4, *(esp_40 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_43 - 4) = ebp;
    *(__size32*)(esp_43 - 28) = 0x8072518;
    esp_46 = caml_raise_constant(*(esp_43 - 28), esp_43 - 4, *(esp_43 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_46 - 4) = ebp;
    *(__size32*)(esp_46 - 28) = 0x80724f0;
    esp_49 = caml_raise_constant(*(esp_46 - 28), esp_46 - 4, *(esp_46 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_49 - 4) = ebp;
    *(__size32*)(esp_49 - 28) = 0x80724d0;
    cl = caml_raise_constant(*(esp_49 - 28), esp_49 - 4, *(esp_49 - 176)); /* Warning: also results in dl, ecx, edx, ebx, esp_52, ebp, esi, edi */
    *(__size32*)(esp_52 - 4) = ebp;
    ebp = esp_52 - 4;
    *(unsigned int*)(esp_52 - 8) = edi;
    *(unsigned int*)(esp_52 - 12) = esi;
    *(unsigned int*)(esp_52 - 16) = ebx;
    esp_55 = esp_52 - 60;
    eax = *(esp_52 + 8);
    al = (unsigned char) eax;
    local200 = esp_55;
    local207 = esp_55;
    if (eax != 0) {
        edx = *(esp_52 + 16);
        *(__size32*)(esp_52 - 36) = edx;
        edx = *(esp_52 + 12);
        *(__size32*)(esp_52 - 32) = eax;
        do {
bb0x8061c57:
            esp_69 = local207;
            local131 = local208;
            local39 = local209;
            local72 = local210;
            local102 = local211;
            local11 = local212;
            esi = *(global_0x0807db9c + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local200 = esp_69;
            local201 = local131;
            local203 = local39;
            local204 = local72;
            local205 = local102;
            local206 = local11;
            local207 = esp_69;
            local208 = local131;
            local209 = local39;
            local210 = local72;
            local211 = local102;
            local212 = local11;
            local213 = eax;
            local214 = esp_69;
            local216 = local39;
            local217 = local72;
            local218 = local102;
            local220 = esp_69;
            local221 = local131;
            local222 = local39;
            local223 = local72;
            local224 = local102;
            local225 = local11;
            if (*ebx != edx) {
                do {
                    eax_1 = local213;
                    eax_2 = eax_1 + 1 & esi;
                    ebx = *(caml_frame_descriptors + (eax_1 + 1 & esi) * 4);
                    local213 = eax_2;
                } while (*ebx != edx);
            }
            local156 = *(ebx + 4) + 1;
            local202 = local156;
            if (*(ebx + 4) != -1) {
                esi = *(unsigned short*)(ebx + 6);
                local215 = esi;
                if ((int)esi > 0) {
                    edi = ebx + 8;
                    *(__size32*)(ebp - 36) = ebx;
                    ebx = *(ebp + 8);
                    for(;;) {
                        esp_67 = local214;
                        esi = local215;
                        local38 = local216;
                        local71 = local217;
                        local101 = local218;
                        eax_4 = *(unsigned short*)edi;
                        if (((unsigned char) eax_4 & 0x1) == 0) {
                            eax_7 = eax_4 + *(ebp - 28);
                            flags = ADDFLAGS32(eax_4, *(ebp - 28), eax_7);
                            local219 = eax_7;
                        }
                        else {
                            flags = SARFLAGS((int)eax_4 >> 1, eax_4, 1);
                            edx = *(ebp - 32);
                            eax = edx + ((int)eax_4 >> 1) * 4;
                            local219 = eax;
                        }
                        eax = local219;
                        *(__size32*)(esp_67 + 4) = eax;
                        eax = *eax;
                        *(__size32*)esp_67 = eax;
                        (*ebx)((unsigned char) eax, cl, dl, eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, local38, local71, local101, param2);
                        local214 = esp_58;
                        local216 = local40;
                        local217 = local73;
                        local218 = local103;
                        local220 = esp_58;
                        local221 = local130;
                        local222 = local40;
                        local223 = local73;
                        local224 = local103;
                        local225 = local8;
                        esi_4 = esi_1 - 1;
                        local215 = esi_4;
                        if ((int)esi_1 <= 1) {
                            break;
                        }
                        edi += 2;
                    }
                    ebx = *(ebp - 36);
                }
                esp_76 = local220;
                local133 = local221;
                local52 = local222;
                local85 = local223;
                local115 = local224;
                local15 = local225;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local207 = esp_76;
                local208 = local133;
                local209 = local52;
                local210 = local85;
                local211 = local115;
                local212 = local15;
                goto bb0x8061c57;
            }
            eax = *(ebp - 28);
            edx = *(eax + 8);
            *(__size32*)(ebp - 28) = edx;
            edx = *(eax + 12);
            eax = *(eax + 16);
            al = (unsigned char) eax;
            *(__size32*)(ebp - 32) = eax;
        } while (*(ebp - 28) != 0);
    }
    esp_74 = local200;
    local139 = local201;
    local159 = local202;
    *(__size32*)(esp_65 - 4) = local203;
    *(__size32*)(esp_65 - 8) = local204;
    *(esp_65 - 32) = local205;
    local17 = local206;
    local254 = esp_74;
    local255 = local139;
    local256 = local159;
    local257 = *(esp_65 - 4);
    local258 = *(esp_65 - 8);
    local259 = *(esp_65 - 32);
    local260 = local17;
    local261 = esp_74;
    if (*(ebp + 24) != 0) {
        esi = *(ebp + 24);
        *(__size32*)(ebp - 28) = 0;
        do {
            esp_72 = local254;
            local135 = local255;
            local157 = local256;
            local44 = local257;
            local77 = local258;
            local107 = local259;
            local20 = local260;
            edi = 0;
            local239 = esp_72;
            local240 = edi;
            local241 = local135;
            local242 = local157;
            local243 = local44;
            local244 = local77;
            local245 = local107;
            local246 = local20;
            local247 = esp_72;
            local248 = local135;
            local249 = local157;
            local250 = local44;
            local251 = local77;
            local252 = local107;
            local253 = local20;
            if (*(esi + 4) > 0) {
                do {
                    esp_71 = local239;
                    edi = local240;
                    local141 = local241;
                    local161 = local242;
                    local43 = local243;
                    local76 = local244;
                    local106 = local245;
                    local19 = local246;
                    ebx = *(ebp - 28);
                    local226 = ebx;
                    local227 = esp_71;
                    local228 = local43;
                    local229 = local76;
                    local230 = local106;
                    local231 = ebx;
                    local232 = esp_71;
                    local233 = local141;
                    local234 = local161;
                    local235 = local43;
                    local236 = local76;
                    local237 = local106;
                    local238 = local19;
                    if (*(esi + 8) > 0) {
                        do {
                            ebx = local226;
                            esp_64 = local227;
                            local42 = local228;
                            local75 = local229;
                            local105 = local230;
                            eax_9 = ebx * 4 + *(esi + edi * 4 + 12);
                            *(__size32*)(esp_64 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_64 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, cl, dl, eax_12, ecx, edx, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), local42, local75, local105, param2);
                            local227 = esp_61;
                            local228 = local46;
                            local229 = local79;
                            local230 = local109;
                            local232 = esp_61;
                            local233 = local134;
                            local234 = local169;
                            local235 = local46;
                            local236 = local79;
                            local237 = local109;
                            local238 = local13;
                            ebx_6 = ebx_3 + 1;
                            local226 = ebx_6;
                            local231 = ebx_6;
                        } while (*(esi + 8) > ebx_3 + 1);
                    }
                    ebx = local231;
                    esp_73 = local232;
                    edi_1 = edi;
                    local138 = local233;
                    local158 = local234;
                    local45 = local235;
                    local78 = local236;
                    local108 = local237;
                    local16 = local238;
                    edi_2 = edi_1 + 1;
                    local239 = esp_73;
                    local240 = edi_2;
                    local241 = local138;
                    local242 = local158;
                    local243 = local45;
                    local244 = local78;
                    local245 = local108;
                    local246 = local16;
                    local247 = esp_73;
                    local248 = local138;
                    local249 = local158;
                    local250 = local45;
                    local251 = local78;
                    local252 = local108;
                    local253 = local16;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_75 = local247;
            local140 = local248;
            local160 = local249;
            local56 = local250;
            local89 = local251;
            local119 = local252;
            local18 = local253;
            esi = *esi;
            local254 = esp_75;
            local255 = local140;
            local256 = local160;
            local257 = local56;
            local258 = local89;
            local259 = local119;
            local260 = local18;
            local261 = esp_75;
        } while (esi == 0);
    }
    esp = local261;
    ebx = *(esp + 44);
    esi = *(esp + 48);
    ebp = *(esp + 56);
    return ecx; /* WARNING: Also returning: edx := edx, ebx := ebx, ebp := ebp, esi := esi */
}

/** address: 0x08065161 */
__size32 caml_alloc_small(unsigned int param1, __size32 param2)
{
    unsigned int eax; 		// r24
    __size32 ebx; 		// r27
    __size32 esi; 		// r30
    __size32 esp_1; 		// r28{4}
    __size32 esp_4; 		// r28{9}
    union { __size32; __size32 *; } esp_7; 		// r28{12}
    __size32 esp_8; 		// r28{1}
    union { __size32 *; __size32; } local4; 		// esp_7{12}

    esp_1 = esp_8 - 12;
    eax = *(global_0x0807db9c + 0xfd8) - param1 * 4 - 4;
    *(unsigned int*)(global_0x0807db9c + 0xfd8) = eax;
    local4 = esp_1;
    if (eax < *(global_0x0807db9c + 0xfdc)) {
        *(unsigned int*)(global_0x0807db9c + 0xfd8) = eax + param1 * 4 + 4;
        esp_4 = esp_8 - 16;
        caml_minor_collection();
        local4 = esp_4;
        *(__size32*)(global_0x0807db9c + 0xfd8) = *(global_0x0807db9c + 0xfd8) - param1 * 4 - 4;
    }
    esp_7 = local4;
    eax = *0x807eb74;
    *(__size32*)eax = param2 + (param1 << 10) + 768;
    eax = *(global_0x0807db9c + 0xfd8);
    ebx = *esp_7;
    esi = *(esp_7 + 4);
    return eax + 4; /* WARNING: Also returning: ebx := ebx, esi := esi */
}

/** address: 0x08061a77 */
__size32 caml_raise_with_arg(int param1, __size32 param1, __size32 param2, __size32 param3)
{
    char al; 		// r8
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    union { __size32; __size32 *; } eax; 		// r24
    int eax_1; 		// r24{166}
    union { __size32; __size32 *; } eax_10; 		// r24{284}
    union { __size32; __size32 *; } eax_11; 		// r24{284}
    __size32 eax_12; 		// r24{286}
    __size32 eax_13; 		// r24{286}
    int eax_14; 		// r24{166}
    int eax_15; 		// r24{166}
    int eax_2; 		// r24{167}
    int eax_3; 		// r24{167}
    unsigned int eax_4; 		// r24{201}
    unsigned int eax_5; 		// r24{201}
    unsigned int eax_6; 		// r24{201}
    __size32 eax_7; 		// r24{207}
    __size32 eax_8; 		// r24{207}
    union { __size32; __size32 *; } eax_9; 		// r24{284}
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{289}
    __size32 ebx_2; 		// r27{289}
    __size32 ebx_3; 		// r27{289}
    unsigned int ebx_4; 		// r27{290}
    unsigned int ebx_5; 		// r27{290}
    __size32 ecx; 		// r25
    unsigned int edi; 		// r31
    unsigned int edi_1; 		// r31{302}
    unsigned int edi_2; 		// r31{321}
    unsigned int edi_3; 		// r31{321}
    unsigned int edi_4; 		// r31{302}
    unsigned int edi_5; 		// r31{302}
    __size32 edx; 		// r26
    unsigned int esi; 		// r30
    unsigned int esi_1; 		// r30{218}
    unsigned int esi_2; 		// r30{218}
    unsigned int esi_3; 		// r30{218}
    unsigned int esi_4; 		// r30{219}
    unsigned int esi_5; 		// r30{219}
    __size32 esp; 		// r28
    __size32 esp_1; 		// r28{26}
    __size32 esp_10; 		// r28{42}
    __size32 esp_11; 		// r28{42}
    __size32 esp_12; 		// r28{42}
    void *esp_13; 		// r28{48}
    void *esp_14; 		// r28{48}
    void *esp_15; 		// r28{48}
    __size32 esp_16; 		// r28{54}
    __size32 esp_17; 		// r28{54}
    __size32 esp_18; 		// r28{54}
    __size32 esp_19; 		// r28{76}
    __size32 esp_2; 		// r28{26}
    __size32 esp_20; 		// r28{76}
    __size32 esp_21; 		// r28{76}
    __size32 esp_22; 		// r28{80}
    __size32 esp_23; 		// r28{80}
    __size32 esp_24; 		// r28{80}
    __size32 esp_25; 		// r28{84}
    __size32 esp_26; 		// r28{84}
    __size32 esp_27; 		// r28{84}
    __size32 esp_28; 		// r28{88}
    __size32 esp_29; 		// r28{88}
    __size32 esp_3; 		// r28{26}
    __size32 esp_30; 		// r28{88}
    __size32 esp_31; 		// r28{92}
    __size32 esp_32; 		// r28{92}
    __size32 esp_33; 		// r28{92}
    __size32 esp_34; 		// r28{98}
    __size32 esp_35; 		// r28{98}
    __size32 esp_36; 		// r28{98}
    __size32 esp_37; 		// r28{218}
    __size32 esp_38; 		// r28{218}
    __size32 esp_39; 		// r28{218}
    __size32 esp_4; 		// r28{32}
    __size32 esp_40; 		// r28{289}
    __size32 esp_41; 		// r28{289}
    __size32 esp_42; 		// r28{289}
    union { __size32; __size32 *; } esp_43; 		// r28{266}
    union { __size32; __size32 *; } esp_44; 		// r28{266}
    union { __size32; __size32 *; } esp_45; 		// r28{266}
    __size32 esp_46; 		// r28{299}
    __size32 esp_47; 		// r28{299}
    __size32 esp_48; 		// r28{299}
    __size32 esp_49; 		// r28{329}
    __size32 esp_5; 		// r28{32}
    __size32 esp_50; 		// r28{329}
    __size32 esp_51; 		// r28{329}
    __size32 esp_52; 		// r28{361}
    __size32 esp_53; 		// r28{391}
    __size32 esp_54; 		// r28{391}
    __size32 esp_55; 		// r28{391}
    union { __size32; __size32 *; } esp_56; 		// r28{183}
    union { __size32; __size32 *; } esp_57; 		// r28{183}
    union { __size32; __size32 *; } esp_58; 		// r28{183}
    __size32 esp_59; 		// r28{227}
    __size32 esp_6; 		// r28{32}
    __size32 esp_60; 		// r28{227}
    __size32 esp_61; 		// r28{227}
    __size32 esp_62; 		// r28{141}
    __size32 esp_63; 		// r28{141}
    __size32 esp_64; 		// r28{141}
    __size32 esp_65; 		// r28{114}
    __size32 esp_66; 		// r28{114}
    __size32 esp_67; 		// r28{114}
    __size32 esp_68; 		// r28{1}
    __size32 esp_69; 		// r28{1}
    __size32 *esp_7; 		// r28{37}
    __size32 *esp_8; 		// r28{37}
    __size32 *esp_9; 		// r28{37}
    int local0; 		// m[esp - 4]
    int local1; 		// m[esp - 108]
    int local10; 		// m[esp - 76]
    __size32 local100; 		// m[esp_68 - 28]{188}
    __size32 local101; 		// m[esp_68 - 28]{188}
    __size32 local102; 		// m[esp_68 - 28]{232}
    __size32 local103; 		// m[esp_68 - 28]{232}
    __size32 local104; 		// m[esp_68 - 28]{146}
    __size32 local105; 		// m[esp_68 - 28]{146}
    __size32 local106; 		// m[esp_68 - 28]{367}
    __size32 local107; 		// m[esp_68 - 28]{271}
    __size32 local108; 		// m[esp_68 - 28]{271}
    __size32 local109; 		// m[esp_68 - 28]{306}
    int local11; 		// m[esp - 68]
    __size32 local110; 		// m[esp_68 - 28]{306}
    __size32 local111; 		// m[esp_68 - 28]{336}
    __size32 local112; 		// m[esp_68 - 28]{336}
    __size32 local113; 		// m[esp_68 - 28]{397}
    __size32 local114; 		// m[esp_68 - 28]{397}
    __size32 local115; 		// m[esp_68 - 32]{12}
    __size32 local116; 		// m[esp_68 - 32]{12}
    __size32 local117; 		// m[esp_68 - 32]{12}
    __size32 local118; 		// m[esp_68 - 32]{189}
    __size32 local119; 		// m[esp_68 - 32]{147}
    int local12; 		// m[esp - 104]
    int local120; 		// m[esp_68 - 32]{218}
    int local121; 		// m[esp_68 - 32]{218}
    __size32 local122; 		// m[esp_68 - 32]{272}
    __size32 local123; 		// m[esp_68 - 32]{337}
    __size32 local124; 		// m[esp_68 - 32]{398}
    __size32 local125; 		// m[esp_68 - 32]{307}
    int local126; 		// m[esp_68 - 32]{289}
    int local127; 		// m[esp_68 - 32]{289}
    __size32 local128; 		// m[esp_68 - 32]{307}
    __size32 local129; 		// m[esp_68 - 32]{307}
    int local13; 		// m[esp - 112]
    __size32 local130; 		// m[esp_68 - 32]{398}
    __size32 local131; 		// m[esp_68 - 32]{398}
    __size32 local132; 		// m[esp_68 - 32]{337}
    __size32 local133; 		// m[esp_68 - 32]{337}
    __size32 local134; 		// m[esp_68 - 32]{120}
    __size32 local135; 		// m[esp_68 - 32]{233}
    __size32 local136; 		// m[esp_68 - 32]{189}
    __size32 local137; 		// m[esp_68 - 32]{189}
    __size32 local138; 		// m[esp_68 - 32]{233}
    __size32 local139; 		// m[esp_68 - 32]{233}
    int local14; 		// m[esp - 144]
    __size32 local140; 		// m[esp_68 - 32]{147}
    __size32 local141; 		// m[esp_68 - 32]{147}
    __size32 local142; 		// m[esp_68 - 32]{272}
    __size32 local143; 		// m[esp_68 - 32]{272}
    __size32 local144; 		// m[esp_68 - 36]{10}
    __size32 local145; 		// m[esp_68 - 36]{10}
    __size32 local146; 		// m[esp_68 - 36]{10}
    __size32 local147; 		// m[esp_68 - 36]{190}
    __size32 local148; 		// m[esp_68 - 36]{148}
    int local149; 		// m[esp_68 - 36]{218}
    __size32 local15; 		// m[esp + 4]
    int local150; 		// m[esp_68 - 36]{218}
    __size32 local151; 		// m[esp_68 - 36]{273}
    __size32 local152; 		// m[esp_68 - 36]{338}
    __size32 local153; 		// m[esp_68 - 36]{399}
    __size32 local154; 		// m[esp_68 - 36]{308}
    int local155; 		// m[esp_68 - 36]{289}
    int local156; 		// m[esp_68 - 36]{289}
    __size32 local157; 		// m[esp_68 - 36]{148}
    __size32 local158; 		// m[esp_68 - 36]{148}
    __size32 local159; 		// m[esp_68 - 36]{399}
    __size32 local16; 		// m[esp + 8]
    __size32 local160; 		// m[esp_68 - 36]{399}
    __size32 local161; 		// m[esp_68 - 36]{308}
    __size32 local162; 		// m[esp_68 - 36]{308}
    __size32 local163; 		// m[esp_68 - 36]{190}
    __size32 local164; 		// m[esp_68 - 36]{190}
    __size32 local165; 		// m[esp_68 - 36]{338}
    __size32 local166; 		// m[esp_68 - 36]{338}
    __size32 local167; 		// m[esp_68 - 36]{121}
    __size32 local168; 		// m[esp_68 - 36]{234}
    __size32 local169; 		// m[esp_68 - 36]{234}
    int local17; 		// m[esp_68 + 4]{218}
    __size32 local170; 		// m[esp_68 - 36]{234}
    __size32 local171; 		// m[esp_68 - 36]{273}
    __size32 local172; 		// m[esp_68 - 36]{273}
    __size32 local173; 		// m[esp_68 - 40]{11}
    __size32 local174; 		// m[esp_68 - 40]{11}
    __size32 local175; 		// m[esp_68 - 40]{11}
    __size32 local176; 		// m[esp_68 - 40]{191}
    __size32 local177; 		// m[esp_68 - 40]{149}
    int local178; 		// m[esp_68 - 40]{218}
    int local179; 		// m[esp_68 - 40]{218}
    int local18; 		// m[esp_68 + 4]{218}
    __size32 local180; 		// m[esp_68 - 40]{274}
    __size32 local181; 		// m[esp_68 - 40]{339}
    __size32 local182; 		// m[esp_68 - 40]{400}
    __size32 local183; 		// m[esp_68 - 40]{309}
    int local184; 		// m[esp_68 - 40]{289}
    int local185; 		// m[esp_68 - 40]{289}
    __size32 local186; 		// m[esp_68 - 40]{339}
    __size32 local187; 		// m[esp_68 - 40]{339}
    __size32 local188; 		// m[esp_68 - 40]{235}
    __size32 local189; 		// m[esp_68 - 40]{235}
    int local19; 		// m[esp_68 + 4]{218}
    __size32 local190; 		// m[esp_68 - 40]{122}
    __size32 local191; 		// m[esp_68 - 40]{309}
    __size32 local192; 		// m[esp_68 - 40]{309}
    __size32 local193; 		// m[esp_68 - 40]{274}
    __size32 local194; 		// m[esp_68 - 40]{274}
    __size32 local195; 		// m[esp_68 - 40]{149}
    __size32 local196; 		// m[esp_68 - 40]{149}
    __size32 local197; 		// m[esp_68 - 40]{400}
    __size32 local198; 		// m[esp_68 - 40]{400}
    __size32 local199; 		// m[esp_68 - 40]{191}
    int local2; 		// m[esp - 44]
    __size32 local20; 		// m[esp_68 + 4]{159}
    __size32 local200; 		// m[esp_68 - 40]{191}
    __size32 local201; 		// m[esp_68 - 44]{9}
    __size32 local202; 		// m[esp_68 - 44]{9}
    __size32 local203; 		// m[esp_68 - 44]{9}
    __size32 local204; 		// m[esp_68 - 44]{192}
    __size32 local205; 		// m[esp_68 - 44]{150}
    int local206; 		// m[esp_68 - 44]{218}
    int local207; 		// m[esp_68 - 44]{218}
    __size32 local208; 		// m[esp_68 - 44]{275}
    __size32 local209; 		// m[esp_68 - 44]{340}
    int local21; 		// m[esp_68 + 4]{289}
    __size32 local210; 		// m[esp_68 - 44]{401}
    __size32 local211; 		// m[esp_68 - 44]{310}
    int local212; 		// m[esp_68 - 44]{289}
    int local213; 		// m[esp_68 - 44]{289}
    __size32 local214; 		// m[esp_68 - 44]{275}
    __size32 local215; 		// m[esp_68 - 44]{275}
    __size32 local216; 		// m[esp_68 - 44]{340}
    __size32 local217; 		// m[esp_68 - 44]{340}
    __size32 local218; 		// m[esp_68 - 44]{401}
    __size32 local219; 		// m[esp_68 - 44]{401}
    int local22; 		// m[esp_68 + 4]{289}
    __size32 local220; 		// m[esp_68 - 44]{310}
    __size32 local221; 		// m[esp_68 - 44]{310}
    __size32 local222; 		// m[esp_68 - 44]{150}
    __size32 local223; 		// m[esp_68 - 44]{150}
    __size32 local224; 		// m[esp_68 - 44]{192}
    __size32 local225; 		// m[esp_68 - 44]{192}
    __size32 local226; 		// m[esp_68 - 44]{371}
    __size32 local227; 		// m[esp_68 - 44]{236}
    __size32 local228; 		// m[esp_68 - 44]{236}
    __size32 local229; 		// m[esp_68 - 44]{236}
    __size32 local23; 		// m[esp_68 + 4]{3}
    __size32 local230; 		// m[esp_68 - 48]{21}
    __size32 local231; 		// m[esp_68 - 48]{21}
    __size32 local232; 		// m[esp_68 - 48]{21}
    __size32 local233; 		// m[esp_68 - 48]{193}
    __size32 local234; 		// m[esp_68 - 48]{151}
    int local235; 		// m[esp_68 - 48]{218}
    int local236; 		// m[esp_68 - 48]{218}
    __size32 local237; 		// m[esp_68 - 48]{276}
    __size32 local238; 		// m[esp_68 - 48]{341}
    __size32 local239; 		// m[esp_68 - 48]{402}
    __size32 local24; 		// m[esp_68 + 4]{3}
    __size32 local240; 		// m[esp_68 - 48]{311}
    int local241; 		// m[esp_68 - 48]{289}
    int local242; 		// m[esp_68 - 48]{289}
    __size32 local243; 		// m[esp_68 - 48]{193}
    __size32 local244; 		// m[esp_68 - 48]{193}
    __size32 local245; 		// m[esp_68 - 48]{151}
    __size32 local246; 		// m[esp_68 - 48]{151}
    __size32 local247; 		// m[esp_68 - 48]{311}
    __size32 local248; 		// m[esp_68 - 48]{311}
    __size32 local249; 		// m[esp_68 - 48]{402}
    __size32 local25; 		// m[esp_68 + 4]{410}
    __size32 local250; 		// m[esp_68 - 48]{402}
    __size32 local251; 		// m[esp_68 - 48]{276}
    __size32 local252; 		// m[esp_68 - 48]{276}
    __size32 local253; 		// m[esp_68 - 48]{124}
    __size32 local254; 		// m[esp_68 - 48]{237}
    __size32 local255; 		// m[esp_68 - 48]{237}
    __size32 local256; 		// m[esp_68 - 48]{237}
    __size32 local257; 		// m[esp_68 - 48]{341}
    __size32 local258; 		// m[esp_68 - 48]{341}
    __size32 local259; 		// m[esp_68 - 68]{18}
    __size32 local26; 		// m[esp_68 + 4]{319}
    __size32 local260; 		// m[esp_68 - 68]{18}
    __size32 local261; 		// m[esp_68 - 68]{18}
    __size32 local262; 		// m[esp_68 - 68]{194}
    __size32 local263; 		// m[esp_68 - 68]{152}
    int local264; 		// m[esp_68 - 68]{218}
    int local265; 		// m[esp_68 - 68]{218}
    __size32 local266; 		// m[esp_68 - 68]{277}
    __size32 local267; 		// m[esp_68 - 68]{342}
    __size32 local268; 		// m[esp_68 - 68]{403}
    __size32 local269; 		// m[esp_68 - 68]{312}
    __size32 local27; 		// m[esp_68 + 4]{132}
    int local270; 		// m[esp_68 - 68]{289}
    int local271; 		// m[esp_68 - 68]{289}
    __size32 local272; 		// m[esp_68 - 68]{152}
    __size32 local273; 		// m[esp_68 - 68]{152}
    __size32 local274; 		// m[esp_68 - 68]{373}
    __size32 local275; 		// m[esp_68 - 68]{238}
    __size32 local276; 		// m[esp_68 - 68]{277}
    __size32 local277; 		// m[esp_68 - 68]{277}
    __size32 local278; 		// m[esp_68 - 68]{312}
    __size32 local279; 		// m[esp_68 - 68]{312}
    __size32 local28; 		// m[esp_68 + 4]{380}
    __size32 local280; 		// m[esp_68 - 68]{342}
    __size32 local281; 		// m[esp_68 - 68]{342}
    __size32 local282; 		// m[esp_68 - 68]{403}
    __size32 local283; 		// m[esp_68 - 68]{403}
    __size32 local284; 		// m[esp_68 - 68]{238}
    __size32 local285; 		// m[esp_68 - 68]{238}
    __size32 local286; 		// m[esp_68 - 68]{194}
    __size32 local287; 		// m[esp_68 - 68]{194}
    __size32 local288; 		// m[esp_68 - 72]{16}
    __size32 local289; 		// m[esp_68 - 72]{16}
    __size32 local29; 		// m[esp_68 + 4]{349}
    __size32 local290; 		// m[esp_68 - 72]{16}
    __size32 local291; 		// m[esp_68 - 72]{195}
    __size32 local292; 		// m[esp_68 - 72]{153}
    int local293; 		// m[esp_68 - 72]{218}
    int local294; 		// m[esp_68 - 72]{218}
    __size32 local295; 		// m[esp_68 - 72]{278}
    __size32 local296; 		// m[esp_68 - 72]{343}
    __size32 local297; 		// m[esp_68 - 72]{404}
    __size32 local298; 		// m[esp_68 - 72]{313}
    int local299; 		// m[esp_68 - 72]{289}
    int local3; 		// m[esp - 36]
    __size32 local30; 		// m[esp_68 + 4]{245}
    int local300; 		// m[esp_68 - 72]{289}
    __size32 local301; 		// m[esp_68 - 72]{195}
    __size32 local302; 		// m[esp_68 - 72]{195}
    __size32 local303; 		// m[esp_68 - 72]{239}
    __size32 local304; 		// m[esp_68 - 72]{239}
    __size32 local305; 		// m[esp_68 - 72]{153}
    __size32 local306; 		// m[esp_68 - 72]{153}
    __size32 local307; 		// m[esp_68 - 72]{374}
    __size32 local308; 		// m[esp_68 - 72]{278}
    __size32 local309; 		// m[esp_68 - 72]{278}
    __size32 local31; 		// m[esp_68 + 4]{245}
    __size32 local310; 		// m[esp_68 - 72]{313}
    __size32 local311; 		// m[esp_68 - 72]{313}
    __size32 local312; 		// m[esp_68 - 72]{343}
    __size32 local313; 		// m[esp_68 - 72]{343}
    __size32 local314; 		// m[esp_68 - 72]{404}
    __size32 local315; 		// m[esp_68 - 72]{404}
    __size32 local316; 		// m[esp_68 - 76]{17}
    __size32 local317; 		// m[esp_68 - 76]{17}
    __size32 local318; 		// m[esp_68 - 76]{17}
    __size32 local319; 		// m[esp_68 - 76]{196}
    __size32 local32; 		// m[esp_68 + 4]{159}
    __size32 local320; 		// m[esp_68 - 76]{154}
    int local321; 		// m[esp_68 - 76]{218}
    int local322; 		// m[esp_68 - 76]{218}
    __size32 local323; 		// m[esp_68 - 76]{279}
    __size32 local324; 		// m[esp_68 - 76]{344}
    __size32 local325; 		// m[esp_68 - 76]{405}
    __size32 local326; 		// m[esp_68 - 76]{314}
    int local327; 		// m[esp_68 - 76]{289}
    int local328; 		// m[esp_68 - 76]{289}
    __size32 local329; 		// m[esp_68 - 76]{196}
    __size32 local33; 		// m[esp_68 + 4]{159}
    __size32 local330; 		// m[esp_68 - 76]{196}
    __size32 local331; 		// m[esp_68 - 76]{240}
    __size32 local332; 		// m[esp_68 - 76]{240}
    __size32 local333; 		// m[esp_68 - 76]{154}
    __size32 local334; 		// m[esp_68 - 76]{154}
    __size32 local335; 		// m[esp_68 - 76]{375}
    __size32 local336; 		// m[esp_68 - 76]{279}
    __size32 local337; 		// m[esp_68 - 76]{279}
    __size32 local338; 		// m[esp_68 - 76]{314}
    __size32 local339; 		// m[esp_68 - 76]{314}
    __size32 local34; 		// m[esp_68 + 4]{319}
    __size32 local340; 		// m[esp_68 - 76]{344}
    __size32 local341; 		// m[esp_68 - 76]{344}
    __size32 local342; 		// m[esp_68 - 76]{405}
    __size32 local343; 		// m[esp_68 - 76]{405}
    __size32 local344; 		// m[esp_68 - 80]{14}
    __size32 local345; 		// m[esp_68 - 80]{14}
    __size32 local346; 		// m[esp_68 - 80]{14}
    __size32 local347; 		// m[esp_68 - 80]{197}
    __size32 local348; 		// m[esp_68 - 80]{155}
    int local349; 		// m[esp_68 - 80]{218}
    __size32 local35; 		// m[esp_68 + 4]{319}
    int local350; 		// m[esp_68 - 80]{218}
    __size32 local351; 		// m[esp_68 - 80]{280}
    __size32 local352; 		// m[esp_68 - 80]{345}
    __size32 local353; 		// m[esp_68 - 80]{406}
    __size32 local354; 		// m[esp_68 - 80]{315}
    int local355; 		// m[esp_68 - 80]{289}
    int local356; 		// m[esp_68 - 80]{289}
    __size32 local357; 		// m[esp_68 - 80]{197}
    __size32 local358; 		// m[esp_68 - 80]{197}
    __size32 local359; 		// m[esp_68 - 80]{241}
    __size32 local36; 		// m[esp_68 + 4]{410}
    __size32 local360; 		// m[esp_68 - 80]{241}
    __size32 local361; 		// m[esp_68 - 80]{155}
    __size32 local362; 		// m[esp_68 - 80]{155}
    __size32 local363; 		// m[esp_68 - 80]{376}
    __size32 local364; 		// m[esp_68 - 80]{280}
    __size32 local365; 		// m[esp_68 - 80]{280}
    __size32 local366; 		// m[esp_68 - 80]{315}
    __size32 local367; 		// m[esp_68 - 80]{315}
    __size32 local368; 		// m[esp_68 - 80]{345}
    __size32 local369; 		// m[esp_68 - 80]{345}
    __size32 local37; 		// m[esp_68 + 4]{410}
    __size32 local370; 		// m[esp_68 - 80]{406}
    __size32 local371; 		// m[esp_68 - 80]{406}
    __size32 local372; 		// m[esp_68 - 104]{19}
    __size32 local373; 		// m[esp_68 - 104]{19}
    __size32 local374; 		// m[esp_68 - 104]{19}
    __size32 local375; 		// m[esp_68 - 104]{198}
    __size32 local376; 		// m[esp_68 - 104]{156}
    int local377; 		// m[esp_68 - 104]{218}
    int local378; 		// m[esp_68 - 104]{218}
    __size32 local379; 		// m[esp_68 - 104]{281}
    int local38; 		// m[esp_68 + 8]{218}
    __size32 local380; 		// m[esp_68 - 104]{346}
    __size32 local381; 		// m[esp_68 - 104]{407}
    __size32 local382; 		// m[esp_68 - 104]{316}
    int local383; 		// m[esp_68 - 104]{289}
    int local384; 		// m[esp_68 - 104]{289}
    __size32 local385; 		// m[esp_68 - 104]{198}
    __size32 local386; 		// m[esp_68 - 104]{198}
    __size32 local387; 		// m[esp_68 - 104]{242}
    __size32 local388; 		// m[esp_68 - 104]{242}
    __size32 local389; 		// m[esp_68 - 104]{156}
    int local39; 		// m[esp_68 + 8]{218}
    __size32 local390; 		// m[esp_68 - 104]{156}
    __size32 local391; 		// m[esp_68 - 104]{377}
    __size32 local392; 		// m[esp_68 - 104]{281}
    __size32 local393; 		// m[esp_68 - 104]{281}
    __size32 local394; 		// m[esp_68 - 104]{316}
    __size32 local395; 		// m[esp_68 - 104]{316}
    __size32 local396; 		// m[esp_68 - 104]{346}
    __size32 local397; 		// m[esp_68 - 104]{346}
    __size32 local398; 		// m[esp_68 - 104]{407}
    __size32 local399; 		// m[esp_68 - 104]{407}
    int local4; 		// m[esp - 40]
    int local40; 		// m[esp_68 + 8]{218}
    __size32 local400; 		// m[esp_68 - 108]{24}
    __size32 local401; 		// m[esp_68 - 108]{24}
    __size32 local402; 		// m[esp_68 - 108]{24}
    __size32 local403; 		// m[esp_68 - 108]{199}
    __size32 local404; 		// m[esp_68 - 108]{157}
    int local405; 		// m[esp_68 - 108]{218}
    int local406; 		// m[esp_68 - 108]{218}
    __size32 local407; 		// m[esp_68 - 108]{282}
    __size32 local408; 		// m[esp_68 - 108]{347}
    __size32 local409; 		// m[esp_68 - 108]{408}
    __size32 local41; 		// m[esp_68 + 8]{160}
    __size32 local410; 		// m[esp_68 - 108]{317}
    int local411; 		// m[esp_68 - 108]{289}
    int local412; 		// m[esp_68 - 108]{289}
    __size32 local413; 		// m[esp_68 - 108]{199}
    __size32 local414; 		// m[esp_68 - 108]{199}
    __size32 local415; 		// m[esp_68 - 108]{243}
    __size32 local416; 		// m[esp_68 - 108]{243}
    __size32 local417; 		// m[esp_68 - 108]{157}
    __size32 local418; 		// m[esp_68 - 108]{157}
    __size32 local419; 		// m[esp_68 - 108]{378}
    int local42; 		// m[esp_68 + 8]{289}
    __size32 local420; 		// m[esp_68 - 108]{282}
    __size32 local421; 		// m[esp_68 - 108]{282}
    __size32 local422; 		// m[esp_68 - 108]{317}
    __size32 local423; 		// m[esp_68 - 108]{317}
    __size32 local424; 		// m[esp_68 - 108]{347}
    __size32 local425; 		// m[esp_68 - 108]{347}
    __size32 local426; 		// m[esp_68 - 108]{408}
    __size32 local427; 		// m[esp_68 - 108]{408}
    unsigned int local428; 		// m[esp_68 - 112]{25}
    unsigned int local429; 		// m[esp_68 - 112]{25}
    int local43; 		// m[esp_68 + 8]{289}
    unsigned int local430; 		// m[esp_68 - 112]{25}
    unsigned int local431; 		// m[esp_68 - 112]{200}
    unsigned int local432; 		// m[esp_68 - 112]{158}
    int local433; 		// m[esp_68 - 112]{218}
    int local434; 		// m[esp_68 - 112]{218}
    unsigned int local435; 		// m[esp_68 - 112]{283}
    unsigned int local436; 		// m[esp_68 - 112]{348}
    unsigned int local437; 		// m[esp_68 - 112]{409}
    unsigned int local438; 		// m[esp_68 - 112]{318}
    int local439; 		// m[esp_68 - 112]{289}
    __size32 local44; 		// m[esp_68 + 8]{4}
    int local440; 		// m[esp_68 - 112]{289}
    unsigned int local441; 		// m[esp_68 - 112]{200}
    unsigned int local442; 		// m[esp_68 - 112]{200}
    unsigned int local443; 		// m[esp_68 - 112]{244}
    unsigned int local444; 		// m[esp_68 - 112]{244}
    unsigned int local445; 		// m[esp_68 - 112]{158}
    unsigned int local446; 		// m[esp_68 - 112]{158}
    unsigned int local447; 		// m[esp_68 - 112]{379}
    unsigned int local448; 		// m[esp_68 - 112]{283}
    unsigned int local449; 		// m[esp_68 - 112]{283}
    __size32 local45; 		// m[esp_68 + 8]{4}
    unsigned int local450; 		// m[esp_68 - 112]{318}
    unsigned int local451; 		// m[esp_68 - 112]{318}
    unsigned int local452; 		// m[esp_68 - 112]{348}
    unsigned int local453; 		// m[esp_68 - 112]{348}
    unsigned int local454; 		// m[esp_68 - 112]{409}
    unsigned int local455; 		// m[esp_68 - 112]{409}
    int local456; 		// tmpb{144}
    int local457; 		// tmpb{218}
    int local458; 		// tmpb{218}
    int local459; 		// tmpb{218}
    __size32 local46; 		// m[esp_68 + 8]{411}
    int local460; 		// tmpb{230}
    int local461; 		// tmpb{218}
    int local462; 		// tmpb{394}
    int local463; 		// tmpb{303}
    int local464; 		// tmpb{116}
    int local465; 		// tmpb{364}
    int local466; 		// tmpb{333}
    int local467; 		// tmpb{394}
    int local468; 		// tmpb{303}
    int local469; 		// tmpb{116}
    __size32 local47; 		// m[esp_68 + 8]{320}
    int local470; 		// tmpb{364}
    int local471; 		// tmpb{333}
    int local472; 		// tmpb{289}
    int local473; 		// tmpb{289}
    int local474; 		// tmpb{289}
    int local475; 		// tmpb{230}
    int local476; 		// tmpb{230}
    int local477; 		// tmpb{230}
    int local478; 		// tmpb{144}
    int local479; 		// tmpb{144}
    __size32 local48; 		// m[esp_68 + 8]{133}
    int local480; 		// tmpb{144}
    int local481; 		// tmpb{116}
    int local482; 		// tmpb{303}
    int local483; 		// tmpb{303}
    int local484; 		// tmpb{303}
    int local485; 		// tmpb{333}
    int local486; 		// tmpb{364}
    int local487; 		// tmpb{394}
    int local488; 		// tmpb{394}
    int local489; 		// tmpb{394}
    __size32 local49; 		// m[esp_68 + 8]{381}
    int local490; 		// tmpb{218}
    int local491; 		// tmpb{144}
    int local492; 		// tmpb{5}
    int local493; 		// tmpb{5}
    __size16 local494; 		// tmph{171}
    __size16 local495; 		// tmph{395}
    __size16 local496; 		// tmph{304}
    __size16 local497; 		// tmph{117}
    __size16 local498; 		// tmph{365}
    __size16 local499; 		// tmph{334}
    int local5; 		// m[esp - 32]
    __size32 local50; 		// m[esp_68 + 8]{350}
    __size16 local500; 		// tmph{171}
    __size16 local501; 		// tmph{395}
    __size16 local502; 		// tmph{304}
    __size16 local503; 		// tmph{117}
    __size16 local504; 		// tmph{365}
    __size16 local505; 		// tmph{334}
    int local506; 		// tmph{289}
    int local507; 		// tmph{289}
    int local508; 		// tmph{289}
    __size16 local509; 		// tmph{117}
    __size32 local51; 		// m[esp_68 + 8]{246}
    __size16 local510; 		// tmph{304}
    __size16 local511; 		// tmph{304}
    __size16 local512; 		// tmph{304}
    __size16 local513; 		// tmph{334}
    __size16 local514; 		// tmph{365}
    __size16 local515; 		// tmph{395}
    __size16 local516; 		// tmph{395}
    __size16 local517; 		// tmph{395}
    int local518; 		// tmph{289}
    __size16 local519; 		// tmph{395}
    __size32 local52; 		// m[esp_68 + 8]{246}
    __size16 local520; 		// tmph{304}
    __size16 local521; 		// tmph{117}
    __size16 local522; 		// tmph{365}
    __size16 local523; 		// tmph{334}
    __size16 local524; 		// tmph{171}
    __size16 local525; 		// tmph{6}
    __size16 local526; 		// tmph{6}
    __size32 local527; 		// esp_65{114}
    int local528; 		// local464{116}
    __size16 local529; 		// local497{117}
    __size32 local53; 		// m[esp_68 + 8]{160}
    __size32 local530; 		// m[esp_68 - 4]{118}
    __size32 local531; 		// m[esp_68 - 28]{119}
    __size32 local532; 		// local134{120}
    __size32 local533; 		// local167{121}
    __size32 local534; 		// local190{122}
    __size32 local535; 		// m[esp_68 - 44]{123}
    __size32 local536; 		// local253{124}
    __size32 local537; 		// m[esp_68 - 68]{125}
    __size32 local538; 		// m[esp_68 - 72]{126}
    __size32 local539; 		// m[esp_68 - 76]{127}
    __size32 local54; 		// m[esp_68 + 8]{160}
    __size32 local540; 		// m[esp_68 - 80]{128}
    __size32 local541; 		// m[esp_68 - 104]{129}
    __size32 local542; 		// m[esp_68 - 108]{130}
    unsigned int local543; 		// m[esp_68 - 112]{131}
    __size32 local544; 		// esp_62{141}
    int local545; 		// local456{144}
    __size32 local546; 		// local63{145}
    __size32 local547; 		// local91{146}
    __size32 local548; 		// local119{147}
    __size32 local549; 		// local148{148}
    __size32 local55; 		// m[esp_68 + 8]{320}
    __size32 local550; 		// local177{149}
    __size32 local551; 		// local205{150}
    __size32 local552; 		// local234{151}
    __size32 local553; 		// local263{152}
    __size32 local554; 		// local292{153}
    __size32 local555; 		// local320{154}
    __size32 local556; 		// local348{155}
    __size32 local557; 		// local376{156}
    __size32 local558; 		// local404{157}
    unsigned int local559; 		// local432{158}
    __size32 local56; 		// m[esp_68 + 8]{320}
    __size32 local560; 		// local20{159}
    __size32 local561; 		// local41{160}
    int local562; 		// eax_1{166}
    union { __size32 *; __size32; } local563; 		// esp_56{183}
    unsigned int local564; 		// esi{185}
    __size32 local565; 		// local62{187}
    __size32 local566; 		// local90{188}
    __size32 local567; 		// local118{189}
    __size32 local568; 		// local147{190}
    __size32 local569; 		// local176{191}
    __size32 local57; 		// m[esp_68 + 8]{411}
    __size32 local570; 		// local204{192}
    __size32 local571; 		// local233{193}
    __size32 local572; 		// local262{194}
    __size32 local573; 		// local291{195}
    __size32 local574; 		// local319{196}
    __size32 local575; 		// local347{197}
    __size32 local576; 		// local375{198}
    __size32 local577; 		// local403{199}
    unsigned int local578; 		// local431{200}
    union { __size32 *; unsigned int; } local579; 		// eax{209}
    __size32 local58; 		// m[esp_68 + 8]{411}
    __size32 local580; 		// esp_59{227}
    int local581; 		// local460{230}
    __size32 local582; 		// local74{231}
    __size32 local583; 		// local102{232}
    __size32 local584; 		// local135{233}
    __size32 local585; 		// local168{234}
    __size32 local586; 		// local188{235}
    __size32 local587; 		// local227{236}
    __size32 local588; 		// local254{237}
    __size32 local589; 		// local275{238}
    __size32 local59; 		// m[esp_68 - 4]{8}
    __size32 local590; 		// local303{239}
    __size32 local591; 		// local331{240}
    __size32 local592; 		// local359{241}
    __size32 local593; 		// local387{242}
    __size32 local594; 		// local415{243}
    unsigned int local595; 		// local443{244}
    __size32 local596; 		// local30{245}
    __size32 local597; 		// local51{246}
    unsigned int local598; 		// ebx{265}
    union { __size32 *; __size32; } local599; 		// esp_43{266}
    int local6; 		// m[esp - 28]
    __size32 local60; 		// m[esp_68 - 4]{8}
    __size32 local600; 		// local66{270}
    __size32 local601; 		// local94{271}
    __size32 local602; 		// local122{272}
    __size32 local603; 		// local151{273}
    __size32 local604; 		// local180{274}
    __size32 local605; 		// local208{275}
    __size32 local606; 		// local237{276}
    __size32 local607; 		// local266{277}
    __size32 local608; 		// local295{278}
    __size32 local609; 		// local323{279}
    __size32 local61; 		// m[esp_68 - 4]{8}
    __size32 local610; 		// local351{280}
    __size32 local611; 		// local379{281}
    __size32 local612; 		// local407{282}
    unsigned int local613; 		// local435{283}
    unsigned int local614; 		// ebx{298}
    __size32 local615; 		// esp_46{299}
    int local616; 		// local463{303}
    __size16 local617; 		// local496{304}
    __size32 local618; 		// local69{305}
    __size32 local619; 		// local97{306}
    __size32 local62; 		// m[esp_68 - 4]{187}
    __size32 local620; 		// local125{307}
    __size32 local621; 		// local154{308}
    __size32 local622; 		// local183{309}
    __size32 local623; 		// local211{310}
    __size32 local624; 		// local240{311}
    __size32 local625; 		// local269{312}
    __size32 local626; 		// local298{313}
    __size32 local627; 		// local326{314}
    __size32 local628; 		// local354{315}
    __size32 local629; 		// local382{316}
    __size32 local63; 		// m[esp_68 - 4]{145}
    __size32 local630; 		// local410{317}
    unsigned int local631; 		// local438{318}
    __size32 local632; 		// local26{319}
    __size32 local633; 		// local47{320}
    __size32 local634; 		// esp_49{329}
    unsigned int local635; 		// edi{332}
    int local636; 		// local466{333}
    __size16 local637; 		// local499{334}
    __size32 local638; 		// local67{335}
    __size32 local639; 		// local95{336}
    int local64; 		// m[esp_68 - 4]{218}
    __size32 local640; 		// local123{337}
    __size32 local641; 		// local152{338}
    __size32 local642; 		// local181{339}
    __size32 local643; 		// local209{340}
    __size32 local644; 		// local238{341}
    __size32 local645; 		// local267{342}
    __size32 local646; 		// local296{343}
    __size32 local647; 		// local324{344}
    __size32 local648; 		// local352{345}
    __size32 local649; 		// local380{346}
    int local65; 		// m[esp_68 - 4]{218}
    __size32 local650; 		// local408{347}
    unsigned int local651; 		// local436{348}
    __size32 local652; 		// local29{349}
    __size32 local653; 		// local50{350}
    __size32 local654; 		// esp_52{361}
    int local655; 		// local465{364}
    __size16 local656; 		// local498{365}
    __size32 local657; 		// local78{366}
    __size32 local658; 		// local106{367}
    __size32 local659; 		// m[esp_68 - 32]{368}
    __size32 local66; 		// m[esp_68 - 4]{270}
    __size32 local660; 		// m[esp_68 - 36]{369}
    __size32 local661; 		// m[esp_68 - 40]{370}
    __size32 local662; 		// local226{371}
    __size32 local663; 		// m[esp_68 - 48]{372}
    __size32 local664; 		// local274{373}
    __size32 local665; 		// local307{374}
    __size32 local666; 		// local335{375}
    __size32 local667; 		// local363{376}
    __size32 local668; 		// local391{377}
    __size32 local669; 		// local419{378}
    __size32 local67; 		// m[esp_68 - 4]{335}
    unsigned int local670; 		// local447{379}
    __size32 local671; 		// local28{380}
    __size32 local672; 		// local49{381}
    __size32 local673; 		// esp_53{391}
    int local674; 		// local462{394}
    __size16 local675; 		// local495{395}
    __size32 local676; 		// local68{396}
    __size32 local677; 		// local96{397}
    __size32 local678; 		// local124{398}
    __size32 local679; 		// local153{399}
    __size32 local68; 		// m[esp_68 - 4]{396}
    __size32 local680; 		// local182{400}
    __size32 local681; 		// local210{401}
    __size32 local682; 		// local239{402}
    __size32 local683; 		// local268{403}
    __size32 local684; 		// local297{404}
    __size32 local685; 		// local325{405}
    __size32 local686; 		// local353{406}
    __size32 local687; 		// local381{407}
    __size32 local688; 		// local409{408}
    unsigned int local689; 		// local437{409}
    __size32 local69; 		// m[esp_68 - 4]{305}
    __size32 local690; 		// local25{410}
    __size32 local691; 		// local46{411}
    __size32 local692; 		// esp{415}
    int local7; 		// m[esp - 48]
    int local70; 		// m[esp_68 - 4]{289}
    int local71; 		// m[esp_68 - 4]{289}
    __size32 local72; 		// m[esp_68 - 4]{187}
    __size32 local73; 		// m[esp_68 - 4]{187}
    __size32 local74; 		// m[esp_68 - 4]{231}
    __size32 local75; 		// m[esp_68 - 4]{231}
    __size32 local76; 		// m[esp_68 - 4]{145}
    __size32 local77; 		// m[esp_68 - 4]{145}
    __size32 local78; 		// m[esp_68 - 4]{366}
    __size32 local79; 		// m[esp_68 - 4]{270}
    int local8; 		// m[esp - 80]
    __size32 local80; 		// m[esp_68 - 4]{270}
    __size32 local81; 		// m[esp_68 - 4]{305}
    __size32 local82; 		// m[esp_68 - 4]{305}
    __size32 local83; 		// m[esp_68 - 4]{335}
    __size32 local84; 		// m[esp_68 - 4]{335}
    __size32 local85; 		// m[esp_68 - 4]{396}
    __size32 local86; 		// m[esp_68 - 4]{396}
    __size32 local87; 		// m[esp_68 - 28]{13}
    __size32 local88; 		// m[esp_68 - 28]{13}
    __size32 local89; 		// m[esp_68 - 28]{13}
    int local9; 		// m[esp - 72]
    __size32 local90; 		// m[esp_68 - 28]{188}
    __size32 local91; 		// m[esp_68 - 28]{146}
    int local92; 		// m[esp_68 - 28]{218}
    int local93; 		// m[esp_68 - 28]{218}
    __size32 local94; 		// m[esp_68 - 28]{271}
    __size32 local95; 		// m[esp_68 - 28]{336}
    __size32 local96; 		// m[esp_68 - 28]{397}
    __size32 local97; 		// m[esp_68 - 28]{306}
    int local98; 		// m[esp_68 - 28]{289}
    int local99; 		// m[esp_68 - 28]{289}

    local59 = param3;
    local201 = caml_local_roots;
    local144 = 1;
    local173 = 2;
    local115 = esp_68 + 4;
    local87 = esp_68 + 8;
    local344 = esp_68 - 44;
    caml_local_roots = esp_68 - 80;
    local288 = 1;
    local316 = 1;
    local259 = esp_68 - 48;
    local372 = 0;
    eax = caml_alloc_small(2, 0); /* Warning: also results in ebx */
    local528 = local492;
    local529 = local525;
    local530 = local59;
    local531 = local87;
    local532 = local115;
    local533 = local144;
    local534 = local173;
    local535 = local201;
    local537 = local259;
    local538 = local288;
    local539 = local316;
    local540 = local344;
    local541 = local372;
    local545 = local492;
    local546 = local59;
    local547 = local87;
    local548 = local115;
    local549 = local144;
    local550 = local173;
    local551 = local201;
    local553 = local259;
    local554 = local288;
    local555 = local316;
    local556 = local344;
    local557 = local372;
    local560 = param1;
    local561 = param2;
    local230 = eax;
    *(__size32*)eax = param1;
    *(__size32*)(eax + 4) = param2;
    local400 = eax;
    esp_1 = caml_raise(param1, eax, ebx, esp_68 - 4); /* Warning: also results in ebp */
    local536 = local230;
    local542 = local400;
    local543 = local428;
    local552 = local230;
    local558 = local400;
    local559 = local428;
    *(__size32*)(esp_1 - 4) = ebp;
    eax = *(esp_1 + 4);
    *(__size32*)(esp_1 - 24) = eax;
    *(__size32*)(esp_1 - 28) = 0x807246c;
    esp_4 = caml_raise_with_arg(*(esp_1 - 28), *(esp_1 - 24), esp_1 - 4, *(esp_1 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_4 - 4) = ebp;
    eax = *(esp_4 + 8);
    *(__size32*)(esp_4 - 28) = eax;
    eax = caml_copy_string(*(esp_4 - 28)); /* Warning: also results in esp_7, ebp */
    *(__size32*)(esp_7 + 4) = eax;
    eax = *(ebp + 8);
    *(__size32*)esp_7 = eax;
    esp_10 = caml_raise_with_arg(*esp_7, *(esp_7 + 4), ebp, *(esp_7 - 148)); /* Warning: also results in ebp */
    *(__size32*)(esp_10 - 4) = ebp;
    eax = *(esp_10 + 4);
    *(__size32*)(esp_10 - 24) = eax;
    *(__size32*)(esp_10 - 28) = 0x80724a8;
    esp_13 = caml_raise_with_string(*(esp_10 - 24), esp_10 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_13 - 4) = ebp;
    eax = *(esp_13 + 4);
    *(__size32*)(esp_13 - 24) = eax;
    *(__size32*)(esp_13 - 28) = 0x807248c;
    esp_16 = caml_raise_with_string(*(esp_13 - 24), esp_13 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_16 - 4) = ebp;
    *(__size32*)(esp_16 - 44) = caml_local_roots;
    *(__size32*)(esp_16 - 36) = 1;
    *(__size32*)(esp_16 - 40) = 1;
    *(__size32*)(esp_16 - 32) = esp_16 + 4;
    *(__size32*)(esp_16 - 48) = 0;
    *(__size32*)(esp_16 - 80) = esp_16 - 44;
    caml_local_roots = esp_16 - 80;
    *(__size32*)(esp_16 - 72) = 1;
    *(__size32*)(esp_16 - 76) = 1;
    *(__size32*)(esp_16 - 68) = esp_16 - 48;
    *(__size32*)(esp_16 - 104) = 0;
    *(__size32*)(esp_16 - 108) = 1;
    eax = caml_alloc_small(*(esp_16 - 108), *(esp_16 - 104)); /* Warning: also results in ebx */
    *(__size32*)(esp_16 - 48) = eax;
    edx = *(esp_16 + 4);
    *(__size32*)eax = edx;
    eax = *(esp_16 - 48);
    *(__size32*)(esp_16 - 108) = eax;
    esp_19 = caml_raise(*(esp_16 - 144), *(esp_16 - 108), ebx, esp_16 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_19 - 4) = ebp;
    *(__size32*)(esp_19 - 28) = 0x8072580;
    esp_22 = caml_raise_constant(*(esp_19 - 28), esp_19 - 4, *(esp_19 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_22 - 4) = ebp;
    *(__size32*)(esp_22 - 28) = 0x8072518;
    esp_25 = caml_raise_constant(*(esp_22 - 28), esp_22 - 4, *(esp_22 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_25 - 4) = ebp;
    *(__size32*)(esp_25 - 28) = 0x80724f0;
    esp_28 = caml_raise_constant(*(esp_25 - 28), esp_25 - 4, *(esp_25 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_28 - 4) = ebp;
    *(__size32*)(esp_28 - 28) = 0x80724d0;
    cl = caml_raise_constant(*(esp_28 - 28), esp_28 - 4, *(esp_28 - 176)); /* Warning: also results in dl, ecx, edx, ebx, esp_31, ebp, esi, edi */
    *(__size32*)(esp_31 - 4) = ebp;
    ebp = esp_31 - 4;
    *(unsigned int*)(esp_31 - 8) = edi;
    *(unsigned int*)(esp_31 - 12) = esi;
    *(unsigned int*)(esp_31 - 16) = ebx;
    esp_34 = esp_31 - 60;
    eax = *(esp_31 + 8);
    al = (unsigned char) eax;
    local527 = esp_34;
    local544 = esp_34;
    if (eax != 0) {
        edx = *(esp_31 + 16);
        *(__size32*)(esp_31 - 36) = edx;
        edx = *(esp_31 + 12);
        *(__size32*)(esp_31 - 32) = eax;
        do {
bb0x8061c57:
            esp_62 = local544;
            local456 = local545;
            local63 = local546;
            local91 = local547;
            local119 = local548;
            local148 = local549;
            local177 = local550;
            local205 = local551;
            local234 = local552;
            local263 = local553;
            local292 = local554;
            local320 = local555;
            local348 = local556;
            local376 = local557;
            local404 = local558;
            local432 = local559;
            local20 = local560;
            local41 = local561;
            esi = *(global_0x0807db9c + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local527 = esp_62;
            local528 = local456;
            local530 = local63;
            local531 = local91;
            local532 = local119;
            local533 = local148;
            local534 = local177;
            local535 = local205;
            local536 = local234;
            local537 = local263;
            local538 = local292;
            local539 = local320;
            local540 = local348;
            local541 = local376;
            local542 = local404;
            local543 = local432;
            local544 = esp_62;
            local545 = local456;
            local546 = local63;
            local547 = local91;
            local548 = local119;
            local549 = local148;
            local550 = local177;
            local551 = local205;
            local552 = local234;
            local553 = local263;
            local554 = local292;
            local555 = local320;
            local556 = local348;
            local557 = local376;
            local558 = local404;
            local559 = local432;
            local560 = local20;
            local561 = local41;
            local562 = eax;
            local563 = esp_62;
            local565 = local63;
            local566 = local91;
            local567 = local119;
            local568 = local148;
            local569 = local177;
            local570 = local205;
            local571 = local234;
            local572 = local263;
            local573 = local292;
            local574 = local320;
            local575 = local348;
            local576 = local376;
            local577 = local404;
            local578 = local432;
            local580 = esp_62;
            local581 = local456;
            local582 = local63;
            local583 = local91;
            local584 = local119;
            local585 = local148;
            local586 = local177;
            local587 = local205;
            local588 = local234;
            local589 = local263;
            local590 = local292;
            local591 = local320;
            local592 = local348;
            local593 = local376;
            local594 = local404;
            local595 = local432;
            local596 = local20;
            local597 = local41;
            if (*ebx != edx) {
                do {
                    eax_1 = local562;
                    eax_2 = eax_1 + 1 & esi;
                    ebx = *(caml_frame_descriptors + (eax_1 + 1 & esi) * 4);
                    local562 = eax_2;
                } while (*ebx != edx);
            }
            local494 = *(ebx + 4) + 1;
            local529 = local494;
            if (*(ebx + 4) != -1) {
                esi = *(unsigned short*)(ebx + 6);
                local564 = esi;
                if ((int)esi > 0) {
                    edi = ebx + 8;
                    *(__size32*)(ebp - 36) = ebx;
                    ebx = *(ebp + 8);
                    for(;;) {
                        esp_56 = local563;
                        esi = local564;
                        local62 = local565;
                        local90 = local566;
                        local118 = local567;
                        local147 = local568;
                        local176 = local569;
                        local204 = local570;
                        local233 = local571;
                        local262 = local572;
                        local291 = local573;
                        local319 = local574;
                        local347 = local575;
                        local375 = local576;
                        local403 = local577;
                        local431 = local578;
                        eax_4 = *(unsigned short*)edi;
                        if (((unsigned char) eax_4 & 0x1) == 0) {
                            eax_7 = eax_4 + *(ebp - 28);
                            flags = ADDFLAGS32(eax_4, *(ebp - 28), eax_7);
                            local579 = eax_7;
                        }
                        else {
                            flags = SARFLAGS((int)eax_4 >> 1, eax_4, 1);
                            edx = *(ebp - 32);
                            eax = edx + ((int)eax_4 >> 1) * 4;
                            local579 = eax;
                        }
                        eax = local579;
                        *(__size32*)(esp_56 + 4) = eax;
                        eax = *eax;
                        *(__size32*)esp_56 = eax;
                        (*ebx)((unsigned char) eax, cl, dl, eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, local62, local90, local118, local147, local176, local204, local233, local262, local291, local319, local347, local375, local403, local431, param1, param2, param1);
                        local563 = esp_37;
                        local565 = local64;
                        local566 = local92;
                        local567 = local120;
                        local568 = local149;
                        local569 = local178;
                        local570 = local206;
                        local571 = local235;
                        local572 = local264;
                        local573 = local293;
                        local574 = local321;
                        local575 = local349;
                        local576 = local377;
                        local577 = local405;
                        local578 = local433;
                        local580 = esp_37;
                        local581 = local457;
                        local582 = local64;
                        local583 = local92;
                        local584 = local120;
                        local585 = local149;
                        local586 = local178;
                        local587 = local206;
                        local588 = local235;
                        local589 = local264;
                        local590 = local293;
                        local591 = local321;
                        local592 = local349;
                        local593 = local377;
                        local594 = local405;
                        local595 = local433;
                        local596 = local17;
                        local597 = local38;
                        esi_4 = esi_1 - 1;
                        local564 = esi_4;
                        if ((int)esi_1 <= 1) {
                            break;
                        }
                        edi += 2;
                    }
                    ebx = *(ebp - 36);
                }
                esp_59 = local580;
                local460 = local581;
                local74 = local582;
                local102 = local583;
                local135 = local584;
                local168 = local585;
                local188 = local586;
                local227 = local587;
                local254 = local588;
                local275 = local589;
                local303 = local590;
                local331 = local591;
                local359 = local592;
                local387 = local593;
                local415 = local594;
                local443 = local595;
                local30 = local596;
                local51 = local597;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local544 = esp_59;
                local545 = local460;
                local546 = local74;
                local547 = local102;
                local548 = local135;
                local549 = local168;
                local550 = local188;
                local551 = local227;
                local552 = local254;
                local553 = local275;
                local554 = local303;
                local555 = local331;
                local556 = local359;
                local557 = local387;
                local558 = local415;
                local559 = local443;
                local560 = local30;
                local561 = local51;
                goto bb0x8061c57;
            }
            eax = *(ebp - 28);
            edx = *(eax + 8);
            *(__size32*)(ebp - 28) = edx;
            edx = *(eax + 12);
            eax = *(eax + 16);
            al = (unsigned char) eax;
            *(__size32*)(ebp - 32) = eax;
        } while (*(ebp - 28) != 0);
    }
    esp_65 = local527;
    local464 = local528;
    local497 = local529;
    *(__size32*)(esp_68 - 4) = local530;
    *(__size32*)(esp_68 - 28) = local531;
    local134 = local532;
    local167 = local533;
    local190 = local534;
    *(__size32*)(esp_68 - 44) = local535;
    local253 = local536;
    *(__size32*)(esp_68 - 68) = local537;
    *(__size32*)(esp_68 - 72) = local538;
    *(__size32*)(esp_68 - 76) = local539;
    *(__size32*)(esp_68 - 80) = local540;
    *(__size32*)(esp_68 - 104) = local541;
    *(__size32*)(esp_68 - 108) = local542;
    *(unsigned int*)(esp_68 - 112) = local543;
    local673 = esp_65;
    local674 = local464;
    local675 = local497;
    local676 = *(esp_68 - 4);
    local677 = *(esp_68 - 28);
    local678 = local134;
    local679 = local167;
    local680 = local190;
    local681 = *(esp_68 - 44);
    local682 = local253;
    local683 = *(esp_68 - 68);
    local684 = *(esp_68 - 72);
    local685 = *(esp_68 - 76);
    local686 = *(esp_68 - 80);
    local687 = *(esp_68 - 104);
    local688 = *(esp_68 - 108);
    local689 = *(esp_68 - 112);
    local690 = local27;
    local691 = local48;
    local692 = esp_65;
    if (*(ebp + 24) != 0) {
        esi = *(ebp + 24);
        *(__size32*)(ebp - 28) = 0;
        do {
            esp_53 = local673;
            local462 = local674;
            local495 = local675;
            local68 = local676;
            local96 = local677;
            local124 = local678;
            local153 = local679;
            local182 = local680;
            local210 = local681;
            local239 = local682;
            local268 = local683;
            local297 = local684;
            local325 = local685;
            local353 = local686;
            local381 = local687;
            local409 = local688;
            local437 = local689;
            local25 = local690;
            local46 = local691;
            edi = 0;
            local634 = esp_53;
            local635 = edi;
            local636 = local462;
            local637 = local495;
            local638 = local68;
            local639 = local96;
            local640 = local124;
            local641 = local153;
            local642 = local182;
            local643 = local210;
            local644 = local239;
            local645 = local268;
            local646 = local297;
            local647 = local325;
            local648 = local353;
            local649 = local381;
            local650 = local409;
            local651 = local437;
            local652 = local25;
            local653 = local46;
            local654 = esp_53;
            local655 = local462;
            local656 = local495;
            local657 = local68;
            local658 = local96;
            local659 = local124;
            local660 = local153;
            local661 = local182;
            local662 = local210;
            local663 = local239;
            local664 = local268;
            local665 = local297;
            local666 = local325;
            local667 = local353;
            local668 = local381;
            local669 = local409;
            local670 = local437;
            local671 = local25;
            local672 = local46;
            if (*(esi + 4) > 0) {
                do {
                    esp_49 = local634;
                    edi = local635;
                    local466 = local636;
                    local499 = local637;
                    local67 = local638;
                    local95 = local639;
                    local123 = local640;
                    local152 = local641;
                    local181 = local642;
                    local209 = local643;
                    local238 = local644;
                    local267 = local645;
                    local296 = local646;
                    local324 = local647;
                    local352 = local648;
                    local380 = local649;
                    local408 = local650;
                    local436 = local651;
                    local29 = local652;
                    local50 = local653;
                    ebx = *(ebp - 28);
                    local598 = ebx;
                    local599 = esp_49;
                    local600 = local67;
                    local601 = local95;
                    local602 = local123;
                    local603 = local152;
                    local604 = local181;
                    local605 = local209;
                    local606 = local238;
                    local607 = local267;
                    local608 = local296;
                    local609 = local324;
                    local610 = local352;
                    local611 = local380;
                    local612 = local408;
                    local613 = local436;
                    local614 = ebx;
                    local615 = esp_49;
                    local616 = local466;
                    local617 = local499;
                    local618 = local67;
                    local619 = local95;
                    local620 = local123;
                    local621 = local152;
                    local622 = local181;
                    local623 = local209;
                    local624 = local238;
                    local625 = local267;
                    local626 = local296;
                    local627 = local324;
                    local628 = local352;
                    local629 = local380;
                    local630 = local408;
                    local631 = local436;
                    local632 = local29;
                    local633 = local50;
                    if (*(esi + 8) > 0) {
                        do {
                            ebx = local598;
                            esp_43 = local599;
                            local66 = local600;
                            local94 = local601;
                            local122 = local602;
                            local151 = local603;
                            local180 = local604;
                            local208 = local605;
                            local237 = local606;
                            local266 = local607;
                            local295 = local608;
                            local323 = local609;
                            local351 = local610;
                            local379 = local611;
                            local407 = local612;
                            local435 = local613;
                            eax_9 = ebx * 4 + *(esi + edi * 4 + 12);
                            *(__size32*)(esp_43 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_43 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, cl, dl, eax_12, ecx, edx, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), local66, local94, local122, local151, local180, local208, local237, local266, local295, local323, local351, local379, local407, local435, param1, param2, param1);
                            local599 = esp_40;
                            local600 = local70;
                            local601 = local98;
                            local602 = local126;
                            local603 = local155;
                            local604 = local184;
                            local605 = local212;
                            local606 = local241;
                            local607 = local270;
                            local608 = local299;
                            local609 = local327;
                            local610 = local355;
                            local611 = local383;
                            local612 = local411;
                            local613 = local439;
                            local615 = esp_40;
                            local616 = local472;
                            local617 = local506;
                            local618 = local70;
                            local619 = local98;
                            local620 = local126;
                            local621 = local155;
                            local622 = local184;
                            local623 = local212;
                            local624 = local241;
                            local625 = local270;
                            local626 = local299;
                            local627 = local327;
                            local628 = local355;
                            local629 = local383;
                            local630 = local411;
                            local631 = local439;
                            local632 = local21;
                            local633 = local42;
                            ebx_4 = ebx_1 + 1;
                            local598 = ebx_4;
                            local614 = ebx_4;
                        } while (*(esi + 8) > ebx_1 + 1);
                    }
                    ebx = local614;
                    esp_46 = local615;
                    edi_1 = edi;
                    local463 = local616;
                    local496 = local617;
                    local69 = local618;
                    local97 = local619;
                    local125 = local620;
                    local154 = local621;
                    local183 = local622;
                    local211 = local623;
                    local240 = local624;
                    local269 = local625;
                    local298 = local626;
                    local326 = local627;
                    local354 = local628;
                    local382 = local629;
                    local410 = local630;
                    local438 = local631;
                    local26 = local632;
                    local47 = local633;
                    edi_2 = edi_1 + 1;
                    local634 = esp_46;
                    local635 = edi_2;
                    local636 = local463;
                    local637 = local496;
                    local638 = local69;
                    local639 = local97;
                    local640 = local125;
                    local641 = local154;
                    local642 = local183;
                    local643 = local211;
                    local644 = local240;
                    local645 = local269;
                    local646 = local298;
                    local647 = local326;
                    local648 = local354;
                    local649 = local382;
                    local650 = local410;
                    local651 = local438;
                    local652 = local26;
                    local653 = local47;
                    local654 = esp_46;
                    local655 = local463;
                    local656 = local496;
                    local657 = local69;
                    local658 = local97;
                    local659 = local125;
                    local660 = local154;
                    local661 = local183;
                    local662 = local211;
                    local663 = local240;
                    local664 = local269;
                    local665 = local298;
                    local666 = local326;
                    local667 = local354;
                    local668 = local382;
                    local669 = local410;
                    local670 = local438;
                    local671 = local26;
                    local672 = local47;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_52 = local654;
            local465 = local655;
            local498 = local656;
            local78 = local657;
            local106 = local658;
            *(__size32*)(esp_68 - 32) = local659;
            *(__size32*)(esp_68 - 36) = local660;
            *(__size32*)(esp_68 - 40) = local661;
            local226 = local662;
            *(__size32*)(esp_68 - 48) = local663;
            local274 = local664;
            local307 = local665;
            local335 = local666;
            local363 = local667;
            local391 = local668;
            local419 = local669;
            local447 = local670;
            local28 = local671;
            local49 = local672;
            esi = *esi;
            local673 = esp_52;
            local674 = local465;
            local675 = local498;
            local676 = local78;
            local677 = local106;
            local678 = *(esp_68 - 32);
            local679 = *(esp_68 - 36);
            local680 = *(esp_68 - 40);
            local681 = local226;
            local682 = *(esp_68 - 48);
            local683 = local274;
            local684 = local307;
            local685 = local335;
            local686 = local363;
            local687 = local391;
            local688 = local419;
            local689 = local447;
            local690 = local28;
            local691 = local49;
            local692 = esp_52;
        } while (esi == 0);
    }
    esp = local692;
    ebp = *(esp + 56);
    return ebp;
}

/** address: 0x08065274 */
__size32 caml_copy_string(__size32 param1)
{
    void *eax; 		// r24
    __size32 eax_1; 		// r24{11}
    union { __size32; __size32 *; } ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ecx_1; 		// r25{0}
    __size32 ecx_2; 		// r25{4}
    __size32 ecx_3; 		// r25{5}
    __size32 ecx_4; 		// r25{9}
    __size32 edi; 		// r31
    int esp; 		// r28
    int local0; 		// m[esp - 4]
    __size32 local6; 		// ecx_3{5}

    edi = param1;
    ecx_2 = -1;
    local6 = ecx_2;
    do {
        ecx_3 = local6;
        tmpb = 0 - *edi;
        edi +=  (DF == 0) ? 1 : -1;
        ecx_4 = ecx_3 - 1;
        local6 = ecx_4;
    } while (tmpb != 0);
    eax_1 = caml_alloc_string( ~ecx_1 - 1, 0); /* Warning: also results in ebx, esp, ebp */
    *(__size32*)(esp + 8) = ebx;
    eax = *(ebp + 8);
    *(__size32*)(esp + 4) = eax;
    *(__size32*)esp = eax_1;
    memmove(*esp, *(esp + 4), *(esp + 8));
    ebp = *ebp;
    return eax_1; /* WARNING: Also returning: ebp := ebp */
}

/** address: 0x08061b11 */
__size32 caml_raise_with_string(__size32 param1, __size32 param2)
{
    char al; 		// r8
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    __size32 eax; 		// r24
    int eax_1; 		// r24{114}
    union { __size32; __size32 *; } eax_10; 		// r24{198}
    union { __size32; __size32 *; } eax_11; 		// r24{198}
    __size32 eax_12; 		// r24{200}
    __size32 eax_13; 		// r24{200}
    int eax_14; 		// r24{114}
    int eax_15; 		// r24{114}
    int eax_2; 		// r24{115}
    int eax_3; 		// r24{115}
    unsigned int eax_4; 		// r24{138}
    unsigned int eax_5; 		// r24{138}
    unsigned int eax_6; 		// r24{138}
    __size32 eax_7; 		// r24{144}
    __size32 eax_8; 		// r24{144}
    union { __size32; __size32 *; } eax_9; 		// r24{198}
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{203}
    __size32 ebx_2; 		// r27{203}
    __size32 ebx_3; 		// r27{203}
    unsigned int ebx_4; 		// r27{204}
    unsigned int ebx_5; 		// r27{204}
    __size32 ecx; 		// r25
    unsigned int edi; 		// r31
    unsigned int edi_1; 		// r31{214}
    unsigned int edi_2; 		// r31{223}
    unsigned int edi_3; 		// r31{223}
    unsigned int edi_4; 		// r31{214}
    unsigned int edi_5; 		// r31{214}
    __size32 edx; 		// r26
    unsigned int esi; 		// r30
    unsigned int esi_1; 		// r30{155}
    unsigned int esi_2; 		// r30{155}
    unsigned int esi_3; 		// r30{155}
    unsigned int esi_4; 		// r30{156}
    unsigned int esi_5; 		// r30{156}
    __size32 esp; 		// r28
    union { __size32; __size32 *; } esp_1; 		// r28{9}
    __size32 esp_10; 		// r28{26}
    __size32 esp_11; 		// r28{26}
    __size32 esp_12; 		// r28{26}
    __size32 esp_13; 		// r28{48}
    __size32 esp_14; 		// r28{48}
    __size32 esp_15; 		// r28{48}
    void *esp_16; 		// r28{52}
    void *esp_17; 		// r28{52}
    void *esp_18; 		// r28{52}
    __size32 esp_19; 		// r28{56}
    union { __size32; __size32 *; } esp_2; 		// r28{9}
    __size32 esp_20; 		// r28{56}
    __size32 esp_21; 		// r28{56}
    __size32 esp_22; 		// r28{60}
    __size32 esp_23; 		// r28{60}
    __size32 esp_24; 		// r28{60}
    __size32 esp_25; 		// r28{64}
    __size32 esp_26; 		// r28{64}
    __size32 esp_27; 		// r28{64}
    __size32 esp_28; 		// r28{70}
    __size32 esp_29; 		// r28{70}
    union { __size32; __size32 *; } esp_3; 		// r28{9}
    __size32 esp_30; 		// r28{70}
    __size32 esp_31; 		// r28{155}
    __size32 esp_32; 		// r28{155}
    __size32 esp_33; 		// r28{155}
    __size32 esp_34; 		// r28{203}
    __size32 esp_35; 		// r28{203}
    __size32 esp_36; 		// r28{203}
    union { __size32; __size32 *; } esp_37; 		// r28{189}
    __size32 esp_38; 		// r28{1}
    __size32 esp_39; 		// r28{1}
    __size32 esp_4; 		// r28{14}
    union { __size32; __size32 *; } esp_40; 		// r28{129}
    __size32 esp_41; 		// r28{99}
    __size32 esp_42; 		// r28{162}
    __size32 esp_43; 		// r28{267}
    __size32 esp_44; 		// r28{211}
    __size32 esp_45; 		// r28{84}
    __size32 esp_46; 		// r28{249}
    __size32 esp_47; 		// r28{229}
    __size32 esp_48; 		// r28{229}
    union { __size32; __size32 *; } esp_49; 		// r28{129}
    __size32 esp_5; 		// r28{14}
    union { __size32; __size32 *; } esp_50; 		// r28{129}
    __size32 esp_51; 		// r28{162}
    __size32 esp_52; 		// r28{162}
    __size32 esp_53; 		// r28{99}
    __size32 esp_54; 		// r28{99}
    __size32 esp_55; 		// r28{267}
    __size32 esp_56; 		// r28{267}
    __size32 esp_57; 		// r28{84}
    __size32 esp_58; 		// r28{84}
    union { __size32; __size32 *; } esp_59; 		// r28{189}
    __size32 esp_6; 		// r28{14}
    union { __size32; __size32 *; } esp_60; 		// r28{189}
    __size32 esp_61; 		// r28{211}
    __size32 esp_62; 		// r28{211}
    __size32 esp_7; 		// r28{20}
    __size32 esp_8; 		// r28{20}
    __size32 esp_9; 		// r28{20}
    int local0; 		// m[esp - 4]
    int local1; 		// m[esp - 28]
    __size32 local10; 		// m[esp_38 + 8]{3}
    unsigned int local100; 		// m[esp_38 - 32]{105}
    unsigned int local101; 		// m[esp_38 - 32]{105}
    unsigned int local102; 		// m[esp_38 - 32]{90}
    unsigned int local103; 		// m[esp_38 - 32]{274}
    unsigned int local104; 		// m[esp_38 - 32]{274}
    unsigned int local105; 		// m[esp_38 - 32]{219}
    unsigned int local106; 		// m[esp_38 - 32]{219}
    unsigned int local107; 		// m[esp_38 - 32]{237}
    unsigned int local108; 		// m[esp_38 - 32]{237}
    unsigned int local109; 		// m[esp_38 - 32]{195}
    __size32 local11; 		// m[esp_38 + 8]{3}
    unsigned int local110; 		// m[esp_38 - 32]{195}
    int local111; 		// tmpb{102}
    int local112; 		// tmpb{155}
    int local113; 		// tmpb{155}
    int local114; 		// tmpb{155}
    int local115; 		// tmpb{165}
    int local116; 		// tmpb{155}
    int local117; 		// tmpb{270}
    int local118; 		// tmpb{215}
    int local119; 		// tmpb{86}
    __size32 local12; 		// m[esp_38 + 8]{108}
    int local120; 		// tmpb{252}
    int local121; 		// tmpb{233}
    int local122; 		// tmpb{270}
    int local123; 		// tmpb{215}
    int local124; 		// tmpb{86}
    int local125; 		// tmpb{252}
    int local126; 		// tmpb{233}
    int local127; 		// tmpb{203}
    int local128; 		// tmpb{203}
    int local129; 		// tmpb{203}
    __size32 local13; 		// m[esp_38 + 8]{108}
    int local130; 		// tmpb{155}
    int local131; 		// tmpb{102}
    int local132; 		// tmpb{4}
    int local133; 		// tmpb{4}
    int local134; 		// tmpb{215}
    int local135; 		// tmpb{215}
    int local136; 		// tmpb{270}
    int local137; 		// tmpb{270}
    int local138; 		// tmpb{165}
    int local139; 		// tmpb{165}
    __size32 local14; 		// m[esp_38 + 8]{171}
    int local140; 		// tmpb{102}
    int local141; 		// tmpb{102}
    __size16 local142; 		// tmph{119}
    __size16 local143; 		// tmph{271}
    __size16 local144; 		// tmph{216}
    __size16 local145; 		// tmph{87}
    __size16 local146; 		// tmph{253}
    __size16 local147; 		// tmph{234}
    __size16 local148; 		// tmph{119}
    __size16 local149; 		// tmph{271}
    __size32 local15; 		// m[esp_38 + 8]{277}
    __size16 local150; 		// tmph{216}
    __size16 local151; 		// tmph{87}
    __size16 local152; 		// tmph{253}
    __size16 local153; 		// tmph{234}
    int local154; 		// tmph{203}
    int local155; 		// tmph{203}
    int local156; 		// tmph{203}
    __size16 local157; 		// tmph{216}
    __size16 local158; 		// tmph{216}
    __size16 local159; 		// tmph{216}
    __size32 local16; 		// m[esp_38 + 8]{222}
    __size16 local160; 		// tmph{234}
    __size16 local161; 		// tmph{253}
    __size16 local162; 		// tmph{271}
    __size16 local163; 		// tmph{271}
    __size16 local164; 		// tmph{271}
    __size16 local165; 		// tmph{87}
    int local166; 		// tmph{203}
    __size16 local167; 		// tmph{271}
    __size16 local168; 		// tmph{216}
    __size16 local169; 		// tmph{87}
    __size32 local17; 		// m[esp_38 + 8]{259}
    __size16 local170; 		// tmph{253}
    __size16 local171; 		// tmph{234}
    __size16 local172; 		// tmph{119}
    __size16 local173; 		// tmph{5}
    __size16 local174; 		// tmph{5}
    __size32 local175; 		// esp_45{84}
    int local176; 		// local119{86}
    __size16 local177; 		// local145{87}
    __size32 local178; 		// m[esp_38 - 4]{88}
    __size32 local179; 		// m[esp_38 - 28]{89}
    __size32 local18; 		// m[esp_38 + 8]{240}
    unsigned int local180; 		// local102{90}
    __size32 local181; 		// esp_41{99}
    int local182; 		// local111{102}
    __size32 local183; 		// local29{103}
    __size32 local184; 		// local58{104}
    unsigned int local185; 		// local87{105}
    __size32 local186; 		// local7{108}
    int local187; 		// eax_1{114}
    union { __size32 *; __size32; } local188; 		// esp_40{129}
    unsigned int local189; 		// esi{131}
    __size32 local19; 		// m[esp_38 + 8]{222}
    __size32 local190; 		// local28{133}
    __size32 local191; 		// local57{134}
    unsigned int local192; 		// local86{135}
    union { __size32 *; unsigned int; } local193; 		// eax{146}
    __size32 local194; 		// esp_42{162}
    int local195; 		// local115{165}
    __size32 local196; 		// local41{166}
    __size32 local197; 		// local68{167}
    unsigned int local198; 		// local98{168}
    __size32 local199; 		// local14{171}
    int local2; 		// m[esp - 32]
    __size32 local20; 		// m[esp_38 + 8]{222}
    unsigned int local200; 		// ebx{188}
    union { __size32 *; __size32; } local201; 		// esp_37{189}
    __size32 local202; 		// local32{193}
    __size32 local203; 		// local61{194}
    unsigned int local204; 		// local90{195}
    unsigned int local205; 		// ebx{210}
    __size32 local206; 		// esp_44{211}
    int local207; 		// local118{215}
    __size16 local208; 		// local144{216}
    __size32 local209; 		// local35{217}
    __size32 local21; 		// m[esp_38 + 8]{171}
    __size32 local210; 		// local64{218}
    unsigned int local211; 		// local93{219}
    __size32 local212; 		// local16{222}
    __size32 local213; 		// esp_47{229}
    unsigned int local214; 		// edi{232}
    int local215; 		// local121{233}
    __size16 local216; 		// local147{234}
    __size32 local217; 		// local33{235}
    __size32 local218; 		// local62{236}
    unsigned int local219; 		// local91{237}
    __size32 local22; 		// m[esp_38 + 8]{171}
    __size32 local220; 		// local18{240}
    __size32 local221; 		// esp_46{249}
    int local222; 		// local120{252}
    __size16 local223; 		// local146{253}
    __size32 local224; 		// local40{254}
    __size32 local225; 		// local67{255}
    unsigned int local226; 		// m[esp_38 - 32]{256}
    __size32 local227; 		// local17{259}
    __size32 local228; 		// esp_43{267}
    int local229; 		// local117{270}
    __size32 local23; 		// m[esp_38 + 8]{277}
    __size16 local230; 		// local143{271}
    __size32 local231; 		// local34{272}
    __size32 local232; 		// local63{273}
    unsigned int local233; 		// local92{274}
    __size32 local234; 		// local15{277}
    __size32 local235; 		// esp{281}
    __size32 local24; 		// m[esp_38 + 8]{277}
    __size32 local25; 		// m[esp_38 - 4]{6}
    __size32 local26; 		// m[esp_38 - 4]{6}
    __size32 local27; 		// m[esp_38 - 4]{6}
    __size32 local28; 		// m[esp_38 - 4]{133}
    __size32 local29; 		// m[esp_38 - 4]{103}
    __size32 local3; 		// m[esp + 8]
    int local30; 		// m[esp_38 - 4]{155}
    int local31; 		// m[esp_38 - 4]{155}
    __size32 local32; 		// m[esp_38 - 4]{193}
    __size32 local33; 		// m[esp_38 - 4]{235}
    __size32 local34; 		// m[esp_38 - 4]{272}
    __size32 local35; 		// m[esp_38 - 4]{217}
    int local36; 		// m[esp_38 - 4]{203}
    int local37; 		// m[esp_38 - 4]{203}
    __size32 local38; 		// m[esp_38 - 4]{103}
    __size32 local39; 		// m[esp_38 - 4]{103}
    int local4; 		// m[esp_38 + 8]{155}
    __size32 local40; 		// m[esp_38 - 4]{254}
    __size32 local41; 		// m[esp_38 - 4]{166}
    __size32 local42; 		// m[esp_38 - 4]{217}
    __size32 local43; 		// m[esp_38 - 4]{217}
    __size32 local44; 		// m[esp_38 - 4]{193}
    __size32 local45; 		// m[esp_38 - 4]{193}
    __size32 local46; 		// m[esp_38 - 4]{166}
    __size32 local47; 		// m[esp_38 - 4]{166}
    __size32 local48; 		// m[esp_38 - 4]{235}
    __size32 local49; 		// m[esp_38 - 4]{235}
    int local5; 		// m[esp_38 + 8]{155}
    __size32 local50; 		// m[esp_38 - 4]{272}
    __size32 local51; 		// m[esp_38 - 4]{272}
    __size32 local52; 		// m[esp_38 - 4]{133}
    __size32 local53; 		// m[esp_38 - 4]{133}
    __size32 local54; 		// m[esp_38 - 28]{7}
    __size32 local55; 		// m[esp_38 - 28]{7}
    __size32 local56; 		// m[esp_38 - 28]{7}
    __size32 local57; 		// m[esp_38 - 28]{134}
    __size32 local58; 		// m[esp_38 - 28]{104}
    int local59; 		// m[esp_38 - 28]{155}
    int local6; 		// m[esp_38 + 8]{155}
    int local60; 		// m[esp_38 - 28]{155}
    __size32 local61; 		// m[esp_38 - 28]{194}
    __size32 local62; 		// m[esp_38 - 28]{236}
    __size32 local63; 		// m[esp_38 - 28]{273}
    __size32 local64; 		// m[esp_38 - 28]{218}
    int local65; 		// m[esp_38 - 28]{203}
    int local66; 		// m[esp_38 - 28]{203}
    __size32 local67; 		// m[esp_38 - 28]{255}
    __size32 local68; 		// m[esp_38 - 28]{167}
    __size32 local69; 		// m[esp_38 - 28]{134}
    __size32 local7; 		// m[esp_38 + 8]{108}
    __size32 local70; 		// m[esp_38 - 28]{134}
    __size32 local71; 		// m[esp_38 - 28]{236}
    __size32 local72; 		// m[esp_38 - 28]{236}
    __size32 local73; 		// m[esp_38 - 28]{273}
    __size32 local74; 		// m[esp_38 - 28]{273}
    __size32 local75; 		// m[esp_38 - 28]{167}
    __size32 local76; 		// m[esp_38 - 28]{167}
    __size32 local77; 		// m[esp_38 - 28]{218}
    __size32 local78; 		// m[esp_38 - 28]{218}
    __size32 local79; 		// m[esp_38 - 28]{194}
    int local8; 		// m[esp_38 + 8]{203}
    __size32 local80; 		// m[esp_38 - 28]{194}
    __size32 local81; 		// m[esp_38 - 28]{104}
    __size32 local82; 		// m[esp_38 - 28]{104}
    unsigned int local83; 		// m[esp_38 - 32]{8}
    unsigned int local84; 		// m[esp_38 - 32]{8}
    unsigned int local85; 		// m[esp_38 - 32]{8}
    unsigned int local86; 		// m[esp_38 - 32]{135}
    unsigned int local87; 		// m[esp_38 - 32]{105}
    int local88; 		// m[esp_38 - 32]{155}
    int local89; 		// m[esp_38 - 32]{155}
    int local9; 		// m[esp_38 + 8]{203}
    unsigned int local90; 		// m[esp_38 - 32]{195}
    unsigned int local91; 		// m[esp_38 - 32]{237}
    unsigned int local92; 		// m[esp_38 - 32]{274}
    unsigned int local93; 		// m[esp_38 - 32]{219}
    int local94; 		// m[esp_38 - 32]{203}
    int local95; 		// m[esp_38 - 32]{203}
    unsigned int local96; 		// m[esp_38 - 32]{135}
    unsigned int local97; 		// m[esp_38 - 32]{135}
    unsigned int local98; 		// m[esp_38 - 32]{168}
    unsigned int local99; 		// m[esp_38 - 32]{168}

    local25 = param2;
    local54 = param1;
    eax = caml_copy_string(param1); /* Warning: also results in esp_1, ebp */
    local176 = local132;
    local177 = local173;
    local178 = local25;
    local179 = local54;
    local180 = local83;
    local182 = local132;
    local183 = local25;
    local184 = local54;
    local185 = local83;
    local186 = param1;
    *(__size32*)(esp_1 + 4) = eax;
    eax = *(ebp + 8);
    *(__size32*)esp_1 = eax;
    esp_4 = caml_raise_with_arg(*esp_1, *(esp_1 + 4), ebp, *(esp_1 - 148)); /* Warning: also results in ebp */
    *(__size32*)(esp_4 - 4) = ebp;
    eax = *(esp_4 + 4);
    *(__size32*)(esp_4 - 24) = eax;
    *(__size32*)(esp_4 - 28) = 0x80724a8;
    esp_7 = caml_raise_with_string(*(esp_4 - 24), esp_4 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_7 - 4) = ebp;
    eax = *(esp_7 + 4);
    *(__size32*)(esp_7 - 24) = eax;
    *(__size32*)(esp_7 - 28) = 0x807248c;
    esp_10 = caml_raise_with_string(*(esp_7 - 24), esp_7 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_10 - 4) = ebp;
    *(__size32*)(esp_10 - 44) = caml_local_roots;
    *(__size32*)(esp_10 - 36) = 1;
    *(__size32*)(esp_10 - 40) = 1;
    *(__size32*)(esp_10 - 32) = esp_10 + 4;
    *(__size32*)(esp_10 - 48) = 0;
    *(__size32*)(esp_10 - 80) = esp_10 - 44;
    caml_local_roots = esp_10 - 80;
    *(__size32*)(esp_10 - 72) = 1;
    *(__size32*)(esp_10 - 76) = 1;
    *(__size32*)(esp_10 - 68) = esp_10 - 48;
    *(__size32*)(esp_10 - 104) = 0;
    *(__size32*)(esp_10 - 108) = 1;
    eax = caml_alloc_small(*(esp_10 - 108), *(esp_10 - 104)); /* Warning: also results in ebx */
    *(__size32*)(esp_10 - 48) = eax;
    edx = *(esp_10 + 4);
    *(__size32*)eax = edx;
    eax = *(esp_10 - 48);
    *(__size32*)(esp_10 - 108) = eax;
    esp_13 = caml_raise(*(esp_10 - 144), *(esp_10 - 108), ebx, esp_10 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_13 - 4) = ebp;
    *(__size32*)(esp_13 - 28) = 0x8072580;
    esp_16 = caml_raise_constant(*(esp_13 - 28), esp_13 - 4, *(esp_13 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_16 - 4) = ebp;
    *(__size32*)(esp_16 - 28) = 0x8072518;
    esp_19 = caml_raise_constant(*(esp_16 - 28), esp_16 - 4, *(esp_16 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_19 - 4) = ebp;
    *(__size32*)(esp_19 - 28) = 0x80724f0;
    esp_22 = caml_raise_constant(*(esp_19 - 28), esp_19 - 4, *(esp_19 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_22 - 4) = ebp;
    *(__size32*)(esp_22 - 28) = 0x80724d0;
    cl = caml_raise_constant(*(esp_22 - 28), esp_22 - 4, *(esp_22 - 176)); /* Warning: also results in dl, ecx, edx, ebx, esp_25, ebp, esi, edi */
    *(__size32*)(esp_25 - 4) = ebp;
    ebp = esp_25 - 4;
    *(unsigned int*)(esp_25 - 8) = edi;
    *(unsigned int*)(esp_25 - 12) = esi;
    *(unsigned int*)(esp_25 - 16) = ebx;
    esp_28 = esp_25 - 60;
    eax = *(esp_25 + 8);
    al = (unsigned char) eax;
    local175 = esp_28;
    local181 = esp_28;
    if (eax != 0) {
        edx = *(esp_25 + 16);
        *(__size32*)(esp_25 - 36) = edx;
        edx = *(esp_25 + 12);
        *(__size32*)(esp_25 - 32) = eax;
        do {
bb0x8061c57:
            esp_41 = local181;
            local111 = local182;
            local29 = local183;
            local58 = local184;
            local87 = local185;
            local7 = local186;
            esi = *(global_0x0807db9c + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local175 = esp_41;
            local176 = local111;
            local178 = local29;
            local179 = local58;
            local180 = local87;
            local181 = esp_41;
            local182 = local111;
            local183 = local29;
            local184 = local58;
            local185 = local87;
            local186 = local7;
            local187 = eax;
            local188 = esp_41;
            local190 = local29;
            local191 = local58;
            local192 = local87;
            local194 = esp_41;
            local195 = local111;
            local196 = local29;
            local197 = local58;
            local198 = local87;
            local199 = local7;
            if (*ebx != edx) {
                do {
                    eax_1 = local187;
                    eax_2 = eax_1 + 1 & esi;
                    ebx = *(caml_frame_descriptors + (eax_1 + 1 & esi) * 4);
                    local187 = eax_2;
                } while (*ebx != edx);
            }
            local142 = *(ebx + 4) + 1;
            local177 = local142;
            if (*(ebx + 4) != -1) {
                esi = *(unsigned short*)(ebx + 6);
                local189 = esi;
                if ((int)esi > 0) {
                    edi = ebx + 8;
                    *(__size32*)(ebp - 36) = ebx;
                    ebx = *(ebp + 8);
                    for(;;) {
                        esp_40 = local188;
                        esi = local189;
                        local28 = local190;
                        local57 = local191;
                        local86 = local192;
                        eax_4 = *(unsigned short*)edi;
                        if (((unsigned char) eax_4 & 0x1) == 0) {
                            eax_7 = eax_4 + *(ebp - 28);
                            flags = ADDFLAGS32(eax_4, *(ebp - 28), eax_7);
                            local193 = eax_7;
                        }
                        else {
                            flags = SARFLAGS((int)eax_4 >> 1, eax_4, 1);
                            edx = *(ebp - 32);
                            eax = edx + ((int)eax_4 >> 1) * 4;
                            local193 = eax;
                        }
                        eax = local193;
                        *(__size32*)(esp_40 + 4) = eax;
                        eax = *eax;
                        *(__size32*)esp_40 = eax;
                        (*ebx)((unsigned char) eax, eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, local28, local57, local86, cl, dl, param1);
                        local188 = esp_31;
                        local190 = local30;
                        local191 = local59;
                        local192 = local88;
                        local194 = esp_31;
                        local195 = local112;
                        local196 = local30;
                        local197 = local59;
                        local198 = local88;
                        local199 = local4;
                        esi_4 = esi_1 - 1;
                        local189 = esi_4;
                        if ((int)esi_1 <= 1) {
                            break;
                        }
                        edi += 2;
                    }
                    ebx = *(ebp - 36);
                }
                esp_42 = local194;
                local115 = local195;
                local41 = local196;
                local68 = local197;
                local98 = local198;
                local14 = local199;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local181 = esp_42;
                local182 = local115;
                local183 = local41;
                local184 = local68;
                local185 = local98;
                local186 = local14;
                goto bb0x8061c57;
            }
            eax = *(ebp - 28);
            edx = *(eax + 8);
            *(__size32*)(ebp - 28) = edx;
            edx = *(eax + 12);
            eax = *(eax + 16);
            al = (unsigned char) eax;
            *(__size32*)(ebp - 32) = eax;
        } while (*(ebp - 28) != 0);
    }
    esp_45 = local175;
    local119 = local176;
    local145 = local177;
    *(__size32*)(esp_38 - 4) = local178;
    *(__size32*)(esp_38 - 28) = local179;
    local102 = local180;
    param1 = local3;
    local228 = esp_45;
    local229 = local119;
    local230 = local145;
    local231 = *(esp_38 - 4);
    local232 = *(esp_38 - 28);
    local233 = local102;
    local234 = *(esp_38 + 8);
    local235 = esp_45;
    if (*(ebp + 24) != 0) {
        esi = *(ebp + 24);
        *(__size32*)(ebp - 28) = 0;
        do {
            esp_43 = local228;
            local117 = local229;
            local143 = local230;
            local34 = local231;
            local63 = local232;
            local92 = local233;
            local15 = local234;
            edi = 0;
            local213 = esp_43;
            local214 = edi;
            local215 = local117;
            local216 = local143;
            local217 = local34;
            local218 = local63;
            local219 = local92;
            local220 = local15;
            local221 = esp_43;
            local222 = local117;
            local223 = local143;
            local224 = local34;
            local225 = local63;
            local226 = local92;
            local227 = local15;
            if (*(esi + 4) > 0) {
                do {
                    esp_47 = local213;
                    edi = local214;
                    local121 = local215;
                    local147 = local216;
                    local33 = local217;
                    local62 = local218;
                    local91 = local219;
                    local18 = local220;
                    ebx = *(ebp - 28);
                    local200 = ebx;
                    local201 = esp_47;
                    local202 = local33;
                    local203 = local62;
                    local204 = local91;
                    local205 = ebx;
                    local206 = esp_47;
                    local207 = local121;
                    local208 = local147;
                    local209 = local33;
                    local210 = local62;
                    local211 = local91;
                    local212 = local18;
                    if (*(esi + 8) > 0) {
                        do {
                            ebx = local200;
                            esp_37 = local201;
                            local32 = local202;
                            local61 = local203;
                            local90 = local204;
                            eax_9 = ebx * 4 + *(esi + edi * 4 + 12);
                            *(__size32*)(esp_37 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_37 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, eax_12, ecx, edx, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), local32, local61, local90, cl, dl, param1);
                            local201 = esp_34;
                            local202 = local36;
                            local203 = local65;
                            local204 = local94;
                            local206 = esp_34;
                            local207 = local127;
                            local208 = local154;
                            local209 = local36;
                            local210 = local65;
                            local211 = local94;
                            local212 = local8;
                            ebx_4 = ebx_1 + 1;
                            local200 = ebx_4;
                            local205 = ebx_4;
                        } while (*(esi + 8) > ebx_1 + 1);
                    }
                    ebx = local205;
                    esp_44 = local206;
                    edi_1 = edi;
                    local118 = local207;
                    local144 = local208;
                    local35 = local209;
                    local64 = local210;
                    local93 = local211;
                    local16 = local212;
                    edi_2 = edi_1 + 1;
                    local213 = esp_44;
                    local214 = edi_2;
                    local215 = local118;
                    local216 = local144;
                    local217 = local35;
                    local218 = local64;
                    local219 = local93;
                    local220 = local16;
                    local221 = esp_44;
                    local222 = local118;
                    local223 = local144;
                    local224 = local35;
                    local225 = local64;
                    local226 = local93;
                    local227 = local16;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_46 = local221;
            local120 = local222;
            local146 = local223;
            local40 = local224;
            local67 = local225;
            *(unsigned int*)(esp_38 - 32) = local226;
            local17 = local227;
            esi = *esi;
            local228 = esp_46;
            local229 = local120;
            local230 = local146;
            local231 = local40;
            local232 = local67;
            local233 = *(esp_38 - 32);
            local234 = local17;
            local235 = esp_46;
        } while (esi == 0);
    }
    esp = local235;
    ebp = *(esp + 56);
    return ebp;
}

/** address: 0x08061b63 */
__size8 caml_raise_constant(int param1, __size32 param1, __size32 param2)
{
    char al; 		// r8
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    union { __size32; __size32 *; } eax; 		// r24
    int eax_1; 		// r24{109}
    union { __size32; __size32 *; } eax_10; 		// r24{223}
    union { __size32; __size32 *; } eax_11; 		// r24{223}
    __size32 eax_12; 		// r24{225}
    __size32 eax_13; 		// r24{225}
    int eax_14; 		// r24{109}
    int eax_15; 		// r24{109}
    int eax_2; 		// r24{110}
    int eax_3; 		// r24{110}
    unsigned int eax_4; 		// r24{143}
    unsigned int eax_5; 		// r24{143}
    unsigned int eax_6; 		// r24{143}
    __size32 eax_7; 		// r24{149}
    __size32 eax_8; 		// r24{149}
    union { __size32; __size32 *; } eax_9; 		// r24{223}
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{228}
    __size32 ebx_2; 		// r27{228}
    __size32 ebx_3; 		// r27{228}
    unsigned int ebx_4; 		// r27{229}
    unsigned int ebx_5; 		// r27{229}
    __size32 ecx; 		// r25
    unsigned int edi; 		// r31
    unsigned int edi_1; 		// r31{239}
    unsigned int edi_2; 		// r31{258}
    unsigned int edi_3; 		// r31{258}
    unsigned int edi_4; 		// r31{239}
    unsigned int edi_5; 		// r31{239}
    __size32 edx; 		// r26
    unsigned int esi; 		// r30
    unsigned int esi_1; 		// r30{160}
    unsigned int esi_2; 		// r30{160}
    unsigned int esi_3; 		// r30{160}
    unsigned int esi_4; 		// r30{161}
    unsigned int esi_5; 		// r30{161}
    __size32 esp; 		// r28
    __size32 esp_1; 		// r28{23}
    __size32 esp_10; 		// r28{35}
    __size32 esp_11; 		// r28{35}
    __size32 esp_12; 		// r28{35}
    __size32 esp_13; 		// r28{39}
    __size32 esp_14; 		// r28{39}
    __size32 esp_15; 		// r28{39}
    __size32 esp_16; 		// r28{45}
    __size32 esp_17; 		// r28{45}
    __size32 esp_18; 		// r28{45}
    __size32 esp_19; 		// r28{160}
    __size32 esp_2; 		// r28{23}
    __size32 esp_20; 		// r28{160}
    __size32 esp_21; 		// r28{160}
    __size32 esp_22; 		// r28{228}
    __size32 esp_23; 		// r28{228}
    __size32 esp_24; 		// r28{228}
    union { __size32; __size32 *; } esp_25; 		// r28{124}
    union { __size32; __size32 *; } esp_26; 		// r28{124}
    union { __size32; __size32 *; } esp_27; 		// r28{124}
    __size32 esp_28; 		// r28{167}
    __size32 esp_29; 		// r28{167}
    __size32 esp_3; 		// r28{23}
    __size32 esp_30; 		// r28{167}
    __size32 esp_31; 		// r28{84}
    __size32 esp_32; 		// r28{84}
    __size32 esp_33; 		// r28{84}
    __size32 esp_34; 		// r28{59}
    __size32 esp_35; 		// r28{59}
    __size32 esp_36; 		// r28{59}
    union { __size32; __size32 *; } esp_37; 		// r28{204}
    union { __size32; __size32 *; } esp_38; 		// r28{204}
    union { __size32; __size32 *; } esp_39; 		// r28{204}
    __size32 esp_4; 		// r28{27}
    __size32 esp_40; 		// r28{236}
    __size32 esp_41; 		// r28{236}
    __size32 esp_42; 		// r28{236}
    __size32 esp_43; 		// r28{264}
    __size32 esp_44; 		// r28{264}
    __size32 esp_45; 		// r28{264}
    __size32 esp_46; 		// r28{294}
    __size32 esp_47; 		// r28{322}
    __size32 esp_48; 		// r28{322}
    __size32 esp_49; 		// r28{322}
    __size32 esp_5; 		// r28{27}
    __size32 esp_50; 		// r28{1}
    __size32 esp_51; 		// r28{1}
    __size32 esp_6; 		// r28{27}
    __size32 esp_7; 		// r28{31}
    __size32 esp_8; 		// r28{31}
    __size32 esp_9; 		// r28{31}
    int local0; 		// m[esp - 4]
    int local1; 		// m[esp - 108]
    int local10; 		// m[esp - 68]
    __size32 local100; 		// m[esp_50 - 36]{272}
    __size32 local101; 		// m[esp_50 - 36]{329}
    __size32 local102; 		// m[esp_50 - 36]{244}
    int local103; 		// m[esp_50 - 36]{228}
    int local104; 		// m[esp_50 - 36]{228}
    __size32 local105; 		// m[esp_50 - 36]{173}
    __size32 local106; 		// m[esp_50 - 36]{173}
    __size32 local107; 		// m[esp_50 - 36]{90}
    __size32 local108; 		// m[esp_50 - 36]{90}
    __size32 local109; 		// m[esp_50 - 36]{301}
    int local11; 		// m[esp - 104]
    __size32 local110; 		// m[esp_50 - 36]{210}
    __size32 local111; 		// m[esp_50 - 36]{210}
    __size32 local112; 		// m[esp_50 - 36]{130}
    __size32 local113; 		// m[esp_50 - 36]{130}
    __size32 local114; 		// m[esp_50 - 36]{244}
    __size32 local115; 		// m[esp_50 - 36]{244}
    __size32 local116; 		// m[esp_50 - 36]{272}
    __size32 local117; 		// m[esp_50 - 36]{272}
    __size32 local118; 		// m[esp_50 - 36]{329}
    __size32 local119; 		// m[esp_50 - 36]{329}
    int local12; 		// m[esp - 112]
    __size32 local120; 		// m[esp_50 - 40]{10}
    __size32 local121; 		// m[esp_50 - 40]{10}
    __size32 local122; 		// m[esp_50 - 40]{10}
    __size32 local123; 		// m[esp_50 - 40]{131}
    __size32 local124; 		// m[esp_50 - 40]{91}
    int local125; 		// m[esp_50 - 40]{160}
    int local126; 		// m[esp_50 - 40]{160}
    __size32 local127; 		// m[esp_50 - 40]{211}
    __size32 local128; 		// m[esp_50 - 40]{273}
    __size32 local129; 		// m[esp_50 - 40]{330}
    int local13; 		// m[esp - 144]
    __size32 local130; 		// m[esp_50 - 40]{245}
    int local131; 		// m[esp_50 - 40]{228}
    int local132; 		// m[esp_50 - 40]{228}
    __size32 local133; 		// m[esp_50 - 40]{211}
    __size32 local134; 		// m[esp_50 - 40]{211}
    __size32 local135; 		// m[esp_50 - 40]{245}
    __size32 local136; 		// m[esp_50 - 40]{245}
    __size32 local137; 		// m[esp_50 - 40]{273}
    __size32 local138; 		// m[esp_50 - 40]{273}
    __size32 local139; 		// m[esp_50 - 40]{66}
    __size32 local14; 		// m[esp + 4]
    __size32 local140; 		// m[esp_50 - 40]{174}
    __size32 local141; 		// m[esp_50 - 40]{330}
    __size32 local142; 		// m[esp_50 - 40]{330}
    __size32 local143; 		// m[esp_50 - 40]{131}
    __size32 local144; 		// m[esp_50 - 40]{131}
    __size32 local145; 		// m[esp_50 - 40]{174}
    __size32 local146; 		// m[esp_50 - 40]{174}
    __size32 local147; 		// m[esp_50 - 40]{91}
    __size32 local148; 		// m[esp_50 - 40]{91}
    __size32 local149; 		// m[esp_50 - 44]{8}
    int local15; 		// m[esp_50 + 4]{160}
    __size32 local150; 		// m[esp_50 - 44]{8}
    __size32 local151; 		// m[esp_50 - 44]{8}
    __size32 local152; 		// m[esp_50 - 44]{132}
    __size32 local153; 		// m[esp_50 - 44]{92}
    int local154; 		// m[esp_50 - 44]{160}
    int local155; 		// m[esp_50 - 44]{160}
    __size32 local156; 		// m[esp_50 - 44]{212}
    __size32 local157; 		// m[esp_50 - 44]{274}
    __size32 local158; 		// m[esp_50 - 44]{331}
    __size32 local159; 		// m[esp_50 - 44]{246}
    int local16; 		// m[esp_50 + 4]{160}
    int local160; 		// m[esp_50 - 44]{228}
    int local161; 		// m[esp_50 - 44]{228}
    __size32 local162; 		// m[esp_50 - 44]{132}
    __size32 local163; 		// m[esp_50 - 44]{132}
    __size32 local164; 		// m[esp_50 - 44]{175}
    __size32 local165; 		// m[esp_50 - 44]{175}
    __size32 local166; 		// m[esp_50 - 44]{92}
    __size32 local167; 		// m[esp_50 - 44]{92}
    __size32 local168; 		// m[esp_50 - 44]{303}
    __size32 local169; 		// m[esp_50 - 44]{212}
    int local17; 		// m[esp_50 + 4]{160}
    __size32 local170; 		// m[esp_50 - 44]{212}
    __size32 local171; 		// m[esp_50 - 44]{246}
    __size32 local172; 		// m[esp_50 - 44]{246}
    __size32 local173; 		// m[esp_50 - 44]{274}
    __size32 local174; 		// m[esp_50 - 44]{274}
    __size32 local175; 		// m[esp_50 - 44]{331}
    __size32 local176; 		// m[esp_50 - 44]{331}
    __size32 local177; 		// m[esp_50 - 48]{19}
    __size32 local178; 		// m[esp_50 - 48]{19}
    __size32 local179; 		// m[esp_50 - 48]{19}
    __size32 local18; 		// m[esp_50 + 4]{103}
    __size32 local180; 		// m[esp_50 - 48]{133}
    __size32 local181; 		// m[esp_50 - 48]{93}
    int local182; 		// m[esp_50 - 48]{160}
    int local183; 		// m[esp_50 - 48]{160}
    __size32 local184; 		// m[esp_50 - 48]{213}
    __size32 local185; 		// m[esp_50 - 48]{275}
    __size32 local186; 		// m[esp_50 - 48]{332}
    __size32 local187; 		// m[esp_50 - 48]{247}
    int local188; 		// m[esp_50 - 48]{228}
    int local189; 		// m[esp_50 - 48]{228}
    int local19; 		// m[esp_50 + 4]{228}
    __size32 local190; 		// m[esp_50 - 48]{133}
    __size32 local191; 		// m[esp_50 - 48]{133}
    __size32 local192; 		// m[esp_50 - 48]{176}
    __size32 local193; 		// m[esp_50 - 48]{176}
    __size32 local194; 		// m[esp_50 - 48]{93}
    __size32 local195; 		// m[esp_50 - 48]{93}
    __size32 local196; 		// m[esp_50 - 48]{304}
    __size32 local197; 		// m[esp_50 - 48]{213}
    __size32 local198; 		// m[esp_50 - 48]{213}
    __size32 local199; 		// m[esp_50 - 48]{247}
    int local2; 		// m[esp - 44]
    int local20; 		// m[esp_50 + 4]{228}
    __size32 local200; 		// m[esp_50 - 48]{247}
    __size32 local201; 		// m[esp_50 - 48]{275}
    __size32 local202; 		// m[esp_50 - 48]{275}
    __size32 local203; 		// m[esp_50 - 48]{332}
    __size32 local204; 		// m[esp_50 - 48]{332}
    __size32 local205; 		// m[esp_50 - 68]{16}
    __size32 local206; 		// m[esp_50 - 68]{16}
    __size32 local207; 		// m[esp_50 - 68]{16}
    __size32 local208; 		// m[esp_50 - 68]{134}
    __size32 local209; 		// m[esp_50 - 68]{94}
    __size32 local21; 		// m[esp_50 + 4]{3}
    int local210; 		// m[esp_50 - 68]{160}
    int local211; 		// m[esp_50 - 68]{160}
    __size32 local212; 		// m[esp_50 - 68]{214}
    __size32 local213; 		// m[esp_50 - 68]{276}
    __size32 local214; 		// m[esp_50 - 68]{333}
    __size32 local215; 		// m[esp_50 - 68]{248}
    int local216; 		// m[esp_50 - 68]{228}
    int local217; 		// m[esp_50 - 68]{228}
    __size32 local218; 		// m[esp_50 - 68]{134}
    __size32 local219; 		// m[esp_50 - 68]{134}
    __size32 local22; 		// m[esp_50 + 4]{3}
    __size32 local220; 		// m[esp_50 - 68]{177}
    __size32 local221; 		// m[esp_50 - 68]{177}
    __size32 local222; 		// m[esp_50 - 68]{94}
    __size32 local223; 		// m[esp_50 - 68]{94}
    __size32 local224; 		// m[esp_50 - 68]{305}
    __size32 local225; 		// m[esp_50 - 68]{214}
    __size32 local226; 		// m[esp_50 - 68]{214}
    __size32 local227; 		// m[esp_50 - 68]{248}
    __size32 local228; 		// m[esp_50 - 68]{248}
    __size32 local229; 		// m[esp_50 - 68]{276}
    __size32 local23; 		// m[esp_50 + 4]{342}
    __size32 local230; 		// m[esp_50 - 68]{276}
    __size32 local231; 		// m[esp_50 - 68]{333}
    __size32 local232; 		// m[esp_50 - 68]{333}
    __size32 local233; 		// m[esp_50 - 72]{14}
    __size32 local234; 		// m[esp_50 - 72]{14}
    __size32 local235; 		// m[esp_50 - 72]{14}
    __size32 local236; 		// m[esp_50 - 72]{135}
    __size32 local237; 		// m[esp_50 - 72]{95}
    int local238; 		// m[esp_50 - 72]{160}
    int local239; 		// m[esp_50 - 72]{160}
    __size32 local24; 		// m[esp_50 + 4]{257}
    __size32 local240; 		// m[esp_50 - 72]{215}
    __size32 local241; 		// m[esp_50 - 72]{277}
    __size32 local242; 		// m[esp_50 - 72]{334}
    __size32 local243; 		// m[esp_50 - 72]{249}
    int local244; 		// m[esp_50 - 72]{228}
    int local245; 		// m[esp_50 - 72]{228}
    __size32 local246; 		// m[esp_50 - 72]{135}
    __size32 local247; 		// m[esp_50 - 72]{135}
    __size32 local248; 		// m[esp_50 - 72]{178}
    __size32 local249; 		// m[esp_50 - 72]{178}
    __size32 local25; 		// m[esp_50 + 4]{78}
    __size32 local250; 		// m[esp_50 - 72]{95}
    __size32 local251; 		// m[esp_50 - 72]{95}
    __size32 local252; 		// m[esp_50 - 72]{306}
    __size32 local253; 		// m[esp_50 - 72]{215}
    __size32 local254; 		// m[esp_50 - 72]{215}
    __size32 local255; 		// m[esp_50 - 72]{249}
    __size32 local256; 		// m[esp_50 - 72]{249}
    __size32 local257; 		// m[esp_50 - 72]{277}
    __size32 local258; 		// m[esp_50 - 72]{277}
    __size32 local259; 		// m[esp_50 - 72]{334}
    __size32 local26; 		// m[esp_50 + 4]{314}
    __size32 local260; 		// m[esp_50 - 72]{334}
    __size32 local261; 		// m[esp_50 - 76]{15}
    __size32 local262; 		// m[esp_50 - 76]{15}
    __size32 local263; 		// m[esp_50 - 76]{15}
    __size32 local264; 		// m[esp_50 - 76]{136}
    __size32 local265; 		// m[esp_50 - 76]{96}
    int local266; 		// m[esp_50 - 76]{160}
    int local267; 		// m[esp_50 - 76]{160}
    __size32 local268; 		// m[esp_50 - 76]{216}
    __size32 local269; 		// m[esp_50 - 76]{278}
    __size32 local27; 		// m[esp_50 + 4]{285}
    __size32 local270; 		// m[esp_50 - 76]{335}
    __size32 local271; 		// m[esp_50 - 76]{250}
    int local272; 		// m[esp_50 - 76]{228}
    int local273; 		// m[esp_50 - 76]{228}
    __size32 local274; 		// m[esp_50 - 76]{136}
    __size32 local275; 		// m[esp_50 - 76]{136}
    __size32 local276; 		// m[esp_50 - 76]{179}
    __size32 local277; 		// m[esp_50 - 76]{179}
    __size32 local278; 		// m[esp_50 - 76]{96}
    __size32 local279; 		// m[esp_50 - 76]{96}
    __size32 local28; 		// m[esp_50 + 4]{186}
    __size32 local280; 		// m[esp_50 - 76]{307}
    __size32 local281; 		// m[esp_50 - 76]{216}
    __size32 local282; 		// m[esp_50 - 76]{216}
    __size32 local283; 		// m[esp_50 - 76]{250}
    __size32 local284; 		// m[esp_50 - 76]{250}
    __size32 local285; 		// m[esp_50 - 76]{278}
    __size32 local286; 		// m[esp_50 - 76]{278}
    __size32 local287; 		// m[esp_50 - 76]{335}
    __size32 local288; 		// m[esp_50 - 76]{335}
    __size32 local289; 		// m[esp_50 - 80]{12}
    __size32 local29; 		// m[esp_50 + 4]{186}
    __size32 local290; 		// m[esp_50 - 80]{12}
    __size32 local291; 		// m[esp_50 - 80]{12}
    __size32 local292; 		// m[esp_50 - 80]{137}
    __size32 local293; 		// m[esp_50 - 80]{97}
    int local294; 		// m[esp_50 - 80]{160}
    int local295; 		// m[esp_50 - 80]{160}
    __size32 local296; 		// m[esp_50 - 80]{217}
    __size32 local297; 		// m[esp_50 - 80]{279}
    __size32 local298; 		// m[esp_50 - 80]{336}
    __size32 local299; 		// m[esp_50 - 80]{251}
    int local3; 		// m[esp - 36]
    __size32 local30; 		// m[esp_50 + 4]{103}
    int local300; 		// m[esp_50 - 80]{228}
    int local301; 		// m[esp_50 - 80]{228}
    __size32 local302; 		// m[esp_50 - 80]{137}
    __size32 local303; 		// m[esp_50 - 80]{137}
    __size32 local304; 		// m[esp_50 - 80]{180}
    __size32 local305; 		// m[esp_50 - 80]{180}
    __size32 local306; 		// m[esp_50 - 80]{97}
    __size32 local307; 		// m[esp_50 - 80]{97}
    __size32 local308; 		// m[esp_50 - 80]{308}
    __size32 local309; 		// m[esp_50 - 80]{217}
    __size32 local31; 		// m[esp_50 + 4]{103}
    __size32 local310; 		// m[esp_50 - 80]{217}
    __size32 local311; 		// m[esp_50 - 80]{251}
    __size32 local312; 		// m[esp_50 - 80]{251}
    __size32 local313; 		// m[esp_50 - 80]{279}
    __size32 local314; 		// m[esp_50 - 80]{279}
    __size32 local315; 		// m[esp_50 - 80]{336}
    __size32 local316; 		// m[esp_50 - 80]{336}
    __size32 local317; 		// m[esp_50 - 104]{17}
    __size32 local318; 		// m[esp_50 - 104]{17}
    __size32 local319; 		// m[esp_50 - 104]{17}
    __size32 local32; 		// m[esp_50 + 4]{257}
    __size32 local320; 		// m[esp_50 - 104]{138}
    __size32 local321; 		// m[esp_50 - 104]{98}
    int local322; 		// m[esp_50 - 104]{160}
    int local323; 		// m[esp_50 - 104]{160}
    __size32 local324; 		// m[esp_50 - 104]{218}
    __size32 local325; 		// m[esp_50 - 104]{280}
    __size32 local326; 		// m[esp_50 - 104]{337}
    __size32 local327; 		// m[esp_50 - 104]{252}
    int local328; 		// m[esp_50 - 104]{228}
    int local329; 		// m[esp_50 - 104]{228}
    __size32 local33; 		// m[esp_50 + 4]{257}
    __size32 local330; 		// m[esp_50 - 104]{138}
    __size32 local331; 		// m[esp_50 - 104]{138}
    __size32 local332; 		// m[esp_50 - 104]{181}
    __size32 local333; 		// m[esp_50 - 104]{181}
    __size32 local334; 		// m[esp_50 - 104]{98}
    __size32 local335; 		// m[esp_50 - 104]{98}
    __size32 local336; 		// m[esp_50 - 104]{309}
    __size32 local337; 		// m[esp_50 - 104]{218}
    __size32 local338; 		// m[esp_50 - 104]{218}
    __size32 local339; 		// m[esp_50 - 104]{252}
    __size32 local34; 		// m[esp_50 + 4]{342}
    __size32 local340; 		// m[esp_50 - 104]{252}
    __size32 local341; 		// m[esp_50 - 104]{280}
    __size32 local342; 		// m[esp_50 - 104]{280}
    __size32 local343; 		// m[esp_50 - 104]{337}
    __size32 local344; 		// m[esp_50 - 104]{337}
    __size32 local345; 		// m[esp_50 - 108]{21}
    __size32 local346; 		// m[esp_50 - 108]{21}
    __size32 local347; 		// m[esp_50 - 108]{21}
    __size32 local348; 		// m[esp_50 - 108]{139}
    __size32 local349; 		// m[esp_50 - 108]{99}
    __size32 local35; 		// m[esp_50 + 4]{342}
    int local350; 		// m[esp_50 - 108]{160}
    int local351; 		// m[esp_50 - 108]{160}
    __size32 local352; 		// m[esp_50 - 108]{219}
    __size32 local353; 		// m[esp_50 - 108]{281}
    __size32 local354; 		// m[esp_50 - 108]{338}
    __size32 local355; 		// m[esp_50 - 108]{253}
    int local356; 		// m[esp_50 - 108]{228}
    int local357; 		// m[esp_50 - 108]{228}
    __size32 local358; 		// m[esp_50 - 108]{139}
    __size32 local359; 		// m[esp_50 - 108]{139}
    __size32 local36; 		// m[esp_50 - 4]{7}
    __size32 local360; 		// m[esp_50 - 108]{182}
    __size32 local361; 		// m[esp_50 - 108]{182}
    __size32 local362; 		// m[esp_50 - 108]{99}
    __size32 local363; 		// m[esp_50 - 108]{99}
    __size32 local364; 		// m[esp_50 - 108]{310}
    __size32 local365; 		// m[esp_50 - 108]{219}
    __size32 local366; 		// m[esp_50 - 108]{219}
    __size32 local367; 		// m[esp_50 - 108]{253}
    __size32 local368; 		// m[esp_50 - 108]{253}
    __size32 local369; 		// m[esp_50 - 108]{281}
    __size32 local37; 		// m[esp_50 - 4]{7}
    __size32 local370; 		// m[esp_50 - 108]{281}
    __size32 local371; 		// m[esp_50 - 108]{338}
    __size32 local372; 		// m[esp_50 - 108]{338}
    unsigned int local373; 		// m[esp_50 - 112]{22}
    unsigned int local374; 		// m[esp_50 - 112]{22}
    unsigned int local375; 		// m[esp_50 - 112]{22}
    unsigned int local376; 		// m[esp_50 - 112]{140}
    unsigned int local377; 		// m[esp_50 - 112]{100}
    int local378; 		// m[esp_50 - 112]{160}
    int local379; 		// m[esp_50 - 112]{160}
    __size32 local38; 		// m[esp_50 - 4]{7}
    unsigned int local380; 		// m[esp_50 - 112]{220}
    unsigned int local381; 		// m[esp_50 - 112]{282}
    unsigned int local382; 		// m[esp_50 - 112]{339}
    unsigned int local383; 		// m[esp_50 - 112]{254}
    int local384; 		// m[esp_50 - 112]{228}
    int local385; 		// m[esp_50 - 112]{228}
    unsigned int local386; 		// m[esp_50 - 112]{140}
    unsigned int local387; 		// m[esp_50 - 112]{140}
    unsigned int local388; 		// m[esp_50 - 112]{183}
    unsigned int local389; 		// m[esp_50 - 112]{183}
    __size32 local39; 		// m[esp_50 - 4]{128}
    unsigned int local390; 		// m[esp_50 - 112]{100}
    unsigned int local391; 		// m[esp_50 - 112]{100}
    unsigned int local392; 		// m[esp_50 - 112]{311}
    unsigned int local393; 		// m[esp_50 - 112]{220}
    unsigned int local394; 		// m[esp_50 - 112]{220}
    unsigned int local395; 		// m[esp_50 - 112]{254}
    unsigned int local396; 		// m[esp_50 - 112]{254}
    unsigned int local397; 		// m[esp_50 - 112]{282}
    unsigned int local398; 		// m[esp_50 - 112]{282}
    unsigned int local399; 		// m[esp_50 - 112]{339}
    int local4; 		// m[esp - 40]
    __size32 local40; 		// m[esp_50 - 4]{88}
    unsigned int local400; 		// m[esp_50 - 112]{339}
    int local401; 		// tmpb{87}
    int local402; 		// tmpb{160}
    int local403; 		// tmpb{160}
    int local404; 		// tmpb{160}
    int local405; 		// tmpb{170}
    int local406; 		// tmpb{160}
    int local407; 		// tmpb{325}
    int local408; 		// tmpb{240}
    int local409; 		// tmpb{61}
    int local41; 		// m[esp_50 - 4]{160}
    int local410; 		// tmpb{297}
    int local411; 		// tmpb{268}
    int local412; 		// tmpb{325}
    int local413; 		// tmpb{240}
    int local414; 		// tmpb{61}
    int local415; 		// tmpb{297}
    int local416; 		// tmpb{268}
    int local417; 		// tmpb{228}
    int local418; 		// tmpb{228}
    int local419; 		// tmpb{228}
    int local42; 		// m[esp_50 - 4]{160}
    int local420; 		// tmpb{170}
    int local421; 		// tmpb{170}
    int local422; 		// tmpb{170}
    int local423; 		// tmpb{87}
    int local424; 		// tmpb{87}
    int local425; 		// tmpb{87}
    int local426; 		// tmpb{61}
    int local427; 		// tmpb{240}
    int local428; 		// tmpb{240}
    int local429; 		// tmpb{240}
    __size32 local43; 		// m[esp_50 - 4]{208}
    int local430; 		// tmpb{268}
    int local431; 		// tmpb{297}
    int local432; 		// tmpb{325}
    int local433; 		// tmpb{325}
    int local434; 		// tmpb{325}
    int local435; 		// tmpb{160}
    int local436; 		// tmpb{87}
    int local437; 		// tmpb{4}
    int local438; 		// tmpb{4}
    __size16 local439; 		// tmph{114}
    __size32 local44; 		// m[esp_50 - 4]{270}
    __size16 local440; 		// tmph{326}
    __size16 local441; 		// tmph{241}
    __size16 local442; 		// tmph{62}
    __size16 local443; 		// tmph{298}
    __size16 local444; 		// tmph{269}
    __size16 local445; 		// tmph{114}
    __size16 local446; 		// tmph{326}
    __size16 local447; 		// tmph{241}
    __size16 local448; 		// tmph{62}
    __size16 local449; 		// tmph{298}
    __size32 local45; 		// m[esp_50 - 4]{327}
    __size16 local450; 		// tmph{269}
    int local451; 		// tmph{228}
    int local452; 		// tmph{228}
    int local453; 		// tmph{228}
    __size16 local454; 		// tmph{62}
    __size16 local455; 		// tmph{241}
    __size16 local456; 		// tmph{241}
    __size16 local457; 		// tmph{241}
    __size16 local458; 		// tmph{269}
    __size16 local459; 		// tmph{298}
    __size32 local46; 		// m[esp_50 - 4]{242}
    __size16 local460; 		// tmph{326}
    __size16 local461; 		// tmph{326}
    __size16 local462; 		// tmph{326}
    int local463; 		// tmph{228}
    __size16 local464; 		// tmph{326}
    __size16 local465; 		// tmph{241}
    __size16 local466; 		// tmph{62}
    __size16 local467; 		// tmph{298}
    __size16 local468; 		// tmph{269}
    __size16 local469; 		// tmph{114}
    int local47; 		// m[esp_50 - 4]{228}
    __size16 local470; 		// tmph{5}
    __size16 local471; 		// tmph{5}
    __size32 local472; 		// esp_34{59}
    int local473; 		// local409{61}
    __size16 local474; 		// local442{62}
    __size32 local475; 		// m[esp_50 - 4]{63}
    __size32 local476; 		// local83{64}
    __size32 local477; 		// m[esp_50 - 36]{65}
    __size32 local478; 		// local139{66}
    __size32 local479; 		// m[esp_50 - 44]{67}
    int local48; 		// m[esp_50 - 4]{228}
    __size32 local480; 		// m[esp_50 - 48]{68}
    __size32 local481; 		// m[esp_50 - 68]{69}
    __size32 local482; 		// m[esp_50 - 72]{70}
    __size32 local483; 		// m[esp_50 - 76]{71}
    __size32 local484; 		// m[esp_50 - 80]{72}
    __size32 local485; 		// m[esp_50 - 104]{73}
    __size32 local486; 		// m[esp_50 - 108]{74}
    unsigned int local487; 		// m[esp_50 - 112]{75}
    __size32 local488; 		// esp_31{84}
    int local489; 		// local401{87}
    __size32 local49; 		// m[esp_50 - 4]{327}
    __size32 local490; 		// local40{88}
    __size32 local491; 		// local68{89}
    __size32 local492; 		// local96{90}
    __size32 local493; 		// local124{91}
    __size32 local494; 		// local153{92}
    __size32 local495; 		// local181{93}
    __size32 local496; 		// local209{94}
    __size32 local497; 		// local237{95}
    __size32 local498; 		// local265{96}
    __size32 local499; 		// local293{97}
    int local5; 		// m[esp - 32]
    __size32 local50; 		// m[esp_50 - 4]{327}
    __size32 local500; 		// local321{98}
    __size32 local501; 		// local349{99}
    unsigned int local502; 		// local377{100}
    __size32 local503; 		// local18{103}
    int local504; 		// eax_1{109}
    union { __size32 *; __size32; } local505; 		// esp_25{124}
    unsigned int local506; 		// esi{126}
    __size32 local507; 		// local39{128}
    __size32 local508; 		// local67{129}
    __size32 local509; 		// local95{130}
    __size32 local51; 		// m[esp_50 - 4]{171}
    __size32 local510; 		// local123{131}
    __size32 local511; 		// local152{132}
    __size32 local512; 		// local180{133}
    __size32 local513; 		// local208{134}
    __size32 local514; 		// local236{135}
    __size32 local515; 		// local264{136}
    __size32 local516; 		// local292{137}
    __size32 local517; 		// local320{138}
    __size32 local518; 		// local348{139}
    unsigned int local519; 		// local376{140}
    __size32 local52; 		// m[esp_50 - 4]{171}
    union { __size32 *; unsigned int; } local520; 		// eax{151}
    __size32 local521; 		// esp_28{167}
    int local522; 		// local405{170}
    __size32 local523; 		// local51{171}
    __size32 local524; 		// local79{172}
    __size32 local525; 		// local105{173}
    __size32 local526; 		// local140{174}
    __size32 local527; 		// local164{175}
    __size32 local528; 		// local192{176}
    __size32 local529; 		// local220{177}
    __size32 local53; 		// m[esp_50 - 4]{299}
    __size32 local530; 		// local248{178}
    __size32 local531; 		// local276{179}
    __size32 local532; 		// local304{180}
    __size32 local533; 		// local332{181}
    __size32 local534; 		// local360{182}
    unsigned int local535; 		// local388{183}
    __size32 local536; 		// local28{186}
    unsigned int local537; 		// ebx{203}
    union { __size32 *; __size32; } local538; 		// esp_37{204}
    __size32 local539; 		// local43{208}
    __size32 local54; 		// m[esp_50 - 4]{128}
    __size32 local540; 		// local71{209}
    __size32 local541; 		// local99{210}
    __size32 local542; 		// local127{211}
    __size32 local543; 		// local156{212}
    __size32 local544; 		// local184{213}
    __size32 local545; 		// local212{214}
    __size32 local546; 		// local240{215}
    __size32 local547; 		// local268{216}
    __size32 local548; 		// local296{217}
    __size32 local549; 		// local324{218}
    __size32 local55; 		// m[esp_50 - 4]{128}
    __size32 local550; 		// local352{219}
    unsigned int local551; 		// local380{220}
    unsigned int local552; 		// ebx{235}
    __size32 local553; 		// esp_40{236}
    int local554; 		// local408{240}
    __size16 local555; 		// local441{241}
    __size32 local556; 		// local46{242}
    __size32 local557; 		// local74{243}
    __size32 local558; 		// local102{244}
    __size32 local559; 		// local130{245}
    __size32 local56; 		// m[esp_50 - 4]{88}
    __size32 local560; 		// local159{246}
    __size32 local561; 		// local187{247}
    __size32 local562; 		// local215{248}
    __size32 local563; 		// local243{249}
    __size32 local564; 		// local271{250}
    __size32 local565; 		// local299{251}
    __size32 local566; 		// local327{252}
    __size32 local567; 		// local355{253}
    unsigned int local568; 		// local383{254}
    __size32 local569; 		// local24{257}
    __size32 local57; 		// m[esp_50 - 4]{88}
    __size32 local570; 		// esp_43{264}
    unsigned int local571; 		// edi{267}
    int local572; 		// local411{268}
    __size16 local573; 		// local444{269}
    __size32 local574; 		// local44{270}
    __size32 local575; 		// local72{271}
    __size32 local576; 		// local100{272}
    __size32 local577; 		// local128{273}
    __size32 local578; 		// local157{274}
    __size32 local579; 		// local185{275}
    __size32 local58; 		// m[esp_50 - 4]{270}
    __size32 local580; 		// local213{276}
    __size32 local581; 		// local241{277}
    __size32 local582; 		// local269{278}
    __size32 local583; 		// local297{279}
    __size32 local584; 		// local325{280}
    __size32 local585; 		// local353{281}
    unsigned int local586; 		// local381{282}
    __size32 local587; 		// local27{285}
    __size32 local588; 		// esp_46{294}
    int local589; 		// local410{297}
    __size32 local59; 		// m[esp_50 - 4]{270}
    __size16 local590; 		// local443{298}
    __size32 local591; 		// local53{299}
    __size32 local592; 		// m[esp_50 - 32]{300}
    __size32 local593; 		// local109{301}
    __size32 local594; 		// m[esp_50 - 40]{302}
    __size32 local595; 		// local168{303}
    __size32 local596; 		// local196{304}
    __size32 local597; 		// local224{305}
    __size32 local598; 		// local252{306}
    __size32 local599; 		// local280{307}
    int local6; 		// m[esp - 48]
    __size32 local60; 		// m[esp_50 - 4]{208}
    __size32 local600; 		// local308{308}
    __size32 local601; 		// local336{309}
    __size32 local602; 		// local364{310}
    unsigned int local603; 		// local392{311}
    __size32 local604; 		// local26{314}
    __size32 local605; 		// esp_47{322}
    int local606; 		// local407{325}
    __size16 local607; 		// local440{326}
    __size32 local608; 		// local45{327}
    __size32 local609; 		// local73{328}
    __size32 local61; 		// m[esp_50 - 4]{208}
    __size32 local610; 		// local101{329}
    __size32 local611; 		// local129{330}
    __size32 local612; 		// local158{331}
    __size32 local613; 		// local186{332}
    __size32 local614; 		// local214{333}
    __size32 local615; 		// local242{334}
    __size32 local616; 		// local270{335}
    __size32 local617; 		// local298{336}
    __size32 local618; 		// local326{337}
    __size32 local619; 		// local354{338}
    __size32 local62; 		// m[esp_50 - 4]{242}
    unsigned int local620; 		// local382{339}
    __size32 local621; 		// local23{342}
    __size32 local622; 		// esp{348}
    __size32 local63; 		// m[esp_50 - 4]{242}
    __size32 local64; 		// m[esp_50 - 32]{11}
    __size32 local65; 		// m[esp_50 - 32]{11}
    __size32 local66; 		// m[esp_50 - 32]{11}
    __size32 local67; 		// m[esp_50 - 32]{129}
    __size32 local68; 		// m[esp_50 - 32]{89}
    int local69; 		// m[esp_50 - 32]{160}
    int local7; 		// m[esp - 80]
    int local70; 		// m[esp_50 - 32]{160}
    __size32 local71; 		// m[esp_50 - 32]{209}
    __size32 local72; 		// m[esp_50 - 32]{271}
    __size32 local73; 		// m[esp_50 - 32]{328}
    __size32 local74; 		// m[esp_50 - 32]{243}
    int local75; 		// m[esp_50 - 32]{228}
    int local76; 		// m[esp_50 - 32]{228}
    __size32 local77; 		// m[esp_50 - 32]{129}
    __size32 local78; 		// m[esp_50 - 32]{129}
    __size32 local79; 		// m[esp_50 - 32]{172}
    int local8; 		// m[esp - 72]
    __size32 local80; 		// m[esp_50 - 32]{172}
    __size32 local81; 		// m[esp_50 - 32]{271}
    __size32 local82; 		// m[esp_50 - 32]{271}
    __size32 local83; 		// m[esp_50 - 32]{64}
    __size32 local84; 		// m[esp_50 - 32]{328}
    __size32 local85; 		// m[esp_50 - 32]{328}
    __size32 local86; 		// m[esp_50 - 32]{209}
    __size32 local87; 		// m[esp_50 - 32]{209}
    __size32 local88; 		// m[esp_50 - 32]{243}
    __size32 local89; 		// m[esp_50 - 32]{243}
    int local9; 		// m[esp - 76]
    __size32 local90; 		// m[esp_50 - 32]{89}
    __size32 local91; 		// m[esp_50 - 32]{89}
    __size32 local92; 		// m[esp_50 - 36]{9}
    __size32 local93; 		// m[esp_50 - 36]{9}
    __size32 local94; 		// m[esp_50 - 36]{9}
    __size32 local95; 		// m[esp_50 - 36]{130}
    __size32 local96; 		// m[esp_50 - 36]{90}
    int local97; 		// m[esp_50 - 36]{160}
    int local98; 		// m[esp_50 - 36]{160}
    __size32 local99; 		// m[esp_50 - 36]{210}

    local36 = param2;
    local149 = caml_local_roots;
    local92 = 1;
    local120 = 1;
    local64 = esp_50 + 4;
    local289 = esp_50 - 44;
    caml_local_roots = esp_50 - 80;
    local233 = 1;
    local261 = 1;
    local205 = esp_50 - 48;
    local317 = 0;
    eax = caml_alloc_small(1, 0); /* Warning: also results in ebx */
    local473 = local437;
    local474 = local470;
    local475 = local36;
    local476 = local64;
    local477 = local92;
    local478 = local120;
    local479 = local149;
    local481 = local205;
    local482 = local233;
    local483 = local261;
    local484 = local289;
    local485 = local317;
    local489 = local437;
    local490 = local36;
    local491 = local64;
    local492 = local92;
    local493 = local120;
    local494 = local149;
    local496 = local205;
    local497 = local233;
    local498 = local261;
    local499 = local289;
    local500 = local317;
    local503 = param1;
    local177 = eax;
    *(__size32*)eax = param1;
    local345 = eax;
    esp_1 = caml_raise(param1, eax, ebx, esp_50 - 4); /* Warning: also results in ebp */
    local480 = local177;
    local486 = local345;
    local487 = local373;
    local495 = local177;
    local501 = local345;
    local502 = local373;
    *(__size32*)(esp_1 - 4) = ebp;
    *(__size32*)(esp_1 - 28) = 0x8072580;
    esp_4 = caml_raise_constant(*(esp_1 - 28), esp_1 - 4, *(esp_1 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_4 - 4) = ebp;
    *(__size32*)(esp_4 - 28) = 0x8072518;
    esp_7 = caml_raise_constant(*(esp_4 - 28), esp_4 - 4, *(esp_4 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_7 - 4) = ebp;
    *(__size32*)(esp_7 - 28) = 0x80724f0;
    esp_10 = caml_raise_constant(*(esp_7 - 28), esp_7 - 4, *(esp_7 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_10 - 4) = ebp;
    *(__size32*)(esp_10 - 28) = 0x80724d0;
    cl = caml_raise_constant(*(esp_10 - 28), esp_10 - 4, *(esp_10 - 176)); /* Warning: also results in dl, ecx, edx, ebx, esp_13, ebp, esi, edi */
    *(__size32*)(esp_13 - 4) = ebp;
    ebp = esp_13 - 4;
    *(unsigned int*)(esp_13 - 8) = edi;
    *(unsigned int*)(esp_13 - 12) = esi;
    *(unsigned int*)(esp_13 - 16) = ebx;
    esp_16 = esp_13 - 60;
    eax = *(esp_13 + 8);
    al = (unsigned char) eax;
    local472 = esp_16;
    local488 = esp_16;
    if (eax != 0) {
        edx = *(esp_13 + 16);
        *(__size32*)(esp_13 - 36) = edx;
        edx = *(esp_13 + 12);
        *(__size32*)(esp_13 - 32) = eax;
        do {
bb0x8061c57:
            esp_31 = local488;
            local401 = local489;
            local40 = local490;
            local68 = local491;
            local96 = local492;
            local124 = local493;
            local153 = local494;
            local181 = local495;
            local209 = local496;
            local237 = local497;
            local265 = local498;
            local293 = local499;
            local321 = local500;
            local349 = local501;
            local377 = local502;
            local18 = local503;
            esi = *(global_0x0807db9c + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local472 = esp_31;
            local473 = local401;
            local475 = local40;
            local476 = local68;
            local477 = local96;
            local478 = local124;
            local479 = local153;
            local480 = local181;
            local481 = local209;
            local482 = local237;
            local483 = local265;
            local484 = local293;
            local485 = local321;
            local486 = local349;
            local487 = local377;
            local488 = esp_31;
            local489 = local401;
            local490 = local40;
            local491 = local68;
            local492 = local96;
            local493 = local124;
            local494 = local153;
            local495 = local181;
            local496 = local209;
            local497 = local237;
            local498 = local265;
            local499 = local293;
            local500 = local321;
            local501 = local349;
            local502 = local377;
            local503 = local18;
            local504 = eax;
            local505 = esp_31;
            local507 = local40;
            local508 = local68;
            local509 = local96;
            local510 = local124;
            local511 = local153;
            local512 = local181;
            local513 = local209;
            local514 = local237;
            local515 = local265;
            local516 = local293;
            local517 = local321;
            local518 = local349;
            local519 = local377;
            local521 = esp_31;
            local522 = local401;
            local523 = local40;
            local524 = local68;
            local525 = local96;
            local526 = local124;
            local527 = local153;
            local528 = local181;
            local529 = local209;
            local530 = local237;
            local531 = local265;
            local532 = local293;
            local533 = local321;
            local534 = local349;
            local535 = local377;
            local536 = local18;
            if (*ebx != edx) {
                do {
                    eax_1 = local504;
                    eax_2 = eax_1 + 1 & esi;
                    ebx = *(caml_frame_descriptors + (eax_1 + 1 & esi) * 4);
                    local504 = eax_2;
                } while (*ebx != edx);
            }
            local439 = *(ebx + 4) + 1;
            local474 = local439;
            if (*(ebx + 4) != -1) {
                esi = *(unsigned short*)(ebx + 6);
                local506 = esi;
                if ((int)esi > 0) {
                    edi = ebx + 8;
                    *(__size32*)(ebp - 36) = ebx;
                    ebx = *(ebp + 8);
                    for(;;) {
                        esp_25 = local505;
                        esi = local506;
                        local39 = local507;
                        local67 = local508;
                        local95 = local509;
                        local123 = local510;
                        local152 = local511;
                        local180 = local512;
                        local208 = local513;
                        local236 = local514;
                        local264 = local515;
                        local292 = local516;
                        local320 = local517;
                        local348 = local518;
                        local376 = local519;
                        eax_4 = *(unsigned short*)edi;
                        if (((unsigned char) eax_4 & 0x1) == 0) {
                            eax_7 = eax_4 + *(ebp - 28);
                            flags = ADDFLAGS32(eax_4, *(ebp - 28), eax_7);
                            local520 = eax_7;
                        }
                        else {
                            flags = SARFLAGS((int)eax_4 >> 1, eax_4, 1);
                            edx = *(ebp - 32);
                            eax = edx + ((int)eax_4 >> 1) * 4;
                            local520 = eax;
                        }
                        eax = local520;
                        *(__size32*)(esp_25 + 4) = eax;
                        eax = *eax;
                        *(__size32*)esp_25 = eax;
                        (*ebx)((unsigned char) eax, eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, local39, local67, local95, local123, local152, local180, local208, local236, local264, local292, local320, local348, local376, cl, dl, param1, param1);
                        local505 = esp_19;
                        local507 = local41;
                        local508 = local69;
                        local509 = local97;
                        local510 = local125;
                        local511 = local154;
                        local512 = local182;
                        local513 = local210;
                        local514 = local238;
                        local515 = local266;
                        local516 = local294;
                        local517 = local322;
                        local518 = local350;
                        local519 = local378;
                        local521 = esp_19;
                        local522 = local402;
                        local523 = local41;
                        local524 = local69;
                        local525 = local97;
                        local526 = local125;
                        local527 = local154;
                        local528 = local182;
                        local529 = local210;
                        local530 = local238;
                        local531 = local266;
                        local532 = local294;
                        local533 = local322;
                        local534 = local350;
                        local535 = local378;
                        local536 = local15;
                        esi_4 = esi_1 - 1;
                        local506 = esi_4;
                        if ((int)esi_1 <= 1) {
                            break;
                        }
                        edi += 2;
                    }
                    ebx = *(ebp - 36);
                }
                esp_28 = local521;
                local405 = local522;
                local51 = local523;
                local79 = local524;
                local105 = local525;
                local140 = local526;
                local164 = local527;
                local192 = local528;
                local220 = local529;
                local248 = local530;
                local276 = local531;
                local304 = local532;
                local332 = local533;
                local360 = local534;
                local388 = local535;
                local28 = local536;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local488 = esp_28;
                local489 = local405;
                local490 = local51;
                local491 = local79;
                local492 = local105;
                local493 = local140;
                local494 = local164;
                local495 = local192;
                local496 = local220;
                local497 = local248;
                local498 = local276;
                local499 = local304;
                local500 = local332;
                local501 = local360;
                local502 = local388;
                local503 = local28;
                goto bb0x8061c57;
            }
            eax = *(ebp - 28);
            edx = *(eax + 8);
            *(__size32*)(ebp - 28) = edx;
            edx = *(eax + 12);
            eax = *(eax + 16);
            al = (unsigned char) eax;
            *(__size32*)(ebp - 32) = eax;
        } while (*(ebp - 28) != 0);
    }
    esp_34 = local472;
    local409 = local473;
    local442 = local474;
    *(__size32*)(esp_50 - 4) = local475;
    local83 = local476;
    *(__size32*)(esp_50 - 36) = local477;
    local139 = local478;
    *(__size32*)(esp_50 - 44) = local479;
    *(__size32*)(esp_50 - 48) = local480;
    *(__size32*)(esp_50 - 68) = local481;
    *(__size32*)(esp_50 - 72) = local482;
    *(__size32*)(esp_50 - 76) = local483;
    *(__size32*)(esp_50 - 80) = local484;
    *(__size32*)(esp_50 - 104) = local485;
    *(__size32*)(esp_50 - 108) = local486;
    *(unsigned int*)(esp_50 - 112) = local487;
    local605 = esp_34;
    local606 = local409;
    local607 = local442;
    local608 = *(esp_50 - 4);
    local609 = local83;
    local610 = *(esp_50 - 36);
    local611 = local139;
    local612 = *(esp_50 - 44);
    local613 = *(esp_50 - 48);
    local614 = *(esp_50 - 68);
    local615 = *(esp_50 - 72);
    local616 = *(esp_50 - 76);
    local617 = *(esp_50 - 80);
    local618 = *(esp_50 - 104);
    local619 = *(esp_50 - 108);
    local620 = *(esp_50 - 112);
    local621 = local25;
    local622 = esp_34;
    if (*(ebp + 24) != 0) {
        esi = *(ebp + 24);
        *(__size32*)(ebp - 28) = 0;
        do {
            esp_47 = local605;
            local407 = local606;
            local440 = local607;
            local45 = local608;
            local73 = local609;
            local101 = local610;
            local129 = local611;
            local158 = local612;
            local186 = local613;
            local214 = local614;
            local242 = local615;
            local270 = local616;
            local298 = local617;
            local326 = local618;
            local354 = local619;
            local382 = local620;
            local23 = local621;
            edi = 0;
            local570 = esp_47;
            local571 = edi;
            local572 = local407;
            local573 = local440;
            local574 = local45;
            local575 = local73;
            local576 = local101;
            local577 = local129;
            local578 = local158;
            local579 = local186;
            local580 = local214;
            local581 = local242;
            local582 = local270;
            local583 = local298;
            local584 = local326;
            local585 = local354;
            local586 = local382;
            local587 = local23;
            local588 = esp_47;
            local589 = local407;
            local590 = local440;
            local591 = local45;
            local592 = local73;
            local593 = local101;
            local594 = local129;
            local595 = local158;
            local596 = local186;
            local597 = local214;
            local598 = local242;
            local599 = local270;
            local600 = local298;
            local601 = local326;
            local602 = local354;
            local603 = local382;
            local604 = local23;
            if (*(esi + 4) > 0) {
                do {
                    esp_43 = local570;
                    edi = local571;
                    local411 = local572;
                    local444 = local573;
                    local44 = local574;
                    local72 = local575;
                    local100 = local576;
                    local128 = local577;
                    local157 = local578;
                    local185 = local579;
                    local213 = local580;
                    local241 = local581;
                    local269 = local582;
                    local297 = local583;
                    local325 = local584;
                    local353 = local585;
                    local381 = local586;
                    local27 = local587;
                    ebx = *(ebp - 28);
                    local537 = ebx;
                    local538 = esp_43;
                    local539 = local44;
                    local540 = local72;
                    local541 = local100;
                    local542 = local128;
                    local543 = local157;
                    local544 = local185;
                    local545 = local213;
                    local546 = local241;
                    local547 = local269;
                    local548 = local297;
                    local549 = local325;
                    local550 = local353;
                    local551 = local381;
                    local552 = ebx;
                    local553 = esp_43;
                    local554 = local411;
                    local555 = local444;
                    local556 = local44;
                    local557 = local72;
                    local558 = local100;
                    local559 = local128;
                    local560 = local157;
                    local561 = local185;
                    local562 = local213;
                    local563 = local241;
                    local564 = local269;
                    local565 = local297;
                    local566 = local325;
                    local567 = local353;
                    local568 = local381;
                    local569 = local27;
                    if (*(esi + 8) > 0) {
                        do {
                            ebx = local537;
                            esp_37 = local538;
                            local43 = local539;
                            local71 = local540;
                            local99 = local541;
                            local127 = local542;
                            local156 = local543;
                            local184 = local544;
                            local212 = local545;
                            local240 = local546;
                            local268 = local547;
                            local296 = local548;
                            local324 = local549;
                            local352 = local550;
                            local380 = local551;
                            eax_9 = ebx * 4 + *(esi + edi * 4 + 12);
                            *(__size32*)(esp_37 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_37 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, eax_12, ecx, edx, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), local43, local71, local99, local127, local156, local184, local212, local240, local268, local296, local324, local352, local380, cl, dl, param1, param1);
                            local538 = esp_22;
                            local539 = local47;
                            local540 = local75;
                            local541 = local103;
                            local542 = local131;
                            local543 = local160;
                            local544 = local188;
                            local545 = local216;
                            local546 = local244;
                            local547 = local272;
                            local548 = local300;
                            local549 = local328;
                            local550 = local356;
                            local551 = local384;
                            local553 = esp_22;
                            local554 = local417;
                            local555 = local451;
                            local556 = local47;
                            local557 = local75;
                            local558 = local103;
                            local559 = local131;
                            local560 = local160;
                            local561 = local188;
                            local562 = local216;
                            local563 = local244;
                            local564 = local272;
                            local565 = local300;
                            local566 = local328;
                            local567 = local356;
                            local568 = local384;
                            local569 = local19;
                            ebx_4 = ebx_1 + 1;
                            local537 = ebx_4;
                            local552 = ebx_4;
                        } while (*(esi + 8) > ebx_1 + 1);
                    }
                    ebx = local552;
                    esp_40 = local553;
                    edi_1 = edi;
                    local408 = local554;
                    local441 = local555;
                    local46 = local556;
                    local74 = local557;
                    local102 = local558;
                    local130 = local559;
                    local159 = local560;
                    local187 = local561;
                    local215 = local562;
                    local243 = local563;
                    local271 = local564;
                    local299 = local565;
                    local327 = local566;
                    local355 = local567;
                    local383 = local568;
                    local24 = local569;
                    edi_2 = edi_1 + 1;
                    local570 = esp_40;
                    local571 = edi_2;
                    local572 = local408;
                    local573 = local441;
                    local574 = local46;
                    local575 = local74;
                    local576 = local102;
                    local577 = local130;
                    local578 = local159;
                    local579 = local187;
                    local580 = local215;
                    local581 = local243;
                    local582 = local271;
                    local583 = local299;
                    local584 = local327;
                    local585 = local355;
                    local586 = local383;
                    local587 = local24;
                    local588 = esp_40;
                    local589 = local408;
                    local590 = local441;
                    local591 = local46;
                    local592 = local74;
                    local593 = local102;
                    local594 = local130;
                    local595 = local159;
                    local596 = local187;
                    local597 = local215;
                    local598 = local243;
                    local599 = local271;
                    local600 = local299;
                    local601 = local327;
                    local602 = local355;
                    local603 = local383;
                    local604 = local24;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_46 = local588;
            local410 = local589;
            local443 = local590;
            local53 = local591;
            *(__size32*)(esp_50 - 32) = local592;
            local109 = local593;
            *(__size32*)(esp_50 - 40) = local594;
            local168 = local595;
            local196 = local596;
            local224 = local597;
            local252 = local598;
            local280 = local599;
            local308 = local600;
            local336 = local601;
            local364 = local602;
            local392 = local603;
            local26 = local604;
            esi = *esi;
            local605 = esp_46;
            local606 = local410;
            local607 = local443;
            local608 = local53;
            local609 = *(esp_50 - 32);
            local610 = local109;
            local611 = *(esp_50 - 40);
            local612 = local168;
            local613 = local196;
            local614 = local224;
            local615 = local252;
            local616 = local280;
            local617 = local308;
            local618 = local336;
            local619 = local364;
            local620 = local392;
            local621 = local26;
            local622 = esp_46;
        } while (esi == 0);
    }
    esp = local622;
    ebx = *(esp + 44);
    esi = *(esp + 48);
    edi = *(esp + 52);
    ebp = *(esp + 56);
    return cl; /* WARNING: Also returning: dl := dl, ecx := ecx, edx := edx, ebx := ebx, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x08064a51 */
__size32 caml_stat_free(union { void *; __size32; } param1)
{
    int ecx; 		// r25
    int edx; 		// r26

    ecx = free(param1); /* Warning: also results in edx */
    return ecx; /* WARNING: Also returning: edx := edx */
}

/** address: 0x0806207a */
void caml_oldify_local_roots(__size8 param1, int param2, unsigned int param3, __size32 param4, unsigned int param5, unsigned int param6)
{
    char al; 		// r8
    __size8 bl; 		// r11
    __size8 cl; 		// r9
    char dl; 		// r10
    char dl_1; 		// r10{0}
    char dl_2; 		// r10{144}
    unsigned int eax; 		// r24
    unsigned int eax_1; 		// r24{90}
    unsigned int eax_10; 		// r24{254}
    unsigned int eax_11; 		// r24{245}
    unsigned int eax_2; 		// r24{97}
    unsigned int eax_4; 		// r24{160}
    unsigned int eax_5; 		// r24{161}
    unsigned int eax_7; 		// r24{16}
    unsigned int eax_8; 		// r24{23}
    __size32 ebp; 		// r29
    __size32 ebp_1; 		// r29{9}
    __size32 ebp_10; 		// r29{259}
    __size32 ebp_11; 		// r29{329}
    __size32 ebp_12; 		// r29{240}
    __size32 ebp_13; 		// r29{230}
    __size32 ebp_14; 		// r29{152}
    __size32 ebp_15; 		// r29{138}
    __size32 ebp_16; 		// r29{129}
    __size32 ebp_17; 		// r29{119}
    __size32 ebp_18; 		// r29{107}
    __size32 ebp_19; 		// r29{94}
    __size32 ebp_20; 		// r29{80}
    __size32 ebp_21; 		// r29{69}
    __size32 ebp_22; 		// r29{44}
    __size32 ebp_23; 		// r29{34}
    __size32 ebp_24; 		// r29{20}
    __size32 ebp_25; 		// r29{314}
    __size32 ebp_26; 		// r29{286}
    __size32 ebp_27; 		// r29{205}
    __size32 ebp_28; 		// r29{56}
    __size32 ebp_29; 		// r29{194}
    __size32 ebp_30; 		// r29{173}
    __size32 ebp_4; 		// r29{102}
    __size32 ebp_5; 		// r29{134}
    __size32 ebp_6; 		// r29{189}
    __size32 ebp_7; 		// r29{29}
    __size32 ebp_8; 		// r29{301}
    __size32 ebp_9; 		// r29{273}
    unsigned int ebx_1; 		// r27{88}
    union { __size32 *; unsigned int; } ebx_10; 		// r27{162}
    unsigned int ebx_13; 		// r27{62}
    unsigned int ebx_16; 		// r27{189}
    unsigned int ebx_17; 		// r27{29}
    unsigned int ebx_18; 		// r27{37}
    unsigned int ebx_2; 		// r27{102}
    unsigned int ebx_21; 		// r27{299}
    unsigned int ebx_22; 		// r27{271}
    __size32 ebx_23; 		// r27{329}
    unsigned int ebx_24; 		// r27{290}
    unsigned int ebx_27; 		// r27{250}
    unsigned int ebx_28; 		// r27{257}
    unsigned int ebx_29; 		// r27{238}
    unsigned int ebx_3; 		// r27{111}
    unsigned int ebx_30; 		// r27{228}
    union { __size32 *; unsigned int; } ebx_31; 		// r27{164}
    unsigned int ebx_32; 		// r27{136}
    unsigned int ebx_33; 		// r27{127}
    unsigned int ebx_34; 		// r27{117}
    unsigned int ebx_35; 		// r27{105}
    unsigned int ebx_36; 		// r27{92}
    unsigned int ebx_37; 		// r27{78}
    unsigned int ebx_38; 		// r27{67}
    unsigned int ebx_39; 		// r27{42}
    unsigned int ebx_40; 		// r27{32}
    unsigned int ebx_41; 		// r27{18}
    unsigned int ebx_42; 		// r27{312}
    unsigned int ebx_43; 		// r27{263}
    unsigned int ebx_57; 		// r27{203}
    unsigned int ebx_58; 		// r27{171}
    unsigned int ebx_59; 		// r27{192}
    unsigned int ebx_6; 		// r27{134}
    union { __size32 *; unsigned int; } ebx_7; 		// r27{158}
    int ecx; 		// r25
    __size32 ecx_1; 		// r25{0}
    __size32 ecx_12; 		// r25{157}
    __size32 ecx_15; 		// r25{178}
    __size32 ecx_18; 		// r25{189}
    int ecx_19; 		// r25{29}
    __size32 ecx_2; 		// r25{297}
    int ecx_20; 		// r25{50}
    __size32 ecx_23; 		// r25{237}
    __size32 ecx_24; 		// r25{226}
    int ecx_25; 		// r25{116}
    int ecx_26; 		// r25{104}
    int ecx_27; 		// r25{91}
    int ecx_28; 		// r25{77}
    int ecx_29; 		// r25{31}
    __size32 ecx_3; 		// r25{269}
    int ecx_30; 		// r25{17}
    __size32 ecx_31; 		// r25{310}
    __size32 ecx_32; 		// r25{283}
    int ecx_33; 		// r25{54}
    __size32 ecx_34; 		// r25{182}
    __size32 ecx_35; 		// r25{170}
    __size32 ecx_36; 		// r25{191}
    __size32 ecx_4; 		// r25{255}
    int ecx_5; 		// r25{73}
    int ecx_8; 		// r25{102}
    __size32 ecx_9; 		// r25{141}
    unsigned int edi_1; 		// r31{12}
    __size32 edi_10; 		// r31{189}
    __size32 edi_11; 		// r31{200}
    unsigned int edi_12; 		// r31{29}
    unsigned int edi_13; 		// r31{51}
    unsigned int edi_16; 		// r31{317}
    __size32 edi_17; 		// r31{329}
    unsigned int edi_18; 		// r31{250}
    unsigned int edi_19; 		// r31{275}
    unsigned int edi_20; 		// r31{261}
    unsigned int edi_21; 		// r31{242}
    unsigned int edi_22; 		// r31{153}
    unsigned int edi_23; 		// r31{139}
    unsigned int edi_24; 		// r31{130}
    unsigned int edi_25; 		// r31{120}
    unsigned int edi_26; 		// r31{109}
    unsigned int edi_27; 		// r31{96}
    unsigned int edi_28; 		// r31{70}
    unsigned int edi_29; 		// r31{45}
    unsigned int edi_30; 		// r31{36}
    unsigned int edi_31; 		// r31{22}
    unsigned int edi_32; 		// r31{288}
    unsigned int edi_33; 		// r31{206}
    unsigned int edi_34; 		// r31{57}
    unsigned int edi_35; 		// r31{277}
    unsigned int edi_4; 		// r31{83}
    union { unsigned short *; unsigned int; } edi_49; 		// r31{175}
    union { unsigned short *; unsigned int; } edi_50; 		// r31{196}
    unsigned int edi_7; 		// r31{102}
    unsigned int edi_8; 		// r31{134}
    __size32 edi_9; 		// r31{168}
    unsigned int edx; 		// r26
    __size32 esi; 		// r30
    int esi_1; 		// r30{84}
    __size32 esi_10; 		// r30{232}
    unsigned int esi_13; 		// r30{189}
    unsigned int esi_14; 		// r30{195}
    unsigned int esi_15; 		// r30{198}
    __size32 esi_17; 		// r30{29}
    __size32 esi_18; 		// r30{329}
    __size32 esi_19; 		// r30{304}
    __size32 esi_2; 		// r30{102}
    union { __size32; __size32 *; } esi_21; 		// r30{302}
    __size32 esi_22; 		// r30{274}
    __size32 esi_23; 		// r30{260}
    __size32 esi_24; 		// r30{241}
    union { int *; unsigned int; } esi_25; 		// r30{108}
    __size32 esi_26; 		// r30{95}
    union { int *; unsigned int; } esi_27; 		// r30{35}
    __size32 esi_28; 		// r30{21}
    __size32 esi_29; 		// r30{315}
    unsigned int esi_3; 		// r30{155}
    __size32 esi_30; 		// r30{287}
    unsigned int esi_31; 		// r30{174}
    unsigned int esi_6; 		// r30{166}
    int esi_9; 		// r30{59}
    union { __size32; unsigned int *; } esp_1; 		// r28{10}
    union { __size32; unsigned int *; } esp_14; 		// r28{250}
    unsigned int *esp_15; 		// r28{33}
    unsigned int *esp_18; 		// r28{19}
    unsigned int *esp_21; 		// r28{43}
    unsigned int *esp_24; 		// r28{55}
    union { unsigned int *; __size32; } esp_27; 		// r28{68}
    union { unsigned int *; __size32; } esp_28; 		// r28{106}
    union { unsigned int *; __size32; } esp_31; 		// r28{93}
    union { __size32; unsigned int *; } esp_34; 		// r28{118}
    union { __size32; unsigned int *; } esp_37; 		// r28{79}
    __size32 esp_4; 		// r28{102}
    union { __size32; unsigned int *; } esp_40; 		// r28{128}
    union { unsigned int *; __size32; } esp_43; 		// r28{137}
    union { unsigned int *; __size32; } esp_44; 		// r28{193}
    union { unsigned int *; __size32; } esp_47; 		// r28{172}
    __size32 esp_5; 		// r28{134}
    union { __size32; unsigned int *; } esp_50; 		// r28{204}
    union { __size32; unsigned int *; } esp_51; 		// r28{151}
    union { __size32; unsigned int *; } esp_54; 		// r28{229}
    unsigned int *esp_57; 		// r28{258}
    __size32 esp_6; 		// r28{189}
    unsigned int *esp_60; 		// r28{239}
    unsigned int *esp_63; 		// r28{272}
    unsigned int *esp_66; 		// r28{285}
    unsigned int *esp_69; 		// r28{300}
    unsigned int *esp_7; 		// r28{29}
    unsigned int *esp_72; 		// r28{313}
    union { unsigned int *; __size32; } esp_75; 		// r28{322}
    __size32 esp_78; 		// r28{1}
    __size32 *esp_8; 		// r28{326}
    __size32 local10; 		// ebp_24{20}
    unsigned int local100; 		// ebx_28{257}
    unsigned int *local101; 		// esp_57{258}
    __size32 local102; 		// ebp_10{259}
    __size32 local103; 		// esi_23{260}
    unsigned int local104; 		// edi_20{261}
    unsigned int local105; 		// eax{268}
    __size32 local106; 		// ecx_3{269}
    unsigned int local107; 		// ebx_22{271}
    unsigned int *local108; 		// esp_63{272}
    __size32 local109; 		// ebp_9{273}
    __size32 local11; 		// esi_28{21}
    __size32 local110; 		// esi_22{274}
    unsigned int local111; 		// edi_19{275}
    __size32 local112; 		// ecx_32{283}
    unsigned int *local113; 		// esp_66{285}
    __size32 local114; 		// ebp_26{286}
    __size32 local115; 		// esi_30{287}
    unsigned int local116; 		// edi_32{288}
    __size32 local117; 		// ecx_2{297}
    unsigned int local118; 		// ebx_21{299}
    unsigned int *local119; 		// esp_69{300}
    unsigned int local12; 		// edi_31{22}
    __size32 local120; 		// ebp_8{301}
    union { __size32 *; __size32; } local121; 		// esi_21{302}
    __size32 local122; 		// ecx_31{310}
    unsigned int local123; 		// ebx_42{312}
    unsigned int *local124; 		// esp_72{313}
    __size32 local125; 		// ebp_25{314}
    __size32 local126; 		// esi_29{315}
    union { __size32; unsigned int *; } local127; 		// esp_75{322}
    int local13; 		// ecx_29{31}
    unsigned int local14; 		// ebx_40{32}
    unsigned int *local15; 		// esp_15{33}
    __size32 local16; 		// ebp_23{34}
    union { unsigned int; int *; } local17; 		// esi_27{35}
    unsigned int local18; 		// edi_30{36}
    __size8 local19; 		// bl{41}
    unsigned int local20; 		// ebx_39{42}
    unsigned int *local21; 		// esp_21{43}
    __size32 local22; 		// ebp_22{44}
    unsigned int local23; 		// edi_29{45}
    __size8 local24; 		// param1{53}
    int local25; 		// ecx_33{54}
    unsigned int *local26; 		// esp_24{55}
    __size32 local27; 		// ebp_28{56}
    unsigned int local28; 		// edi_34{57}
    __size8 local29; 		// param1{65}
    unsigned int local30; 		// ebx_38{67}
    union { __size32; unsigned int *; } local31; 		// esp_27{68}
    __size32 local32; 		// ebp_21{69}
    unsigned int local33; 		// edi_28{70}
    __size8 local34; 		// bl{76}
    int local35; 		// ecx_28{77}
    unsigned int local36; 		// ebx_37{78}
    union { unsigned int *; __size32; } local37; 		// esp_37{79}
    __size32 local38; 		// ebp_20{80}
    int local39; 		// ecx_27{91}
    unsigned int local40; 		// ebx_36{92}
    union { __size32; unsigned int *; } local41; 		// esp_31{93}
    __size32 local42; 		// ebp_19{94}
    __size32 local43; 		// esi_26{95}
    unsigned int local44; 		// edi_27{96}
    int local45; 		// ecx_26{104}
    unsigned int local46; 		// ebx_35{105}
    union { __size32; unsigned int *; } local47; 		// esp_28{106}
    __size32 local48; 		// ebp_18{107}
    union { unsigned int; int *; } local49; 		// esi_25{108}
    unsigned int local50; 		// edi_26{109}
    int local51; 		// ecx_25{116}
    unsigned int local52; 		// ebx_34{117}
    union { unsigned int *; __size32; } local53; 		// esp_34{118}
    __size32 local54; 		// ebp_17{119}
    unsigned int local55; 		// edi_25{120}
    __size8 local56; 		// bl{126}
    unsigned int local57; 		// ebx_33{127}
    union { unsigned int *; __size32; } local58; 		// esp_40{128}
    __size32 local59; 		// ebp_16{129}
    __size8 local6; 		// bl{15}
    unsigned int local60; 		// edi_24{130}
    unsigned int local61; 		// ebx_32{136}
    union { __size32; unsigned int *; } local62; 		// esp_43{137}
    __size32 local63; 		// ebp_15{138}
    unsigned int local64; 		// edi_23{139}
    union { unsigned int *; __size32; } local65; 		// esp_51{151}
    __size32 local66; 		// ebp_14{152}
    unsigned int local67; 		// edi_22{153}
    unsigned int local68; 		// eax_4{160}
    union { unsigned int; __size32 *; } local69; 		// ebx_31{164}
    int local7; 		// ecx_30{17}
    __size32 local70; 		// ecx_35{170}
    unsigned int local71; 		// ebx_58{171}
    union { __size32; unsigned int *; } local72; 		// esp_47{172}
    __size32 local73; 		// ebp_30{173}
    unsigned int local74; 		// esi_31{174}
    union { unsigned int; unsigned short *; } local75; 		// edi_49{175}
    __size32 local76; 		// ecx_34{182}
    __size32 local77; 		// ecx_36{191}
    unsigned int local78; 		// ebx_59{192}
    union { __size32; unsigned int *; } local79; 		// esp_44{193}
    unsigned int local8; 		// ebx_41{18}
    __size32 local80; 		// ebp_29{194}
    unsigned int local81; 		// esi_14{195}
    union { unsigned int; unsigned short *; } local82; 		// edi_50{196}
    unsigned int local83; 		// ebx_57{203}
    union { unsigned int *; __size32; } local84; 		// esp_50{204}
    __size32 local85; 		// ebp_27{205}
    unsigned int local86; 		// edi_33{206}
    char local87; 		// dl{223}
    __size32 local88; 		// ecx_24{226}
    unsigned int local89; 		// ebx_30{228}
    unsigned int *local9; 		// esp_18{19}
    union { unsigned int *; __size32; } local90; 		// esp_54{229}
    __size32 local91; 		// ebp_13{230}
    __size32 local92; 		// ecx_23{237}
    unsigned int local93; 		// ebx_29{238}
    unsigned int *local94; 		// esp_60{239}
    __size32 local95; 		// ebp_12{240}
    __size32 local96; 		// esi_24{241}
    unsigned int local97; 		// edi_21{242}
    unsigned int local98; 		// eax_10{254}
    __size32 local99; 		// ecx_4{255}

    ebp_1 = esp_78 - 4;
    esp_1 = esp_78 - 60;
    local24 = param1;
    local25 = param2;
    local26 = esp_1;
    local27 = ebp_1;
    local29 = param1;
    local29 = param1;
    local30 = param3;
    local30 = param3;
    local31 = esp_1;
    local31 = esp_1;
    local32 = ebp_1;
    local32 = ebp_1;
    local33 = param6;
    if (caml_globals_scanned <= caml_globals_inited) {
        edi_1 = caml_globals[caml_globals_scanned];
        local28 = edi_1;
        local33 = edi_1;
        if (caml_globals[caml_globals_scanned] != 0) {
            do {
                param1 = local24;
                ecx_33 = local25;
                esp_24 = local26;
                ebp_28 = local27;
                edi_34 = local28;
                esi_9 = edi_34 - 4;
                edx = *(edi_34 - 4);
                eax = 0;
                ebx_13 = 0;
                local6 = param1;
                local7 = ecx_33;
                local8 = ebx_13;
                local9 = esp_24;
                local10 = ebp_28;
                local11 = esi_9;
                local12 = edi_34;
                local19 = param1;
                local20 = ebx_13;
                local21 = esp_24;
                local22 = ebp_28;
                local23 = edi_34;
                if ((unsigned int)edx >> 10 != 0) {
                    do {
                        bl = local6;
                        eax_7 = eax;
                        ecx_30 = local7;
                        ebx_41 = local8;
                        esp_18 = local9;
                        ebp_24 = local10;
                        esi_28 = local11;
                        edi_31 = local12;
                        eax_8 = *(edi_31 + eax_7 * 4);
                        tmpb = (unsigned char) eax_8 & 0x1;
                        local13 = ecx_30;
                        local14 = ebx_41;
                        local15 = esp_18;
                        local16 = ebp_24;
                        local17 = esi_28;
                        local18 = edi_31;
                        if ( ~(((unsigned char) eax_8 & 0x1) != 0 || eax_8 >= *(&caml_globals + 0xc57c) || eax_8 <= *(&caml_globals + 0xc578))) {
                            *(unsigned int*)(esp_18 + 4) = edi_31 + eax_7 * 4;
                            *(unsigned int*)esp_18 = eax_8;
                            bl = caml_oldify_one(*esp_18, *(esp_18 + 4), (unsigned char) edi_31 + eax_7 * 4, eax_8, ecx_30, edi_31 + eax_7 * 4); /* Warning: also results in ecx_19, ebx_17, esp_7, ebp_7, esi_17, edi_12 */
                            local13 = ecx_19;
                            local14 = ebx_17;
                            local15 = esp_7;
                            local16 = ebp_7;
                            local17 = esi_17;
                            local18 = edi_12;
                        }
                        ecx_29 = local13;
                        ebx_40 = local14;
                        esp_15 = local15;
                        ebp_23 = local16;
                        esi_27 = local17;
                        edi_30 = local18;
                        ebx_18 = ebx_40 + 1;
                        eax = ebx_40 + 1;
                        edx = *esi_27;
                        local6 = bl;
                        local7 = ecx_29;
                        local8 = ebx_18;
                        local9 = esp_15;
                        local10 = ebp_23;
                        local11 = esi_27;
                        local12 = edi_30;
                        local19 = bl;
                        local20 = ebx_18;
                        local21 = esp_15;
                        local22 = ebp_23;
                        local23 = edi_30;
                    } while (ebx_40 + 1 < (unsigned int)((unsigned int)edx >> 10));
                }
                bl = local19;
                ebx_39 = local20;
                esp_21 = local21;
                ebp_22 = local22;
                edi_29 = local23;
                *(__size32*)(ebp_22 - 28)++;
                eax = *(&caml_globals + 0x9410);
                local24 = bl;
                local26 = esp_21;
                local27 = ebp_22;
                local29 = bl;
                local29 = bl;
                local30 = ebx_39;
                local30 = ebx_39;
                local31 = esp_21;
                local31 = esp_21;
                local32 = ebp_22;
                local32 = ebp_22;
                local33 = edi_29;
                if (eax < *(ebp_22 - 28)) {
                    break;
                }
                ecx_20 = *(ebp_22 - 28);
                edi_13 = caml_globals[ecx_20];
                local25 = ecx_20;
                local28 = edi_13;
                local33 = edi_13;
            } while (caml_globals[ecx_20] == 0);
        }
    }
    param1 = local29;
    eax = *(&caml_globals + 0x9410);
    ebx_38 = local30;
    esp_27 = local31;
    ebp_21 = local32;
    edi_28 = local33;
    *(unsigned int*)(&caml_globals + 0x941c) = eax;
    ecx_5 = *(&caml_globals + 0x9418);
    *(int*)(ebp_21 - 28) = ecx_5;
    local34 = param1;
    local35 = ecx_5;
    local36 = ebx_38;
    local37 = esp_27;
    local38 = ebp_21;
    local56 = param1;
    local57 = ebx_38;
    local58 = esp_27;
    local59 = ebp_21;
    local60 = edi_28;
    if (ecx_5 != 0) {
        do {
            bl = local34;
            ecx_28 = local35;
            ebx_37 = local36;
            esp_37 = local37;
            ebp_20 = local38;
            eax = *(ebp_20 - 28);
            edi_4 = *eax;
            esi_1 = edi_4 - 4;
            eax = *(edi_4 - 4);
            local39 = ecx_28;
            local41 = esp_37;
            local42 = ebp_20;
            local43 = esi_1;
            local44 = edi_4;
            local51 = ecx_28;
            local52 = ebx_37;
            local53 = esp_37;
            local54 = ebp_20;
            local55 = edi_4;
            if ((unsigned int)eax >> 10 != 0) {
                eax = 0;
                ebx_1 = 0;
                local40 = ebx_1;
                do {
                    eax_1 = eax;
                    ecx_27 = local39;
                    ebx_36 = local40;
                    esp_31 = local41;
                    ebp_19 = local42;
                    esi_26 = local43;
                    edi_27 = local44;
                    eax_2 = *(edi_27 + eax_1 * 4);
                    local45 = ecx_27;
                    local46 = ebx_36;
                    local47 = esp_31;
                    local48 = ebp_19;
                    local49 = esi_26;
                    local50 = edi_27;
                    if ( ~(((unsigned char) eax_2 & 0x1) != 0 || eax_2 >= *(&caml_globals + 0xc57c) || eax_2 <= *(&caml_globals + 0xc578))) {
                        *(unsigned int*)(esp_31 + 4) = edi_27 + eax_1 * 4;
                        *(unsigned int*)esp_31 = eax_2;
                        bl = caml_oldify_one(*esp_31, *(esp_31 + 4), (unsigned char) edi_27 + eax_1 * 4, eax_2, ecx_27, edi_27 + eax_1 * 4); /* Warning: also results in ecx_8, ebx_2, esp_4, ebp_4, esi_2, edi_7 */
                        local45 = ecx_8;
                        local46 = ebx_2;
                        local47 = esp_4;
                        local48 = ebp_4;
                        local49 = esi_2;
                        local50 = edi_7;
                    }
                    ecx_26 = local45;
                    ebx_35 = local46;
                    esp_28 = local47;
                    ebp_18 = local48;
                    esi_25 = local49;
                    edi_26 = local50;
                    tmpb = (unsigned char) eax_2 & 0x1;
                    ebx_3 = ebx_35 + 1;
                    eax = ebx_35 + 1;
                    edx = *esi_25;
                    local39 = ecx_26;
                    local40 = ebx_3;
                    local41 = esp_28;
                    local42 = ebp_18;
                    local43 = esi_25;
                    local44 = edi_26;
                    local51 = ecx_26;
                    local52 = ebx_3;
                    local53 = esp_28;
                    local54 = ebp_18;
                    local55 = edi_26;
                } while (ebx_35 + 1 < (unsigned int)((unsigned int)edx >> 10));
            }
            ecx_25 = local51;
            ebx_34 = local52;
            esp_34 = local53;
            ebp_17 = local54;
            edi_25 = local55;
            edx = *(ebp_17 - 28);
            edx = *(edx + 4);
            *(int*)(ebp_17 - 28) = edx;
            local34 = bl;
            local35 = ecx_25;
            local36 = ebx_34;
            local37 = esp_34;
            local38 = ebp_17;
            local56 = bl;
            local57 = ebx_34;
            local58 = esp_34;
            local59 = ebp_17;
            local60 = edi_25;
        } while (edx != 0);
    }
    bl = local56;
    ebx_33 = local57;
    esp_40 = local58;
    ebp_16 = local59;
    edi_24 = local60;
    local61 = ebx_33;
    local62 = esp_40;
    local63 = ebp_16;
    local64 = edi_24;
    if (*0x807b9fc == 0) {
        ebx_6 = caml_init_frame_descriptors(); /* Warning: also results in esp_5, ebp_5, edi_8 */
        local61 = ebx_6;
        local62 = esp_5;
        local63 = ebp_5;
        local64 = edi_8;
    }
    ebx_32 = local61;
    esp_43 = local62;
    ebp_15 = local63;
    edi_23 = local64;
    ecx_9 = *(&caml_globals + 0x940c);
    *(__size32*)(ebp_15 - 28) = ecx_9;
    edx = *(&caml_globals + 0x9138);
    dl_2 = (unsigned char) edx;
    eax = *(&caml_globals + 0x10014);
    al = (unsigned char) eax;
    *(unsigned int*)(ebp_15 - 32) = eax;
    local65 = esp_43;
    local66 = ebp_15;
    local67 = edi_23;
    local87 = dl_2;
    local88 = ecx_9;
    local89 = ebx_32;
    local90 = esp_43;
    local91 = ebp_15;
    if (ecx_9 != 0) {
        do {
bb0x80621a7:
            esp_51 = local65;
            ebp_14 = local66;
            edi_22 = local67;
            esi_3 = *(&caml_globals + 0x1000c);
            eax = (unsigned int)edx >> 3 & esi_3;
            ecx_12 = *(&caml_globals + 0x9408);
            ebx_7 = *(ecx_12 + ((unsigned int)edx >> 3 & esi_3) * 4);
            local65 = esp_51;
            local66 = ebp_14;
            local67 = edi_22;
            local68 = eax;
            local69 = ebx_7;
            local70 = ecx_12;
            local72 = esp_51;
            local73 = ebp_14;
            local84 = esp_51;
            local85 = ebp_14;
            local86 = edi_22;
            local88 = ecx_12;
            local90 = esp_51;
            local91 = ebp_14;
            if (*ebx_7 != edx) {
                do {
                    eax_4 = local68;
                    eax_5 = eax_4 + 1 & esi_3;
                    ebx_10 = *(ecx_12 + (eax_4 + 1 & esi_3) * 4);
                    local68 = eax_5;
                    local69 = ebx_10;
                } while (*ebx_10 != edx);
            }
            ebx_31 = local69;
            local71 = ebx_31;
            local83 = ebx_31;
            local89 = ebx_31;
            if (*(ebx_31 + 4) != -1) {
                esi_6 = *(unsigned short*)(ebx_31 + 6);
                local74 = esi_6;
                if ((int)esi_6 > 0) {
                    edi_9 = ebx_31 + 8;
                    local75 = edi_9;
                    for(;;) {
                        ecx_35 = local70;
                        ebx_58 = local71;
                        esp_47 = local72;
                        ebp_30 = local73;
                        esi_31 = local74;
                        edi_49 = local75;
                        edx = *(unsigned short*)edi_49;
                        local76 = ecx_35;
                        local78 = ebx_58;
                        local79 = esp_47;
                        local80 = ebp_30;
                        local81 = esi_31;
                        local82 = edi_49;
                        if (((unsigned char) edx & 0x1) == 0) {
                            edx += *(ebp_30 - 28);
                        }
                        else {
                            ecx_15 = *(ebp_30 - 32);
                            edx = ecx_15 + ((int)edx >> 1) * 4;
                            local76 = ecx_15;
                        }
                        ecx_34 = local76;
                        eax = *edx;
                        local77 = ecx_34;
                        if ( ~(((unsigned char) eax & 0x1) != 0 || eax >= *(&caml_globals + 0xc57c) || eax <= *(&caml_globals + 0xc578))) {
                            *(__size32*)(esp_47 + 4) = edx;
                            *(unsigned int*)esp_47 = eax;
                            bl = caml_oldify_one(*esp_47, *(esp_47 + 4), dl_1, eax, ecx_34, edx); /* Warning: also results in ecx_18, ebx_16, esp_6, ebp_6, esi_13, edi_10 */
                            local77 = ecx_18;
                            local78 = ebx_16;
                            local79 = esp_6;
                            local80 = ebp_6;
                            local81 = esi_13;
                            local82 = edi_10;
                        }
                        ecx_36 = local77;
                        ebx_59 = local78;
                        esp_44 = local79;
                        ebp_29 = local80;
                        esi_14 = local81;
                        edi_50 = local82;
                        tmpb = (unsigned char) eax & 0x1;
                        esi_15 = esi_14 - 1;
                        local70 = ecx_36;
                        local71 = ebx_59;
                        local72 = esp_44;
                        local73 = ebp_29;
                        local74 = esi_15;
                        local83 = ebx_59;
                        local84 = esp_44;
                        local85 = ebp_29;
                        local86 = edi_50;
                        if ((int)esi_14 <= 1) {
                        }
                        edi_11 = edi_50 + 2;
                        local75 = edi_11;
                    }
                }
                ebx_57 = local83;
                esp_50 = local84;
                ebp_27 = local85;
                edi_33 = local86;
                eax = *(unsigned short*)(ebx_57 + 4);
                *(__size32*)(ebp_27 - 28) += eax & 0xfffc;
                eax = *(ebp_27 - 28);
                edx = *(eax - 4);
                local65 = esp_50;
                local66 = ebp_27;
                local67 = edi_33;
                goto bb0x80621a7;
            }
            eax = *(ebp_14 - 28);
            edx = *(eax + 8);
            *(__size32*)(ebp_14 - 28) = edx;
            edx = *(eax + 12);
            dl = (unsigned char) edx;
            eax = *(eax + 16);
            al = (unsigned char) eax;
            *(unsigned int*)(ebp_14 - 32) = eax;
            local87 = dl;
        } while (*(ebp_14 - 28) != 0);
    }
    dl = local87;
    ecx_24 = local88;
    ebx_30 = local89;
    esp_54 = local90;
    ebp_13 = local91;
    esi_10 = *(&caml_globals + 0x9400);
    *(__size32*)(ebp_13 - 28) = 0;
    local122 = ecx_24;
    local123 = ebx_30;
    local124 = esp_54;
    local125 = ebp_13;
    local126 = esi_10;
    local127 = esp_54;
    if (esi_10 != 0) {
        do {
            ecx_31 = local122;
            ebx_42 = local123;
            esp_72 = local124;
            ebp_25 = local125;
            esi_29 = local126;
            edi_16 = 0;
            local112 = ecx_31;
            local113 = esp_72;
            local114 = ebp_25;
            local115 = esi_29;
            local116 = edi_16;
            local117 = ecx_31;
            local118 = ebx_42;
            local119 = esp_72;
            local120 = ebp_25;
            local121 = esi_29;
            if (*(esi_29 + 4) > 0) {
                do {
                    ecx_32 = local112;
                    esp_66 = local113;
                    ebp_26 = local114;
                    esi_30 = local115;
                    edi_32 = local116;
                    ebx_24 = *(ebp_26 - 28);
                    local92 = ecx_32;
                    local93 = ebx_24;
                    local94 = esp_66;
                    local95 = ebp_26;
                    local96 = esi_30;
                    local97 = edi_32;
                    local105 = eax;
                    local106 = ecx_32;
                    local107 = ebx_24;
                    local108 = esp_66;
                    local109 = ebp_26;
                    local110 = esi_30;
                    local111 = edi_32;
                    if (*(esi_30 + 8) > 0) {
                        do {
                            ecx_23 = local92;
                            ebx_29 = local93;
                            esp_60 = local94;
                            ebp_12 = local95;
                            esi_24 = local96;
                            edi_21 = local97;
                            edx = ebx_29 * 4 + *(esi_24 + edi_21 * 4 + 12);
                            dl = (unsigned char) edx;
                            eax_11 = *edx;
                            local98 = eax_11;
                            local99 = ecx_23;
                            local100 = ebx_29;
                            local101 = esp_60;
                            local102 = ebp_12;
                            local103 = esi_24;
                            local104 = edi_21;
                            if ( ~(((unsigned char) eax_11 & 0x1) != 0 || eax_11 >= *(&caml_globals + 0xc57c) || eax_11 <= *(&caml_globals + 0xc578))) {
                                *(__size32*)(esp_60 + 4) = edx;
                                *(unsigned int*)esp_60 = eax_11;
                                eax = caml_oldify_one(*esp_60, *(esp_60 + 4), (unsigned char) edx, eax_11, ecx_23, edx); /* Warning: also results in dl, bl, ecx, edx, ebx_27, esp_14, ebp, esi, edi_18 */
                                local98 = eax;
                                local99 = ecx;
                                local100 = ebx_27;
                                local101 = esp_14;
                                local102 = ebp;
                                local103 = esi;
                                local104 = edi_18;
                            }
                            al = (unsigned char) eax_11;
                            eax_10 = local98;
                            ecx_4 = local99;
                            ebx_28 = local100;
                            esp_57 = local101;
                            ebp_10 = local102;
                            esi_23 = local103;
                            edi_20 = local104;
                            tmpb = (unsigned char) eax_11 & 0x1;
                            ebx_43 = ebx_28 + 1;
                            local92 = ecx_4;
                            local93 = ebx_43;
                            local94 = esp_57;
                            local95 = ebp_10;
                            local96 = esi_23;
                            local97 = edi_20;
                            local105 = eax_10;
                            local106 = ecx_4;
                            local107 = ebx_43;
                            local108 = esp_57;
                            local109 = ebp_10;
                            local110 = esi_23;
                            local111 = edi_20;
                        } while (*(esi_23 + 8) > ebx_28 + 1);
                    }
                    eax = local105;
                    ecx_3 = local106;
                    ebx_22 = local107;
                    esp_63 = local108;
                    ebp_9 = local109;
                    esi_22 = local110;
                    edi_19 = local111;
                    edi_35 = edi_19 + 1;
                    local112 = ecx_3;
                    local113 = esp_63;
                    local114 = ebp_9;
                    local115 = esi_22;
                    local116 = edi_35;
                    local117 = ecx_3;
                    local118 = ebx_22;
                    local119 = esp_63;
                    local120 = ebp_9;
                    local121 = esi_22;
                } while (*(esi_22 + 4) <= edi_19 + 1);
            }
            ecx_2 = local117;
            ebx_21 = local118;
            esp_69 = local119;
            ebp_8 = local120;
            esi_21 = local121;
            esi_19 = *esi_21;
            local122 = ecx_2;
            local123 = ebx_21;
            local124 = esp_69;
            local125 = ebp_8;
            local126 = esi_19;
            local127 = esp_69;
        } while (esi_19 == 0);
    }
    esp_75 = local127;
    *(esp_78 - 32) = *0x807ba10;
    *(__size32*)esp_75 = 0x80642fc;
    cl = caml_scan_global_young_roots(*esp_75, ecx_1); /* Warning: also results in ecx, edx, esp_8 */
    *(__size32*)esp_8 = 0x80642fc;
    edx = caml_final_do_young_roots(*esp_8, edx); /* Warning: also results in ebx_23, ebp_11, esi_18, edi_17 */
    eax = *(&caml_globals + 0x9404);
    if (eax != 0) {
        *(__size32*)esp_11 = 0x80642fc;
        (*eax)((unsigned char) eax, dl, bl, eax, ecx, edx, ebx_23, ebp_11, esi_18, edi_17, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), param4, param6, param5, param3, *(esp_78 - 32), cl);
    }
    return;
}

/** address: 0x080642fc */
__size32 caml_oldify_one(__size32 param1, __size32 param2, char param3, unsigned int param4, unsigned int param5, unsigned int param6)
{
    __size8 al; 		// r8
    char bl; 		// r11
    __size8 cl; 		// r9
    char dl; 		// r10
    unsigned int eax; 		// r24
    unsigned int eax_1; 		// r24{29}
    int eax_10; 		// r24{94}
    int eax_13; 		// r24{96}
    int eax_16; 		// r24{97}
    unsigned int eax_19; 		// r24{99}
    union { __size32; __size32 *; } eax_22; 		// r24{101}
    int eax_23; 		// r24{106}
    union { int; unsigned char *; } eax_27; 		// r24{98}
    int eax_4; 		// r24{58}
    unsigned int eax_7; 		// r24{88}
    int ebp; 		// r29
    int ebp_1; 		// r29{58}
    union { __size32; __size32 *; } ebx; 		// r27
    union { __size32; __size32 *; } ebx_1; 		// r27{11}
    __size32 *ebx_2; 		// r27{19}
    int ebx_3; 		// r27{58}
    union { unsigned int; __size32 *; } ebx_6; 		// r27{50}
    union { int *; unsigned int; } ebx_7; 		// r27{85}
    unsigned int ecx; 		// r25
    unsigned int ecx_1; 		// r25{0}
    unsigned int ecx_2; 		// r25{39}
    unsigned int ecx_3; 		// r25{17}
    unsigned int ecx_4; 		// r25{93}
    union { __size32 *; unsigned int; } ecx_7; 		// r25{108}
    union { __size32; __size32 *; } edi; 		// r31
    union { __size32; __size32 *; } edi_1; 		// r31{13}
    __size32 *edi_2; 		// r31{21}
    union { unsigned int; __size32 *; } edi_6; 		// r31{49}
    unsigned int edx; 		// r26
    unsigned int edx_1; 		// r26{23}
    unsigned int edx_10; 		// r26{66}
    unsigned int edx_4; 		// r26{37}
    __size32 edx_7; 		// r26{44}
    unsigned int edx_9; 		// r26{63}
    int esi; 		// r30
    int esi_1; 		// r30{58}
    unsigned int esp; 		// r28
    int esp_1; 		// r28{10}
    __size32 esp_11; 		// r28{104}
    unsigned int esp_16; 		// r28{1}
    union { int; union { void *; unsigned int; } *; } esp_4; 		// r28{20}
    __size32 esp_5; 		// r28{33}
    __size32 esp_8; 		// r28{56}
    unsigned int local10; 		// param6{18}
    __size32 *local11; 		// ebx_2{19}
    union { union { void *; unsigned int; } *; int; } local12; 		// esp_4{20}
    __size32 *local13; 		// edi_2{21}
    unsigned int local14; 		// edx_9{63}
    unsigned int local15; 		// ecx{69}
    union { __size32 *; __size32; } local16; 		// ebx{70}
    union { unsigned char *; int; } local17; 		// eax_27{98}
    union { __size32 *; __size32; } local18; 		// eax_22{101}
    char local19; 		// dl{114}
    unsigned int local20; 		// eax{115}
    unsigned int local21; 		// ecx{116}
    __size32 local22; 		// edx{117}
    union { __size32; int *; } local23; 		// esp{118}
    char local7; 		// param3{14}
    unsigned int local8; 		// param4{16}
    unsigned int local9; 		// ecx_3{17}

    esp_1 = esp_16 - 60;
    ebx_1 = param1;
    bl = (unsigned char) param1;
    edi_1 = param2;
    local7 = param3;
    local8 = param4;
    local9 = param5;
    local10 = param6;
    local11 = ebx_1;
    local12 = esp_1;
    local13 = edi_1;
bb0x806430b:
    param3 = local7;
    param4 = local8;
    ecx_3 = local9;
    param6 = local10;
    ebx_2 = local11;
    esp_4 = local12;
    edi_2 = local13;
    local9 = ecx_3;
    local12 = esp_4;
    local12 = esp_4;
    local13 = edi_2;
    local13 = edi_2;
    local15 = ecx_3;
    local16 = ebx_2;
    local19 = param3;
    local20 = param4;
    local21 = ecx_3;
    local21 = ecx_3;
    local22 = param6;
    local23 = esp_4;
    local23 = esp_4;
    while ( ~((bl & 0x1) != 0 || ebx_2 >= *(&caml_globals + 0xc57c) || ebx_2 <= *(&caml_globals + 0xc578))) {
        edx_1 = *(ebx_2 - 4);
        dl = (unsigned char) edx_1;
        local7 = dl;
        local10 = edx_1;
        local19 = dl;
        local22 = edx_1;
        if (edx_1 != 0) {
            eax_1 = ((unsigned char) edx_1);
            local8 = eax_1;
            local8 = eax_1;
            local20 = eax_1;
            local20 = eax_1;
            if (((unsigned char) edx_1) > 248) {
                if (((unsigned char) edx_1) <= 250) {
                    if (((unsigned char) edx_1) != 249) {
                        ebx_7 = *ebx_2;
                        bl = (unsigned char) ebx_7;
                        local11 = ebx_7;
                        local11 = ebx_7;
                        local11 = ebx_7;
                        if (((unsigned char) ebx_7 & 0x1) != 0) {
                            continue;
                        }
                        eax_7 = ebx_7 >> 12 & 0x7ff;
                        edx = caml_globals[(ebx_7 >> 23)];
                        dl = (unsigned char) caml_globals[(ebx_7 >> 23)];
                        tmpb = *(caml_globals[(ebx_7 >> 23)] + (ebx_7 >> 12 & 0x7ff)) & 0x7;
                        local7 = dl;
                        local7 = dl;
                        local10 = edx;
                        local10 = edx;
                        local18 = eax_7;
                        if (tmpb == 0) {
bb0x8064459:
                            eax_22 = local18;
                            *(__size32*)(esp_4 + 4) = 250;
                            *(__size32*)esp_4 = 1;
                            esp_11 = esp_4 - 4;
                            caml_alloc_shr(*(esp_4 - 52), *esp_4, al, cl, (unsigned char) caml_globals[(ebx_7 >> 23)], ecx_1, ebx_7, esp_16 - 4, ebx_2, edi_2);
                            local8 = eax_22;
                            local12 = esp_11;
                            *(__size32*)edi_7 = eax_23;
                            ecx_7 = *(ebp - 28);
                            *(__size32*)ecx_7 = 0;
                            *(__size32*)esi = eax_23;
                            edi = eax_23;
                            local9 = ecx_7;
                            local13 = edi;
                        }
                        else {
                            ecx_4 = ebx_7 - 4;
                            eax_10 = ebx_7 - 4;
                            local9 = ecx_4;
                            local17 = eax_10;
                            if (*(ebx_7 - 4) == 0) {
                                eax_13 = *ebx_7;
                                eax_16 = eax_13 - 4;
                                local17 = eax_16;
                            }
                            eax_27 = local17;
                            eax_19 = *(unsigned char*)eax_27;
                            local8 = eax_19;
                            local18 = eax_19;
                            if ( ~(eax_19 == 250 || eax_19 == 246) && eax_19 != 253) {
                                continue;
                            }
                            goto bb0x8064459;
                        }
                    }
                    else {
                        *(union { __size32 *; __size32; }*)(esp_4 + 4) = edi_2;
                        esi = ebx_2 - (edx_1 >> 10) * 4;
                        *(union { void *; __size32; }*)esp_4 = ebx_2 - (edx_1 >> 10) * 4;
                        eax = caml_oldify_one(*esp_4, *(esp_4 + 4), (unsigned char) edx_1 >> 10, ((unsigned char) edx_1), ecx_3, edx_1 >> 10); /* Warning: also results in dl, ecx, edx, ebx, esp, edi */
                        local19 = dl;
                        local20 = eax;
                        local21 = ecx;
                        local22 = edx;
                        local23 = esp;
                        *(__size32*)edi += ebx;
                    }
                }
                else {
                    *(unsigned int*)(esp_4 + 4) = ((unsigned char) edx_1);
                    *(int*)esp_4 = edx_1 >> 10;
                    esp_8 = esp_4 - 4;
                    caml_alloc_shr(*(esp_4 - 52), *esp_4, al, cl, (unsigned char) edx_1 >> 10, ecx_3, ebx_2, esp_16 - 4, ebx_2, edi_2);
                    local23 = esp_8;
                    if (*(ebp_1 - 32) != 0) {
                        edx = 0;
                        *(__size32*)(ebp_1 - 36) = ebx_3;
                        ebx = *(ebp_1 - 32);
                        local14 = edx;
                        do {
                            edx_9 = local14;
                            ecx = *(esi_1 + edx_9 * 4);
                            *(unsigned int*)(eax_4 + edx_9 * 4) = ecx;
                            edx_10 = edx_9 + 1;
                            local14 = edx_10;
                            local15 = ecx;
                        } while (ebx > edx_9 + 1);
                        ebx = *(ebp_1 - 36);
                        local16 = ebx;
                    }
                    ecx = local15;
                    ebx = local16;
                    edx = *(ebp_1 - 28);
                    dl = (unsigned char) edx;
                    *(__size32*)edx = 0;
                    *(__size32*)ebx = eax_4;
                    *(__size32*)edi_3 = eax_4;
                    local19 = dl;
                    local21 = ecx;
                    local22 = edx;
                }
            }
            else {
                *(unsigned int*)(esp_4 + 4) = ((unsigned char) edx_1);
                *(int*)esp_4 = edx_1 >> 10;
                esp_5 = esp_4 - 4;
                caml_alloc_shr(*(esp_4 - 52), *esp_4, al, cl, (unsigned char) edx_1, ecx_3, ebx_2, esp_16 - 4, edx_1 >> 10, edi_2);
                local12 = esp_5;
                local23 = esp_5;
                *(unsigned int*)edi_2 = ((unsigned char) edx_1);
                edx_4 = *ebx_2;
                dl = (unsigned char) edx_4;
                ecx_2 = ebx_2 - 4;
                *(__size32*)(ebx_2 - 4) = 0;
                *(unsigned int*)ebx_2 = ((unsigned char) edx_1);
                local7 = dl;
                local9 = ecx_2;
                local10 = edx_4;
                local21 = ecx_2;
                if ((unsigned int)(edx_1 >> 10) <= 1) {
                    edi_6 = ((unsigned char) edx_1);
                    ebx_6 = edx_4;
                    bl = (unsigned char) edx_4;
                    local11 = ebx_6;
                    local13 = edi_6;
                    goto bb0x806430b;
                }
                else {
                    *(unsigned int*)((unsigned char) edx_1) = edx_4;
                    edx_7 = *(&caml_globals + 0xc5c4);
                    dl = (unsigned char) edx_7;
                    *(__size32*)(((unsigned char) edx_1) + 4) = edx_7;
                    *(union { unsigned int *; __size32; }*)0x807ebb8 = ebx_2;
                    local19 = dl;
                    local22 = edx_7;
                }
            }
        }
        else {
            eax = *ebx_2;
            *(unsigned int*)edi_2 = eax;
            local20 = eax;
        }
        dl = local19;
        eax = local20;
        ecx = local21;
        edx = local22;
        esp = local23;
        ebx = *(esp + 44);
        esi = *(esp + 48);
        edi = *(esp + 52);
        ebp = *(esp + 56);
        return eax; /* WARNING: Also returning: dl := dl, bl := (unsigned char) ebx, ecx := ecx, edx := edx, ebx := ebx, ebp := ebp, esi := esi, edi := edi */
bb0x806430b:
        param3 = local7;
        param4 = local8;
        ecx_3 = local9;
        param6 = local10;
        ebx_2 = local11;
        esp_4 = local12;
        edi_2 = local13;
        local9 = ecx_3;
        local12 = esp_4;
        local12 = esp_4;
        local13 = edi_2;
        local13 = edi_2;
        local15 = ecx_3;
        local16 = ebx_2;
        local19 = param3;
        local20 = param4;
        local21 = ecx_3;
        local21 = ecx_3;
        local22 = param6;
        local23 = esp_4;
        local23 = esp_4;
    }
    *(union { __size32 *; __size32; }*)edi_2 = ebx_2;
    dl = local19;
    eax = local20;
    ecx = local21;
    edx = local22;
    esp = local23;
    ebx = *(esp + 44);
    esi = *(esp + 48);
    edi = *(esp + 52);
    ebp = *(esp + 56);
    return eax; /* WARNING: Also returning: dl := dl, bl := (unsigned char) ebx, ecx := ecx, edx := edx, ebx := ebx, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x0806448b */
void caml_oldify_mopup()
{
    char dl; 		// r10
    __size32 eax; 		// r24
    int ebp; 		// r29
    union { __size32; unsigned int *; } ebx; 		// r27
    __size32 ebx_1; 		// r27{20}
    __size32 ecx; 		// r25
    union { __size32 *; int; } edi; 		// r31
    unsigned int edx; 		// r26
    __size32 esi; 		// r30
    int esp; 		// r28
    unsigned int *esp_1; 		// r28
    unsigned int *esp_2; 		// r28{33}
    unsigned int *esp_3; 		// r28{51}
    unsigned int *esp_4; 		// r28{63}
    unsigned int *local5; 		// esp_1{21}
    unsigned int *local6; 		// esp_2{33}
    unsigned int *local7; 		// esp_3{51}
    unsigned int *local8; 		// esp_4{63}

    ebp = esp - 4;
    esp -= 60;
    local8 = esp;
    do {
        esp_4 = local8;
        edi = *0x807ebb8;
        local5 = esp_4;
        if (edi != 0) {
            ebx = *edi;
            esi = ebx + 4;
            eax = *(ebx + 4);
            *(__size32*)(&caml_globals + 0xc5c4) = eax;
            eax = *ebx;
            if ( ~(((unsigned char) eax & 0x1) != 0 || eax >= *(&caml_globals + 0xc57c) || eax <= *(&caml_globals + 0xc578))) {
                *(__size32*)(esp_4 + 4) = ebx;
                *(unsigned int*)esp_4 = eax;
                dl = caml_oldify_one(*esp_4, *(esp_4 + 4), dl, eax, ecx, edx); /* Warning: also results in ecx, edx, ebx, esp, ebp, esi, edi */
                local5 = esp;
            }
            ebx_1 = ebx;
            esp_1 = local5;
            ebx = ebx_1 - 4;
            eax = *(ebx_1 - 4);
            local6 = esp_1;
            local8 = esp_1;
            if ((unsigned int)((unsigned int)eax >> 10) <= 1) {
                continue;
            }
            *(__size32*)(ebp - 28) = 1;
            break;
        }
        return;
bb0x8064502:
        esp_3 = local7;
        *(__size32*)(ebp - 28)++;
        esi += 4;
        eax = *ebx;
        local6 = esp_3;
        local8 = esp_3;
    } while ((unsigned int)((unsigned int)eax >> 10) > *(ebp - 28));
    esp_2 = local6;
    edx = *(ebp - 28);
    eax = *(edi + edx * 4);
    local7 = esp_2;
    if (((unsigned char) eax & 0x1) != 0 || eax >= *(&caml_globals + 0xc57c) || eax <= *(&caml_globals + 0xc578)) {
        *(unsigned int*)esi = eax;
        goto bb0x8064502;
    }
    else {
        *(__size32*)(esp_2 + 4) = esi;
        *(unsigned int*)esp_2 = eax;
        dl = caml_oldify_one(*esp_2, *(esp_2 + 4), dl, eax, ecx, edx); /* Warning: also results in ecx, edx, ebx, esp, ebp, esi, edi */
        local7 = esp;
        goto bb0x8064502;
    }
    goto bb0x8064502;
}

/** address: 0x0806f3a5 */
void caml_final_empty_young()
{
    __size32 eax; 		// r24

    eax = *(global_0x0807db9c + 0x4568);
    *(__size32*)(global_0x0807db9c + 0x4574) = eax;
    return;
}

/** address: 0x080638c7 */
__size32 start_cycle()
{
    __size8 al; 		// r8
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    __size32 ebp; 		// r29
    unsigned int ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    unsigned int esi; 		// r30

    ecx = caml_gc_message(1, 0x80710ab);
    ebp = caml_darken_all_roots(al, cl, dl, ecx, ebx, esi, edi);
    *(__size32*)(&caml_globals + 0x10148) = 0;
    *(__size32*)(&caml_globals + 0x10134) = 10;
    *(__size32*)(&caml_globals + 0xc568) = 0;
    ebp = *ebp;
    return ebp;
}

/** address: 0x08070398 */
__size32 caml_callback_exn()
{
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 edi; 		// r31
    __size32 esi; 		// r30
    __size32 esp; 		// r28
    __size32 local0; 		// m[esp - 4]

    *(__size32*)(%esp - 4) = %ebx;
    *(__size32*)(%esp - 4) = %esi;
    *(__size32*)(%esp - 4) = %edi;
    *(__size32*)(%esp - 4) = %ebp;
    caml_exception_pointer = esp - 20;
    (*esi)(local0, caml_last_return_address, caml_bottom_of_stack, 0x807030e, caml_exception_pointer, pc);
    caml_exception_pointer = *esp;
    caml_bottom_of_stack = *(esp + 8);
    caml_last_return_address = *(esp + 12);
    *(__size32*)(&named_value_table + 1352) = *(esp + 16);
    ebp = *(esp + 20);
    edi = *(esp + 24);
    esi = *(esp + 28);
    ebx = *(esp + 32);
    return ebx; /* WARNING: Also returning: ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x0806e009 */
void caml_fatal_uncaught_exception(__size32 param1, unsigned char param2)
{
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    int ecx; 		// r25
    __size32 edi; 		// r31
    __size32 esi; 		// r30
    int esp; 		// r28

    caml_format_exception(param1);
    ebx = param1;
    esi = *(&named_value_table + 100);
    edi = *(&named_value_table + 104);
    *(__size32*)(&named_value_table + 100) = 0;
    eax = caml_named_value(0x8071b47); /* Warning: also results in esp */
    if (eax != 0) {
        ebx = caml_callback_exn(); /* Warning: also results in esp, esi, edi */
    }
    *(__size32*)(&named_value_table + 100) = esi;
    *(__size32*)(&named_value_table + 104) = edi;
    *(__size32*)(esp + 8) = ebx;
    *(__size32*)(esp + 4) = 0x8071b5d;
    *(__size32*)esp = stderr;
    fprintf(*esp, *(esp + 4));
    *(__size32*)esp = ebx;
    ecx = free(*esp);
    if (*0x8082124 != 0) {
        caml_print_exception_backtrace(*(esp - 96), *(esp - 92), *(esp - 88), *(esp - 84), *(esp - 80), *(esp - 76), *(esp - 72), *(esp - 56), *(esp - 48), *(esp - 44), *(esp - 40), *(esp - 36), param2, ecx);
    }
    *(__size32*)esp = 2;
    exit(*esp);
    return;
}

/** address: 0x08070350 */
__size32 caml_raise_exception(__size8 param2, __size8 param3, __size8 param3)
{
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    __size32 esp; 		// r28
    int local1; 		// m[esp - 8]
    int local2; 		// m[esp - 12]
    unsigned int local5; 		// m[esp - 68]
    __size32 local6; 		// m[esp + 4]

    tmp1 = *(&caml_globals + 0xfb30) & 0x1;
    if (tmp1 != 0) {
        ecx = caml_stash_backtrace(local5, local6, local2, local1, param2, param3, param3); /* Warning: also results in edx, ebx, ebp */
        esp = *0x807b9e0;
        *(__size32*)(&caml_globals + 0x93ec) = *esp;
    }
    else {
        esp = *0x807b9e0;
        *(__size32*)(&caml_globals + 0x93ec) = *esp;
    }
    return ecx; /* WARNING: Also returning: edx := edx, ebx := ebx, ebp := ebp */
}

/** address: 0x080651ca */
__size32 caml_alloc_string(__size32 param1, __size8 param2)
{
    __size8 cl; 		// r9
    char dl; 		// r10
    unsigned int eax; 		// r24
    __size32 ebp; 		// r29
    unsigned int ebx; 		// r27
    unsigned int ecx; 		// r25
    int edi; 		// r31
    unsigned int edx; 		// r26
    __size32 esp_4; 		// r28{1}

    if ((unsigned int)(param1 + 4 >> 2) > 256) {
        caml_alloc_shr(param1, param1 + 4 >> 2, param2, cl, dl, ecx, param1 + 4 >> 2, esp_4 - 4, param1, edi);
        *(__size32*)esp_1 = eax;
        eax = caml_check_urgent_gc(); /* Warning: also results in ebx, ebp */
    }
    else {
        edx = (param1 + 4 >> 2) * 4 + 4;
        eax = *(&caml_globals + 0xc580) - edx;
        *(unsigned int*)(&caml_globals + 0xc580) = eax;
        if (eax < *(&caml_globals + 0xc584)) {
            *(unsigned int*)(&caml_globals + 0xc580) = eax + edx;
            caml_minor_collection();
            *(__size32*)(&caml_globals + 0xc580) += edi;
        }
        ebx = param1 + 4 >> 2;
        ebp = esp_4 - 4;
        eax = *0x807eb74;
        *(__size32*)eax = (ebx << 10) + 1020;
        eax = *(&caml_globals + 0xc580);
        eax += 4;
    }
    *(__size32*)(eax + ebx * 4 - 4) = 0;
    *(unsigned int*)(eax + ebx * 4 - 1) = ebx * 4 - (unsigned char) param1;
    ebx = *(ebp - 12);
    ebp = *ebp;
    return eax; /* WARNING: Also returning: ebx := ebx, ebp := ebp */
}

/** address: 0x08061dee */
__size8 caml_init_frame_descriptors()
{
    __size8 al; 		// r8
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    __size32 eax; 		// r24
    int eax_1; 		// r24{58}
    int eax_2; 		// r24{63}
    int eax_3; 		// r24{64}
    unsigned int eax_5; 		// r24{36}
    unsigned int eax_6; 		// r24{39}
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{27}
    __size32 ebx_2; 		// r27{28}
    union { __size32; __size32 *; } ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30
    __size32 esp; 		// r28
    int local0; 		// m[esp - 4]
    __size32 local5; 		// ebx_1{27}
    unsigned int local6; 		// eax_5{36}
    int local7; 		// eax_2{63}

    esp -= 60;
    if (*0x807ba18 == 0) {
        eax = *(&caml_globals + 996);
        if (eax != 0) {
            do {
                *(__size32*)esp = eax;
                ebx = caml_register_frametable(*esp); /* Warning: also results in esp, esi */
                eax = *(esi + (ebx + 1) * 4);
            } while (eax != 0);
        }
        *(__size32*)(&caml_globals + 0x9424) = 1;
    }
    eax = *(&caml_globals + 0x9420);
    if (eax == 0) {
bb0x8061f1d:
        *(__size32*)esp = 16;
        eax = caml_stat_alloc(*esp); /* Warning: also results in al, cl, dl, ecx, esp, ebp */
        *(unsigned int*)(&caml_globals + 0x9408) = eax;
        ebx = 4;
bb0x8061f33:
        eax = 0;
        local6 = eax;
        do {
            eax_5 = local6;
            edx = *(&caml_globals + 0x9408);
            *(__size32*)(edx + eax_5 * 4) = 0;
            eax_6 = eax_5 + 1;
            local6 = eax_6;
        } while (eax_5 + 1 < ebx);
    }
    else {
        edx = 0;
        do {
            ecx = *eax;
            edx += *ecx;
            eax = *(eax + 4);
        } while (eax != 0);
        if (edx + edx <= 4) {
            goto bb0x8061f1d;
        }
        else {
            ebx = 4;
            local5 = ebx;
            do {
                ebx_1 = local5;
                ebx_2 = ebx_1 + ebx_1;
                local5 = ebx_2;
            } while (ebx_1 + ebx_1 < edx + edx);
            *(unsigned int*)esp = (ebx_1 + ebx_1) * 4;
            eax = caml_stat_alloc(*esp); /* Warning: also results in al, cl, dl, ecx, ebx, esp, ebp */
            *(unsigned int*)(&caml_globals + 0x9408) = eax;
            if (ebx > 0) {
                goto bb0x8061f33;
            }
        }
    }
    *(int*)(&caml_globals + 0x1000c) = ebx - 1;
    eax = *(&caml_globals + 0x9420);
    *(__size32*)(ebp - 32) = eax;
    if (eax != 0) {
        do {
            eax = *(ebp - 32);
            esi = *eax;
            eax = *esi;
            *(int*)(ebp - 28) = eax;
            if (eax > 0) {
                ebx = *(&caml_globals + 0x1000c);
                eax_1 = *(esi + 4);
                eax = (unsigned int)eax_1 >> 3 & ebx;
                ecx = *(&caml_globals + 0x9408);
                edx = ecx + ((unsigned int)eax_1 >> 3 & ebx) * 4;
                local7 = eax;
                if (*edx != 0) {
                    do {
                        eax_2 = local7;
                        eax_3 = eax_2 + 1 & ebx;
                        edx = ecx + (eax_2 + 1 & ebx) * 4;
                        local7 = eax_3;
                    } while (*edx != 0);
                }
                *(__size32*)edx = esi + 4;
            }
            eax = *(ebp - 32);
            eax = *(eax + 4);
            *(__size32*)(ebp - 32) = eax;
        } while (eax != 0);
    }
    ebx = *(esp + 44);
    esi = *(esp + 48);
    edi = *(esp + 52);
    ebp = *(esp + 56);
    return al; /* WARNING: Also returning: cl := cl, dl := dl, ecx := ecx, ebx := ebx, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x080624af */
__size8 caml_scan_global_young_roots(__size32 param1, __size32 param2)
{
    __size8 cl; 		// r9
    __size32 eax; 		// r24
    unsigned int eax_1; 		// r24{31}
    unsigned int eax_2; 		// r24{33}
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    __size32 esp; 		// r28
    int local0; 		// m[esp - 4]
    __size32 local4; 		// param2{25}
    unsigned int local5; 		// eax_1{31}
    __size32 local6; 		// ecx{35}

    ebx = caml_iterate_global_roots(param1, 0x807ba20); /* Warning: also results in esp */
    local4 = param2;
    esp = caml_iterate_global_roots(ebx, 0x807ba80);
    ebx = *(&caml_globals + 0x9490);
    if (ebx != 0) {
        do {
            cl = caml_insert_global_root(0x807bae0, edx); /* Warning: also results in ecx, ebx, esp */
            local4 = ecx;
            ebx = *(ebx + 4);
        } while (ebx != 0);
        eax = *(&caml_globals + 0x9490);
        if (eax != 0) {
            for(;;) {
                ebx = *(eax + 4);
                *(unsigned int*)esp = eax;
                ecx = caml_stat_free(*esp);
                local4 = ecx;
                if (ebx == 0) {
                    break;
                }
                eax = ebx;
            }
        }
    }
    param2 = local4;
    edx = *(&caml_globals + 0x94d4);
    local6 = param2;
    if (edx >= 0) {
        eax = 0;
        ecx = 0x807ba84;
        local5 = eax;
        local6 = ecx;
        do {
            eax_1 = local5;
            caml_globals[eax_1] = 0;
            eax_2 = eax_1 + 1;
            local5 = eax_2;
        } while (eax_1 + 1 <= edx);
    }
    ecx = local6;
    *(__size32*)(&caml_globals + 0x94d4) = 0;
    return cl; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x0806f345 */
__size32 caml_final_do_young_roots(__size32 param1, __size32 param2)
{
    union { __size32; __size32 *; } eax; 		// r24
    union { __size32; __size32 *; } eax_1; 		// r24{16}
    __size32 eax_10; 		// r24{24}
    union { __size32; __size32 *; } eax_2; 		// r24{16}
    union { __size32; __size32 *; } eax_3; 		// r24{16}
    __size32 eax_4; 		// r24{18}
    __size32 eax_5; 		// r24{18}
    __size32 eax_6; 		// r24{22}
    __size32 eax_7; 		// r24{22}
    __size32 eax_8; 		// r24{22}
    __size32 eax_9; 		// r24{24}
    __size32 ebp; 		// r29
    unsigned int ebx; 		// r27
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    unsigned int esi; 		// r30
    unsigned int esi_1; 		// r30{27}
    unsigned int esi_2; 		// r30{27}
    unsigned int esi_3; 		// r30{27}
    unsigned int esi_4; 		// r30{28}
    unsigned int esi_5; 		// r30{28}
    __size32 esp; 		// r28
    __size32 esp_1; 		// r28{5}
    union { __size32; __size32 *; } esp_10; 		// r28{12}
    __size32 esp_11; 		// r28{1}
    __size32 esp_12; 		// r28{1}
    __size32 esp_2; 		// r28{5}
    __size32 esp_3; 		// r28{5}
    union { __size32; __size32 *; } esp_4; 		// r28{21}
    union { __size32; __size32 *; } esp_5; 		// r28{21}
    union { __size32; __size32 *; } esp_6; 		// r28{21}
    __size32 esp_7; 		// r28{27}
    union { __size32; __size32 *; } esp_8; 		// r28{12}
    union { __size32; __size32 *; } esp_9; 		// r28{12}
    __size32 local0; 		// m[esp + 4]
    __size32 local1; 		// m[esp - 4]
    int local10; 		// m[esp_11 - 4]{21}
    int local11; 		// m[esp_11 - 4]{21}
    __size32 local12; 		// m[esp_11 - 4]{0}
    __size32 local13; 		// m[esp_11 - 4]{0}
    __size32 local14; 		// m[esp_11 - 8]{0}
    int local15; 		// m[esp_11 - 8]{21}
    int local16; 		// m[esp_11 - 8]{21}
    __size32 local17; 		// m[esp_11 - 8]{0}
    __size32 local18; 		// m[esp_11 - 8]{0}
    __size32 local19; 		// m[esp_11 - 12]{0}
    __size32 local2; 		// m[esp - 8]
    int local20; 		// m[esp_11 - 12]{21}
    int local21; 		// m[esp_11 - 12]{21}
    __size32 local22; 		// m[esp_11 - 12]{0}
    __size32 local23; 		// m[esp_11 - 12]{0}
    unsigned int local24; 		// m[esp_11 - 16]{0}
    int local25; 		// m[esp_11 - 16]{21}
    int local26; 		// m[esp_11 - 16]{21}
    unsigned int local27; 		// m[esp_11 - 16]{0}
    unsigned int local28; 		// m[esp_11 - 16]{0}
    int local29; 		// m[esp - 44]
    __size32 local3; 		// m[esp - 12]
    __size32 local30; 		// param2{10}
    union { __size32 *; __size32; } local31; 		// esp_8{12}
    unsigned int local32; 		// esi{14}
    __size32 local33; 		// param2{31}
    __size32 local34; 		// esp{32}
    unsigned int local4; 		// m[esp - 16]
    int local5; 		// m[esp_11 + 4]{21}
    int local6; 		// m[esp_11 + 4]{21}
    __size32 local7; 		// m[esp_11 + 4]{2}
    __size32 local8; 		// m[esp_11 + 4]{2}
    __size32 local9; 		// m[esp_11 - 4]{0}

    ebp = esp_11 - 4;
    esp_1 = (esp_11 - 44);
    edi = param1;
    esi = *(global_0x0807db9c + 0x4574);
    local30 = param2;
    local31 = esp_1;
    local32 = esi;
    local33 = param2;
    local34 = esp_1;
    if (esi < *(global_0x0807db9c + 0x4568)) {
        ebx = esi * 12;
        do {
            param2 = local30;
            esp_8 = local31;
            esi = local32;
            eax_1 = ebx + *0x808210c;
            *(__size32*)(esp_8 + 4) = eax_1;
            eax_4 = *eax_1;
            *(__size32*)esp_8 = eax_4;
            (*edi)(eax_4, param2, ebx, ebp, esi, edi, ADDFLAGS32(ebx, *0x808210c, eax_1), ADDFLAGS32(ebx, *0x808210c, eax_1), ADDFLAGS32(ebx, *0x808210c, eax_1), param1, local9, local14, local19, local24);
            eax_6 = ebx + *(global_0x0807db9c + 0x4570);
            *(__size32*)(esp_4 + 4) = eax_6 + 4;
            eax_9 = *(eax_6 + 4);
            *(__size32*)esp_4 = eax_9;
            (*edi)(eax_9, eax_6 + 4, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx, *0x808210c, eax_6), ADDFLAGS32(ebx, *0x808210c, eax_6), ADDFLAGS32(ebx, *0x808210c, eax_6), local5, local10, local15, local20, local25);
            local30 = edx;
            local31 = esp_7;
            local33 = edx;
            local34 = esp_7;
            esi_4 = esi_1 + 1;
            ebx += 12;
            local32 = esi_4;
        } while (*(global_0x0807db9c + 0x4568) > esi_1 + 1);
    }
    param2 = local33;
    esp = local34;
    ebx = *(esp + 28);
    esi = *(esp + 32);
    edi = *(esp + 36);
    ebp = *(esp + 40);
    return param2; /* WARNING: Also returning: ebx := ebx, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x08064ef2 */
void caml_alloc_shr(unsigned int param1, unsigned int param2, __size8 param3, __size8 param4, __size8 param5, unsigned int param6, __size32 param7, __size32 param8, __size32 param9, __size32 param10)
{
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    __size32 eax_1; 		// r24{27}
    unsigned int eax_4; 		// r24{30}
    __size32 ebp; 		// r29
    __size32 ebp_1; 		// r29{20}
    __size32 ebp_2; 		// r29{13}
    unsigned int ecx; 		// r25
    int edx; 		// r26
    unsigned int esi; 		// r30
    unsigned int esi_1; 		// r30{21}
    unsigned int esi_2; 		// r30{15}
    __size32 esp_1; 		// r28{14}
    __size32 esp_4; 		// r28{18}
    union { __size32; unsigned int *; } esp_5; 		// r28{19}
    __size32 esp_8; 		// r28{1}
    unsigned int local10; 		// esi_1{21}
    unsigned int local11; 		// param1{22}
    __size8 local12; 		// param4{23}
    __size8 local13; 		// param5{24}
    union { unsigned int *; __size32; } local8; 		// esp_5{19}
    __size32 local9; 		// ebp_1{20}

    ebp_2 = esp_8 - 4;
    esp_1 = esp_8 - 44;
    esi_2 = param2;
    local8 = esp_1;
    local9 = ebp_2;
    local10 = esi_2;
    local11 = param1;
    local12 = param4;
    local13 = param5;
    if (param2 > 0x3fffff) {
        cl = caml_raise_out_of_memory(esp_8 - 4, *(esp_8 - 112), param7); /* Warning: also results in dl, esp_4, ebp, esi */
        local8 = esp_4;
        local9 = ebp;
        local10 = esi;
        local11 = *(esp_8 - 48);
        local12 = cl;
        local13 = dl;
    }
    esp_5 = local8;
    ebp_1 = local9;
    esi_1 = local10;
    param1 = local11;
    param4 = local12;
    param5 = local13;
    *(unsigned int*)esp_5 = esi_1;
    eax_1 = caml_fl_allocate(*(esp_5 - 0xfc0), *esp_5, param6); /* Warning: also results in ecx */
    if (eax_1 == 0) {
        edx = *(&caml_globals + 0x1013c) * ((unsigned long long)((esi_1) * 0x51eb851f >> 32) >> 5);
        eax_4 = (esi_1 + edx + 1) * 4;
        *(unsigned int*)esp_5 = eax_4;
        caml_round_heap_chunk_size(param3, eax_4, ecx, edx, eax_1, ebp_1, esi_1, param10, SALFLAGS32(eax_4, esi_1 + edx + 1, 2), SALFLAGS32(eax_4, esi_1 + edx + 1, 2), SALFLAGS32(eax_4, esi_1 + edx + 1, 2), param8, param10, param9, param7, param1, param4, param5, param2);
    }
    if ( ~flags && flags) {
        *(__size32*)%ebx = %eax;
    }
    else {
        *(__size32*)%ebx = %eax;
    }
    *(__size32*)(&caml_globals + 0x10154) = %eax;
    if ( ~flags) {
        caml_urge_major_slice();
    }
    return;
}

/** address: 0x08062066 */
__size32 caml_darken_all_roots(__size8 param2, __size8 param3, __size8 param3, __size32 param5, unsigned int param6, unsigned int param7, __size32 param7)
{
    __size32 ebp; 		// r29
    __size32 esp; 		// r28
    __size32 local3; 		// m[esp - 64]

    ebp = caml_do_roots(local3, param2, param3, param3, param5, param6, esp - 4, param7, param7);
    ebp = *ebp;
    return ebp;
}

/** address: 0x0806de62 */
void caml_format_exception(union { __size32 *; __size32; } param1)
{
    int ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 edi; 		// r31
    int edx; 		// r26
    __size32 esi; 		// r30
    int esp; 		// r28

    edx = *param1;
    edx = *edx;
    add_string((unsigned char) param1, esp - 292, edx, param1, esp - 4, SUBFLAGS32(esp - 16, 380, (esp - 396)), esp == 396, (unsigned int)(esp - 16) < 380, esi, edi, param1, ebp, edi, esi, ebx, (esp - 29), (esp - 284), pc);
}

/** address: 0x0806e0f0 */
__size32 caml_named_value(union { char *; __size32; } param1)
{
    int eax; 		// r24
    __size32 ebx; 		// r27

    eax = hash_value_name(param1);
    ebx = named_value_table[eax];
    if (named_value_table[eax] == 0) {
bb0x806e12b:
        eax = 0;
    }
    else {
        do {
            eax = strcmp(param1, ebx + 8);
            if (eax == 0) {
                eax = ebx;
                return eax;
            }
            ebx = *(ebx + 4);
        } while (ebx != 0);
        goto bb0x806e12b;
    }
    return eax;
}

/** address: 0x0806ffd8 */
void caml_print_exception_backtrace(__size32 param1, __size32 param2, __size32 param3, __size32 param4, int param5, int param6, int param7, unsigned int param8, union { char[] *; __size32; } param9, int param10, int param11, int param12, unsigned char param13, int param14)
{
    unsigned char al; 		// r8
    int eax; 		// r24
    unsigned int ebx; 		// r27
    unsigned int ebx_1; 		// r27{20}
    unsigned int ebx_2; 		// r27{50}
    int ecx; 		// r25
    int esp; 		// r28
    int local0; 		// m[esp - 68]
    int local1; 		// m[esp - 72]
    unsigned char local12; 		// param13{18}
    int local13; 		// param14{19}
    unsigned int local14; 		// ebx_1{20}
    int local15; 		// param7{21}
    int local16; 		// param6{22}
    int local17; 		// param5{23}
    __size32 local18; 		// param4{24}
    __size32 local19; 		// param3{25}
    int local2; 		// m[esp - 76]
    __size32 local20; 		// param2{26}
    __size32 local21; 		// param1{27}
    int local22; 		// local0{43}
    int local23; 		// local1{44}
    int local24; 		// local2{45}
    __size32 local25; 		// local3{46}
    __size32 local26; 		// local4{47}
    __size32 local27; 		// local5{48}
    __size32 local28; 		// local6{49}
    __size32 local3; 		// m[esp - 80]
    __size32 local4; 		// m[esp - 84]
    __size32 local5; 		// m[esp - 88]
    __size32 local6; 		// m[esp - 92]

    local12 = param13;
    local13 = param14;
    local15 = param7;
    local16 = param6;
    local17 = param5;
    local18 = param4;
    local19 = param3;
    local20 = param2;
    local21 = param1;
    if (*(&named_value_table + 104) > 0) {
        ebx = 0;
        local14 = ebx;
        do {
            param13 = local12;
            param14 = local13;
            ebx_1 = local14;
            param7 = local15;
            param6 = local16;
            param5 = local17;
            param4 = local18;
            param3 = local19;
            param2 = local20;
            param1 = local21;
            eax = *(&named_value_table + 108);
            eax = *(eax + ebx_1 * 4);
            al = extract_location_info(param13, eax, param14, esp - 52); /* Warning: also results in ecx */
            local12 = al;
            local22 = param7;
            local23 = param6;
            local24 = param5;
            local25 = param4;
            local26 = param3;
            local27 = param2;
            local28 = param1;
            if (param8 != 0) {
                if (ebx_1 != 0) {
                }
                local0 = param12;
                local1 = param11;
                local2 = param10;
                local3 = param9;
                local4 = 0x8071c9c;
                local5 = 0x8071cc0;
                eax = *0x807b860;
                local6 = eax;
                ecx = fprintf(eax, "%s file \"%s\", line %d, characters %d-%d\n", 0x8071c9c, param9, param10, param11, param12);
                local22 = local0;
                local23 = local1;
                local24 = local2;
                local25 = local3;
                local26 = local4;
                local27 = local5;
                local28 = local6;
            }
            local0 = local22;
            local1 = local23;
            local2 = local24;
            local3 = local25;
            local4 = local26;
            local5 = local27;
            local6 = local28;
            ebx_2 = ebx_1 + 1;
            local13 = ecx;
            local14 = ebx_2;
            local15 = local0;
            local16 = local1;
            local17 = local2;
            local18 = local3;
            local19 = local4;
            local20 = local5;
            local21 = local6;
        } while (*(&named_value_table + 104) > ebx_1 + 1);
    }
    return;
}

/** address: 0x08070069 */
__size32 caml_stash_backtrace(unsigned int param1, __size32 param2, int param3, unsigned int param4, __size8 param5, __size8 param6, __size8 param7)
{
    __size8 al; 		// r8
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    void *eax; 		// r24
    unsigned int eax_1; 		// r24
    __size32 ebp; 		// r29
    int ebx; 		// r27
    __size32 ecx; 		// r25
    int edi; 		// r31
    int edx; 		// r26
    int edx_1; 		// r26{49}
    int edx_2; 		// r26{42}
    int edx_4; 		// r26{42}
    unsigned int esi; 		// r30
    unsigned int esi_1; 		// r30{28}
    unsigned int esi_2; 		// r30{56}
    __size32 esp; 		// r28
    __size32 esp_1; 		// r28{17}
    __size32 esp_2; 		// r28{20}
    __size8 local10; 		// param6{31}
    __size8 local11; 		// param7{32}
    int local12; 		// edx_1{41}
    int local13; 		// edx{47}
    unsigned int local14; 		// esi{65}
    int local15; 		// edx{68}
    __size32 local16; 		// esp{69}
    int local5; 		// m[esp - 48]
    unsigned int local6; 		// param1{21}
    __size32 local7; 		// esp{26}
    unsigned int local8; 		// local5{29}
    __size8 local9; 		// param5{30}

    ebp = esp - 4;
    ebx = param3;
    esi = param4;
    local6 = param1;
    local9 = param5;
    local10 = param6;
    local11 = param7;
    if (param2 != *0x807b808) {
        *(__size32*)(&caml_globals + 0xfb34) = 0;
        *(__size32*)(&caml_globals + 0x9214) = param2;
    }
    if (*0x808212c != 0) {
bb0x80700b4:
        esp_2 = esp - 44;
        param1 = local6;
        local7 = esp_2;
        local8 = param1;
        if (*0x807b9fc == 0) {
            al = caml_init_frame_descriptors(); /* Warning: also results in cl, dl, ebx, esp, ebp, esi */
            local7 = esp;
            local8 = local5;
            local9 = al;
            local10 = cl;
            local11 = dl;
        }
        do {
            esp = local7;
            esi_1 = esi;
            local5 = local8;
            param5 = local9;
            param6 = local10;
            param7 = local11;
            edi = *(&caml_globals + 0x1000c);
            edx = (unsigned int)ebx >> 3 & edi;
            ecx = *(&caml_globals + 0x9408);
            eax = *(ecx + ((unsigned int)ebx >> 3 & edi) * 4);
            local7 = esp;
            local8 = local5;
            local9 = param5;
            local10 = param6;
            local11 = param7;
            local12 = edx;
            local13 = edx;
            local15 = edx;
            local16 = esp;
            local16 = esp;
            local16 = esp;
            local16 = esp;
            local16 = esp;
            if (eax != 0) {
                if (*eax != ebx) {
                    do {
                        edx_1 = local12;
                        edx_2 = edx_1 + 1 & edi;
                        eax = *(ecx + (edx_1 + 1 & edi) * 4);
                        local12 = edx_2;
                        local13 = edx_2;
                        local15 = edx_2;
                        if (eax != 0) {
                        }
                        edx = local15;
                        esp = local16;
                        ebx = *(esp + 28);
                        ebp = *(esp + 40);
                        return ecx; /* WARNING: Also returning: edx := edx, ebx := ebx, ebp := ebp */
                    } while (*eax == ebx);
bb0x80700f4:
                    edx = local13;
                    local15 = edx;
                    if (*(eax + 4) == -1) {
                        esi = *(esi_1 + 8);
                        ebx = *(esi_1 + 12);
                        local14 = esi;
                        if (esi != 0) {
bb0x8070137:
                            esi = local14;
                            local15 = edx;
                        }
                        edx = local15;
                        esp = local16;
                        ebx = *(esp + 28);
                        ebp = *(esp + 40);
                        return ecx; /* WARNING: Also returning: edx := edx, ebx := ebx, ebp := ebp */
                    }
                    else {
                        edx_4 = *(&caml_globals + 0xfb34);
                        local15 = edx_4;
                        if (edx_4 <= 1023) {
                            ecx = *(&caml_globals + 0xfb38);
                            *(__size32*)(ecx + edx_4 * 4) = eax;
                            edx = edx_4 + 1;
                            *(__size32*)(&caml_globals + 0xfb34) = edx_4 + 1;
                            eax_1 = *(unsigned short*)(eax + 4);
                            esi_2 = esi_1 + (eax_1 & 0xfffc);
                            ebx = *(esi_1 + (eax_1 & 0xfffc) - 4);
                            local14 = esi_2;
                            goto bb0x8070137;
                        }
                        edx = local15;
                        esp = local16;
                        ebx = *(esp + 28);
                        ebp = *(esp + 40);
                        return ecx; /* WARNING: Also returning: edx := edx, ebx := ebx, ebp := ebp */
                    }
                    edx = local15;
                    esp = local16;
                    ebx = *(esp + 28);
                    ebp = *(esp + 40);
                    return ecx; /* WARNING: Also returning: edx := edx, ebx := ebx, ebp := ebp */
                }
                else {
                    goto bb0x80700f4;
                }
                edx = local15;
                esp = local16;
                ebx = *(esp + 28);
                ebp = *(esp + 40);
                return ecx; /* WARNING: Also returning: edx := edx, ebx := ebx, ebp := ebp */
            }
        } while (esi <= *(ebp + 20));
    }
    else {
        eax = malloc(0x1000); /* Warning: also results in ecx, edx, esp_1 */
        local6 = local5;
        local15 = edx;
        local16 = esp_1;
        *(union { void *; __size32; }*)0x808212c = eax;
        if (eax != 0) {
            goto bb0x80700b4;
        }
    }
    edx = local15;
    esp = local16;
    ebx = *(esp + 28);
    ebp = *(esp + 40);
    return ecx; /* WARNING: Also returning: edx := edx, ebx := ebx, ebp := ebp */
}

/** address: 0x080646dc */
__size32 caml_check_urgent_gc()
{
    __size32 eax; 		// r24
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 esp_1; 		// r28{2}
    __size32 esp_4; 		// r28{6}
    __size32 esp_5; 		// r28{9}
    __size32 esp_8; 		// r28{1}
    __size32 local7; 		// m[esp + 4]
    __size32 local8; 		// esp_5{9}

    esp_1 = esp_8 - 44;
    *(__size32*)(&caml_globals + 0x9400) = esp_8 - 44;
    eax = *(&caml_globals + 0x9540);
    local8 = esp_1;
    if (eax != 0) {
        esp_4 = esp_8 - 48;
        caml_minor_collection();
        local8 = esp_4;
    }
    ebx = *(&caml_globals + 0x9400);
    esp_5 = local8;
    *(__size32*)(&caml_globals + 0x9400) = ebx;
    ebx = *(esp_5 + 36);
    ebp = *(esp_5 + 40);
    return local7; /* WARNING: Also returning: ebx := ebx, ebp := ebp */
}

/** address: 0x08061db8 */
__size32 caml_register_frametable(__size32 param1)
{
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 esi; 		// r30
    __size32 *esp_1; 		// r28{3}

    ebx = cons(); /* Warning: also results in esp_1, esi */
    *(__size32*)(&caml_globals + 0x9420) = param1;
    eax = *(&caml_globals + 0x9408);
    if (eax != 0) {
        *(__size32*)esp_1 = eax;
        caml_stat_free(*esp_1);
        *(__size32*)(&caml_globals + 0x9408) = 0;
    }
    return ebx; /* WARNING: Also returning: esi := esi */
}

/** address: 0x08062300 */
__size32 caml_iterate_global_roots(__size32 param1, __size32 param2)
{
    union { __size32; __size32 *; } eax; 		// r24
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 esi; 		// r30
    __size32 esp; 		// r28
    __size32 esp_1; 		// r28{5}
    __size32 esp_2; 		// r28{22}
    union { __size32; __size32 *; } esp_3; 		// r28{11}
    __size32 esp_6; 		// r28{1}
    union { __size32 *; __size32; } local4; 		// esp_3{11}
    __size32 local5; 		// esp{26}

    ebp = esp_6 - 4;
    esp_1 = (esp_6 - 28);
    esi = param1;
    ebx = *(param2 + 4);
    flags = LOGICALFLAGS32(ebx);
    local4 = esp_1;
    local5 = esp_1;
    if (ebx != 0) {
        do {
            esp_3 = local4;
            eax = *ebx;
            *(__size32*)(esp_3 + 4) = eax;
            eax = *eax;
            *(__size32*)esp_3 = eax;
            (*esi)(eax, ebx, ebp, esi, flags, ZF, CF, param2, *(esp_6 - 4), *(esp_6 - 8), *(esp_6 - 12));
            local4 = esp_2;
            local5 = esp_2;
            ebx = *(ebx + 4);
            flags = LOGICALFLAGS32(ebx);
        } while (ebx != 0);
    }
    esp = local5;
    ebx = *(esp + 16);
    esi = *(esp + 20);
    return ebx; /* WARNING: Also returning: esi := esi */
}

/** address: 0x08062360 */
__size8 caml_insert_global_root(unsigned int param1, unsigned int param2)
{
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    int eax; 		// r24
    int eax_1; 		// r24{6}
    unsigned int eax_11; 		// r24{23}
    unsigned int eax_12; 		// r24{30}
    unsigned int eax_15; 		// r24{34}
    unsigned int eax_16; 		// r24{36}
    unsigned int eax_17; 		// r24{27}
    unsigned int eax_18; 		// r24{38}
    union { unsigned int * x9; int *; int; } eax_4; 		// r24{12}
    union { int *; int; } eax_7; 		// r24{20}
    int eax_8; 		// r24{22}
    unsigned int ebp; 		// r29
    unsigned int ebx; 		// r27
    unsigned int ecx; 		// r25
    unsigned int ecx_1; 		// r25{7}
    unsigned int ecx_4; 		// r25{10}
    unsigned int ecx_5; 		// r25{17}
    __size32 edi; 		// r31
    unsigned int edx; 		// r26
    unsigned int edx_1; 		// r26{50}
    unsigned int edx_2; 		// r26{50}
    unsigned int edx_3; 		// r26{8}
    unsigned int edx_5; 		// r26{45}
    unsigned int edx_6; 		// r26{8}
    int esi; 		// r30
    union { int; void *; } esp; 		// r28
    unsigned int local10; 		// edx_2{11}
    unsigned int local11; 		// edx_1{19}
    unsigned int local12; 		// eax_17{27}
    unsigned int local13; 		// eax_16{36}
    unsigned int local14; 		// edx_5{45}
    unsigned int local15; 		// ecx{52}
    unsigned int local16; 		// edx{53}
    unsigned int local9; 		// ecx_4{10}

    eax_1 = *(param1 + 72);
    ecx_1 = eax_1;
    edx_3 = param1;
    local9 = ecx_1;
    local10 = edx_3;
    local11 = edx_3;
    local15 = ecx_1;
    if (eax_1 >= 0) {
        do {
bb0x8062381:
            ecx_4 = local9;
            edx_2 = local10;
            eax_4 = *(edx_2 + ecx_4 * 4 + 4);
            local9 = ecx_4;
            local10 = edx_2;
            local11 = edx_2;
            if ( ~(eax_4 == 0 || *eax_4 >= param2)) {
                edx = eax_4;
                local10 = edx;
                goto bb0x8062381;
            }
            *(unsigned int*)(esp + ecx_4 * 4 - 96) = edx_2;
            ecx_5 = ecx_4 - 1;
            local9 = ecx_5;
        } while (ecx_4 - 1 != -1);
    }
    edx_1 = local11;
    eax_7 = *(edx_1 + 4);
    local16 = edx_1;
    if ( ~(eax_7 != 0 && *eax_7 == param2)) {
        eax_8 = *(&caml_globals + 0x9538) * 0x10dcd;
        eax_11 = eax_8 + 0x6255;
        *(__size32*)(&caml_globals + 0x9538) = eax_8 + 0x6255;
        esi = 0;
        local12 = eax_11;
        if ((eax_8 + 0x6255 & 0xc0000000) == 0xc0000000) {
            do {
                eax_17 = local12;
                esi++;
                eax_12 = eax_17 * 4;
                local12 = eax_12;
            } while ((eax_17 * 4 & 0xc0000000) == 0xc0000000);
        }
        if (eax_1 < esi) {
            eax_15 = eax_1 + 1;
            local13 = eax_15;
            if (eax_1 + 1 <= esi) {
                do {
                    eax_16 = local13;
                    *(unsigned int*)(esp + eax_16 * 4 - 96) = param1;
                    eax_18 = eax_16 + 1;
                    local13 = eax_18;
                } while (eax_16 + 1 <= esi);
            }
            *(int*)(param1 + 72) = esi;
        }
        eax = caml_stat_alloc(esi * 4 + 8); /* Warning: also results in cl, dl, ecx, edx, ebx, esp, ebp, esi */
        local15 = ecx;
        local16 = edx;
        *(unsigned int*)eax = ebx;
        if (esi >= 0) {
            edx = 0;
            local14 = edx;
            do {
                edx_5 = local14;
                ecx = *(ebp + edx_5 * 4 - 92);
                ebx = *(ecx + edx_5 * 4 + 4);
                *(unsigned int*)(eax + edx_5 * 4 + 4) = ebx;
                *(__size32*)(ecx + edx_5 * 4 + 4) = eax;
                edx_6 = edx_5 + 1;
                local14 = edx_6;
                local15 = ecx;
                local16 = edx_6;
            } while (edx_5 + 1 <= esi);
        }
    }
    ecx = local15;
    edx = local16;
    ebx = *(esp + 124);
    esi = *(esp + 128);
    edi = *(esp + 132);
    ebp = *(esp + 136);
    return cl; /* WARNING: Also returning: dl := dl, ecx := ecx, edx := edx, ebx := ebx, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x080632fc */
__size32 caml_fl_allocate(int param1, unsigned int param2, unsigned int param3)
{
    unsigned int eax; 		// r24
    int eax_1; 		// r24{25}
    int ebx; 		// r27
    int ebx_1; 		// r27{124}
    unsigned int ebx_11; 		// r27{152}
    int ebx_2; 		// r27{65}
    int ebx_4; 		// r27{65}
    unsigned int ebx_5; 		// r27{164}
    unsigned int ebx_6; 		// r27{160}
    unsigned int ebx_7; 		// r27{155}
    unsigned int ebx_8; 		// r27{145}
    unsigned int ecx; 		// r25
    int ecx_1; 		// r25{148}
    unsigned int ecx_4; 		// r25{149}
    int edi; 		// r31
    int edx; 		// r26
    union { unsigned int; unsigned int *; } edx_1; 		// r26{47}
    int esi; 		// r30
    int esi_1; 		// r30{10}
    unsigned int esi_11; 		// r30{11}
    unsigned int esi_12; 		// r30{161}
    unsigned int esi_13; 		// r30{156}
    unsigned int esi_14; 		// r30{144}
    int esi_15; 		// r30{75}
    unsigned int esi_18; 		// r30{11}
    unsigned int esi_4; 		// r30{11}
    int esi_6; 		// r30{54}
    unsigned int esi_9; 		// r30{11}
    unsigned int local10; 		// ecx{159}
    unsigned int local11; 		// ebx_6{160}
    unsigned int local12; 		// esi_12{161}
    unsigned int local13; 		// ecx{163}
    unsigned int local14; 		// ebx_5{164}
    unsigned int local15; 		// param3{188}
    unsigned int local16; 		// ecx{190}
    int local4; 		// ebx{59}
    unsigned int local5; 		// esi{60}
    int local6; 		// ebx_1{64}
    unsigned int local7; 		// esi_11{125}
    unsigned int local8; 		// ebx_7{155}
    unsigned int local9; 		// esi_13{156}

    local15 = param3;
    if (caml_allocation_policy == 0) {
        ecx = *0x807b750;
        edx = *ecx;
        if (edx == 0) {
bb0x8063398:
            fl_last = ecx;
            ecx = 0x807b748;
            edx = global_0x0807b748;
            local15 = ecx;
            if (fl_prev == 0x807b748) {
bb0x8063766:
                param3 = local15;
                edi = 0;
                local16 = param3;
            }
            else {
                ebx = *(global_0x0807b748 - 4);
                if (param2 > (unsigned int)((unsigned int)ebx >> 10)) {
                    do {
                        edx_1 = edx;
                        ecx = edx_1;
                        edx = *edx_1;
                        local15 = ecx;
                        if (fl_prev != edx_1) {
bb0x80633bf:
                            ebx = *(edx - 4);
                        }
                        else {
                            goto bb0x8063766;
                        }
                        goto bb0x80633bf;
                    } while (param2 > (unsigned int)((unsigned int)ebx >> 10));
bb0x80633c9:
                    eax = allocate_block(edx, param2 + 1, ecx);
                    local16 = ecx;
                    edi = eax;
                }
                else {
                    goto bb0x80633c9;
                }
            }
        }
        else {
            ebx = *(edx - 4);
            if (param2 > (unsigned int)((unsigned int)ebx >> 10)) {
                do {
                    ecx = edx;
                    edx = *edx;
                    if (edx != 0) {
bb0x806336f:
                        ebx = *(edx - 4);
                    }
                    else {
                        goto bb0x8063398;
                    }
                    goto bb0x806336f;
                } while ((unsigned int)((unsigned int)ebx >> 10) < param2);
bb0x8063379:
                eax_1 = allocate_block(edx, param2 + 1, ecx);
                local16 = ecx;
                edi = eax_1;
            }
            else {
                goto bb0x8063379;
            }
        }
    }
    else {
        if (caml_allocation_policy != 1) {
            goto bb0x8063766;
        }
        else {
            if (flp_size <= 0) {
bb0x806341b:
                if (flp_size != 0) {
                }
                ecx = 0x807b748;
                edi = 0;
                edx = 0;
                while (flp_size <= 999) {
                    edx = *ecx;
                    if (edx == 0) {
                        fl_last = ecx;
                    }
                    esi_15 = *(edx - 4);
                    esi_18 = (unsigned int)esi_15 >> 10;
                    local7 = esi_18;
                    if (edi < (unsigned int)((unsigned int)esi_15 >> 10)) {
                        global_0x0807db9c[flp_size] = ecx;
                        ebx = flp_size;
                        flp_size++;
                        if (param2 > (unsigned int)((unsigned int)esi_15 >> 10)) {
                            edi = (unsigned int)esi_15 >> 10;
bb0x80634c4:
                            ecx = edx;
                        }
                        else {
                            beyond = edx;
                            eax = allocate_block(edx, param2 + 1, ecx);
                            edi = eax;
bb0x8063547:
                            ebx_4 = ebx;
                            esi_11 = local7;
                            local16 = ecx;
                            if (ebx_4 < flp_size) {
                                ecx = 0;
                                if (ebx_4 > 0) {
                                    edx = *global_0x0807db9c[ebx_4];
                                    edx = *(edx - 4);
                                    ecx = (unsigned int)edx >> 10;
                                }
                                local10 = ecx;
                                local16 = ecx;
                                local16 = ecx;
                                if (flp_size - 1 != ebx_4) {
                                    eax = global_0x0807db9c[ebx_4];
                                    esi_14 = ecx;
                                    ebx_8 = 0;
                                    local11 = ebx_8;
                                    local12 = esi_14;
                                    ecx = local10;
                                    ebx_6 = local11;
                                    esi_12 = local12;
                                    local8 = ebx_6;
                                    local9 = esi_12;
                                    local13 = ecx;
                                    local14 = ebx_6;
                                    while (global_0x0807db9c[ebx_4] != eax) {
                                        edx = *eax;
                                        ecx_1 = *(edx - 4);
                                        ecx_4 = (unsigned int)ecx_1 >> 10;
                                        local10 = ecx_4;
                                        local13 = ecx_4;
                                        if (esi_12 < (unsigned int)((unsigned int)ecx_1 >> 10)) {
                                            *(__size32*)(esp + ebx_6 * 4 - 0xfbc) = eax;
                                            ebx_11 = ebx_6 + 1;
                                            local8 = ebx_11;
                                            local14 = ebx_11;
                                            if (esi_11 > (unsigned int)((unsigned int)ecx_1 >> 10)) {
                                                esi = (unsigned int)ecx_1 >> 10;
                                                local9 = esi;
bb0x80635fb:
                                                ebx_7 = local8;
                                                esi_13 = local9;
                                                eax = edx;
                                                local11 = ebx_7;
                                                local12 = esi_13;
                                            }
                                            goto bb0x8063601;
                                        }
                                        goto bb0x80635fb;
                                        ecx = local10;
                                        ebx_6 = local11;
                                        esi_12 = local12;
                                        local8 = ebx_6;
                                        local9 = esi_12;
                                        local13 = ecx;
                                        local14 = ebx_6;
                                    }
bb0x8063601:
                                    ecx = local13;
                                    ebx_5 = local14;
                                    if (flp_size + ebx_5 - 1 > 1000) {
                                        if (ebx_5 + ebx_4 > 999) {
                                            if (ebx_4 != 1000) {
                                                ecx = memmove(ebx_4 * 4 + 0x807dba0, &param1, (1000 - ebx_4) * 4);
                                            }
                                        }
                                        else {
                                            if (ebx_5 == 1) {
bb0x80636f7:
                                                ecx = memmove(ebx_4 * 4 + 0x807dba0, &param1, ebx_5 * 4);
                                            }
                                            else {
                                                ecx = memmove((ebx_5 + ebx_4) * 4 + 0x807dba0, ebx_4 * 4 + 0x807dba4, (1000 - ebx_4 + ebx_5) * 4);
                                                if ((int)ebx_5 > 0) {
                                                    goto bb0x80636f7;
                                                }
                                            }
                                        }
                                        flp_size = 999;
                                        eax = *0x807eb3c;
                                        eax = *eax;
                                        beyond = eax;
                                        local16 = ecx;
                                        ecx = local16;
                                        return edi; /* WARNING: Also returning: ecx := ecx */
                                    }
                                    else {
                                        if (ebx_5 == 1) {
bb0x8063669:
                                            ecx = memmove(ebx_4 * 4 + 0x807dba0, &param1, ebx_5 * 4);
                                        }
                                        else {
                                            ecx = memmove((ebx_5 + ebx_4) * 4 + 0x807dba0, ebx_4 * 4 + 0x807dba4, (flp_size - ebx_4 - 1) * 4);
                                            if ((int)ebx_5 > 0) {
                                                goto bb0x8063669;
                                            }
                                        }
                                        flp_size = ebx_5 + flp_size - 1;
                                        local16 = ecx;
                                        ecx = local16;
                                        return edi; /* WARNING: Also returning: ecx := ecx */
                                    }
                                    ecx = local16;
                                    return edi; /* WARNING: Also returning: ecx := ecx */
                                }
                                else {
                                    eax = *global_0x0807db9c[(flp_size - 1)];
                                    edx = *(eax - 4);
                                    if (ecx < (unsigned int)((unsigned int)edx >> 10)) {
                                        beyond = 0;
                                        ecx = local16;
                                        return edi; /* WARNING: Also returning: ecx := ecx */
                                    }
                                    else {
                                        beyond = eax;
                                        flp_size--;
                                        ecx = local16;
                                        return edi; /* WARNING: Also returning: ecx := ecx */
                                    }
                                    ecx = local16;
                                    return edi; /* WARNING: Also returning: ecx := ecx */
                                }
                                ecx = local16;
                                return edi; /* WARNING: Also returning: ecx := ecx */
                            }
                            ecx = local16;
                            return edi; /* WARNING: Also returning: ecx := ecx */
                        }
                        ecx = local16;
                        return edi; /* WARNING: Also returning: ecx := ecx */
                    }
                    goto bb0x80634c4;
                }
                beyond = edx;
                ecx = edx;
                if (edx == 0) {
                    ecx = global_0x0807db9c[flp_size];
                }
                edx = *0x807eb3c;
                edx = *edx;
                esi = *(edx - 4);
                edx = *ecx;
                if (edx == 0) {
bb0x8063537:
                    fl_last = ecx;
                    edi = 0;
                    local16 = ecx;
                }
                else {
                    ebx = *(edx - 4);
                    local16 = ecx;
                    while ((unsigned int)((unsigned int)esi >> 10) <= (unsigned int)((unsigned int)ebx >> 10)) {
                        if (param2 > (unsigned int)((unsigned int)ebx >> 10)) {
bb0x8063529:
                            ebx = *edx;
                            if (ebx == 0) {
                                ecx = edx;
                                goto bb0x8063537;
                            }
                            ecx = edx;
                            edx = ebx;
                        }
                        else {
                            eax = allocate_block(edx, param2 + 1, ecx);
                            edi = eax;
                        }
                        ecx = local16;
                        return edi; /* WARNING: Also returning: ecx := ecx */
                        ebx = *(edx - 4);
                        local16 = ecx;
                    }
                    beyond = edx;
                    goto bb0x8063529;
                }
            }
            else {
                ecx = *0x807dba0;
                edx = *ecx;
                esi_1 = *(edx - 4);
                esi_4 = (unsigned int)esi_1 >> 10;
                ebx = 0;
                local4 = ebx;
                local5 = esi_4;
                local6 = ebx;
                if (param2 > (unsigned int)((unsigned int)esi_1 >> 10)) {
                    do {
                        ebx_1 = local6;
                        ebx_2 = ebx_1 + 1;
                        local4 = ebx_2;
                        local6 = ebx_2;
                        if (ebx_1 + 1 < flp_size) {
bb0x80633ed:
                            ecx = flp[(ebx_1 + 1)];
                            edx = *flp[(ebx_1 + 1)];
                            esi_6 = *(edx - 4);
                            esi_9 = (unsigned int)esi_6 >> 10;
                            local5 = esi_9;
                        }
                        else {
                            goto bb0x806341b;
                        }
                        goto bb0x80633ed;
                    } while (param2 > (unsigned int)((unsigned int)esi_6 >> 10));
bb0x80633fc:
                    ebx = local4;
                    esi = local5;
                    eax = allocate_block(edx, param2 + 1, ecx);
                    local7 = esi;
                    edi = eax;
                    goto bb0x8063547;
                }
                else {
                    goto bb0x80633fc;
                }
            }
        }
    }
    ecx = local16;
    return edi; /* WARNING: Also returning: ecx := ecx */
}

/** address: 0x0806389f */
void caml_round_heap_chunk_size()
{
}

/** address: 0x080627a2 */
void caml_urge_major_slice()
{
    __size32 eax; 		// r24

    caml_force_major_slice = 1;
    eax = *(global_0x0807db9c + 0xfd4);
    *(__size32*)(global_0x0807db9c + 0xfdc) = eax;
    return;
}

/** address: 0x080631b9 */
void caml_fl_add_blocks(unsigned int param1)
{
    int eax; 		// r24
    __size32 ebx; 		// r27
    unsigned int ecx; 		// r25
    int edx; 		// r26
    union { __size32; unsigned int *; } esi; 		// r30

    edx = *(param1 - 4);
    caml_fl_cur_size = caml_fl_cur_size + ((unsigned int)edx >> 10) + 1;
    edx = *0x807db90;
    if (param1 <= edx) {
        ecx = global_0x0807b748;
        if (global_0x0807b748 != 0 && param1 > global_0x0807b748) {
            edx = *ecx;
            while (edx != 0 && param1 > edx) {
                ecx = edx;
                edx = *ecx;
            }
            ebx = ecx;
            ecx = edx;
        }
        else {
            ebx = 0x807b748;
        }
        esi = *(param1 + 4);
        *(unsigned int*)esi = ecx;
        *(unsigned int*)ebx = param1;
        if ( ~(ebx != *0x807b73c || param1 >= *(global_0x0807db9c + 0x4b90))) {
            edx = *(param1 + 4);
            caml_fl_merge = edx;
        }
        if (*0x807db84 == 1) {
            truncate_flp(param1);
        }
    }
    else {
        *(unsigned int*)edx = param1;
        if ( ~(edx != *0x807b73c || param1 >= *(global_0x0807db9c + 0x4b90))) {
            eax = *(param1 + 4);
            caml_fl_merge = eax;
        }
        if ( ~(*0x807db84 != 1 || flp_size > 999)) {
            global_0x0807db9c[flp_size] = edx;
            flp_size++;
        }
    }
    return;
}

/** address: 0x08064e46 */
void caml_add_to_heap(unsigned int param1)
{
    int eax; 		// r24
    __size32 ecx; 		// r25
    __size32 edx; 		// r26

    ecx = caml_gc_message(4, 0x807121f); /* Warning: also results in edx */
    eax = param1 + *(param1 - 8);
    eax = caml_page_table_add(1, param1, eax, ecx, edx);
    if (eax == 0) {
        eax = *(global_0x0807db9c + 0x4b9c);
        if (eax != 0 && param1 > eax) {
            do {
                edx = eax - 4;
                eax = *(eax - 4);
            } while (eax != 0 && param1 > eax);
        }
        else {
            edx = 0x8082738;
        }
        *(unsigned int*)(param1 - 4) = eax;
        *(unsigned int*)edx = param1;
        *(__size32*)(global_0x0807db9c + 0x4510)++;
        edx = *(global_0x0807db9c + 0x4504);
        edx += *(param1 - 8);
        *(int*)(global_0x0807db9c + 0x4504) = edx;
        if (edx > *(global_0x0807db9c + 0x4508)) {
            *(int*)(global_0x0807db9c + 0x4508) = edx;
        }
    }
    return;
}

/** address: 0x08064a64 */
void caml_free_for_heap(__size32 param1)
{
    __size32 eax; 		// r24

    eax = *(param1 - 16);
    free(eax);
    return;
}

/** address: 0x08061f45 */
__size32 caml_do_roots(__size32 param1, __size8 param2, __size8 param3, __size8 param4, __size32 param5, unsigned int param6, __size32 param7, unsigned int param8, __size32 param9)
{
    __size8 al; 		// r8
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    unsigned int eax; 		// r24
    __size32 ebp; 		// r29
    unsigned int ebx; 		// r27
    int ebx_1; 		// r27{148}
    unsigned int ebx_4; 		// r27{149}
    __size32 ebx_6; 		// r27{44}
    unsigned int ebx_9; 		// r27{149}
    __size32 ecx; 		// r25
    unsigned int edi; 		// r31
    int edx; 		// r26
    int edx_1; 		// r26{151}
    int edx_11; 		// r26{47}
    int edx_14; 		// r26{82}
    int edx_4; 		// r26{152}
    int edx_6; 		// r26{81}
    int edx_9; 		// r26{82}
    __size32 esi; 		// r30
    __size32 esp; 		// r28
    __size32 esp_1; 		// r28{16}
    __size32 *esp_11; 		// r28{212}
    __size32 *esp_14; 		// r28{216}
    __size32 esp_17; 		// r28{44}
    union { __size32; __size32 *; } esp_20; 		// r28{26}
    __size32 esp_23; 		// r28{54}
    __size32 esp_26; 		// r28{70}
    __size32 esp_29; 		// r28{91}
    union { __size32; __size32 *; } esp_30; 		// r28{130}
    __size32 esp_33; 		// r28{158}
    __size32 esp_36; 		// r28{108}
    __size32 esp_39; 		// r28{175}
    __size32 esp_4; 		// r28{148}
    union { __size32; unsigned int *; } esp_42; 		// r28{191}
    __size32 esp_45; 		// r28{1}
    __size32 esp_7; 		// r28{188}
    __size32 *esp_8; 		// r28{208}
    __size32 local10; 		// m[esp_45 - 4]{110}
    __size8 local106; 		// al{21}
    __size32 local107; 		// ecx{23}
    int local108; 		// edx{24}
    unsigned int local109; 		// ebx{25}
    int local11; 		// m[esp_45 - 4]{148}
    union { __size32 *; __size32; } local110; 		// esp_20{26}
    __size32 local111; 		// local15{33}
    __size32 local112; 		// local35{34}
    unsigned int local113; 		// local55{35}
    unsigned int local114; 		// local75{36}
    __size32 local115; 		// local93{37}
    __size8 local116; 		// cl{38}
    __size8 local117; 		// dl{39}
    __size8 local118; 		// al{51}
    __size32 local119; 		// ecx{52}
    unsigned int local120; 		// ebx{53}
    __size32 local121; 		// esp_23{54}
    __size32 local122; 		// local14{57}
    __size32 local123; 		// local34{58}
    unsigned int local124; 		// local54{59}
    unsigned int local125; 		// local74{60}
    __size32 local126; 		// local92{61}
    __size8 local127; 		// cl{62}
    __size8 local128; 		// dl{63}
    __size8 local129; 		// param2{68}
    __size32 local13; 		// m[esp_45 - 4]{95}
    __size32 local130; 		// param5{69}
    __size32 local131; 		// esp_26{70}
    __size32 local132; 		// local17{73}
    __size32 local133; 		// local37{74}
    unsigned int local134; 		// local57{75}
    unsigned int local135; 		// local77{76}
    __size32 local136; 		// local95{77}
    __size8 local137; 		// param3{78}
    __size8 local138; 		// param4{79}
    __size8 local139; 		// param2{88}
    __size32 local14; 		// m[esp_45 - 4]{57}
    __size32 local140; 		// param5{89}
    unsigned int local141; 		// param6{90}
    __size32 local142; 		// esp_29{91}
    unsigned int local143; 		// param8{93}
    __size32 local144; 		// local13{95}
    __size32 local145; 		// local33{96}
    unsigned int local146; 		// local53{97}
    unsigned int local147; 		// local73{98}
    __size32 local148; 		// local91{99}
    __size8 local149; 		// param3{100}
    __size32 local15; 		// m[esp_45 - 4]{33}
    __size8 local150; 		// param4{101}
    __size8 local151; 		// al{105}
    __size32 local152; 		// ecx{106}
    unsigned int local153; 		// ebx{107}
    __size32 local154; 		// esp_36{108}
    __size32 local155; 		// local10{110}
    __size32 local156; 		// local30{111}
    unsigned int local157; 		// local50{112}
    unsigned int local158; 		// local70{113}
    __size32 local159; 		// local88{114}
    __size32 local16; 		// m[esp_45 - 4]{162}
    __size8 local160; 		// cl{115}
    __size8 local161; 		// dl{116}
    __size32 local162; 		// edx{128}
    unsigned int local163; 		// ebx{129}
    union { __size32 *; __size32; } local164; 		// esp_30{130}
    __size32 local165; 		// local9{137}
    __size32 local166; 		// local29{138}
    unsigned int local167; 		// local49{139}
    unsigned int local168; 		// local69{140}
    __size32 local169; 		// local87{141}
    __size32 local17; 		// m[esp_45 - 4]{73}
    unsigned int local170; 		// ebx{157}
    __size32 local171; 		// esp_33{158}
    __size32 local172; 		// local16{162}
    __size32 local173; 		// local36{163}
    unsigned int local174; 		// local56{164}
    unsigned int local175; 		// local76{165}
    __size32 local176; 		// local94{166}
    __size32 local177; 		// ecx{173}
    unsigned int local178; 		// ebx{174}
    __size32 local179; 		// esp_39{175}
    int local18; 		// m[esp_45 - 4]{44}
    unsigned int local180; 		// esi{177}
    __size32 local181; 		// m[esp_45 - 4]{179}
    __size32 local182; 		// m[esp_45 - 8]{180}
    unsigned int local183; 		// m[esp_45 - 12]{181}
    unsigned int local184; 		// m[esp_45 - 16]{182}
    __size32 local185; 		// m[esp_45 - 32]{183}
    __size8 local186; 		// cl{184}
    __size8 local187; 		// dl{185}
    union { unsigned int *; __size32; } local188; 		// esp_42{191}
    __size32 *local189; 		// esp{223}
    __size32 local26; 		// m[esp_45 - 8]{13}
    __size32 local29; 		// m[esp_45 - 8]{138}
    __size32 local30; 		// m[esp_45 - 8]{111}
    int local31; 		// m[esp_45 - 8]{148}
    __size32 local33; 		// m[esp_45 - 8]{96}
    __size32 local34; 		// m[esp_45 - 8]{58}
    __size32 local35; 		// m[esp_45 - 8]{34}
    __size32 local36; 		// m[esp_45 - 8]{163}
    __size32 local37; 		// m[esp_45 - 8]{74}
    int local38; 		// m[esp_45 - 8]{44}
    unsigned int local46; 		// m[esp_45 - 12]{14}
    unsigned int local49; 		// m[esp_45 - 12]{139}
    unsigned int local50; 		// m[esp_45 - 12]{112}
    int local51; 		// m[esp_45 - 12]{148}
    unsigned int local53; 		// m[esp_45 - 12]{97}
    unsigned int local54; 		// m[esp_45 - 12]{59}
    unsigned int local55; 		// m[esp_45 - 12]{35}
    unsigned int local56; 		// m[esp_45 - 12]{164}
    unsigned int local57; 		// m[esp_45 - 12]{75}
    int local58; 		// m[esp_45 - 12]{44}
    __size32 local6; 		// m[esp_45 - 4]{11}
    unsigned int local66; 		// m[esp_45 - 16]{15}
    unsigned int local69; 		// m[esp_45 - 16]{140}
    unsigned int local70; 		// m[esp_45 - 16]{113}
    int local71; 		// m[esp_45 - 16]{148}
    unsigned int local73; 		// m[esp_45 - 16]{98}
    unsigned int local74; 		// m[esp_45 - 16]{60}
    unsigned int local75; 		// m[esp_45 - 16]{36}
    unsigned int local76; 		// m[esp_45 - 16]{165}
    unsigned int local77; 		// m[esp_45 - 16]{76}
    int local78; 		// m[esp_45 - 16]{44}
    __size32 local86; 		// m[esp_45 - 32]{19}
    __size32 local87; 		// m[esp_45 - 32]{141}
    __size32 local88; 		// m[esp_45 - 32]{114}
    int local89; 		// m[esp_45 - 32]{148}
    __size32 local9; 		// m[esp_45 - 4]{137}
    __size32 local91; 		// m[esp_45 - 32]{99}
    __size32 local92; 		// m[esp_45 - 32]{61}
    __size32 local93; 		// m[esp_45 - 32]{37}
    __size32 local94; 		// m[esp_45 - 32]{166}
    __size32 local95; 		// m[esp_45 - 32]{77}
    int local96; 		// m[esp_45 - 32]{44}

    local6 = param7;
    ebp = esp_45 - 4;
    local26 = param9;
    local46 = param8;
    local66 = param6;
    esp_1 = esp_45 - 76;
    edi = caml_globals[0];
    local129 = param2;
    local130 = param5;
    local131 = esp_1;
    local132 = local6;
    local133 = local26;
    local134 = local46;
    local135 = local66;
    local137 = param3;
    local138 = param4;
    local139 = param2;
    local140 = param5;
    local141 = param6;
    local142 = esp_1;
    local143 = param8;
    local144 = local6;
    local145 = local26;
    local146 = local46;
    local147 = local66;
    local148 = param1;
    local149 = param3;
    local150 = param4;
    if (caml_globals[0] != 0) {
        local86 = 0;
        local136 = local86;
        do {
            param2 = local129;
            param5 = local130;
            esp_26 = local131;
            local17 = local132;
            local37 = local133;
            local57 = local134;
            local77 = local135;
            local95 = local136;
            param3 = local137;
            param4 = local138;
            esi = edi - 4;
            edx_6 = *(edi - 4);
            edx_9 = (unsigned int)edx_6 >> 10;
            eax = 0;
            ebx = 0;
            flags = LOGICALFLAGS32((unsigned int)edx_6 >> 10);
            local106 = param2;
            local107 = param5;
            local108 = edx_9;
            local109 = ebx;
            local110 = esp_26;
            local111 = local17;
            local112 = local37;
            local113 = local57;
            local114 = local77;
            local115 = local95;
            local116 = param3;
            local117 = param4;
            local118 = param2;
            local119 = param5;
            local120 = ebx;
            local121 = esp_26;
            local122 = local17;
            local123 = local37;
            local124 = local57;
            local125 = local77;
            local126 = local95;
            local127 = param3;
            local128 = param4;
            if ((unsigned int)edx_6 >> 10 != 0) {
                do {
                    al = local106;
                    ecx = local107;
                    edx = local108;
                    ebx = local109;
                    esp_20 = local110;
                    local15 = local111;
                    local35 = local112;
                    local55 = local113;
                    local75 = local114;
                    local93 = local115;
                    cl = local116;
                    dl = local117;
                    *(unsigned int*)(esp_20 + 4) = edi + eax * 4;
                    eax = *(edi + eax * 4);
                    *(__size32*)esp_20 = eax;
                    (**(ebp + 8))(al, eax, ecx, edx, ebx, ebp, esi, edi, flags, ZF, CF, local15, local35, local55, local75, local93, cl, dl);
                    local106 = al;
                    local107 = ecx;
                    local110 = esp_17;
                    local111 = local18;
                    local112 = local38;
                    local113 = local58;
                    local114 = local78;
                    local115 = local96;
                    local116 = cl;
                    local117 = dl;
                    local118 = al;
                    local119 = ecx;
                    local121 = esp_17;
                    local122 = local18;
                    local123 = local38;
                    local124 = local58;
                    local125 = local78;
                    local126 = local96;
                    local127 = cl;
                    local128 = dl;
                    ebx_9 = ebx_6 + 1;
                    eax = ebx_6 + 1;
                    edx_11 = *esi;
                    edx_14 = (unsigned int)edx_11 >> 10;
                    flags = SUBFLAGS32(ebx_6 + 1, (unsigned int)edx_11 >> 10, ebx_6 - ((unsigned int)edx_11 >> 10) + 1);
                    local108 = edx_14;
                    local109 = ebx_9;
                    local120 = ebx_9;
                } while (ebx_6 + 1 < (unsigned int)((unsigned int)edx_11 >> 10));
            }
            al = local118;
            ecx = local119;
            ebx = local120;
            esp_23 = local121;
            local14 = local122;
            local34 = local123;
            local54 = local124;
            local74 = local125;
            local92 = local126;
            cl = local127;
            dl = local128;
            *(__size32*)(ebp - 28)++;
            eax = *(ebp - 28);
            edi = caml_globals[eax];
            local129 = al;
            local130 = ecx;
            local131 = esp_23;
            local132 = local14;
            local133 = local34;
            local134 = local54;
            local135 = local74;
            local136 = local92;
            local137 = cl;
            local138 = dl;
            local139 = al;
            local140 = ecx;
            local141 = ebx;
            local142 = esp_23;
            local143 = esi;
            local144 = local14;
            local145 = local34;
            local146 = local54;
            local147 = local74;
            local148 = local92;
            local149 = cl;
            local150 = dl;
        } while (caml_globals[eax] == 0);
    }
    param2 = local139;
    param5 = local140;
    param6 = local141;
    esp_29 = local142;
    param8 = local143;
    local13 = local144;
    local33 = local145;
    local53 = local146;
    local73 = local147;
    local91 = local148;
    param3 = local149;
    param4 = local150;
    eax = *(&caml_globals + 0x9418);
    *(__size32*)(ebp - 28) = eax;
    local151 = param2;
    local152 = param5;
    local153 = param6;
    local154 = esp_29;
    local155 = local13;
    local156 = local33;
    local157 = local53;
    local158 = local73;
    local159 = local91;
    local160 = param3;
    local161 = param4;
    local177 = param5;
    local178 = param6;
    local179 = esp_29;
    local180 = param8;
    local181 = local13;
    local182 = local33;
    local183 = local53;
    local184 = local73;
    local185 = local91;
    local186 = param3;
    local187 = param4;
    if (eax != 0) {
        do {
            al = local151;
            ecx = local152;
            ebx = local153;
            esp_36 = local154;
            local10 = local155;
            local30 = local156;
            local50 = local157;
            local70 = local158;
            local88 = local159;
            cl = local160;
            dl = local161;
            edx = *(ebp - 28);
            edi = *edx;
            esi = edi - 4;
            eax = *(edi - 4);
            flags = LOGICALFLAGS32((unsigned int)eax >> 10);
            local162 = edx;
            local164 = esp_36;
            local165 = local10;
            local166 = local30;
            local167 = local50;
            local168 = local70;
            local169 = local88;
            local170 = ebx;
            local171 = esp_36;
            local172 = local10;
            local173 = local30;
            local174 = local50;
            local175 = local70;
            local176 = local88;
            if ((unsigned int)eax >> 10 != 0) {
                eax = 0;
                ebx = 0;
                local163 = ebx;
                do {
                    edx = local162;
                    ebx = local163;
                    esp_30 = local164;
                    local9 = local165;
                    local29 = local166;
                    local49 = local167;
                    local69 = local168;
                    local87 = local169;
                    *(unsigned int*)(esp_30 + 4) = edi + eax * 4;
                    eax = *(edi + eax * 4);
                    *(__size32*)esp_30 = eax;
                    (**(ebp + 8))(al, eax, ecx, edx, ebx, ebp, esi, edi, flags, ZF, CF, local9, local29, local49, local69, local87, cl, dl);
                    local164 = esp_4;
                    local165 = local11;
                    local166 = local31;
                    local167 = local51;
                    local168 = local71;
                    local169 = local89;
                    local171 = esp_4;
                    local172 = local11;
                    local173 = local31;
                    local174 = local51;
                    local175 = local71;
                    local176 = local89;
                    ebx_4 = ebx_1 + 1;
                    eax = ebx_1 + 1;
                    edx_1 = *esi;
                    edx_4 = (unsigned int)edx_1 >> 10;
                    flags = SUBFLAGS32((unsigned int)edx_1 >> 10, ebx_1 + 1, ((unsigned int)edx_1 >> 10) - ebx_1 - 1);
                    local162 = edx_4;
                    local163 = ebx_4;
                    local170 = ebx_4;
                } while ((unsigned int)((unsigned int)edx_1 >> 10) > ebx_1 + 1);
            }
            ebx = local170;
            esp_33 = local171;
            local16 = local172;
            local36 = local173;
            local56 = local174;
            local76 = local175;
            local94 = local176;
            eax = *(ebp - 28);
            eax = *(eax + 4);
            *(__size32*)(ebp - 28) = eax;
            local151 = al;
            local152 = ecx;
            local153 = ebx;
            local154 = esp_33;
            local155 = local16;
            local156 = local36;
            local157 = local56;
            local158 = local76;
            local159 = local94;
            local160 = cl;
            local161 = dl;
            local177 = ecx;
            local178 = ebx;
            local179 = esp_33;
            local180 = esi;
            local181 = local16;
            local182 = local36;
            local183 = local56;
            local184 = local76;
            local185 = local94;
            local186 = cl;
            local187 = dl;
        } while (eax != 0);
    }
    ecx = local177;
    ebx = local178;
    esp_39 = local179;
    esi = local180;
    *(__size32*)(esp_45 - 4) = local181;
    *(__size32*)(esp_45 - 8) = local182;
    *(unsigned int*)(esp_45 - 12) = local183;
    *(unsigned int*)(esp_45 - 16) = local184;
    *(__size32*)(esp_45 - 32) = local185;
    cl = local186;
    dl = local187;
    local188 = esp_39;
    if (*0x807b9fc == 0) {
        cl = caml_init_frame_descriptors(); /* Warning: also results in dl, ecx, ebx, esp_7, ebp, esi, edi */
        local188 = esp_7;
    }
    esp_42 = local188;
    eax = *(&caml_globals + 0x9400);
    *(__size32*)(esp_42 + 16) = eax;
    eax = *(&caml_globals + 0x10014);
    *(__size32*)(esp_42 + 12) = eax;
    eax = *(&caml_globals + 0x9138);
    *(__size32*)(esp_42 + 8) = eax;
    eax = *(&caml_globals + 0x940c);
    *(__size32*)(esp_42 + 4) = eax;
    edx = *(ebp + 8);
    *(unsigned int*)esp_42 = edx;
    al = caml_do_local_roots(*(esp_42 - 40), *(esp_42 - 36), *(esp_42 + 4), *(esp_42 + 8), *(esp_42 + 12), ecx, edx, ebx, ebp, esi, edi); /* Warning: also results in ecx, esp_8, ebp, edi */
    eax = *(ebp + 8);
    *(__size32*)esp_8 = eax;
    ebx = caml_scan_global_roots(*esp_8); /* Warning: also results in esp_11, ebp, esi */
    edx = *(ebp + 8);
    *(__size32*)esp_11 = edx;
    ebx = caml_final_do_strong_roots(*esp_11, edx, ebx, ebp, esi, edi); /* Warning: also results in esp_14, ebp, esi, edi */
    local189 = esp_14;
    eax = *(&caml_globals + 0x9404);
    if (eax != 0) {
        edx = *(ebp + 8);
        *(__size32*)esp_14 = edx;
        (*eax)(al, eax, ecx, edx, ebx, ebp, esi, edi, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), *(esp_45 - 4), *(esp_45 - 8), *(esp_45 - 12), *(esp_45 - 16), *(esp_45 - 32), cl, dl);
        local189 = esp;
    }
    esp = local189;
    ebp = *(esp + 72);
    return ebp;
}

/** address: 0x0806de0b */
void add_string(__size32 param1)
{
    __size32 ecx; 		// r25
    __size32 edi; 		// r31

    edi = param1;
    ecx = -1;
bb0x806de29:
    tmpb = 0 - *edi;
    edi +=  (DF == 0) ? 1 : -1;
    ecx--;
    if (tmpb != 0) {
        goto bb0x806de29;
    }
}

/** address: 0x0806ddf8 */
void add_char(__size8 param1, union { __size32; __size32 *; } param2)
{
    union { unsigned int; __size8 *; } ecx; 		// r25

    ecx = *param2;
    if (ecx < *(param2 + 4)) {
        *(__size8*)ecx = param1;
        *(__size32*)param2 = ecx + 1;
    }
    return;
}

/** address: 0x0806e0b0 */
__size32 hash_value_name(union { __size32; unsigned char *; } param1)
{
    char dl; 		// r10
    union { unsigned char *; __size32; } eax; 		// r24
    union { unsigned char *; __size32; } eax_1; 		// r24{1}
    unsigned int ecx; 		// r25
    unsigned int edx; 		// r26
    union { __size32; unsigned char *; } local0; 		// eax_1{7}

    edx = *(unsigned char*)param1;
    dl = (unsigned char) edx;
    ecx = 0;
    local0 = param1;
    if ((unsigned char) edx != 0) {
        do {
            eax_1 = local0;
            ecx = (int) dl + ecx * 19;
            eax = eax_1 + 1;
            edx = *(unsigned char*)(eax_1 + 1);
            dl = (unsigned char) edx;
            local0 = eax;
        } while ((unsigned char) edx != 0);
    }
    return ecx - ((unsigned long long)((ecx) * 0x4ec4ec4f >> 32) >> 2) * 13;
}

/** address: 0x0806fdc4 */
__size8 extract_location_info(unsigned char param1, unsigned int param2, int param3, union { __size32; __size32 *; } param4)
{
    unsigned char al; 		// r8
    union { int; int *; } ebx; 		// r27
    unsigned int ecx; 		// r25
    int ecx_1; 		// r25{13}
    int edi; 		// r31
    unsigned char local0; 		// param1{22}
    int local1; 		// param3{23}

    tmpb = *(param2 + 4) & 0x1;
    local0 = param1;
    local1 = param3;
    if (tmpb != 0) {
        ecx = *(unsigned short*)(param2 + 6);
        ebx = param2 + ecx * 2 + 11 & ~0x3;
        edi = *ebx;
        ecx_1 = *(ebx + 4);
        *(__size32*)param4 = 1;
        al =  ((edi & 0x3) != 0) ? 1 : 0;
        *(int*)(param4 + 4) = (param2 & ~0xff | (al)) & 0xff;
        *(__size32*)(param4 + 8) = (edi & 0x3fffffc) + ebx;
        *(int*)(param4 + 12) = (unsigned int)ecx_1 >> 12;
        *(int*)(param4 + 16) = (unsigned int)ecx_1 >> 4 & 0xff;
        ecx = (ecx_1 & 0xf) << 6;
        *(unsigned int*)(param4 + 20) = (unsigned int)edi >> 26 | (ecx_1 & 0xf) << 6;
        local0 = al;
        local1 = ecx;
    }
    else {
        *(__size32*)param4 = 0;
        *(__size32*)(param4 + 4) = 1;
    }
    param1 = local0;
    param3 = local1;
    return param1; /* WARNING: Also returning: ecx := param3 */
}

/** address: 0x08061d72 */
__size32 cons()
{
    union { __size32; __size32 *; } ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 esi; 		// r30

    ebx = caml_stat_alloc(8); /* Warning: also results in ebp, esi */
    *(__size32*)eax = ebx;
    *(__size32*)(eax + 4) = esi;
    ebx = *(ebp - 8);
    esi = *(ebp - 4);
    return ebx; /* WARNING: Also returning: esi := esi */
}

/** address: 0x08062eb0 */
__size32 allocate_block(union { __size32 *; __size32; } param1, unsigned int param2, union { __size32; __size32 *; } param3)
{
    int ebx; 		// r27
    __size32 edi; 		// r31

    ebx = *(param1 - 4);
    if ((unsigned int)((unsigned int)ebx >> 10) < param2 + 1) {
        caml_fl_cur_size +=  ~((unsigned int)ebx >> 10);
        edi = *param1;
        *(__size32*)param3 = edi;
    }
    caml_fl_cur_size -= param2;
    *(__size32*)(param1 - 4) = (((unsigned int)ebx >> 10) - param2 << 10) + 512;
    if (*0x807db84 == 0) {
        fl_prev = param3;
    }
    return param1 + (((unsigned int)ebx >> 10) - param2) * 4;
}

/** address: 0x08062f9b */
void truncate_flp(unsigned int param1)
{
    int edx; 		// r26

    if (param1 == 0x807b748) {
        flp_size = 0;
        beyond = 0;
    }
    else {
        if (flp_size > 0) {
            edx = flp_size - 1;
            if (param1 <= *global_0x0807db9c[(flp_size - 1)]) {
                while (edx > 0) {
                    if (param1 > *global_0x0807db9c[(edx - 1)]) {
                        flp_size = edx;
                        goto bb0x8062ffa;
                    }
                    edx--;
                }
                flp_size = edx;
            }
        }
bb0x8062ffa:
        if (param1 <= beyond) {
            beyond = 0;
        }
    }
    return;
}

/** address: 0x08061c20 */
__size8 caml_do_local_roots(__size32 param1, __size32 param2, __size32 param3, unsigned int param4, __size32 param5, __size32 param6, unsigned int param7, unsigned int param8, __size32 param9, unsigned int param10, unsigned int param11)
{
    char al; 		// r8
    __size32 eax; 		// r24
    int eax_1; 		// r24{69}
    __size32 eax_12; 		// r24{148}
    int eax_2; 		// r24{70}
    unsigned int eax_4; 		// r24{88}
    __size32 eax_7; 		// r24{94}
    union { __size32; __size32 *; } eax_9; 		// r24{146}
    __size32 ebp; 		// r29
    unsigned int ebx; 		// r27
    __size32 ebx_1; 		// r27{151}
    unsigned int ebx_4; 		// r27{152}
    __size32 ecx; 		// r25
    unsigned int edi; 		// r31
    unsigned int edi_1; 		// r31{162}
    unsigned int edi_2; 		// r31{174}
    unsigned int edx; 		// r26
    unsigned int esi; 		// r30
    unsigned int esi_1; 		// r30{105}
    unsigned int esi_4; 		// r30{106}
    __size32 esp; 		// r28
    __size32 esp_1; 		// r28{20}
    union { __size32; __size32 *; } esp_10; 		// r28{84}
    __size32 esp_13; 		// r28{112}
    __size32 esp_16; 		// r28{51}
    __size32 esp_19; 		// r28{33}
    union { __size32; __size32 *; } esp_22; 		// r28{142}
    __size32 esp_25; 		// r28{159}
    __size32 esp_28; 		// r28{180}
    __size32 esp_31; 		// r28{203}
    __size32 esp_32; 		// r28{224}
    __size32 esp_35; 		// r28{1}
    __size32 esp_4; 		// r28{105}
    __size32 esp_7; 		// r28{151}
    __size32 local0; 		// m[esp - 4]
    unsigned int local1; 		// m[esp - 8]
    unsigned int local102; 		// m[esp_35 - 8]{0}
    unsigned int local103; 		// m[esp_35 - 8]{56}
    int local104; 		// m[esp_35 - 8]{105}
    unsigned int local106; 		// m[esp_35 - 8]{0}
    int local107; 		// m[esp_35 - 8]{151}
    unsigned int local109; 		// m[esp_35 - 8]{230}
    unsigned int local110; 		// m[esp_35 - 8]{166}
    unsigned int local111; 		// m[esp_35 - 8]{38}
    unsigned int local112; 		// m[esp_35 - 8]{209}
    unsigned int local113; 		// m[esp_35 - 8]{117}
    __size32 local12; 		// m[esp_35 + 8]{61}
    unsigned int local126; 		// m[esp_35 - 12]{18}
    unsigned int local129; 		// m[esp_35 - 12]{0}
    int local13; 		// m[esp_35 + 8]{151}
    unsigned int local130; 		// m[esp_35 - 12]{57}
    int local131; 		// m[esp_35 - 12]{105}
    unsigned int local133; 		// m[esp_35 - 12]{0}
    int local134; 		// m[esp_35 - 12]{151}
    unsigned int local138; 		// m[esp_35 - 12]{231}
    unsigned int local139; 		// m[esp_35 - 12]{39}
    unsigned int local140; 		// m[esp_35 - 12]{210}
    unsigned int local141; 		// m[esp_35 - 12]{188}
    unsigned int local142; 		// m[esp_35 - 12]{167}
    unsigned int local148; 		// m[esp_35 - 12]{118}
    unsigned int local152; 		// m[esp_35 - 16]{19}
    unsigned int local155; 		// m[esp_35 - 16]{0}
    unsigned int local156; 		// m[esp_35 - 16]{58}
    int local157; 		// m[esp_35 - 16]{105}
    unsigned int local159; 		// m[esp_35 - 16]{0}
    int local160; 		// m[esp_35 - 16]{151}
    unsigned int local164; 		// m[esp_35 - 16]{232}
    unsigned int local165; 		// m[esp_35 - 16]{119}
    unsigned int local169; 		// m[esp_35 - 16]{168}
    unsigned int local170; 		// m[esp_35 - 16]{211}
    unsigned int local171; 		// m[esp_35 - 16]{189}
    __size32 local178; 		// m[esp_35 - 32]{26}
    __size32 local181; 		// m[esp_35 - 32]{0}
    __size32 local182; 		// m[esp_35 - 32]{59}
    int local183; 		// m[esp_35 - 32]{105}
    __size32 local185; 		// m[esp_35 - 32]{0}
    int local186; 		// m[esp_35 - 32]{151}
    __size32 local188; 		// m[esp_35 - 32]{233}
    __size32 local189; 		// m[esp_35 - 32]{169}
    __size32 local19; 		// m[esp_35 + 8]{122}
    __size32 local190; 		// m[esp_35 - 32]{212}
    __size32 local191; 		// m[esp_35 - 32]{190}
    __size32 local192; 		// m[esp_35 - 32]{120}
    unsigned int local2; 		// m[esp - 12]
    __size32 local20; 		// m[esp_35 + 8]{235}
    __size32 local207; 		// m[esp_35 - 36]{24}
    __size32 local21; 		// m[esp_35 + 8]{171}
    __size32 local210; 		// m[esp_35 - 36]{0}
    __size32 local211; 		// m[esp_35 - 36]{60}
    int local212; 		// m[esp_35 - 36]{105}
    __size32 local214; 		// m[esp_35 - 36]{0}
    int local215; 		// m[esp_35 - 36]{151}
    __size32 local217; 		// m[esp_35 - 36]{234}
    __size32 local218; 		// m[esp_35 - 36]{170}
    __size32 local219; 		// m[esp_35 - 36]{213}
    __size32 local22; 		// m[esp_35 + 8]{43}
    __size32 local220; 		// m[esp_35 - 36]{191}
    __size32 local221; 		// m[esp_35 - 36]{121}
    __size32 local23; 		// m[esp_35 + 8]{214}
    int local236; 		// tmpb{54}
    int local237; 		// tmpb{105}
    int local240; 		// tmpb{115}
    int local242; 		// tmpb{227}
    int local243; 		// tmpb{163}
    int local244; 		// tmpb{35}
    int local245; 		// tmpb{206}
    int local246; 		// tmpb{184}
    int local252; 		// tmpb{151}
    int local272; 		// tmpb{11}
    __size16 local274; 		// tmph{74}
    __size16 local275; 		// tmph{228}
    __size16 local276; 		// tmph{164}
    __size16 local277; 		// tmph{36}
    __size16 local278; 		// tmph{207}
    __size16 local279; 		// tmph{185}
    int local286; 		// tmph{151}
    unsigned int local3; 		// m[esp - 16]
    int local30; 		// m[esp_35 + 12]{105}
    __size16 local305; 		// tmph{12}
    __size32 local308; 		// param6{30}
    unsigned int local309; 		// param7{31}
    unsigned int local310; 		// param8{32}
    __size32 local311; 		// esp_19{33}
    int local312; 		// local244{35}
    __size16 local313; 		// local277{36}
    __size32 local314; 		// m[esp_35 - 4]{37}
    unsigned int local315; 		// local111{38}
    unsigned int local316; 		// local139{39}
    unsigned int local317; 		// m[esp_35 - 16]{40}
    __size32 local318; 		// param2{41}
    __size32 local319; 		// param1{42}
    __size32 local320; 		// esp_16{51}
    unsigned int local321; 		// param11{53}
    int local322; 		// local236{54}
    __size32 local323; 		// local76{55}
    unsigned int local324; 		// local103{56}
    unsigned int local325; 		// local130{57}
    unsigned int local326; 		// local156{58}
    __size32 local327; 		// local182{59}
    __size32 local328; 		// local211{60}
    __size32 local329; 		// local12{61}
    unsigned int local33; 		// m[esp_35 + 12]{62}
    unsigned int local330; 		// local33{62}
    __size32 local331; 		// local54{63}
    int local332; 		// eax_1{69}
    union { __size32 *; __size32; } local333; 		// esp_10{84}
    unsigned int local334; 		// esi{86}
    union { __size32 *; unsigned int; } local335; 		// eax{96}
    __size32 local336; 		// esp_13{112}
    unsigned int local337; 		// edi{114}
    int local338; 		// local240{115}
    __size32 local339; 		// local88{116}
    int local34; 		// m[esp_35 + 12]{151}
    unsigned int local340; 		// local113{117}
    unsigned int local341; 		// local148{118}
    unsigned int local342; 		// local165{119}
    __size32 local343; 		// local192{120}
    __size32 local344; 		// local221{121}
    __size32 local345; 		// local19{122}
    unsigned int local346; 		// local38{123}
    __size32 local347; 		// local64{124}
    unsigned int local348; 		// ebx{141}
    union { __size32 *; __size32; } local349; 		// esp_22{142}
    unsigned int local350; 		// ebx{158}
    __size32 local351; 		// esp_25{159}
    int local352; 		// local243{163}
    __size16 local353; 		// local276{164}
    __size32 local354; 		// local85{165}
    unsigned int local355; 		// local110{166}
    unsigned int local356; 		// local142{167}
    unsigned int local357; 		// local169{168}
    __size32 local358; 		// local189{169}
    __size32 local359; 		// local218{170}
    __size32 local360; 		// local21{171}
    unsigned int local361; 		// local39{172}
    __size32 local362; 		// local60{173}
    __size32 local363; 		// esp_28{180}
    unsigned int local364; 		// edi{183}
    int local365; 		// local246{184}
    __size16 local366; 		// local279{185}
    __size32 local367; 		// local87{186}
    unsigned int local368; 		// m[esp_35 - 8]{187}
    unsigned int local369; 		// local141{188}
    unsigned int local370; 		// local171{189}
    __size32 local371; 		// local191{190}
    __size32 local372; 		// local220{191}
    __size32 local373; 		// m[esp_35 + 8]{192}
    unsigned int local374; 		// local42{193}
    __size32 local375; 		// local63{194}
    __size32 local376; 		// esp_31{203}
    int local377; 		// local245{206}
    __size16 local378; 		// local278{207}
    __size32 local379; 		// local86{208}
    unsigned int local38; 		// m[esp_35 + 12]{123}
    unsigned int local380; 		// local112{209}
    unsigned int local381; 		// local140{210}
    unsigned int local382; 		// local170{211}
    __size32 local383; 		// local190{212}
    __size32 local384; 		// local219{213}
    __size32 local385; 		// local23{214}
    unsigned int local386; 		// local41{215}
    __size32 local387; 		// local62{216}
    __size32 local388; 		// ecx{221}
    unsigned int local389; 		// edx{222}
    unsigned int local39; 		// m[esp_35 + 12]{172}
    unsigned int local390; 		// ebx{223}
    __size32 local391; 		// esp_32{224}
    int local392; 		// local242{227}
    __size16 local393; 		// local275{228}
    __size32 local394; 		// local84{229}
    unsigned int local395; 		// local109{230}
    unsigned int local396; 		// local138{231}
    unsigned int local397; 		// local164{232}
    __size32 local398; 		// local188{233}
    __size32 local399; 		// local217{234}
    __size32 local4; 		// m[esp - 36]
    unsigned int local40; 		// m[esp_35 + 12]{44}
    __size32 local400; 		// local20{235}
    unsigned int local401; 		// local43{236}
    __size32 local402; 		// local59{237}
    __size32 local403; 		// ecx{242}
    __size32 local404; 		// esp{243}
    unsigned int local41; 		// m[esp_35 + 12]{215}
    unsigned int local42; 		// m[esp_35 + 12]{193}
    unsigned int local43; 		// m[esp_35 + 12]{236}
    __size32 local5; 		// m[esp - 32]
    int local51; 		// m[esp_35 + 16]{105}
    __size32 local54; 		// m[esp_35 + 16]{63}
    int local55; 		// m[esp_35 + 16]{151}
    __size32 local59; 		// m[esp_35 + 16]{237}
    __size32 local60; 		// m[esp_35 + 16]{173}
    __size32 local61; 		// m[esp_35 + 16]{45}
    __size32 local62; 		// m[esp_35 + 16]{216}
    __size32 local63; 		// m[esp_35 + 16]{194}
    __size32 local64; 		// m[esp_35 + 16]{124}
    __size32 local72; 		// m[esp_35 - 4]{15}
    __size32 local75; 		// m[esp_35 - 4]{0}
    __size32 local76; 		// m[esp_35 - 4]{55}
    int local77; 		// m[esp_35 - 4]{105}
    __size32 local79; 		// m[esp_35 - 4]{0}
    int local80; 		// m[esp_35 - 4]{151}
    __size32 local84; 		// m[esp_35 - 4]{229}
    __size32 local85; 		// m[esp_35 - 4]{165}
    __size32 local86; 		// m[esp_35 - 4]{208}
    __size32 local87; 		// m[esp_35 - 4]{186}
    __size32 local88; 		// m[esp_35 - 4]{116}
    int local9; 		// m[esp_35 + 8]{105}
    unsigned int local99; 		// m[esp_35 - 8]{17}

    local0 = param9;
    ebp = esp_35 - 4;
    local1 = param11;
    local2 = param10;
    local3 = param8;
    esp_1 = (esp_35 - 60);
    eax = param3;
    al = (unsigned char) param3;
    local308 = param6;
    local309 = param7;
    local310 = param8;
    local311 = esp_1;
    local312 = local272;
    local313 = local305;
    local314 = local72;
    local315 = local99;
    local316 = local126;
    local317 = local152;
    local318 = param2;
    local319 = param1;
    local320 = esp_1;
    local321 = param11;
    local322 = local272;
    local323 = local72;
    local324 = local99;
    local325 = local126;
    local326 = local152;
    local329 = param3;
    local330 = param4;
    local331 = param5;
    if (param3 != 0) {
        local4 = param5;
        edx = param4;
        local5 = param3;
        local327 = local178;
        local328 = local207;
        do {
bb0x8061c57:
            esp_16 = local320;
            param11 = local321;
            local236 = local322;
            local76 = local323;
            local103 = local324;
            local130 = local325;
            local156 = local326;
            local182 = local327;
            local211 = local328;
            local12 = local329;
            local33 = local330;
            local54 = local331;
            esi = *(global_0x0807db9c + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local308 = ecx;
            local311 = esp_16;
            local312 = local236;
            local314 = local76;
            local315 = local103;
            local316 = local130;
            local317 = local156;
            local318 = local182;
            local319 = local211;
            local320 = esp_16;
            local321 = param11;
            local322 = local236;
            local323 = local76;
            local324 = local103;
            local325 = local130;
            local326 = local156;
            local327 = local182;
            local328 = local211;
            local329 = local12;
            local330 = local33;
            local331 = local54;
            local332 = eax;
            local333 = esp_16;
            local336 = esp_16;
            local337 = param11;
            local338 = local236;
            local339 = local76;
            local340 = local103;
            local341 = local130;
            local342 = local156;
            local343 = local182;
            local344 = local211;
            local345 = local12;
            local346 = local33;
            local347 = local54;
            if (*ebx != edx) {
                do {
                    eax_1 = local332;
                    eax_2 = eax_1 + 1 & esi;
                    ebx = *(caml_frame_descriptors + (eax_1 + 1 & esi) * 4);
                    local332 = eax_2;
                } while (*ebx != edx);
            }
            local274 = *(ebx + 4) + 1;
            local310 = ebx;
            local313 = local274;
            if (*(ebx + 4) != -1) {
                esi = *(unsigned short*)(ebx + 6);
                local334 = esi;
                if ((int)esi > 0) {
                    edi = ebx + 8;
                    *(__size32*)(ebp - 36) = ebx;
                    ebx = *(ebp + 8);
                    for(;;) {
                        esp_10 = local333;
                        esi = local334;
                        eax_4 = *(unsigned short*)edi;
                        if (((unsigned char) eax_4 & 0x1) == 0) {
                            eax_7 = eax_4 + *(ebp - 28);
                            flags = ADDFLAGS32(eax_4, *(ebp - 28), eax_7);
                            local335 = eax_7;
                        }
                        else {
                            flags = SARFLAGS((int)eax_4 >> 1, eax_4, 1);
                            edx = *(ebp - 32);
                            eax = edx + ((int)eax_4 >> 1) * 4;
                            local335 = eax;
                        }
                        eax = local335;
                        *(__size32*)(esp_10 + 4) = eax;
                        eax = *eax;
                        *(__size32*)esp_10 = eax;
                        (*ebx)((unsigned char) eax, eax, ecx, edx, ebx, ebp, esi, edi, flags, ZF, CF, param3, param4, param5, local75, local102, local129, local155, local181, local210);
                        local333 = esp_4;
                        local336 = esp_4;
                        local337 = edi;
                        local338 = local237;
                        local339 = local77;
                        local340 = local104;
                        local341 = local131;
                        local342 = local157;
                        local343 = local183;
                        local344 = local212;
                        local345 = local9;
                        local346 = local30;
                        local347 = local51;
                        esi_4 = esi_1 - 1;
                        local334 = esi_4;
                        if ((int)esi_1 <= 1) {
                            break;
                        }
                        edi += 2;
                    }
                    ebx = *(ebp - 36);
                }
                esp_13 = local336;
                edi = local337;
                local240 = local338;
                local88 = local339;
                local113 = local340;
                local148 = local341;
                local165 = local342;
                local192 = local343;
                local221 = local344;
                local19 = local345;
                local38 = local346;
                local64 = local347;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local320 = esp_13;
                local321 = edi;
                local322 = local240;
                local323 = local88;
                local324 = local113;
                local325 = local148;
                local326 = local165;
                local327 = local192;
                local328 = local221;
                local329 = local19;
                local330 = local38;
                local331 = local64;
                goto bb0x8061c57;
            }
            eax = *(ebp - 28);
            edx = *(eax + 8);
            *(__size32*)(ebp - 28) = edx;
            edx = *(eax + 12);
            eax = *(eax + 16);
            al = (unsigned char) eax;
            *(__size32*)(ebp - 32) = eax;
            local309 = edx;
        } while (*(ebp - 28) != 0);
    }
    param6 = local308;
    param7 = local309;
    param8 = local310;
    esp_19 = local311;
    local244 = local312;
    local277 = local313;
    *(__size32*)(esp_35 - 4) = local314;
    local111 = local315;
    local139 = local316;
    *(unsigned int*)(esp_35 - 16) = local317;
    param2 = local318;
    param1 = local319;
    local388 = param6;
    local389 = param7;
    local390 = param8;
    local391 = esp_19;
    local392 = local244;
    local393 = local277;
    local394 = *(esp_35 - 4);
    local395 = local111;
    local396 = local139;
    local397 = *(esp_35 - 16);
    local398 = param2;
    local399 = param1;
    local400 = local22;
    local401 = local40;
    local402 = local61;
    local403 = param6;
    local404 = esp_19;
    if (*(ebp + 24) != 0) {
        esi = *(ebp + 24);
        *(__size32*)(ebp - 28) = 0;
        do {
            ecx = local388;
            edx = local389;
            ebx = local390;
            esp_32 = local391;
            local242 = local392;
            local275 = local393;
            local84 = local394;
            local109 = local395;
            local138 = local396;
            local164 = local397;
            local188 = local398;
            local217 = local399;
            local20 = local400;
            local43 = local401;
            local59 = local402;
            edi = 0;
            local363 = esp_32;
            local364 = edi;
            local365 = local242;
            local366 = local275;
            local367 = local84;
            local368 = local109;
            local369 = local138;
            local370 = local164;
            local371 = local188;
            local372 = local217;
            local373 = local20;
            local374 = local43;
            local375 = local59;
            local376 = esp_32;
            local377 = local242;
            local378 = local275;
            local379 = local84;
            local380 = local109;
            local381 = local138;
            local382 = local164;
            local383 = local188;
            local384 = local217;
            local385 = local20;
            local386 = local43;
            local387 = local59;
            if (*(esi + 4) > 0) {
                do {
                    esp_28 = local363;
                    edi = local364;
                    local246 = local365;
                    local279 = local366;
                    local87 = local367;
                    *(unsigned int*)(esp_35 - 8) = local368;
                    local141 = local369;
                    local171 = local370;
                    local191 = local371;
                    local220 = local372;
                    *(__size32*)(esp_35 + 8) = local373;
                    local42 = local374;
                    local63 = local375;
                    ebx = *(ebp - 28);
                    local348 = ebx;
                    local349 = esp_28;
                    local350 = ebx;
                    local351 = esp_28;
                    local352 = local246;
                    local353 = local279;
                    local354 = local87;
                    local355 = *(esp_35 - 8);
                    local356 = local141;
                    local357 = local171;
                    local358 = local191;
                    local359 = local220;
                    local360 = *(esp_35 + 8);
                    local361 = local42;
                    local362 = local63;
                    if (*(esi + 8) > 0) {
                        do {
                            ebx = local348;
                            esp_22 = local349;
                            eax_9 = ebx * 4 + *(esi + edi * 4 + 12);
                            *(__size32*)(esp_22 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_22 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, eax_12, ecx, edx, ebx, ebp, esi, edi, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), param3, param4, param5, local79, local106, local133, local159, local185, local214);
                            local349 = esp_7;
                            local351 = esp_7;
                            local352 = local252;
                            local353 = local286;
                            local354 = local80;
                            local355 = local107;
                            local356 = local134;
                            local357 = local160;
                            local358 = local186;
                            local359 = local215;
                            local360 = local13;
                            local361 = local34;
                            local362 = local55;
                            ebx_4 = ebx_1 + 1;
                            local348 = ebx_4;
                            local350 = ebx_4;
                        } while (*(esi + 8) > ebx_1 + 1);
                    }
                    ebx = local350;
                    esp_25 = local351;
                    edi_1 = edi;
                    local243 = local352;
                    local276 = local353;
                    local85 = local354;
                    local110 = local355;
                    local142 = local356;
                    local169 = local357;
                    local189 = local358;
                    local218 = local359;
                    local21 = local360;
                    local39 = local361;
                    local60 = local362;
                    edi_2 = edi_1 + 1;
                    local363 = esp_25;
                    local364 = edi_2;
                    local365 = local243;
                    local366 = local276;
                    local367 = local85;
                    local368 = local110;
                    local369 = local142;
                    local370 = local169;
                    local371 = local189;
                    local372 = local218;
                    local373 = local21;
                    local374 = local39;
                    local375 = local60;
                    local376 = esp_25;
                    local377 = local243;
                    local378 = local276;
                    local379 = local85;
                    local380 = local110;
                    local381 = local142;
                    local382 = local169;
                    local383 = local189;
                    local384 = local218;
                    local385 = local21;
                    local386 = local39;
                    local387 = local60;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_31 = local376;
            local245 = local377;
            local278 = local378;
            local86 = local379;
            local112 = local380;
            local140 = local381;
            local170 = local382;
            local190 = local383;
            local219 = local384;
            local23 = local385;
            local41 = local386;
            local62 = local387;
            esi = *esi;
            local388 = ecx;
            local389 = edx;
            local390 = ebx;
            local391 = esp_31;
            local392 = local245;
            local393 = local278;
            local394 = local86;
            local395 = local112;
            local396 = local140;
            local397 = local170;
            local398 = local190;
            local399 = local219;
            local400 = local23;
            local401 = local41;
            local402 = local62;
            local403 = ecx;
            local404 = esp_31;
        } while (esi == 0);
    }
    ecx = local403;
    esp = local404;
    edi = *(esp + 52);
    ebp = *(esp + 56);
    return al; /* WARNING: Also returning: ecx := ecx, ebp := ebp, edi := edi */
}

/** address: 0x0806232c */
__size32 caml_scan_global_roots(__size32 param1)
{
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 esi; 		// r30
    __size32 esp; 		// r28

    ebx = caml_iterate_global_roots(param1, 0x807ba20); /* Warning: also results in esp */
    ebx = caml_iterate_global_roots(ebx, 0x807ba80); /* Warning: also results in esp */
    esp = caml_iterate_global_roots(ebx, 0x807bae0); /* Warning: also results in esi */
    ebx = *(esp + 4);
    ebp = *(esp + 8);
    return ebx; /* WARNING: Also returning: ebp := ebp, esi := esi */
}

/** address: 0x0806f250 */
__size32 caml_final_do_strong_roots(__size32 param1, __size32 param2, __size32 param3, __size32 param4, unsigned int param5, __size32 param6)
{
    union { __size32; __size32 *; } eax; 		// r24
    union { __size32; __size32 *; } eax_1; 		// r24{24}
    union { __size32; __size32 *; } eax_2; 		// r24{24}
    union { __size32; __size32 *; } eax_3; 		// r24{24}
    __size32 eax_4; 		// r24{26}
    __size32 eax_5; 		// r24{26}
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    unsigned int esi; 		// r30
    __size32 esi_1; 		// r30{29}
    unsigned int esi_10; 		// r30{63}
    __size32 esi_2; 		// r30{29}
    __size32 esi_3; 		// r30{29}
    unsigned int esi_4; 		// r30{30}
    unsigned int esi_5; 		// r30{30}
    __size32 esi_6; 		// r30{62}
    __size32 esi_7; 		// r30{62}
    __size32 esi_8; 		// r30{62}
    unsigned int esi_9; 		// r30{63}
    __size32 esp; 		// r28
    __size32 esp_1; 		// r28{13}
    __size32 esp_10; 		// r28{62}
    __size32 esp_11; 		// r28{62}
    __size32 esp_12; 		// r28{62}
    union { __size32; __size32 *; } esp_13; 		// r28{20}
    union { __size32; __size32 *; } esp_14; 		// r28{20}
    union { __size32; __size32 *; } esp_15; 		// r28{20}
    __size32 esp_16; 		// r28{33}
    union { __size32; __size32 *; } esp_17; 		// r28{46}
    union { __size32; __size32 *; } esp_18; 		// r28{46}
    union { __size32; __size32 *; } esp_19; 		// r28{46}
    __size32 esp_2; 		// r28{13}
    __size32 esp_20; 		// r28{70}
    __size32 esp_21; 		// r28{83}
    __size32 esp_22; 		// r28{83}
    __size32 esp_23; 		// r28{83}
    __size32 esp_24; 		// r28{1}
    __size32 esp_25; 		// r28{1}
    __size32 esp_3; 		// r28{13}
    __size32 esp_4; 		// r28{29}
    __size32 esp_5; 		// r28{29}
    __size32 esp_6; 		// r28{29}
    union { __size32; __size32 *; } esp_7; 		// r28{57}
    union { __size32; __size32 *; } esp_8; 		// r28{57}
    union { __size32; __size32 *; } esp_9; 		// r28{57}
    __size32 local0; 		// m[esp - 4]
    __size32 local1; 		// m[esp - 8]
    int local10; 		// m[esp_24 + 4]{57}
    union { __size32 *; __size32; } local100; 		// esp_17{46}
    unsigned int local101; 		// esi{48}
    __size32 local102; 		// esp_20{70}
    __size32 local103; 		// m[esp_24 - 4]{73}
    __size32 local104; 		// local47{74}
    unsigned int local105; 		// local65{75}
    __size32 local106; 		// local85{76}
    __size32 local107; 		// local15{77}
    __size32 local108; 		// esp_21{83}
    __size32 local109; 		// edi{85}
    int local11; 		// m[esp_24 + 4]{62}
    __size32 local110; 		// local34{86}
    __size32 local111; 		// local48{87}
    unsigned int local112; 		// local66{88}
    __size32 local113; 		// local86{89}
    __size32 local114; 		// local16{90}
    __size32 local115; 		// esp{97}
    int local12; 		// m[esp_24 + 4]{62}
    __size32 local13; 		// m[esp_24 + 4]{6}
    __size32 local14; 		// m[esp_24 + 4]{6}
    __size32 local15; 		// m[esp_24 + 4]{77}
    __size32 local16; 		// m[esp_24 + 4]{90}
    __size32 local17; 		// m[esp_24 - 4]{8}
    __size32 local18; 		// m[esp_24 - 4]{8}
    __size32 local19; 		// m[esp_24 - 4]{8}
    unsigned int local2; 		// m[esp - 12]
    __size32 local20; 		// m[esp_24 - 4]{0}
    int local21; 		// m[esp_24 - 4]{29}
    int local22; 		// m[esp_24 - 4]{29}
    int local23; 		// m[esp_24 - 4]{57}
    int local24; 		// m[esp_24 - 4]{57}
    int local25; 		// m[esp_24 - 4]{57}
    __size32 local26; 		// m[esp_24 - 4]{0}
    int local27; 		// m[esp_24 - 4]{62}
    int local28; 		// m[esp_24 - 4]{62}
    __size32 local29; 		// m[esp_24 - 4]{0}
    __size32 local3; 		// m[esp - 16]
    __size32 local30; 		// m[esp_24 - 4]{0}
    __size32 local31; 		// m[esp_24 - 4]{0}
    __size32 local32; 		// m[esp_24 - 4]{0}
    __size32 local33; 		// m[esp_24 - 4]{36}
    __size32 local34; 		// m[esp_24 - 4]{86}
    __size32 local35; 		// m[esp_24 - 8]{10}
    __size32 local36; 		// m[esp_24 - 8]{10}
    __size32 local37; 		// m[esp_24 - 8]{10}
    __size32 local38; 		// m[esp_24 - 8]{0}
    int local39; 		// m[esp_24 - 8]{29}
    __size32 local4; 		// m[esp + 4]
    int local40; 		// m[esp_24 - 8]{29}
    int local41; 		// m[esp_24 - 8]{57}
    int local42; 		// m[esp_24 - 8]{57}
    int local43; 		// m[esp_24 - 8]{57}
    __size32 local44; 		// m[esp_24 - 8]{0}
    int local45; 		// m[esp_24 - 8]{62}
    int local46; 		// m[esp_24 - 8]{62}
    __size32 local47; 		// m[esp_24 - 8]{74}
    __size32 local48; 		// m[esp_24 - 8]{87}
    __size32 local49; 		// m[esp_24 - 8]{0}
    int local5; 		// m[esp_24 + 4]{29}
    __size32 local50; 		// m[esp_24 - 8]{0}
    __size32 local51; 		// m[esp_24 - 8]{0}
    __size32 local52; 		// m[esp_24 - 8]{0}
    unsigned int local53; 		// m[esp_24 - 12]{11}
    unsigned int local54; 		// m[esp_24 - 12]{11}
    unsigned int local55; 		// m[esp_24 - 12]{11}
    unsigned int local56; 		// m[esp_24 - 12]{0}
    int local57; 		// m[esp_24 - 12]{29}
    int local58; 		// m[esp_24 - 12]{29}
    int local59; 		// m[esp_24 - 12]{57}
    int local6; 		// m[esp_24 + 4]{29}
    int local60; 		// m[esp_24 - 12]{57}
    int local61; 		// m[esp_24 - 12]{57}
    unsigned int local62; 		// m[esp_24 - 12]{0}
    int local63; 		// m[esp_24 - 12]{62}
    int local64; 		// m[esp_24 - 12]{62}
    unsigned int local65; 		// m[esp_24 - 12]{75}
    unsigned int local66; 		// m[esp_24 - 12]{88}
    unsigned int local67; 		// m[esp_24 - 12]{0}
    unsigned int local68; 		// m[esp_24 - 12]{0}
    unsigned int local69; 		// m[esp_24 - 12]{0}
    int local7; 		// m[esp_24 + 4]{29}
    unsigned int local70; 		// m[esp_24 - 12]{0}
    __size32 local71; 		// m[esp_24 - 16]{12}
    __size32 local72; 		// m[esp_24 - 16]{12}
    __size32 local73; 		// m[esp_24 - 16]{12}
    __size32 local74; 		// m[esp_24 - 16]{0}
    int local75; 		// m[esp_24 - 16]{29}
    int local76; 		// m[esp_24 - 16]{29}
    int local77; 		// m[esp_24 - 16]{57}
    int local78; 		// m[esp_24 - 16]{57}
    int local79; 		// m[esp_24 - 16]{57}
    int local8; 		// m[esp_24 + 4]{57}
    __size32 local80; 		// m[esp_24 - 16]{0}
    int local81; 		// m[esp_24 - 16]{62}
    int local82; 		// m[esp_24 - 16]{62}
    __size32 local83; 		// m[esp_24 - 16]{0}
    __size32 local84; 		// m[esp_24 - 16]{0}
    __size32 local85; 		// m[esp_24 - 16]{76}
    __size32 local86; 		// m[esp_24 - 16]{89}
    __size32 local87; 		// m[esp_24 - 16]{0}
    __size32 local88; 		// m[esp_24 - 16]{0}
    int local89; 		// m[esp - 60]
    int local9; 		// m[esp_24 + 4]{57}
    __size32 local90; 		// param2{18}
    union { __size32 *; __size32; } local91; 		// esp_13{20}
    unsigned int local92; 		// esi{22}
    __size32 local93; 		// esp_16{33}
    __size32 local94; 		// param6{35}
    __size32 local95; 		// local33{36}
    __size32 local96; 		// m[esp_24 - 8]{37}
    unsigned int local97; 		// m[esp_24 - 12]{38}
    __size32 local98; 		// m[esp_24 - 16]{39}
    __size32 local99; 		// param1{40}

    local0 = param4;
    ebp = esp_24 - 4;
    local1 = param6;
    local2 = param5;
    local3 = param3;
    esp_1 = (esp_24 - 60);
    local90 = param2;
    local91 = esp_1;
    local93 = esp_1;
    local94 = param6;
    local95 = local17;
    local96 = local35;
    local97 = local53;
    local98 = local71;
    local99 = param1;
    if (*0x8082110 != 0) {
        ebx = 0;
        esi = 0;
        edi = param1;
        local92 = esi;
        do {
            param2 = local90;
            esp_13 = local91;
            esi = local92;
            eax_1 = ebx + *0x808210c;
            *(__size32*)(esp_13 + 4) = eax_1;
            eax_4 = *eax_1;
            *(__size32*)esp_13 = eax_4;
            (*edi)(eax_4, param2, ebx, ebp, esi, edi, ADDFLAGS32(ebx, *0x808210c, eax_1), ADDFLAGS32(ebx, *0x808210c, eax_1), ADDFLAGS32(ebx, *0x808210c, eax_1), param1, local20, local38, local56, local74);
            local90 = edx;
            local91 = esp_4;
            local93 = esp_4;
            local94 = edi;
            local95 = local21;
            local96 = local39;
            local97 = local57;
            local98 = local75;
            local99 = local5;
            esi_4 = esi_1 + 1;
            ebx += 12;
            local92 = esi_4;
        } while (*(global_0x0807db9c + 0x4574) > esi_1 + 1);
    }
    esp_16 = local93;
    param6 = local94;
    local33 = local95;
    *(__size32*)(esp_24 - 8) = local96;
    *(unsigned int*)(esp_24 - 12) = local97;
    *(__size32*)(esp_24 - 16) = local98;
    param1 = local99;
    eax = *(global_0x0807db9c + 0x4578);
    *(__size32*)(ebp - 28) = eax;
    local108 = esp_16;
    local109 = param6;
    local110 = local33;
    local111 = *(esp_24 - 8);
    local112 = *(esp_24 - 12);
    local113 = *(esp_24 - 16);
    local114 = param1;
    local115 = esp_16;
    if (eax != 0) {
        do {
            esp_21 = local108;
            edi = local109;
            local34 = local110;
            local48 = local111;
            local66 = local112;
            local86 = local113;
            local16 = local114;
            ebx = *(ebp - 28);
            esi = 0;
            tmp1 = *(ebx + 4);
            flags = SUBFLAGS32(*(ebx + 4), 0, tmp1);
            local100 = esp_21;
            local101 = esi;
            local102 = esp_21;
            local103 = local34;
            local104 = local48;
            local105 = local66;
            local106 = local86;
            local107 = local16;
            if (*(ebx + 4) != 0) {
                do {
                    esp_17 = local100;
                    esi = local101;
                    edx = *(ebp - 28);
                    *(__size32*)(esp_17 + 4) = edx + esi * 12 + 8;
                    eax = *(ebx + 8);
                    *(__size32*)esp_17 = eax;
                    (**(ebp + 8))(eax, edx, ebx, ebp, esi, edx + esi * 12, flags, ZF, CF, param1, local26, local44, local62, local80);
                    *(__size32*)(esp_7 + 4) = edi + 12;
                    eax = *(ebx + 12);
                    *(__size32*)esp_7 = eax;
                    (**(ebp + 8))(eax, edx, ebx, ebp, esi, edi + 12, <all>, ADDFLAGS32(edi, 12, edi + 12), ADDFLAGS32(edi, 12, edi + 12), ADDFLAGS32(edi, 12, edi + 12), local8, local23, local41, local59, local77);
                    local100 = esp_10;
                    local102 = esp_10;
                    local103 = local27;
                    local104 = local45;
                    local105 = local63;
                    local106 = local81;
                    local107 = local11;
                    esi_9 = esi_6 + 1;
                    ebx += 12;
                    eax = *(ebp - 28);
                    tmp1 = *(eax + 4) - esi_6 - 1;
                    flags = SUBFLAGS32(*(eax + 4), esi_6 + 1, tmp1);
                    local101 = esi_9;
                } while (*(eax + 4) > esi_6 + 1);
            }
            esp_20 = local102;
            *(__size32*)(esp_24 - 4) = local103;
            local47 = local104;
            local65 = local105;
            local85 = local106;
            local15 = local107;
            edx = *(ebp - 28);
            edx = *edx;
            *(__size32*)(ebp - 28) = edx;
            local108 = esp_20;
            local109 = edi;
            local110 = *(esp_24 - 4);
            local111 = local47;
            local112 = local65;
            local113 = local85;
            local114 = local15;
            local115 = esp_20;
        } while (edx == 0);
    }
    esp = local115;
    ebx = *(esp + 44);
    esi = *(esp + 48);
    edi = *(esp + 52);
    ebp = *(esp + 56);
    return ebx; /* WARNING: Also returning: ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x08061570 */
__size32 scanmult(int param1, union { __size32; int *; } param2)
{
    int ecx; 		// r25

    __isoc99_sscanf();
    ecx = __isoc99_sscanf();
    *(int*)param2 = param1;
    return ecx;
}

/** address: 0x080632c4 */
void caml_set_allocation_policy(__size32 param1)
{
    if (param1 == 0) {
        *(__size32*)(&caml_globals + 0x915c) = 0x807b748;
    }
    else {
        if (param1 == 1) {
            *(__size32*)(&caml_globals + 0xb594) = 0;
            *(__size32*)(&caml_globals + 0xb598) = 0;
        }
    }
    *(__size32*)(&caml_globals + 0xb590) = param1;
    return;
}

/** address: 0x08070144 */
__size8 caml_record_backtrace(int param1, __size8 param3, __size8 param4, __size32 param5, __size32 param6, __size32 param7, int param8, __size32 param9)
{
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    int esi; 		// r30
    __size32 esp; 		// r28
    __size8 local2; 		// param3{18}
    __size8 local3; 		// param4{19}
    __size32 local4; 		// param5{20}
    __size32 local5; 		// param6{21}
    __size32 local6; 		// param7{22}
    int local7; 		// param8{24}
    __size32 local8; 		// param9{25}

    ebp = (esp - 4);
    local2 = param3;
    local2 = param3;
    local3 = param4;
    local3 = param4;
    local4 = param5;
    local5 = param6;
    local6 = param7;
    local6 = param7;
    local7 = param8;
    local7 = param8;
    local8 = param9;
    local8 = param9;
    if (param1 >> 1 != *0x8082124) {
        *(int*)(&caml_globals + 0xfb30) = param1 >> 1;
        *(__size32*)(&caml_globals + 0xfb34) = 0;
        if (param1 >> 1 == 0) {
            ecx = caml_remove_global_root(0x807b808, param8); /* Warning: also results in edx */
            local4 = ecx;
            local5 = edx;
        }
        else {
            cl = caml_register_global_root(0x807b808); /* Warning: also results in dl, ecx, edx, ebx, ebp, esi, edi */
            local2 = cl;
            local3 = dl;
            local4 = ecx;
            local5 = edx;
            local6 = ebx;
            local7 = esi;
            local8 = edi;
        }
    }
    param3 = local2;
    param4 = local3;
    param5 = local4;
    param6 = local5;
    param7 = local6;
    param8 = local7;
    param9 = local8;
    ebp = *ebp;
    return param3; /* WARNING: Also returning: dl := param4, ecx := param5, edx := param6, ebx := param7, ebp := ebp, esi := param8, edi := param9 */
}

/** address: 0x0806249a */
__size8 caml_register_global_root(unsigned int param1)
{
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    unsigned int edx; 		// r26
    __size32 esi; 		// r30

    cl = caml_insert_global_root(0x807ba20, param1); /* Warning: also results in dl, ecx, edx, ebx, ebp, esi, edi */
    ebp = *ebp;
    return cl; /* WARNING: Also returning: dl := dl, ecx := ecx, edx := edx, ebx := ebx, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x08062739 */
__size32 caml_remove_global_root(unsigned int param1, int param2)
{
    __size32 ecx; 		// r25
    unsigned int edx; 		// r26

    ecx = caml_delete_global_root(0x807ba20, param1, param2); /* Warning: also results in edx */
    return ecx; /* WARNING: Also returning: edx := edx */
}

/** address: 0x0806253c */
__size32 caml_delete_global_root(__size32 param1, unsigned int param2, int param3)
{
    int eax_1; 		// r24{35}
    int eax_12; 		// r24{33}
    int eax_15; 		// r24{36}
    unsigned int eax_17; 		// r24{23}
    int eax_2; 		// r24{5}
    union { int; unsigned int * x10; int *; } eax_5; 		// r24{10}
    unsigned int eax_8; 		// r24{22}
    union { __size32 *; unsigned int; unsigned int * x10; } eax_9; 		// r24{30}
    __size32 ecx; 		// r25
    unsigned int edx; 		// r26
    int esi; 		// r30
    int esi_1; 		// r30{9}
    int esi_2; 		// r30{15}
    __size32 esp; 		// r28
    int local1; 		// esi_1{9}
    int local2; 		// param3{18}
    unsigned int local3; 		// eax_17{23}
    int local4; 		// esi{24}
    int local5; 		// eax_1{35}
    unsigned int local6; 		// param2{43}

    ecx = param1;
    eax_2 = *(param1 + 72);
    local2 = param3;
    local6 = param2;
    if (eax_2 >= 0) {
        esi = eax_2;
        local1 = esi;
        do {
bb0x8062558:
            esi_1 = local1;
            eax_5 = *(ecx + esi_1 * 4 + 4);
            local1 = esi_1;
            if ( ~(eax_5 == 0 || *eax_5 >= param2)) {
                ecx = eax_5;
                goto bb0x8062558;
            }
            *(__size32*)(esp + esi_1 * 4 - 96) = ecx;
            esi_2 = esi_1 - 1;
            local1 = esi_2;
            local2 = esi_2;
        } while (esi_1 - 1 != -1);
    }
    param3 = local2;
    ecx = *(ecx + 4);
    local4 = param3;
    if ( ~(ecx == 0 || *ecx != param2)) {
        if (eax_2 >= 0) {
            eax_8 = 0;
            local3 = eax_8;
            do {
                eax_17 = local3;
                esi = local4;
                edx = *(esp + eax_17 * 4 - 96);
                if (*(edx + eax_17 * 4 + 4) == ecx) {
                    esi = *(ecx + eax_17 * 4 + 4);
                    *(int*)(edx + eax_17 * 4 + 4) = esi;
                }
                eax_9 = eax_17 + 1;
                local3 = eax_9;
                local4 = esi;
            } while (*(param1 + 72) >= eax_17 + 1);
        }
        ecx = caml_stat_free(ecx); /* Warning: also results in edx */
        local6 = edx;
        local6 = edx;
        local6 = edx;
        eax_12 = *(param1 + 72);
        local5 = eax_12;
        if ( ~(eax_12 <= 0 || *(param1 + eax_12 * 4 + 4) != 0)) {
            do {
                eax_1 = local5;
                eax_15 = eax_1 - 1;
                local5 = eax_15;
                if (eax_1 <= 1) {
bb0x80625ce:
                    *(int*)(param1 + 72) = eax_1 - 1;
                    param2 = local6;
                    return ecx; /* WARNING: Also returning: edx := param2 */
                }
                else {
                }
                goto bb0x80625ce;
            } while (*(param1 + (eax_1 - 1) * 4 + 4) == 0);
            *(int*)(param1 + 72) = eax_1 - 1;
        }
    }
    param2 = local6;
    return ecx; /* WARNING: Also returning: edx := param2 */
}

