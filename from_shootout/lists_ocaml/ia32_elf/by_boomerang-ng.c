union { stack_t; union { __size32 *; unsigned int; }[]; } caml_globals;
__size32 array_bound_error_msg = 0;// 4 bytes
__size8 global_0x0807ce67 = 0;// 1 bytes
__size32 caml_last_return_address = 1;// 4 bytes
int caml_fl_merge = 0x807ce88;
union { unsigned int; int *; } global_0x0807ce88;
unsigned int fl_prev = 0x807ce88;
__size32 caml_weak_none = 0x8083838;// 4 bytes
__size32 stderr;// 4 bytes
unsigned int caml_exception_pointer;
__size32 array_bound_error_bucket_inited;// 4 bytes
__size32 array_bound_error_bucket;// 4 bytes
__size32 global_0x0807d12c;// 4 bytes
__size32 global_0x0807d130;// 4 bytes
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
union { unsigned int; unsigned int *; } global_0x0807f2dc[9999999];
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
__size8 caml_record_backtrace(int param1, __size8 param3, __size8 param3, __size32 param5, __size32 param6, __size32 param7, int param8, __size32 param8);
__size8 caml_register_global_root(unsigned int param1);
__size32 caml_remove_global_root(unsigned int param1, int param2);
__size32 caml_delete_global_root(__size32 param1, unsigned int param2, int param3);

/** address: 0x08061fcc */
int main(int argc, char *argv[])
{
    int ebp; 		// r29
    unsigned int esp; 		// r28

    caml_main(argv, esp - 4, SUBFLAGS32(esp - 4, 16, esp - 20), esp == 20, (unsigned int)(esp - 4) < 16, argv, ebp, argv, pc, argc);
}

/** address: 0x08061cfe */
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
    unsigned int eax_6; 		// r24{75}
    char *eax_8; 		// r24{11}
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
    union { __size32; int *; } esp_1; 		// r28{11}
    union { __size32; char *; } *esp_4; 		// r28{2}
    union { unsigned char *; __size32; } local0; 		// ebx_1{70}
    union { int *; __size32; } local1; 		// esp{78}
    unsigned int local2; 		// eax_11{92}
    int local3; 		// ebx_4{111}

    caml_init_ieee_floats();
    cl = caml_init_custom_operations(); /* Warning: also results in dl, esp_4, ebp */
    *(__size32*)(&caml_globals + 0x10250) = ebp - 25;
    *(__size32*)esp_4 = 0x807151e;
    eax_4 = getenv(*esp_4); /* Warning: also results in ecx, edx */
    ebx = eax_4;
    if (eax_4 != 0) {
bb0x8061df3:
        esp = esp_4;
        esi = 0x8071568;
        edi = ebp - 32;
        local0 = ebx;
        ebx_1 = local0;
        eax_6 = *(unsigned char*)ebx_1;
        local1 = esp;
        while ((unsigned char) eax_6 != 0) {
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
            if ((unsigned char) eax_6 - 79 > 39) {
                continue;
            }
            ebx_1 = local0;
            eax_6 = *(unsigned char*)ebx_1;
            local1 = esp;
        }
    }
    else {
        *(__size32*)esp_4 = 0x807151f;
        eax_8 = getenv(*esp_4); /* Warning: also results in ecx, edx, esp_1 */
        local1 = esp_1;
        ebx = eax_8;
        if (eax_8 != 0) {
            goto bb0x8061df3;
        }
    }
    esp = local1;
    eax = *(&caml_globals + 0x9344);
    *(__size32*)(esp + 16) = eax;
    eax = *(&caml_globals + 0x9348);
    *(__size32*)(esp + 12) = eax;
    eax = *(&caml_globals + 0x934c);
    *(__size32*)(esp + 8) = eax;
    eax = *(&caml_globals + 0x9350);
    *(__size32*)(esp + 4) = eax;
    eax = *(&caml_globals + 0x9354);
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
    *(__size32*)(esp + 4) = 0x8083d40;
    *(__size32*)esp = 0x8083940;
    *(__size32*)(esp - 4) = 4;
    eax = caml_page_table_add(*(esp - 4), *esp, *(esp + 4), ecx, 0x8083940); /* Warning: also results in ecx */
    if (eax != 0) {
        *(__size32*)(esp - 4) = 0x807152c;
        caml_fatal_error(*(esp - 4));
    }
    eax = *(&caml_globals + 748);
    ebx = 0;
    local3 = ebx;
    if (eax == 0) {
bb0x8061ec5:
        eax = *(&caml_globals + 872);
        *(__size32*)(&caml_globals + 0xfd8c) = eax;
        ecx = *(&caml_globals + 876);
        *(__size32*)(&caml_globals + 0xfe48) = ecx;
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
            *(__size32*)(esp - 4) = 0x807152c;
            caml_fatal_error(*(esp - 4));
        }
        ebx_5 = ebx_4 + 1;
        eax = caml_globals[(ebx_4 + 1)];
        local3 = ebx_5;
    } while (caml_globals[(ebx_4 + 1)] != 0);
    goto bb0x8061ec5;
}

/** address: 0x0806c128 */
void caml_sys_exit(int param1)
{
    exit(param1 >> 1);
    return;
}

/** address: 0x080676f7 */
void caml_init_ieee_floats()
{
    return;
}

/** address: 0x0806ff5e */
__size8 caml_init_custom_operations()
{
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    __size32 ebp; 		// r29
    __size32 edi; 		// r31
    __size32 esi; 		// r30

    caml_register_custom_operations();
    *(__size32*)esp = 0x807ced4;
    caml_register_custom_operations();
    *(__size32*)esp = 0x807ceb8;
    cl = caml_register_custom_operations(); /* Warning: also results in dl, ebp, esi, edi */
    ebp = *ebp;
    return cl; /* WARNING: Also returning: dl := dl, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x0806ccdf */
void caml_init_gc(__size32 param1, __size32 param2)
{
    int ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 esi; 		// r30
    unsigned int esp; 		// r28

    norm_heapincr(param2, esp - 4, param1, SUBFLAGS32(esp - 12, 16, (esp - 28)), esp == 28, (unsigned int)(esp - 12) < 16, ebx, param1, param2, ebp, esi, ebx, pc);
}

/** address: 0x080654e1 */
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
bb0x8065529:
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
        goto bb0x8065529;
    }
    ecx = local3;
    edx = local4;
    return eax; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x08063539 */
void caml_fatal_error(union { char *; __size32; } param1)
{
    __size32 eax; 		// r24

    eax = *0x807cfa0;
    fputs(param1, eax);
    exit(2);
    return;
}

/** address: 0x080631b0 */
void caml_init_signals(sigset_t param1)
{
    int eax; 		// r24
    int esp; 		// r28

    sigemptyset(&param1);
    *(__size32*)(&caml_globals + 0x978c) = (esp - 164);
    eax = sigaltstack(&0x807d2a0, 0);
    if (eax == 0) {
        sigaction(11, &0x80632df, 0);
    }
    return;
}

/** address: 0x0807087c */
void caml_debugger_init()
{
    return;
}

/** address: 0x0806ff37 */
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
    edx = *(&caml_globals + 0xfd6c);
    *(__size32*)(eax + 4) = edx;
    *(union { __size32 *; __size32; }*)0x8083860 = eax;
    ebp = *ebp;
    return cl; /* WARNING: Also returning: dl := dl, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x0806cca4 */
void norm_heapincr()
{
}

/** address: 0x08065090 */
void caml_page_table_initialize()
{
    unsigned int eax; 		// r24
    unsigned int eax_1; 		// r24{2}

    eax = 0;
    do {
        eax_1 = eax;
        caml_globals[eax_1] = 0x8080300;
        eax = eax_1 + 1;
    } while (eax_1 + 1 != 512);
    return;
}

/** address: 0x0806ccc0 */
void norm_minsize()
{
}

/** address: 0x08064e62 */
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
    eax = *(&caml_globals + 0xc7c0);
    local4 = esp_1;
    if (eax != *0x80802b0) {
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
    eax = *(&caml_globals + 0xc7b8);
    if (eax != 0) {
        edx = *(&caml_globals + 0xc7bc);
        *(__size32*)(esp + 8) = edx;
        *(__size32*)(esp + 4) = eax;
        *(__size32*)esp = 2;
        caml_page_table_remove(*esp, *(esp + 4), *(esp + 8));
        eax = *(&caml_globals + 0xc808);
        *(__size32*)esp = eax;
        ecx = free(*esp); /* Warning: also results in edx */
    }
    eax = *(ebp - 28);
    *(__size32*)(&caml_globals + 0xc808) = eax;
    *(__size32*)(&caml_globals + 0xc7b8) = ebx;
    *(__size32*)(&caml_globals + 0xc7bc) = esi;
    *(__size32*)(&caml_globals + 0xc7c4) = ebx;
    *(__size32*)(&caml_globals + 0xc7c0) = esi;
    *(__size32*)(&caml_globals + 0x103a0) = edi;
    ecx = reset_table(0x80802bc, ecx, edx); /* Warning: also results in edx */
    reset_table(0x80802d8, ecx, edx);
    return;
}

/** address: 0x0806cc90 */
void norm_pfree()
{
}

/** address: 0x0806cc9f */
void norm_pmax()
{
    return;
}

/** address: 0x08063e8c */
void caml_init_major_heap(__size32 param1)
{
    int ebp; 		// r29
    int esp; 		// r28

    clip_heap_chunk_size(param1, esp - 4, SUBFLAGS32(esp - 4, 24, (esp - 28)), esp == 28, (unsigned int)(esp - 4) < 24, param1, ebp, pc);
}

/** address: 0x0806355f */
__size32 caml_gc_message(int param1, union { char *; __size32; } param2)
{
    int eax; 		// r24
    __size32 ecx; 		// r25
    __size32 edx; 		// r26

    if ( ~(param1 >= 0 && (caml_verb_gc & param1) == 0)) {
        eax = *0x807cfa0;
        fprintf(eax, param2);
        eax = *0x807cfa0;
        ecx = fflush(eax); /* Warning: also results in edx */
    }
    return ecx; /* WARNING: Also returning: edx := edx */
}

/** address: 0x08065387 */
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
    if (named_value_table[((unsigned int)param1 >> 23)] != 0x8080300) {
bb0x80653d5:
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
            goto bb0x80653d5;
        }
    }
    eax_1 = local4;
    ecx = local5;
    edx = local6;
    return eax_1; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x0806516a */
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

/** address: 0x08064d63 */
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

    ebx_1 = *(global_0x0807f2dc + 0x4bac);
    caml_empty_minor_heap(bl, edi);
    eax = *(global_0x0807f2dc + 0x4bac);
    st7 = (float)(eax - ebx_1) + *((double *)&*0x80837c8);
    *(union { double; __size64; }*)0x80837c8 = st7;
    tmp1 = *(global_0x0807f2dc + 0x44fc);
    *(__size32*)(global_0x0807f2dc + 0x44fc)++;
    caml_major_collection_slice(eax - ebx_1, ebx_1, esp - 4, 0, st7, ADDFLAGS32(tmp1, 1, *0x80837d8), ADDFLAGS32(tmp1, 1, *0x80837d8), ADDFLAGS32(tmp1, 1, *0x80837d8), ebp, esi, ebx_4, 0, eax - ebx_1, 0, pc, ecx, edx);
}

/** address: 0x08063484 */
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

/** address: 0x080620d9 */
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
    __size32 esp_49; 		// r28{230}
    __size32 esp_5; 		// r28{40}
    __size32 esp_50; 		// r28{230}
    __size32 esp_51; 		// r28{230}
    __size32 esp_52; 		// r28{168}
    __size32 esp_53; 		// r28{168}
    __size32 esp_54; 		// r28{168}
    __size32 esp_55; 		// r28{331}
    __size32 esp_56; 		// r28{331}
    __size32 esp_57; 		// r28{331}
    __size32 esp_58; 		// r28{154}
    __size32 esp_59; 		// r28{154}
    __size32 esp_6; 		// r28{40}
    __size32 esp_60; 		// r28{154}
    union { __size32; __size32 *; } esp_61; 		// r28{256}
    union { __size32; __size32 *; } esp_62; 		// r28{256}
    union { __size32; __size32 *; } esp_63; 		// r28{256}
    __size32 esp_64; 		// r28{278}
    __size32 esp_65; 		// r28{278}
    __size32 esp_66; 		// r28{278}
    union { __size32; __size32 *; } esp_67; 		// r28{197}
    union { __size32; __size32 *; } esp_68; 		// r28{197}
    union { __size32; __size32 *; } esp_69; 		// r28{197}
    __size32 esp_7; 		// r28{66}
    __size32 esp_70; 		// r28{295}
    __size32 esp_71; 		// r28{295}
    __size32 esp_72; 		// r28{295}
    __size32 esp_73; 		// r28{314}
    __size32 esp_74; 		// r28{1}
    __size32 esp_75; 		// r28{1}
    __size32 esp_8; 		// r28{66}
    __size32 esp_9; 		// r28{66}
    int local0; 		// m[esp - 4]
    int local1; 		// m[esp - 28]
    int local10; 		// m[esp_74 - 4]{221}
    int local100; 		// tmpb{334}
    int local101; 		// tmpb{282}
    int local102; 		// tmpb{156}
    int local103; 		// tmpb{317}
    int local104; 		// tmpb{299}
    int local105; 		// tmpb{268}
    int local106; 		// tmpb{268}
    int local107; 		// tmpb{268}
    int local108; 		// tmpb{156}
    int local109; 		// tmpb{282}
    __size32 local11; 		// m[esp_74 - 4]{260}
    int local110; 		// tmpb{282}
    int local111; 		// tmpb{282}
    int local112; 		// tmpb{299}
    int local113; 		// tmpb{233}
    int local114; 		// tmpb{233}
    int local115; 		// tmpb{233}
    int local116; 		// tmpb{171}
    int local117; 		// tmpb{171}
    int local118; 		// tmpb{171}
    int local119; 		// tmpb{317}
    __size32 local12; 		// m[esp_74 - 4]{301}
    int local120; 		// tmpb{334}
    int local121; 		// tmpb{334}
    int local122; 		// tmpb{334}
    int local123; 		// tmpb{221}
    int local124; 		// tmpb{171}
    int local125; 		// tmpb{3}
    int local126; 		// tmpb{3}
    __size16 local127; 		// tmph{185}
    __size16 local128; 		// tmph{335}
    __size16 local129; 		// tmph{283}
    __size32 local13; 		// m[esp_74 - 4]{336}
    __size16 local130; 		// tmph{157}
    __size16 local131; 		// tmph{318}
    __size16 local132; 		// tmph{300}
    __size16 local133; 		// tmph{185}
    __size16 local134; 		// tmph{335}
    __size16 local135; 		// tmph{283}
    __size16 local136; 		// tmph{157}
    __size16 local137; 		// tmph{318}
    __size16 local138; 		// tmph{300}
    int local139; 		// tmph{268}
    __size32 local14; 		// m[esp_74 - 4]{284}
    int local140; 		// tmph{268}
    int local141; 		// tmph{268}
    int local142; 		// tmph{268}
    __size16 local143; 		// tmph{335}
    __size16 local144; 		// tmph{283}
    __size16 local145; 		// tmph{157}
    __size16 local146; 		// tmph{318}
    __size16 local147; 		// tmph{300}
    __size16 local148; 		// tmph{185}
    __size16 local149; 		// tmph{4}
    int local15; 		// m[esp_74 - 4]{268}
    __size16 local150; 		// tmph{4}
    __size16 local151; 		// tmph{283}
    __size16 local152; 		// tmph{283}
    __size16 local153; 		// tmph{335}
    __size16 local154; 		// tmph{335}
    unsigned int local155; 		// edx_1{33}
    __size32 local156; 		// esp_58{154}
    int local157; 		// local97{156}
    __size16 local158; 		// local130{157}
    __size32 local159; 		// m[esp_74 - 4]{158}
    int local16; 		// m[esp_74 - 4]{268}
    __size32 local160; 		// local48{159}
    unsigned int local161; 		// local82{160}
    __size32 local162; 		// esp_52{168}
    int local163; 		// local89{171}
    __size32 local164; 		// local8{172}
    __size32 local165; 		// local37{173}
    unsigned int local166; 		// local65{174}
    int local167; 		// eax_1{180}
    union { __size32 *; __size32; } local168; 		// esp_67{197}
    unsigned int local169; 		// esi{199}
    __size32 local17; 		// m[esp_74 - 4]{336}
    __size32 local170; 		// local7{201}
    __size32 local171; 		// local36{202}
    unsigned int local172; 		// local64{203}
    union { __size32 *; unsigned int; } local173; 		// eax{212}
    __size32 local174; 		// esp_49{230}
    int local175; 		// local93{233}
    __size32 local176; 		// local20{234}
    __size32 local177; 		// local46{235}
    unsigned int local178; 		// local74{236}
    unsigned int local179; 		// ebx{255}
    __size32 local18; 		// m[esp_74 - 4]{336}
    union { __size32 *; __size32; } local180; 		// esp_61{256}
    __size32 local181; 		// local11{260}
    __size32 local182; 		// local40{261}
    unsigned int local183; 		// local68{262}
    unsigned int local184; 		// ebx{277}
    __size32 local185; 		// esp_64{278}
    int local186; 		// local96{282}
    __size16 local187; 		// local129{283}
    __size32 local188; 		// local14{284}
    __size32 local189; 		// local43{285}
    __size32 local19; 		// m[esp_74 - 4]{319}
    unsigned int local190; 		// local71{286}
    __size32 local191; 		// esp_70{295}
    unsigned int local192; 		// edi{298}
    int local193; 		// local99{299}
    __size16 local194; 		// local132{300}
    __size32 local195; 		// local12{301}
    __size32 local196; 		// local41{302}
    unsigned int local197; 		// local69{303}
    __size32 local198; 		// esp_73{314}
    int local199; 		// local98{317}
    int local2; 		// m[esp - 32]
    __size32 local20; 		// m[esp_74 - 4]{234}
    __size16 local200; 		// local131{318}
    __size32 local201; 		// local19{319}
    __size32 local202; 		// m[esp_74 - 28]{320}
    unsigned int local203; 		// m[esp_74 - 32]{321}
    __size32 local204; 		// esp_55{331}
    int local205; 		// local95{334}
    __size16 local206; 		// local128{335}
    __size32 local207; 		// local13{336}
    __size32 local208; 		// local42{337}
    unsigned int local209; 		// local70{338}
    __size32 local21; 		// m[esp_74 - 4]{301}
    __size32 local210; 		// esp{348}
    __size32 local22; 		// m[esp_74 - 4]{301}
    __size32 local23; 		// m[esp_74 - 4]{284}
    __size32 local24; 		// m[esp_74 - 4]{284}
    __size32 local25; 		// m[esp_74 - 4]{172}
    __size32 local26; 		// m[esp_74 - 4]{172}
    __size32 local27; 		// m[esp_74 - 4]{201}
    __size32 local28; 		// m[esp_74 - 4]{201}
    __size32 local29; 		// m[esp_74 - 4]{260}
    int local3; 		// m[esp - 64]
    __size32 local30; 		// m[esp_74 - 4]{260}
    __size32 local31; 		// m[esp_74 - 4]{234}
    __size32 local32; 		// m[esp_74 - 4]{234}
    __size32 local33; 		// m[esp_74 - 28]{8}
    __size32 local34; 		// m[esp_74 - 28]{8}
    __size32 local35; 		// m[esp_74 - 28]{8}
    __size32 local36; 		// m[esp_74 - 28]{202}
    __size32 local37; 		// m[esp_74 - 28]{173}
    int local38; 		// m[esp_74 - 28]{221}
    int local39; 		// m[esp_74 - 28]{221}
    __size32 local4; 		// m[esp_74 - 4]{7}
    __size32 local40; 		// m[esp_74 - 28]{261}
    __size32 local41; 		// m[esp_74 - 28]{302}
    __size32 local42; 		// m[esp_74 - 28]{337}
    __size32 local43; 		// m[esp_74 - 28]{285}
    int local44; 		// m[esp_74 - 28]{268}
    int local45; 		// m[esp_74 - 28]{268}
    __size32 local46; 		// m[esp_74 - 28]{235}
    __size32 local47; 		// m[esp_74 - 28]{235}
    __size32 local48; 		// m[esp_74 - 28]{159}
    __size32 local49; 		// m[esp_74 - 28]{337}
    __size32 local5; 		// m[esp_74 - 4]{7}
    __size32 local50; 		// m[esp_74 - 28]{337}
    __size32 local51; 		// m[esp_74 - 28]{302}
    __size32 local52; 		// m[esp_74 - 28]{302}
    __size32 local53; 		// m[esp_74 - 28]{202}
    __size32 local54; 		// m[esp_74 - 28]{202}
    __size32 local55; 		// m[esp_74 - 28]{261}
    __size32 local56; 		// m[esp_74 - 28]{261}
    __size32 local57; 		// m[esp_74 - 28]{285}
    __size32 local58; 		// m[esp_74 - 28]{285}
    __size32 local59; 		// m[esp_74 - 28]{173}
    __size32 local6; 		// m[esp_74 - 4]{7}
    __size32 local60; 		// m[esp_74 - 28]{173}
    unsigned int local61; 		// m[esp_74 - 32]{9}
    unsigned int local62; 		// m[esp_74 - 32]{9}
    unsigned int local63; 		// m[esp_74 - 32]{9}
    unsigned int local64; 		// m[esp_74 - 32]{203}
    unsigned int local65; 		// m[esp_74 - 32]{174}
    int local66; 		// m[esp_74 - 32]{221}
    int local67; 		// m[esp_74 - 32]{221}
    unsigned int local68; 		// m[esp_74 - 32]{262}
    unsigned int local69; 		// m[esp_74 - 32]{303}
    __size32 local7; 		// m[esp_74 - 4]{201}
    unsigned int local70; 		// m[esp_74 - 32]{338}
    unsigned int local71; 		// m[esp_74 - 32]{286}
    int local72; 		// m[esp_74 - 32]{268}
    int local73; 		// m[esp_74 - 32]{268}
    unsigned int local74; 		// m[esp_74 - 32]{236}
    unsigned int local75; 		// m[esp_74 - 32]{236}
    unsigned int local76; 		// m[esp_74 - 32]{338}
    unsigned int local77; 		// m[esp_74 - 32]{338}
    unsigned int local78; 		// m[esp_74 - 32]{262}
    unsigned int local79; 		// m[esp_74 - 32]{262}
    __size32 local8; 		// m[esp_74 - 4]{172}
    unsigned int local80; 		// m[esp_74 - 32]{303}
    unsigned int local81; 		// m[esp_74 - 32]{303}
    unsigned int local82; 		// m[esp_74 - 32]{160}
    unsigned int local83; 		// m[esp_74 - 32]{203}
    unsigned int local84; 		// m[esp_74 - 32]{203}
    unsigned int local85; 		// m[esp_74 - 32]{174}
    unsigned int local86; 		// m[esp_74 - 32]{174}
    unsigned int local87; 		// m[esp_74 - 32]{286}
    unsigned int local88; 		// m[esp_74 - 32]{286}
    int local89; 		// tmpb{171}
    int local9; 		// m[esp_74 - 4]{221}
    int local90; 		// tmpb{221}
    int local91; 		// tmpb{221}
    int local92; 		// tmpb{221}
    int local93; 		// tmpb{233}
    int local94; 		// tmpb{221}
    int local95; 		// tmpb{334}
    int local96; 		// tmpb{282}
    int local97; 		// tmpb{156}
    int local98; 		// tmpb{317}
    int local99; 		// tmpb{299}

    local4 = param1;
    local33 = 0x8073964;
    ebx = caml_raise(param1, 0x8073964, param2, esp_74 - 4); /* Warning: also results in esp_1, ebp, esi */
    local157 = local125;
    local158 = local149;
    local159 = local4;
    local160 = local33;
    local161 = local61;
    local163 = local125;
    local164 = local4;
    local165 = local33;
    local166 = local61;
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
        local155 = edx;
        do {
            edx_1 = local155;
            ecx = *(ebx + edx_1 * 4);
            *(__size32*)(eax + edx_1 * 4 + 4) = ecx;
            edx_2 = edx_1 + 1;
            local155 = edx_2;
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
    *(__size32*)(esp_7 - 28) = 0x807396c;
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
    *(__size32*)(esp_16 - 28) = 0x80739a8;
    esp_19 = caml_raise_with_string(*(esp_16 - 24), esp_16 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_19 - 4) = ebp;
    eax = *(esp_19 + 4);
    *(__size32*)(esp_19 - 24) = eax;
    *(__size32*)(esp_19 - 28) = 0x807398c;
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
    *(__size32*)(esp_25 - 28) = 0x8073a80;
    esp_28 = caml_raise_constant(*(esp_25 - 28), esp_25 - 4, *(esp_25 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_28 - 4) = ebp;
    *(__size32*)(esp_28 - 28) = 0x8073a18;
    esp_31 = caml_raise_constant(*(esp_28 - 28), esp_28 - 4, *(esp_28 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_31 - 4) = ebp;
    *(__size32*)(esp_31 - 28) = 0x80739f0;
    esp_34 = caml_raise_constant(*(esp_31 - 28), esp_31 - 4, *(esp_31 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_34 - 4) = ebp;
    *(__size32*)(esp_34 - 28) = 0x80739d0;
    cl = caml_raise_constant(*(esp_34 - 28), esp_34 - 4, *(esp_34 - 176)); /* Warning: also results in dl, ecx, edx, ebx, esp_37, ebp, esi, edi */
    *(__size32*)(esp_37 - 4) = ebp;
    ebp = esp_37 - 4;
    *(unsigned int*)(esp_37 - 8) = edi;
    *(unsigned int*)(esp_37 - 12) = esi;
    *(unsigned int*)(esp_37 - 16) = ebx;
    esp_40 = esp_37 - 60;
    eax = *(esp_37 + 8);
    al = (unsigned char) eax;
    local156 = esp_40;
    local162 = esp_40;
    if (eax != 0) {
        edx = *(esp_37 + 16);
        *(__size32*)(esp_37 - 36) = edx;
        edx = *(esp_37 + 12);
        *(__size32*)(esp_37 - 32) = eax;
        do {
bb0x8062347:
            esp_52 = local162;
            local89 = local163;
            local8 = local164;
            local37 = local165;
            local65 = local166;
            esi = *(global_0x0807f2dc + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local156 = esp_52;
            local157 = local89;
            local159 = local8;
            local160 = local37;
            local161 = local65;
            local162 = esp_52;
            local163 = local89;
            local164 = local8;
            local165 = local37;
            local166 = local65;
            local167 = eax;
            local168 = esp_52;
            local170 = local8;
            local171 = local37;
            local172 = local65;
            local174 = esp_52;
            local175 = local89;
            local176 = local8;
            local177 = local37;
            local178 = local65;
            if (*ebx != edx) {
                do {
                    eax_1 = local167;
                    eax_2 = eax_1 + 1 & esi;
                    ebx = *(caml_frame_descriptors + (eax_1 + 1 & esi) * 4);
                    local167 = eax_2;
                } while (*ebx != edx);
            }
            local127 = *(ebx + 4) + 1;
            local158 = local127;
            if (*(ebx + 4) != -1) {
                esi = *(unsigned short*)(ebx + 6);
                local169 = esi;
                if ((int)esi > 0) {
                    edi = ebx + 8;
                    *(__size32*)(ebp - 36) = ebx;
                    ebx = *(ebp + 8);
                    for(;;) {
                        esp_67 = local168;
                        esi = local169;
                        local7 = local170;
                        local36 = local171;
                        local64 = local172;
                        eax_4 = *(unsigned short*)edi;
                        if (((unsigned char) eax_4 & 0x1) == 0) {
                            eax_7 = eax_4 + *(ebp - 28);
                            flags = ADDFLAGS32(eax_4, *(ebp - 28), eax_7);
                            local173 = eax_7;
                        }
                        else {
                            flags = SARFLAGS((int)eax_4 >> 1, eax_4, 1);
                            edx = *(ebp - 32);
                            eax = edx + ((int)eax_4 >> 1) * 4;
                            local173 = eax;
                        }
                        eax = local173;
                        *(__size32*)(esp_67 + 4) = eax;
                        eax = *eax;
                        *(__size32*)esp_67 = eax;
                        (*ebx)((unsigned char) eax, cl, dl, eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, local7, local36, local64, param1);
                        local168 = esp_43;
                        local170 = local9;
                        local171 = local38;
                        local172 = local66;
                        local174 = esp_43;
                        local175 = local90;
                        local176 = local9;
                        local177 = local38;
                        local178 = local66;
                        esi_4 = esi_1 - 1;
                        local169 = esi_4;
                        if ((int)esi_1 <= 1) {
                            break;
                        }
                        edi += 2;
                    }
                    ebx = *(ebp - 36);
                }
                esp_49 = local174;
                local93 = local175;
                local20 = local176;
                local46 = local177;
                local74 = local178;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local162 = esp_49;
                local163 = local93;
                local164 = local20;
                local165 = local46;
                local166 = local74;
                goto bb0x8062347;
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
    esp_58 = local156;
    local97 = local157;
    local130 = local158;
    *(__size32*)(esp_74 - 4) = local159;
    local48 = local160;
    local82 = local161;
    local204 = esp_58;
    local205 = local97;
    local206 = local130;
    local207 = *(esp_74 - 4);
    local208 = local48;
    local209 = local82;
    local210 = esp_58;
    if (*(ebp + 24) != 0) {
        esi = *(ebp + 24);
        *(__size32*)(ebp - 28) = 0;
        do {
            esp_55 = local204;
            local95 = local205;
            local128 = local206;
            local13 = local207;
            local42 = local208;
            local70 = local209;
            edi = 0;
            local191 = esp_55;
            local192 = edi;
            local193 = local95;
            local194 = local128;
            local195 = local13;
            local196 = local42;
            local197 = local70;
            local198 = esp_55;
            local199 = local95;
            local200 = local128;
            local201 = local13;
            local202 = local42;
            local203 = local70;
            if (*(esi + 4) > 0) {
                do {
                    esp_70 = local191;
                    edi = local192;
                    local99 = local193;
                    local132 = local194;
                    local12 = local195;
                    local41 = local196;
                    local69 = local197;
                    ebx = *(ebp - 28);
                    local179 = ebx;
                    local180 = esp_70;
                    local181 = local12;
                    local182 = local41;
                    local183 = local69;
                    local184 = ebx;
                    local185 = esp_70;
                    local186 = local99;
                    local187 = local132;
                    local188 = local12;
                    local189 = local41;
                    local190 = local69;
                    if (*(esi + 8) > 0) {
                        do {
                            ebx = local179;
                            esp_61 = local180;
                            local11 = local181;
                            local40 = local182;
                            local68 = local183;
                            eax_9 = ebx * 4 + *(esi + edi * 4 + 12);
                            *(__size32*)(esp_61 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_61 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, cl, dl, eax_12, ecx, edx, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), local11, local40, local68, param1);
                            local180 = esp_46;
                            local181 = local15;
                            local182 = local44;
                            local183 = local72;
                            local185 = esp_46;
                            local186 = local105;
                            local187 = local139;
                            local188 = local15;
                            local189 = local44;
                            local190 = local72;
                            ebx_4 = ebx_1 + 1;
                            local179 = ebx_4;
                            local184 = ebx_4;
                        } while (*(esi + 8) > ebx_1 + 1);
                    }
                    ebx = local184;
                    esp_64 = local185;
                    edi_1 = edi;
                    local96 = local186;
                    local129 = local187;
                    local14 = local188;
                    local43 = local189;
                    local71 = local190;
                    edi_2 = edi_1 + 1;
                    local191 = esp_64;
                    local192 = edi_2;
                    local193 = local96;
                    local194 = local129;
                    local195 = local14;
                    local196 = local43;
                    local197 = local71;
                    local198 = esp_64;
                    local199 = local96;
                    local200 = local129;
                    local201 = local14;
                    local202 = local43;
                    local203 = local71;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_73 = local198;
            local98 = local199;
            local131 = local200;
            local19 = local201;
            *(__size32*)(esp_74 - 28) = local202;
            *(unsigned int*)(esp_74 - 32) = local203;
            esi = *esi;
            local204 = esp_73;
            local205 = local98;
            local206 = local131;
            local207 = local19;
            local208 = *(esp_74 - 28);
            local209 = *(esp_74 - 32);
            local210 = esp_73;
        } while (esi == 0);
    }
    esp = local210;
    ebx = *(esp + 44);
    esi = *(esp + 48);
    edi = *(esp + 52);
    ebp = *(esp + 56);
    return eax; /* WARNING: Also returning: al := al, cl := cl, dl := dl, ecx := ecx, edx := edx, ebx := ebx, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x08065402 */
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

/** address: 0x08064e15 */
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

/** address: 0x08063e70 */
void clip_heap_chunk_size()
{
}

/** address: 0x0806534b */
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

/** address: 0x08063672 */
void caml_fl_init_merge()
{
    *(__size32*)(&caml_globals + 0xc78c) = 0;
    *(__size32*)(&caml_globals + 0x9388) = 0x807ce88;
    return;
}

/** address: 0x08063969 */
void caml_make_free_blocks(__size32 param1)
{
    if (param1 != 0) {
    }
    return;
}

/** address: 0x08064c19 */
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

    eax = *(global_0x0807f2dc + 0xfd8);
    if (eax != *0x80802b0) {
        *(__size32*)(global_0x0807f2dc + 0x1018) = 1;
        caml_gc_message(2, 0x807187c);
        esp = caml_oldify_local_roots(param1, ecx, ebx, esp - 4, esi, param4);
        ebx_1 = *(global_0x0807f2dc + 0xfe0);
        local7 = ebx_1;
        if (ebx_1 < *(global_0x0807f2dc + 0xfec)) {
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
        eax = *(global_0x0807f2dc + 0xffc);
        if (eax < *(global_0x0807f2dc + 0x1008)) {
            do {
                eax_1 = eax;
                ecx = *eax_1;
                edx = *ecx;
                if ( ~(((unsigned char) edx & 0x1) != 0 || edx >= *(global_0x0807f2dc + 0xfd4) || edx <= *(global_0x0807f2dc + 0xfd0))) {
                    if (*(edx - 4) == 0) {
                        edx = *edx;
                        *(__size32*)ecx = edx;
                        goto bb0x8064ccb;
                    }
                    *(__size32*)ecx = caml_weak_none;
                    goto bb0x8064ccb;
                }
bb0x8064ccb:
                eax = eax_1 + 4;
            } while (*(global_0x0807f2dc + 0x1008) > eax_1 + 4);
        }
    }
    caml_final_empty_young();
    return;
}

/** address: 0x08064708 */
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
    if (*0x8083e7c != 2) {
bb0x8064722:
        eax = *(global_0x0807f2dc + 0x4bac);
        edx = *(global_0x0807f2dc + 0x4b94);
        *(__size32*)(ebp - 32) = edx + 100;
        *(__size32*)(ebp - 28) = 0;
        st7 = (float)*(ebp - 32);
        *(__size32*)(ebp - 32) = edx;
        *(__size32*)(ebp - 28) = 0;
        st6 = (float)*(ebp - 32);
        *(__size32*)(ebp - 32) = eax;
        *(__size32*)(ebp - 28) = 0;
        st5 = (float)*(ebp - 32);
        edx = *(global_0x0807f2dc + 0x4504);
        *(int*)(ebp - 32) = (unsigned int)edx >> 2;
        *(__size32*)(ebp - 28) = 0;
        st4 = (float)*(ebp - 32);
        *(union { double; __size64; }*)(ebp - 48) = st5 * 3. * st7 / st4 / st6 * 0.5;
        edx = *(global_0x0807f2dc + 0x4b98);
        if (edx != 0) {
            esi = *(global_0x0807f2dc + 0x4bb4);
            *(__size32*)(ebp - 32) = esi;
            *(__size32*)(ebp - 28) = 0;
            *(__size32*)(ebp - 32) = edx;
            *(__size32*)(ebp - 28) = 0;
bb0x80647c0:
        }
        goto bb0x80647c0;
    }
    ebp = start_cycle();
    goto bb0x8064722;
}

/** address: 0x0806fba9 */
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
    if ( ~(*0x8083840 != 0 || *0x8083854 == 0)) {
        ecx = caml_gc_message(128, 0x8072314); /* Warning: also results in edx, esp */
bb0x806fc06:
        param3 = local6;
        param4 = local7;
        eax = *0x8083854;
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
                *(int*)(global_0x0807f2dc + 0x4578) = ebx;
                if (ebx != 0) {
                    continue;
                }
                *(__size32*)(global_0x0807f2dc + 0x457c) = 0;
            }
            else {
                *(int*)(eax + 4) = edx - 1;
                eax += (edx - 1) * 12;
                edx = *(eax + 8);
                ecx = *(eax + 16);
                eax = *(eax + 12);
                *(__size32*)(global_0x0807f2dc + 0x4564) = 1;
                *(__size32*)(esp + 4) = eax + ecx;
                *(__size32*)esp = edx;
                ebx = caml_callback_exn(); /* Warning: also results in esp, ebp, esi, edi */
                local6 = esi;
                local7 = edi;
                *(__size32*)(global_0x0807f2dc + 0x4564) = 0;
                edx = eax + ecx & 0x3;
                if ((eax + ecx & 0x3) != 2) {
                    goto bb0x806fc06;
                }
                *(union { void *; int; }*)esp = eax + ecx & ~0x3;
                ecx = caml_raise(*(esp - 36), *esp, ebx, ebp); /* Warning: also results in edx, esp */
                goto bb0x806fc62;
            }
bb0x806fc06:
            param3 = local6;
            param4 = local7;
            eax = *0x8083854;
            local6 = param3;
            local6 = param3;
            local7 = param4;
            local7 = param4;
        }
bb0x806fc62:
        *(__size32*)(esp + 8) = 0;
        *(__size32*)(esp + 4) = 0x8072338;
        *(__size32*)esp = 128;
        caml_gc_message(*esp, *(esp + 4));
    }
    return;
}

/** address: 0x08062000 */
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
    __size32 esp_64; 		// r28{338}
    __size32 esp_65; 		// r28{338}
    __size32 esp_66; 		// r28{338}
    __size32 esp_67; 		// r28{356}
    __size32 esp_68; 		// r28{356}
    __size32 esp_69; 		// r28{356}
    __size32 esp_7; 		// r28{42}
    __size32 esp_70; 		// r28{376}
    __size32 esp_71; 		// r28{394}
    __size32 esp_72; 		// r28{394}
    __size32 esp_73; 		// r28{394}
    union { __size32; __size32 *; } esp_74; 		// r28{18}
    union { __size32; __size32 *; } esp_75; 		// r28{18}
    union { __size32; __size32 *; } esp_76; 		// r28{18}
    union { __size32; __size32 *; } esp_77; 		// r28{256}
    union { __size32; __size32 *; } esp_78; 		// r28{256}
    union { __size32; __size32 *; } esp_79; 		// r28{256}
    __size32 esp_8; 		// r28{42}
    __size32 esp_80; 		// r28{289}
    __size32 esp_81; 		// r28{289}
    __size32 esp_82; 		// r28{289}
    __size32 esp_83; 		// r28{226}
    __size32 esp_84; 		// r28{226}
    __size32 esp_85; 		// r28{226}
    __size32 esp_86; 		// r28{211}
    __size32 esp_87; 		// r28{211}
    __size32 esp_88; 		// r28{211}
    union { __size32; __size32 *; } esp_89; 		// r28{316}
    __size32 esp_9; 		// r28{42}
    union { __size32; __size32 *; } esp_90; 		// r28{316}
    union { __size32; __size32 *; } esp_91; 		// r28{316}
    __size32 esp_92; 		// r28{1}
    __size32 esp_93; 		// r28{1}
    int local0; 		// m[esp - 4]
    int local1; 		// m[esp - 8]
    int local10; 		// m[esp_92 + 4]{280}
    __size32 local100; 		// m[esp_92 - 8]{22}
    __size32 local101; 		// m[esp_92 - 8]{22}
    int local102; 		// m[esp_92 - 32]{15}
    int local103; 		// m[esp_92 - 32]{15}
    int local104; 		// m[esp_92 - 32]{15}
    int local105; 		// m[esp_92 - 32]{262}
    int local106; 		// m[esp_92 - 32]{232}
    int local107; 		// m[esp_92 - 32]{280}
    int local108; 		// m[esp_92 - 32]{280}
    int local109; 		// m[esp_92 - 32]{322}
    __size32 local11; 		// m[esp_92 + 4]{233}
    int local110; 		// m[esp_92 - 32]{364}
    int local111; 		// m[esp_92 - 32]{401}
    int local112; 		// m[esp_92 - 32]{346}
    int local113; 		// m[esp_92 - 32]{328}
    int local114; 		// m[esp_92 - 32]{328}
    int local115; 		// m[esp_92 - 32]{322}
    int local116; 		// m[esp_92 - 32]{322}
    int local117; 		// m[esp_92 - 32]{262}
    int local118; 		// m[esp_92 - 32]{262}
    int local119; 		// m[esp_92 - 32]{346}
    __size32 local12; 		// m[esp_92 + 4]{24}
    int local120; 		// m[esp_92 - 32]{346}
    int local121; 		// m[esp_92 - 32]{364}
    int local122; 		// m[esp_92 - 32]{364}
    int local123; 		// m[esp_92 - 32]{23}
    int local124; 		// m[esp_92 - 32]{23}
    int local125; 		// m[esp_92 - 32]{217}
    int local126; 		// m[esp_92 - 32]{295}
    int local127; 		// m[esp_92 - 32]{295}
    int local128; 		// m[esp_92 - 32]{295}
    int local129; 		// m[esp_92 - 32]{232}
    int local13; 		// m[esp_92 + 4]{328}
    int local130; 		// m[esp_92 - 32]{232}
    int local131; 		// m[esp_92 - 32]{401}
    int local132; 		// m[esp_92 - 32]{401}
    int local133; 		// m[esp_92 - 32]{7}
    int local134; 		// m[esp_92 - 32]{7}
    int local135; 		// tmpb{229}
    int local136; 		// tmpb{280}
    int local137; 		// tmpb{280}
    int local138; 		// tmpb{280}
    int local139; 		// tmpb{280}
    int local14; 		// m[esp_92 + 4]{328}
    int local140; 		// tmpb{292}
    int local141; 		// tmpb{280}
    int local142; 		// tmpb{397}
    int local143; 		// tmpb{342}
    int local144; 		// tmpb{213}
    int local145; 		// tmpb{379}
    int local146; 		// tmpb{360}
    int local147; 		// tmpb{397}
    int local148; 		// tmpb{342}
    int local149; 		// tmpb{213}
    __size32 local15; 		// m[esp_92 + 4]{24}
    int local150; 		// tmpb{379}
    int local151; 		// tmpb{360}
    int local152; 		// tmpb{328}
    int local153; 		// tmpb{328}
    int local154; 		// tmpb{328}
    int local155; 		// tmpb{328}
    int local156; 		// tmpb{213}
    int local157; 		// tmpb{213}
    int local158; 		// tmpb{342}
    int local159; 		// tmpb{342}
    __size32 local16; 		// m[esp_92 + 4]{24}
    int local160; 		// tmpb{342}
    int local161; 		// tmpb{342}
    int local162; 		// tmpb{360}
    int local163; 		// tmpb{360}
    int local164; 		// tmpb{379}
    int local165; 		// tmpb{379}
    int local166; 		// tmpb{397}
    int local167; 		// tmpb{397}
    int local168; 		// tmpb{397}
    int local169; 		// tmpb{397}
    __size32 local17; 		// m[esp_92 + 4]{296}
    int local170; 		// tmpb{19}
    int local171; 		// tmpb{19}
    int local172; 		// tmpb{19}
    int local173; 		// tmpb{19}
    int local174; 		// tmpb{292}
    int local175; 		// tmpb{292}
    int local176; 		// tmpb{292}
    int local177; 		// tmpb{229}
    int local178; 		// tmpb{229}
    int local179; 		// tmpb{229}
    __size32 local18; 		// m[esp_92 + 4]{402}
    int local180; 		// tmpb{280}
    int local181; 		// tmpb{229}
    int local182; 		// tmpb{19}
    int local183; 		// tmpb{292}
    int local184; 		// tmpb{328}
    int local185; 		// tmpb{397}
    int local186; 		// tmpb{5}
    int local187; 		// tmpb{5}
    int local188; 		// tmph{328}
    __size16 local189; 		// tmph{398}
    __size32 local19; 		// m[esp_92 + 4]{218}
    __size16 local190; 		// tmph{343}
    __size16 local191; 		// tmph{214}
    __size16 local192; 		// tmph{380}
    __size16 local193; 		// tmph{361}
    __size16 local194; 		// tmph{20}
    __size16 local195; 		// tmph{244}
    __size16 local196; 		// tmph{244}
    int local197; 		// tmph{328}
    int local198; 		// tmph{328}
    int local199; 		// tmph{328}
    int local2; 		// m[esp - 28]
    __size32 local20; 		// m[esp_92 + 4]{384}
    __size16 local200; 		// tmph{20}
    __size16 local201; 		// tmph{20}
    __size16 local202; 		// tmph{20}
    __size16 local203; 		// tmph{214}
    __size16 local204; 		// tmph{343}
    __size16 local205; 		// tmph{343}
    __size16 local206; 		// tmph{343}
    __size16 local207; 		// tmph{361}
    __size16 local208; 		// tmph{380}
    __size16 local209; 		// tmph{398}
    __size32 local21; 		// m[esp_92 + 4]{365}
    __size16 local210; 		// tmph{398}
    __size16 local211; 		// tmph{398}
    __size32 local212; 		// ebx{17}
    union { __size32 *; __size32; } local213; 		// esp_74{18}
    __size32 local214; 		// local55{21}
    __size32 local215; 		// local88{22}
    int local216; 		// local123{23}
    __size32 local217; 		// local12{24}
    unsigned int local218; 		// edx_1{90}
    __size32 local219; 		// esp_86{211}
    __size32 local22; 		// m[esp_92 + 4]{347}
    int local220; 		// local144{213}
    __size16 local221; 		// local191{214}
    __size32 local222; 		// m[esp_92 - 4]{215}
    __size32 local223; 		// local87{216}
    int local224; 		// local125{217}
    __size32 local225; 		// local19{218}
    __size32 local226; 		// esp_83{226}
    int local227; 		// local135{229}
    __size32 local228; 		// local39{230}
    __size32 local229; 		// local74{231}
    __size32 local23; 		// m[esp_92 + 4]{347}
    int local230; 		// local106{232}
    __size32 local231; 		// local11{233}
    int local232; 		// eax_1{239}
    union { __size32 *; __size32; } local233; 		// esp_77{256}
    unsigned int local234; 		// esi{258}
    __size32 local235; 		// local38{260}
    __size32 local236; 		// local73{261}
    int local237; 		// local105{262}
    union { __size32 *; unsigned int; } local238; 		// eax{271}
    __size32 local239; 		// esp_80{289}
    __size32 local24; 		// m[esp_92 + 4]{402}
    int local240; 		// local140{292}
    __size32 local241; 		// local56{293}
    __size32 local242; 		// local89{294}
    int local243; 		// local126{295}
    __size32 local244; 		// local17{296}
    unsigned int local245; 		// ebx{315}
    union { __size32 *; __size32; } local246; 		// esp_89{316}
    __size32 local247; 		// local42{320}
    __size32 local248; 		// local77{321}
    int local249; 		// local109{322}
    __size32 local25; 		// m[esp_92 + 4]{402}
    unsigned int local250; 		// ebx{337}
    __size32 local251; 		// esp_64{338}
    int local252; 		// local143{342}
    __size16 local253; 		// local190{343}
    __size32 local254; 		// local45{344}
    __size32 local255; 		// local80{345}
    int local256; 		// local112{346}
    __size32 local257; 		// local22{347}
    __size32 local258; 		// esp_67{356}
    unsigned int local259; 		// edi{359}
    __size32 local26; 		// m[esp_92 + 4]{4}
    int local260; 		// local146{360}
    __size16 local261; 		// local193{361}
    __size32 local262; 		// local43{362}
    __size32 local263; 		// local78{363}
    int local264; 		// local110{364}
    __size32 local265; 		// local21{365}
    __size32 local266; 		// esp_70{376}
    int local267; 		// local145{379}
    __size16 local268; 		// local192{380}
    __size32 local269; 		// local54{381}
    __size32 local27; 		// m[esp_92 + 4]{4}
    __size32 local270; 		// m[esp_92 - 8]{382}
    int local271; 		// m[esp_92 - 32]{383}
    __size32 local272; 		// local20{384}
    __size32 local273; 		// esp_71{394}
    int local274; 		// local142{397}
    __size16 local275; 		// local189{398}
    __size32 local276; 		// local44{399}
    __size32 local277; 		// local79{400}
    int local278; 		// local111{401}
    __size32 local279; 		// local18{402}
    __size32 local28; 		// m[esp_92 + 4]{233}
    __size32 local280; 		// esp{408}
    __size32 local29; 		// m[esp_92 + 4]{233}
    int local3; 		// m[esp - 32]
    __size32 local30; 		// m[esp_92 + 4]{296}
    __size32 local31; 		// m[esp_92 + 4]{296}
    __size32 local32; 		// m[esp_92 - 4]{8}
    __size32 local33; 		// m[esp_92 - 4]{8}
    __size32 local34; 		// m[esp_92 - 4]{8}
    int local35; 		// m[esp_92 - 4]{15}
    int local36; 		// m[esp_92 - 4]{15}
    int local37; 		// m[esp_92 - 4]{15}
    __size32 local38; 		// m[esp_92 - 4]{260}
    __size32 local39; 		// m[esp_92 - 4]{230}
    __size32 local4; 		// m[esp + 4]
    int local40; 		// m[esp_92 - 4]{280}
    int local41; 		// m[esp_92 - 4]{280}
    __size32 local42; 		// m[esp_92 - 4]{320}
    __size32 local43; 		// m[esp_92 - 4]{362}
    __size32 local44; 		// m[esp_92 - 4]{399}
    __size32 local45; 		// m[esp_92 - 4]{344}
    int local46; 		// m[esp_92 - 4]{328}
    int local47; 		// m[esp_92 - 4]{328}
    __size32 local48; 		// m[esp_92 - 4]{399}
    __size32 local49; 		// m[esp_92 - 4]{399}
    int local5; 		// m[esp_92 + 4]{15}
    __size32 local50; 		// m[esp_92 - 4]{362}
    __size32 local51; 		// m[esp_92 - 4]{362}
    __size32 local52; 		// m[esp_92 - 4]{230}
    __size32 local53; 		// m[esp_92 - 4]{230}
    __size32 local54; 		// m[esp_92 - 4]{381}
    __size32 local55; 		// m[esp_92 - 4]{21}
    __size32 local56; 		// m[esp_92 - 4]{293}
    __size32 local57; 		// m[esp_92 - 4]{260}
    __size32 local58; 		// m[esp_92 - 4]{260}
    __size32 local59; 		// m[esp_92 - 4]{344}
    int local6; 		// m[esp_92 + 4]{15}
    __size32 local60; 		// m[esp_92 - 4]{344}
    __size32 local61; 		// m[esp_92 - 4]{320}
    __size32 local62; 		// m[esp_92 - 4]{320}
    __size32 local63; 		// m[esp_92 - 4]{293}
    __size32 local64; 		// m[esp_92 - 4]{293}
    __size32 local65; 		// m[esp_92 - 4]{21}
    __size32 local66; 		// m[esp_92 - 4]{21}
    __size32 local67; 		// m[esp_92 - 8]{9}
    __size32 local68; 		// m[esp_92 - 8]{9}
    __size32 local69; 		// m[esp_92 - 8]{9}
    int local7; 		// m[esp_92 + 4]{15}
    int local70; 		// m[esp_92 - 8]{15}
    int local71; 		// m[esp_92 - 8]{15}
    int local72; 		// m[esp_92 - 8]{15}
    __size32 local73; 		// m[esp_92 - 8]{261}
    __size32 local74; 		// m[esp_92 - 8]{231}
    int local75; 		// m[esp_92 - 8]{280}
    int local76; 		// m[esp_92 - 8]{280}
    __size32 local77; 		// m[esp_92 - 8]{321}
    __size32 local78; 		// m[esp_92 - 8]{363}
    __size32 local79; 		// m[esp_92 - 8]{400}
    int local8; 		// m[esp_92 + 4]{280}
    __size32 local80; 		// m[esp_92 - 8]{345}
    int local81; 		// m[esp_92 - 8]{328}
    int local82; 		// m[esp_92 - 8]{328}
    __size32 local83; 		// m[esp_92 - 8]{321}
    __size32 local84; 		// m[esp_92 - 8]{321}
    __size32 local85; 		// m[esp_92 - 8]{261}
    __size32 local86; 		// m[esp_92 - 8]{261}
    __size32 local87; 		// m[esp_92 - 8]{216}
    __size32 local88; 		// m[esp_92 - 8]{22}
    __size32 local89; 		// m[esp_92 - 8]{294}
    int local9; 		// m[esp_92 + 4]{280}
    __size32 local90; 		// m[esp_92 - 8]{363}
    __size32 local91; 		// m[esp_92 - 8]{363}
    __size32 local92; 		// m[esp_92 - 8]{400}
    __size32 local93; 		// m[esp_92 - 8]{400}
    __size32 local94; 		// m[esp_92 - 8]{294}
    __size32 local95; 		// m[esp_92 - 8]{294}
    __size32 local96; 		// m[esp_92 - 8]{231}
    __size32 local97; 		// m[esp_92 - 8]{231}
    __size32 local98; 		// m[esp_92 - 8]{345}
    __size32 local99; 		// m[esp_92 - 8]{345}

    local32 = param4;
    local67 = param3;
    esp_1 = esp_92 - 28;
    ebx_1 = param2;
    eax = *(global_0x0807f2dc + 0x2434);
    al = (unsigned char) eax;
    local212 = ebx_1;
    local213 = esp_1;
    local214 = local32;
    local215 = local67;
    local216 = param1;
    local217 = param2;
    if (eax != 0) {
        (*eax)((unsigned char) eax, eax, param2, esp_92 - 4, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), param4, param3, pc, cl, dl, ecx, edx, esi, edi, param2);
        local212 = ebx;
        local213 = esp_4;
        local214 = local35;
        local215 = local70;
        local216 = local102;
        local217 = local5;
    }
    ebx = local212;
    esp_74 = local213;
    local170 = local186;
    local194 = tmph;
    local55 = local214;
    local88 = local215;
    local123 = local216;
    local12 = local217;
    local220 = local170;
    local221 = local194;
    local222 = local55;
    local223 = local88;
    local224 = local123;
    local225 = local12;
    local227 = local170;
    local228 = local55;
    local229 = local88;
    local230 = local123;
    local231 = local12;
    if (caml_exception_pointer == 0) {
        *(__size32*)esp_74 = ebx;
        caml_fatal_uncaught_exception(*esp_74, al);
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
    *(__size32*)esp_74 = ebx;
    ecx = caml_raise_exception(al, cl, dl); /* Warning: also results in edx, ebx, esp_7, ebp */
    *(__size32*)(esp_7 - 4) = ebp;
    if (*0x807d124 == 0) {
        array_bound_error_msg = 0x14fc;
        global_0x0807ce67 = 0;
        array_bound_error_bucket = 0x800;
        global_0x0807d12c = 0x80739a8;
        global_0x0807d130 = 0x807ce54;
        array_bound_error_bucket_inited = 1;
        *(__size32*)(esp_7 - 20) = 0x807ce6c;
        *(__size32*)(esp_7 - 24) = 0x807ce50;
        *(__size32*)(esp_7 - 28) = 4;
        caml_page_table_add(*(esp_7 - 28), *(esp_7 - 24), *(esp_7 - 20), ecx, edx);
        array_bound_error_bucket_inited = 1;
    }
    *(__size32*)(esp_7 - 28) = 0x807d12c;
    ebx = caml_raise(*(esp_7 - 64), *(esp_7 - 28), ebx, esp_7 - 4); /* Warning: also results in esp_10, ebp */
    *(__size32*)(esp_10 - 4) = ebp;
    *(__size32*)(esp_10 - 28) = 0x8073a78;
    ebx = caml_raise(*(esp_10 - 64), *(esp_10 - 28), ebx, esp_10 - 4); /* Warning: also results in esp_13, ebp */
    *(__size32*)(esp_13 - 4) = ebp;
    *(__size32*)(esp_13 - 28) = 0x8073964;
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
        local218 = edx;
        do {
            edx_1 = local218;
            ecx = *(ebx + edx_1 * 4);
            *(__size32*)(eax + edx_1 * 4 + 4) = ecx;
            edx_2 = edx_1 + 1;
            local218 = edx_2;
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
    *(__size32*)(esp_22 - 28) = 0x807396c;
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
    *(__size32*)(esp_31 - 28) = 0x80739a8;
    esp_34 = caml_raise_with_string(*(esp_31 - 24), esp_31 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_34 - 4) = ebp;
    eax = *(esp_34 + 4);
    *(__size32*)(esp_34 - 24) = eax;
    *(__size32*)(esp_34 - 28) = 0x807398c;
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
    *(__size32*)(esp_40 - 28) = 0x8073a80;
    esp_43 = caml_raise_constant(*(esp_40 - 28), esp_40 - 4, *(esp_40 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_43 - 4) = ebp;
    *(__size32*)(esp_43 - 28) = 0x8073a18;
    esp_46 = caml_raise_constant(*(esp_43 - 28), esp_43 - 4, *(esp_43 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_46 - 4) = ebp;
    *(__size32*)(esp_46 - 28) = 0x80739f0;
    esp_49 = caml_raise_constant(*(esp_46 - 28), esp_46 - 4, *(esp_46 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_49 - 4) = ebp;
    *(__size32*)(esp_49 - 28) = 0x80739d0;
    cl = caml_raise_constant(*(esp_49 - 28), esp_49 - 4, *(esp_49 - 176)); /* Warning: also results in dl, ecx, edx, ebx, esp_52, ebp, esi, edi */
    *(__size32*)(esp_52 - 4) = ebp;
    ebp = esp_52 - 4;
    *(unsigned int*)(esp_52 - 8) = edi;
    *(unsigned int*)(esp_52 - 12) = esi;
    *(unsigned int*)(esp_52 - 16) = ebx;
    esp_55 = esp_52 - 60;
    eax = *(esp_52 + 8);
    al = (unsigned char) eax;
    local219 = esp_55;
    local226 = esp_55;
    if (eax != 0) {
        edx = *(esp_52 + 16);
        *(__size32*)(esp_52 - 36) = edx;
        edx = *(esp_52 + 12);
        *(__size32*)(esp_52 - 32) = eax;
        do {
bb0x8062347:
            esp_83 = local226;
            local135 = local227;
            local39 = local228;
            local74 = local229;
            local106 = local230;
            local11 = local231;
            esi = *(global_0x0807f2dc + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local219 = esp_83;
            local220 = local135;
            local222 = local39;
            local223 = local74;
            local224 = local106;
            local225 = local11;
            local226 = esp_83;
            local227 = local135;
            local228 = local39;
            local229 = local74;
            local230 = local106;
            local231 = local11;
            local232 = eax;
            local233 = esp_83;
            local235 = local39;
            local236 = local74;
            local237 = local106;
            local239 = esp_83;
            local240 = local135;
            local241 = local39;
            local242 = local74;
            local243 = local106;
            local244 = local11;
            if (*ebx != edx) {
                do {
                    eax_1 = local232;
                    eax_2 = eax_1 + 1 & esi;
                    ebx = *(caml_frame_descriptors + (eax_1 + 1 & esi) * 4);
                    local232 = eax_2;
                } while (*ebx != edx);
            }
            local195 = *(ebx + 4) + 1;
            local221 = local195;
            if (*(ebx + 4) != -1) {
                esi = *(unsigned short*)(ebx + 6);
                local234 = esi;
                if ((int)esi > 0) {
                    edi = ebx + 8;
                    *(__size32*)(ebp - 36) = ebx;
                    ebx = *(ebp + 8);
                    for(;;) {
                        esp_77 = local233;
                        esi = local234;
                        local38 = local235;
                        local73 = local236;
                        local105 = local237;
                        eax_4 = *(unsigned short*)edi;
                        if (((unsigned char) eax_4 & 0x1) == 0) {
                            eax_7 = eax_4 + *(ebp - 28);
                            flags = ADDFLAGS32(eax_4, *(ebp - 28), eax_7);
                            local238 = eax_7;
                        }
                        else {
                            flags = SARFLAGS((int)eax_4 >> 1, eax_4, 1);
                            edx = *(ebp - 32);
                            eax = edx + ((int)eax_4 >> 1) * 4;
                            local238 = eax;
                        }
                        eax = local238;
                        *(__size32*)(esp_77 + 4) = eax;
                        eax = *eax;
                        *(__size32*)esp_77 = eax;
                        (*ebx)((unsigned char) eax, cl, dl, eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, local38, local73, local105, param2);
                        local233 = esp_58;
                        local235 = local40;
                        local236 = local75;
                        local237 = local107;
                        local239 = esp_58;
                        local240 = local136;
                        local241 = local40;
                        local242 = local75;
                        local243 = local107;
                        local244 = local8;
                        esi_4 = esi_1 - 1;
                        local234 = esi_4;
                        if ((int)esi_1 <= 1) {
                            break;
                        }
                        edi += 2;
                    }
                    ebx = *(ebp - 36);
                }
                esp_80 = local239;
                local140 = local240;
                local56 = local241;
                local89 = local242;
                local126 = local243;
                local17 = local244;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local226 = esp_80;
                local227 = local140;
                local228 = local56;
                local229 = local89;
                local230 = local126;
                local231 = local17;
                goto bb0x8062347;
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
    esp_86 = local219;
    local144 = local220;
    local191 = local221;
    *(__size32*)(esp_92 - 4) = local222;
    local87 = local223;
    local125 = local224;
    local19 = local225;
    local273 = esp_86;
    local274 = local144;
    local275 = local191;
    local276 = *(esp_92 - 4);
    local277 = local87;
    local278 = local125;
    local279 = local19;
    local280 = esp_86;
    if (*(ebp + 24) != 0) {
        esi = *(ebp + 24);
        *(__size32*)(ebp - 28) = 0;
        do {
            esp_71 = local273;
            local142 = local274;
            local189 = local275;
            local44 = local276;
            local79 = local277;
            local111 = local278;
            local18 = local279;
            edi = 0;
            local258 = esp_71;
            local259 = edi;
            local260 = local142;
            local261 = local189;
            local262 = local44;
            local263 = local79;
            local264 = local111;
            local265 = local18;
            local266 = esp_71;
            local267 = local142;
            local268 = local189;
            local269 = local44;
            local270 = local79;
            local271 = local111;
            local272 = local18;
            if (*(esi + 4) > 0) {
                do {
                    esp_67 = local258;
                    edi = local259;
                    local146 = local260;
                    local193 = local261;
                    local43 = local262;
                    local78 = local263;
                    local110 = local264;
                    local21 = local265;
                    ebx = *(ebp - 28);
                    local245 = ebx;
                    local246 = esp_67;
                    local247 = local43;
                    local248 = local78;
                    local249 = local110;
                    local250 = ebx;
                    local251 = esp_67;
                    local252 = local146;
                    local253 = local193;
                    local254 = local43;
                    local255 = local78;
                    local256 = local110;
                    local257 = local21;
                    if (*(esi + 8) > 0) {
                        do {
                            ebx = local245;
                            esp_89 = local246;
                            local42 = local247;
                            local77 = local248;
                            local109 = local249;
                            eax_9 = ebx * 4 + *(esi + edi * 4 + 12);
                            *(__size32*)(esp_89 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_89 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, cl, dl, eax_12, ecx, edx, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), local42, local77, local109, param2);
                            local246 = esp_61;
                            local247 = local46;
                            local248 = local81;
                            local249 = local113;
                            local251 = esp_61;
                            local252 = local152;
                            local253 = local188;
                            local254 = local46;
                            local255 = local81;
                            local256 = local113;
                            local257 = local13;
                            ebx_6 = ebx_3 + 1;
                            local245 = ebx_6;
                            local250 = ebx_6;
                        } while (*(esi + 8) > ebx_3 + 1);
                    }
                    ebx = local250;
                    esp_64 = local251;
                    edi_1 = edi;
                    local143 = local252;
                    local190 = local253;
                    local45 = local254;
                    local80 = local255;
                    local112 = local256;
                    local22 = local257;
                    edi_2 = edi_1 + 1;
                    local258 = esp_64;
                    local259 = edi_2;
                    local260 = local143;
                    local261 = local190;
                    local262 = local45;
                    local263 = local80;
                    local264 = local112;
                    local265 = local22;
                    local266 = esp_64;
                    local267 = local143;
                    local268 = local190;
                    local269 = local45;
                    local270 = local80;
                    local271 = local112;
                    local272 = local22;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_70 = local266;
            local145 = local267;
            local192 = local268;
            local54 = local269;
            *(__size32*)(esp_92 - 8) = local270;
            *(esp_92 - 32) = local271;
            local20 = local272;
            esi = *esi;
            local273 = esp_70;
            local274 = local145;
            local275 = local192;
            local276 = local54;
            local277 = *(esp_92 - 8);
            local278 = *(esp_92 - 32);
            local279 = local20;
            local280 = esp_70;
        } while (esi == 0);
    }
    esp = local280;
    ebx = *(esp + 44);
    esi = *(esp + 48);
    ebp = *(esp + 56);
    return ecx; /* WARNING: Also returning: edx := edx, ebx := ebx, ebp := ebp, esi := esi */
}

/** address: 0x08065851 */
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
    eax = *(global_0x0807f2dc + 0xfd8) - param1 * 4 - 4;
    *(unsigned int*)(global_0x0807f2dc + 0xfd8) = eax;
    local4 = esp_1;
    if (eax < *(global_0x0807f2dc + 0xfdc)) {
        *(unsigned int*)(global_0x0807f2dc + 0xfd8) = eax + param1 * 4 + 4;
        esp_4 = esp_8 - 16;
        caml_minor_collection();
        local4 = esp_4;
        *(__size32*)(global_0x0807f2dc + 0xfd8) = *(global_0x0807f2dc + 0xfd8) - param1 * 4 - 4;
    }
    esp_7 = local4;
    eax = *0x80802b4;
    *(__size32*)eax = param2 + (param1 << 10) + 768;
    eax = *(global_0x0807f2dc + 0xfd8);
    ebx = *esp_7;
    esi = *(esp_7 + 4);
    return eax + 4; /* WARNING: Also returning: ebx := ebx, esi := esi */
}

/** address: 0x08062167 */
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
    __size32 esp_44; 		// r28{1}
    __size32 esp_45; 		// r28{1}
    union { __size32; __size32 *; } esp_46; 		// r28{266}
    union { __size32; __size32 *; } esp_47; 		// r28{266}
    union { __size32; __size32 *; } esp_48; 		// r28{183}
    __size32 esp_49; 		// r28{141}
    __size32 esp_5; 		// r28{32}
    __size32 esp_50; 		// r28{329}
    __size32 esp_51; 		// r28{227}
    __size32 esp_52; 		// r28{391}
    __size32 esp_53; 		// r28{114}
    __size32 esp_54; 		// r28{361}
    __size32 esp_55; 		// r28{299}
    __size32 esp_56; 		// r28{299}
    __size32 esp_57; 		// r28{329}
    __size32 esp_58; 		// r28{329}
    __size32 esp_59; 		// r28{391}
    __size32 esp_6; 		// r28{32}
    __size32 esp_60; 		// r28{391}
    union { __size32; __size32 *; } esp_61; 		// r28{183}
    union { __size32; __size32 *; } esp_62; 		// r28{183}
    __size32 esp_63; 		// r28{227}
    __size32 esp_64; 		// r28{227}
    __size32 esp_65; 		// r28{141}
    __size32 esp_66; 		// r28{141}
    __size32 esp_67; 		// r28{114}
    __size32 esp_68; 		// r28{114}
    __size32 *esp_7; 		// r28{37}
    __size32 *esp_8; 		// r28{37}
    __size32 *esp_9; 		// r28{37}
    int local0; 		// m[esp - 4]
    int local1; 		// m[esp - 108]
    int local10; 		// m[esp - 76]
    __size32 local100; 		// m[esp_44 - 28]{188}
    __size32 local101; 		// m[esp_44 - 28]{188}
    __size32 local102; 		// m[esp_44 - 28]{232}
    __size32 local103; 		// m[esp_44 - 28]{232}
    __size32 local104; 		// m[esp_44 - 28]{146}
    __size32 local105; 		// m[esp_44 - 28]{146}
    __size32 local106; 		// m[esp_44 - 28]{367}
    __size32 local107; 		// m[esp_44 - 28]{271}
    __size32 local108; 		// m[esp_44 - 28]{271}
    __size32 local109; 		// m[esp_44 - 28]{306}
    int local11; 		// m[esp - 68]
    __size32 local110; 		// m[esp_44 - 28]{306}
    __size32 local111; 		// m[esp_44 - 28]{336}
    __size32 local112; 		// m[esp_44 - 28]{336}
    __size32 local113; 		// m[esp_44 - 28]{397}
    __size32 local114; 		// m[esp_44 - 28]{397}
    __size32 local115; 		// m[esp_44 - 32]{12}
    __size32 local116; 		// m[esp_44 - 32]{12}
    __size32 local117; 		// m[esp_44 - 32]{12}
    __size32 local118; 		// m[esp_44 - 32]{189}
    __size32 local119; 		// m[esp_44 - 32]{147}
    int local12; 		// m[esp - 104]
    int local120; 		// m[esp_44 - 32]{218}
    int local121; 		// m[esp_44 - 32]{218}
    __size32 local122; 		// m[esp_44 - 32]{272}
    __size32 local123; 		// m[esp_44 - 32]{337}
    __size32 local124; 		// m[esp_44 - 32]{398}
    __size32 local125; 		// m[esp_44 - 32]{307}
    int local126; 		// m[esp_44 - 32]{289}
    int local127; 		// m[esp_44 - 32]{289}
    __size32 local128; 		// m[esp_44 - 32]{189}
    __size32 local129; 		// m[esp_44 - 32]{189}
    int local13; 		// m[esp - 112]
    __size32 local130; 		// m[esp_44 - 32]{233}
    __size32 local131; 		// m[esp_44 - 32]{233}
    __size32 local132; 		// m[esp_44 - 32]{147}
    __size32 local133; 		// m[esp_44 - 32]{147}
    __size32 local134; 		// m[esp_44 - 32]{368}
    __size32 local135; 		// m[esp_44 - 32]{272}
    __size32 local136; 		// m[esp_44 - 32]{272}
    __size32 local137; 		// m[esp_44 - 32]{307}
    __size32 local138; 		// m[esp_44 - 32]{307}
    __size32 local139; 		// m[esp_44 - 32]{337}
    int local14; 		// m[esp - 144]
    __size32 local140; 		// m[esp_44 - 32]{337}
    __size32 local141; 		// m[esp_44 - 32]{398}
    __size32 local142; 		// m[esp_44 - 32]{398}
    __size32 local143; 		// m[esp_44 - 36]{10}
    __size32 local144; 		// m[esp_44 - 36]{10}
    __size32 local145; 		// m[esp_44 - 36]{10}
    __size32 local146; 		// m[esp_44 - 36]{190}
    __size32 local147; 		// m[esp_44 - 36]{148}
    int local148; 		// m[esp_44 - 36]{218}
    int local149; 		// m[esp_44 - 36]{218}
    __size32 local15; 		// m[esp + 4]
    __size32 local150; 		// m[esp_44 - 36]{273}
    __size32 local151; 		// m[esp_44 - 36]{338}
    __size32 local152; 		// m[esp_44 - 36]{399}
    __size32 local153; 		// m[esp_44 - 36]{308}
    int local154; 		// m[esp_44 - 36]{289}
    int local155; 		// m[esp_44 - 36]{289}
    __size32 local156; 		// m[esp_44 - 36]{190}
    __size32 local157; 		// m[esp_44 - 36]{190}
    __size32 local158; 		// m[esp_44 - 36]{234}
    __size32 local159; 		// m[esp_44 - 36]{234}
    __size32 local16; 		// m[esp + 8]
    __size32 local160; 		// m[esp_44 - 36]{148}
    __size32 local161; 		// m[esp_44 - 36]{148}
    __size32 local162; 		// m[esp_44 - 36]{369}
    __size32 local163; 		// m[esp_44 - 36]{273}
    __size32 local164; 		// m[esp_44 - 36]{273}
    __size32 local165; 		// m[esp_44 - 36]{308}
    __size32 local166; 		// m[esp_44 - 36]{308}
    __size32 local167; 		// m[esp_44 - 36]{338}
    __size32 local168; 		// m[esp_44 - 36]{338}
    __size32 local169; 		// m[esp_44 - 36]{399}
    int local17; 		// m[esp_44 + 4]{218}
    __size32 local170; 		// m[esp_44 - 36]{399}
    __size32 local171; 		// m[esp_44 - 40]{11}
    __size32 local172; 		// m[esp_44 - 40]{11}
    __size32 local173; 		// m[esp_44 - 40]{11}
    __size32 local174; 		// m[esp_44 - 40]{191}
    __size32 local175; 		// m[esp_44 - 40]{149}
    int local176; 		// m[esp_44 - 40]{218}
    int local177; 		// m[esp_44 - 40]{218}
    __size32 local178; 		// m[esp_44 - 40]{274}
    __size32 local179; 		// m[esp_44 - 40]{339}
    int local18; 		// m[esp_44 + 4]{218}
    __size32 local180; 		// m[esp_44 - 40]{400}
    __size32 local181; 		// m[esp_44 - 40]{309}
    int local182; 		// m[esp_44 - 40]{289}
    int local183; 		// m[esp_44 - 40]{289}
    __size32 local184; 		// m[esp_44 - 40]{191}
    __size32 local185; 		// m[esp_44 - 40]{191}
    __size32 local186; 		// m[esp_44 - 40]{235}
    __size32 local187; 		// m[esp_44 - 40]{235}
    __size32 local188; 		// m[esp_44 - 40]{149}
    __size32 local189; 		// m[esp_44 - 40]{149}
    int local19; 		// m[esp_44 + 4]{218}
    __size32 local190; 		// m[esp_44 - 40]{370}
    __size32 local191; 		// m[esp_44 - 40]{274}
    __size32 local192; 		// m[esp_44 - 40]{274}
    __size32 local193; 		// m[esp_44 - 40]{309}
    __size32 local194; 		// m[esp_44 - 40]{309}
    __size32 local195; 		// m[esp_44 - 40]{339}
    __size32 local196; 		// m[esp_44 - 40]{339}
    __size32 local197; 		// m[esp_44 - 40]{400}
    __size32 local198; 		// m[esp_44 - 40]{400}
    __size32 local199; 		// m[esp_44 - 44]{9}
    int local2; 		// m[esp - 44]
    __size32 local20; 		// m[esp_44 + 4]{159}
    __size32 local200; 		// m[esp_44 - 44]{9}
    __size32 local201; 		// m[esp_44 - 44]{9}
    __size32 local202; 		// m[esp_44 - 44]{192}
    __size32 local203; 		// m[esp_44 - 44]{150}
    int local204; 		// m[esp_44 - 44]{218}
    int local205; 		// m[esp_44 - 44]{218}
    __size32 local206; 		// m[esp_44 - 44]{275}
    __size32 local207; 		// m[esp_44 - 44]{340}
    __size32 local208; 		// m[esp_44 - 44]{401}
    __size32 local209; 		// m[esp_44 - 44]{310}
    int local21; 		// m[esp_44 + 4]{289}
    int local210; 		// m[esp_44 - 44]{289}
    int local211; 		// m[esp_44 - 44]{289}
    __size32 local212; 		// m[esp_44 - 44]{192}
    __size32 local213; 		// m[esp_44 - 44]{192}
    __size32 local214; 		// m[esp_44 - 44]{236}
    __size32 local215; 		// m[esp_44 - 44]{236}
    __size32 local216; 		// m[esp_44 - 44]{150}
    __size32 local217; 		// m[esp_44 - 44]{150}
    __size32 local218; 		// m[esp_44 - 44]{371}
    __size32 local219; 		// m[esp_44 - 44]{275}
    int local22; 		// m[esp_44 + 4]{289}
    __size32 local220; 		// m[esp_44 - 44]{275}
    __size32 local221; 		// m[esp_44 - 44]{310}
    __size32 local222; 		// m[esp_44 - 44]{310}
    __size32 local223; 		// m[esp_44 - 44]{340}
    __size32 local224; 		// m[esp_44 - 44]{340}
    __size32 local225; 		// m[esp_44 - 44]{401}
    __size32 local226; 		// m[esp_44 - 44]{401}
    __size32 local227; 		// m[esp_44 - 48]{21}
    __size32 local228; 		// m[esp_44 - 48]{21}
    __size32 local229; 		// m[esp_44 - 48]{21}
    __size32 local23; 		// m[esp_44 + 4]{3}
    __size32 local230; 		// m[esp_44 - 48]{193}
    __size32 local231; 		// m[esp_44 - 48]{151}
    int local232; 		// m[esp_44 - 48]{218}
    int local233; 		// m[esp_44 - 48]{218}
    __size32 local234; 		// m[esp_44 - 48]{276}
    __size32 local235; 		// m[esp_44 - 48]{341}
    __size32 local236; 		// m[esp_44 - 48]{402}
    __size32 local237; 		// m[esp_44 - 48]{311}
    int local238; 		// m[esp_44 - 48]{289}
    int local239; 		// m[esp_44 - 48]{289}
    __size32 local24; 		// m[esp_44 + 4]{3}
    __size32 local240; 		// m[esp_44 - 48]{193}
    __size32 local241; 		// m[esp_44 - 48]{193}
    __size32 local242; 		// m[esp_44 - 48]{237}
    __size32 local243; 		// m[esp_44 - 48]{237}
    __size32 local244; 		// m[esp_44 - 48]{151}
    __size32 local245; 		// m[esp_44 - 48]{151}
    __size32 local246; 		// m[esp_44 - 48]{372}
    __size32 local247; 		// m[esp_44 - 48]{276}
    __size32 local248; 		// m[esp_44 - 48]{276}
    __size32 local249; 		// m[esp_44 - 48]{311}
    __size32 local25; 		// m[esp_44 + 4]{410}
    __size32 local250; 		// m[esp_44 - 48]{311}
    __size32 local251; 		// m[esp_44 - 48]{341}
    __size32 local252; 		// m[esp_44 - 48]{341}
    __size32 local253; 		// m[esp_44 - 48]{402}
    __size32 local254; 		// m[esp_44 - 48]{402}
    __size32 local255; 		// m[esp_44 - 68]{18}
    __size32 local256; 		// m[esp_44 - 68]{18}
    __size32 local257; 		// m[esp_44 - 68]{18}
    __size32 local258; 		// m[esp_44 - 68]{194}
    __size32 local259; 		// m[esp_44 - 68]{152}
    __size32 local26; 		// m[esp_44 + 4]{319}
    int local260; 		// m[esp_44 - 68]{218}
    int local261; 		// m[esp_44 - 68]{218}
    __size32 local262; 		// m[esp_44 - 68]{277}
    __size32 local263; 		// m[esp_44 - 68]{342}
    __size32 local264; 		// m[esp_44 - 68]{403}
    __size32 local265; 		// m[esp_44 - 68]{312}
    int local266; 		// m[esp_44 - 68]{289}
    int local267; 		// m[esp_44 - 68]{289}
    __size32 local268; 		// m[esp_44 - 68]{342}
    __size32 local269; 		// m[esp_44 - 68]{342}
    __size32 local27; 		// m[esp_44 + 4]{132}
    __size32 local270; 		// m[esp_44 - 68]{312}
    __size32 local271; 		// m[esp_44 - 68]{312}
    __size32 local272; 		// m[esp_44 - 68]{373}
    __size32 local273; 		// m[esp_44 - 68]{238}
    __size32 local274; 		// m[esp_44 - 68]{277}
    __size32 local275; 		// m[esp_44 - 68]{277}
    __size32 local276; 		// m[esp_44 - 68]{152}
    __size32 local277; 		// m[esp_44 - 68]{152}
    __size32 local278; 		// m[esp_44 - 68]{403}
    __size32 local279; 		// m[esp_44 - 68]{403}
    __size32 local28; 		// m[esp_44 + 4]{380}
    __size32 local280; 		// m[esp_44 - 68]{194}
    __size32 local281; 		// m[esp_44 - 68]{194}
    __size32 local282; 		// m[esp_44 - 68]{238}
    __size32 local283; 		// m[esp_44 - 68]{238}
    __size32 local284; 		// m[esp_44 - 72]{16}
    __size32 local285; 		// m[esp_44 - 72]{16}
    __size32 local286; 		// m[esp_44 - 72]{16}
    __size32 local287; 		// m[esp_44 - 72]{195}
    __size32 local288; 		// m[esp_44 - 72]{153}
    int local289; 		// m[esp_44 - 72]{218}
    __size32 local29; 		// m[esp_44 + 4]{349}
    int local290; 		// m[esp_44 - 72]{218}
    __size32 local291; 		// m[esp_44 - 72]{278}
    __size32 local292; 		// m[esp_44 - 72]{343}
    __size32 local293; 		// m[esp_44 - 72]{404}
    __size32 local294; 		// m[esp_44 - 72]{313}
    int local295; 		// m[esp_44 - 72]{289}
    int local296; 		// m[esp_44 - 72]{289}
    __size32 local297; 		// m[esp_44 - 72]{278}
    __size32 local298; 		// m[esp_44 - 72]{278}
    __size32 local299; 		// m[esp_44 - 72]{239}
    int local3; 		// m[esp - 36]
    __size32 local30; 		// m[esp_44 + 4]{245}
    __size32 local300; 		// m[esp_44 - 72]{239}
    __size32 local301; 		// m[esp_44 - 72]{404}
    __size32 local302; 		// m[esp_44 - 72]{404}
    __size32 local303; 		// m[esp_44 - 72]{313}
    __size32 local304; 		// m[esp_44 - 72]{313}
    __size32 local305; 		// m[esp_44 - 72]{195}
    __size32 local306; 		// m[esp_44 - 72]{195}
    __size32 local307; 		// m[esp_44 - 72]{126}
    __size32 local308; 		// m[esp_44 - 72]{153}
    __size32 local309; 		// m[esp_44 - 72]{153}
    __size32 local31; 		// m[esp_44 + 4]{245}
    __size32 local310; 		// m[esp_44 - 72]{343}
    __size32 local311; 		// m[esp_44 - 72]{343}
    __size32 local312; 		// m[esp_44 - 76]{17}
    __size32 local313; 		// m[esp_44 - 76]{17}
    __size32 local314; 		// m[esp_44 - 76]{17}
    __size32 local315; 		// m[esp_44 - 76]{196}
    __size32 local316; 		// m[esp_44 - 76]{154}
    int local317; 		// m[esp_44 - 76]{218}
    int local318; 		// m[esp_44 - 76]{218}
    __size32 local319; 		// m[esp_44 - 76]{279}
    __size32 local32; 		// m[esp_44 + 4]{159}
    __size32 local320; 		// m[esp_44 - 76]{344}
    __size32 local321; 		// m[esp_44 - 76]{405}
    __size32 local322; 		// m[esp_44 - 76]{314}
    int local323; 		// m[esp_44 - 76]{289}
    int local324; 		// m[esp_44 - 76]{289}
    __size32 local325; 		// m[esp_44 - 76]{196}
    __size32 local326; 		// m[esp_44 - 76]{196}
    __size32 local327; 		// m[esp_44 - 76]{240}
    __size32 local328; 		// m[esp_44 - 76]{240}
    __size32 local329; 		// m[esp_44 - 76]{154}
    __size32 local33; 		// m[esp_44 + 4]{159}
    __size32 local330; 		// m[esp_44 - 76]{154}
    __size32 local331; 		// m[esp_44 - 76]{375}
    __size32 local332; 		// m[esp_44 - 76]{279}
    __size32 local333; 		// m[esp_44 - 76]{279}
    __size32 local334; 		// m[esp_44 - 76]{314}
    __size32 local335; 		// m[esp_44 - 76]{314}
    __size32 local336; 		// m[esp_44 - 76]{344}
    __size32 local337; 		// m[esp_44 - 76]{344}
    __size32 local338; 		// m[esp_44 - 76]{405}
    __size32 local339; 		// m[esp_44 - 76]{405}
    __size32 local34; 		// m[esp_44 + 4]{319}
    __size32 local340; 		// m[esp_44 - 80]{14}
    __size32 local341; 		// m[esp_44 - 80]{14}
    __size32 local342; 		// m[esp_44 - 80]{14}
    __size32 local343; 		// m[esp_44 - 80]{197}
    __size32 local344; 		// m[esp_44 - 80]{155}
    int local345; 		// m[esp_44 - 80]{218}
    int local346; 		// m[esp_44 - 80]{218}
    __size32 local347; 		// m[esp_44 - 80]{280}
    __size32 local348; 		// m[esp_44 - 80]{345}
    __size32 local349; 		// m[esp_44 - 80]{406}
    __size32 local35; 		// m[esp_44 + 4]{319}
    __size32 local350; 		// m[esp_44 - 80]{315}
    int local351; 		// m[esp_44 - 80]{289}
    int local352; 		// m[esp_44 - 80]{289}
    __size32 local353; 		// m[esp_44 - 80]{197}
    __size32 local354; 		// m[esp_44 - 80]{197}
    __size32 local355; 		// m[esp_44 - 80]{241}
    __size32 local356; 		// m[esp_44 - 80]{241}
    __size32 local357; 		// m[esp_44 - 80]{155}
    __size32 local358; 		// m[esp_44 - 80]{155}
    __size32 local359; 		// m[esp_44 - 80]{376}
    __size32 local36; 		// m[esp_44 + 4]{410}
    __size32 local360; 		// m[esp_44 - 80]{280}
    __size32 local361; 		// m[esp_44 - 80]{280}
    __size32 local362; 		// m[esp_44 - 80]{315}
    __size32 local363; 		// m[esp_44 - 80]{315}
    __size32 local364; 		// m[esp_44 - 80]{345}
    __size32 local365; 		// m[esp_44 - 80]{345}
    __size32 local366; 		// m[esp_44 - 80]{406}
    __size32 local367; 		// m[esp_44 - 80]{406}
    __size32 local368; 		// m[esp_44 - 104]{19}
    __size32 local369; 		// m[esp_44 - 104]{19}
    __size32 local37; 		// m[esp_44 + 4]{410}
    __size32 local370; 		// m[esp_44 - 104]{19}
    __size32 local371; 		// m[esp_44 - 104]{198}
    __size32 local372; 		// m[esp_44 - 104]{156}
    int local373; 		// m[esp_44 - 104]{218}
    int local374; 		// m[esp_44 - 104]{218}
    __size32 local375; 		// m[esp_44 - 104]{281}
    __size32 local376; 		// m[esp_44 - 104]{346}
    __size32 local377; 		// m[esp_44 - 104]{407}
    __size32 local378; 		// m[esp_44 - 104]{316}
    int local379; 		// m[esp_44 - 104]{289}
    int local38; 		// m[esp_44 + 8]{218}
    int local380; 		// m[esp_44 - 104]{289}
    __size32 local381; 		// m[esp_44 - 104]{198}
    __size32 local382; 		// m[esp_44 - 104]{198}
    __size32 local383; 		// m[esp_44 - 104]{242}
    __size32 local384; 		// m[esp_44 - 104]{242}
    __size32 local385; 		// m[esp_44 - 104]{156}
    __size32 local386; 		// m[esp_44 - 104]{156}
    __size32 local387; 		// m[esp_44 - 104]{377}
    __size32 local388; 		// m[esp_44 - 104]{281}
    __size32 local389; 		// m[esp_44 - 104]{281}
    int local39; 		// m[esp_44 + 8]{218}
    __size32 local390; 		// m[esp_44 - 104]{316}
    __size32 local391; 		// m[esp_44 - 104]{316}
    __size32 local392; 		// m[esp_44 - 104]{346}
    __size32 local393; 		// m[esp_44 - 104]{346}
    __size32 local394; 		// m[esp_44 - 104]{407}
    __size32 local395; 		// m[esp_44 - 104]{407}
    __size32 local396; 		// m[esp_44 - 108]{24}
    __size32 local397; 		// m[esp_44 - 108]{24}
    __size32 local398; 		// m[esp_44 - 108]{24}
    __size32 local399; 		// m[esp_44 - 108]{199}
    int local4; 		// m[esp - 40]
    int local40; 		// m[esp_44 + 8]{218}
    __size32 local400; 		// m[esp_44 - 108]{157}
    int local401; 		// m[esp_44 - 108]{218}
    int local402; 		// m[esp_44 - 108]{218}
    __size32 local403; 		// m[esp_44 - 108]{282}
    __size32 local404; 		// m[esp_44 - 108]{347}
    __size32 local405; 		// m[esp_44 - 108]{408}
    __size32 local406; 		// m[esp_44 - 108]{317}
    int local407; 		// m[esp_44 - 108]{289}
    int local408; 		// m[esp_44 - 108]{289}
    __size32 local409; 		// m[esp_44 - 108]{199}
    __size32 local41; 		// m[esp_44 + 8]{160}
    __size32 local410; 		// m[esp_44 - 108]{199}
    __size32 local411; 		// m[esp_44 - 108]{243}
    __size32 local412; 		// m[esp_44 - 108]{243}
    __size32 local413; 		// m[esp_44 - 108]{157}
    __size32 local414; 		// m[esp_44 - 108]{157}
    __size32 local415; 		// m[esp_44 - 108]{378}
    __size32 local416; 		// m[esp_44 - 108]{282}
    __size32 local417; 		// m[esp_44 - 108]{282}
    __size32 local418; 		// m[esp_44 - 108]{317}
    __size32 local419; 		// m[esp_44 - 108]{317}
    int local42; 		// m[esp_44 + 8]{289}
    __size32 local420; 		// m[esp_44 - 108]{347}
    __size32 local421; 		// m[esp_44 - 108]{347}
    __size32 local422; 		// m[esp_44 - 108]{408}
    __size32 local423; 		// m[esp_44 - 108]{408}
    unsigned int local424; 		// m[esp_44 - 112]{25}
    unsigned int local425; 		// m[esp_44 - 112]{25}
    unsigned int local426; 		// m[esp_44 - 112]{25}
    unsigned int local427; 		// m[esp_44 - 112]{200}
    unsigned int local428; 		// m[esp_44 - 112]{158}
    int local429; 		// m[esp_44 - 112]{218}
    int local43; 		// m[esp_44 + 8]{289}
    int local430; 		// m[esp_44 - 112]{218}
    unsigned int local431; 		// m[esp_44 - 112]{283}
    unsigned int local432; 		// m[esp_44 - 112]{348}
    unsigned int local433; 		// m[esp_44 - 112]{409}
    unsigned int local434; 		// m[esp_44 - 112]{318}
    int local435; 		// m[esp_44 - 112]{289}
    int local436; 		// m[esp_44 - 112]{289}
    unsigned int local437; 		// m[esp_44 - 112]{200}
    unsigned int local438; 		// m[esp_44 - 112]{200}
    unsigned int local439; 		// m[esp_44 - 112]{244}
    __size32 local44; 		// m[esp_44 + 8]{4}
    unsigned int local440; 		// m[esp_44 - 112]{244}
    unsigned int local441; 		// m[esp_44 - 112]{158}
    unsigned int local442; 		// m[esp_44 - 112]{158}
    unsigned int local443; 		// m[esp_44 - 112]{379}
    unsigned int local444; 		// m[esp_44 - 112]{283}
    unsigned int local445; 		// m[esp_44 - 112]{283}
    unsigned int local446; 		// m[esp_44 - 112]{318}
    unsigned int local447; 		// m[esp_44 - 112]{318}
    unsigned int local448; 		// m[esp_44 - 112]{348}
    unsigned int local449; 		// m[esp_44 - 112]{348}
    __size32 local45; 		// m[esp_44 + 8]{4}
    unsigned int local450; 		// m[esp_44 - 112]{409}
    unsigned int local451; 		// m[esp_44 - 112]{409}
    int local452; 		// tmpb{144}
    int local453; 		// tmpb{218}
    int local454; 		// tmpb{218}
    int local455; 		// tmpb{218}
    int local456; 		// tmpb{230}
    int local457; 		// tmpb{218}
    int local458; 		// tmpb{394}
    int local459; 		// tmpb{303}
    __size32 local46; 		// m[esp_44 + 8]{411}
    int local460; 		// tmpb{116}
    int local461; 		// tmpb{364}
    int local462; 		// tmpb{333}
    int local463; 		// tmpb{394}
    int local464; 		// tmpb{303}
    int local465; 		// tmpb{116}
    int local466; 		// tmpb{364}
    int local467; 		// tmpb{333}
    int local468; 		// tmpb{289}
    int local469; 		// tmpb{289}
    __size32 local47; 		// m[esp_44 + 8]{320}
    int local470; 		// tmpb{289}
    int local471; 		// tmpb{230}
    int local472; 		// tmpb{230}
    int local473; 		// tmpb{230}
    int local474; 		// tmpb{144}
    int local475; 		// tmpb{144}
    int local476; 		// tmpb{144}
    int local477; 		// tmpb{116}
    int local478; 		// tmpb{303}
    int local479; 		// tmpb{303}
    __size32 local48; 		// m[esp_44 + 8]{133}
    int local480; 		// tmpb{303}
    int local481; 		// tmpb{333}
    int local482; 		// tmpb{364}
    int local483; 		// tmpb{394}
    int local484; 		// tmpb{394}
    int local485; 		// tmpb{394}
    int local486; 		// tmpb{218}
    int local487; 		// tmpb{144}
    int local488; 		// tmpb{5}
    int local489; 		// tmpb{5}
    __size32 local49; 		// m[esp_44 + 8]{381}
    __size16 local490; 		// tmph{171}
    __size16 local491; 		// tmph{395}
    __size16 local492; 		// tmph{304}
    __size16 local493; 		// tmph{117}
    __size16 local494; 		// tmph{365}
    __size16 local495; 		// tmph{334}
    __size16 local496; 		// tmph{171}
    __size16 local497; 		// tmph{395}
    __size16 local498; 		// tmph{304}
    __size16 local499; 		// tmph{117}
    int local5; 		// m[esp - 32]
    __size32 local50; 		// m[esp_44 + 8]{350}
    __size16 local500; 		// tmph{365}
    __size16 local501; 		// tmph{334}
    int local502; 		// tmph{289}
    int local503; 		// tmph{289}
    int local504; 		// tmph{289}
    __size16 local505; 		// tmph{117}
    __size16 local506; 		// tmph{304}
    __size16 local507; 		// tmph{304}
    __size16 local508; 		// tmph{304}
    __size16 local509; 		// tmph{334}
    __size32 local51; 		// m[esp_44 + 8]{246}
    __size16 local510; 		// tmph{365}
    __size16 local511; 		// tmph{395}
    __size16 local512; 		// tmph{395}
    __size16 local513; 		// tmph{395}
    int local514; 		// tmph{289}
    __size16 local515; 		// tmph{395}
    __size16 local516; 		// tmph{304}
    __size16 local517; 		// tmph{117}
    __size16 local518; 		// tmph{365}
    __size16 local519; 		// tmph{334}
    __size32 local52; 		// m[esp_44 + 8]{246}
    __size16 local520; 		// tmph{171}
    __size16 local521; 		// tmph{6}
    __size16 local522; 		// tmph{6}
    __size32 local523; 		// esp_53{114}
    int local524; 		// local460{116}
    __size16 local525; 		// local493{117}
    __size32 local526; 		// m[esp_44 - 4]{118}
    __size32 local527; 		// m[esp_44 - 28]{119}
    __size32 local528; 		// m[esp_44 - 32]{120}
    __size32 local529; 		// m[esp_44 - 36]{121}
    __size32 local53; 		// m[esp_44 + 8]{160}
    __size32 local530; 		// m[esp_44 - 40]{122}
    __size32 local531; 		// m[esp_44 - 44]{123}
    __size32 local532; 		// m[esp_44 - 48]{124}
    __size32 local533; 		// m[esp_44 - 68]{125}
    __size32 local534; 		// local307{126}
    __size32 local535; 		// m[esp_44 - 76]{127}
    __size32 local536; 		// m[esp_44 - 80]{128}
    __size32 local537; 		// m[esp_44 - 104]{129}
    __size32 local538; 		// m[esp_44 - 108]{130}
    unsigned int local539; 		// m[esp_44 - 112]{131}
    __size32 local54; 		// m[esp_44 + 8]{160}
    __size32 local540; 		// esp_49{141}
    int local541; 		// local452{144}
    __size32 local542; 		// local63{145}
    __size32 local543; 		// local91{146}
    __size32 local544; 		// local119{147}
    __size32 local545; 		// local147{148}
    __size32 local546; 		// local175{149}
    __size32 local547; 		// local203{150}
    __size32 local548; 		// local231{151}
    __size32 local549; 		// local259{152}
    __size32 local55; 		// m[esp_44 + 8]{320}
    __size32 local550; 		// local288{153}
    __size32 local551; 		// local316{154}
    __size32 local552; 		// local344{155}
    __size32 local553; 		// local372{156}
    __size32 local554; 		// local400{157}
    unsigned int local555; 		// local428{158}
    __size32 local556; 		// local20{159}
    __size32 local557; 		// local41{160}
    int local558; 		// eax_1{166}
    union { __size32 *; __size32; } local559; 		// esp_48{183}
    __size32 local56; 		// m[esp_44 + 8]{320}
    unsigned int local560; 		// esi{185}
    __size32 local561; 		// local62{187}
    __size32 local562; 		// local90{188}
    __size32 local563; 		// local118{189}
    __size32 local564; 		// local146{190}
    __size32 local565; 		// local174{191}
    __size32 local566; 		// local202{192}
    __size32 local567; 		// local230{193}
    __size32 local568; 		// local258{194}
    __size32 local569; 		// local287{195}
    __size32 local57; 		// m[esp_44 + 8]{411}
    __size32 local570; 		// local315{196}
    __size32 local571; 		// local343{197}
    __size32 local572; 		// local371{198}
    __size32 local573; 		// local399{199}
    unsigned int local574; 		// local427{200}
    union { __size32 *; unsigned int; } local575; 		// eax{209}
    __size32 local576; 		// esp_51{227}
    int local577; 		// local456{230}
    __size32 local578; 		// local74{231}
    __size32 local579; 		// local102{232}
    __size32 local58; 		// m[esp_44 + 8]{411}
    __size32 local580; 		// local130{233}
    __size32 local581; 		// local158{234}
    __size32 local582; 		// local186{235}
    __size32 local583; 		// local214{236}
    __size32 local584; 		// local242{237}
    __size32 local585; 		// local273{238}
    __size32 local586; 		// local299{239}
    __size32 local587; 		// local327{240}
    __size32 local588; 		// local355{241}
    __size32 local589; 		// local383{242}
    __size32 local59; 		// m[esp_44 - 4]{8}
    __size32 local590; 		// local411{243}
    unsigned int local591; 		// local439{244}
    __size32 local592; 		// local30{245}
    __size32 local593; 		// local51{246}
    unsigned int local594; 		// ebx{265}
    union { __size32 *; __size32; } local595; 		// esp_43{266}
    __size32 local596; 		// local66{270}
    __size32 local597; 		// local94{271}
    __size32 local598; 		// local122{272}
    __size32 local599; 		// local150{273}
    int local6; 		// m[esp - 28]
    __size32 local60; 		// m[esp_44 - 4]{8}
    __size32 local600; 		// local178{274}
    __size32 local601; 		// local206{275}
    __size32 local602; 		// local234{276}
    __size32 local603; 		// local262{277}
    __size32 local604; 		// local291{278}
    __size32 local605; 		// local319{279}
    __size32 local606; 		// local347{280}
    __size32 local607; 		// local375{281}
    __size32 local608; 		// local403{282}
    unsigned int local609; 		// local431{283}
    __size32 local61; 		// m[esp_44 - 4]{8}
    unsigned int local610; 		// ebx{298}
    __size32 local611; 		// esp_55{299}
    int local612; 		// local459{303}
    __size16 local613; 		// local492{304}
    __size32 local614; 		// local69{305}
    __size32 local615; 		// local97{306}
    __size32 local616; 		// local125{307}
    __size32 local617; 		// local153{308}
    __size32 local618; 		// local181{309}
    __size32 local619; 		// local209{310}
    __size32 local62; 		// m[esp_44 - 4]{187}
    __size32 local620; 		// local237{311}
    __size32 local621; 		// local265{312}
    __size32 local622; 		// local294{313}
    __size32 local623; 		// local322{314}
    __size32 local624; 		// local350{315}
    __size32 local625; 		// local378{316}
    __size32 local626; 		// local406{317}
    unsigned int local627; 		// local434{318}
    __size32 local628; 		// local26{319}
    __size32 local629; 		// local47{320}
    __size32 local63; 		// m[esp_44 - 4]{145}
    __size32 local630; 		// esp_50{329}
    unsigned int local631; 		// edi{332}
    int local632; 		// local462{333}
    __size16 local633; 		// local495{334}
    __size32 local634; 		// local67{335}
    __size32 local635; 		// local95{336}
    __size32 local636; 		// local123{337}
    __size32 local637; 		// local151{338}
    __size32 local638; 		// local179{339}
    __size32 local639; 		// local207{340}
    int local64; 		// m[esp_44 - 4]{218}
    __size32 local640; 		// local235{341}
    __size32 local641; 		// local263{342}
    __size32 local642; 		// local292{343}
    __size32 local643; 		// local320{344}
    __size32 local644; 		// local348{345}
    __size32 local645; 		// local376{346}
    __size32 local646; 		// local404{347}
    unsigned int local647; 		// local432{348}
    __size32 local648; 		// local29{349}
    __size32 local649; 		// local50{350}
    int local65; 		// m[esp_44 - 4]{218}
    __size32 local650; 		// esp_54{361}
    int local651; 		// local461{364}
    __size16 local652; 		// local494{365}
    __size32 local653; 		// local78{366}
    __size32 local654; 		// local106{367}
    __size32 local655; 		// local134{368}
    __size32 local656; 		// local162{369}
    __size32 local657; 		// local190{370}
    __size32 local658; 		// local218{371}
    __size32 local659; 		// local246{372}
    __size32 local66; 		// m[esp_44 - 4]{270}
    __size32 local660; 		// local272{373}
    __size32 local661; 		// m[esp_44 - 72]{374}
    __size32 local662; 		// local331{375}
    __size32 local663; 		// local359{376}
    __size32 local664; 		// local387{377}
    __size32 local665; 		// local415{378}
    unsigned int local666; 		// local443{379}
    __size32 local667; 		// local28{380}
    __size32 local668; 		// local49{381}
    __size32 local669; 		// esp_52{391}
    __size32 local67; 		// m[esp_44 - 4]{335}
    int local670; 		// local458{394}
    __size16 local671; 		// local491{395}
    __size32 local672; 		// local68{396}
    __size32 local673; 		// local96{397}
    __size32 local674; 		// local124{398}
    __size32 local675; 		// local152{399}
    __size32 local676; 		// local180{400}
    __size32 local677; 		// local208{401}
    __size32 local678; 		// local236{402}
    __size32 local679; 		// local264{403}
    __size32 local68; 		// m[esp_44 - 4]{396}
    __size32 local680; 		// local293{404}
    __size32 local681; 		// local321{405}
    __size32 local682; 		// local349{406}
    __size32 local683; 		// local377{407}
    __size32 local684; 		// local405{408}
    unsigned int local685; 		// local433{409}
    __size32 local686; 		// local25{410}
    __size32 local687; 		// local46{411}
    __size32 local688; 		// esp{415}
    __size32 local69; 		// m[esp_44 - 4]{305}
    int local7; 		// m[esp - 48]
    int local70; 		// m[esp_44 - 4]{289}
    int local71; 		// m[esp_44 - 4]{289}
    __size32 local72; 		// m[esp_44 - 4]{187}
    __size32 local73; 		// m[esp_44 - 4]{187}
    __size32 local74; 		// m[esp_44 - 4]{231}
    __size32 local75; 		// m[esp_44 - 4]{231}
    __size32 local76; 		// m[esp_44 - 4]{145}
    __size32 local77; 		// m[esp_44 - 4]{145}
    __size32 local78; 		// m[esp_44 - 4]{366}
    __size32 local79; 		// m[esp_44 - 4]{270}
    int local8; 		// m[esp - 80]
    __size32 local80; 		// m[esp_44 - 4]{270}
    __size32 local81; 		// m[esp_44 - 4]{305}
    __size32 local82; 		// m[esp_44 - 4]{305}
    __size32 local83; 		// m[esp_44 - 4]{335}
    __size32 local84; 		// m[esp_44 - 4]{335}
    __size32 local85; 		// m[esp_44 - 4]{396}
    __size32 local86; 		// m[esp_44 - 4]{396}
    __size32 local87; 		// m[esp_44 - 28]{13}
    __size32 local88; 		// m[esp_44 - 28]{13}
    __size32 local89; 		// m[esp_44 - 28]{13}
    int local9; 		// m[esp - 72]
    __size32 local90; 		// m[esp_44 - 28]{188}
    __size32 local91; 		// m[esp_44 - 28]{146}
    int local92; 		// m[esp_44 - 28]{218}
    int local93; 		// m[esp_44 - 28]{218}
    __size32 local94; 		// m[esp_44 - 28]{271}
    __size32 local95; 		// m[esp_44 - 28]{336}
    __size32 local96; 		// m[esp_44 - 28]{397}
    __size32 local97; 		// m[esp_44 - 28]{306}
    int local98; 		// m[esp_44 - 28]{289}
    int local99; 		// m[esp_44 - 28]{289}

    local59 = param3;
    local199 = caml_local_roots;
    local143 = 1;
    local171 = 2;
    local115 = esp_44 + 4;
    local87 = esp_44 + 8;
    local340 = esp_44 - 44;
    caml_local_roots = esp_44 - 80;
    local284 = 1;
    local312 = 1;
    local255 = esp_44 - 48;
    local368 = 0;
    eax = caml_alloc_small(2, 0); /* Warning: also results in ebx */
    local524 = local488;
    local525 = local521;
    local526 = local59;
    local527 = local87;
    local528 = local115;
    local529 = local143;
    local530 = local171;
    local531 = local199;
    local533 = local255;
    local534 = local284;
    local535 = local312;
    local536 = local340;
    local537 = local368;
    local541 = local488;
    local542 = local59;
    local543 = local87;
    local544 = local115;
    local545 = local143;
    local546 = local171;
    local547 = local199;
    local549 = local255;
    local550 = local284;
    local551 = local312;
    local552 = local340;
    local553 = local368;
    local556 = param1;
    local557 = param2;
    local227 = eax;
    *(__size32*)eax = param1;
    *(__size32*)(eax + 4) = param2;
    local396 = eax;
    esp_1 = caml_raise(param1, eax, ebx, esp_44 - 4); /* Warning: also results in ebp */
    local532 = local227;
    local538 = local396;
    local539 = local424;
    local548 = local227;
    local554 = local396;
    local555 = local424;
    *(__size32*)(esp_1 - 4) = ebp;
    eax = *(esp_1 + 4);
    *(__size32*)(esp_1 - 24) = eax;
    *(__size32*)(esp_1 - 28) = 0x807396c;
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
    *(__size32*)(esp_10 - 28) = 0x80739a8;
    esp_13 = caml_raise_with_string(*(esp_10 - 24), esp_10 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_13 - 4) = ebp;
    eax = *(esp_13 + 4);
    *(__size32*)(esp_13 - 24) = eax;
    *(__size32*)(esp_13 - 28) = 0x807398c;
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
    *(__size32*)(esp_19 - 28) = 0x8073a80;
    esp_22 = caml_raise_constant(*(esp_19 - 28), esp_19 - 4, *(esp_19 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_22 - 4) = ebp;
    *(__size32*)(esp_22 - 28) = 0x8073a18;
    esp_25 = caml_raise_constant(*(esp_22 - 28), esp_22 - 4, *(esp_22 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_25 - 4) = ebp;
    *(__size32*)(esp_25 - 28) = 0x80739f0;
    esp_28 = caml_raise_constant(*(esp_25 - 28), esp_25 - 4, *(esp_25 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_28 - 4) = ebp;
    *(__size32*)(esp_28 - 28) = 0x80739d0;
    cl = caml_raise_constant(*(esp_28 - 28), esp_28 - 4, *(esp_28 - 176)); /* Warning: also results in dl, ecx, edx, ebx, esp_31, ebp, esi, edi */
    *(__size32*)(esp_31 - 4) = ebp;
    ebp = esp_31 - 4;
    *(unsigned int*)(esp_31 - 8) = edi;
    *(unsigned int*)(esp_31 - 12) = esi;
    *(unsigned int*)(esp_31 - 16) = ebx;
    esp_34 = esp_31 - 60;
    eax = *(esp_31 + 8);
    al = (unsigned char) eax;
    local523 = esp_34;
    local540 = esp_34;
    if (eax != 0) {
        edx = *(esp_31 + 16);
        *(__size32*)(esp_31 - 36) = edx;
        edx = *(esp_31 + 12);
        *(__size32*)(esp_31 - 32) = eax;
        do {
bb0x8062347:
            esp_49 = local540;
            local452 = local541;
            local63 = local542;
            local91 = local543;
            local119 = local544;
            local147 = local545;
            local175 = local546;
            local203 = local547;
            local231 = local548;
            local259 = local549;
            local288 = local550;
            local316 = local551;
            local344 = local552;
            local372 = local553;
            local400 = local554;
            local428 = local555;
            local20 = local556;
            local41 = local557;
            esi = *(global_0x0807f2dc + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local523 = esp_49;
            local524 = local452;
            local526 = local63;
            local527 = local91;
            local528 = local119;
            local529 = local147;
            local530 = local175;
            local531 = local203;
            local532 = local231;
            local533 = local259;
            local534 = local288;
            local535 = local316;
            local536 = local344;
            local537 = local372;
            local538 = local400;
            local539 = local428;
            local540 = esp_49;
            local541 = local452;
            local542 = local63;
            local543 = local91;
            local544 = local119;
            local545 = local147;
            local546 = local175;
            local547 = local203;
            local548 = local231;
            local549 = local259;
            local550 = local288;
            local551 = local316;
            local552 = local344;
            local553 = local372;
            local554 = local400;
            local555 = local428;
            local556 = local20;
            local557 = local41;
            local558 = eax;
            local559 = esp_49;
            local561 = local63;
            local562 = local91;
            local563 = local119;
            local564 = local147;
            local565 = local175;
            local566 = local203;
            local567 = local231;
            local568 = local259;
            local569 = local288;
            local570 = local316;
            local571 = local344;
            local572 = local372;
            local573 = local400;
            local574 = local428;
            local576 = esp_49;
            local577 = local452;
            local578 = local63;
            local579 = local91;
            local580 = local119;
            local581 = local147;
            local582 = local175;
            local583 = local203;
            local584 = local231;
            local585 = local259;
            local586 = local288;
            local587 = local316;
            local588 = local344;
            local589 = local372;
            local590 = local400;
            local591 = local428;
            local592 = local20;
            local593 = local41;
            if (*ebx != edx) {
                do {
                    eax_1 = local558;
                    eax_2 = eax_1 + 1 & esi;
                    ebx = *(caml_frame_descriptors + (eax_1 + 1 & esi) * 4);
                    local558 = eax_2;
                } while (*ebx != edx);
            }
            local490 = *(ebx + 4) + 1;
            local525 = local490;
            if (*(ebx + 4) != -1) {
                esi = *(unsigned short*)(ebx + 6);
                local560 = esi;
                if ((int)esi > 0) {
                    edi = ebx + 8;
                    *(__size32*)(ebp - 36) = ebx;
                    ebx = *(ebp + 8);
                    for(;;) {
                        esp_48 = local559;
                        esi = local560;
                        local62 = local561;
                        local90 = local562;
                        local118 = local563;
                        local146 = local564;
                        local174 = local565;
                        local202 = local566;
                        local230 = local567;
                        local258 = local568;
                        local287 = local569;
                        local315 = local570;
                        local343 = local571;
                        local371 = local572;
                        local399 = local573;
                        local427 = local574;
                        eax_4 = *(unsigned short*)edi;
                        if (((unsigned char) eax_4 & 0x1) == 0) {
                            eax_7 = eax_4 + *(ebp - 28);
                            flags = ADDFLAGS32(eax_4, *(ebp - 28), eax_7);
                            local575 = eax_7;
                        }
                        else {
                            flags = SARFLAGS((int)eax_4 >> 1, eax_4, 1);
                            edx = *(ebp - 32);
                            eax = edx + ((int)eax_4 >> 1) * 4;
                            local575 = eax;
                        }
                        eax = local575;
                        *(__size32*)(esp_48 + 4) = eax;
                        eax = *eax;
                        *(__size32*)esp_48 = eax;
                        (*ebx)((unsigned char) eax, cl, dl, eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, local62, local90, local118, local146, local174, local202, local230, local258, local287, local315, local343, local371, local399, local427, param1, param2, param1);
                        local559 = esp_37;
                        local561 = local64;
                        local562 = local92;
                        local563 = local120;
                        local564 = local148;
                        local565 = local176;
                        local566 = local204;
                        local567 = local232;
                        local568 = local260;
                        local569 = local289;
                        local570 = local317;
                        local571 = local345;
                        local572 = local373;
                        local573 = local401;
                        local574 = local429;
                        local576 = esp_37;
                        local577 = local453;
                        local578 = local64;
                        local579 = local92;
                        local580 = local120;
                        local581 = local148;
                        local582 = local176;
                        local583 = local204;
                        local584 = local232;
                        local585 = local260;
                        local586 = local289;
                        local587 = local317;
                        local588 = local345;
                        local589 = local373;
                        local590 = local401;
                        local591 = local429;
                        local592 = local17;
                        local593 = local38;
                        esi_4 = esi_1 - 1;
                        local560 = esi_4;
                        if ((int)esi_1 <= 1) {
                            break;
                        }
                        edi += 2;
                    }
                    ebx = *(ebp - 36);
                }
                esp_51 = local576;
                local456 = local577;
                local74 = local578;
                local102 = local579;
                local130 = local580;
                local158 = local581;
                local186 = local582;
                local214 = local583;
                local242 = local584;
                local273 = local585;
                local299 = local586;
                local327 = local587;
                local355 = local588;
                local383 = local589;
                local411 = local590;
                local439 = local591;
                local30 = local592;
                local51 = local593;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local540 = esp_51;
                local541 = local456;
                local542 = local74;
                local543 = local102;
                local544 = local130;
                local545 = local158;
                local546 = local186;
                local547 = local214;
                local548 = local242;
                local549 = local273;
                local550 = local299;
                local551 = local327;
                local552 = local355;
                local553 = local383;
                local554 = local411;
                local555 = local439;
                local556 = local30;
                local557 = local51;
                goto bb0x8062347;
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
    esp_53 = local523;
    local460 = local524;
    local493 = local525;
    *(__size32*)(esp_44 - 4) = local526;
    *(__size32*)(esp_44 - 28) = local527;
    *(__size32*)(esp_44 - 32) = local528;
    *(__size32*)(esp_44 - 36) = local529;
    *(__size32*)(esp_44 - 40) = local530;
    *(__size32*)(esp_44 - 44) = local531;
    *(__size32*)(esp_44 - 48) = local532;
    *(__size32*)(esp_44 - 68) = local533;
    local307 = local534;
    *(__size32*)(esp_44 - 76) = local535;
    *(__size32*)(esp_44 - 80) = local536;
    *(__size32*)(esp_44 - 104) = local537;
    *(__size32*)(esp_44 - 108) = local538;
    *(unsigned int*)(esp_44 - 112) = local539;
    local669 = esp_53;
    local670 = local460;
    local671 = local493;
    local672 = *(esp_44 - 4);
    local673 = *(esp_44 - 28);
    local674 = *(esp_44 - 32);
    local675 = *(esp_44 - 36);
    local676 = *(esp_44 - 40);
    local677 = *(esp_44 - 44);
    local678 = *(esp_44 - 48);
    local679 = *(esp_44 - 68);
    local680 = local307;
    local681 = *(esp_44 - 76);
    local682 = *(esp_44 - 80);
    local683 = *(esp_44 - 104);
    local684 = *(esp_44 - 108);
    local685 = *(esp_44 - 112);
    local686 = local27;
    local687 = local48;
    local688 = esp_53;
    if (*(ebp + 24) != 0) {
        esi = *(ebp + 24);
        *(__size32*)(ebp - 28) = 0;
        do {
            esp_52 = local669;
            local458 = local670;
            local491 = local671;
            local68 = local672;
            local96 = local673;
            local124 = local674;
            local152 = local675;
            local180 = local676;
            local208 = local677;
            local236 = local678;
            local264 = local679;
            local293 = local680;
            local321 = local681;
            local349 = local682;
            local377 = local683;
            local405 = local684;
            local433 = local685;
            local25 = local686;
            local46 = local687;
            edi = 0;
            local630 = esp_52;
            local631 = edi;
            local632 = local458;
            local633 = local491;
            local634 = local68;
            local635 = local96;
            local636 = local124;
            local637 = local152;
            local638 = local180;
            local639 = local208;
            local640 = local236;
            local641 = local264;
            local642 = local293;
            local643 = local321;
            local644 = local349;
            local645 = local377;
            local646 = local405;
            local647 = local433;
            local648 = local25;
            local649 = local46;
            local650 = esp_52;
            local651 = local458;
            local652 = local491;
            local653 = local68;
            local654 = local96;
            local655 = local124;
            local656 = local152;
            local657 = local180;
            local658 = local208;
            local659 = local236;
            local660 = local264;
            local661 = local293;
            local662 = local321;
            local663 = local349;
            local664 = local377;
            local665 = local405;
            local666 = local433;
            local667 = local25;
            local668 = local46;
            if (*(esi + 4) > 0) {
                do {
                    esp_50 = local630;
                    edi = local631;
                    local462 = local632;
                    local495 = local633;
                    local67 = local634;
                    local95 = local635;
                    local123 = local636;
                    local151 = local637;
                    local179 = local638;
                    local207 = local639;
                    local235 = local640;
                    local263 = local641;
                    local292 = local642;
                    local320 = local643;
                    local348 = local644;
                    local376 = local645;
                    local404 = local646;
                    local432 = local647;
                    local29 = local648;
                    local50 = local649;
                    ebx = *(ebp - 28);
                    local594 = ebx;
                    local595 = esp_50;
                    local596 = local67;
                    local597 = local95;
                    local598 = local123;
                    local599 = local151;
                    local600 = local179;
                    local601 = local207;
                    local602 = local235;
                    local603 = local263;
                    local604 = local292;
                    local605 = local320;
                    local606 = local348;
                    local607 = local376;
                    local608 = local404;
                    local609 = local432;
                    local610 = ebx;
                    local611 = esp_50;
                    local612 = local462;
                    local613 = local495;
                    local614 = local67;
                    local615 = local95;
                    local616 = local123;
                    local617 = local151;
                    local618 = local179;
                    local619 = local207;
                    local620 = local235;
                    local621 = local263;
                    local622 = local292;
                    local623 = local320;
                    local624 = local348;
                    local625 = local376;
                    local626 = local404;
                    local627 = local432;
                    local628 = local29;
                    local629 = local50;
                    if (*(esi + 8) > 0) {
                        do {
                            ebx = local594;
                            esp_43 = local595;
                            local66 = local596;
                            local94 = local597;
                            local122 = local598;
                            local150 = local599;
                            local178 = local600;
                            local206 = local601;
                            local234 = local602;
                            local262 = local603;
                            local291 = local604;
                            local319 = local605;
                            local347 = local606;
                            local375 = local607;
                            local403 = local608;
                            local431 = local609;
                            eax_9 = ebx * 4 + *(esi + edi * 4 + 12);
                            *(__size32*)(esp_43 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_43 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, cl, dl, eax_12, ecx, edx, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), local66, local94, local122, local150, local178, local206, local234, local262, local291, local319, local347, local375, local403, local431, param1, param2, param1);
                            local595 = esp_40;
                            local596 = local70;
                            local597 = local98;
                            local598 = local126;
                            local599 = local154;
                            local600 = local182;
                            local601 = local210;
                            local602 = local238;
                            local603 = local266;
                            local604 = local295;
                            local605 = local323;
                            local606 = local351;
                            local607 = local379;
                            local608 = local407;
                            local609 = local435;
                            local611 = esp_40;
                            local612 = local468;
                            local613 = local502;
                            local614 = local70;
                            local615 = local98;
                            local616 = local126;
                            local617 = local154;
                            local618 = local182;
                            local619 = local210;
                            local620 = local238;
                            local621 = local266;
                            local622 = local295;
                            local623 = local323;
                            local624 = local351;
                            local625 = local379;
                            local626 = local407;
                            local627 = local435;
                            local628 = local21;
                            local629 = local42;
                            ebx_4 = ebx_1 + 1;
                            local594 = ebx_4;
                            local610 = ebx_4;
                        } while (*(esi + 8) > ebx_1 + 1);
                    }
                    ebx = local610;
                    esp_55 = local611;
                    edi_1 = edi;
                    local459 = local612;
                    local492 = local613;
                    local69 = local614;
                    local97 = local615;
                    local125 = local616;
                    local153 = local617;
                    local181 = local618;
                    local209 = local619;
                    local237 = local620;
                    local265 = local621;
                    local294 = local622;
                    local322 = local623;
                    local350 = local624;
                    local378 = local625;
                    local406 = local626;
                    local434 = local627;
                    local26 = local628;
                    local47 = local629;
                    edi_2 = edi_1 + 1;
                    local630 = esp_55;
                    local631 = edi_2;
                    local632 = local459;
                    local633 = local492;
                    local634 = local69;
                    local635 = local97;
                    local636 = local125;
                    local637 = local153;
                    local638 = local181;
                    local639 = local209;
                    local640 = local237;
                    local641 = local265;
                    local642 = local294;
                    local643 = local322;
                    local644 = local350;
                    local645 = local378;
                    local646 = local406;
                    local647 = local434;
                    local648 = local26;
                    local649 = local47;
                    local650 = esp_55;
                    local651 = local459;
                    local652 = local492;
                    local653 = local69;
                    local654 = local97;
                    local655 = local125;
                    local656 = local153;
                    local657 = local181;
                    local658 = local209;
                    local659 = local237;
                    local660 = local265;
                    local661 = local294;
                    local662 = local322;
                    local663 = local350;
                    local664 = local378;
                    local665 = local406;
                    local666 = local434;
                    local667 = local26;
                    local668 = local47;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_54 = local650;
            local461 = local651;
            local494 = local652;
            local78 = local653;
            local106 = local654;
            local134 = local655;
            local162 = local656;
            local190 = local657;
            local218 = local658;
            local246 = local659;
            local272 = local660;
            *(__size32*)(esp_44 - 72) = local661;
            local331 = local662;
            local359 = local663;
            local387 = local664;
            local415 = local665;
            local443 = local666;
            local28 = local667;
            local49 = local668;
            esi = *esi;
            local669 = esp_54;
            local670 = local461;
            local671 = local494;
            local672 = local78;
            local673 = local106;
            local674 = local134;
            local675 = local162;
            local676 = local190;
            local677 = local218;
            local678 = local246;
            local679 = local272;
            local680 = *(esp_44 - 72);
            local681 = local331;
            local682 = local359;
            local683 = local387;
            local684 = local415;
            local685 = local443;
            local686 = local28;
            local687 = local49;
            local688 = esp_54;
        } while (esi == 0);
    }
    esp = local688;
    ebp = *(esp + 56);
    return ebp;
}

/** address: 0x08065964 */
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

/** address: 0x08062201 */
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
    __size32 esp_42; 		// r28{229}
    __size32 esp_43; 		// r28{162}
    __size32 esp_44; 		// r28{267}
    __size32 esp_45; 		// r28{211}
    __size32 esp_46; 		// r28{84}
    __size32 esp_47; 		// r28{267}
    __size32 esp_48; 		// r28{267}
    __size32 esp_49; 		// r28{99}
    __size32 esp_5; 		// r28{14}
    __size32 esp_50; 		// r28{99}
    __size32 esp_51; 		// r28{84}
    __size32 esp_52; 		// r28{84}
    union { __size32; __size32 *; } esp_53; 		// r28{189}
    union { __size32; __size32 *; } esp_54; 		// r28{189}
    __size32 esp_55; 		// r28{211}
    __size32 esp_56; 		// r28{211}
    __size32 esp_57; 		// r28{229}
    __size32 esp_58; 		// r28{229}
    union { __size32; __size32 *; } esp_59; 		// r28{129}
    __size32 esp_6; 		// r28{14}
    union { __size32; __size32 *; } esp_60; 		// r28{129}
    __size32 esp_61; 		// r28{162}
    __size32 esp_62; 		// r28{162}
    __size32 esp_7; 		// r28{20}
    __size32 esp_8; 		// r28{20}
    __size32 esp_9; 		// r28{20}
    int local0; 		// m[esp - 4]
    int local1; 		// m[esp - 28]
    __size32 local10; 		// m[esp_38 + 8]{3}
    unsigned int local100; 		// m[esp_38 - 32]{195}
    unsigned int local101; 		// m[esp_38 - 32]{195}
    unsigned int local102; 		// m[esp_38 - 32]{274}
    unsigned int local103; 		// m[esp_38 - 32]{274}
    unsigned int local104; 		// m[esp_38 - 32]{219}
    unsigned int local105; 		// m[esp_38 - 32]{219}
    unsigned int local106; 		// m[esp_38 - 32]{237}
    unsigned int local107; 		// m[esp_38 - 32]{237}
    unsigned int local108; 		// m[esp_38 - 32]{90}
    unsigned int local109; 		// m[esp_38 - 32]{105}
    __size32 local11; 		// m[esp_38 + 8]{3}
    unsigned int local110; 		// m[esp_38 - 32]{105}
    int local111; 		// tmpb{102}
    int local112; 		// tmpb{155}
    int local113; 		// tmpb{155}
    int local114; 		// tmpb{155}
    int local115; 		// tmpb{165}
    int local116; 		// tmpb{155}
    int local117; 		// tmpb{270}
    int local118; 		// tmpb{215}
    int local119; 		// tmpb{86}
    __size32 local12; 		// m[esp_38 + 8]{277}
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
    __size32 local13; 		// m[esp_38 + 8]{222}
    int local130; 		// tmpb{155}
    int local131; 		// tmpb{102}
    int local132; 		// tmpb{4}
    int local133; 		// tmpb{4}
    int local134; 		// tmpb{270}
    int local135; 		// tmpb{270}
    int local136; 		// tmpb{165}
    int local137; 		// tmpb{165}
    int local138; 		// tmpb{102}
    int local139; 		// tmpb{102}
    __size32 local14; 		// m[esp_38 + 8]{93}
    int local140; 		// tmpb{215}
    int local141; 		// tmpb{215}
    __size16 local142; 		// tmph{119}
    __size16 local143; 		// tmph{271}
    __size16 local144; 		// tmph{216}
    __size16 local145; 		// tmph{87}
    __size16 local146; 		// tmph{253}
    __size16 local147; 		// tmph{234}
    __size16 local148; 		// tmph{119}
    __size16 local149; 		// tmph{271}
    __size32 local15; 		// m[esp_38 + 8]{259}
    __size16 local150; 		// tmph{216}
    __size16 local151; 		// tmph{87}
    __size16 local152; 		// tmph{253}
    __size16 local153; 		// tmph{234}
    int local154; 		// tmph{203}
    int local155; 		// tmph{203}
    int local156; 		// tmph{203}
    int local157; 		// tmph{203}
    __size16 local158; 		// tmph{271}
    __size16 local159; 		// tmph{216}
    __size32 local16; 		// m[esp_38 + 8]{240}
    __size16 local160; 		// tmph{87}
    __size16 local161; 		// tmph{253}
    __size16 local162; 		// tmph{234}
    __size16 local163; 		// tmph{119}
    __size16 local164; 		// tmph{5}
    __size16 local165; 		// tmph{5}
    __size16 local166; 		// tmph{216}
    __size16 local167; 		// tmph{216}
    __size16 local168; 		// tmph{271}
    __size16 local169; 		// tmph{271}
    __size32 local17; 		// m[esp_38 + 8]{171}
    __size32 local170; 		// esp_46{84}
    int local171; 		// local119{86}
    __size16 local172; 		// local145{87}
    __size32 local173; 		// local40{88}
    __size32 local174; 		// m[esp_38 - 28]{89}
    unsigned int local175; 		// local108{90}
    __size32 local176; 		// esp_41{99}
    int local177; 		// local111{102}
    __size32 local178; 		// local29{103}
    __size32 local179; 		// local58{104}
    __size32 local18; 		// m[esp_38 + 8]{171}
    unsigned int local180; 		// local87{105}
    __size32 local181; 		// local7{108}
    int local182; 		// eax_1{114}
    union { __size32 *; __size32; } local183; 		// esp_40{129}
    unsigned int local184; 		// esi{131}
    __size32 local185; 		// local28{133}
    __size32 local186; 		// local57{134}
    unsigned int local187; 		// local86{135}
    union { __size32 *; unsigned int; } local188; 		// eax{146}
    __size32 local189; 		// esp_43{162}
    __size32 local19; 		// m[esp_38 + 8]{108}
    int local190; 		// local115{165}
    __size32 local191; 		// local41{166}
    __size32 local192; 		// local72{167}
    unsigned int local193; 		// local96{168}
    __size32 local194; 		// local17{171}
    unsigned int local195; 		// ebx{188}
    union { __size32 *; __size32; } local196; 		// esp_37{189}
    __size32 local197; 		// local32{193}
    __size32 local198; 		// local61{194}
    unsigned int local199; 		// local90{195}
    int local2; 		// m[esp - 32]
    __size32 local20; 		// m[esp_38 + 8]{108}
    unsigned int local200; 		// ebx{210}
    __size32 local201; 		// esp_45{211}
    int local202; 		// local118{215}
    __size16 local203; 		// local144{216}
    __size32 local204; 		// local35{217}
    __size32 local205; 		// local64{218}
    unsigned int local206; 		// local93{219}
    __size32 local207; 		// local13{222}
    __size32 local208; 		// esp_42{229}
    unsigned int local209; 		// edi{232}
    __size32 local21; 		// m[esp_38 + 8]{222}
    int local210; 		// local121{233}
    __size16 local211; 		// local147{234}
    __size32 local212; 		// local33{235}
    __size32 local213; 		// local62{236}
    unsigned int local214; 		// local91{237}
    __size32 local215; 		// local16{240}
    __size32 local216; 		// esp{249}
    int local217; 		// local120{252}
    __size16 local218; 		// local146{253}
    __size32 local219; 		// m[esp_38 - 4]{254}
    __size32 local22; 		// m[esp_38 + 8]{222}
    __size32 local220; 		// local71{255}
    unsigned int local221; 		// m[esp_38 - 32]{256}
    __size32 local222; 		// local15{259}
    __size32 local223; 		// esp_44{267}
    int local224; 		// local117{270}
    __size16 local225; 		// local143{271}
    __size32 local226; 		// local34{272}
    __size32 local227; 		// local63{273}
    unsigned int local228; 		// local92{274}
    __size32 local229; 		// local12{277}
    __size32 local23; 		// m[esp_38 + 8]{277}
    __size32 local230; 		// esp{281}
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
    __size32 local38; 		// m[esp_38 - 4]{272}
    __size32 local39; 		// m[esp_38 - 4]{272}
    int local4; 		// m[esp_38 + 8]{155}
    __size32 local40; 		// m[esp_38 - 4]{88}
    __size32 local41; 		// m[esp_38 - 4]{166}
    __size32 local42; 		// m[esp_38 - 4]{166}
    __size32 local43; 		// m[esp_38 - 4]{166}
    __size32 local44; 		// m[esp_38 - 4]{217}
    __size32 local45; 		// m[esp_38 - 4]{217}
    __size32 local46; 		// m[esp_38 - 4]{103}
    __size32 local47; 		// m[esp_38 - 4]{103}
    __size32 local48; 		// m[esp_38 - 4]{193}
    __size32 local49; 		// m[esp_38 - 4]{193}
    int local5; 		// m[esp_38 + 8]{155}
    __size32 local50; 		// m[esp_38 - 4]{235}
    __size32 local51; 		// m[esp_38 - 4]{235}
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
    __size32 local67; 		// m[esp_38 - 28]{134}
    __size32 local68; 		// m[esp_38 - 28]{134}
    __size32 local69; 		// m[esp_38 - 28]{218}
    __size32 local7; 		// m[esp_38 + 8]{108}
    __size32 local70; 		// m[esp_38 - 28]{218}
    __size32 local71; 		// m[esp_38 - 28]{255}
    __size32 local72; 		// m[esp_38 - 28]{167}
    __size32 local73; 		// m[esp_38 - 28]{194}
    __size32 local74; 		// m[esp_38 - 28]{194}
    __size32 local75; 		// m[esp_38 - 28]{273}
    __size32 local76; 		// m[esp_38 - 28]{273}
    __size32 local77; 		// m[esp_38 - 28]{236}
    __size32 local78; 		// m[esp_38 - 28]{236}
    __size32 local79; 		// m[esp_38 - 28]{167}
    int local8; 		// m[esp_38 + 8]{203}
    __size32 local80; 		// m[esp_38 - 28]{167}
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
    unsigned int local96; 		// m[esp_38 - 32]{168}
    unsigned int local97; 		// m[esp_38 - 32]{168}
    unsigned int local98; 		// m[esp_38 - 32]{135}
    unsigned int local99; 		// m[esp_38 - 32]{135}

    local25 = param2;
    local54 = param1;
    eax = caml_copy_string(param1); /* Warning: also results in esp_1, ebp */
    local171 = local132;
    local172 = local164;
    local173 = local25;
    local174 = local54;
    local175 = local83;
    local177 = local132;
    local178 = local25;
    local179 = local54;
    local180 = local83;
    local181 = param1;
    *(__size32*)(esp_1 + 4) = eax;
    eax = *(ebp + 8);
    *(__size32*)esp_1 = eax;
    esp_4 = caml_raise_with_arg(*esp_1, *(esp_1 + 4), ebp, *(esp_1 - 148)); /* Warning: also results in ebp */
    *(__size32*)(esp_4 - 4) = ebp;
    eax = *(esp_4 + 4);
    *(__size32*)(esp_4 - 24) = eax;
    *(__size32*)(esp_4 - 28) = 0x80739a8;
    esp_7 = caml_raise_with_string(*(esp_4 - 24), esp_4 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_7 - 4) = ebp;
    eax = *(esp_7 + 4);
    *(__size32*)(esp_7 - 24) = eax;
    *(__size32*)(esp_7 - 28) = 0x807398c;
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
    *(__size32*)(esp_13 - 28) = 0x8073a80;
    esp_16 = caml_raise_constant(*(esp_13 - 28), esp_13 - 4, *(esp_13 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_16 - 4) = ebp;
    *(__size32*)(esp_16 - 28) = 0x8073a18;
    esp_19 = caml_raise_constant(*(esp_16 - 28), esp_16 - 4, *(esp_16 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_19 - 4) = ebp;
    *(__size32*)(esp_19 - 28) = 0x80739f0;
    esp_22 = caml_raise_constant(*(esp_19 - 28), esp_19 - 4, *(esp_19 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_22 - 4) = ebp;
    *(__size32*)(esp_22 - 28) = 0x80739d0;
    cl = caml_raise_constant(*(esp_22 - 28), esp_22 - 4, *(esp_22 - 176)); /* Warning: also results in dl, ecx, edx, ebx, esp_25, ebp, esi, edi */
    *(__size32*)(esp_25 - 4) = ebp;
    ebp = esp_25 - 4;
    *(unsigned int*)(esp_25 - 8) = edi;
    *(unsigned int*)(esp_25 - 12) = esi;
    *(unsigned int*)(esp_25 - 16) = ebx;
    esp_28 = esp_25 - 60;
    eax = *(esp_25 + 8);
    al = (unsigned char) eax;
    local170 = esp_28;
    local176 = esp_28;
    if (eax != 0) {
        edx = *(esp_25 + 16);
        *(__size32*)(esp_25 - 36) = edx;
        edx = *(esp_25 + 12);
        *(__size32*)(esp_25 - 32) = eax;
        do {
bb0x8062347:
            esp_41 = local176;
            local111 = local177;
            local29 = local178;
            local58 = local179;
            local87 = local180;
            local7 = local181;
            esi = *(global_0x0807f2dc + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local170 = esp_41;
            local171 = local111;
            local173 = local29;
            local174 = local58;
            local175 = local87;
            local176 = esp_41;
            local177 = local111;
            local178 = local29;
            local179 = local58;
            local180 = local87;
            local181 = local7;
            local182 = eax;
            local183 = esp_41;
            local185 = local29;
            local186 = local58;
            local187 = local87;
            local189 = esp_41;
            local190 = local111;
            local191 = local29;
            local192 = local58;
            local193 = local87;
            local194 = local7;
            if (*ebx != edx) {
                do {
                    eax_1 = local182;
                    eax_2 = eax_1 + 1 & esi;
                    ebx = *(caml_frame_descriptors + (eax_1 + 1 & esi) * 4);
                    local182 = eax_2;
                } while (*ebx != edx);
            }
            local142 = *(ebx + 4) + 1;
            local172 = local142;
            if (*(ebx + 4) != -1) {
                esi = *(unsigned short*)(ebx + 6);
                local184 = esi;
                if ((int)esi > 0) {
                    edi = ebx + 8;
                    *(__size32*)(ebp - 36) = ebx;
                    ebx = *(ebp + 8);
                    for(;;) {
                        esp_40 = local183;
                        esi = local184;
                        local28 = local185;
                        local57 = local186;
                        local86 = local187;
                        eax_4 = *(unsigned short*)edi;
                        if (((unsigned char) eax_4 & 0x1) == 0) {
                            eax_7 = eax_4 + *(ebp - 28);
                            flags = ADDFLAGS32(eax_4, *(ebp - 28), eax_7);
                            local188 = eax_7;
                        }
                        else {
                            flags = SARFLAGS((int)eax_4 >> 1, eax_4, 1);
                            edx = *(ebp - 32);
                            eax = edx + ((int)eax_4 >> 1) * 4;
                            local188 = eax;
                        }
                        eax = local188;
                        *(__size32*)(esp_40 + 4) = eax;
                        eax = *eax;
                        *(__size32*)esp_40 = eax;
                        (*ebx)((unsigned char) eax, eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, local28, local57, local86, cl, dl, param1);
                        local183 = esp_31;
                        local185 = local30;
                        local186 = local59;
                        local187 = local88;
                        local189 = esp_31;
                        local190 = local112;
                        local191 = local30;
                        local192 = local59;
                        local193 = local88;
                        local194 = local4;
                        esi_4 = esi_1 - 1;
                        local184 = esi_4;
                        if ((int)esi_1 <= 1) {
                            break;
                        }
                        edi += 2;
                    }
                    ebx = *(ebp - 36);
                }
                esp_43 = local189;
                local115 = local190;
                local41 = local191;
                local72 = local192;
                local96 = local193;
                local17 = local194;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local176 = esp_43;
                local177 = local115;
                local178 = local41;
                local179 = local72;
                local180 = local96;
                local181 = local17;
                goto bb0x8062347;
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
    esp_46 = local170;
    local119 = local171;
    local145 = local172;
    local40 = local173;
    *(__size32*)(esp_38 - 28) = local174;
    local108 = local175;
    local223 = esp_46;
    local224 = local119;
    local225 = local145;
    local226 = local40;
    local227 = *(esp_38 - 28);
    local228 = local108;
    local229 = local14;
    local230 = esp_46;
    if (*(ebp + 24) != 0) {
        esi = *(ebp + 24);
        *(__size32*)(ebp - 28) = 0;
        do {
            esp_44 = local223;
            local117 = local224;
            local143 = local225;
            local34 = local226;
            local63 = local227;
            local92 = local228;
            local12 = local229;
            edi = 0;
            local208 = esp_44;
            local209 = edi;
            local210 = local117;
            local211 = local143;
            local212 = local34;
            local213 = local63;
            local214 = local92;
            local215 = local12;
            local216 = esp_44;
            local217 = local117;
            local218 = local143;
            local219 = local34;
            local220 = local63;
            local221 = local92;
            local222 = local12;
            if (*(esi + 4) > 0) {
                do {
                    esp_42 = local208;
                    edi = local209;
                    local121 = local210;
                    local147 = local211;
                    local33 = local212;
                    local62 = local213;
                    local91 = local214;
                    local16 = local215;
                    ebx = *(ebp - 28);
                    local195 = ebx;
                    local196 = esp_42;
                    local197 = local33;
                    local198 = local62;
                    local199 = local91;
                    local200 = ebx;
                    local201 = esp_42;
                    local202 = local121;
                    local203 = local147;
                    local204 = local33;
                    local205 = local62;
                    local206 = local91;
                    local207 = local16;
                    if (*(esi + 8) > 0) {
                        do {
                            ebx = local195;
                            esp_37 = local196;
                            local32 = local197;
                            local61 = local198;
                            local90 = local199;
                            eax_9 = ebx * 4 + *(esi + edi * 4 + 12);
                            *(__size32*)(esp_37 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_37 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, eax_12, ecx, edx, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), local32, local61, local90, cl, dl, param1);
                            local196 = esp_34;
                            local197 = local36;
                            local198 = local65;
                            local199 = local94;
                            local201 = esp_34;
                            local202 = local127;
                            local203 = local154;
                            local204 = local36;
                            local205 = local65;
                            local206 = local94;
                            local207 = local8;
                            ebx_4 = ebx_1 + 1;
                            local195 = ebx_4;
                            local200 = ebx_4;
                        } while (*(esi + 8) > ebx_1 + 1);
                    }
                    ebx = local200;
                    esp_45 = local201;
                    edi_1 = edi;
                    local118 = local202;
                    local144 = local203;
                    local35 = local204;
                    local64 = local205;
                    local93 = local206;
                    local13 = local207;
                    edi_2 = edi_1 + 1;
                    local208 = esp_45;
                    local209 = edi_2;
                    local210 = local118;
                    local211 = local144;
                    local212 = local35;
                    local213 = local64;
                    local214 = local93;
                    local215 = local13;
                    local216 = esp_45;
                    local217 = local118;
                    local218 = local144;
                    local219 = local35;
                    local220 = local64;
                    local221 = local93;
                    local222 = local13;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp = local216;
            local120 = local217;
            local146 = local218;
            *(__size32*)(esp_38 - 4) = local219;
            local71 = local220;
            *(unsigned int*)(esp_38 - 32) = local221;
            local15 = local222;
            esi = *esi;
            local223 = esp;
            local224 = local120;
            local225 = local146;
            local226 = *(esp_38 - 4);
            local227 = local71;
            local228 = *(esp_38 - 32);
            local229 = local15;
            local230 = esp;
        } while (esi == 0);
    }
    esp = local230;
    ebp = *(esp + 56);
    return ebp;
}

/** address: 0x08062253 */
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
    union { __size32; __size32 *; } esp_25; 		// r28{204}
    __size32 esp_26; 		// r28{1}
    __size32 esp_27; 		// r28{1}
    union { __size32; __size32 *; } esp_28; 		// r28{124}
    union { __size32; __size32 *; } esp_29; 		// r28{124}
    __size32 esp_3; 		// r28{23}
    __size32 esp_30; 		// r28{84}
    __size32 esp_31; 		// r28{264}
    __size32 esp_32; 		// r28{322}
    __size32 esp_33; 		// r28{236}
    __size32 esp_34; 		// r28{59}
    __size32 esp_35; 		// r28{294}
    __size32 esp_36; 		// r28{167}
    __size32 esp_37; 		// r28{167}
    __size32 esp_38; 		// r28{84}
    __size32 esp_39; 		// r28{84}
    __size32 esp_4; 		// r28{27}
    __size32 esp_40; 		// r28{59}
    __size32 esp_41; 		// r28{59}
    union { __size32; __size32 *; } esp_42; 		// r28{204}
    union { __size32; __size32 *; } esp_43; 		// r28{204}
    __size32 esp_44; 		// r28{236}
    __size32 esp_45; 		// r28{236}
    __size32 esp_46; 		// r28{264}
    __size32 esp_47; 		// r28{264}
    __size32 esp_48; 		// r28{322}
    __size32 esp_49; 		// r28{322}
    __size32 esp_5; 		// r28{27}
    __size32 esp_6; 		// r28{27}
    __size32 esp_7; 		// r28{31}
    __size32 esp_8; 		// r28{31}
    __size32 esp_9; 		// r28{31}
    int local0; 		// m[esp - 4]
    int local1; 		// m[esp - 108]
    int local10; 		// m[esp - 68]
    __size32 local100; 		// m[esp_26 - 36]{272}
    __size32 local101; 		// m[esp_26 - 36]{329}
    __size32 local102; 		// m[esp_26 - 36]{244}
    int local103; 		// m[esp_26 - 36]{228}
    int local104; 		// m[esp_26 - 36]{228}
    __size32 local105; 		// m[esp_26 - 36]{244}
    __size32 local106; 		// m[esp_26 - 36]{244}
    __size32 local107; 		// m[esp_26 - 36]{272}
    __size32 local108; 		// m[esp_26 - 36]{272}
    __size32 local109; 		// m[esp_26 - 36]{65}
    int local11; 		// m[esp - 104]
    __size32 local110; 		// m[esp_26 - 36]{173}
    __size32 local111; 		// m[esp_26 - 36]{130}
    __size32 local112; 		// m[esp_26 - 36]{130}
    __size32 local113; 		// m[esp_26 - 36]{173}
    __size32 local114; 		// m[esp_26 - 36]{173}
    __size32 local115; 		// m[esp_26 - 36]{329}
    __size32 local116; 		// m[esp_26 - 36]{329}
    __size32 local117; 		// m[esp_26 - 36]{90}
    __size32 local118; 		// m[esp_26 - 36]{90}
    __size32 local119; 		// m[esp_26 - 36]{210}
    int local12; 		// m[esp - 112]
    __size32 local120; 		// m[esp_26 - 36]{210}
    __size32 local121; 		// m[esp_26 - 40]{10}
    __size32 local122; 		// m[esp_26 - 40]{10}
    __size32 local123; 		// m[esp_26 - 40]{10}
    __size32 local124; 		// m[esp_26 - 40]{131}
    __size32 local125; 		// m[esp_26 - 40]{91}
    int local126; 		// m[esp_26 - 40]{160}
    int local127; 		// m[esp_26 - 40]{160}
    __size32 local128; 		// m[esp_26 - 40]{211}
    __size32 local129; 		// m[esp_26 - 40]{273}
    int local13; 		// m[esp - 144]
    __size32 local130; 		// m[esp_26 - 40]{330}
    __size32 local131; 		// m[esp_26 - 40]{245}
    int local132; 		// m[esp_26 - 40]{228}
    int local133; 		// m[esp_26 - 40]{228}
    __size32 local134; 		// m[esp_26 - 40]{131}
    __size32 local135; 		// m[esp_26 - 40]{131}
    __size32 local136; 		// m[esp_26 - 40]{174}
    __size32 local137; 		// m[esp_26 - 40]{174}
    __size32 local138; 		// m[esp_26 - 40]{273}
    __size32 local139; 		// m[esp_26 - 40]{273}
    __size32 local14; 		// m[esp + 4]
    __size32 local140; 		// m[esp_26 - 40]{66}
    __size32 local141; 		// m[esp_26 - 40]{330}
    __size32 local142; 		// m[esp_26 - 40]{330}
    __size32 local143; 		// m[esp_26 - 40]{91}
    __size32 local144; 		// m[esp_26 - 40]{91}
    __size32 local145; 		// m[esp_26 - 40]{211}
    __size32 local146; 		// m[esp_26 - 40]{211}
    __size32 local147; 		// m[esp_26 - 40]{245}
    __size32 local148; 		// m[esp_26 - 40]{245}
    __size32 local149; 		// m[esp_26 - 44]{8}
    int local15; 		// m[esp_26 + 4]{160}
    __size32 local150; 		// m[esp_26 - 44]{8}
    __size32 local151; 		// m[esp_26 - 44]{8}
    __size32 local152; 		// m[esp_26 - 44]{132}
    __size32 local153; 		// m[esp_26 - 44]{92}
    int local154; 		// m[esp_26 - 44]{160}
    int local155; 		// m[esp_26 - 44]{160}
    __size32 local156; 		// m[esp_26 - 44]{212}
    __size32 local157; 		// m[esp_26 - 44]{274}
    __size32 local158; 		// m[esp_26 - 44]{331}
    __size32 local159; 		// m[esp_26 - 44]{246}
    int local16; 		// m[esp_26 + 4]{160}
    int local160; 		// m[esp_26 - 44]{228}
    int local161; 		// m[esp_26 - 44]{228}
    __size32 local162; 		// m[esp_26 - 44]{175}
    __size32 local163; 		// m[esp_26 - 44]{175}
    __size32 local164; 		// m[esp_26 - 44]{92}
    __size32 local165; 		// m[esp_26 - 44]{92}
    __size32 local166; 		// m[esp_26 - 44]{303}
    __size32 local167; 		// m[esp_26 - 44]{212}
    __size32 local168; 		// m[esp_26 - 44]{212}
    __size32 local169; 		// m[esp_26 - 44]{246}
    int local17; 		// m[esp_26 + 4]{160}
    __size32 local170; 		// m[esp_26 - 44]{246}
    __size32 local171; 		// m[esp_26 - 44]{132}
    __size32 local172; 		// m[esp_26 - 44]{132}
    __size32 local173; 		// m[esp_26 - 44]{274}
    __size32 local174; 		// m[esp_26 - 44]{274}
    __size32 local175; 		// m[esp_26 - 44]{331}
    __size32 local176; 		// m[esp_26 - 44]{331}
    __size32 local177; 		// m[esp_26 - 48]{19}
    __size32 local178; 		// m[esp_26 - 48]{19}
    __size32 local179; 		// m[esp_26 - 48]{19}
    __size32 local18; 		// m[esp_26 + 4]{103}
    __size32 local180; 		// m[esp_26 - 48]{133}
    __size32 local181; 		// m[esp_26 - 48]{93}
    int local182; 		// m[esp_26 - 48]{160}
    int local183; 		// m[esp_26 - 48]{160}
    __size32 local184; 		// m[esp_26 - 48]{213}
    __size32 local185; 		// m[esp_26 - 48]{275}
    __size32 local186; 		// m[esp_26 - 48]{332}
    __size32 local187; 		// m[esp_26 - 48]{247}
    int local188; 		// m[esp_26 - 48]{228}
    int local189; 		// m[esp_26 - 48]{228}
    int local19; 		// m[esp_26 + 4]{228}
    __size32 local190; 		// m[esp_26 - 48]{133}
    __size32 local191; 		// m[esp_26 - 48]{133}
    __size32 local192; 		// m[esp_26 - 48]{176}
    __size32 local193; 		// m[esp_26 - 48]{176}
    __size32 local194; 		// m[esp_26 - 48]{93}
    __size32 local195; 		// m[esp_26 - 48]{93}
    __size32 local196; 		// m[esp_26 - 48]{304}
    __size32 local197; 		// m[esp_26 - 48]{213}
    __size32 local198; 		// m[esp_26 - 48]{213}
    __size32 local199; 		// m[esp_26 - 48]{247}
    int local2; 		// m[esp - 44]
    int local20; 		// m[esp_26 + 4]{228}
    __size32 local200; 		// m[esp_26 - 48]{247}
    __size32 local201; 		// m[esp_26 - 48]{275}
    __size32 local202; 		// m[esp_26 - 48]{275}
    __size32 local203; 		// m[esp_26 - 48]{332}
    __size32 local204; 		// m[esp_26 - 48]{332}
    __size32 local205; 		// m[esp_26 - 68]{16}
    __size32 local206; 		// m[esp_26 - 68]{16}
    __size32 local207; 		// m[esp_26 - 68]{16}
    __size32 local208; 		// m[esp_26 - 68]{134}
    __size32 local209; 		// m[esp_26 - 68]{94}
    __size32 local21; 		// m[esp_26 + 4]{3}
    int local210; 		// m[esp_26 - 68]{160}
    int local211; 		// m[esp_26 - 68]{160}
    __size32 local212; 		// m[esp_26 - 68]{214}
    __size32 local213; 		// m[esp_26 - 68]{276}
    __size32 local214; 		// m[esp_26 - 68]{333}
    __size32 local215; 		// m[esp_26 - 68]{248}
    int local216; 		// m[esp_26 - 68]{228}
    int local217; 		// m[esp_26 - 68]{228}
    __size32 local218; 		// m[esp_26 - 68]{134}
    __size32 local219; 		// m[esp_26 - 68]{134}
    __size32 local22; 		// m[esp_26 + 4]{3}
    __size32 local220; 		// m[esp_26 - 68]{177}
    __size32 local221; 		// m[esp_26 - 68]{177}
    __size32 local222; 		// m[esp_26 - 68]{94}
    __size32 local223; 		// m[esp_26 - 68]{94}
    __size32 local224; 		// m[esp_26 - 68]{305}
    __size32 local225; 		// m[esp_26 - 68]{214}
    __size32 local226; 		// m[esp_26 - 68]{214}
    __size32 local227; 		// m[esp_26 - 68]{248}
    __size32 local228; 		// m[esp_26 - 68]{248}
    __size32 local229; 		// m[esp_26 - 68]{276}
    __size32 local23; 		// m[esp_26 + 4]{186}
    __size32 local230; 		// m[esp_26 - 68]{276}
    __size32 local231; 		// m[esp_26 - 68]{333}
    __size32 local232; 		// m[esp_26 - 68]{333}
    __size32 local233; 		// m[esp_26 - 72]{14}
    __size32 local234; 		// m[esp_26 - 72]{14}
    __size32 local235; 		// m[esp_26 - 72]{14}
    __size32 local236; 		// m[esp_26 - 72]{135}
    __size32 local237; 		// m[esp_26 - 72]{95}
    int local238; 		// m[esp_26 - 72]{160}
    int local239; 		// m[esp_26 - 72]{160}
    __size32 local24; 		// m[esp_26 + 4]{342}
    __size32 local240; 		// m[esp_26 - 72]{215}
    __size32 local241; 		// m[esp_26 - 72]{277}
    __size32 local242; 		// m[esp_26 - 72]{334}
    __size32 local243; 		// m[esp_26 - 72]{249}
    int local244; 		// m[esp_26 - 72]{228}
    int local245; 		// m[esp_26 - 72]{228}
    __size32 local246; 		// m[esp_26 - 72]{135}
    __size32 local247; 		// m[esp_26 - 72]{135}
    __size32 local248; 		// m[esp_26 - 72]{178}
    __size32 local249; 		// m[esp_26 - 72]{178}
    __size32 local25; 		// m[esp_26 + 4]{257}
    __size32 local250; 		// m[esp_26 - 72]{95}
    __size32 local251; 		// m[esp_26 - 72]{95}
    __size32 local252; 		// m[esp_26 - 72]{306}
    __size32 local253; 		// m[esp_26 - 72]{215}
    __size32 local254; 		// m[esp_26 - 72]{215}
    __size32 local255; 		// m[esp_26 - 72]{249}
    __size32 local256; 		// m[esp_26 - 72]{249}
    __size32 local257; 		// m[esp_26 - 72]{277}
    __size32 local258; 		// m[esp_26 - 72]{277}
    __size32 local259; 		// m[esp_26 - 72]{334}
    __size32 local26; 		// m[esp_26 + 4]{314}
    __size32 local260; 		// m[esp_26 - 72]{334}
    __size32 local261; 		// m[esp_26 - 76]{15}
    __size32 local262; 		// m[esp_26 - 76]{15}
    __size32 local263; 		// m[esp_26 - 76]{15}
    __size32 local264; 		// m[esp_26 - 76]{136}
    __size32 local265; 		// m[esp_26 - 76]{96}
    int local266; 		// m[esp_26 - 76]{160}
    int local267; 		// m[esp_26 - 76]{160}
    __size32 local268; 		// m[esp_26 - 76]{216}
    __size32 local269; 		// m[esp_26 - 76]{278}
    __size32 local27; 		// m[esp_26 + 4]{285}
    __size32 local270; 		// m[esp_26 - 76]{335}
    __size32 local271; 		// m[esp_26 - 76]{250}
    int local272; 		// m[esp_26 - 76]{228}
    int local273; 		// m[esp_26 - 76]{228}
    __size32 local274; 		// m[esp_26 - 76]{136}
    __size32 local275; 		// m[esp_26 - 76]{136}
    __size32 local276; 		// m[esp_26 - 76]{179}
    __size32 local277; 		// m[esp_26 - 76]{179}
    __size32 local278; 		// m[esp_26 - 76]{96}
    __size32 local279; 		// m[esp_26 - 76]{96}
    __size32 local28; 		// m[esp_26 + 4]{186}
    __size32 local280; 		// m[esp_26 - 76]{307}
    __size32 local281; 		// m[esp_26 - 76]{216}
    __size32 local282; 		// m[esp_26 - 76]{216}
    __size32 local283; 		// m[esp_26 - 76]{250}
    __size32 local284; 		// m[esp_26 - 76]{250}
    __size32 local285; 		// m[esp_26 - 76]{278}
    __size32 local286; 		// m[esp_26 - 76]{278}
    __size32 local287; 		// m[esp_26 - 76]{335}
    __size32 local288; 		// m[esp_26 - 76]{335}
    __size32 local289; 		// m[esp_26 - 80]{12}
    __size32 local29; 		// m[esp_26 + 4]{186}
    __size32 local290; 		// m[esp_26 - 80]{12}
    __size32 local291; 		// m[esp_26 - 80]{12}
    __size32 local292; 		// m[esp_26 - 80]{137}
    __size32 local293; 		// m[esp_26 - 80]{97}
    int local294; 		// m[esp_26 - 80]{160}
    int local295; 		// m[esp_26 - 80]{160}
    __size32 local296; 		// m[esp_26 - 80]{217}
    __size32 local297; 		// m[esp_26 - 80]{279}
    __size32 local298; 		// m[esp_26 - 80]{336}
    __size32 local299; 		// m[esp_26 - 80]{251}
    int local3; 		// m[esp - 36]
    __size32 local30; 		// m[esp_26 + 4]{103}
    int local300; 		// m[esp_26 - 80]{228}
    int local301; 		// m[esp_26 - 80]{228}
    __size32 local302; 		// m[esp_26 - 80]{137}
    __size32 local303; 		// m[esp_26 - 80]{137}
    __size32 local304; 		// m[esp_26 - 80]{180}
    __size32 local305; 		// m[esp_26 - 80]{180}
    __size32 local306; 		// m[esp_26 - 80]{97}
    __size32 local307; 		// m[esp_26 - 80]{97}
    __size32 local308; 		// m[esp_26 - 80]{308}
    __size32 local309; 		// m[esp_26 - 80]{217}
    __size32 local31; 		// m[esp_26 + 4]{103}
    __size32 local310; 		// m[esp_26 - 80]{217}
    __size32 local311; 		// m[esp_26 - 80]{251}
    __size32 local312; 		// m[esp_26 - 80]{251}
    __size32 local313; 		// m[esp_26 - 80]{279}
    __size32 local314; 		// m[esp_26 - 80]{279}
    __size32 local315; 		// m[esp_26 - 80]{336}
    __size32 local316; 		// m[esp_26 - 80]{336}
    __size32 local317; 		// m[esp_26 - 104]{17}
    __size32 local318; 		// m[esp_26 - 104]{17}
    __size32 local319; 		// m[esp_26 - 104]{17}
    __size32 local32; 		// m[esp_26 + 4]{257}
    __size32 local320; 		// m[esp_26 - 104]{138}
    __size32 local321; 		// m[esp_26 - 104]{98}
    int local322; 		// m[esp_26 - 104]{160}
    int local323; 		// m[esp_26 - 104]{160}
    __size32 local324; 		// m[esp_26 - 104]{218}
    __size32 local325; 		// m[esp_26 - 104]{280}
    __size32 local326; 		// m[esp_26 - 104]{337}
    __size32 local327; 		// m[esp_26 - 104]{252}
    int local328; 		// m[esp_26 - 104]{228}
    int local329; 		// m[esp_26 - 104]{228}
    __size32 local33; 		// m[esp_26 + 4]{257}
    __size32 local330; 		// m[esp_26 - 104]{138}
    __size32 local331; 		// m[esp_26 - 104]{138}
    __size32 local332; 		// m[esp_26 - 104]{181}
    __size32 local333; 		// m[esp_26 - 104]{181}
    __size32 local334; 		// m[esp_26 - 104]{98}
    __size32 local335; 		// m[esp_26 - 104]{98}
    __size32 local336; 		// m[esp_26 - 104]{309}
    __size32 local337; 		// m[esp_26 - 104]{218}
    __size32 local338; 		// m[esp_26 - 104]{218}
    __size32 local339; 		// m[esp_26 - 104]{252}
    __size32 local34; 		// m[esp_26 + 4]{342}
    __size32 local340; 		// m[esp_26 - 104]{252}
    __size32 local341; 		// m[esp_26 - 104]{280}
    __size32 local342; 		// m[esp_26 - 104]{280}
    __size32 local343; 		// m[esp_26 - 104]{337}
    __size32 local344; 		// m[esp_26 - 104]{337}
    __size32 local345; 		// m[esp_26 - 108]{21}
    __size32 local346; 		// m[esp_26 - 108]{21}
    __size32 local347; 		// m[esp_26 - 108]{21}
    __size32 local348; 		// m[esp_26 - 108]{139}
    __size32 local349; 		// m[esp_26 - 108]{99}
    __size32 local35; 		// m[esp_26 + 4]{342}
    int local350; 		// m[esp_26 - 108]{160}
    int local351; 		// m[esp_26 - 108]{160}
    __size32 local352; 		// m[esp_26 - 108]{219}
    __size32 local353; 		// m[esp_26 - 108]{281}
    __size32 local354; 		// m[esp_26 - 108]{338}
    __size32 local355; 		// m[esp_26 - 108]{253}
    int local356; 		// m[esp_26 - 108]{228}
    int local357; 		// m[esp_26 - 108]{228}
    __size32 local358; 		// m[esp_26 - 108]{139}
    __size32 local359; 		// m[esp_26 - 108]{139}
    __size32 local36; 		// m[esp_26 - 4]{7}
    __size32 local360; 		// m[esp_26 - 108]{182}
    __size32 local361; 		// m[esp_26 - 108]{182}
    __size32 local362; 		// m[esp_26 - 108]{99}
    __size32 local363; 		// m[esp_26 - 108]{99}
    __size32 local364; 		// m[esp_26 - 108]{310}
    __size32 local365; 		// m[esp_26 - 108]{219}
    __size32 local366; 		// m[esp_26 - 108]{219}
    __size32 local367; 		// m[esp_26 - 108]{253}
    __size32 local368; 		// m[esp_26 - 108]{253}
    __size32 local369; 		// m[esp_26 - 108]{281}
    __size32 local37; 		// m[esp_26 - 4]{7}
    __size32 local370; 		// m[esp_26 - 108]{281}
    __size32 local371; 		// m[esp_26 - 108]{338}
    __size32 local372; 		// m[esp_26 - 108]{338}
    unsigned int local373; 		// m[esp_26 - 112]{22}
    unsigned int local374; 		// m[esp_26 - 112]{22}
    unsigned int local375; 		// m[esp_26 - 112]{22}
    unsigned int local376; 		// m[esp_26 - 112]{140}
    unsigned int local377; 		// m[esp_26 - 112]{100}
    int local378; 		// m[esp_26 - 112]{160}
    int local379; 		// m[esp_26 - 112]{160}
    __size32 local38; 		// m[esp_26 - 4]{7}
    unsigned int local380; 		// m[esp_26 - 112]{220}
    unsigned int local381; 		// m[esp_26 - 112]{282}
    unsigned int local382; 		// m[esp_26 - 112]{339}
    unsigned int local383; 		// m[esp_26 - 112]{254}
    int local384; 		// m[esp_26 - 112]{228}
    int local385; 		// m[esp_26 - 112]{228}
    unsigned int local386; 		// m[esp_26 - 112]{140}
    unsigned int local387; 		// m[esp_26 - 112]{140}
    unsigned int local388; 		// m[esp_26 - 112]{183}
    unsigned int local389; 		// m[esp_26 - 112]{183}
    __size32 local39; 		// m[esp_26 - 4]{128}
    unsigned int local390; 		// m[esp_26 - 112]{100}
    unsigned int local391; 		// m[esp_26 - 112]{100}
    unsigned int local392; 		// m[esp_26 - 112]{311}
    unsigned int local393; 		// m[esp_26 - 112]{220}
    unsigned int local394; 		// m[esp_26 - 112]{220}
    unsigned int local395; 		// m[esp_26 - 112]{254}
    unsigned int local396; 		// m[esp_26 - 112]{254}
    unsigned int local397; 		// m[esp_26 - 112]{282}
    unsigned int local398; 		// m[esp_26 - 112]{282}
    unsigned int local399; 		// m[esp_26 - 112]{339}
    int local4; 		// m[esp - 40]
    __size32 local40; 		// m[esp_26 - 4]{88}
    unsigned int local400; 		// m[esp_26 - 112]{339}
    int local401; 		// tmpb{87}
    int local402; 		// tmpb{160}
    int local403; 		// tmpb{160}
    int local404; 		// tmpb{160}
    int local405; 		// tmpb{170}
    int local406; 		// tmpb{160}
    int local407; 		// tmpb{325}
    int local408; 		// tmpb{240}
    int local409; 		// tmpb{61}
    int local41; 		// m[esp_26 - 4]{160}
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
    int local42; 		// m[esp_26 - 4]{160}
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
    __size32 local43; 		// m[esp_26 - 4]{208}
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
    __size32 local44; 		// m[esp_26 - 4]{270}
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
    __size32 local45; 		// m[esp_26 - 4]{327}
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
    __size32 local46; 		// m[esp_26 - 4]{242}
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
    int local47; 		// m[esp_26 - 4]{228}
    __size16 local470; 		// tmph{5}
    __size16 local471; 		// tmph{5}
    __size32 local472; 		// esp_34{59}
    int local473; 		// local409{61}
    __size16 local474; 		// local442{62}
    __size32 local475; 		// local59{63}
    __size32 local476; 		// m[esp_26 - 32]{64}
    __size32 local477; 		// local109{65}
    __size32 local478; 		// local140{66}
    __size32 local479; 		// m[esp_26 - 44]{67}
    int local48; 		// m[esp_26 - 4]{228}
    __size32 local480; 		// m[esp_26 - 48]{68}
    __size32 local481; 		// m[esp_26 - 68]{69}
    __size32 local482; 		// m[esp_26 - 72]{70}
    __size32 local483; 		// m[esp_26 - 76]{71}
    __size32 local484; 		// m[esp_26 - 80]{72}
    __size32 local485; 		// m[esp_26 - 104]{73}
    __size32 local486; 		// m[esp_26 - 108]{74}
    unsigned int local487; 		// m[esp_26 - 112]{75}
    __size32 local488; 		// esp_30{84}
    int local489; 		// local401{87}
    __size32 local49; 		// m[esp_26 - 4]{128}
    __size32 local490; 		// local40{88}
    __size32 local491; 		// local68{89}
    __size32 local492; 		// local96{90}
    __size32 local493; 		// local125{91}
    __size32 local494; 		// local153{92}
    __size32 local495; 		// local181{93}
    __size32 local496; 		// local209{94}
    __size32 local497; 		// local237{95}
    __size32 local498; 		// local265{96}
    __size32 local499; 		// local293{97}
    int local5; 		// m[esp - 32]
    __size32 local50; 		// m[esp_26 - 4]{128}
    __size32 local500; 		// local321{98}
    __size32 local501; 		// local349{99}
    unsigned int local502; 		// local377{100}
    __size32 local503; 		// local18{103}
    int local504; 		// eax_1{109}
    union { __size32 *; __size32; } local505; 		// esp_28{124}
    unsigned int local506; 		// esi{126}
    __size32 local507; 		// local39{128}
    __size32 local508; 		// local67{129}
    __size32 local509; 		// local95{130}
    __size32 local51; 		// m[esp_26 - 4]{171}
    __size32 local510; 		// local124{131}
    __size32 local511; 		// local152{132}
    __size32 local512; 		// local180{133}
    __size32 local513; 		// local208{134}
    __size32 local514; 		// local236{135}
    __size32 local515; 		// local264{136}
    __size32 local516; 		// local292{137}
    __size32 local517; 		// local320{138}
    __size32 local518; 		// local348{139}
    unsigned int local519; 		// local376{140}
    __size32 local52; 		// m[esp_26 - 4]{171}
    union { __size32 *; unsigned int; } local520; 		// eax{151}
    __size32 local521; 		// esp_36{167}
    int local522; 		// local405{170}
    __size32 local523; 		// local51{171}
    __size32 local524; 		// local79{172}
    __size32 local525; 		// local110{173}
    __size32 local526; 		// local136{174}
    __size32 local527; 		// local162{175}
    __size32 local528; 		// local192{176}
    __size32 local529; 		// local220{177}
    __size32 local53; 		// m[esp_26 - 4]{88}
    __size32 local530; 		// local248{178}
    __size32 local531; 		// local276{179}
    __size32 local532; 		// local304{180}
    __size32 local533; 		// local332{181}
    __size32 local534; 		// local360{182}
    unsigned int local535; 		// local388{183}
    __size32 local536; 		// local23{186}
    unsigned int local537; 		// ebx{203}
    union { __size32 *; __size32; } local538; 		// esp_25{204}
    __size32 local539; 		// local43{208}
    __size32 local54; 		// m[esp_26 - 4]{88}
    __size32 local540; 		// local71{209}
    __size32 local541; 		// local99{210}
    __size32 local542; 		// local128{211}
    __size32 local543; 		// local156{212}
    __size32 local544; 		// local184{213}
    __size32 local545; 		// local212{214}
    __size32 local546; 		// local240{215}
    __size32 local547; 		// local268{216}
    __size32 local548; 		// local296{217}
    __size32 local549; 		// local324{218}
    __size32 local55; 		// m[esp_26 - 4]{242}
    __size32 local550; 		// local352{219}
    unsigned int local551; 		// local380{220}
    unsigned int local552; 		// ebx{235}
    __size32 local553; 		// esp_33{236}
    int local554; 		// local408{240}
    __size16 local555; 		// local441{241}
    __size32 local556; 		// local46{242}
    __size32 local557; 		// local74{243}
    __size32 local558; 		// local102{244}
    __size32 local559; 		// local131{245}
    __size32 local56; 		// m[esp_26 - 4]{242}
    __size32 local560; 		// local159{246}
    __size32 local561; 		// local187{247}
    __size32 local562; 		// local215{248}
    __size32 local563; 		// local243{249}
    __size32 local564; 		// local271{250}
    __size32 local565; 		// local299{251}
    __size32 local566; 		// local327{252}
    __size32 local567; 		// local355{253}
    unsigned int local568; 		// local383{254}
    __size32 local569; 		// local25{257}
    __size32 local57; 		// m[esp_26 - 4]{270}
    __size32 local570; 		// esp_31{264}
    unsigned int local571; 		// edi{267}
    int local572; 		// local411{268}
    __size16 local573; 		// local444{269}
    __size32 local574; 		// local44{270}
    __size32 local575; 		// local72{271}
    __size32 local576; 		// local100{272}
    __size32 local577; 		// local129{273}
    __size32 local578; 		// local157{274}
    __size32 local579; 		// local185{275}
    __size32 local58; 		// m[esp_26 - 4]{270}
    __size32 local580; 		// local213{276}
    __size32 local581; 		// local241{277}
    __size32 local582; 		// local269{278}
    __size32 local583; 		// local297{279}
    __size32 local584; 		// local325{280}
    __size32 local585; 		// local353{281}
    unsigned int local586; 		// local381{282}
    __size32 local587; 		// local27{285}
    __size32 local588; 		// esp_35{294}
    int local589; 		// local410{297}
    __size32 local59; 		// m[esp_26 - 4]{63}
    __size16 local590; 		// local443{298}
    __size32 local591; 		// m[esp_26 - 4]{299}
    __size32 local592; 		// local83{300}
    __size32 local593; 		// m[esp_26 - 36]{301}
    __size32 local594; 		// m[esp_26 - 40]{302}
    __size32 local595; 		// local166{303}
    __size32 local596; 		// local196{304}
    __size32 local597; 		// local224{305}
    __size32 local598; 		// local252{306}
    __size32 local599; 		// local280{307}
    int local6; 		// m[esp - 48]
    __size32 local60; 		// m[esp_26 - 4]{327}
    __size32 local600; 		// local308{308}
    __size32 local601; 		// local336{309}
    __size32 local602; 		// local364{310}
    unsigned int local603; 		// local392{311}
    __size32 local604; 		// local26{314}
    __size32 local605; 		// esp_32{322}
    int local606; 		// local407{325}
    __size16 local607; 		// local440{326}
    __size32 local608; 		// local45{327}
    __size32 local609; 		// local73{328}
    __size32 local61; 		// m[esp_26 - 4]{327}
    __size32 local610; 		// local101{329}
    __size32 local611; 		// local130{330}
    __size32 local612; 		// local158{331}
    __size32 local613; 		// local186{332}
    __size32 local614; 		// local214{333}
    __size32 local615; 		// local242{334}
    __size32 local616; 		// local270{335}
    __size32 local617; 		// local298{336}
    __size32 local618; 		// local326{337}
    __size32 local619; 		// local354{338}
    __size32 local62; 		// m[esp_26 - 4]{208}
    unsigned int local620; 		// local382{339}
    __size32 local621; 		// local24{342}
    __size32 local622; 		// esp{348}
    __size32 local63; 		// m[esp_26 - 4]{208}
    __size32 local64; 		// m[esp_26 - 32]{11}
    __size32 local65; 		// m[esp_26 - 32]{11}
    __size32 local66; 		// m[esp_26 - 32]{11}
    __size32 local67; 		// m[esp_26 - 32]{129}
    __size32 local68; 		// m[esp_26 - 32]{89}
    int local69; 		// m[esp_26 - 32]{160}
    int local7; 		// m[esp - 80]
    int local70; 		// m[esp_26 - 32]{160}
    __size32 local71; 		// m[esp_26 - 32]{209}
    __size32 local72; 		// m[esp_26 - 32]{271}
    __size32 local73; 		// m[esp_26 - 32]{328}
    __size32 local74; 		// m[esp_26 - 32]{243}
    int local75; 		// m[esp_26 - 32]{228}
    int local76; 		// m[esp_26 - 32]{228}
    __size32 local77; 		// m[esp_26 - 32]{129}
    __size32 local78; 		// m[esp_26 - 32]{129}
    __size32 local79; 		// m[esp_26 - 32]{172}
    int local8; 		// m[esp - 72]
    __size32 local80; 		// m[esp_26 - 32]{172}
    __size32 local81; 		// m[esp_26 - 32]{89}
    __size32 local82; 		// m[esp_26 - 32]{89}
    __size32 local83; 		// m[esp_26 - 32]{300}
    __size32 local84; 		// m[esp_26 - 32]{271}
    __size32 local85; 		// m[esp_26 - 32]{271}
    __size32 local86; 		// m[esp_26 - 32]{328}
    __size32 local87; 		// m[esp_26 - 32]{328}
    __size32 local88; 		// m[esp_26 - 32]{209}
    __size32 local89; 		// m[esp_26 - 32]{209}
    int local9; 		// m[esp - 76]
    __size32 local90; 		// m[esp_26 - 32]{243}
    __size32 local91; 		// m[esp_26 - 32]{243}
    __size32 local92; 		// m[esp_26 - 36]{9}
    __size32 local93; 		// m[esp_26 - 36]{9}
    __size32 local94; 		// m[esp_26 - 36]{9}
    __size32 local95; 		// m[esp_26 - 36]{130}
    __size32 local96; 		// m[esp_26 - 36]{90}
    int local97; 		// m[esp_26 - 36]{160}
    int local98; 		// m[esp_26 - 36]{160}
    __size32 local99; 		// m[esp_26 - 36]{210}

    local36 = param2;
    local149 = caml_local_roots;
    local92 = 1;
    local121 = 1;
    local64 = esp_26 + 4;
    local289 = esp_26 - 44;
    caml_local_roots = esp_26 - 80;
    local233 = 1;
    local261 = 1;
    local205 = esp_26 - 48;
    local317 = 0;
    eax = caml_alloc_small(1, 0); /* Warning: also results in ebx */
    local473 = local437;
    local474 = local470;
    local475 = local36;
    local476 = local64;
    local477 = local92;
    local478 = local121;
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
    local493 = local121;
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
    esp_1 = caml_raise(param1, eax, ebx, esp_26 - 4); /* Warning: also results in ebp */
    local480 = local177;
    local486 = local345;
    local487 = local373;
    local495 = local177;
    local501 = local345;
    local502 = local373;
    *(__size32*)(esp_1 - 4) = ebp;
    *(__size32*)(esp_1 - 28) = 0x8073a80;
    esp_4 = caml_raise_constant(*(esp_1 - 28), esp_1 - 4, *(esp_1 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_4 - 4) = ebp;
    *(__size32*)(esp_4 - 28) = 0x8073a18;
    esp_7 = caml_raise_constant(*(esp_4 - 28), esp_4 - 4, *(esp_4 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_7 - 4) = ebp;
    *(__size32*)(esp_7 - 28) = 0x80739f0;
    esp_10 = caml_raise_constant(*(esp_7 - 28), esp_7 - 4, *(esp_7 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_10 - 4) = ebp;
    *(__size32*)(esp_10 - 28) = 0x80739d0;
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
bb0x8062347:
            esp_30 = local488;
            local401 = local489;
            local40 = local490;
            local68 = local491;
            local96 = local492;
            local125 = local493;
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
            esi = *(global_0x0807f2dc + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local472 = esp_30;
            local473 = local401;
            local475 = local40;
            local476 = local68;
            local477 = local96;
            local478 = local125;
            local479 = local153;
            local480 = local181;
            local481 = local209;
            local482 = local237;
            local483 = local265;
            local484 = local293;
            local485 = local321;
            local486 = local349;
            local487 = local377;
            local488 = esp_30;
            local489 = local401;
            local490 = local40;
            local491 = local68;
            local492 = local96;
            local493 = local125;
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
            local505 = esp_30;
            local507 = local40;
            local508 = local68;
            local509 = local96;
            local510 = local125;
            local511 = local153;
            local512 = local181;
            local513 = local209;
            local514 = local237;
            local515 = local265;
            local516 = local293;
            local517 = local321;
            local518 = local349;
            local519 = local377;
            local521 = esp_30;
            local522 = local401;
            local523 = local40;
            local524 = local68;
            local525 = local96;
            local526 = local125;
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
                        esp_28 = local505;
                        esi = local506;
                        local39 = local507;
                        local67 = local508;
                        local95 = local509;
                        local124 = local510;
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
                        *(__size32*)(esp_28 + 4) = eax;
                        eax = *eax;
                        *(__size32*)esp_28 = eax;
                        (*ebx)((unsigned char) eax, eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, local39, local67, local95, local124, local152, local180, local208, local236, local264, local292, local320, local348, local376, cl, dl, param1, param1);
                        local505 = esp_19;
                        local507 = local41;
                        local508 = local69;
                        local509 = local97;
                        local510 = local126;
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
                        local526 = local126;
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
                esp_36 = local521;
                local405 = local522;
                local51 = local523;
                local79 = local524;
                local110 = local525;
                local136 = local526;
                local162 = local527;
                local192 = local528;
                local220 = local529;
                local248 = local530;
                local276 = local531;
                local304 = local532;
                local332 = local533;
                local360 = local534;
                local388 = local535;
                local23 = local536;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local488 = esp_36;
                local489 = local405;
                local490 = local51;
                local491 = local79;
                local492 = local110;
                local493 = local136;
                local494 = local162;
                local495 = local192;
                local496 = local220;
                local497 = local248;
                local498 = local276;
                local499 = local304;
                local500 = local332;
                local501 = local360;
                local502 = local388;
                local503 = local23;
                goto bb0x8062347;
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
    local59 = local475;
    *(__size32*)(esp_26 - 32) = local476;
    local109 = local477;
    local140 = local478;
    *(__size32*)(esp_26 - 44) = local479;
    *(__size32*)(esp_26 - 48) = local480;
    *(__size32*)(esp_26 - 68) = local481;
    *(__size32*)(esp_26 - 72) = local482;
    *(__size32*)(esp_26 - 76) = local483;
    *(__size32*)(esp_26 - 80) = local484;
    *(__size32*)(esp_26 - 104) = local485;
    *(__size32*)(esp_26 - 108) = local486;
    *(unsigned int*)(esp_26 - 112) = local487;
    param1 = local14;
    local605 = esp_34;
    local606 = local409;
    local607 = local442;
    local608 = local59;
    local609 = *(esp_26 - 32);
    local610 = local109;
    local611 = local140;
    local612 = *(esp_26 - 44);
    local613 = *(esp_26 - 48);
    local614 = *(esp_26 - 68);
    local615 = *(esp_26 - 72);
    local616 = *(esp_26 - 76);
    local617 = *(esp_26 - 80);
    local618 = *(esp_26 - 104);
    local619 = *(esp_26 - 108);
    local620 = *(esp_26 - 112);
    local621 = *(esp_26 + 4);
    local622 = esp_34;
    if (*(ebp + 24) != 0) {
        esi = *(ebp + 24);
        *(__size32*)(ebp - 28) = 0;
        do {
            esp_32 = local605;
            local407 = local606;
            local440 = local607;
            local45 = local608;
            local73 = local609;
            local101 = local610;
            local130 = local611;
            local158 = local612;
            local186 = local613;
            local214 = local614;
            local242 = local615;
            local270 = local616;
            local298 = local617;
            local326 = local618;
            local354 = local619;
            local382 = local620;
            local24 = local621;
            edi = 0;
            local570 = esp_32;
            local571 = edi;
            local572 = local407;
            local573 = local440;
            local574 = local45;
            local575 = local73;
            local576 = local101;
            local577 = local130;
            local578 = local158;
            local579 = local186;
            local580 = local214;
            local581 = local242;
            local582 = local270;
            local583 = local298;
            local584 = local326;
            local585 = local354;
            local586 = local382;
            local587 = local24;
            local588 = esp_32;
            local589 = local407;
            local590 = local440;
            local591 = local45;
            local592 = local73;
            local593 = local101;
            local594 = local130;
            local595 = local158;
            local596 = local186;
            local597 = local214;
            local598 = local242;
            local599 = local270;
            local600 = local298;
            local601 = local326;
            local602 = local354;
            local603 = local382;
            local604 = local24;
            if (*(esi + 4) > 0) {
                do {
                    esp_31 = local570;
                    edi = local571;
                    local411 = local572;
                    local444 = local573;
                    local44 = local574;
                    local72 = local575;
                    local100 = local576;
                    local129 = local577;
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
                    local538 = esp_31;
                    local539 = local44;
                    local540 = local72;
                    local541 = local100;
                    local542 = local129;
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
                    local553 = esp_31;
                    local554 = local411;
                    local555 = local444;
                    local556 = local44;
                    local557 = local72;
                    local558 = local100;
                    local559 = local129;
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
                            esp_25 = local538;
                            local43 = local539;
                            local71 = local540;
                            local99 = local541;
                            local128 = local542;
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
                            *(__size32*)(esp_25 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_25 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, eax_12, ecx, edx, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), local43, local71, local99, local128, local156, local184, local212, local240, local268, local296, local324, local352, local380, cl, dl, param1, param1);
                            local538 = esp_22;
                            local539 = local47;
                            local540 = local75;
                            local541 = local103;
                            local542 = local132;
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
                            local559 = local132;
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
                    esp_33 = local553;
                    edi_1 = edi;
                    local408 = local554;
                    local441 = local555;
                    local46 = local556;
                    local74 = local557;
                    local102 = local558;
                    local131 = local559;
                    local159 = local560;
                    local187 = local561;
                    local215 = local562;
                    local243 = local563;
                    local271 = local564;
                    local299 = local565;
                    local327 = local566;
                    local355 = local567;
                    local383 = local568;
                    local25 = local569;
                    edi_2 = edi_1 + 1;
                    local570 = esp_33;
                    local571 = edi_2;
                    local572 = local408;
                    local573 = local441;
                    local574 = local46;
                    local575 = local74;
                    local576 = local102;
                    local577 = local131;
                    local578 = local159;
                    local579 = local187;
                    local580 = local215;
                    local581 = local243;
                    local582 = local271;
                    local583 = local299;
                    local584 = local327;
                    local585 = local355;
                    local586 = local383;
                    local587 = local25;
                    local588 = esp_33;
                    local589 = local408;
                    local590 = local441;
                    local591 = local46;
                    local592 = local74;
                    local593 = local102;
                    local594 = local131;
                    local595 = local159;
                    local596 = local187;
                    local597 = local215;
                    local598 = local243;
                    local599 = local271;
                    local600 = local299;
                    local601 = local327;
                    local602 = local355;
                    local603 = local383;
                    local604 = local25;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_35 = local588;
            local410 = local589;
            local443 = local590;
            *(__size32*)(esp_26 - 4) = local591;
            local83 = local592;
            *(__size32*)(esp_26 - 36) = local593;
            *(__size32*)(esp_26 - 40) = local594;
            local166 = local595;
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
            local605 = esp_35;
            local606 = local410;
            local607 = local443;
            local608 = *(esp_26 - 4);
            local609 = local83;
            local610 = *(esp_26 - 36);
            local611 = *(esp_26 - 40);
            local612 = local166;
            local613 = local196;
            local614 = local224;
            local615 = local252;
            local616 = local280;
            local617 = local308;
            local618 = local336;
            local619 = local364;
            local620 = local392;
            local621 = local26;
            local622 = esp_35;
        } while (esi == 0);
    }
    esp = local622;
    ebx = *(esp + 44);
    esi = *(esp + 48);
    edi = *(esp + 52);
    ebp = *(esp + 56);
    return cl; /* WARNING: Also returning: dl := dl, ecx := ecx, edx := edx, ebx := ebx, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x08065141 */
__size32 caml_stat_free(union { void *; __size32; } param1)
{
    int ecx; 		// r25
    int edx; 		// r26

    ecx = free(param1); /* Warning: also results in edx */
    return ecx; /* WARNING: Also returning: edx := edx */
}

/** address: 0x0806276a */
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
                        if ( ~(((unsigned char) eax_8 & 0x1) != 0 || eax_8 >= *(&caml_globals + 0xc7bc) || eax_8 <= *(&caml_globals + 0xc7b8))) {
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
                eax = *(&caml_globals + 0x9650);
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
    eax = *(&caml_globals + 0x9650);
    ebx_38 = local30;
    esp_27 = local31;
    ebp_21 = local32;
    edi_28 = local33;
    *(unsigned int*)(&caml_globals + 0x965c) = eax;
    ecx_5 = *(&caml_globals + 0x9658);
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
                    if ( ~(((unsigned char) eax_2 & 0x1) != 0 || eax_2 >= *(&caml_globals + 0xc7bc) || eax_2 <= *(&caml_globals + 0xc7b8))) {
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
    if (*0x807d13c == 0) {
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
    ecx_9 = *(&caml_globals + 0x964c);
    *(__size32*)(ebp_15 - 28) = ecx_9;
    edx = *(&caml_globals + 0x9378);
    dl_2 = (unsigned char) edx;
    eax = *(&caml_globals + 0x10254);
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
bb0x8062897:
            esp_51 = local65;
            ebp_14 = local66;
            edi_22 = local67;
            esi_3 = *(&caml_globals + 0x1024c);
            eax = (unsigned int)edx >> 3 & esi_3;
            ecx_12 = *(&caml_globals + 0x9648);
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
                        if ( ~(((unsigned char) eax & 0x1) != 0 || eax >= *(&caml_globals + 0xc7bc) || eax <= *(&caml_globals + 0xc7b8))) {
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
                goto bb0x8062897;
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
    esi_10 = *(&caml_globals + 0x9640);
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
                            if ( ~(((unsigned char) eax_11 & 0x1) != 0 || eax_11 >= *(&caml_globals + 0xc7bc) || eax_11 <= *(&caml_globals + 0xc7b8))) {
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
    *(esp_78 - 32) = *0x807d150;
    *(__size32*)esp_75 = 0x80649ec;
    cl = caml_scan_global_young_roots(*esp_75, ecx_1); /* Warning: also results in ecx, edx, esp_8 */
    *(__size32*)esp_8 = 0x80649ec;
    edx = caml_final_do_young_roots(*esp_8, edx); /* Warning: also results in ebx_23, ebp_11, esi_18, edi_17 */
    eax = *(&caml_globals + 0x9644);
    if (eax != 0) {
        *(__size32*)esp_11 = 0x80649ec;
        (*eax)((unsigned char) eax, dl, bl, eax, ecx, edx, ebx_23, ebp_11, esi_18, edi_17, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), param4, param6, param5, param3, *(esp_78 - 32), cl);
    }
    return;
}

/** address: 0x080649ec */
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
bb0x80649fb:
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
    while ( ~((bl & 0x1) != 0 || ebx_2 >= *(&caml_globals + 0xc7bc) || ebx_2 <= *(&caml_globals + 0xc7b8))) {
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
bb0x8064b49:
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
                            goto bb0x8064b49;
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
                    goto bb0x80649fb;
                }
                else {
                    *(unsigned int*)((unsigned char) edx_1) = edx_4;
                    edx_7 = *(&caml_globals + 0xc804);
                    dl = (unsigned char) edx_7;
                    *(__size32*)(((unsigned char) edx_1) + 4) = edx_7;
                    *(union { unsigned int *; __size32; }*)0x80802f8 = ebx_2;
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
bb0x80649fb:
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

/** address: 0x08064b7b */
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
        edi = *0x80802f8;
        local5 = esp_4;
        if (edi != 0) {
            ebx = *edi;
            esi = ebx + 4;
            eax = *(ebx + 4);
            *(__size32*)(&caml_globals + 0xc804) = eax;
            eax = *ebx;
            if ( ~(((unsigned char) eax & 0x1) != 0 || eax >= *(&caml_globals + 0xc7bc) || eax <= *(&caml_globals + 0xc7b8))) {
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
bb0x8064bf2:
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
    if (((unsigned char) eax & 0x1) != 0 || eax >= *(&caml_globals + 0xc7bc) || eax <= *(&caml_globals + 0xc7b8)) {
        *(unsigned int*)esi = eax;
        goto bb0x8064bf2;
    }
    else {
        *(__size32*)(esp_2 + 4) = esi;
        *(unsigned int*)esp_2 = eax;
        dl = caml_oldify_one(*esp_2, *(esp_2 + 4), dl, eax, ecx, edx); /* Warning: also results in ecx, edx, ebx, esp, ebp, esi, edi */
        local7 = esp;
        goto bb0x8064bf2;
    }
    goto bb0x8064bf2;
}

/** address: 0x0806fa95 */
void caml_final_empty_young()
{
    __size32 eax; 		// r24

    eax = *(global_0x0807f2dc + 0x4568);
    *(__size32*)(global_0x0807f2dc + 0x4574) = eax;
    return;
}

/** address: 0x08063fb7 */
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

    ecx = caml_gc_message(1, 0x807178b);
    ebp = caml_darken_all_roots(al, cl, dl, ecx, ebx, esi, edi);
    *(__size32*)(&caml_globals + 0x10388) = 0;
    *(__size32*)(&caml_globals + 0x10374) = 10;
    *(__size32*)(&caml_globals + 0xc7a8) = 0;
    ebp = *ebp;
    return ebp;
}

/** address: 0x08070a88 */
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
    (*esi)(local0, caml_last_return_address, caml_bottom_of_stack, 0x80709fe, caml_exception_pointer, pc);
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

/** address: 0x0806e6f9 */
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
    eax = caml_named_value(0x8072227); /* Warning: also results in esp */
    if (eax != 0) {
        ebx = caml_callback_exn(); /* Warning: also results in esp, esi, edi */
    }
    *(__size32*)(&named_value_table + 100) = esi;
    *(__size32*)(&named_value_table + 104) = edi;
    *(__size32*)(esp + 8) = ebx;
    *(__size32*)(esp + 4) = 0x807223d;
    *(__size32*)esp = stderr;
    fprintf(*esp, *(esp + 4));
    *(__size32*)esp = ebx;
    ecx = free(*esp);
    if (*0x8083864 != 0) {
        caml_print_exception_backtrace(*(esp - 96), *(esp - 92), *(esp - 88), *(esp - 84), *(esp - 80), *(esp - 76), *(esp - 72), *(esp - 56), *(esp - 48), *(esp - 44), *(esp - 40), *(esp - 36), param2, ecx);
    }
    *(__size32*)esp = 2;
    exit(*esp);
    return;
}

/** address: 0x08070a40 */
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

    tmp1 = *(&caml_globals + 0xfd70) & 0x1;
    if (tmp1 != 0) {
        ecx = caml_stash_backtrace(local5, local6, local2, local1, param2, param3, param3); /* Warning: also results in edx, ebx, ebp */
        esp = *0x807d120;
        *(__size32*)(&caml_globals + 0x962c) = *esp;
    }
    else {
        esp = *0x807d120;
        *(__size32*)(&caml_globals + 0x962c) = *esp;
    }
    return ecx; /* WARNING: Also returning: edx := edx, ebx := ebx, ebp := ebp */
}

/** address: 0x080658ba */
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
        eax = *(&caml_globals + 0xc7c0) - edx;
        *(unsigned int*)(&caml_globals + 0xc7c0) = eax;
        if (eax < *(&caml_globals + 0xc7c4)) {
            *(unsigned int*)(&caml_globals + 0xc7c0) = eax + edx;
            caml_minor_collection();
            *(__size32*)(&caml_globals + 0xc7c0) += edi;
        }
        ebx = param1 + 4 >> 2;
        ebp = esp_4 - 4;
        eax = *0x80802b4;
        *(__size32*)eax = (ebx << 10) + 1020;
        eax = *(&caml_globals + 0xc7c0);
        eax += 4;
    }
    *(__size32*)(eax + ebx * 4 - 4) = 0;
    *(unsigned int*)(eax + ebx * 4 - 1) = ebx * 4 - (unsigned char) param1;
    ebx = *(ebp - 12);
    ebp = *ebp;
    return eax; /* WARNING: Also returning: ebx := ebx, ebp := ebp */
}

/** address: 0x080624de */
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
    if (*0x807d158 == 0) {
        eax = *(&caml_globals + 996);
        if (eax != 0) {
            do {
                *(__size32*)esp = eax;
                ebx = caml_register_frametable(*esp); /* Warning: also results in esp, esi */
                eax = *(esi + (ebx + 1) * 4);
            } while (eax != 0);
        }
        *(__size32*)(&caml_globals + 0x9664) = 1;
    }
    eax = *(&caml_globals + 0x9660);
    if (eax == 0) {
bb0x806260d:
        *(__size32*)esp = 16;
        eax = caml_stat_alloc(*esp); /* Warning: also results in al, cl, dl, ecx, esp, ebp */
        *(unsigned int*)(&caml_globals + 0x9648) = eax;
        ebx = 4;
bb0x8062623:
        eax = 0;
        local6 = eax;
        do {
            eax_5 = local6;
            edx = *(&caml_globals + 0x9648);
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
            goto bb0x806260d;
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
            *(unsigned int*)(&caml_globals + 0x9648) = eax;
            if (ebx > 0) {
                goto bb0x8062623;
            }
        }
    }
    *(int*)(&caml_globals + 0x1024c) = ebx - 1;
    eax = *(&caml_globals + 0x9660);
    *(__size32*)(ebp - 32) = eax;
    if (eax != 0) {
        do {
            eax = *(ebp - 32);
            esi = *eax;
            eax = *esi;
            *(int*)(ebp - 28) = eax;
            if (eax > 0) {
                ebx = *(&caml_globals + 0x1024c);
                eax_1 = *(esi + 4);
                eax = (unsigned int)eax_1 >> 3 & ebx;
                ecx = *(&caml_globals + 0x9648);
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

/** address: 0x08062b9f */
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

    ebx = caml_iterate_global_roots(param1, 0x807d160); /* Warning: also results in esp */
    local4 = param2;
    esp = caml_iterate_global_roots(ebx, 0x807d1c0);
    ebx = *(&caml_globals + 0x96d0);
    if (ebx != 0) {
        do {
            cl = caml_insert_global_root(0x807d220, edx); /* Warning: also results in ecx, ebx, esp */
            local4 = ecx;
            ebx = *(ebx + 4);
        } while (ebx != 0);
        eax = *(&caml_globals + 0x96d0);
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
    edx = *(&caml_globals + 0x9714);
    local6 = param2;
    if (edx >= 0) {
        eax = 0;
        ecx = 0x807d1c4;
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
    *(__size32*)(&caml_globals + 0x9714) = 0;
    return cl; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x0806fa35 */
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
    esi = *(global_0x0807f2dc + 0x4574);
    local30 = param2;
    local31 = esp_1;
    local32 = esi;
    local33 = param2;
    local34 = esp_1;
    if (esi < *(global_0x0807f2dc + 0x4568)) {
        ebx = esi * 12;
        do {
            param2 = local30;
            esp_8 = local31;
            esi = local32;
            eax_1 = ebx + *0x808384c;
            *(__size32*)(esp_8 + 4) = eax_1;
            eax_4 = *eax_1;
            *(__size32*)esp_8 = eax_4;
            (*edi)(eax_4, param2, ebx, ebp, esi, edi, ADDFLAGS32(ebx, *0x808384c, eax_1), ADDFLAGS32(ebx, *0x808384c, eax_1), ADDFLAGS32(ebx, *0x808384c, eax_1), param1, local9, local14, local19, local24);
            eax_6 = ebx + *(global_0x0807f2dc + 0x4570);
            *(__size32*)(esp_4 + 4) = eax_6 + 4;
            eax_9 = *(eax_6 + 4);
            *(__size32*)esp_4 = eax_9;
            (*edi)(eax_9, eax_6 + 4, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx, *0x808384c, eax_6), ADDFLAGS32(ebx, *0x808384c, eax_6), ADDFLAGS32(ebx, *0x808384c, eax_6), local5, local10, local15, local20, local25);
            local30 = edx;
            local31 = esp_7;
            local33 = edx;
            local34 = esp_7;
            esi_4 = esi_1 + 1;
            ebx += 12;
            local32 = esi_4;
        } while (*(global_0x0807f2dc + 0x4568) > esi_1 + 1);
    }
    param2 = local33;
    esp = local34;
    ebx = *(esp + 28);
    esi = *(esp + 32);
    edi = *(esp + 36);
    ebp = *(esp + 40);
    return param2; /* WARNING: Also returning: ebx := ebx, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x080655e2 */
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
        edx = *(&caml_globals + 0x1037c) * ((unsigned long long)((esi_1) * 0x51eb851f >> 32) >> 5);
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
    *(__size32*)(&caml_globals + 0x10394) = %eax;
    if ( ~flags) {
        caml_urge_major_slice();
    }
    return;
}

/** address: 0x08062756 */
__size32 caml_darken_all_roots(__size8 param2, __size8 param3, __size8 param3, __size32 param5, unsigned int param6, unsigned int param7, __size32 param7)
{
    __size32 ebp; 		// r29
    __size32 esp; 		// r28
    __size32 local3; 		// m[esp - 64]

    ebp = caml_do_roots(local3, param2, param3, param3, param5, param6, esp - 4, param7, param7);
    ebp = *ebp;
    return ebp;
}

/** address: 0x0806e552 */
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

/** address: 0x0806e7e0 */
__size32 caml_named_value(union { char *; __size32; } param1)
{
    int eax; 		// r24
    __size32 ebx; 		// r27

    eax = hash_value_name(param1);
    ebx = named_value_table[eax];
    if (named_value_table[eax] == 0) {
bb0x806e81b:
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
        goto bb0x806e81b;
    }
    return eax;
}

/** address: 0x080706c8 */
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
                local4 = 0x807237c;
                local5 = 0x80723a0;
                eax = *0x807cfa0;
                local6 = eax;
                ecx = fprintf(eax, "%s file \"%s\", line %d, characters %d-%d\n", 0x807237c, param9, param10, param11, param12);
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

/** address: 0x08070759 */
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
    if (param2 != *0x807cf48) {
        *(__size32*)(&caml_globals + 0xfd74) = 0;
        *(__size32*)(&caml_globals + 0x9454) = param2;
    }
    if (*0x808386c != 0) {
bb0x80707a4:
        esp_2 = esp - 44;
        param1 = local6;
        local7 = esp_2;
        local8 = param1;
        if (*0x807d13c == 0) {
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
            edi = *(&caml_globals + 0x1024c);
            edx = (unsigned int)ebx >> 3 & edi;
            ecx = *(&caml_globals + 0x9648);
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
bb0x80707e4:
                    edx = local13;
                    local15 = edx;
                    if (*(eax + 4) == -1) {
                        esi = *(esi_1 + 8);
                        ebx = *(esi_1 + 12);
                        local14 = esi;
                        if (esi != 0) {
bb0x8070827:
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
                        edx_4 = *(&caml_globals + 0xfd74);
                        local15 = edx_4;
                        if (edx_4 <= 1023) {
                            ecx = *(&caml_globals + 0xfd78);
                            *(__size32*)(ecx + edx_4 * 4) = eax;
                            edx = edx_4 + 1;
                            *(__size32*)(&caml_globals + 0xfd74) = edx_4 + 1;
                            eax_1 = *(unsigned short*)(eax + 4);
                            esi_2 = esi_1 + (eax_1 & 0xfffc);
                            ebx = *(esi_1 + (eax_1 & 0xfffc) - 4);
                            local14 = esi_2;
                            goto bb0x8070827;
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
                    goto bb0x80707e4;
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
        *(union { void *; __size32; }*)0x808386c = eax;
        if (eax != 0) {
            goto bb0x80707a4;
        }
    }
    edx = local15;
    esp = local16;
    ebx = *(esp + 28);
    ebp = *(esp + 40);
    return ecx; /* WARNING: Also returning: edx := edx, ebx := ebx, ebp := ebp */
}

/** address: 0x08064dcc */
__size32 caml_check_urgent_gc()
{
    __size32 eax; 		// r24
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 esp_1; 		// r28{2}
    __size32 esp_4; 		// r28{6}
    __size32 esp_5; 		// r28{9}
    __size32 esp_6; 		// r28{1}
    __size32 local7; 		// m[esp + 4]
    __size32 local8; 		// esp_5{9}

    esp_1 = esp_6 - 44;
    *(__size32*)(&caml_globals + 0x9640) = esp_6 - 44;
    eax = *(&caml_globals + 0x9780);
    local8 = esp_1;
    if (eax != 0) {
        esp_4 = esp_6 - 48;
        caml_minor_collection();
        local8 = esp_4;
    }
    ebx = *(&caml_globals + 0x9640);
    esp_5 = local8;
    *(__size32*)(&caml_globals + 0x9640) = ebx;
    ebx = *(esp_5 + 36);
    ebp = *(esp_5 + 40);
    return local7; /* WARNING: Also returning: ebx := ebx, ebp := ebp */
}

/** address: 0x080624a8 */
__size32 caml_register_frametable(__size32 param1)
{
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 esi; 		// r30
    __size32 *esp_1; 		// r28{3}

    ebx = cons(); /* Warning: also results in esp_1, esi */
    *(__size32*)(&caml_globals + 0x9660) = param1;
    eax = *(&caml_globals + 0x9648);
    if (eax != 0) {
        *(__size32*)esp_1 = eax;
        caml_stat_free(*esp_1);
        *(__size32*)(&caml_globals + 0x9648) = 0;
    }
    return ebx; /* WARNING: Also returning: esi := esi */
}

/** address: 0x080629f0 */
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

/** address: 0x08062a50 */
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
bb0x8062a71:
            ecx_4 = local9;
            edx_2 = local10;
            eax_4 = *(edx_2 + ecx_4 * 4 + 4);
            local9 = ecx_4;
            local10 = edx_2;
            local11 = edx_2;
            if ( ~(eax_4 == 0 || *eax_4 >= param2)) {
                edx = eax_4;
                local10 = edx;
                goto bb0x8062a71;
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
        eax_8 = *(&caml_globals + 0x9778) * 0x10dcd;
        eax_11 = eax_8 + 0x6255;
        *(__size32*)(&caml_globals + 0x9778) = eax_8 + 0x6255;
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

/** address: 0x080639ec */
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
        ecx = *0x807ce90;
        edx = *ecx;
        if (edx == 0) {
bb0x8063a88:
            fl_last = ecx;
            ecx = 0x807ce88;
            edx = global_0x0807ce88;
            local15 = ecx;
            if (fl_prev == 0x807ce88) {
bb0x8063e56:
                param3 = local15;
                edi = 0;
                local16 = param3;
            }
            else {
                ebx = *(global_0x0807ce88 - 4);
                if (param2 > (unsigned int)((unsigned int)ebx >> 10)) {
                    do {
                        edx_1 = edx;
                        ecx = edx_1;
                        edx = *edx_1;
                        local15 = ecx;
                        if (fl_prev != edx_1) {
bb0x8063aaf:
                            ebx = *(edx - 4);
                        }
                        else {
                            goto bb0x8063e56;
                        }
                        goto bb0x8063aaf;
                    } while (param2 > (unsigned int)((unsigned int)ebx >> 10));
bb0x8063ab9:
                    eax = allocate_block(edx, param2 + 1, ecx);
                    local16 = ecx;
                    edi = eax;
                }
                else {
                    goto bb0x8063ab9;
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
bb0x8063a5f:
                        ebx = *(edx - 4);
                    }
                    else {
                        goto bb0x8063a88;
                    }
                    goto bb0x8063a5f;
                } while ((unsigned int)((unsigned int)ebx >> 10) < param2);
bb0x8063a69:
                eax_1 = allocate_block(edx, param2 + 1, ecx);
                local16 = ecx;
                edi = eax_1;
            }
            else {
                goto bb0x8063a69;
            }
        }
    }
    else {
        if (caml_allocation_policy != 1) {
            goto bb0x8063e56;
        }
        else {
            if (flp_size <= 0) {
bb0x8063b0b:
                if (flp_size != 0) {
                }
                ecx = 0x807ce88;
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
                        global_0x0807f2dc[flp_size] = ecx;
                        ebx = flp_size;
                        flp_size++;
                        if (param2 > (unsigned int)((unsigned int)esi_15 >> 10)) {
                            edi = (unsigned int)esi_15 >> 10;
bb0x8063bb4:
                            ecx = edx;
                        }
                        else {
                            beyond = edx;
                            eax = allocate_block(edx, param2 + 1, ecx);
                            edi = eax;
bb0x8063c37:
                            ebx_4 = ebx;
                            esi_11 = local7;
                            local16 = ecx;
                            if (ebx_4 < flp_size) {
                                ecx = 0;
                                if (ebx_4 > 0) {
                                    edx = *global_0x0807f2dc[ebx_4];
                                    edx = *(edx - 4);
                                    ecx = (unsigned int)edx >> 10;
                                }
                                local10 = ecx;
                                local16 = ecx;
                                local16 = ecx;
                                if (flp_size - 1 != ebx_4) {
                                    eax = global_0x0807f2dc[ebx_4];
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
                                    while (global_0x0807f2dc[ebx_4] != eax) {
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
bb0x8063ceb:
                                                ebx_7 = local8;
                                                esi_13 = local9;
                                                eax = edx;
                                                local11 = ebx_7;
                                                local12 = esi_13;
                                            }
                                            goto bb0x8063cf1;
                                        }
                                        goto bb0x8063ceb;
                                        ecx = local10;
                                        ebx_6 = local11;
                                        esi_12 = local12;
                                        local8 = ebx_6;
                                        local9 = esi_12;
                                        local13 = ecx;
                                        local14 = ebx_6;
                                    }
bb0x8063cf1:
                                    ecx = local13;
                                    ebx_5 = local14;
                                    if (flp_size + ebx_5 - 1 > 1000) {
                                        if (ebx_5 + ebx_4 > 999) {
                                            if (ebx_4 != 1000) {
                                                ecx = memmove(ebx_4 * 4 + 0x807f2e0, &param1, (1000 - ebx_4) * 4);
                                            }
                                        }
                                        else {
                                            if (ebx_5 == 1) {
bb0x8063de7:
                                                ecx = memmove(ebx_4 * 4 + 0x807f2e0, &param1, ebx_5 * 4);
                                            }
                                            else {
                                                ecx = memmove((ebx_5 + ebx_4) * 4 + 0x807f2e0, ebx_4 * 4 + 0x807f2e4, (1000 - ebx_4 + ebx_5) * 4);
                                                if ((int)ebx_5 > 0) {
                                                    goto bb0x8063de7;
                                                }
                                            }
                                        }
                                        flp_size = 999;
                                        eax = *0x808027c;
                                        eax = *eax;
                                        beyond = eax;
                                        local16 = ecx;
                                        ecx = local16;
                                        return edi; /* WARNING: Also returning: ecx := ecx */
                                    }
                                    else {
                                        if (ebx_5 == 1) {
bb0x8063d59:
                                            ecx = memmove(ebx_4 * 4 + 0x807f2e0, &param1, ebx_5 * 4);
                                        }
                                        else {
                                            ecx = memmove((ebx_5 + ebx_4) * 4 + 0x807f2e0, ebx_4 * 4 + 0x807f2e4, (flp_size - ebx_4 - 1) * 4);
                                            if ((int)ebx_5 > 0) {
                                                goto bb0x8063d59;
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
                                    eax = *global_0x0807f2dc[(flp_size - 1)];
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
                    goto bb0x8063bb4;
                }
                beyond = edx;
                ecx = edx;
                if (edx == 0) {
                    ecx = global_0x0807f2dc[flp_size];
                }
                edx = *0x808027c;
                edx = *edx;
                esi = *(edx - 4);
                edx = *ecx;
                if (edx == 0) {
bb0x8063c27:
                    fl_last = ecx;
                    edi = 0;
                    local16 = ecx;
                }
                else {
                    ebx = *(edx - 4);
                    local16 = ecx;
                    while ((unsigned int)((unsigned int)esi >> 10) <= (unsigned int)((unsigned int)ebx >> 10)) {
                        if (param2 > (unsigned int)((unsigned int)ebx >> 10)) {
bb0x8063c19:
                            ebx = *edx;
                            if (ebx == 0) {
                                ecx = edx;
                                goto bb0x8063c27;
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
                    goto bb0x8063c19;
                }
            }
            else {
                ecx = *0x807f2e0;
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
bb0x8063add:
                            ecx = flp[(ebx_1 + 1)];
                            edx = *flp[(ebx_1 + 1)];
                            esi_6 = *(edx - 4);
                            esi_9 = (unsigned int)esi_6 >> 10;
                            local5 = esi_9;
                        }
                        else {
                            goto bb0x8063b0b;
                        }
                        goto bb0x8063add;
                    } while (param2 > (unsigned int)((unsigned int)esi_6 >> 10));
bb0x8063aec:
                    ebx = local4;
                    esi = local5;
                    eax = allocate_block(edx, param2 + 1, ecx);
                    local7 = esi;
                    edi = eax;
                    goto bb0x8063c37;
                }
                else {
                    goto bb0x8063aec;
                }
            }
        }
    }
    ecx = local16;
    return edi; /* WARNING: Also returning: ecx := ecx */
}

/** address: 0x08063f8f */
void caml_round_heap_chunk_size()
{
}

/** address: 0x08062e92 */
void caml_urge_major_slice()
{
    __size32 eax; 		// r24

    caml_force_major_slice = 1;
    eax = *(global_0x0807f2dc + 0xfd4);
    *(__size32*)(global_0x0807f2dc + 0xfdc) = eax;
    return;
}

/** address: 0x080638a9 */
void caml_fl_add_blocks(unsigned int param1)
{
    int eax; 		// r24
    __size32 ebx; 		// r27
    unsigned int ecx; 		// r25
    int edx; 		// r26
    union { __size32; unsigned int *; } esi; 		// r30

    edx = *(param1 - 4);
    caml_fl_cur_size = caml_fl_cur_size + ((unsigned int)edx >> 10) + 1;
    edx = *0x807f2d0;
    if (param1 <= edx) {
        ecx = global_0x0807ce88;
        if (global_0x0807ce88 != 0 && param1 > global_0x0807ce88) {
            edx = *ecx;
            while (edx != 0 && param1 > edx) {
                ecx = edx;
                edx = *ecx;
            }
            ebx = ecx;
            ecx = edx;
        }
        else {
            ebx = 0x807ce88;
        }
        esi = *(param1 + 4);
        *(unsigned int*)esi = ecx;
        *(unsigned int*)ebx = param1;
        if ( ~(ebx != *0x807ce7c || param1 >= *(global_0x0807f2dc + 0x4b90))) {
            edx = *(param1 + 4);
            caml_fl_merge = edx;
        }
        if (*0x807f2c4 == 1) {
            truncate_flp(param1);
        }
    }
    else {
        *(unsigned int*)edx = param1;
        if ( ~(edx != *0x807ce7c || param1 >= *(global_0x0807f2dc + 0x4b90))) {
            eax = *(param1 + 4);
            caml_fl_merge = eax;
        }
        if ( ~(*0x807f2c4 != 1 || flp_size > 999)) {
            global_0x0807f2dc[flp_size] = edx;
            flp_size++;
        }
    }
    return;
}

/** address: 0x08065536 */
void caml_add_to_heap(unsigned int param1)
{
    int eax; 		// r24
    __size32 ecx; 		// r25
    __size32 edx; 		// r26

    ecx = caml_gc_message(4, 0x80718ff); /* Warning: also results in edx */
    eax = param1 + *(param1 - 8);
    eax = caml_page_table_add(1, param1, eax, ecx, edx);
    if (eax == 0) {
        eax = *(global_0x0807f2dc + 0x4b9c);
        if (eax != 0 && param1 > eax) {
            do {
                edx = eax - 4;
                eax = *(eax - 4);
            } while (eax != 0 && param1 > eax);
        }
        else {
            edx = 0x8083e78;
        }
        *(unsigned int*)(param1 - 4) = eax;
        *(unsigned int*)edx = param1;
        *(__size32*)(global_0x0807f2dc + 0x4510)++;
        edx = *(global_0x0807f2dc + 0x4504);
        edx += *(param1 - 8);
        *(int*)(global_0x0807f2dc + 0x4504) = edx;
        if (edx > *(global_0x0807f2dc + 0x4508)) {
            *(int*)(global_0x0807f2dc + 0x4508) = edx;
        }
    }
    return;
}

/** address: 0x08065154 */
void caml_free_for_heap(__size32 param1)
{
    __size32 eax; 		// r24

    eax = *(param1 - 16);
    free(eax);
    return;
}

/** address: 0x08062635 */
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
    eax = *(&caml_globals + 0x9658);
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
    if (*0x807d13c == 0) {
        cl = caml_init_frame_descriptors(); /* Warning: also results in dl, ecx, ebx, esp_7, ebp, esi, edi */
        local188 = esp_7;
    }
    esp_42 = local188;
    eax = *(&caml_globals + 0x9640);
    *(__size32*)(esp_42 + 16) = eax;
    eax = *(&caml_globals + 0x10254);
    *(__size32*)(esp_42 + 12) = eax;
    eax = *(&caml_globals + 0x9378);
    *(__size32*)(esp_42 + 8) = eax;
    eax = *(&caml_globals + 0x964c);
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
    eax = *(&caml_globals + 0x9644);
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

/** address: 0x0806e4fb */
void add_string(__size32 param1)
{
    __size32 ecx; 		// r25
    __size32 edi; 		// r31

    edi = param1;
    ecx = -1;
bb0x806e519:
    tmpb = 0 - *edi;
    edi +=  (DF == 0) ? 1 : -1;
    ecx--;
    if (tmpb != 0) {
        goto bb0x806e519;
    }
}

/** address: 0x0806e4e8 */
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

/** address: 0x0806e7a0 */
__size32 hash_value_name(union { __size32; unsigned char *; } param1)
{
    char dl; 		// r10
    union { unsigned char *; __size32; } eax; 		// r24
    union { unsigned char *; __size32; } eax_1; 		// r24{7}
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

/** address: 0x080704b4 */
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

/** address: 0x08062462 */
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

/** address: 0x080635a0 */
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
    if (*0x807f2c4 == 0) {
        fl_prev = param3;
    }
    return param1 + (((unsigned int)ebx >> 10) - param2) * 4;
}

/** address: 0x0806368b */
void truncate_flp(unsigned int param1)
{
    int edx; 		// r26

    if (param1 == 0x807ce88) {
        flp_size = 0;
        beyond = 0;
    }
    else {
        if (flp_size > 0) {
            edx = flp_size - 1;
            if (param1 <= *global_0x0807f2dc[(flp_size - 1)]) {
                while (edx > 0) {
                    if (param1 > *global_0x0807f2dc[(edx - 1)]) {
                        flp_size = edx;
                        goto bb0x80636ea;
                    }
                    edx--;
                }
                flp_size = edx;
            }
        }
bb0x80636ea:
        if (param1 <= beyond) {
            beyond = 0;
        }
    }
    return;
}

/** address: 0x08062310 */
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
    unsigned int local101; 		// m[esp_35 - 8]{0}
    unsigned int local102; 		// m[esp_35 - 8]{56}
    int local103; 		// m[esp_35 - 8]{105}
    unsigned int local105; 		// m[esp_35 - 8]{0}
    int local106; 		// m[esp_35 - 8]{151}
    unsigned int local110; 		// m[esp_35 - 8]{230}
    unsigned int local111; 		// m[esp_35 - 8]{117}
    unsigned int local115; 		// m[esp_35 - 8]{166}
    unsigned int local116; 		// m[esp_35 - 8]{209}
    unsigned int local117; 		// m[esp_35 - 8]{187}
    __size32 local12; 		// m[esp_35 + 8]{61}
    unsigned int local124; 		// m[esp_35 - 12]{18}
    unsigned int local127; 		// m[esp_35 - 12]{0}
    unsigned int local128; 		// m[esp_35 - 12]{57}
    int local129; 		// m[esp_35 - 12]{105}
    int local13; 		// m[esp_35 + 8]{151}
    unsigned int local131; 		// m[esp_35 - 12]{0}
    int local132; 		// m[esp_35 - 12]{151}
    unsigned int local136; 		// m[esp_35 - 12]{231}
    unsigned int local137; 		// m[esp_35 - 12]{118}
    unsigned int local141; 		// m[esp_35 - 12]{167}
    unsigned int local142; 		// m[esp_35 - 12]{210}
    unsigned int local143; 		// m[esp_35 - 12]{188}
    unsigned int local150; 		// m[esp_35 - 16]{19}
    unsigned int local153; 		// m[esp_35 - 16]{0}
    unsigned int local154; 		// m[esp_35 - 16]{58}
    int local155; 		// m[esp_35 - 16]{105}
    unsigned int local157; 		// m[esp_35 - 16]{0}
    int local158; 		// m[esp_35 - 16]{151}
    unsigned int local162; 		// m[esp_35 - 16]{232}
    unsigned int local163; 		// m[esp_35 - 16]{119}
    unsigned int local167; 		// m[esp_35 - 16]{168}
    unsigned int local168; 		// m[esp_35 - 16]{211}
    unsigned int local169; 		// m[esp_35 - 16]{189}
    __size32 local17; 		// m[esp_35 + 8]{122}
    __size32 local176; 		// m[esp_35 - 32]{26}
    __size32 local179; 		// m[esp_35 - 32]{0}
    __size32 local18; 		// m[esp_35 + 8]{235}
    __size32 local180; 		// m[esp_35 - 32]{59}
    int local181; 		// m[esp_35 - 32]{105}
    __size32 local183; 		// m[esp_35 - 32]{0}
    int local184; 		// m[esp_35 - 32]{151}
    __size32 local186; 		// m[esp_35 - 32]{233}
    __size32 local187; 		// m[esp_35 - 32]{169}
    __size32 local188; 		// m[esp_35 - 32]{212}
    __size32 local189; 		// m[esp_35 - 32]{190}
    __size32 local19; 		// m[esp_35 + 8]{171}
    __size32 local190; 		// m[esp_35 - 32]{120}
    unsigned int local2; 		// m[esp - 12]
    __size32 local20; 		// m[esp_35 + 8]{214}
    __size32 local205; 		// m[esp_35 - 36]{24}
    __size32 local208; 		// m[esp_35 - 36]{0}
    __size32 local209; 		// m[esp_35 - 36]{60}
    __size32 local21; 		// m[esp_35 + 8]{192}
    int local210; 		// m[esp_35 - 36]{105}
    __size32 local212; 		// m[esp_35 - 36]{0}
    int local213; 		// m[esp_35 - 36]{151}
    __size32 local217; 		// m[esp_35 - 36]{234}
    __size32 local218; 		// m[esp_35 - 36]{170}
    __size32 local219; 		// m[esp_35 - 36]{213}
    __size32 local220; 		// m[esp_35 - 36]{191}
    __size32 local221; 		// m[esp_35 - 36]{121}
    int local234; 		// tmpb{54}
    int local235; 		// tmpb{105}
    int local238; 		// tmpb{115}
    int local240; 		// tmpb{227}
    int local241; 		// tmpb{163}
    int local242; 		// tmpb{35}
    int local243; 		// tmpb{206}
    int local244; 		// tmpb{184}
    int local250; 		// tmpb{151}
    int local270; 		// tmpb{11}
    __size16 local272; 		// tmph{74}
    __size16 local273; 		// tmph{228}
    __size16 local274; 		// tmph{164}
    __size16 local275; 		// tmph{36}
    __size16 local276; 		// tmph{207}
    __size16 local277; 		// tmph{185}
    int local284; 		// tmph{151}
    unsigned int local3; 		// m[esp - 16]
    int local30; 		// m[esp_35 + 12]{105}
    __size16 local303; 		// tmph{12}
    __size32 local306; 		// param6{30}
    unsigned int local307; 		// param7{31}
    unsigned int local308; 		// param8{32}
    __size32 local309; 		// esp_19{33}
    int local310; 		// local242{35}
    __size16 local311; 		// local275{36}
    __size32 local312; 		// m[esp_35 - 4]{37}
    unsigned int local313; 		// m[esp_35 - 8]{38}
    unsigned int local314; 		// m[esp_35 - 12]{39}
    unsigned int local315; 		// m[esp_35 - 16]{40}
    __size32 local316; 		// param2{41}
    __size32 local317; 		// param1{42}
    __size32 local318; 		// esp_16{51}
    unsigned int local319; 		// param11{53}
    int local320; 		// local234{54}
    __size32 local321; 		// local76{55}
    unsigned int local322; 		// local102{56}
    unsigned int local323; 		// local128{57}
    unsigned int local324; 		// local154{58}
    __size32 local325; 		// local180{59}
    __size32 local326; 		// local209{60}
    __size32 local327; 		// local12{61}
    unsigned int local328; 		// local33{62}
    __size32 local329; 		// local54{63}
    unsigned int local33; 		// m[esp_35 + 12]{62}
    int local330; 		// eax_1{69}
    union { __size32 *; __size32; } local331; 		// esp_10{84}
    unsigned int local332; 		// esi{86}
    union { __size32 *; unsigned int; } local333; 		// eax{96}
    __size32 local334; 		// esp_13{112}
    unsigned int local335; 		// edi{114}
    int local336; 		// local238{115}
    __size32 local337; 		// local85{116}
    unsigned int local338; 		// local111{117}
    unsigned int local339; 		// local137{118}
    int local34; 		// m[esp_35 + 12]{151}
    unsigned int local340; 		// local163{119}
    __size32 local341; 		// local190{120}
    __size32 local342; 		// local221{121}
    __size32 local343; 		// local17{122}
    unsigned int local344; 		// local43{123}
    __size32 local345; 		// local64{124}
    unsigned int local346; 		// ebx{141}
    union { __size32 *; __size32; } local347; 		// esp_22{142}
    unsigned int local348; 		// ebx{158}
    __size32 local349; 		// esp_25{159}
    int local350; 		// local241{163}
    __size16 local351; 		// local274{164}
    __size32 local352; 		// local89{165}
    unsigned int local353; 		// local115{166}
    unsigned int local354; 		// local141{167}
    unsigned int local355; 		// local167{168}
    __size32 local356; 		// local187{169}
    __size32 local357; 		// local218{170}
    __size32 local358; 		// local19{171}
    unsigned int local359; 		// local39{172}
    __size32 local360; 		// local60{173}
    __size32 local361; 		// esp_28{180}
    unsigned int local362; 		// edi{183}
    int local363; 		// local244{184}
    __size16 local364; 		// local277{185}
    __size32 local365; 		// local91{186}
    unsigned int local366; 		// local117{187}
    unsigned int local367; 		// local143{188}
    unsigned int local368; 		// local169{189}
    __size32 local369; 		// local189{190}
    __size32 local370; 		// local220{191}
    __size32 local371; 		// local21{192}
    unsigned int local372; 		// local42{193}
    __size32 local373; 		// local63{194}
    __size32 local374; 		// esp_31{203}
    int local375; 		// local243{206}
    __size16 local376; 		// local276{207}
    __size32 local377; 		// local90{208}
    unsigned int local378; 		// local116{209}
    unsigned int local379; 		// local142{210}
    unsigned int local38; 		// m[esp_35 + 12]{236}
    unsigned int local380; 		// local168{211}
    __size32 local381; 		// local188{212}
    __size32 local382; 		// local219{213}
    __size32 local383; 		// local20{214}
    unsigned int local384; 		// local41{215}
    __size32 local385; 		// local62{216}
    __size32 local386; 		// ecx{221}
    unsigned int local387; 		// edx{222}
    unsigned int local388; 		// ebx{223}
    __size32 local389; 		// esp_32{224}
    unsigned int local39; 		// m[esp_35 + 12]{172}
    int local390; 		// local240{227}
    __size16 local391; 		// local273{228}
    __size32 local392; 		// local84{229}
    unsigned int local393; 		// local110{230}
    unsigned int local394; 		// local136{231}
    unsigned int local395; 		// local162{232}
    __size32 local396; 		// local186{233}
    __size32 local397; 		// local217{234}
    __size32 local398; 		// local18{235}
    unsigned int local399; 		// local38{236}
    __size32 local4; 		// m[esp - 36]
    unsigned int local40; 		// m[esp_35 + 12]{44}
    __size32 local400; 		// local59{237}
    __size32 local401; 		// ecx{242}
    __size32 local402; 		// esp{243}
    unsigned int local41; 		// m[esp_35 + 12]{215}
    unsigned int local42; 		// m[esp_35 + 12]{193}
    unsigned int local43; 		// m[esp_35 + 12]{123}
    __size32 local5; 		// m[esp - 32]
    int local51; 		// m[esp_35 + 16]{105}
    __size32 local54; 		// m[esp_35 + 16]{63}
    int local55; 		// m[esp_35 + 16]{151}
    __size32 local59; 		// m[esp_35 + 16]{237}
    __size32 local6; 		// m[esp + 8]
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
    __size32 local85; 		// m[esp_35 - 4]{116}
    __size32 local89; 		// m[esp_35 - 4]{165}
    int local9; 		// m[esp_35 + 8]{105}
    __size32 local90; 		// m[esp_35 - 4]{208}
    __size32 local91; 		// m[esp_35 - 4]{186}
    unsigned int local98; 		// m[esp_35 - 8]{17}

    local0 = param9;
    ebp = esp_35 - 4;
    local1 = param11;
    local2 = param10;
    local3 = param8;
    esp_1 = (esp_35 - 60);
    eax = param3;
    al = (unsigned char) param3;
    local306 = param6;
    local307 = param7;
    local308 = param8;
    local309 = esp_1;
    local310 = local270;
    local311 = local303;
    local312 = local72;
    local313 = local98;
    local314 = local124;
    local315 = local150;
    local316 = param2;
    local317 = param1;
    local318 = esp_1;
    local319 = param11;
    local320 = local270;
    local321 = local72;
    local322 = local98;
    local323 = local124;
    local324 = local150;
    local327 = param3;
    local328 = param4;
    local329 = param5;
    if (param3 != 0) {
        local4 = param5;
        edx = param4;
        local5 = param3;
        local325 = local176;
        local326 = local205;
        do {
bb0x8062347:
            esp_16 = local318;
            param11 = local319;
            local234 = local320;
            local76 = local321;
            local102 = local322;
            local128 = local323;
            local154 = local324;
            local180 = local325;
            local209 = local326;
            local12 = local327;
            local33 = local328;
            local54 = local329;
            esi = *(global_0x0807f2dc + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local306 = ecx;
            local309 = esp_16;
            local310 = local234;
            local312 = local76;
            local313 = local102;
            local314 = local128;
            local315 = local154;
            local316 = local180;
            local317 = local209;
            local318 = esp_16;
            local319 = param11;
            local320 = local234;
            local321 = local76;
            local322 = local102;
            local323 = local128;
            local324 = local154;
            local325 = local180;
            local326 = local209;
            local327 = local12;
            local328 = local33;
            local329 = local54;
            local330 = eax;
            local331 = esp_16;
            local334 = esp_16;
            local335 = param11;
            local336 = local234;
            local337 = local76;
            local338 = local102;
            local339 = local128;
            local340 = local154;
            local341 = local180;
            local342 = local209;
            local343 = local12;
            local344 = local33;
            local345 = local54;
            if (*ebx != edx) {
                do {
                    eax_1 = local330;
                    eax_2 = eax_1 + 1 & esi;
                    ebx = *(caml_frame_descriptors + (eax_1 + 1 & esi) * 4);
                    local330 = eax_2;
                } while (*ebx != edx);
            }
            local272 = *(ebx + 4) + 1;
            local308 = ebx;
            local311 = local272;
            if (*(ebx + 4) != -1) {
                esi = *(unsigned short*)(ebx + 6);
                local332 = esi;
                if ((int)esi > 0) {
                    edi = ebx + 8;
                    *(__size32*)(ebp - 36) = ebx;
                    ebx = *(ebp + 8);
                    for(;;) {
                        esp_10 = local331;
                        esi = local332;
                        eax_4 = *(unsigned short*)edi;
                        if (((unsigned char) eax_4 & 0x1) == 0) {
                            eax_7 = eax_4 + *(ebp - 28);
                            flags = ADDFLAGS32(eax_4, *(ebp - 28), eax_7);
                            local333 = eax_7;
                        }
                        else {
                            flags = SARFLAGS((int)eax_4 >> 1, eax_4, 1);
                            edx = *(ebp - 32);
                            eax = edx + ((int)eax_4 >> 1) * 4;
                            local333 = eax;
                        }
                        eax = local333;
                        *(__size32*)(esp_10 + 4) = eax;
                        eax = *eax;
                        *(__size32*)esp_10 = eax;
                        (*ebx)((unsigned char) eax, eax, ecx, edx, ebx, ebp, esi, edi, flags, ZF, CF, param3, param4, param5, local75, local101, local127, local153, local179, local208);
                        local331 = esp_4;
                        local334 = esp_4;
                        local335 = edi;
                        local336 = local235;
                        local337 = local77;
                        local338 = local103;
                        local339 = local129;
                        local340 = local155;
                        local341 = local181;
                        local342 = local210;
                        local343 = local9;
                        local344 = local30;
                        local345 = local51;
                        esi_4 = esi_1 - 1;
                        local332 = esi_4;
                        if ((int)esi_1 <= 1) {
                            break;
                        }
                        edi += 2;
                    }
                    ebx = *(ebp - 36);
                }
                esp_13 = local334;
                edi = local335;
                local238 = local336;
                local85 = local337;
                local111 = local338;
                local137 = local339;
                local163 = local340;
                local190 = local341;
                local221 = local342;
                local17 = local343;
                local43 = local344;
                local64 = local345;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local318 = esp_13;
                local319 = edi;
                local320 = local238;
                local321 = local85;
                local322 = local111;
                local323 = local137;
                local324 = local163;
                local325 = local190;
                local326 = local221;
                local327 = local17;
                local328 = local43;
                local329 = local64;
                goto bb0x8062347;
            }
            eax = *(ebp - 28);
            edx = *(eax + 8);
            *(__size32*)(ebp - 28) = edx;
            edx = *(eax + 12);
            eax = *(eax + 16);
            al = (unsigned char) eax;
            *(__size32*)(ebp - 32) = eax;
            local307 = edx;
        } while (*(ebp - 28) != 0);
    }
    param6 = local306;
    param7 = local307;
    param8 = local308;
    esp_19 = local309;
    local242 = local310;
    local275 = local311;
    *(__size32*)(esp_35 - 4) = local312;
    *(unsigned int*)(esp_35 - 8) = local313;
    *(unsigned int*)(esp_35 - 12) = local314;
    *(unsigned int*)(esp_35 - 16) = local315;
    param2 = local316;
    param1 = local317;
    param3 = local6;
    local386 = param6;
    local387 = param7;
    local388 = param8;
    local389 = esp_19;
    local390 = local242;
    local391 = local275;
    local392 = *(esp_35 - 4);
    local393 = *(esp_35 - 8);
    local394 = *(esp_35 - 12);
    local395 = *(esp_35 - 16);
    local396 = param2;
    local397 = param1;
    local398 = *(esp_35 + 8);
    local399 = local40;
    local400 = local61;
    local401 = param6;
    local402 = esp_19;
    if (*(ebp + 24) != 0) {
        esi = *(ebp + 24);
        *(__size32*)(ebp - 28) = 0;
        do {
            ecx = local386;
            edx = local387;
            ebx = local388;
            esp_32 = local389;
            local240 = local390;
            local273 = local391;
            local84 = local392;
            local110 = local393;
            local136 = local394;
            local162 = local395;
            local186 = local396;
            local217 = local397;
            local18 = local398;
            local38 = local399;
            local59 = local400;
            edi = 0;
            local361 = esp_32;
            local362 = edi;
            local363 = local240;
            local364 = local273;
            local365 = local84;
            local366 = local110;
            local367 = local136;
            local368 = local162;
            local369 = local186;
            local370 = local217;
            local371 = local18;
            local372 = local38;
            local373 = local59;
            local374 = esp_32;
            local375 = local240;
            local376 = local273;
            local377 = local84;
            local378 = local110;
            local379 = local136;
            local380 = local162;
            local381 = local186;
            local382 = local217;
            local383 = local18;
            local384 = local38;
            local385 = local59;
            if (*(esi + 4) > 0) {
                do {
                    esp_28 = local361;
                    edi = local362;
                    local244 = local363;
                    local277 = local364;
                    local91 = local365;
                    local117 = local366;
                    local143 = local367;
                    local169 = local368;
                    local189 = local369;
                    local220 = local370;
                    local21 = local371;
                    local42 = local372;
                    local63 = local373;
                    ebx = *(ebp - 28);
                    local346 = ebx;
                    local347 = esp_28;
                    local348 = ebx;
                    local349 = esp_28;
                    local350 = local244;
                    local351 = local277;
                    local352 = local91;
                    local353 = local117;
                    local354 = local143;
                    local355 = local169;
                    local356 = local189;
                    local357 = local220;
                    local358 = local21;
                    local359 = local42;
                    local360 = local63;
                    if (*(esi + 8) > 0) {
                        do {
                            ebx = local346;
                            esp_22 = local347;
                            eax_9 = ebx * 4 + *(esi + edi * 4 + 12);
                            *(__size32*)(esp_22 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_22 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, eax_12, ecx, edx, ebx, ebp, esi, edi, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), param3, param4, param5, local79, local105, local131, local157, local183, local212);
                            local347 = esp_7;
                            local349 = esp_7;
                            local350 = local250;
                            local351 = local284;
                            local352 = local80;
                            local353 = local106;
                            local354 = local132;
                            local355 = local158;
                            local356 = local184;
                            local357 = local213;
                            local358 = local13;
                            local359 = local34;
                            local360 = local55;
                            ebx_4 = ebx_1 + 1;
                            local346 = ebx_4;
                            local348 = ebx_4;
                        } while (*(esi + 8) > ebx_1 + 1);
                    }
                    ebx = local348;
                    esp_25 = local349;
                    edi_1 = edi;
                    local241 = local350;
                    local274 = local351;
                    local89 = local352;
                    local115 = local353;
                    local141 = local354;
                    local167 = local355;
                    local187 = local356;
                    local218 = local357;
                    local19 = local358;
                    local39 = local359;
                    local60 = local360;
                    edi_2 = edi_1 + 1;
                    local361 = esp_25;
                    local362 = edi_2;
                    local363 = local241;
                    local364 = local274;
                    local365 = local89;
                    local366 = local115;
                    local367 = local141;
                    local368 = local167;
                    local369 = local187;
                    local370 = local218;
                    local371 = local19;
                    local372 = local39;
                    local373 = local60;
                    local374 = esp_25;
                    local375 = local241;
                    local376 = local274;
                    local377 = local89;
                    local378 = local115;
                    local379 = local141;
                    local380 = local167;
                    local381 = local187;
                    local382 = local218;
                    local383 = local19;
                    local384 = local39;
                    local385 = local60;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_31 = local374;
            local243 = local375;
            local276 = local376;
            local90 = local377;
            local116 = local378;
            local142 = local379;
            local168 = local380;
            local188 = local381;
            local219 = local382;
            local20 = local383;
            local41 = local384;
            local62 = local385;
            esi = *esi;
            local386 = ecx;
            local387 = edx;
            local388 = ebx;
            local389 = esp_31;
            local390 = local243;
            local391 = local276;
            local392 = local90;
            local393 = local116;
            local394 = local142;
            local395 = local168;
            local396 = local188;
            local397 = local219;
            local398 = local20;
            local399 = local41;
            local400 = local62;
            local401 = ecx;
            local402 = esp_31;
        } while (esi == 0);
    }
    ecx = local401;
    esp = local402;
    edi = *(esp + 52);
    ebp = *(esp + 56);
    return al; /* WARNING: Also returning: ecx := ecx, ebp := ebp, edi := edi */
}

/** address: 0x08062a1c */
__size32 caml_scan_global_roots(__size32 param1)
{
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 esi; 		// r30
    __size32 esp; 		// r28

    ebx = caml_iterate_global_roots(param1, 0x807d160); /* Warning: also results in esp */
    ebx = caml_iterate_global_roots(ebx, 0x807d1c0); /* Warning: also results in esp */
    esp = caml_iterate_global_roots(ebx, 0x807d220); /* Warning: also results in esi */
    ebx = *(esp + 4);
    ebp = *(esp + 8);
    return ebx; /* WARNING: Also returning: ebp := ebp, esi := esi */
}

/** address: 0x0806f940 */
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
    __size32 local104; 		// local48{74}
    unsigned int local105; 		// local67{75}
    __size32 local106; 		// local85{76}
    __size32 local107; 		// m[esp_24 + 4]{77}
    __size32 local108; 		// esp_21{83}
    __size32 local109; 		// edi{85}
    int local11; 		// m[esp_24 + 4]{62}
    __size32 local110; 		// local34{86}
    __size32 local111; 		// m[esp_24 - 8]{87}
    unsigned int local112; 		// local68{88}
    __size32 local113; 		// local86{89}
    __size32 local114; 		// local14{90}
    __size32 local115; 		// esp{97}
    int local12; 		// m[esp_24 + 4]{62}
    __size32 local13; 		// m[esp_24 + 4]{40}
    __size32 local14; 		// m[esp_24 + 4]{90}
    __size32 local15; 		// m[esp_24 + 4]{6}
    __size32 local16; 		// m[esp_24 + 4]{6}
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
    __size32 local47; 		// m[esp_24 - 8]{37}
    __size32 local48; 		// m[esp_24 - 8]{74}
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
    unsigned int local65; 		// m[esp_24 - 12]{0}
    unsigned int local66; 		// m[esp_24 - 12]{0}
    unsigned int local67; 		// m[esp_24 - 12]{75}
    unsigned int local68; 		// m[esp_24 - 12]{88}
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
    __size32 local96; 		// local47{37}
    unsigned int local97; 		// m[esp_24 - 12]{38}
    __size32 local98; 		// m[esp_24 - 16]{39}
    __size32 local99; 		// local13{40}

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
    if (*0x8083850 != 0) {
        ebx = 0;
        esi = 0;
        edi = param1;
        local92 = esi;
        do {
            param2 = local90;
            esp_13 = local91;
            esi = local92;
            eax_1 = ebx + *0x808384c;
            *(__size32*)(esp_13 + 4) = eax_1;
            eax_4 = *eax_1;
            *(__size32*)esp_13 = eax_4;
            (*edi)(eax_4, param2, ebx, ebp, esi, edi, ADDFLAGS32(ebx, *0x808384c, eax_1), ADDFLAGS32(ebx, *0x808384c, eax_1), ADDFLAGS32(ebx, *0x808384c, eax_1), param1, local20, local38, local56, local74);
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
        } while (*(global_0x0807f2dc + 0x4574) > esi_1 + 1);
    }
    esp_16 = local93;
    param6 = local94;
    local33 = local95;
    local47 = local96;
    *(unsigned int*)(esp_24 - 12) = local97;
    *(__size32*)(esp_24 - 16) = local98;
    local13 = local99;
    eax = *(global_0x0807f2dc + 0x4578);
    *(__size32*)(ebp - 28) = eax;
    local108 = esp_16;
    local109 = param6;
    local110 = local33;
    local111 = local47;
    local112 = *(esp_24 - 12);
    local113 = *(esp_24 - 16);
    local114 = local13;
    local115 = esp_16;
    if (eax != 0) {
        do {
            esp_21 = local108;
            edi = local109;
            local34 = local110;
            *(__size32*)(esp_24 - 8) = local111;
            local68 = local112;
            local86 = local113;
            local14 = local114;
            ebx = *(ebp - 28);
            esi = 0;
            tmp1 = *(ebx + 4);
            flags = SUBFLAGS32(*(ebx + 4), 0, tmp1);
            local100 = esp_21;
            local101 = esi;
            local102 = esp_21;
            local103 = local34;
            local104 = *(esp_24 - 8);
            local105 = local68;
            local106 = local86;
            local107 = local14;
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
            local48 = local104;
            local67 = local105;
            local85 = local106;
            *(__size32*)(esp_24 + 4) = local107;
            edx = *(ebp - 28);
            edx = *edx;
            *(__size32*)(ebp - 28) = edx;
            local108 = esp_20;
            local109 = edi;
            local110 = *(esp_24 - 4);
            local111 = local48;
            local112 = local67;
            local113 = local85;
            local114 = *(esp_24 + 4);
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

/** address: 0x08061c60 */
__size32 scanmult(int param1, union { __size32; int *; } param2)
{
    int ecx; 		// r25

    __isoc99_sscanf();
    ecx = __isoc99_sscanf();
    *(int*)param2 = param1;
    return ecx;
}

/** address: 0x080639b4 */
void caml_set_allocation_policy(__size32 param1)
{
    if (param1 == 0) {
        *(__size32*)(&caml_globals + 0x939c) = 0x807ce88;
    }
    else {
        if (param1 == 1) {
            *(__size32*)(&caml_globals + 0xb7d4) = 0;
            *(__size32*)(&caml_globals + 0xb7d8) = 0;
        }
    }
    *(__size32*)(&caml_globals + 0xb7d0) = param1;
    return;
}

/** address: 0x08070834 */
__size8 caml_record_backtrace(int param1, __size8 param3, __size8 param3, __size32 param5, __size32 param6, __size32 param7, int param8, __size32 param8)
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
    __size8 local3; 		// param3{19}
    __size32 local4; 		// param5{20}
    __size32 local5; 		// param6{21}
    __size32 local6; 		// param7{22}
    int local7; 		// param8{24}
    __size32 local8; 		// param8{25}

    ebp = (esp - 4);
    local2 = param3;
    local2 = param3;
    local3 = param3;
    local3 = param3;
    local4 = param5;
    local5 = param6;
    local6 = param7;
    local6 = param7;
    local7 = param8;
    local7 = param8;
    local8 = param8;
    local8 = param8;
    if (param1 >> 1 != *0x8083864) {
        *(int*)(&caml_globals + 0xfd70) = param1 >> 1;
        *(__size32*)(&caml_globals + 0xfd74) = 0;
        if (param1 >> 1 == 0) {
            ecx = caml_remove_global_root(0x807cf48, param8); /* Warning: also results in edx */
            local4 = ecx;
            local5 = edx;
        }
        else {
            cl = caml_register_global_root(0x807cf48); /* Warning: also results in dl, ecx, edx, ebx, ebp, esi, edi */
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
    param3 = local3;
    param5 = local4;
    param6 = local5;
    param7 = local6;
    param8 = local7;
    param8 = local8;
    ebp = *ebp;
    return param3; /* WARNING: Also returning: dl := param3, ecx := param5, edx := param6, ebx := param7, ebp := ebp, esi := param8, edi := param8 */
}

/** address: 0x08062b8a */
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

    cl = caml_insert_global_root(0x807d160, param1); /* Warning: also results in dl, ecx, edx, ebx, ebp, esi, edi */
    ebp = *ebp;
    return cl; /* WARNING: Also returning: dl := dl, ecx := ecx, edx := edx, ebx := ebx, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x08062e29 */
__size32 caml_remove_global_root(unsigned int param1, int param2)
{
    __size32 ecx; 		// r25
    unsigned int edx; 		// r26

    ecx = caml_delete_global_root(0x807d160, param1, param2); /* Warning: also results in edx */
    return ecx; /* WARNING: Also returning: edx := edx */
}

/** address: 0x08062c2c */
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
bb0x8062c48:
            esi_1 = local1;
            eax_5 = *(ecx + esi_1 * 4 + 4);
            local1 = esi_1;
            if ( ~(eax_5 == 0 || *eax_5 >= param2)) {
                ecx = eax_5;
                goto bb0x8062c48;
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
bb0x8062cbe:
                    *(int*)(param1 + 72) = eax_1 - 1;
                    param2 = local6;
                    return ecx; /* WARNING: Also returning: edx := param2 */
                }
                else {
                }
                goto bb0x8062cbe;
            } while (*(param1 + (eax_1 - 1) * 4 + 4) == 0);
            *(int*)(param1 + 72) = eax_1 - 1;
        }
    }
    param2 = local6;
    return ecx; /* WARNING: Also returning: edx := param2 */
}

