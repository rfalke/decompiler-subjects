union { stack_t; union { __size32 *; unsigned int; }[]; } caml_globals;
__size32 array_bound_error_msg = 0;// 4 bytes
__size8 global_0x080740e7 = 0;// 1 bytes
__size32 caml_last_return_address = 1;// 4 bytes
int caml_fl_merge = 0x8074108;
union { unsigned int; int *; } global_0x08074108;
unsigned int fl_prev = 0x8074108;
__size32 caml_weak_none = 0x807aab8;// 4 bytes
__size32 stderr;// 4 bytes
unsigned int caml_exception_pointer;
__size32 array_bound_error_bucket_inited;// 4 bytes
__size32 array_bound_error_bucket;// 4 bytes
__size32 global_0x080743ac;// 4 bytes
__size32 global_0x080743b0;// 4 bytes
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
union { unsigned int; unsigned int *; } global_0x0807655c[9999999];
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

/** address: 0x0805c02c */
int main(int argc, char *argv[])
{
    int ebp; 		// r29
    unsigned int esp; 		// r28

    caml_main(argv, esp - 4, SUBFLAGS32(esp - 4, 16, esp - 20), esp == 20, (unsigned int)(esp - 4) < 16, argv, ebp, argv, pc, argc);
}

/** address: 0x0805bd5e */
void caml_main()
{
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    char *eax; 		// r24
    unsigned int eax_1; 		// r24
    char *eax_11; 		// r24{11}
    unsigned int eax_14; 		// r24{94}
    __size32 eax_2; 		// r24{0}
    unsigned int eax_4; 		// r24{92}
    unsigned int eax_7; 		// r24{75}
    char *eax_9; 		// r24{6}
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
    unsigned int local2; 		// eax_4{92}
    int local3; 		// ebx_4{111}

    caml_init_ieee_floats();
    cl = caml_init_custom_operations(); /* Warning: also results in dl, esp_1, ebp */
    *(__size32*)(&caml_globals + 0xd470) = ebp - 25;
    *(__size32*)esp_1 = 0x806b57e;
    eax_9 = getenv(*esp_1); /* Warning: also results in ecx, edx */
    ebx = eax_9;
    if (eax_9 != 0) {
bb0x805be53:
        esp = esp_1;
        esi = 0x806b5c8;
        edi = ebp - 32;
        local0 = ebx;
        ebx_1 = local0;
        eax_7 = *(unsigned char*)ebx_1;
        local1 = esp;
        while ((unsigned char) eax_7 != 0) {
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
            if ((unsigned char) eax_7 - 79 > 39) {
                continue;
            }
            ebx_1 = local0;
            eax_7 = *(unsigned char*)ebx_1;
            local1 = esp;
        }
    }
    else {
        *(__size32*)esp_1 = 0x806b57f;
        eax_11 = getenv(*esp_1); /* Warning: also results in ecx, edx, esp_4 */
        local1 = esp_4;
        ebx = eax_11;
        if (eax_11 != 0) {
            goto bb0x805be53;
        }
    }
    esp = local1;
    eax = *(&caml_globals + 0x6564);
    *(__size32*)(esp + 16) = eax;
    eax = *(&caml_globals + 0x6568);
    *(__size32*)(esp + 12) = eax;
    eax = *(&caml_globals + 0x656c);
    *(__size32*)(esp + 8) = eax;
    eax = *(&caml_globals + 0x6570);
    *(__size32*)(esp + 4) = eax;
    eax = *(&caml_globals + 0x6574);
    *(__size32*)esp = eax;
    caml_init_gc(*esp, *(esp + 4));
    eax_1 = 0;
    local2 = eax_1;
    do {
        eax_4 = local2;
        caml_globals[eax_4] = eax_4;
        eax_14 = eax_4 + 1;
        local2 = eax_14;
    } while (eax_4 + 1 != 256);
    *(__size32*)(esp + 4) = 0x807afc0;
    *(__size32*)esp = 0x807abc0;
    *(__size32*)(esp - 4) = 4;
    eax = caml_page_table_add(*(esp - 4), *esp, *(esp + 4), ecx, 0x807abc0); /* Warning: also results in ecx */
    if (eax != 0) {
        *(__size32*)(esp - 4) = 0x806b58c;
        caml_fatal_error(*(esp - 4));
    }
    eax = *(&caml_globals + 548);
    ebx = 0;
    local3 = ebx;
    if (eax == 0) {
bb0x805bf25:
        eax = *(&caml_globals + 640);
        *(__size32*)(&caml_globals + 0xcfac) = eax;
        ecx = *(&caml_globals + 644);
        *(__size32*)(&caml_globals + 0xd068) = ecx;
        eax = *(&caml_globals + 648);
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
            *(__size32*)(esp - 4) = 0x806b58c;
            caml_fatal_error(*(esp - 4));
        }
        ebx_5 = ebx_4 + 1;
        eax = caml_globals[(ebx_4 + 1)];
        local3 = ebx_5;
    } while (caml_globals[(ebx_4 + 1)] != 0);
    goto bb0x805bf25;
}

/** address: 0x08066188 */
void caml_sys_exit(int param1)
{
    exit(param1 >> 1);
    return;
}

/** address: 0x08061757 */
void caml_init_ieee_floats()
{
    return;
}

/** address: 0x08069fbe */
__size8 caml_init_custom_operations()
{
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    __size32 ebp; 		// r29
    __size32 edi; 		// r31
    __size32 esi; 		// r30

    caml_register_custom_operations();
    *(__size32*)esp = 0x8074154;
    caml_register_custom_operations();
    *(__size32*)esp = 0x8074138;
    cl = caml_register_custom_operations(); /* Warning: also results in dl, ebp, esi, edi */
    ebp = *ebp;
    return cl; /* WARNING: Also returning: dl := dl, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x08066d3f */
void caml_init_gc(__size32 param1, __size32 param2)
{
    int ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 esi; 		// r30
    unsigned int esp; 		// r28

    norm_heapincr(param2, esp - 4, param1, SUBFLAGS32(esp - 12, 16, (esp - 28)), esp == 28, (unsigned int)(esp - 12) < 16, ebx, param1, param2, ebp, esi, ebx, pc);
}

/** address: 0x0805f541 */
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
bb0x805f589:
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
        goto bb0x805f589;
    }
    ecx = local3;
    edx = local4;
    return eax; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x0805d599 */
void caml_fatal_error(union { char *; __size32; } param1)
{
    __size32 eax; 		// r24

    eax = *0x8074220;
    fputs(param1, eax);
    exit(2);
    return;
}

/** address: 0x0805d210 */
void caml_init_signals(sigset_t param1)
{
    int eax; 		// r24
    int esp; 		// r28

    sigemptyset(&param1);
    *(__size32*)(&caml_globals + 0x69ac) = (esp - 164);
    eax = sigaltstack(&0x8074520, 0);
    if (eax == 0) {
        sigaction(11, &0x805d33f, 0);
    }
    return;
}

/** address: 0x0806a8dc */
void caml_debugger_init()
{
    return;
}

/** address: 0x08069f97 */
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
    edx = *(&caml_globals + 0xcf8c);
    *(__size32*)(eax + 4) = edx;
    *(union { __size32 *; __size32; }*)0x807aae0 = eax;
    ebp = *ebp;
    return cl; /* WARNING: Also returning: dl := dl, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x08066d04 */
void norm_heapincr()
{
}

/** address: 0x0805f0f0 */
void caml_page_table_initialize()
{
    unsigned int eax; 		// r24
    unsigned int eax_1; 		// r24{2}

    eax = 0;
    do {
        eax_1 = eax;
        caml_globals[eax_1] = 0x8077580;
        eax = eax_1 + 1;
    } while (eax_1 + 1 != 512);
    return;
}

/** address: 0x08066d20 */
void norm_minsize()
{
}

/** address: 0x0805eec2 */
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
    eax = *(&caml_globals + 0x99e0);
    local4 = esp_1;
    if (eax != *0x8077530) {
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
    eax = *(&caml_globals + 0x99d8);
    if (eax != 0) {
        edx = *(&caml_globals + 0x99dc);
        *(__size32*)(esp + 8) = edx;
        *(__size32*)(esp + 4) = eax;
        *(__size32*)esp = 2;
        caml_page_table_remove(*esp, *(esp + 4), *(esp + 8));
        eax = *(&caml_globals + 0x9a28);
        *(__size32*)esp = eax;
        ecx = free(*esp); /* Warning: also results in edx */
    }
    eax = *(ebp - 28);
    *(__size32*)(&caml_globals + 0x9a28) = eax;
    *(__size32*)(&caml_globals + 0x99d8) = ebx;
    *(__size32*)(&caml_globals + 0x99dc) = esi;
    *(__size32*)(&caml_globals + 0x99e4) = ebx;
    *(__size32*)(&caml_globals + 0x99e0) = esi;
    *(__size32*)(&caml_globals + 0xd5c0) = edi;
    ecx = reset_table(0x807753c, ecx, edx); /* Warning: also results in edx */
    reset_table(0x8077558, ecx, edx);
    return;
}

/** address: 0x08066cf0 */
void norm_pfree()
{
}

/** address: 0x08066cff */
void norm_pmax()
{
    return;
}

/** address: 0x0805deec */
void caml_init_major_heap(__size32 param1)
{
    int ebp; 		// r29
    int esp; 		// r28

    clip_heap_chunk_size(param1, esp - 4, SUBFLAGS32(esp - 4, 24, (esp - 28)), esp == 28, (unsigned int)(esp - 4) < 24, param1, ebp, pc);
}

/** address: 0x0805d5bf */
__size32 caml_gc_message(int param1, union { char *; __size32; } param2)
{
    int eax; 		// r24
    __size32 ecx; 		// r25
    __size32 edx; 		// r26

    if ( ~(param1 >= 0 && (caml_verb_gc & param1) == 0)) {
        eax = *0x8074220;
        fprintf(eax, param2);
        eax = *0x8074220;
        ecx = fflush(eax); /* Warning: also results in edx */
    }
    return ecx; /* WARNING: Also returning: edx := edx */
}

/** address: 0x0805f3e7 */
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
    if (named_value_table[((unsigned int)param1 >> 23)] != 0x8077580) {
bb0x805f435:
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
            goto bb0x805f435;
        }
    }
    eax_1 = local4;
    ecx = local5;
    edx = local6;
    return eax_1; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x0805f1ca */
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

/** address: 0x0805edc3 */
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

    ebx_1 = *(global_0x0807655c + 0x4bac);
    caml_empty_minor_heap(bl, edi);
    eax = *(global_0x0807655c + 0x4bac);
    st7 = (float)(eax - ebx_1) + *((double *)&*0x807aa48);
    *(union { double; __size64; }*)0x807aa48 = st7;
    tmp1 = *(global_0x0807655c + 0x44fc);
    *(__size32*)(global_0x0807655c + 0x44fc)++;
    caml_major_collection_slice(eax - ebx_1, ebx_1, esp - 4, 0, st7, ADDFLAGS32(tmp1, 1, *0x807aa58), ADDFLAGS32(tmp1, 1, *0x807aa58), ADDFLAGS32(tmp1, 1, *0x807aa58), ebp, esi, ebx_4, 0, eax - ebx_1, 0, pc, ecx, edx);
}

/** address: 0x0805d4e4 */
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

/** address: 0x0805c139 */
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
    __size32 esp_49; 		// r28{331}
    __size32 esp_5; 		// r28{40}
    __size32 esp_50; 		// r28{331}
    __size32 esp_51; 		// r28{331}
    union { __size32; __size32 *; } esp_52; 		// r28{197}
    union { __size32; __size32 *; } esp_53; 		// r28{197}
    union { __size32; __size32 *; } esp_54; 		// r28{197}
    __size32 esp_55; 		// r28{295}
    __size32 esp_56; 		// r28{295}
    __size32 esp_57; 		// r28{295}
    __size32 esp_58; 		// r28{314}
    __size32 esp_59; 		// r28{154}
    __size32 esp_6; 		// r28{40}
    __size32 esp_60; 		// r28{154}
    __size32 esp_61; 		// r28{154}
    union { __size32; __size32 *; } esp_62; 		// r28{256}
    union { __size32; __size32 *; } esp_63; 		// r28{256}
    union { __size32; __size32 *; } esp_64; 		// r28{256}
    __size32 esp_65; 		// r28{230}
    __size32 esp_66; 		// r28{230}
    __size32 esp_67; 		// r28{230}
    __size32 esp_68; 		// r28{168}
    __size32 esp_69; 		// r28{168}
    __size32 esp_7; 		// r28{66}
    __size32 esp_70; 		// r28{168}
    __size32 esp_71; 		// r28{278}
    __size32 esp_72; 		// r28{278}
    __size32 esp_73; 		// r28{278}
    __size32 esp_74; 		// r28{1}
    __size32 esp_75; 		// r28{1}
    __size32 esp_8; 		// r28{66}
    __size32 esp_9; 		// r28{66}
    int local0; 		// m[esp - 4]
    int local1; 		// m[esp - 28]
    int local10; 		// m[esp_74 - 4]{221}
    int local100; 		// tmpb{299}
    int local101; 		// tmpb{221}
    int local102; 		// tmpb{221}
    int local103; 		// tmpb{268}
    int local104; 		// tmpb{268}
    int local105; 		// tmpb{233}
    int local106; 		// tmpb{233}
    int local107; 		// tmpb{334}
    int local108; 		// tmpb{334}
    int local109; 		// tmpb{171}
    __size32 local11; 		// m[esp_74 - 4]{260}
    int local110; 		// tmpb{171}
    int local111; 		// tmpb{282}
    int local112; 		// tmpb{282}
    __size16 local113; 		// tmph{185}
    __size16 local114; 		// tmph{335}
    __size16 local115; 		// tmph{283}
    __size16 local116; 		// tmph{157}
    __size16 local117; 		// tmph{318}
    __size16 local118; 		// tmph{300}
    __size16 local119; 		// tmph{185}
    __size32 local12; 		// m[esp_74 - 4]{301}
    __size16 local120; 		// tmph{335}
    __size16 local121; 		// tmph{283}
    __size16 local122; 		// tmph{157}
    __size16 local123; 		// tmph{318}
    __size16 local124; 		// tmph{300}
    int local125; 		// tmph{268}
    int local126; 		// tmph{268}
    int local127; 		// tmph{268}
    int local128; 		// tmph{268}
    __size16 local129; 		// tmph{335}
    __size32 local13; 		// m[esp_74 - 4]{336}
    __size16 local130; 		// tmph{283}
    __size16 local131; 		// tmph{157}
    __size16 local132; 		// tmph{318}
    __size16 local133; 		// tmph{300}
    __size16 local134; 		// tmph{185}
    __size16 local135; 		// tmph{4}
    __size16 local136; 		// tmph{4}
    __size16 local137; 		// tmph{335}
    __size16 local138; 		// tmph{335}
    __size16 local139; 		// tmph{283}
    __size32 local14; 		// m[esp_74 - 4]{284}
    __size16 local140; 		// tmph{283}
    unsigned int local141; 		// edx_1{33}
    __size32 local142; 		// esp_59{154}
    int local143; 		// local98{156}
    __size16 local144; 		// local116{157}
    __size32 local145; 		// local29{158}
    __size32 local146; 		// local53{159}
    unsigned int local147; 		// m[esp_74 - 32]{160}
    __size32 local148; 		// esp_68{168}
    int local149; 		// local91{171}
    int local15; 		// m[esp_74 - 4]{268}
    __size32 local150; 		// local8{172}
    __size32 local151; 		// local36{173}
    unsigned int local152; 		// local65{174}
    int local153; 		// eax_1{180}
    union { __size32 *; __size32; } local154; 		// esp_52{197}
    unsigned int local155; 		// esi{199}
    __size32 local156; 		// local7{201}
    __size32 local157; 		// local35{202}
    unsigned int local158; 		// local64{203}
    union { __size32 *; unsigned int; } local159; 		// eax{212}
    int local16; 		// m[esp_74 - 4]{268}
    __size32 local160; 		// esp_65{230}
    int local161; 		// local94{233}
    __size32 local162; 		// local21{234}
    __size32 local163; 		// local54{235}
    unsigned int local164; 		// local75{236}
    unsigned int local165; 		// ebx{255}
    union { __size32 *; __size32; } local166; 		// esp_62{256}
    __size32 local167; 		// local11{260}
    __size32 local168; 		// local39{261}
    unsigned int local169; 		// local68{262}
    __size32 local17; 		// m[esp_74 - 4]{336}
    unsigned int local170; 		// ebx{277}
    __size32 local171; 		// esp_71{278}
    int local172; 		// local97{282}
    __size16 local173; 		// local115{283}
    __size32 local174; 		// local14{284}
    __size32 local175; 		// local42{285}
    unsigned int local176; 		// local71{286}
    __size32 local177; 		// esp_55{295}
    unsigned int local178; 		// edi{298}
    int local179; 		// local100{299}
    __size32 local18; 		// m[esp_74 - 4]{336}
    __size16 local180; 		// local118{300}
    __size32 local181; 		// local12{301}
    __size32 local182; 		// local40{302}
    unsigned int local183; 		// local69{303}
    __size32 local184; 		// esp_58{314}
    int local185; 		// local99{317}
    __size16 local186; 		// local117{318}
    __size32 local187; 		// m[esp_74 - 4]{319}
    __size32 local188; 		// m[esp_74 - 28]{320}
    unsigned int local189; 		// local74{321}
    __size32 local19; 		// m[esp_74 - 4]{301}
    __size32 local190; 		// esp_49{331}
    int local191; 		// local96{334}
    __size16 local192; 		// local114{335}
    __size32 local193; 		// local13{336}
    __size32 local194; 		// local41{337}
    unsigned int local195; 		// local70{338}
    __size32 local196; 		// esp{348}
    int local2; 		// m[esp - 32]
    __size32 local20; 		// m[esp_74 - 4]{301}
    __size32 local21; 		// m[esp_74 - 4]{234}
    __size32 local22; 		// m[esp_74 - 4]{234}
    __size32 local23; 		// m[esp_74 - 4]{260}
    __size32 local24; 		// m[esp_74 - 4]{260}
    __size32 local25; 		// m[esp_74 - 4]{201}
    __size32 local26; 		// m[esp_74 - 4]{201}
    __size32 local27; 		// m[esp_74 - 4]{172}
    __size32 local28; 		// m[esp_74 - 4]{172}
    __size32 local29; 		// m[esp_74 - 4]{158}
    int local3; 		// m[esp - 64]
    __size32 local30; 		// m[esp_74 - 4]{284}
    __size32 local31; 		// m[esp_74 - 4]{284}
    __size32 local32; 		// m[esp_74 - 28]{8}
    __size32 local33; 		// m[esp_74 - 28]{8}
    __size32 local34; 		// m[esp_74 - 28]{8}
    __size32 local35; 		// m[esp_74 - 28]{202}
    __size32 local36; 		// m[esp_74 - 28]{173}
    int local37; 		// m[esp_74 - 28]{221}
    int local38; 		// m[esp_74 - 28]{221}
    __size32 local39; 		// m[esp_74 - 28]{261}
    __size32 local4; 		// m[esp_74 - 4]{7}
    __size32 local40; 		// m[esp_74 - 28]{302}
    __size32 local41; 		// m[esp_74 - 28]{337}
    __size32 local42; 		// m[esp_74 - 28]{285}
    int local43; 		// m[esp_74 - 28]{268}
    int local44; 		// m[esp_74 - 28]{268}
    __size32 local45; 		// m[esp_74 - 28]{202}
    __size32 local46; 		// m[esp_74 - 28]{202}
    __size32 local47; 		// m[esp_74 - 28]{285}
    __size32 local48; 		// m[esp_74 - 28]{285}
    __size32 local49; 		// m[esp_74 - 28]{261}
    __size32 local5; 		// m[esp_74 - 4]{7}
    __size32 local50; 		// m[esp_74 - 28]{261}
    __size32 local51; 		// m[esp_74 - 28]{302}
    __size32 local52; 		// m[esp_74 - 28]{302}
    __size32 local53; 		// m[esp_74 - 28]{159}
    __size32 local54; 		// m[esp_74 - 28]{235}
    __size32 local55; 		// m[esp_74 - 28]{235}
    __size32 local56; 		// m[esp_74 - 28]{235}
    __size32 local57; 		// m[esp_74 - 28]{337}
    __size32 local58; 		// m[esp_74 - 28]{337}
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
    unsigned int local74; 		// m[esp_74 - 32]{321}
    unsigned int local75; 		// m[esp_74 - 32]{236}
    unsigned int local76; 		// m[esp_74 - 32]{338}
    unsigned int local77; 		// m[esp_74 - 32]{338}
    unsigned int local78; 		// m[esp_74 - 32]{236}
    unsigned int local79; 		// m[esp_74 - 32]{236}
    __size32 local8; 		// m[esp_74 - 4]{172}
    unsigned int local80; 		// m[esp_74 - 32]{174}
    unsigned int local81; 		// m[esp_74 - 32]{174}
    unsigned int local82; 		// m[esp_74 - 32]{262}
    unsigned int local83; 		// m[esp_74 - 32]{262}
    unsigned int local84; 		// m[esp_74 - 32]{286}
    unsigned int local85; 		// m[esp_74 - 32]{286}
    unsigned int local86; 		// m[esp_74 - 32]{303}
    unsigned int local87; 		// m[esp_74 - 32]{303}
    unsigned int local88; 		// m[esp_74 - 32]{203}
    unsigned int local89; 		// m[esp_74 - 32]{203}
    int local9; 		// m[esp_74 - 4]{221}
    int local90; 		// tmpb{221}
    int local91; 		// tmpb{171}
    int local92; 		// tmpb{3}
    int local93; 		// tmpb{3}
    int local94; 		// tmpb{233}
    int local95; 		// tmpb{268}
    int local96; 		// tmpb{334}
    int local97; 		// tmpb{282}
    int local98; 		// tmpb{156}
    int local99; 		// tmpb{317}

    local4 = param1;
    local32 = 0x806d9c4;
    ebx = caml_raise(param1, 0x806d9c4, param2, esp_74 - 4); /* Warning: also results in esp_1, ebp, esi */
    local143 = local92;
    local144 = local135;
    local145 = local4;
    local146 = local32;
    local147 = local61;
    local149 = local92;
    local150 = local4;
    local151 = local32;
    local152 = local61;
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
        local141 = edx;
        do {
            edx_1 = local141;
            ecx = *(ebx + edx_1 * 4);
            *(__size32*)(eax + edx_1 * 4 + 4) = ecx;
            edx_2 = edx_1 + 1;
            local141 = edx_2;
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
    *(__size32*)(esp_7 - 28) = 0x806d9cc;
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
    *(__size32*)(esp_16 - 28) = 0x806da08;
    esp_19 = caml_raise_with_string(*(esp_16 - 24), esp_16 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_19 - 4) = ebp;
    eax = *(esp_19 + 4);
    *(__size32*)(esp_19 - 24) = eax;
    *(__size32*)(esp_19 - 28) = 0x806d9ec;
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
    *(__size32*)(esp_25 - 28) = 0x806dae0;
    esp_28 = caml_raise_constant(*(esp_25 - 28), esp_25 - 4, *(esp_25 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_28 - 4) = ebp;
    *(__size32*)(esp_28 - 28) = 0x806da78;
    esp_31 = caml_raise_constant(*(esp_28 - 28), esp_28 - 4, *(esp_28 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_31 - 4) = ebp;
    *(__size32*)(esp_31 - 28) = 0x806da50;
    esp_34 = caml_raise_constant(*(esp_31 - 28), esp_31 - 4, *(esp_31 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_34 - 4) = ebp;
    *(__size32*)(esp_34 - 28) = 0x806da30;
    cl = caml_raise_constant(*(esp_34 - 28), esp_34 - 4, *(esp_34 - 176)); /* Warning: also results in dl, ecx, edx, ebx, esp_37, ebp, esi, edi */
    *(__size32*)(esp_37 - 4) = ebp;
    ebp = esp_37 - 4;
    *(unsigned int*)(esp_37 - 8) = edi;
    *(unsigned int*)(esp_37 - 12) = esi;
    *(unsigned int*)(esp_37 - 16) = ebx;
    esp_40 = esp_37 - 60;
    eax = *(esp_37 + 8);
    al = (unsigned char) eax;
    local142 = esp_40;
    local148 = esp_40;
    if (eax != 0) {
        edx = *(esp_37 + 16);
        *(__size32*)(esp_37 - 36) = edx;
        edx = *(esp_37 + 12);
        *(__size32*)(esp_37 - 32) = eax;
        do {
bb0x805c3a7:
            esp_68 = local148;
            local91 = local149;
            local8 = local150;
            local36 = local151;
            local65 = local152;
            esi = *(global_0x0807655c + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local142 = esp_68;
            local143 = local91;
            local145 = local8;
            local146 = local36;
            local147 = local65;
            local148 = esp_68;
            local149 = local91;
            local150 = local8;
            local151 = local36;
            local152 = local65;
            local153 = eax;
            local154 = esp_68;
            local156 = local8;
            local157 = local36;
            local158 = local65;
            local160 = esp_68;
            local161 = local91;
            local162 = local8;
            local163 = local36;
            local164 = local65;
            if (*ebx != edx) {
                do {
                    eax_1 = local153;
                    eax_2 = eax_1 + 1 & esi;
                    ebx = *(caml_frame_descriptors + (eax_1 + 1 & esi) * 4);
                    local153 = eax_2;
                } while (*ebx != edx);
            }
            local113 = *(ebx + 4) + 1;
            local144 = local113;
            if (*(ebx + 4) != -1) {
                esi = *(unsigned short*)(ebx + 6);
                local155 = esi;
                if ((int)esi > 0) {
                    edi = ebx + 8;
                    *(__size32*)(ebp - 36) = ebx;
                    ebx = *(ebp + 8);
                    for(;;) {
                        esp_52 = local154;
                        esi = local155;
                        local7 = local156;
                        local35 = local157;
                        local64 = local158;
                        eax_4 = *(unsigned short*)edi;
                        if (((unsigned char) eax_4 & 0x1) == 0) {
                            eax_7 = eax_4 + *(ebp - 28);
                            flags = ADDFLAGS32(eax_4, *(ebp - 28), eax_7);
                            local159 = eax_7;
                        }
                        else {
                            flags = SARFLAGS((int)eax_4 >> 1, eax_4, 1);
                            edx = *(ebp - 32);
                            eax = edx + ((int)eax_4 >> 1) * 4;
                            local159 = eax;
                        }
                        eax = local159;
                        *(__size32*)(esp_52 + 4) = eax;
                        eax = *eax;
                        *(__size32*)esp_52 = eax;
                        (*ebx)((unsigned char) eax, cl, dl, eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, local7, local35, local64, param1);
                        local154 = esp_43;
                        local156 = local9;
                        local157 = local37;
                        local158 = local66;
                        local160 = esp_43;
                        local161 = local90;
                        local162 = local9;
                        local163 = local37;
                        local164 = local66;
                        esi_4 = esi_1 - 1;
                        local155 = esi_4;
                        if ((int)esi_1 <= 1) {
                            break;
                        }
                        edi += 2;
                    }
                    ebx = *(ebp - 36);
                }
                esp_65 = local160;
                local94 = local161;
                local21 = local162;
                local54 = local163;
                local75 = local164;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local148 = esp_65;
                local149 = local94;
                local150 = local21;
                local151 = local54;
                local152 = local75;
                goto bb0x805c3a7;
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
    esp_59 = local142;
    local98 = local143;
    local116 = local144;
    local29 = local145;
    local53 = local146;
    *(unsigned int*)(esp_74 - 32) = local147;
    local190 = esp_59;
    local191 = local98;
    local192 = local116;
    local193 = local29;
    local194 = local53;
    local195 = *(esp_74 - 32);
    local196 = esp_59;
    if (*(ebp + 24) != 0) {
        esi = *(ebp + 24);
        *(__size32*)(ebp - 28) = 0;
        do {
            esp_49 = local190;
            local96 = local191;
            local114 = local192;
            local13 = local193;
            local41 = local194;
            local70 = local195;
            edi = 0;
            local177 = esp_49;
            local178 = edi;
            local179 = local96;
            local180 = local114;
            local181 = local13;
            local182 = local41;
            local183 = local70;
            local184 = esp_49;
            local185 = local96;
            local186 = local114;
            local187 = local13;
            local188 = local41;
            local189 = local70;
            if (*(esi + 4) > 0) {
                do {
                    esp_55 = local177;
                    edi = local178;
                    local100 = local179;
                    local118 = local180;
                    local12 = local181;
                    local40 = local182;
                    local69 = local183;
                    ebx = *(ebp - 28);
                    local165 = ebx;
                    local166 = esp_55;
                    local167 = local12;
                    local168 = local40;
                    local169 = local69;
                    local170 = ebx;
                    local171 = esp_55;
                    local172 = local100;
                    local173 = local118;
                    local174 = local12;
                    local175 = local40;
                    local176 = local69;
                    if (*(esi + 8) > 0) {
                        do {
                            ebx = local165;
                            esp_62 = local166;
                            local11 = local167;
                            local39 = local168;
                            local68 = local169;
                            eax_9 = ebx * 4 + *(esi + edi * 4 + 12);
                            *(__size32*)(esp_62 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_62 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, cl, dl, eax_12, ecx, edx, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), local11, local39, local68, param1);
                            local166 = esp_46;
                            local167 = local15;
                            local168 = local43;
                            local169 = local72;
                            local171 = esp_46;
                            local172 = local95;
                            local173 = local125;
                            local174 = local15;
                            local175 = local43;
                            local176 = local72;
                            ebx_4 = ebx_1 + 1;
                            local165 = ebx_4;
                            local170 = ebx_4;
                        } while (*(esi + 8) > ebx_1 + 1);
                    }
                    ebx = local170;
                    esp_71 = local171;
                    edi_1 = edi;
                    local97 = local172;
                    local115 = local173;
                    local14 = local174;
                    local42 = local175;
                    local71 = local176;
                    edi_2 = edi_1 + 1;
                    local177 = esp_71;
                    local178 = edi_2;
                    local179 = local97;
                    local180 = local115;
                    local181 = local14;
                    local182 = local42;
                    local183 = local71;
                    local184 = esp_71;
                    local185 = local97;
                    local186 = local115;
                    local187 = local14;
                    local188 = local42;
                    local189 = local71;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_58 = local184;
            local99 = local185;
            local117 = local186;
            *(__size32*)(esp_74 - 4) = local187;
            *(__size32*)(esp_74 - 28) = local188;
            local74 = local189;
            esi = *esi;
            local190 = esp_58;
            local191 = local99;
            local192 = local117;
            local193 = *(esp_74 - 4);
            local194 = *(esp_74 - 28);
            local195 = local74;
            local196 = esp_58;
        } while (esi == 0);
    }
    esp = local196;
    ebx = *(esp + 44);
    esi = *(esp + 48);
    edi = *(esp + 52);
    ebp = *(esp + 56);
    return eax; /* WARNING: Also returning: al := al, cl := cl, dl := dl, ecx := ecx, edx := edx, ebx := ebx, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x0805f462 */
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

/** address: 0x0805ee75 */
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

/** address: 0x0805ded0 */
void clip_heap_chunk_size()
{
}

/** address: 0x0805f3ab */
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

/** address: 0x0805d6d2 */
void caml_fl_init_merge()
{
    *(__size32*)(&caml_globals + 0x99ac) = 0;
    *(__size32*)(&caml_globals + 0x65a8) = 0x8074108;
    return;
}

/** address: 0x0805d9c9 */
void caml_make_free_blocks(__size32 param1)
{
    if (param1 != 0) {
    }
    return;
}

/** address: 0x0805ec79 */
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

    eax = *(global_0x0807655c + 0xfd8);
    if (eax != *0x8077530) {
        *(__size32*)(global_0x0807655c + 0x1018) = 1;
        caml_gc_message(2, 0x806b8dc);
        esp = caml_oldify_local_roots(param1, ecx, ebx, esp - 4, esi, param4);
        ebx_1 = *(global_0x0807655c + 0xfe0);
        local7 = ebx_1;
        if (ebx_1 < *(global_0x0807655c + 0xfec)) {
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
        eax = *(global_0x0807655c + 0xffc);
        if (eax < *(global_0x0807655c + 0x1008)) {
            do {
                eax_1 = eax;
                ecx = *eax_1;
                edx = *ecx;
                if ( ~(((unsigned char) edx & 0x1) != 0 || edx >= *(global_0x0807655c + 0xfd4) || edx <= *(global_0x0807655c + 0xfd0))) {
                    if (*(edx - 4) == 0) {
                        edx = *edx;
                        *(__size32*)ecx = edx;
                        goto bb0x805ed2b;
                    }
                    *(__size32*)ecx = caml_weak_none;
                    goto bb0x805ed2b;
                }
bb0x805ed2b:
                eax = eax_1 + 4;
            } while (*(global_0x0807655c + 0x1008) > eax_1 + 4);
        }
    }
    caml_final_empty_young();
    return;
}

/** address: 0x0805e768 */
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
    if (*0x807b0fc != 2) {
bb0x805e782:
        eax = *(global_0x0807655c + 0x4bac);
        edx = *(global_0x0807655c + 0x4b94);
        *(__size32*)(ebp - 32) = edx + 100;
        *(__size32*)(ebp - 28) = 0;
        st7 = (float)*(ebp - 32);
        *(__size32*)(ebp - 32) = edx;
        *(__size32*)(ebp - 28) = 0;
        st6 = (float)*(ebp - 32);
        *(__size32*)(ebp - 32) = eax;
        *(__size32*)(ebp - 28) = 0;
        st5 = (float)*(ebp - 32);
        edx = *(global_0x0807655c + 0x4504);
        *(int*)(ebp - 32) = (unsigned int)edx >> 2;
        *(__size32*)(ebp - 28) = 0;
        st4 = (float)*(ebp - 32);
        *(union { double; __size64; }*)(ebp - 48) = st5 * 3. * st7 / st4 / st6 * 0.5;
        edx = *(global_0x0807655c + 0x4b98);
        if (edx != 0) {
            esi = *(global_0x0807655c + 0x4bb4);
            *(__size32*)(ebp - 32) = esi;
            *(__size32*)(ebp - 28) = 0;
            *(__size32*)(ebp - 32) = edx;
            *(__size32*)(ebp - 28) = 0;
bb0x805e820:
        }
        goto bb0x805e820;
    }
    ebp = start_cycle();
    goto bb0x805e782;
}

/** address: 0x08069c09 */
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
    if ( ~(*0x807aac0 != 0 || *0x807aad4 == 0)) {
        ecx = caml_gc_message(128, 0x806c374); /* Warning: also results in edx, esp */
bb0x8069c66:
        param3 = local6;
        param4 = local7;
        eax = *0x807aad4;
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
                *(int*)(global_0x0807655c + 0x4578) = ebx;
                if (ebx != 0) {
                    continue;
                }
                *(__size32*)(global_0x0807655c + 0x457c) = 0;
            }
            else {
                *(int*)(eax + 4) = edx - 1;
                eax += (edx - 1) * 12;
                edx = *(eax + 8);
                ecx = *(eax + 16);
                eax = *(eax + 12);
                *(__size32*)(global_0x0807655c + 0x4564) = 1;
                *(__size32*)(esp + 4) = eax + ecx;
                *(__size32*)esp = edx;
                ebx = caml_callback_exn(); /* Warning: also results in esp, ebp, esi, edi */
                local6 = esi;
                local7 = edi;
                *(__size32*)(global_0x0807655c + 0x4564) = 0;
                edx = eax + ecx & 0x3;
                if ((eax + ecx & 0x3) != 2) {
                    goto bb0x8069c66;
                }
                *(union { void *; int; }*)esp = eax + ecx & ~0x3;
                ecx = caml_raise(*(esp - 36), *esp, ebx, ebp); /* Warning: also results in edx, esp */
                goto bb0x8069cc2;
            }
bb0x8069c66:
            param3 = local6;
            param4 = local7;
            eax = *0x807aad4;
            local6 = param3;
            local6 = param3;
            local7 = param4;
            local7 = param4;
        }
bb0x8069cc2:
        *(__size32*)(esp + 8) = 0;
        *(__size32*)(esp + 4) = 0x806c398;
        *(__size32*)esp = 128;
        caml_gc_message(*esp, *(esp + 4));
    }
    return;
}

/** address: 0x0805c060 */
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
    __size32 esp_1; 		// r28{15}
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
    __size32 esp_2; 		// r28{15}
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
    __size32 esp_3; 		// r28{15}
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
    __size32 esp_4; 		// r28{10}
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
    __size32 esp_5; 		// r28{10}
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
    __size32 esp_6; 		// r28{10}
    __size32 esp_60; 		// r28{280}
    __size32 esp_61; 		// r28{328}
    __size32 esp_62; 		// r28{328}
    __size32 esp_63; 		// r28{328}
    union { __size32; __size32 *; } esp_64; 		// r28{316}
    __size32 esp_65; 		// r28{1}
    __size32 esp_66; 		// r28{1}
    union { __size32; __size32 *; } esp_67; 		// r28{256}
    __size32 esp_68; 		// r28{226}
    union { __size32; __size32 *; } esp_69; 		// r28{18}
    __size32 esp_7; 		// r28{42}
    __size32 esp_70; 		// r28{356}
    __size32 esp_71; 		// r28{289}
    __size32 esp_72; 		// r28{338}
    __size32 esp_73; 		// r28{211}
    __size32 esp_74; 		// r28{376}
    __size32 esp_75; 		// r28{394}
    __size32 esp_76; 		// r28{394}
    __size32 esp_77; 		// r28{226}
    __size32 esp_78; 		// r28{226}
    __size32 esp_79; 		// r28{211}
    __size32 esp_8; 		// r28{42}
    __size32 esp_80; 		// r28{211}
    union { __size32; __size32 *; } esp_81; 		// r28{316}
    union { __size32; __size32 *; } esp_82; 		// r28{316}
    union { __size32; __size32 *; } esp_83; 		// r28{256}
    union { __size32; __size32 *; } esp_84; 		// r28{256}
    __size32 esp_85; 		// r28{289}
    __size32 esp_86; 		// r28{289}
    __size32 esp_87; 		// r28{338}
    __size32 esp_88; 		// r28{338}
    __size32 esp_89; 		// r28{356}
    __size32 esp_9; 		// r28{42}
    __size32 esp_90; 		// r28{356}
    union { __size32; __size32 *; } esp_91; 		// r28{18}
    union { __size32; __size32 *; } esp_92; 		// r28{18}
    int local0; 		// m[esp - 4]
    int local1; 		// m[esp - 8]
    int local10; 		// m[esp_65 + 4]{280}
    int local100; 		// m[esp_65 - 32]{15}
    int local101; 		// m[esp_65 - 32]{15}
    int local102; 		// m[esp_65 - 32]{262}
    int local103; 		// m[esp_65 - 32]{232}
    int local104; 		// m[esp_65 - 32]{280}
    int local105; 		// m[esp_65 - 32]{280}
    int local106; 		// m[esp_65 - 32]{322}
    int local107; 		// m[esp_65 - 32]{364}
    int local108; 		// m[esp_65 - 32]{401}
    int local109; 		// m[esp_65 - 32]{346}
    __size32 local11; 		// m[esp_65 + 4]{233}
    int local110; 		// m[esp_65 - 32]{328}
    int local111; 		// m[esp_65 - 32]{328}
    int local112; 		// m[esp_65 - 32]{23}
    int local113; 		// m[esp_65 - 32]{23}
    int local114; 		// m[esp_65 - 32]{383}
    int local115; 		// m[esp_65 - 32]{295}
    int local116; 		// m[esp_65 - 32]{262}
    int local117; 		// m[esp_65 - 32]{262}
    int local118; 		// m[esp_65 - 32]{295}
    int local119; 		// m[esp_65 - 32]{295}
    __size32 local12; 		// m[esp_65 + 4]{24}
    int local120; 		// m[esp_65 - 32]{232}
    int local121; 		// m[esp_65 - 32]{232}
    int local122; 		// m[esp_65 - 32]{401}
    int local123; 		// m[esp_65 - 32]{401}
    int local124; 		// m[esp_65 - 32]{346}
    int local125; 		// m[esp_65 - 32]{346}
    int local126; 		// m[esp_65 - 32]{364}
    int local127; 		// m[esp_65 - 32]{364}
    int local128; 		// m[esp_65 - 32]{322}
    int local129; 		// m[esp_65 - 32]{322}
    int local13; 		// m[esp_65 + 4]{328}
    int local130; 		// m[esp_65 - 32]{7}
    int local131; 		// m[esp_65 - 32]{7}
    int local132; 		// tmpb{229}
    int local133; 		// tmpb{280}
    int local134; 		// tmpb{280}
    int local135; 		// tmpb{280}
    int local136; 		// tmpb{280}
    int local137; 		// tmpb{292}
    int local138; 		// tmpb{280}
    int local139; 		// tmpb{397}
    int local14; 		// m[esp_65 + 4]{328}
    int local140; 		// tmpb{342}
    int local141; 		// tmpb{213}
    int local142; 		// tmpb{379}
    int local143; 		// tmpb{360}
    int local144; 		// tmpb{397}
    int local145; 		// tmpb{342}
    int local146; 		// tmpb{213}
    int local147; 		// tmpb{379}
    int local148; 		// tmpb{360}
    int local149; 		// tmpb{328}
    __size32 local15; 		// m[esp_65 + 4]{233}
    int local150; 		// tmpb{328}
    int local151; 		// tmpb{328}
    int local152; 		// tmpb{328}
    int local153; 		// tmpb{19}
    int local154; 		// tmpb{19}
    int local155; 		// tmpb{19}
    int local156; 		// tmpb{19}
    int local157; 		// tmpb{292}
    int local158; 		// tmpb{292}
    int local159; 		// tmpb{292}
    __size32 local16; 		// m[esp_65 + 4]{233}
    int local160; 		// tmpb{229}
    int local161; 		// tmpb{229}
    int local162; 		// tmpb{229}
    int local163; 		// tmpb{213}
    int local164; 		// tmpb{342}
    int local165; 		// tmpb{342}
    int local166; 		// tmpb{342}
    int local167; 		// tmpb{360}
    int local168; 		// tmpb{379}
    int local169; 		// tmpb{397}
    __size32 local17; 		// m[esp_65 + 4]{402}
    int local170; 		// tmpb{397}
    int local171; 		// tmpb{397}
    int local172; 		// tmpb{280}
    int local173; 		// tmpb{229}
    int local174; 		// tmpb{19}
    int local175; 		// tmpb{292}
    int local176; 		// tmpb{328}
    int local177; 		// tmpb{397}
    int local178; 		// tmpb{5}
    int local179; 		// tmpb{5}
    __size32 local18; 		// m[esp_65 + 4]{347}
    __size16 local180; 		// tmph{244}
    __size16 local181; 		// tmph{398}
    __size16 local182; 		// tmph{343}
    __size16 local183; 		// tmph{214}
    __size16 local184; 		// tmph{380}
    __size16 local185; 		// tmph{361}
    __size16 local186; 		// tmph{244}
    __size16 local187; 		// tmph{244}
    __size16 local188; 		// tmph{398}
    __size16 local189; 		// tmph{343}
    __size32 local19; 		// m[esp_65 + 4]{218}
    __size16 local190; 		// tmph{214}
    __size16 local191; 		// tmph{380}
    __size16 local192; 		// tmph{361}
    int local193; 		// tmph{328}
    int local194; 		// tmph{328}
    int local195; 		// tmph{328}
    int local196; 		// tmph{328}
    __size16 local197; 		// tmph{20}
    __size16 local198; 		// tmph{20}
    __size16 local199; 		// tmph{20}
    int local2; 		// m[esp - 28]
    __size32 local20; 		// m[esp_65 + 4]{384}
    __size16 local200; 		// tmph{20}
    __size16 local201; 		// tmph{214}
    __size16 local202; 		// tmph{343}
    __size16 local203; 		// tmph{343}
    __size16 local204; 		// tmph{343}
    __size16 local205; 		// tmph{361}
    __size16 local206; 		// tmph{380}
    __size16 local207; 		// tmph{398}
    __size16 local208; 		// tmph{398}
    __size16 local209; 		// tmph{398}
    __size32 local21; 		// m[esp_65 + 4]{365}
    int local210; 		// tmph{328}
    __size16 local211; 		// tmph{398}
    __size16 local212; 		// tmph{343}
    __size16 local213; 		// tmph{214}
    __size16 local214; 		// tmph{380}
    __size16 local215; 		// tmph{361}
    __size16 local216; 		// tmph{20}
    __size16 local217; 		// tmph{244}
    __size32 local218; 		// ebx{17}
    union { __size32 *; __size32; } local219; 		// esp_69{18}
    __size32 local22; 		// m[esp_65 + 4]{296}
    __size32 local220; 		// local48{21}
    __size32 local221; 		// local87{22}
    int local222; 		// local112{23}
    __size32 local223; 		// local12{24}
    unsigned int local224; 		// edx_1{90}
    __size32 local225; 		// esp_73{211}
    int local226; 		// local141{213}
    __size16 local227; 		// local183{214}
    __size32 local228; 		// m[esp_65 - 4]{215}
    __size32 local229; 		// m[esp_65 - 8]{216}
    __size32 local23; 		// m[esp_65 + 4]{296}
    int local230; 		// m[esp_65 - 32]{217}
    __size32 local231; 		// local19{218}
    __size32 local232; 		// esp_68{226}
    int local233; 		// local132{229}
    __size32 local234; 		// local39{230}
    __size32 local235; 		// local74{231}
    int local236; 		// local103{232}
    __size32 local237; 		// local11{233}
    int local238; 		// eax_1{239}
    union { __size32 *; __size32; } local239; 		// esp_67{256}
    __size32 local24; 		// m[esp_65 + 4]{24}
    unsigned int local240; 		// esi{258}
    __size32 local241; 		// local38{260}
    __size32 local242; 		// local71{261}
    int local243; 		// local102{262}
    union { __size32 *; unsigned int; } local244; 		// eax{271}
    __size32 local245; 		// esp_71{289}
    int local246; 		// local137{292}
    __size32 local247; 		// local56{293}
    __size32 local248; 		// local88{294}
    int local249; 		// local115{295}
    __size32 local25; 		// m[esp_65 + 4]{24}
    __size32 local250; 		// local22{296}
    unsigned int local251; 		// ebx{315}
    union { __size32 *; __size32; } local252; 		// esp_64{316}
    __size32 local253; 		// local42{320}
    __size32 local254; 		// local77{321}
    int local255; 		// local106{322}
    unsigned int local256; 		// ebx{337}
    __size32 local257; 		// esp_72{338}
    int local258; 		// local140{342}
    __size16 local259; 		// local182{343}
    __size32 local26; 		// m[esp_65 + 4]{4}
    __size32 local260; 		// local45{344}
    __size32 local261; 		// local80{345}
    int local262; 		// local109{346}
    __size32 local263; 		// local18{347}
    __size32 local264; 		// esp_70{356}
    unsigned int local265; 		// edi{359}
    int local266; 		// local143{360}
    __size16 local267; 		// local185{361}
    __size32 local268; 		// local43{362}
    __size32 local269; 		// local78{363}
    __size32 local27; 		// m[esp_65 + 4]{4}
    int local270; 		// local107{364}
    __size32 local271; 		// local21{365}
    __size32 local272; 		// esp_74{376}
    int local273; 		// local142{379}
    __size16 local274; 		// local184{380}
    __size32 local275; 		// local58{381}
    __size32 local276; 		// local92{382}
    int local277; 		// local114{383}
    __size32 local278; 		// local20{384}
    __size32 local279; 		// esp_75{394}
    __size32 local28; 		// m[esp_65 + 4]{347}
    int local280; 		// local139{397}
    __size16 local281; 		// local181{398}
    __size32 local282; 		// local44{399}
    __size32 local283; 		// local79{400}
    int local284; 		// local108{401}
    __size32 local285; 		// local17{402}
    __size32 local286; 		// esp{408}
    __size32 local29; 		// m[esp_65 + 4]{347}
    int local3; 		// m[esp - 32]
    __size32 local30; 		// m[esp_65 + 4]{402}
    __size32 local31; 		// m[esp_65 + 4]{402}
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
    __size32 local50; 		// m[esp_65 - 4]{399}
    __size32 local51; 		// m[esp_65 - 4]{399}
    __size32 local52; 		// m[esp_65 - 4]{260}
    __size32 local53; 		// m[esp_65 - 4]{260}
    __size32 local54; 		// m[esp_65 - 4]{344}
    __size32 local55; 		// m[esp_65 - 4]{344}
    __size32 local56; 		// m[esp_65 - 4]{293}
    __size32 local57; 		// m[esp_65 - 4]{293}
    __size32 local58; 		// m[esp_65 - 4]{381}
    __size32 local59; 		// m[esp_65 - 4]{230}
    int local6; 		// m[esp_65 + 4]{15}
    __size32 local60; 		// m[esp_65 - 4]{230}
    __size32 local61; 		// m[esp_65 - 4]{320}
    __size32 local62; 		// m[esp_65 - 4]{320}
    __size32 local63; 		// m[esp_65 - 4]{362}
    __size32 local64; 		// m[esp_65 - 4]{362}
    int local65; 		// m[esp_65 - 8]{15}
    int local66; 		// m[esp_65 - 8]{15}
    int local67; 		// m[esp_65 - 8]{15}
    __size32 local68; 		// m[esp_65 - 8]{9}
    __size32 local69; 		// m[esp_65 - 8]{9}
    int local7; 		// m[esp_65 + 4]{15}
    __size32 local70; 		// m[esp_65 - 8]{9}
    __size32 local71; 		// m[esp_65 - 8]{261}
    __size32 local72; 		// m[esp_65 - 8]{261}
    __size32 local73; 		// m[esp_65 - 8]{261}
    __size32 local74; 		// m[esp_65 - 8]{231}
    int local75; 		// m[esp_65 - 8]{280}
    int local76; 		// m[esp_65 - 8]{280}
    __size32 local77; 		// m[esp_65 - 8]{321}
    __size32 local78; 		// m[esp_65 - 8]{363}
    __size32 local79; 		// m[esp_65 - 8]{400}
    int local8; 		// m[esp_65 + 4]{280}
    __size32 local80; 		// m[esp_65 - 8]{345}
    int local81; 		// m[esp_65 - 8]{328}
    int local82; 		// m[esp_65 - 8]{328}
    __size32 local83; 		// m[esp_65 - 8]{400}
    __size32 local84; 		// m[esp_65 - 8]{400}
    __size32 local85; 		// m[esp_65 - 8]{321}
    __size32 local86; 		// m[esp_65 - 8]{321}
    __size32 local87; 		// m[esp_65 - 8]{22}
    __size32 local88; 		// m[esp_65 - 8]{294}
    __size32 local89; 		// m[esp_65 - 8]{294}
    int local9; 		// m[esp_65 + 4]{280}
    __size32 local90; 		// m[esp_65 - 8]{22}
    __size32 local91; 		// m[esp_65 - 8]{22}
    __size32 local92; 		// m[esp_65 - 8]{382}
    __size32 local93; 		// m[esp_65 - 8]{363}
    __size32 local94; 		// m[esp_65 - 8]{363}
    __size32 local95; 		// m[esp_65 - 8]{231}
    __size32 local96; 		// m[esp_65 - 8]{231}
    __size32 local97; 		// m[esp_65 - 8]{345}
    __size32 local98; 		// m[esp_65 - 8]{345}
    int local99; 		// m[esp_65 - 32]{15}

    local32 = param4;
    local68 = param3;
    esp_4 = esp_65 - 28;
    ebx_1 = param2;
    eax = *(global_0x0807655c + 0x2434);
    al = (unsigned char) eax;
    local218 = ebx_1;
    local219 = esp_4;
    local220 = local32;
    local221 = local68;
    local222 = param1;
    local223 = param2;
    if (eax != 0) {
        (*eax)((unsigned char) eax, eax, param2, esp_65 - 4, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), param4, param3, pc, cl, dl, ecx, edx, esi, edi, param2);
        local218 = ebx;
        local219 = esp_1;
        local220 = local35;
        local221 = local65;
        local222 = local99;
        local223 = local5;
    }
    ebx = local218;
    esp_69 = local219;
    local153 = local178;
    local197 = tmph;
    local48 = local220;
    local87 = local221;
    local112 = local222;
    local12 = local223;
    local226 = local153;
    local227 = local197;
    local228 = local48;
    local229 = local87;
    local230 = local112;
    local231 = local12;
    local233 = local153;
    local234 = local48;
    local235 = local87;
    local236 = local112;
    local237 = local12;
    if (caml_exception_pointer == 0) {
        *(__size32*)esp_69 = ebx;
        caml_fatal_uncaught_exception(*esp_69, al);
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
    *(__size32*)esp_69 = ebx;
    ecx = caml_raise_exception(al, cl, dl); /* Warning: also results in edx, ebx, esp_7, ebp */
    *(__size32*)(esp_7 - 4) = ebp;
    if (*0x80743a4 == 0) {
        array_bound_error_msg = 0x14fc;
        global_0x080740e7 = 0;
        array_bound_error_bucket = 0x800;
        global_0x080743ac = 0x806da08;
        global_0x080743b0 = 0x80740d4;
        array_bound_error_bucket_inited = 1;
        *(__size32*)(esp_7 - 20) = 0x80740ec;
        *(__size32*)(esp_7 - 24) = 0x80740d0;
        *(__size32*)(esp_7 - 28) = 4;
        caml_page_table_add(*(esp_7 - 28), *(esp_7 - 24), *(esp_7 - 20), ecx, edx);
        array_bound_error_bucket_inited = 1;
    }
    *(__size32*)(esp_7 - 28) = 0x80743ac;
    ebx = caml_raise(*(esp_7 - 64), *(esp_7 - 28), ebx, esp_7 - 4); /* Warning: also results in esp_10, ebp */
    *(__size32*)(esp_10 - 4) = ebp;
    *(__size32*)(esp_10 - 28) = 0x806dad8;
    ebx = caml_raise(*(esp_10 - 64), *(esp_10 - 28), ebx, esp_10 - 4); /* Warning: also results in esp_13, ebp */
    *(__size32*)(esp_13 - 4) = ebp;
    *(__size32*)(esp_13 - 28) = 0x806d9c4;
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
        local224 = edx;
        do {
            edx_1 = local224;
            ecx = *(ebx + edx_1 * 4);
            *(__size32*)(eax + edx_1 * 4 + 4) = ecx;
            edx_2 = edx_1 + 1;
            local224 = edx_2;
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
    *(__size32*)(esp_22 - 28) = 0x806d9cc;
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
    *(__size32*)(esp_31 - 28) = 0x806da08;
    esp_34 = caml_raise_with_string(*(esp_31 - 24), esp_31 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_34 - 4) = ebp;
    eax = *(esp_34 + 4);
    *(__size32*)(esp_34 - 24) = eax;
    *(__size32*)(esp_34 - 28) = 0x806d9ec;
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
    *(__size32*)(esp_40 - 28) = 0x806dae0;
    esp_43 = caml_raise_constant(*(esp_40 - 28), esp_40 - 4, *(esp_40 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_43 - 4) = ebp;
    *(__size32*)(esp_43 - 28) = 0x806da78;
    esp_46 = caml_raise_constant(*(esp_43 - 28), esp_43 - 4, *(esp_43 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_46 - 4) = ebp;
    *(__size32*)(esp_46 - 28) = 0x806da50;
    esp_49 = caml_raise_constant(*(esp_46 - 28), esp_46 - 4, *(esp_46 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_49 - 4) = ebp;
    *(__size32*)(esp_49 - 28) = 0x806da30;
    cl = caml_raise_constant(*(esp_49 - 28), esp_49 - 4, *(esp_49 - 176)); /* Warning: also results in dl, ecx, edx, ebx, esp_52, ebp, esi, edi */
    *(__size32*)(esp_52 - 4) = ebp;
    ebp = esp_52 - 4;
    *(unsigned int*)(esp_52 - 8) = edi;
    *(unsigned int*)(esp_52 - 12) = esi;
    *(unsigned int*)(esp_52 - 16) = ebx;
    esp_55 = esp_52 - 60;
    eax = *(esp_52 + 8);
    al = (unsigned char) eax;
    local225 = esp_55;
    local232 = esp_55;
    if (eax != 0) {
        edx = *(esp_52 + 16);
        *(__size32*)(esp_52 - 36) = edx;
        edx = *(esp_52 + 12);
        *(__size32*)(esp_52 - 32) = eax;
        do {
bb0x805c3a7:
            esp_68 = local232;
            local132 = local233;
            local39 = local234;
            local74 = local235;
            local103 = local236;
            local11 = local237;
            esi = *(global_0x0807655c + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local225 = esp_68;
            local226 = local132;
            local228 = local39;
            local229 = local74;
            local230 = local103;
            local231 = local11;
            local232 = esp_68;
            local233 = local132;
            local234 = local39;
            local235 = local74;
            local236 = local103;
            local237 = local11;
            local238 = eax;
            local239 = esp_68;
            local241 = local39;
            local242 = local74;
            local243 = local103;
            local245 = esp_68;
            local246 = local132;
            local247 = local39;
            local248 = local74;
            local249 = local103;
            local250 = local11;
            if (*ebx != edx) {
                do {
                    eax_1 = local238;
                    eax_2 = eax_1 + 1 & esi;
                    ebx = *(caml_frame_descriptors + (eax_1 + 1 & esi) * 4);
                    local238 = eax_2;
                } while (*ebx != edx);
            }
            local180 = *(ebx + 4) + 1;
            local227 = local180;
            if (*(ebx + 4) != -1) {
                esi = *(unsigned short*)(ebx + 6);
                local240 = esi;
                if ((int)esi > 0) {
                    edi = ebx + 8;
                    *(__size32*)(ebp - 36) = ebx;
                    ebx = *(ebp + 8);
                    for(;;) {
                        esp_67 = local239;
                        esi = local240;
                        local38 = local241;
                        local71 = local242;
                        local102 = local243;
                        eax_4 = *(unsigned short*)edi;
                        if (((unsigned char) eax_4 & 0x1) == 0) {
                            eax_7 = eax_4 + *(ebp - 28);
                            flags = ADDFLAGS32(eax_4, *(ebp - 28), eax_7);
                            local244 = eax_7;
                        }
                        else {
                            flags = SARFLAGS((int)eax_4 >> 1, eax_4, 1);
                            edx = *(ebp - 32);
                            eax = edx + ((int)eax_4 >> 1) * 4;
                            local244 = eax;
                        }
                        eax = local244;
                        *(__size32*)(esp_67 + 4) = eax;
                        eax = *eax;
                        *(__size32*)esp_67 = eax;
                        (*ebx)((unsigned char) eax, cl, dl, eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, local38, local71, local102, param2);
                        local239 = esp_58;
                        local241 = local40;
                        local242 = local75;
                        local243 = local104;
                        local245 = esp_58;
                        local246 = local133;
                        local247 = local40;
                        local248 = local75;
                        local249 = local104;
                        local250 = local8;
                        esi_4 = esi_1 - 1;
                        local240 = esi_4;
                        if ((int)esi_1 <= 1) {
                            break;
                        }
                        edi += 2;
                    }
                    ebx = *(ebp - 36);
                }
                esp_71 = local245;
                local137 = local246;
                local56 = local247;
                local88 = local248;
                local115 = local249;
                local22 = local250;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local232 = esp_71;
                local233 = local137;
                local234 = local56;
                local235 = local88;
                local236 = local115;
                local237 = local22;
                goto bb0x805c3a7;
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
    esp_73 = local225;
    local141 = local226;
    local183 = local227;
    *(__size32*)(esp_65 - 4) = local228;
    *(__size32*)(esp_65 - 8) = local229;
    *(esp_65 - 32) = local230;
    local19 = local231;
    local279 = esp_73;
    local280 = local141;
    local281 = local183;
    local282 = *(esp_65 - 4);
    local283 = *(esp_65 - 8);
    local284 = *(esp_65 - 32);
    local285 = local19;
    local286 = esp_73;
    if (*(ebp + 24) != 0) {
        esi = *(ebp + 24);
        *(__size32*)(ebp - 28) = 0;
        do {
            esp_75 = local279;
            local139 = local280;
            local181 = local281;
            local44 = local282;
            local79 = local283;
            local108 = local284;
            local17 = local285;
            edi = 0;
            local264 = esp_75;
            local265 = edi;
            local266 = local139;
            local267 = local181;
            local268 = local44;
            local269 = local79;
            local270 = local108;
            local271 = local17;
            local272 = esp_75;
            local273 = local139;
            local274 = local181;
            local275 = local44;
            local276 = local79;
            local277 = local108;
            local278 = local17;
            if (*(esi + 4) > 0) {
                do {
                    esp_70 = local264;
                    edi = local265;
                    local143 = local266;
                    local185 = local267;
                    local43 = local268;
                    local78 = local269;
                    local107 = local270;
                    local21 = local271;
                    ebx = *(ebp - 28);
                    local251 = ebx;
                    local252 = esp_70;
                    local253 = local43;
                    local254 = local78;
                    local255 = local107;
                    local256 = ebx;
                    local257 = esp_70;
                    local258 = local143;
                    local259 = local185;
                    local260 = local43;
                    local261 = local78;
                    local262 = local107;
                    local263 = local21;
                    if (*(esi + 8) > 0) {
                        do {
                            ebx = local251;
                            esp_64 = local252;
                            local42 = local253;
                            local77 = local254;
                            local106 = local255;
                            eax_9 = ebx * 4 + *(esi + edi * 4 + 12);
                            *(__size32*)(esp_64 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_64 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, cl, dl, eax_12, ecx, edx, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), local42, local77, local106, param2);
                            local252 = esp_61;
                            local253 = local46;
                            local254 = local81;
                            local255 = local110;
                            local257 = esp_61;
                            local258 = local149;
                            local259 = local193;
                            local260 = local46;
                            local261 = local81;
                            local262 = local110;
                            local263 = local13;
                            ebx_6 = ebx_3 + 1;
                            local251 = ebx_6;
                            local256 = ebx_6;
                        } while (*(esi + 8) > ebx_3 + 1);
                    }
                    ebx = local256;
                    esp_72 = local257;
                    edi_1 = edi;
                    local140 = local258;
                    local182 = local259;
                    local45 = local260;
                    local80 = local261;
                    local109 = local262;
                    local18 = local263;
                    edi_2 = edi_1 + 1;
                    local264 = esp_72;
                    local265 = edi_2;
                    local266 = local140;
                    local267 = local182;
                    local268 = local45;
                    local269 = local80;
                    local270 = local109;
                    local271 = local18;
                    local272 = esp_72;
                    local273 = local140;
                    local274 = local182;
                    local275 = local45;
                    local276 = local80;
                    local277 = local109;
                    local278 = local18;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_74 = local272;
            local142 = local273;
            local184 = local274;
            local58 = local275;
            local92 = local276;
            local114 = local277;
            local20 = local278;
            esi = *esi;
            local279 = esp_74;
            local280 = local142;
            local281 = local184;
            local282 = local58;
            local283 = local92;
            local284 = local114;
            local285 = local20;
            local286 = esp_74;
        } while (esi == 0);
    }
    esp = local286;
    ebx = *(esp + 44);
    esi = *(esp + 48);
    ebp = *(esp + 56);
    return ecx; /* WARNING: Also returning: edx := edx, ebx := ebx, ebp := ebp, esi := esi */
}

/** address: 0x0805f8b1 */
__size32 caml_alloc_small(unsigned int param1, __size32 param2)
{
    unsigned int eax; 		// r24
    __size32 ebx; 		// r27
    __size32 esi; 		// r30
    __size32 esp_1; 		// r28{9}
    __size32 esp_4; 		// r28{4}
    union { __size32; __size32 *; } esp_7; 		// r28{12}
    __size32 esp_8; 		// r28{1}
    union { __size32 *; __size32; } local4; 		// esp_7{12}

    esp_4 = esp_8 - 12;
    eax = *(global_0x0807655c + 0xfd8) - param1 * 4 - 4;
    *(unsigned int*)(global_0x0807655c + 0xfd8) = eax;
    local4 = esp_4;
    if (eax < *(global_0x0807655c + 0xfdc)) {
        *(unsigned int*)(global_0x0807655c + 0xfd8) = eax + param1 * 4 + 4;
        esp_1 = esp_8 - 16;
        caml_minor_collection();
        local4 = esp_1;
        *(__size32*)(global_0x0807655c + 0xfd8) = *(global_0x0807655c + 0xfd8) - param1 * 4 - 4;
    }
    esp_7 = local4;
    eax = *0x8077534;
    *(__size32*)eax = param2 + (param1 << 10) + 768;
    eax = *(global_0x0807655c + 0xfd8);
    ebx = *esp_7;
    esi = *(esp_7 + 4);
    return eax + 4; /* WARNING: Also returning: ebx := ebx, esi := esi */
}

/** address: 0x0805c1c7 */
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
    union { __size32; __size32 *; } esp_43; 		// r28{183}
    union { __size32; __size32 *; } esp_44; 		// r28{183}
    union { __size32; __size32 *; } esp_45; 		// r28{183}
    __size32 esp_46; 		// r28{227}
    __size32 esp_47; 		// r28{227}
    __size32 esp_48; 		// r28{227}
    __size32 esp_49; 		// r28{141}
    __size32 esp_5; 		// r28{32}
    __size32 esp_50; 		// r28{141}
    __size32 esp_51; 		// r28{141}
    __size32 esp_52; 		// r28{114}
    __size32 esp_53; 		// r28{114}
    __size32 esp_54; 		// r28{114}
    __size32 esp_55; 		// r28{391}
    __size32 esp_56; 		// r28{391}
    __size32 esp_57; 		// r28{391}
    union { __size32; __size32 *; } esp_58; 		// r28{266}
    union { __size32; __size32 *; } esp_59; 		// r28{266}
    __size32 esp_6; 		// r28{32}
    union { __size32; __size32 *; } esp_60; 		// r28{266}
    __size32 esp_61; 		// r28{299}
    __size32 esp_62; 		// r28{299}
    __size32 esp_63; 		// r28{299}
    __size32 esp_64; 		// r28{329}
    __size32 esp_65; 		// r28{329}
    __size32 esp_66; 		// r28{329}
    __size32 esp_67; 		// r28{361}
    __size32 esp_68; 		// r28{1}
    __size32 esp_69; 		// r28{1}
    __size32 *esp_7; 		// r28{37}
    __size32 *esp_8; 		// r28{37}
    __size32 *esp_9; 		// r28{37}
    int local0; 		// m[esp - 4]
    int local1; 		// m[esp - 108]
    int local10; 		// m[esp - 76]
    int local100; 		// m[esp_68 - 28]{289}
    __size32 local101; 		// m[esp_68 - 28]{119}
    __size32 local102; 		// m[esp_68 - 28]{232}
    __size32 local103; 		// m[esp_68 - 28]{397}
    __size32 local104; 		// m[esp_68 - 28]{397}
    __size32 local105; 		// m[esp_68 - 28]{271}
    __size32 local106; 		// m[esp_68 - 28]{271}
    __size32 local107; 		// m[esp_68 - 28]{306}
    __size32 local108; 		// m[esp_68 - 28]{306}
    __size32 local109; 		// m[esp_68 - 28]{336}
    int local11; 		// m[esp - 68]
    __size32 local110; 		// m[esp_68 - 28]{336}
    __size32 local111; 		// m[esp_68 - 28]{146}
    __size32 local112; 		// m[esp_68 - 28]{146}
    __size32 local113; 		// m[esp_68 - 28]{188}
    __size32 local114; 		// m[esp_68 - 28]{188}
    __size32 local115; 		// m[esp_68 - 28]{232}
    __size32 local116; 		// m[esp_68 - 28]{232}
    __size32 local117; 		// m[esp_68 - 32]{12}
    __size32 local118; 		// m[esp_68 - 32]{12}
    __size32 local119; 		// m[esp_68 - 32]{12}
    int local12; 		// m[esp - 104]
    __size32 local120; 		// m[esp_68 - 32]{189}
    __size32 local121; 		// m[esp_68 - 32]{147}
    int local122; 		// m[esp_68 - 32]{218}
    int local123; 		// m[esp_68 - 32]{218}
    __size32 local124; 		// m[esp_68 - 32]{272}
    __size32 local125; 		// m[esp_68 - 32]{337}
    __size32 local126; 		// m[esp_68 - 32]{398}
    __size32 local127; 		// m[esp_68 - 32]{307}
    int local128; 		// m[esp_68 - 32]{289}
    int local129; 		// m[esp_68 - 32]{289}
    int local13; 		// m[esp - 112]
    __size32 local130; 		// m[esp_68 - 32]{307}
    __size32 local131; 		// m[esp_68 - 32]{307}
    __size32 local132; 		// m[esp_68 - 32]{337}
    __size32 local133; 		// m[esp_68 - 32]{337}
    __size32 local134; 		// m[esp_68 - 32]{120}
    __size32 local135; 		// m[esp_68 - 32]{233}
    __size32 local136; 		// m[esp_68 - 32]{398}
    __size32 local137; 		// m[esp_68 - 32]{398}
    __size32 local138; 		// m[esp_68 - 32]{189}
    __size32 local139; 		// m[esp_68 - 32]{189}
    int local14; 		// m[esp - 144]
    __size32 local140; 		// m[esp_68 - 32]{233}
    __size32 local141; 		// m[esp_68 - 32]{233}
    __size32 local142; 		// m[esp_68 - 32]{147}
    __size32 local143; 		// m[esp_68 - 32]{147}
    __size32 local144; 		// m[esp_68 - 32]{272}
    __size32 local145; 		// m[esp_68 - 32]{272}
    __size32 local146; 		// m[esp_68 - 36]{10}
    __size32 local147; 		// m[esp_68 - 36]{10}
    __size32 local148; 		// m[esp_68 - 36]{10}
    __size32 local149; 		// m[esp_68 - 36]{190}
    __size32 local15; 		// m[esp + 4]
    __size32 local150; 		// m[esp_68 - 36]{148}
    int local151; 		// m[esp_68 - 36]{218}
    int local152; 		// m[esp_68 - 36]{218}
    __size32 local153; 		// m[esp_68 - 36]{273}
    __size32 local154; 		// m[esp_68 - 36]{338}
    __size32 local155; 		// m[esp_68 - 36]{399}
    __size32 local156; 		// m[esp_68 - 36]{308}
    int local157; 		// m[esp_68 - 36]{289}
    int local158; 		// m[esp_68 - 36]{289}
    __size32 local159; 		// m[esp_68 - 36]{190}
    __size32 local16; 		// m[esp + 8]
    __size32 local160; 		// m[esp_68 - 36]{190}
    __size32 local161; 		// m[esp_68 - 36]{234}
    __size32 local162; 		// m[esp_68 - 36]{234}
    __size32 local163; 		// m[esp_68 - 36]{148}
    __size32 local164; 		// m[esp_68 - 36]{148}
    __size32 local165; 		// m[esp_68 - 36]{369}
    __size32 local166; 		// m[esp_68 - 36]{273}
    __size32 local167; 		// m[esp_68 - 36]{273}
    __size32 local168; 		// m[esp_68 - 36]{308}
    __size32 local169; 		// m[esp_68 - 36]{308}
    int local17; 		// m[esp_68 + 4]{218}
    __size32 local170; 		// m[esp_68 - 36]{338}
    __size32 local171; 		// m[esp_68 - 36]{338}
    __size32 local172; 		// m[esp_68 - 36]{399}
    __size32 local173; 		// m[esp_68 - 36]{399}
    __size32 local174; 		// m[esp_68 - 40]{11}
    __size32 local175; 		// m[esp_68 - 40]{11}
    __size32 local176; 		// m[esp_68 - 40]{11}
    __size32 local177; 		// m[esp_68 - 40]{191}
    __size32 local178; 		// m[esp_68 - 40]{149}
    int local179; 		// m[esp_68 - 40]{218}
    int local18; 		// m[esp_68 + 4]{218}
    int local180; 		// m[esp_68 - 40]{218}
    __size32 local181; 		// m[esp_68 - 40]{274}
    __size32 local182; 		// m[esp_68 - 40]{339}
    __size32 local183; 		// m[esp_68 - 40]{400}
    __size32 local184; 		// m[esp_68 - 40]{309}
    int local185; 		// m[esp_68 - 40]{289}
    int local186; 		// m[esp_68 - 40]{289}
    __size32 local187; 		// m[esp_68 - 40]{191}
    __size32 local188; 		// m[esp_68 - 40]{191}
    __size32 local189; 		// m[esp_68 - 40]{235}
    int local19; 		// m[esp_68 + 4]{218}
    __size32 local190; 		// m[esp_68 - 40]{235}
    __size32 local191; 		// m[esp_68 - 40]{370}
    __size32 local192; 		// m[esp_68 - 40]{400}
    __size32 local193; 		// m[esp_68 - 40]{400}
    __size32 local194; 		// m[esp_68 - 40]{339}
    __size32 local195; 		// m[esp_68 - 40]{339}
    __size32 local196; 		// m[esp_68 - 40]{274}
    __size32 local197; 		// m[esp_68 - 40]{274}
    __size32 local198; 		// m[esp_68 - 40]{309}
    __size32 local199; 		// m[esp_68 - 40]{309}
    int local2; 		// m[esp - 44]
    __size32 local20; 		// m[esp_68 + 4]{159}
    __size32 local200; 		// m[esp_68 - 40]{149}
    __size32 local201; 		// m[esp_68 - 40]{149}
    __size32 local202; 		// m[esp_68 - 44]{9}
    __size32 local203; 		// m[esp_68 - 44]{9}
    __size32 local204; 		// m[esp_68 - 44]{9}
    __size32 local205; 		// m[esp_68 - 44]{192}
    __size32 local206; 		// m[esp_68 - 44]{150}
    int local207; 		// m[esp_68 - 44]{218}
    int local208; 		// m[esp_68 - 44]{218}
    __size32 local209; 		// m[esp_68 - 44]{275}
    int local21; 		// m[esp_68 + 4]{289}
    __size32 local210; 		// m[esp_68 - 44]{340}
    __size32 local211; 		// m[esp_68 - 44]{401}
    __size32 local212; 		// m[esp_68 - 44]{310}
    int local213; 		// m[esp_68 - 44]{289}
    int local214; 		// m[esp_68 - 44]{289}
    __size32 local215; 		// m[esp_68 - 44]{236}
    __size32 local216; 		// m[esp_68 - 44]{236}
    __size32 local217; 		// m[esp_68 - 44]{192}
    __size32 local218; 		// m[esp_68 - 44]{192}
    __size32 local219; 		// m[esp_68 - 44]{150}
    int local22; 		// m[esp_68 + 4]{289}
    __size32 local220; 		// m[esp_68 - 44]{150}
    __size32 local221; 		// m[esp_68 - 44]{371}
    __size32 local222; 		// m[esp_68 - 44]{275}
    __size32 local223; 		// m[esp_68 - 44]{275}
    __size32 local224; 		// m[esp_68 - 44]{310}
    __size32 local225; 		// m[esp_68 - 44]{310}
    __size32 local226; 		// m[esp_68 - 44]{340}
    __size32 local227; 		// m[esp_68 - 44]{340}
    __size32 local228; 		// m[esp_68 - 44]{401}
    __size32 local229; 		// m[esp_68 - 44]{401}
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
    __size32 local245; 		// m[esp_68 - 48]{237}
    __size32 local246; 		// m[esp_68 - 48]{237}
    __size32 local247; 		// m[esp_68 - 48]{151}
    __size32 local248; 		// m[esp_68 - 48]{151}
    __size32 local249; 		// m[esp_68 - 48]{372}
    __size32 local25; 		// m[esp_68 + 4]{410}
    __size32 local250; 		// m[esp_68 - 48]{276}
    __size32 local251; 		// m[esp_68 - 48]{276}
    __size32 local252; 		// m[esp_68 - 48]{311}
    __size32 local253; 		// m[esp_68 - 48]{311}
    __size32 local254; 		// m[esp_68 - 48]{341}
    __size32 local255; 		// m[esp_68 - 48]{341}
    __size32 local256; 		// m[esp_68 - 48]{402}
    __size32 local257; 		// m[esp_68 - 48]{402}
    __size32 local258; 		// m[esp_68 - 68]{18}
    __size32 local259; 		// m[esp_68 - 68]{18}
    __size32 local26; 		// m[esp_68 + 4]{319}
    __size32 local260; 		// m[esp_68 - 68]{18}
    __size32 local261; 		// m[esp_68 - 68]{194}
    __size32 local262; 		// m[esp_68 - 68]{152}
    int local263; 		// m[esp_68 - 68]{218}
    int local264; 		// m[esp_68 - 68]{218}
    __size32 local265; 		// m[esp_68 - 68]{277}
    __size32 local266; 		// m[esp_68 - 68]{342}
    __size32 local267; 		// m[esp_68 - 68]{403}
    __size32 local268; 		// m[esp_68 - 68]{312}
    int local269; 		// m[esp_68 - 68]{289}
    __size32 local27; 		// m[esp_68 + 4]{132}
    int local270; 		// m[esp_68 - 68]{289}
    __size32 local271; 		// m[esp_68 - 68]{194}
    __size32 local272; 		// m[esp_68 - 68]{194}
    __size32 local273; 		// m[esp_68 - 68]{238}
    __size32 local274; 		// m[esp_68 - 68]{238}
    __size32 local275; 		// m[esp_68 - 68]{152}
    __size32 local276; 		// m[esp_68 - 68]{152}
    __size32 local277; 		// m[esp_68 - 68]{373}
    __size32 local278; 		// m[esp_68 - 68]{277}
    __size32 local279; 		// m[esp_68 - 68]{277}
    __size32 local28; 		// m[esp_68 + 4]{380}
    __size32 local280; 		// m[esp_68 - 68]{312}
    __size32 local281; 		// m[esp_68 - 68]{312}
    __size32 local282; 		// m[esp_68 - 68]{342}
    __size32 local283; 		// m[esp_68 - 68]{342}
    __size32 local284; 		// m[esp_68 - 68]{403}
    __size32 local285; 		// m[esp_68 - 68]{403}
    __size32 local286; 		// m[esp_68 - 72]{16}
    __size32 local287; 		// m[esp_68 - 72]{16}
    __size32 local288; 		// m[esp_68 - 72]{16}
    __size32 local289; 		// m[esp_68 - 72]{195}
    __size32 local29; 		// m[esp_68 + 4]{349}
    __size32 local290; 		// m[esp_68 - 72]{153}
    int local291; 		// m[esp_68 - 72]{218}
    int local292; 		// m[esp_68 - 72]{218}
    __size32 local293; 		// m[esp_68 - 72]{278}
    __size32 local294; 		// m[esp_68 - 72]{343}
    __size32 local295; 		// m[esp_68 - 72]{404}
    __size32 local296; 		// m[esp_68 - 72]{313}
    int local297; 		// m[esp_68 - 72]{289}
    int local298; 		// m[esp_68 - 72]{289}
    __size32 local299; 		// m[esp_68 - 72]{195}
    int local3; 		// m[esp - 36]
    __size32 local30; 		// m[esp_68 + 4]{245}
    __size32 local300; 		// m[esp_68 - 72]{195}
    __size32 local301; 		// m[esp_68 - 72]{239}
    __size32 local302; 		// m[esp_68 - 72]{239}
    __size32 local303; 		// m[esp_68 - 72]{153}
    __size32 local304; 		// m[esp_68 - 72]{153}
    __size32 local305; 		// m[esp_68 - 72]{374}
    __size32 local306; 		// m[esp_68 - 72]{278}
    __size32 local307; 		// m[esp_68 - 72]{278}
    __size32 local308; 		// m[esp_68 - 72]{313}
    __size32 local309; 		// m[esp_68 - 72]{313}
    __size32 local31; 		// m[esp_68 + 4]{245}
    __size32 local310; 		// m[esp_68 - 72]{343}
    __size32 local311; 		// m[esp_68 - 72]{343}
    __size32 local312; 		// m[esp_68 - 72]{404}
    __size32 local313; 		// m[esp_68 - 72]{404}
    __size32 local314; 		// m[esp_68 - 76]{17}
    __size32 local315; 		// m[esp_68 - 76]{17}
    __size32 local316; 		// m[esp_68 - 76]{17}
    __size32 local317; 		// m[esp_68 - 76]{196}
    __size32 local318; 		// m[esp_68 - 76]{154}
    int local319; 		// m[esp_68 - 76]{218}
    __size32 local32; 		// m[esp_68 + 4]{410}
    int local320; 		// m[esp_68 - 76]{218}
    __size32 local321; 		// m[esp_68 - 76]{279}
    __size32 local322; 		// m[esp_68 - 76]{344}
    __size32 local323; 		// m[esp_68 - 76]{405}
    __size32 local324; 		// m[esp_68 - 76]{314}
    int local325; 		// m[esp_68 - 76]{289}
    int local326; 		// m[esp_68 - 76]{289}
    __size32 local327; 		// m[esp_68 - 76]{196}
    __size32 local328; 		// m[esp_68 - 76]{196}
    __size32 local329; 		// m[esp_68 - 76]{240}
    __size32 local33; 		// m[esp_68 + 4]{410}
    __size32 local330; 		// m[esp_68 - 76]{240}
    __size32 local331; 		// m[esp_68 - 76]{154}
    __size32 local332; 		// m[esp_68 - 76]{154}
    __size32 local333; 		// m[esp_68 - 76]{375}
    __size32 local334; 		// m[esp_68 - 76]{279}
    __size32 local335; 		// m[esp_68 - 76]{279}
    __size32 local336; 		// m[esp_68 - 76]{314}
    __size32 local337; 		// m[esp_68 - 76]{314}
    __size32 local338; 		// m[esp_68 - 76]{344}
    __size32 local339; 		// m[esp_68 - 76]{344}
    __size32 local34; 		// m[esp_68 + 4]{159}
    __size32 local340; 		// m[esp_68 - 76]{405}
    __size32 local341; 		// m[esp_68 - 76]{405}
    __size32 local342; 		// m[esp_68 - 80]{14}
    __size32 local343; 		// m[esp_68 - 80]{14}
    __size32 local344; 		// m[esp_68 - 80]{14}
    __size32 local345; 		// m[esp_68 - 80]{197}
    __size32 local346; 		// m[esp_68 - 80]{155}
    int local347; 		// m[esp_68 - 80]{218}
    int local348; 		// m[esp_68 - 80]{218}
    __size32 local349; 		// m[esp_68 - 80]{280}
    __size32 local35; 		// m[esp_68 + 4]{159}
    __size32 local350; 		// m[esp_68 - 80]{345}
    __size32 local351; 		// m[esp_68 - 80]{406}
    __size32 local352; 		// m[esp_68 - 80]{315}
    int local353; 		// m[esp_68 - 80]{289}
    int local354; 		// m[esp_68 - 80]{289}
    __size32 local355; 		// m[esp_68 - 80]{197}
    __size32 local356; 		// m[esp_68 - 80]{197}
    __size32 local357; 		// m[esp_68 - 80]{241}
    __size32 local358; 		// m[esp_68 - 80]{241}
    __size32 local359; 		// m[esp_68 - 80]{155}
    __size32 local36; 		// m[esp_68 + 4]{319}
    __size32 local360; 		// m[esp_68 - 80]{155}
    __size32 local361; 		// m[esp_68 - 80]{376}
    __size32 local362; 		// m[esp_68 - 80]{280}
    __size32 local363; 		// m[esp_68 - 80]{280}
    __size32 local364; 		// m[esp_68 - 80]{315}
    __size32 local365; 		// m[esp_68 - 80]{315}
    __size32 local366; 		// m[esp_68 - 80]{345}
    __size32 local367; 		// m[esp_68 - 80]{345}
    __size32 local368; 		// m[esp_68 - 80]{406}
    __size32 local369; 		// m[esp_68 - 80]{406}
    __size32 local37; 		// m[esp_68 + 4]{319}
    __size32 local370; 		// m[esp_68 - 104]{19}
    __size32 local371; 		// m[esp_68 - 104]{19}
    __size32 local372; 		// m[esp_68 - 104]{19}
    __size32 local373; 		// m[esp_68 - 104]{198}
    __size32 local374; 		// m[esp_68 - 104]{156}
    int local375; 		// m[esp_68 - 104]{218}
    int local376; 		// m[esp_68 - 104]{218}
    __size32 local377; 		// m[esp_68 - 104]{281}
    __size32 local378; 		// m[esp_68 - 104]{346}
    __size32 local379; 		// m[esp_68 - 104]{407}
    __size32 local38; 		// m[esp_68 + 8]{4}
    __size32 local380; 		// m[esp_68 - 104]{316}
    int local381; 		// m[esp_68 - 104]{289}
    int local382; 		// m[esp_68 - 104]{289}
    __size32 local383; 		// m[esp_68 - 104]{198}
    __size32 local384; 		// m[esp_68 - 104]{198}
    __size32 local385; 		// m[esp_68 - 104]{242}
    __size32 local386; 		// m[esp_68 - 104]{242}
    __size32 local387; 		// m[esp_68 - 104]{156}
    __size32 local388; 		// m[esp_68 - 104]{156}
    __size32 local389; 		// m[esp_68 - 104]{377}
    __size32 local39; 		// m[esp_68 + 8]{4}
    __size32 local390; 		// m[esp_68 - 104]{281}
    __size32 local391; 		// m[esp_68 - 104]{281}
    __size32 local392; 		// m[esp_68 - 104]{316}
    __size32 local393; 		// m[esp_68 - 104]{316}
    __size32 local394; 		// m[esp_68 - 104]{346}
    __size32 local395; 		// m[esp_68 - 104]{346}
    __size32 local396; 		// m[esp_68 - 104]{407}
    __size32 local397; 		// m[esp_68 - 104]{407}
    __size32 local398; 		// m[esp_68 - 108]{24}
    __size32 local399; 		// m[esp_68 - 108]{24}
    int local4; 		// m[esp - 40]
    int local40; 		// m[esp_68 + 8]{218}
    __size32 local400; 		// m[esp_68 - 108]{24}
    __size32 local401; 		// m[esp_68 - 108]{199}
    __size32 local402; 		// m[esp_68 - 108]{157}
    int local403; 		// m[esp_68 - 108]{218}
    int local404; 		// m[esp_68 - 108]{218}
    __size32 local405; 		// m[esp_68 - 108]{282}
    __size32 local406; 		// m[esp_68 - 108]{347}
    __size32 local407; 		// m[esp_68 - 108]{408}
    __size32 local408; 		// m[esp_68 - 108]{317}
    int local409; 		// m[esp_68 - 108]{289}
    int local41; 		// m[esp_68 + 8]{218}
    int local410; 		// m[esp_68 - 108]{289}
    __size32 local411; 		// m[esp_68 - 108]{199}
    __size32 local412; 		// m[esp_68 - 108]{199}
    __size32 local413; 		// m[esp_68 - 108]{243}
    __size32 local414; 		// m[esp_68 - 108]{243}
    __size32 local415; 		// m[esp_68 - 108]{157}
    __size32 local416; 		// m[esp_68 - 108]{157}
    __size32 local417; 		// m[esp_68 - 108]{378}
    __size32 local418; 		// m[esp_68 - 108]{282}
    __size32 local419; 		// m[esp_68 - 108]{282}
    int local42; 		// m[esp_68 + 8]{218}
    __size32 local420; 		// m[esp_68 - 108]{317}
    __size32 local421; 		// m[esp_68 - 108]{317}
    __size32 local422; 		// m[esp_68 - 108]{347}
    __size32 local423; 		// m[esp_68 - 108]{347}
    __size32 local424; 		// m[esp_68 - 108]{408}
    __size32 local425; 		// m[esp_68 - 108]{408}
    unsigned int local426; 		// m[esp_68 - 112]{25}
    unsigned int local427; 		// m[esp_68 - 112]{25}
    unsigned int local428; 		// m[esp_68 - 112]{25}
    unsigned int local429; 		// m[esp_68 - 112]{200}
    __size32 local43; 		// m[esp_68 + 8]{160}
    unsigned int local430; 		// m[esp_68 - 112]{158}
    int local431; 		// m[esp_68 - 112]{218}
    int local432; 		// m[esp_68 - 112]{218}
    unsigned int local433; 		// m[esp_68 - 112]{283}
    unsigned int local434; 		// m[esp_68 - 112]{348}
    unsigned int local435; 		// m[esp_68 - 112]{409}
    unsigned int local436; 		// m[esp_68 - 112]{318}
    int local437; 		// m[esp_68 - 112]{289}
    int local438; 		// m[esp_68 - 112]{289}
    unsigned int local439; 		// m[esp_68 - 112]{200}
    int local44; 		// m[esp_68 + 8]{289}
    unsigned int local440; 		// m[esp_68 - 112]{200}
    unsigned int local441; 		// m[esp_68 - 112]{244}
    unsigned int local442; 		// m[esp_68 - 112]{244}
    unsigned int local443; 		// m[esp_68 - 112]{158}
    unsigned int local444; 		// m[esp_68 - 112]{158}
    unsigned int local445; 		// m[esp_68 - 112]{379}
    unsigned int local446; 		// m[esp_68 - 112]{283}
    unsigned int local447; 		// m[esp_68 - 112]{283}
    unsigned int local448; 		// m[esp_68 - 112]{318}
    unsigned int local449; 		// m[esp_68 - 112]{318}
    int local45; 		// m[esp_68 + 8]{289}
    unsigned int local450; 		// m[esp_68 - 112]{348}
    unsigned int local451; 		// m[esp_68 - 112]{348}
    unsigned int local452; 		// m[esp_68 - 112]{409}
    unsigned int local453; 		// m[esp_68 - 112]{409}
    int local454; 		// tmpb{144}
    int local455; 		// tmpb{218}
    int local456; 		// tmpb{218}
    int local457; 		// tmpb{218}
    int local458; 		// tmpb{230}
    int local459; 		// tmpb{218}
    __size32 local46; 		// m[esp_68 + 8]{411}
    int local460; 		// tmpb{394}
    int local461; 		// tmpb{303}
    int local462; 		// tmpb{116}
    int local463; 		// tmpb{364}
    int local464; 		// tmpb{333}
    int local465; 		// tmpb{394}
    int local466; 		// tmpb{303}
    int local467; 		// tmpb{116}
    int local468; 		// tmpb{364}
    int local469; 		// tmpb{333}
    __size32 local47; 		// m[esp_68 + 8]{320}
    int local470; 		// tmpb{289}
    int local471; 		// tmpb{289}
    int local472; 		// tmpb{289}
    int local473; 		// tmpb{230}
    int local474; 		// tmpb{230}
    int local475; 		// tmpb{230}
    int local476; 		// tmpb{144}
    int local477; 		// tmpb{144}
    int local478; 		// tmpb{144}
    int local479; 		// tmpb{116}
    __size32 local48; 		// m[esp_68 + 8]{133}
    int local480; 		// tmpb{303}
    int local481; 		// tmpb{303}
    int local482; 		// tmpb{303}
    int local483; 		// tmpb{333}
    int local484; 		// tmpb{364}
    int local485; 		// tmpb{394}
    int local486; 		// tmpb{394}
    int local487; 		// tmpb{394}
    int local488; 		// tmpb{218}
    int local489; 		// tmpb{144}
    __size32 local49; 		// m[esp_68 + 8]{381}
    int local490; 		// tmpb{5}
    int local491; 		// tmpb{5}
    __size16 local492; 		// tmph{171}
    __size16 local493; 		// tmph{395}
    __size16 local494; 		// tmph{304}
    __size16 local495; 		// tmph{117}
    __size16 local496; 		// tmph{365}
    __size16 local497; 		// tmph{334}
    __size16 local498; 		// tmph{171}
    __size16 local499; 		// tmph{395}
    int local5; 		// m[esp - 32]
    __size32 local50; 		// m[esp_68 + 8]{350}
    __size16 local500; 		// tmph{304}
    __size16 local501; 		// tmph{117}
    __size16 local502; 		// tmph{365}
    __size16 local503; 		// tmph{334}
    int local504; 		// tmph{289}
    int local505; 		// tmph{289}
    int local506; 		// tmph{289}
    __size16 local507; 		// tmph{117}
    __size16 local508; 		// tmph{304}
    __size16 local509; 		// tmph{304}
    __size32 local51; 		// m[esp_68 + 8]{246}
    __size16 local510; 		// tmph{304}
    __size16 local511; 		// tmph{334}
    __size16 local512; 		// tmph{365}
    __size16 local513; 		// tmph{395}
    __size16 local514; 		// tmph{395}
    __size16 local515; 		// tmph{395}
    int local516; 		// tmph{289}
    __size16 local517; 		// tmph{395}
    __size16 local518; 		// tmph{304}
    __size16 local519; 		// tmph{117}
    __size32 local52; 		// m[esp_68 + 8]{246}
    __size16 local520; 		// tmph{365}
    __size16 local521; 		// tmph{334}
    __size16 local522; 		// tmph{171}
    __size16 local523; 		// tmph{6}
    __size16 local524; 		// tmph{6}
    __size32 local525; 		// esp_52{114}
    int local526; 		// local462{116}
    __size16 local527; 		// local495{117}
    __size32 local528; 		// m[esp_68 - 4]{118}
    __size32 local529; 		// local101{119}
    __size32 local53; 		// m[esp_68 + 8]{160}
    __size32 local530; 		// local134{120}
    __size32 local531; 		// m[esp_68 - 36]{121}
    __size32 local532; 		// m[esp_68 - 40]{122}
    __size32 local533; 		// m[esp_68 - 44]{123}
    __size32 local534; 		// m[esp_68 - 48]{124}
    __size32 local535; 		// m[esp_68 - 68]{125}
    __size32 local536; 		// m[esp_68 - 72]{126}
    __size32 local537; 		// m[esp_68 - 76]{127}
    __size32 local538; 		// m[esp_68 - 80]{128}
    __size32 local539; 		// m[esp_68 - 104]{129}
    __size32 local54; 		// m[esp_68 + 8]{160}
    __size32 local540; 		// m[esp_68 - 108]{130}
    unsigned int local541; 		// m[esp_68 - 112]{131}
    __size32 local542; 		// esp_49{141}
    int local543; 		// local454{144}
    __size32 local544; 		// local63{145}
    __size32 local545; 		// local92{146}
    __size32 local546; 		// local121{147}
    __size32 local547; 		// local150{148}
    __size32 local548; 		// local178{149}
    __size32 local549; 		// local206{150}
    __size32 local55; 		// m[esp_68 + 8]{320}
    __size32 local550; 		// local234{151}
    __size32 local551; 		// local262{152}
    __size32 local552; 		// local290{153}
    __size32 local553; 		// local318{154}
    __size32 local554; 		// local346{155}
    __size32 local555; 		// local374{156}
    __size32 local556; 		// local402{157}
    unsigned int local557; 		// local430{158}
    __size32 local558; 		// local20{159}
    __size32 local559; 		// local43{160}
    __size32 local56; 		// m[esp_68 + 8]{320}
    int local560; 		// eax_1{166}
    union { __size32 *; __size32; } local561; 		// esp_43{183}
    unsigned int local562; 		// esi{185}
    __size32 local563; 		// local62{187}
    __size32 local564; 		// local91{188}
    __size32 local565; 		// local120{189}
    __size32 local566; 		// local149{190}
    __size32 local567; 		// local177{191}
    __size32 local568; 		// local205{192}
    __size32 local569; 		// local233{193}
    __size32 local57; 		// m[esp_68 + 8]{411}
    __size32 local570; 		// local261{194}
    __size32 local571; 		// local289{195}
    __size32 local572; 		// local317{196}
    __size32 local573; 		// local345{197}
    __size32 local574; 		// local373{198}
    __size32 local575; 		// local401{199}
    unsigned int local576; 		// local429{200}
    union { __size32 *; unsigned int; } local577; 		// eax{209}
    __size32 local578; 		// esp_46{227}
    int local579; 		// local458{230}
    __size32 local58; 		// m[esp_68 + 8]{411}
    __size32 local580; 		// local75{231}
    __size32 local581; 		// local102{232}
    __size32 local582; 		// local135{233}
    __size32 local583; 		// local161{234}
    __size32 local584; 		// local189{235}
    __size32 local585; 		// local215{236}
    __size32 local586; 		// local245{237}
    __size32 local587; 		// local273{238}
    __size32 local588; 		// local301{239}
    __size32 local589; 		// local329{240}
    __size32 local59; 		// m[esp_68 - 4]{8}
    __size32 local590; 		// local357{241}
    __size32 local591; 		// local385{242}
    __size32 local592; 		// local413{243}
    unsigned int local593; 		// local441{244}
    __size32 local594; 		// local30{245}
    __size32 local595; 		// local51{246}
    unsigned int local596; 		// ebx{265}
    union { __size32 *; __size32; } local597; 		// esp_58{266}
    __size32 local598; 		// local66{270}
    __size32 local599; 		// local95{271}
    int local6; 		// m[esp - 28]
    __size32 local60; 		// m[esp_68 - 4]{8}
    __size32 local600; 		// local124{272}
    __size32 local601; 		// local153{273}
    __size32 local602; 		// local181{274}
    __size32 local603; 		// local209{275}
    __size32 local604; 		// local237{276}
    __size32 local605; 		// local265{277}
    __size32 local606; 		// local293{278}
    __size32 local607; 		// local321{279}
    __size32 local608; 		// local349{280}
    __size32 local609; 		// local377{281}
    __size32 local61; 		// m[esp_68 - 4]{8}
    __size32 local610; 		// local405{282}
    unsigned int local611; 		// local433{283}
    unsigned int local612; 		// ebx{298}
    __size32 local613; 		// esp_61{299}
    int local614; 		// local461{303}
    __size16 local615; 		// local494{304}
    __size32 local616; 		// local69{305}
    __size32 local617; 		// local98{306}
    __size32 local618; 		// local127{307}
    __size32 local619; 		// local156{308}
    __size32 local62; 		// m[esp_68 - 4]{187}
    __size32 local620; 		// local184{309}
    __size32 local621; 		// local212{310}
    __size32 local622; 		// local240{311}
    __size32 local623; 		// local268{312}
    __size32 local624; 		// local296{313}
    __size32 local625; 		// local324{314}
    __size32 local626; 		// local352{315}
    __size32 local627; 		// local380{316}
    __size32 local628; 		// local408{317}
    unsigned int local629; 		// local436{318}
    __size32 local63; 		// m[esp_68 - 4]{145}
    __size32 local630; 		// local26{319}
    __size32 local631; 		// local47{320}
    __size32 local632; 		// esp_64{329}
    unsigned int local633; 		// edi{332}
    int local634; 		// local464{333}
    __size16 local635; 		// local497{334}
    __size32 local636; 		// local67{335}
    __size32 local637; 		// local96{336}
    __size32 local638; 		// local125{337}
    __size32 local639; 		// local154{338}
    int local64; 		// m[esp_68 - 4]{218}
    __size32 local640; 		// local182{339}
    __size32 local641; 		// local210{340}
    __size32 local642; 		// local238{341}
    __size32 local643; 		// local266{342}
    __size32 local644; 		// local294{343}
    __size32 local645; 		// local322{344}
    __size32 local646; 		// local350{345}
    __size32 local647; 		// local378{346}
    __size32 local648; 		// local406{347}
    unsigned int local649; 		// local434{348}
    int local65; 		// m[esp_68 - 4]{218}
    __size32 local650; 		// local29{349}
    __size32 local651; 		// local50{350}
    __size32 local652; 		// esp_67{361}
    int local653; 		// local463{364}
    __size16 local654; 		// local496{365}
    __size32 local655; 		// local74{366}
    __size32 local656; 		// m[esp_68 - 28]{367}
    __size32 local657; 		// m[esp_68 - 32]{368}
    __size32 local658; 		// local165{369}
    __size32 local659; 		// local191{370}
    __size32 local66; 		// m[esp_68 - 4]{270}
    __size32 local660; 		// local221{371}
    __size32 local661; 		// local249{372}
    __size32 local662; 		// local277{373}
    __size32 local663; 		// local305{374}
    __size32 local664; 		// local333{375}
    __size32 local665; 		// local361{376}
    __size32 local666; 		// local389{377}
    __size32 local667; 		// local417{378}
    unsigned int local668; 		// local445{379}
    __size32 local669; 		// local28{380}
    __size32 local67; 		// m[esp_68 - 4]{335}
    __size32 local670; 		// local49{381}
    __size32 local671; 		// esp_55{391}
    int local672; 		// local460{394}
    __size16 local673; 		// local493{395}
    __size32 local674; 		// local68{396}
    __size32 local675; 		// local97{397}
    __size32 local676; 		// local126{398}
    __size32 local677; 		// local155{399}
    __size32 local678; 		// local183{400}
    __size32 local679; 		// local211{401}
    __size32 local68; 		// m[esp_68 - 4]{396}
    __size32 local680; 		// local239{402}
    __size32 local681; 		// local267{403}
    __size32 local682; 		// local295{404}
    __size32 local683; 		// local323{405}
    __size32 local684; 		// local351{406}
    __size32 local685; 		// local379{407}
    __size32 local686; 		// local407{408}
    unsigned int local687; 		// local435{409}
    __size32 local688; 		// local25{410}
    __size32 local689; 		// local46{411}
    __size32 local69; 		// m[esp_68 - 4]{305}
    __size32 local690; 		// esp{415}
    int local7; 		// m[esp - 48]
    int local70; 		// m[esp_68 - 4]{289}
    int local71; 		// m[esp_68 - 4]{289}
    __size32 local72; 		// m[esp_68 - 4]{187}
    __size32 local73; 		// m[esp_68 - 4]{187}
    __size32 local74; 		// m[esp_68 - 4]{366}
    __size32 local75; 		// m[esp_68 - 4]{231}
    __size32 local76; 		// m[esp_68 - 4]{270}
    __size32 local77; 		// m[esp_68 - 4]{270}
    __size32 local78; 		// m[esp_68 - 4]{335}
    __size32 local79; 		// m[esp_68 - 4]{335}
    int local8; 		// m[esp - 80]
    __size32 local80; 		// m[esp_68 - 4]{231}
    __size32 local81; 		// m[esp_68 - 4]{231}
    __size32 local82; 		// m[esp_68 - 4]{305}
    __size32 local83; 		// m[esp_68 - 4]{305}
    __size32 local84; 		// m[esp_68 - 4]{145}
    __size32 local85; 		// m[esp_68 - 4]{145}
    __size32 local86; 		// m[esp_68 - 4]{396}
    __size32 local87; 		// m[esp_68 - 4]{396}
    __size32 local88; 		// m[esp_68 - 28]{13}
    __size32 local89; 		// m[esp_68 - 28]{13}
    int local9; 		// m[esp - 72]
    __size32 local90; 		// m[esp_68 - 28]{13}
    __size32 local91; 		// m[esp_68 - 28]{188}
    __size32 local92; 		// m[esp_68 - 28]{146}
    int local93; 		// m[esp_68 - 28]{218}
    int local94; 		// m[esp_68 - 28]{218}
    __size32 local95; 		// m[esp_68 - 28]{271}
    __size32 local96; 		// m[esp_68 - 28]{336}
    __size32 local97; 		// m[esp_68 - 28]{397}
    __size32 local98; 		// m[esp_68 - 28]{306}
    int local99; 		// m[esp_68 - 28]{289}

    local59 = param3;
    local202 = caml_local_roots;
    local146 = 1;
    local174 = 2;
    local117 = esp_68 + 4;
    local88 = esp_68 + 8;
    local342 = esp_68 - 44;
    caml_local_roots = esp_68 - 80;
    local286 = 1;
    local314 = 1;
    local258 = esp_68 - 48;
    local370 = 0;
    eax = caml_alloc_small(2, 0); /* Warning: also results in ebx */
    local526 = local490;
    local527 = local523;
    local528 = local59;
    local529 = local88;
    local530 = local117;
    local531 = local146;
    local532 = local174;
    local533 = local202;
    local535 = local258;
    local536 = local286;
    local537 = local314;
    local538 = local342;
    local539 = local370;
    local543 = local490;
    local544 = local59;
    local545 = local88;
    local546 = local117;
    local547 = local146;
    local548 = local174;
    local549 = local202;
    local551 = local258;
    local552 = local286;
    local553 = local314;
    local554 = local342;
    local555 = local370;
    local558 = param1;
    local559 = param2;
    local230 = eax;
    *(__size32*)eax = param1;
    *(__size32*)(eax + 4) = param2;
    local398 = eax;
    esp_1 = caml_raise(param1, eax, ebx, esp_68 - 4); /* Warning: also results in ebp */
    local534 = local230;
    local540 = local398;
    local541 = local426;
    local550 = local230;
    local556 = local398;
    local557 = local426;
    *(__size32*)(esp_1 - 4) = ebp;
    eax = *(esp_1 + 4);
    *(__size32*)(esp_1 - 24) = eax;
    *(__size32*)(esp_1 - 28) = 0x806d9cc;
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
    *(__size32*)(esp_10 - 28) = 0x806da08;
    esp_13 = caml_raise_with_string(*(esp_10 - 24), esp_10 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_13 - 4) = ebp;
    eax = *(esp_13 + 4);
    *(__size32*)(esp_13 - 24) = eax;
    *(__size32*)(esp_13 - 28) = 0x806d9ec;
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
    *(__size32*)(esp_19 - 28) = 0x806dae0;
    esp_22 = caml_raise_constant(*(esp_19 - 28), esp_19 - 4, *(esp_19 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_22 - 4) = ebp;
    *(__size32*)(esp_22 - 28) = 0x806da78;
    esp_25 = caml_raise_constant(*(esp_22 - 28), esp_22 - 4, *(esp_22 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_25 - 4) = ebp;
    *(__size32*)(esp_25 - 28) = 0x806da50;
    esp_28 = caml_raise_constant(*(esp_25 - 28), esp_25 - 4, *(esp_25 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_28 - 4) = ebp;
    *(__size32*)(esp_28 - 28) = 0x806da30;
    cl = caml_raise_constant(*(esp_28 - 28), esp_28 - 4, *(esp_28 - 176)); /* Warning: also results in dl, ecx, edx, ebx, esp_31, ebp, esi, edi */
    *(__size32*)(esp_31 - 4) = ebp;
    ebp = esp_31 - 4;
    *(unsigned int*)(esp_31 - 8) = edi;
    *(unsigned int*)(esp_31 - 12) = esi;
    *(unsigned int*)(esp_31 - 16) = ebx;
    esp_34 = esp_31 - 60;
    eax = *(esp_31 + 8);
    al = (unsigned char) eax;
    local525 = esp_34;
    local542 = esp_34;
    if (eax != 0) {
        edx = *(esp_31 + 16);
        *(__size32*)(esp_31 - 36) = edx;
        edx = *(esp_31 + 12);
        *(__size32*)(esp_31 - 32) = eax;
        do {
bb0x805c3a7:
            esp_49 = local542;
            local454 = local543;
            local63 = local544;
            local92 = local545;
            local121 = local546;
            local150 = local547;
            local178 = local548;
            local206 = local549;
            local234 = local550;
            local262 = local551;
            local290 = local552;
            local318 = local553;
            local346 = local554;
            local374 = local555;
            local402 = local556;
            local430 = local557;
            local20 = local558;
            local43 = local559;
            esi = *(global_0x0807655c + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local525 = esp_49;
            local526 = local454;
            local528 = local63;
            local529 = local92;
            local530 = local121;
            local531 = local150;
            local532 = local178;
            local533 = local206;
            local534 = local234;
            local535 = local262;
            local536 = local290;
            local537 = local318;
            local538 = local346;
            local539 = local374;
            local540 = local402;
            local541 = local430;
            local542 = esp_49;
            local543 = local454;
            local544 = local63;
            local545 = local92;
            local546 = local121;
            local547 = local150;
            local548 = local178;
            local549 = local206;
            local550 = local234;
            local551 = local262;
            local552 = local290;
            local553 = local318;
            local554 = local346;
            local555 = local374;
            local556 = local402;
            local557 = local430;
            local558 = local20;
            local559 = local43;
            local560 = eax;
            local561 = esp_49;
            local563 = local63;
            local564 = local92;
            local565 = local121;
            local566 = local150;
            local567 = local178;
            local568 = local206;
            local569 = local234;
            local570 = local262;
            local571 = local290;
            local572 = local318;
            local573 = local346;
            local574 = local374;
            local575 = local402;
            local576 = local430;
            local578 = esp_49;
            local579 = local454;
            local580 = local63;
            local581 = local92;
            local582 = local121;
            local583 = local150;
            local584 = local178;
            local585 = local206;
            local586 = local234;
            local587 = local262;
            local588 = local290;
            local589 = local318;
            local590 = local346;
            local591 = local374;
            local592 = local402;
            local593 = local430;
            local594 = local20;
            local595 = local43;
            if (*ebx != edx) {
                do {
                    eax_1 = local560;
                    eax_2 = eax_1 + 1 & esi;
                    ebx = *(caml_frame_descriptors + (eax_1 + 1 & esi) * 4);
                    local560 = eax_2;
                } while (*ebx != edx);
            }
            local492 = *(ebx + 4) + 1;
            local527 = local492;
            if (*(ebx + 4) != -1) {
                esi = *(unsigned short*)(ebx + 6);
                local562 = esi;
                if ((int)esi > 0) {
                    edi = ebx + 8;
                    *(__size32*)(ebp - 36) = ebx;
                    ebx = *(ebp + 8);
                    for(;;) {
                        esp_43 = local561;
                        esi = local562;
                        local62 = local563;
                        local91 = local564;
                        local120 = local565;
                        local149 = local566;
                        local177 = local567;
                        local205 = local568;
                        local233 = local569;
                        local261 = local570;
                        local289 = local571;
                        local317 = local572;
                        local345 = local573;
                        local373 = local574;
                        local401 = local575;
                        local429 = local576;
                        eax_4 = *(unsigned short*)edi;
                        if (((unsigned char) eax_4 & 0x1) == 0) {
                            eax_7 = eax_4 + *(ebp - 28);
                            flags = ADDFLAGS32(eax_4, *(ebp - 28), eax_7);
                            local577 = eax_7;
                        }
                        else {
                            flags = SARFLAGS((int)eax_4 >> 1, eax_4, 1);
                            edx = *(ebp - 32);
                            eax = edx + ((int)eax_4 >> 1) * 4;
                            local577 = eax;
                        }
                        eax = local577;
                        *(__size32*)(esp_43 + 4) = eax;
                        eax = *eax;
                        *(__size32*)esp_43 = eax;
                        (*ebx)((unsigned char) eax, cl, dl, eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, local62, local91, local120, local149, local177, local205, local233, local261, local289, local317, local345, local373, local401, local429, param1, param2, param1);
                        local561 = esp_37;
                        local563 = local64;
                        local564 = local93;
                        local565 = local122;
                        local566 = local151;
                        local567 = local179;
                        local568 = local207;
                        local569 = local235;
                        local570 = local263;
                        local571 = local291;
                        local572 = local319;
                        local573 = local347;
                        local574 = local375;
                        local575 = local403;
                        local576 = local431;
                        local578 = esp_37;
                        local579 = local455;
                        local580 = local64;
                        local581 = local93;
                        local582 = local122;
                        local583 = local151;
                        local584 = local179;
                        local585 = local207;
                        local586 = local235;
                        local587 = local263;
                        local588 = local291;
                        local589 = local319;
                        local590 = local347;
                        local591 = local375;
                        local592 = local403;
                        local593 = local431;
                        local594 = local17;
                        local595 = local40;
                        esi_4 = esi_1 - 1;
                        local562 = esi_4;
                        if ((int)esi_1 <= 1) {
                            break;
                        }
                        edi += 2;
                    }
                    ebx = *(ebp - 36);
                }
                esp_46 = local578;
                local458 = local579;
                local75 = local580;
                local102 = local581;
                local135 = local582;
                local161 = local583;
                local189 = local584;
                local215 = local585;
                local245 = local586;
                local273 = local587;
                local301 = local588;
                local329 = local589;
                local357 = local590;
                local385 = local591;
                local413 = local592;
                local441 = local593;
                local30 = local594;
                local51 = local595;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local542 = esp_46;
                local543 = local458;
                local544 = local75;
                local545 = local102;
                local546 = local135;
                local547 = local161;
                local548 = local189;
                local549 = local215;
                local550 = local245;
                local551 = local273;
                local552 = local301;
                local553 = local329;
                local554 = local357;
                local555 = local385;
                local556 = local413;
                local557 = local441;
                local558 = local30;
                local559 = local51;
                goto bb0x805c3a7;
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
    esp_52 = local525;
    local462 = local526;
    local495 = local527;
    *(__size32*)(esp_68 - 4) = local528;
    local101 = local529;
    local134 = local530;
    *(__size32*)(esp_68 - 36) = local531;
    *(__size32*)(esp_68 - 40) = local532;
    *(__size32*)(esp_68 - 44) = local533;
    *(__size32*)(esp_68 - 48) = local534;
    *(__size32*)(esp_68 - 68) = local535;
    *(__size32*)(esp_68 - 72) = local536;
    *(__size32*)(esp_68 - 76) = local537;
    *(__size32*)(esp_68 - 80) = local538;
    *(__size32*)(esp_68 - 104) = local539;
    *(__size32*)(esp_68 - 108) = local540;
    *(unsigned int*)(esp_68 - 112) = local541;
    local671 = esp_52;
    local672 = local462;
    local673 = local495;
    local674 = *(esp_68 - 4);
    local675 = local101;
    local676 = local134;
    local677 = *(esp_68 - 36);
    local678 = *(esp_68 - 40);
    local679 = *(esp_68 - 44);
    local680 = *(esp_68 - 48);
    local681 = *(esp_68 - 68);
    local682 = *(esp_68 - 72);
    local683 = *(esp_68 - 76);
    local684 = *(esp_68 - 80);
    local685 = *(esp_68 - 104);
    local686 = *(esp_68 - 108);
    local687 = *(esp_68 - 112);
    local688 = local27;
    local689 = local48;
    local690 = esp_52;
    if (*(ebp + 24) != 0) {
        esi = *(ebp + 24);
        *(__size32*)(ebp - 28) = 0;
        do {
            esp_55 = local671;
            local460 = local672;
            local493 = local673;
            local68 = local674;
            local97 = local675;
            local126 = local676;
            local155 = local677;
            local183 = local678;
            local211 = local679;
            local239 = local680;
            local267 = local681;
            local295 = local682;
            local323 = local683;
            local351 = local684;
            local379 = local685;
            local407 = local686;
            local435 = local687;
            local25 = local688;
            local46 = local689;
            edi = 0;
            local632 = esp_55;
            local633 = edi;
            local634 = local460;
            local635 = local493;
            local636 = local68;
            local637 = local97;
            local638 = local126;
            local639 = local155;
            local640 = local183;
            local641 = local211;
            local642 = local239;
            local643 = local267;
            local644 = local295;
            local645 = local323;
            local646 = local351;
            local647 = local379;
            local648 = local407;
            local649 = local435;
            local650 = local25;
            local651 = local46;
            local652 = esp_55;
            local653 = local460;
            local654 = local493;
            local655 = local68;
            local656 = local97;
            local657 = local126;
            local658 = local155;
            local659 = local183;
            local660 = local211;
            local661 = local239;
            local662 = local267;
            local663 = local295;
            local664 = local323;
            local665 = local351;
            local666 = local379;
            local667 = local407;
            local668 = local435;
            local669 = local25;
            local670 = local46;
            if (*(esi + 4) > 0) {
                do {
                    esp_64 = local632;
                    edi = local633;
                    local464 = local634;
                    local497 = local635;
                    local67 = local636;
                    local96 = local637;
                    local125 = local638;
                    local154 = local639;
                    local182 = local640;
                    local210 = local641;
                    local238 = local642;
                    local266 = local643;
                    local294 = local644;
                    local322 = local645;
                    local350 = local646;
                    local378 = local647;
                    local406 = local648;
                    local434 = local649;
                    local29 = local650;
                    local50 = local651;
                    ebx = *(ebp - 28);
                    local596 = ebx;
                    local597 = esp_64;
                    local598 = local67;
                    local599 = local96;
                    local600 = local125;
                    local601 = local154;
                    local602 = local182;
                    local603 = local210;
                    local604 = local238;
                    local605 = local266;
                    local606 = local294;
                    local607 = local322;
                    local608 = local350;
                    local609 = local378;
                    local610 = local406;
                    local611 = local434;
                    local612 = ebx;
                    local613 = esp_64;
                    local614 = local464;
                    local615 = local497;
                    local616 = local67;
                    local617 = local96;
                    local618 = local125;
                    local619 = local154;
                    local620 = local182;
                    local621 = local210;
                    local622 = local238;
                    local623 = local266;
                    local624 = local294;
                    local625 = local322;
                    local626 = local350;
                    local627 = local378;
                    local628 = local406;
                    local629 = local434;
                    local630 = local29;
                    local631 = local50;
                    if (*(esi + 8) > 0) {
                        do {
                            ebx = local596;
                            esp_58 = local597;
                            local66 = local598;
                            local95 = local599;
                            local124 = local600;
                            local153 = local601;
                            local181 = local602;
                            local209 = local603;
                            local237 = local604;
                            local265 = local605;
                            local293 = local606;
                            local321 = local607;
                            local349 = local608;
                            local377 = local609;
                            local405 = local610;
                            local433 = local611;
                            eax_9 = ebx * 4 + *(esi + edi * 4 + 12);
                            *(__size32*)(esp_58 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_58 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, cl, dl, eax_12, ecx, edx, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), local66, local95, local124, local153, local181, local209, local237, local265, local293, local321, local349, local377, local405, local433, param1, param2, param1);
                            local597 = esp_40;
                            local598 = local70;
                            local599 = local99;
                            local600 = local128;
                            local601 = local157;
                            local602 = local185;
                            local603 = local213;
                            local604 = local241;
                            local605 = local269;
                            local606 = local297;
                            local607 = local325;
                            local608 = local353;
                            local609 = local381;
                            local610 = local409;
                            local611 = local437;
                            local613 = esp_40;
                            local614 = local470;
                            local615 = local504;
                            local616 = local70;
                            local617 = local99;
                            local618 = local128;
                            local619 = local157;
                            local620 = local185;
                            local621 = local213;
                            local622 = local241;
                            local623 = local269;
                            local624 = local297;
                            local625 = local325;
                            local626 = local353;
                            local627 = local381;
                            local628 = local409;
                            local629 = local437;
                            local630 = local21;
                            local631 = local44;
                            ebx_4 = ebx_1 + 1;
                            local596 = ebx_4;
                            local612 = ebx_4;
                        } while (*(esi + 8) > ebx_1 + 1);
                    }
                    ebx = local612;
                    esp_61 = local613;
                    edi_1 = edi;
                    local461 = local614;
                    local494 = local615;
                    local69 = local616;
                    local98 = local617;
                    local127 = local618;
                    local156 = local619;
                    local184 = local620;
                    local212 = local621;
                    local240 = local622;
                    local268 = local623;
                    local296 = local624;
                    local324 = local625;
                    local352 = local626;
                    local380 = local627;
                    local408 = local628;
                    local436 = local629;
                    local26 = local630;
                    local47 = local631;
                    edi_2 = edi_1 + 1;
                    local632 = esp_61;
                    local633 = edi_2;
                    local634 = local461;
                    local635 = local494;
                    local636 = local69;
                    local637 = local98;
                    local638 = local127;
                    local639 = local156;
                    local640 = local184;
                    local641 = local212;
                    local642 = local240;
                    local643 = local268;
                    local644 = local296;
                    local645 = local324;
                    local646 = local352;
                    local647 = local380;
                    local648 = local408;
                    local649 = local436;
                    local650 = local26;
                    local651 = local47;
                    local652 = esp_61;
                    local653 = local461;
                    local654 = local494;
                    local655 = local69;
                    local656 = local98;
                    local657 = local127;
                    local658 = local156;
                    local659 = local184;
                    local660 = local212;
                    local661 = local240;
                    local662 = local268;
                    local663 = local296;
                    local664 = local324;
                    local665 = local352;
                    local666 = local380;
                    local667 = local408;
                    local668 = local436;
                    local669 = local26;
                    local670 = local47;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_67 = local652;
            local463 = local653;
            local496 = local654;
            local74 = local655;
            *(__size32*)(esp_68 - 28) = local656;
            *(__size32*)(esp_68 - 32) = local657;
            local165 = local658;
            local191 = local659;
            local221 = local660;
            local249 = local661;
            local277 = local662;
            local305 = local663;
            local333 = local664;
            local361 = local665;
            local389 = local666;
            local417 = local667;
            local445 = local668;
            local28 = local669;
            local49 = local670;
            esi = *esi;
            local671 = esp_67;
            local672 = local463;
            local673 = local496;
            local674 = local74;
            local675 = *(esp_68 - 28);
            local676 = *(esp_68 - 32);
            local677 = local165;
            local678 = local191;
            local679 = local221;
            local680 = local249;
            local681 = local277;
            local682 = local305;
            local683 = local333;
            local684 = local361;
            local685 = local389;
            local686 = local417;
            local687 = local445;
            local688 = local28;
            local689 = local49;
            local690 = esp_67;
        } while (esi == 0);
    }
    esp = local690;
    ebp = *(esp + 56);
    return ebp;
}

/** address: 0x0805f9c4 */
__size32 caml_copy_string(__size32 param1)
{
    void *eax; 		// r24
    __size32 eax_1; 		// r24{13}
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
    eax = caml_alloc_string( ~ecx_1 - 1, 0); /* Warning: also results in ebx, esp, ebp */
    *(__size32*)(esp + 8) = ebx;
    eax_1 = *(ebp + 8);
    *(__size32*)(esp + 4) = eax_1;
    *(__size32*)esp = eax;
    memmove(*esp, *(esp + 4), *(esp + 8));
    ebp = *ebp;
    return eax; /* WARNING: Also returning: ebp := ebp */
}

/** address: 0x0805c261 */
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
    __size32 esp_44; 		// r28{211}
    __size32 esp_45; 		// r28{84}
    __size32 esp_46; 		// r28{249}
    __size32 esp_47; 		// r28{267}
    __size32 esp_48; 		// r28{267}
    __size32 esp_49; 		// r28{211}
    __size32 esp_5; 		// r28{14}
    __size32 esp_50; 		// r28{211}
    __size32 esp_51; 		// r28{229}
    __size32 esp_52; 		// r28{229}
    __size32 esp_53; 		// r28{162}
    __size32 esp_54; 		// r28{162}
    __size32 esp_55; 		// r28{99}
    __size32 esp_56; 		// r28{99}
    union { __size32; __size32 *; } esp_57; 		// r28{129}
    union { __size32; __size32 *; } esp_58; 		// r28{129}
    __size32 esp_59; 		// r28{84}
    __size32 esp_6; 		// r28{14}
    __size32 esp_60; 		// r28{84}
    union { __size32; __size32 *; } esp_61; 		// r28{189}
    union { __size32; __size32 *; } esp_62; 		// r28{189}
    __size32 esp_7; 		// r28{20}
    __size32 esp_8; 		// r28{20}
    __size32 esp_9; 		// r28{20}
    int local0; 		// m[esp - 4]
    int local1; 		// m[esp - 28]
    __size32 local10; 		// m[esp_38 + 8]{3}
    unsigned int local100; 		// m[esp_38 - 32]{256}
    unsigned int local101; 		// m[esp_38 - 32]{195}
    unsigned int local102; 		// m[esp_38 - 32]{195}
    unsigned int local103; 		// m[esp_38 - 32]{219}
    unsigned int local104; 		// m[esp_38 - 32]{219}
    unsigned int local105; 		// m[esp_38 - 32]{237}
    unsigned int local106; 		// m[esp_38 - 32]{237}
    unsigned int local107; 		// m[esp_38 - 32]{274}
    unsigned int local108; 		// m[esp_38 - 32]{274}
    int local109; 		// tmpb{102}
    __size32 local11; 		// m[esp_38 + 8]{3}
    int local110; 		// tmpb{155}
    int local111; 		// tmpb{155}
    int local112; 		// tmpb{155}
    int local113; 		// tmpb{165}
    int local114; 		// tmpb{155}
    int local115; 		// tmpb{270}
    int local116; 		// tmpb{215}
    int local117; 		// tmpb{86}
    int local118; 		// tmpb{252}
    int local119; 		// tmpb{233}
    __size32 local12; 		// m[esp_38 + 8]{171}
    int local120; 		// tmpb{270}
    int local121; 		// tmpb{215}
    int local122; 		// tmpb{86}
    int local123; 		// tmpb{252}
    int local124; 		// tmpb{233}
    int local125; 		// tmpb{203}
    int local126; 		// tmpb{203}
    int local127; 		// tmpb{203}
    int local128; 		// tmpb{155}
    int local129; 		// tmpb{102}
    __size32 local13; 		// m[esp_38 + 8]{277}
    int local130; 		// tmpb{4}
    int local131; 		// tmpb{4}
    int local132; 		// tmpb{102}
    int local133; 		// tmpb{102}
    int local134; 		// tmpb{165}
    int local135; 		// tmpb{165}
    int local136; 		// tmpb{215}
    int local137; 		// tmpb{215}
    int local138; 		// tmpb{270}
    int local139; 		// tmpb{270}
    __size32 local14; 		// m[esp_38 + 8]{222}
    __size16 local140; 		// tmph{119}
    __size16 local141; 		// tmph{271}
    __size16 local142; 		// tmph{216}
    __size16 local143; 		// tmph{87}
    __size16 local144; 		// tmph{253}
    __size16 local145; 		// tmph{234}
    __size16 local146; 		// tmph{119}
    __size16 local147; 		// tmph{271}
    __size16 local148; 		// tmph{216}
    __size16 local149; 		// tmph{87}
    __size32 local15; 		// m[esp_38 + 8]{259}
    __size16 local150; 		// tmph{253}
    __size16 local151; 		// tmph{234}
    int local152; 		// tmph{203}
    int local153; 		// tmph{203}
    int local154; 		// tmph{203}
    __size16 local155; 		// tmph{216}
    __size16 local156; 		// tmph{216}
    __size16 local157; 		// tmph{216}
    __size16 local158; 		// tmph{234}
    __size16 local159; 		// tmph{253}
    __size32 local16; 		// m[esp_38 + 8]{240}
    __size16 local160; 		// tmph{271}
    __size16 local161; 		// tmph{271}
    __size16 local162; 		// tmph{271}
    __size16 local163; 		// tmph{87}
    int local164; 		// tmph{203}
    __size16 local165; 		// tmph{271}
    __size16 local166; 		// tmph{216}
    __size16 local167; 		// tmph{87}
    __size16 local168; 		// tmph{253}
    __size16 local169; 		// tmph{234}
    __size32 local17; 		// m[esp_38 + 8]{222}
    __size16 local170; 		// tmph{119}
    __size16 local171; 		// tmph{5}
    __size16 local172; 		// tmph{5}
    __size32 local173; 		// esp_45{84}
    int local174; 		// local117{86}
    __size16 local175; 		// local143{87}
    __size32 local176; 		// m[esp_38 - 4]{88}
    __size32 local177; 		// m[esp_38 - 28]{89}
    unsigned int local178; 		// m[esp_38 - 32]{90}
    __size32 local179; 		// esp_41{99}
    __size32 local18; 		// m[esp_38 + 8]{222}
    int local180; 		// local109{102}
    __size32 local181; 		// local29{103}
    __size32 local182; 		// local57{104}
    unsigned int local183; 		// local85{105}
    __size32 local184; 		// local7{108}
    int local185; 		// eax_1{114}
    union { __size32 *; __size32; } local186; 		// esp_40{129}
    unsigned int local187; 		// esi{131}
    __size32 local188; 		// local28{133}
    __size32 local189; 		// local56{134}
    __size32 local19; 		// m[esp_38 + 8]{277}
    unsigned int local190; 		// local84{135}
    union { __size32 *; unsigned int; } local191; 		// eax{146}
    __size32 local192; 		// esp_43{162}
    int local193; 		// local113{165}
    __size32 local194; 		// local40{166}
    __size32 local195; 		// local68{167}
    unsigned int local196; 		// local96{168}
    __size32 local197; 		// local12{171}
    unsigned int local198; 		// ebx{188}
    union { __size32 *; __size32; } local199; 		// esp_37{189}
    int local2; 		// m[esp - 32]
    __size32 local20; 		// m[esp_38 + 8]{277}
    __size32 local200; 		// local32{193}
    __size32 local201; 		// local60{194}
    unsigned int local202; 		// local88{195}
    unsigned int local203; 		// ebx{210}
    __size32 local204; 		// esp_44{211}
    int local205; 		// local116{215}
    __size16 local206; 		// local142{216}
    __size32 local207; 		// local35{217}
    __size32 local208; 		// local63{218}
    unsigned int local209; 		// local91{219}
    __size32 local21; 		// m[esp_38 + 8]{108}
    __size32 local210; 		// local14{222}
    __size32 local211; 		// esp_42{229}
    unsigned int local212; 		// edi{232}
    int local213; 		// local119{233}
    __size16 local214; 		// local145{234}
    __size32 local215; 		// local33{235}
    __size32 local216; 		// local61{236}
    unsigned int local217; 		// local89{237}
    __size32 local218; 		// local16{240}
    __size32 local219; 		// esp_46{249}
    __size32 local22; 		// m[esp_38 + 8]{108}
    int local220; 		// local118{252}
    __size16 local221; 		// local144{253}
    __size32 local222; 		// local44{254}
    __size32 local223; 		// local72{255}
    unsigned int local224; 		// local100{256}
    __size32 local225; 		// local15{259}
    __size32 local226; 		// esp_47{267}
    int local227; 		// local115{270}
    __size16 local228; 		// local141{271}
    __size32 local229; 		// local34{272}
    __size32 local23; 		// m[esp_38 + 8]{171}
    __size32 local230; 		// local62{273}
    unsigned int local231; 		// local90{274}
    __size32 local232; 		// local13{277}
    __size32 local233; 		// esp{281}
    __size32 local24; 		// m[esp_38 + 8]{171}
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
    __size32 local38; 		// m[esp_38 - 4]{133}
    __size32 local39; 		// m[esp_38 - 4]{133}
    int local4; 		// m[esp_38 + 8]{155}
    __size32 local40; 		// m[esp_38 - 4]{166}
    __size32 local41; 		// m[esp_38 - 4]{166}
    __size32 local42; 		// m[esp_38 - 4]{103}
    __size32 local43; 		// m[esp_38 - 4]{103}
    __size32 local44; 		// m[esp_38 - 4]{254}
    __size32 local45; 		// m[esp_38 - 4]{193}
    __size32 local46; 		// m[esp_38 - 4]{193}
    __size32 local47; 		// m[esp_38 - 4]{217}
    __size32 local48; 		// m[esp_38 - 4]{217}
    __size32 local49; 		// m[esp_38 - 4]{235}
    int local5; 		// m[esp_38 + 8]{155}
    __size32 local50; 		// m[esp_38 - 4]{235}
    __size32 local51; 		// m[esp_38 - 4]{272}
    __size32 local52; 		// m[esp_38 - 4]{272}
    __size32 local53; 		// m[esp_38 - 28]{7}
    __size32 local54; 		// m[esp_38 - 28]{7}
    __size32 local55; 		// m[esp_38 - 28]{7}
    __size32 local56; 		// m[esp_38 - 28]{134}
    __size32 local57; 		// m[esp_38 - 28]{104}
    int local58; 		// m[esp_38 - 28]{155}
    int local59; 		// m[esp_38 - 28]{155}
    int local6; 		// m[esp_38 + 8]{155}
    __size32 local60; 		// m[esp_38 - 28]{194}
    __size32 local61; 		// m[esp_38 - 28]{236}
    __size32 local62; 		// m[esp_38 - 28]{273}
    __size32 local63; 		// m[esp_38 - 28]{218}
    int local64; 		// m[esp_38 - 28]{203}
    int local65; 		// m[esp_38 - 28]{203}
    __size32 local66; 		// m[esp_38 - 28]{134}
    __size32 local67; 		// m[esp_38 - 28]{134}
    __size32 local68; 		// m[esp_38 - 28]{167}
    __size32 local69; 		// m[esp_38 - 28]{167}
    __size32 local7; 		// m[esp_38 + 8]{108}
    __size32 local70; 		// m[esp_38 - 28]{104}
    __size32 local71; 		// m[esp_38 - 28]{104}
    __size32 local72; 		// m[esp_38 - 28]{255}
    __size32 local73; 		// m[esp_38 - 28]{194}
    __size32 local74; 		// m[esp_38 - 28]{194}
    __size32 local75; 		// m[esp_38 - 28]{218}
    __size32 local76; 		// m[esp_38 - 28]{218}
    __size32 local77; 		// m[esp_38 - 28]{236}
    __size32 local78; 		// m[esp_38 - 28]{236}
    __size32 local79; 		// m[esp_38 - 28]{273}
    int local8; 		// m[esp_38 + 8]{203}
    __size32 local80; 		// m[esp_38 - 28]{273}
    unsigned int local81; 		// m[esp_38 - 32]{8}
    unsigned int local82; 		// m[esp_38 - 32]{8}
    unsigned int local83; 		// m[esp_38 - 32]{8}
    unsigned int local84; 		// m[esp_38 - 32]{135}
    unsigned int local85; 		// m[esp_38 - 32]{105}
    int local86; 		// m[esp_38 - 32]{155}
    int local87; 		// m[esp_38 - 32]{155}
    unsigned int local88; 		// m[esp_38 - 32]{195}
    unsigned int local89; 		// m[esp_38 - 32]{237}
    int local9; 		// m[esp_38 + 8]{203}
    unsigned int local90; 		// m[esp_38 - 32]{274}
    unsigned int local91; 		// m[esp_38 - 32]{219}
    int local92; 		// m[esp_38 - 32]{203}
    int local93; 		// m[esp_38 - 32]{203}
    unsigned int local94; 		// m[esp_38 - 32]{135}
    unsigned int local95; 		// m[esp_38 - 32]{135}
    unsigned int local96; 		// m[esp_38 - 32]{168}
    unsigned int local97; 		// m[esp_38 - 32]{168}
    unsigned int local98; 		// m[esp_38 - 32]{105}
    unsigned int local99; 		// m[esp_38 - 32]{105}

    local25 = param2;
    local53 = param1;
    eax = caml_copy_string(param1); /* Warning: also results in esp_1, ebp */
    local174 = local130;
    local175 = local171;
    local176 = local25;
    local177 = local53;
    local178 = local81;
    local180 = local130;
    local181 = local25;
    local182 = local53;
    local183 = local81;
    local184 = param1;
    *(__size32*)(esp_1 + 4) = eax;
    eax = *(ebp + 8);
    *(__size32*)esp_1 = eax;
    esp_4 = caml_raise_with_arg(*esp_1, *(esp_1 + 4), ebp, *(esp_1 - 148)); /* Warning: also results in ebp */
    *(__size32*)(esp_4 - 4) = ebp;
    eax = *(esp_4 + 4);
    *(__size32*)(esp_4 - 24) = eax;
    *(__size32*)(esp_4 - 28) = 0x806da08;
    esp_7 = caml_raise_with_string(*(esp_4 - 24), esp_4 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_7 - 4) = ebp;
    eax = *(esp_7 + 4);
    *(__size32*)(esp_7 - 24) = eax;
    *(__size32*)(esp_7 - 28) = 0x806d9ec;
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
    *(__size32*)(esp_13 - 28) = 0x806dae0;
    esp_16 = caml_raise_constant(*(esp_13 - 28), esp_13 - 4, *(esp_13 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_16 - 4) = ebp;
    *(__size32*)(esp_16 - 28) = 0x806da78;
    esp_19 = caml_raise_constant(*(esp_16 - 28), esp_16 - 4, *(esp_16 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_19 - 4) = ebp;
    *(__size32*)(esp_19 - 28) = 0x806da50;
    esp_22 = caml_raise_constant(*(esp_19 - 28), esp_19 - 4, *(esp_19 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_22 - 4) = ebp;
    *(__size32*)(esp_22 - 28) = 0x806da30;
    cl = caml_raise_constant(*(esp_22 - 28), esp_22 - 4, *(esp_22 - 176)); /* Warning: also results in dl, ecx, edx, ebx, esp_25, ebp, esi, edi */
    *(__size32*)(esp_25 - 4) = ebp;
    ebp = esp_25 - 4;
    *(unsigned int*)(esp_25 - 8) = edi;
    *(unsigned int*)(esp_25 - 12) = esi;
    *(unsigned int*)(esp_25 - 16) = ebx;
    esp_28 = esp_25 - 60;
    eax = *(esp_25 + 8);
    al = (unsigned char) eax;
    local173 = esp_28;
    local179 = esp_28;
    if (eax != 0) {
        edx = *(esp_25 + 16);
        *(__size32*)(esp_25 - 36) = edx;
        edx = *(esp_25 + 12);
        *(__size32*)(esp_25 - 32) = eax;
        do {
bb0x805c3a7:
            esp_41 = local179;
            local109 = local180;
            local29 = local181;
            local57 = local182;
            local85 = local183;
            local7 = local184;
            esi = *(global_0x0807655c + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local173 = esp_41;
            local174 = local109;
            local176 = local29;
            local177 = local57;
            local178 = local85;
            local179 = esp_41;
            local180 = local109;
            local181 = local29;
            local182 = local57;
            local183 = local85;
            local184 = local7;
            local185 = eax;
            local186 = esp_41;
            local188 = local29;
            local189 = local57;
            local190 = local85;
            local192 = esp_41;
            local193 = local109;
            local194 = local29;
            local195 = local57;
            local196 = local85;
            local197 = local7;
            if (*ebx != edx) {
                do {
                    eax_1 = local185;
                    eax_2 = eax_1 + 1 & esi;
                    ebx = *(caml_frame_descriptors + (eax_1 + 1 & esi) * 4);
                    local185 = eax_2;
                } while (*ebx != edx);
            }
            local140 = *(ebx + 4) + 1;
            local175 = local140;
            if (*(ebx + 4) != -1) {
                esi = *(unsigned short*)(ebx + 6);
                local187 = esi;
                if ((int)esi > 0) {
                    edi = ebx + 8;
                    *(__size32*)(ebp - 36) = ebx;
                    ebx = *(ebp + 8);
                    for(;;) {
                        esp_40 = local186;
                        esi = local187;
                        local28 = local188;
                        local56 = local189;
                        local84 = local190;
                        eax_4 = *(unsigned short*)edi;
                        if (((unsigned char) eax_4 & 0x1) == 0) {
                            eax_7 = eax_4 + *(ebp - 28);
                            flags = ADDFLAGS32(eax_4, *(ebp - 28), eax_7);
                            local191 = eax_7;
                        }
                        else {
                            flags = SARFLAGS((int)eax_4 >> 1, eax_4, 1);
                            edx = *(ebp - 32);
                            eax = edx + ((int)eax_4 >> 1) * 4;
                            local191 = eax;
                        }
                        eax = local191;
                        *(__size32*)(esp_40 + 4) = eax;
                        eax = *eax;
                        *(__size32*)esp_40 = eax;
                        (*ebx)((unsigned char) eax, eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, local28, local56, local84, cl, dl, param1);
                        local186 = esp_31;
                        local188 = local30;
                        local189 = local58;
                        local190 = local86;
                        local192 = esp_31;
                        local193 = local110;
                        local194 = local30;
                        local195 = local58;
                        local196 = local86;
                        local197 = local4;
                        esi_4 = esi_1 - 1;
                        local187 = esi_4;
                        if ((int)esi_1 <= 1) {
                            break;
                        }
                        edi += 2;
                    }
                    ebx = *(ebp - 36);
                }
                esp_43 = local192;
                local113 = local193;
                local40 = local194;
                local68 = local195;
                local96 = local196;
                local12 = local197;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local179 = esp_43;
                local180 = local113;
                local181 = local40;
                local182 = local68;
                local183 = local96;
                local184 = local12;
                goto bb0x805c3a7;
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
    esp_45 = local173;
    local117 = local174;
    local143 = local175;
    *(__size32*)(esp_38 - 4) = local176;
    *(__size32*)(esp_38 - 28) = local177;
    *(unsigned int*)(esp_38 - 32) = local178;
    param1 = local3;
    local226 = esp_45;
    local227 = local117;
    local228 = local143;
    local229 = *(esp_38 - 4);
    local230 = *(esp_38 - 28);
    local231 = *(esp_38 - 32);
    local232 = *(esp_38 + 8);
    local233 = esp_45;
    if (*(ebp + 24) != 0) {
        esi = *(ebp + 24);
        *(__size32*)(ebp - 28) = 0;
        do {
            esp_47 = local226;
            local115 = local227;
            local141 = local228;
            local34 = local229;
            local62 = local230;
            local90 = local231;
            local13 = local232;
            edi = 0;
            local211 = esp_47;
            local212 = edi;
            local213 = local115;
            local214 = local141;
            local215 = local34;
            local216 = local62;
            local217 = local90;
            local218 = local13;
            local219 = esp_47;
            local220 = local115;
            local221 = local141;
            local222 = local34;
            local223 = local62;
            local224 = local90;
            local225 = local13;
            if (*(esi + 4) > 0) {
                do {
                    esp_42 = local211;
                    edi = local212;
                    local119 = local213;
                    local145 = local214;
                    local33 = local215;
                    local61 = local216;
                    local89 = local217;
                    local16 = local218;
                    ebx = *(ebp - 28);
                    local198 = ebx;
                    local199 = esp_42;
                    local200 = local33;
                    local201 = local61;
                    local202 = local89;
                    local203 = ebx;
                    local204 = esp_42;
                    local205 = local119;
                    local206 = local145;
                    local207 = local33;
                    local208 = local61;
                    local209 = local89;
                    local210 = local16;
                    if (*(esi + 8) > 0) {
                        do {
                            ebx = local198;
                            esp_37 = local199;
                            local32 = local200;
                            local60 = local201;
                            local88 = local202;
                            eax_9 = ebx * 4 + *(esi + edi * 4 + 12);
                            *(__size32*)(esp_37 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_37 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, eax_12, ecx, edx, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), local32, local60, local88, cl, dl, param1);
                            local199 = esp_34;
                            local200 = local36;
                            local201 = local64;
                            local202 = local92;
                            local204 = esp_34;
                            local205 = local125;
                            local206 = local152;
                            local207 = local36;
                            local208 = local64;
                            local209 = local92;
                            local210 = local8;
                            ebx_4 = ebx_1 + 1;
                            local198 = ebx_4;
                            local203 = ebx_4;
                        } while (*(esi + 8) > ebx_1 + 1);
                    }
                    ebx = local203;
                    esp_44 = local204;
                    edi_1 = edi;
                    local116 = local205;
                    local142 = local206;
                    local35 = local207;
                    local63 = local208;
                    local91 = local209;
                    local14 = local210;
                    edi_2 = edi_1 + 1;
                    local211 = esp_44;
                    local212 = edi_2;
                    local213 = local116;
                    local214 = local142;
                    local215 = local35;
                    local216 = local63;
                    local217 = local91;
                    local218 = local14;
                    local219 = esp_44;
                    local220 = local116;
                    local221 = local142;
                    local222 = local35;
                    local223 = local63;
                    local224 = local91;
                    local225 = local14;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_46 = local219;
            local118 = local220;
            local144 = local221;
            local44 = local222;
            local72 = local223;
            local100 = local224;
            local15 = local225;
            esi = *esi;
            local226 = esp_46;
            local227 = local118;
            local228 = local144;
            local229 = local44;
            local230 = local72;
            local231 = local100;
            local232 = local15;
            local233 = esp_46;
        } while (esi == 0);
    }
    esp = local233;
    ebp = *(esp + 56);
    return ebp;
}

/** address: 0x0805c2b3 */
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
    __size32 esp_1; 		// r28{35}
    __size32 esp_10; 		// r28{31}
    __size32 esp_11; 		// r28{31}
    __size32 esp_12; 		// r28{31}
    __size32 esp_13; 		// r28{39}
    __size32 esp_14; 		// r28{39}
    __size32 esp_15; 		// r28{39}
    __size32 esp_16; 		// r28{45}
    __size32 esp_17; 		// r28{45}
    __size32 esp_18; 		// r28{45}
    __size32 esp_19; 		// r28{160}
    __size32 esp_2; 		// r28{35}
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
    __size32 esp_3; 		// r28{35}
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
    __size32 esp_4; 		// r28{23}
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
    __size32 esp_5; 		// r28{23}
    __size32 esp_50; 		// r28{1}
    __size32 esp_51; 		// r28{1}
    __size32 esp_6; 		// r28{23}
    __size32 esp_7; 		// r28{27}
    __size32 esp_8; 		// r28{27}
    __size32 esp_9; 		// r28{27}
    int local0; 		// m[esp - 4]
    int local1; 		// m[esp - 108]
    int local10; 		// m[esp - 68]
    __size32 local100; 		// m[esp_50 - 36]{272}
    __size32 local101; 		// m[esp_50 - 36]{329}
    __size32 local102; 		// m[esp_50 - 36]{244}
    int local103; 		// m[esp_50 - 36]{228}
    int local104; 		// m[esp_50 - 36]{228}
    __size32 local105; 		// m[esp_50 - 36]{130}
    __size32 local106; 		// m[esp_50 - 36]{130}
    __size32 local107; 		// m[esp_50 - 36]{173}
    __size32 local108; 		// m[esp_50 - 36]{173}
    __size32 local109; 		// m[esp_50 - 36]{90}
    int local11; 		// m[esp - 104]
    __size32 local110; 		// m[esp_50 - 36]{90}
    __size32 local111; 		// m[esp_50 - 36]{301}
    __size32 local112; 		// m[esp_50 - 36]{210}
    __size32 local113; 		// m[esp_50 - 36]{210}
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
    __size32 local133; 		// m[esp_50 - 40]{131}
    __size32 local134; 		// m[esp_50 - 40]{131}
    __size32 local135; 		// m[esp_50 - 40]{174}
    __size32 local136; 		// m[esp_50 - 40]{174}
    __size32 local137; 		// m[esp_50 - 40]{91}
    __size32 local138; 		// m[esp_50 - 40]{91}
    __size32 local139; 		// m[esp_50 - 40]{302}
    __size32 local14; 		// m[esp + 4]
    __size32 local140; 		// m[esp_50 - 40]{211}
    __size32 local141; 		// m[esp_50 - 40]{211}
    __size32 local142; 		// m[esp_50 - 40]{245}
    __size32 local143; 		// m[esp_50 - 40]{245}
    __size32 local144; 		// m[esp_50 - 40]{273}
    __size32 local145; 		// m[esp_50 - 40]{273}
    __size32 local146; 		// m[esp_50 - 40]{330}
    __size32 local147; 		// m[esp_50 - 40]{330}
    __size32 local148; 		// m[esp_50 - 44]{8}
    __size32 local149; 		// m[esp_50 - 44]{8}
    __size32 local15; 		// m[esp_50 + 4]{342}
    __size32 local150; 		// m[esp_50 - 44]{8}
    __size32 local151; 		// m[esp_50 - 44]{132}
    __size32 local152; 		// m[esp_50 - 44]{92}
    int local153; 		// m[esp_50 - 44]{160}
    int local154; 		// m[esp_50 - 44]{160}
    __size32 local155; 		// m[esp_50 - 44]{212}
    __size32 local156; 		// m[esp_50 - 44]{274}
    __size32 local157; 		// m[esp_50 - 44]{331}
    __size32 local158; 		// m[esp_50 - 44]{246}
    int local159; 		// m[esp_50 - 44]{228}
    __size32 local16; 		// m[esp_50 + 4]{342}
    int local160; 		// m[esp_50 - 44]{228}
    __size32 local161; 		// m[esp_50 - 44]{132}
    __size32 local162; 		// m[esp_50 - 44]{132}
    __size32 local163; 		// m[esp_50 - 44]{175}
    __size32 local164; 		// m[esp_50 - 44]{175}
    __size32 local165; 		// m[esp_50 - 44]{92}
    __size32 local166; 		// m[esp_50 - 44]{92}
    __size32 local167; 		// m[esp_50 - 44]{303}
    __size32 local168; 		// m[esp_50 - 44]{212}
    __size32 local169; 		// m[esp_50 - 44]{212}
    __size32 local17; 		// m[esp_50 + 4]{342}
    __size32 local170; 		// m[esp_50 - 44]{246}
    __size32 local171; 		// m[esp_50 - 44]{246}
    __size32 local172; 		// m[esp_50 - 44]{274}
    __size32 local173; 		// m[esp_50 - 44]{274}
    __size32 local174; 		// m[esp_50 - 44]{331}
    __size32 local175; 		// m[esp_50 - 44]{331}
    __size32 local176; 		// m[esp_50 - 48]{19}
    __size32 local177; 		// m[esp_50 - 48]{19}
    __size32 local178; 		// m[esp_50 - 48]{19}
    __size32 local179; 		// m[esp_50 - 48]{133}
    int local18; 		// m[esp_50 + 4]{160}
    __size32 local180; 		// m[esp_50 - 48]{93}
    int local181; 		// m[esp_50 - 48]{160}
    int local182; 		// m[esp_50 - 48]{160}
    __size32 local183; 		// m[esp_50 - 48]{213}
    __size32 local184; 		// m[esp_50 - 48]{275}
    __size32 local185; 		// m[esp_50 - 48]{332}
    __size32 local186; 		// m[esp_50 - 48]{247}
    int local187; 		// m[esp_50 - 48]{228}
    int local188; 		// m[esp_50 - 48]{228}
    __size32 local189; 		// m[esp_50 - 48]{133}
    int local19; 		// m[esp_50 + 4]{160}
    __size32 local190; 		// m[esp_50 - 48]{133}
    __size32 local191; 		// m[esp_50 - 48]{176}
    __size32 local192; 		// m[esp_50 - 48]{176}
    __size32 local193; 		// m[esp_50 - 48]{93}
    __size32 local194; 		// m[esp_50 - 48]{93}
    __size32 local195; 		// m[esp_50 - 48]{304}
    __size32 local196; 		// m[esp_50 - 48]{213}
    __size32 local197; 		// m[esp_50 - 48]{213}
    __size32 local198; 		// m[esp_50 - 48]{247}
    __size32 local199; 		// m[esp_50 - 48]{247}
    int local2; 		// m[esp - 44]
    int local20; 		// m[esp_50 + 4]{160}
    __size32 local200; 		// m[esp_50 - 48]{275}
    __size32 local201; 		// m[esp_50 - 48]{275}
    __size32 local202; 		// m[esp_50 - 48]{332}
    __size32 local203; 		// m[esp_50 - 48]{332}
    __size32 local204; 		// m[esp_50 - 68]{16}
    __size32 local205; 		// m[esp_50 - 68]{16}
    __size32 local206; 		// m[esp_50 - 68]{16}
    __size32 local207; 		// m[esp_50 - 68]{134}
    __size32 local208; 		// m[esp_50 - 68]{94}
    int local209; 		// m[esp_50 - 68]{160}
    __size32 local21; 		// m[esp_50 + 4]{103}
    int local210; 		// m[esp_50 - 68]{160}
    __size32 local211; 		// m[esp_50 - 68]{214}
    __size32 local212; 		// m[esp_50 - 68]{276}
    __size32 local213; 		// m[esp_50 - 68]{333}
    __size32 local214; 		// m[esp_50 - 68]{248}
    int local215; 		// m[esp_50 - 68]{228}
    int local216; 		// m[esp_50 - 68]{228}
    __size32 local217; 		// m[esp_50 - 68]{134}
    __size32 local218; 		// m[esp_50 - 68]{134}
    __size32 local219; 		// m[esp_50 - 68]{177}
    int local22; 		// m[esp_50 + 4]{228}
    __size32 local220; 		// m[esp_50 - 68]{177}
    __size32 local221; 		// m[esp_50 - 68]{94}
    __size32 local222; 		// m[esp_50 - 68]{94}
    __size32 local223; 		// m[esp_50 - 68]{305}
    __size32 local224; 		// m[esp_50 - 68]{214}
    __size32 local225; 		// m[esp_50 - 68]{214}
    __size32 local226; 		// m[esp_50 - 68]{248}
    __size32 local227; 		// m[esp_50 - 68]{248}
    __size32 local228; 		// m[esp_50 - 68]{276}
    __size32 local229; 		// m[esp_50 - 68]{276}
    int local23; 		// m[esp_50 + 4]{228}
    __size32 local230; 		// m[esp_50 - 68]{333}
    __size32 local231; 		// m[esp_50 - 68]{333}
    __size32 local232; 		// m[esp_50 - 72]{14}
    __size32 local233; 		// m[esp_50 - 72]{14}
    __size32 local234; 		// m[esp_50 - 72]{14}
    __size32 local235; 		// m[esp_50 - 72]{135}
    __size32 local236; 		// m[esp_50 - 72]{95}
    int local237; 		// m[esp_50 - 72]{160}
    int local238; 		// m[esp_50 - 72]{160}
    __size32 local239; 		// m[esp_50 - 72]{215}
    __size32 local24; 		// m[esp_50 + 4]{186}
    __size32 local240; 		// m[esp_50 - 72]{277}
    __size32 local241; 		// m[esp_50 - 72]{334}
    __size32 local242; 		// m[esp_50 - 72]{249}
    int local243; 		// m[esp_50 - 72]{228}
    int local244; 		// m[esp_50 - 72]{228}
    __size32 local245; 		// m[esp_50 - 72]{135}
    __size32 local246; 		// m[esp_50 - 72]{135}
    __size32 local247; 		// m[esp_50 - 72]{178}
    __size32 local248; 		// m[esp_50 - 72]{178}
    __size32 local249; 		// m[esp_50 - 72]{95}
    __size32 local25; 		// m[esp_50 + 4]{257}
    __size32 local250; 		// m[esp_50 - 72]{95}
    __size32 local251; 		// m[esp_50 - 72]{306}
    __size32 local252; 		// m[esp_50 - 72]{215}
    __size32 local253; 		// m[esp_50 - 72]{215}
    __size32 local254; 		// m[esp_50 - 72]{249}
    __size32 local255; 		// m[esp_50 - 72]{249}
    __size32 local256; 		// m[esp_50 - 72]{277}
    __size32 local257; 		// m[esp_50 - 72]{277}
    __size32 local258; 		// m[esp_50 - 72]{334}
    __size32 local259; 		// m[esp_50 - 72]{334}
    __size32 local26; 		// m[esp_50 + 4]{78}
    __size32 local260; 		// m[esp_50 - 76]{15}
    __size32 local261; 		// m[esp_50 - 76]{15}
    __size32 local262; 		// m[esp_50 - 76]{15}
    __size32 local263; 		// m[esp_50 - 76]{136}
    __size32 local264; 		// m[esp_50 - 76]{96}
    int local265; 		// m[esp_50 - 76]{160}
    int local266; 		// m[esp_50 - 76]{160}
    __size32 local267; 		// m[esp_50 - 76]{216}
    __size32 local268; 		// m[esp_50 - 76]{278}
    __size32 local269; 		// m[esp_50 - 76]{335}
    __size32 local27; 		// m[esp_50 + 4]{285}
    __size32 local270; 		// m[esp_50 - 76]{250}
    int local271; 		// m[esp_50 - 76]{228}
    int local272; 		// m[esp_50 - 76]{228}
    __size32 local273; 		// m[esp_50 - 76]{136}
    __size32 local274; 		// m[esp_50 - 76]{136}
    __size32 local275; 		// m[esp_50 - 76]{179}
    __size32 local276; 		// m[esp_50 - 76]{179}
    __size32 local277; 		// m[esp_50 - 76]{96}
    __size32 local278; 		// m[esp_50 - 76]{96}
    __size32 local279; 		// m[esp_50 - 76]{307}
    __size32 local28; 		// m[esp_50 + 4]{3}
    __size32 local280; 		// m[esp_50 - 76]{216}
    __size32 local281; 		// m[esp_50 - 76]{216}
    __size32 local282; 		// m[esp_50 - 76]{250}
    __size32 local283; 		// m[esp_50 - 76]{250}
    __size32 local284; 		// m[esp_50 - 76]{278}
    __size32 local285; 		// m[esp_50 - 76]{278}
    __size32 local286; 		// m[esp_50 - 76]{335}
    __size32 local287; 		// m[esp_50 - 76]{335}
    __size32 local288; 		// m[esp_50 - 80]{12}
    __size32 local289; 		// m[esp_50 - 80]{12}
    __size32 local29; 		// m[esp_50 + 4]{3}
    __size32 local290; 		// m[esp_50 - 80]{12}
    __size32 local291; 		// m[esp_50 - 80]{137}
    __size32 local292; 		// m[esp_50 - 80]{97}
    int local293; 		// m[esp_50 - 80]{160}
    int local294; 		// m[esp_50 - 80]{160}
    __size32 local295; 		// m[esp_50 - 80]{217}
    __size32 local296; 		// m[esp_50 - 80]{279}
    __size32 local297; 		// m[esp_50 - 80]{336}
    __size32 local298; 		// m[esp_50 - 80]{251}
    int local299; 		// m[esp_50 - 80]{228}
    int local3; 		// m[esp - 36]
    __size32 local30; 		// m[esp_50 + 4]{103}
    int local300; 		// m[esp_50 - 80]{228}
    __size32 local301; 		// m[esp_50 - 80]{72}
    __size32 local302; 		// m[esp_50 - 80]{180}
    __size32 local303; 		// m[esp_50 - 80]{97}
    __size32 local304; 		// m[esp_50 - 80]{97}
    __size32 local305; 		// m[esp_50 - 80]{336}
    __size32 local306; 		// m[esp_50 - 80]{336}
    __size32 local307; 		// m[esp_50 - 80]{251}
    __size32 local308; 		// m[esp_50 - 80]{251}
    __size32 local309; 		// m[esp_50 - 80]{217}
    __size32 local31; 		// m[esp_50 + 4]{103}
    __size32 local310; 		// m[esp_50 - 80]{217}
    __size32 local311; 		// m[esp_50 - 80]{279}
    __size32 local312; 		// m[esp_50 - 80]{279}
    __size32 local313; 		// m[esp_50 - 80]{137}
    __size32 local314; 		// m[esp_50 - 80]{137}
    __size32 local315; 		// m[esp_50 - 80]{180}
    __size32 local316; 		// m[esp_50 - 80]{180}
    __size32 local317; 		// m[esp_50 - 104]{17}
    __size32 local318; 		// m[esp_50 - 104]{17}
    __size32 local319; 		// m[esp_50 - 104]{17}
    __size32 local32; 		// m[esp_50 + 4]{186}
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
    __size32 local33; 		// m[esp_50 + 4]{186}
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
    __size32 local34; 		// m[esp_50 + 4]{257}
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
    __size32 local35; 		// m[esp_50 + 4]{257}
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
    __size32 local476; 		// m[esp_50 - 32]{64}
    __size32 local477; 		// m[esp_50 - 36]{65}
    __size32 local478; 		// m[esp_50 - 40]{66}
    __size32 local479; 		// m[esp_50 - 44]{67}
    int local48; 		// m[esp_50 - 4]{228}
    __size32 local480; 		// m[esp_50 - 48]{68}
    __size32 local481; 		// m[esp_50 - 68]{69}
    __size32 local482; 		// m[esp_50 - 72]{70}
    __size32 local483; 		// m[esp_50 - 76]{71}
    __size32 local484; 		// local301{72}
    __size32 local485; 		// m[esp_50 - 104]{73}
    __size32 local486; 		// m[esp_50 - 108]{74}
    unsigned int local487; 		// m[esp_50 - 112]{75}
    __size32 local488; 		// esp_31{84}
    int local489; 		// local401{87}
    __size32 local49; 		// m[esp_50 - 4]{171}
    __size32 local490; 		// local40{88}
    __size32 local491; 		// local68{89}
    __size32 local492; 		// local96{90}
    __size32 local493; 		// local124{91}
    __size32 local494; 		// local152{92}
    __size32 local495; 		// local180{93}
    __size32 local496; 		// local208{94}
    __size32 local497; 		// local236{95}
    __size32 local498; 		// local264{96}
    __size32 local499; 		// local292{97}
    int local5; 		// m[esp - 32]
    __size32 local50; 		// m[esp_50 - 4]{171}
    __size32 local500; 		// local321{98}
    __size32 local501; 		// local349{99}
    unsigned int local502; 		// local377{100}
    __size32 local503; 		// local21{103}
    int local504; 		// eax_1{109}
    union { __size32 *; __size32; } local505; 		// esp_25{124}
    unsigned int local506; 		// esi{126}
    __size32 local507; 		// local39{128}
    __size32 local508; 		// local67{129}
    __size32 local509; 		// local95{130}
    __size32 local51; 		// m[esp_50 - 4]{128}
    __size32 local510; 		// local123{131}
    __size32 local511; 		// local151{132}
    __size32 local512; 		// local179{133}
    __size32 local513; 		// local207{134}
    __size32 local514; 		// local235{135}
    __size32 local515; 		// local263{136}
    __size32 local516; 		// local291{137}
    __size32 local517; 		// local320{138}
    __size32 local518; 		// local348{139}
    unsigned int local519; 		// local376{140}
    __size32 local52; 		// m[esp_50 - 4]{128}
    union { __size32 *; unsigned int; } local520; 		// eax{151}
    __size32 local521; 		// esp_28{167}
    int local522; 		// local405{170}
    __size32 local523; 		// local49{171}
    __size32 local524; 		// local79{172}
    __size32 local525; 		// local107{173}
    __size32 local526; 		// local135{174}
    __size32 local527; 		// local163{175}
    __size32 local528; 		// local191{176}
    __size32 local529; 		// local219{177}
    __size32 local53; 		// m[esp_50 - 4]{88}
    __size32 local530; 		// local247{178}
    __size32 local531; 		// local275{179}
    __size32 local532; 		// local302{180}
    __size32 local533; 		// local332{181}
    __size32 local534; 		// local360{182}
    unsigned int local535; 		// local388{183}
    __size32 local536; 		// local24{186}
    unsigned int local537; 		// ebx{203}
    union { __size32 *; __size32; } local538; 		// esp_37{204}
    __size32 local539; 		// local43{208}
    __size32 local54; 		// m[esp_50 - 4]{88}
    __size32 local540; 		// local71{209}
    __size32 local541; 		// local99{210}
    __size32 local542; 		// local127{211}
    __size32 local543; 		// local155{212}
    __size32 local544; 		// local183{213}
    __size32 local545; 		// local211{214}
    __size32 local546; 		// local239{215}
    __size32 local547; 		// local267{216}
    __size32 local548; 		// local295{217}
    __size32 local549; 		// local324{218}
    __size32 local55; 		// m[esp_50 - 4]{299}
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
    __size32 local56; 		// m[esp_50 - 4]{208}
    __size32 local560; 		// local158{246}
    __size32 local561; 		// local186{247}
    __size32 local562; 		// local214{248}
    __size32 local563; 		// local242{249}
    __size32 local564; 		// local270{250}
    __size32 local565; 		// local298{251}
    __size32 local566; 		// local327{252}
    __size32 local567; 		// local355{253}
    unsigned int local568; 		// local383{254}
    __size32 local569; 		// local25{257}
    __size32 local57; 		// m[esp_50 - 4]{208}
    __size32 local570; 		// esp_43{264}
    unsigned int local571; 		// edi{267}
    int local572; 		// local411{268}
    __size16 local573; 		// local444{269}
    __size32 local574; 		// local44{270}
    __size32 local575; 		// local72{271}
    __size32 local576; 		// local100{272}
    __size32 local577; 		// local128{273}
    __size32 local578; 		// local156{274}
    __size32 local579; 		// local184{275}
    __size32 local58; 		// m[esp_50 - 4]{242}
    __size32 local580; 		// local212{276}
    __size32 local581; 		// local240{277}
    __size32 local582; 		// local268{278}
    __size32 local583; 		// local296{279}
    __size32 local584; 		// local325{280}
    __size32 local585; 		// local353{281}
    unsigned int local586; 		// local381{282}
    __size32 local587; 		// local27{285}
    __size32 local588; 		// esp_46{294}
    int local589; 		// local410{297}
    __size32 local59; 		// m[esp_50 - 4]{242}
    __size16 local590; 		// local443{298}
    __size32 local591; 		// local55{299}
    __size32 local592; 		// local83{300}
    __size32 local593; 		// local111{301}
    __size32 local594; 		// local139{302}
    __size32 local595; 		// local167{303}
    __size32 local596; 		// local195{304}
    __size32 local597; 		// local223{305}
    __size32 local598; 		// local251{306}
    __size32 local599; 		// local279{307}
    int local6; 		// m[esp - 48]
    __size32 local60; 		// m[esp_50 - 4]{270}
    __size32 local600; 		// m[esp_50 - 80]{308}
    __size32 local601; 		// local336{309}
    __size32 local602; 		// local364{310}
    unsigned int local603; 		// local392{311}
    __size32 local604; 		// m[esp_50 + 4]{314}
    __size32 local605; 		// esp_47{322}
    int local606; 		// local407{325}
    __size16 local607; 		// local440{326}
    __size32 local608; 		// local45{327}
    __size32 local609; 		// local73{328}
    __size32 local61; 		// m[esp_50 - 4]{270}
    __size32 local610; 		// local101{329}
    __size32 local611; 		// local129{330}
    __size32 local612; 		// local157{331}
    __size32 local613; 		// local185{332}
    __size32 local614; 		// local213{333}
    __size32 local615; 		// local241{334}
    __size32 local616; 		// local269{335}
    __size32 local617; 		// local297{336}
    __size32 local618; 		// local326{337}
    __size32 local619; 		// local354{338}
    __size32 local62; 		// m[esp_50 - 4]{327}
    unsigned int local620; 		// local382{339}
    __size32 local621; 		// local15{342}
    __size32 local622; 		// esp{348}
    __size32 local63; 		// m[esp_50 - 4]{327}
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
    __size32 local81; 		// m[esp_50 - 32]{89}
    __size32 local82; 		// m[esp_50 - 32]{89}
    __size32 local83; 		// m[esp_50 - 32]{300}
    __size32 local84; 		// m[esp_50 - 32]{209}
    __size32 local85; 		// m[esp_50 - 32]{209}
    __size32 local86; 		// m[esp_50 - 32]{243}
    __size32 local87; 		// m[esp_50 - 32]{243}
    __size32 local88; 		// m[esp_50 - 32]{271}
    __size32 local89; 		// m[esp_50 - 32]{271}
    int local9; 		// m[esp - 76]
    __size32 local90; 		// m[esp_50 - 32]{328}
    __size32 local91; 		// m[esp_50 - 32]{328}
    __size32 local92; 		// m[esp_50 - 36]{9}
    __size32 local93; 		// m[esp_50 - 36]{9}
    __size32 local94; 		// m[esp_50 - 36]{9}
    __size32 local95; 		// m[esp_50 - 36]{130}
    __size32 local96; 		// m[esp_50 - 36]{90}
    int local97; 		// m[esp_50 - 36]{160}
    int local98; 		// m[esp_50 - 36]{160}
    __size32 local99; 		// m[esp_50 - 36]{210}

    local36 = param2;
    local148 = caml_local_roots;
    local92 = 1;
    local120 = 1;
    local64 = esp_50 + 4;
    local288 = esp_50 - 44;
    caml_local_roots = esp_50 - 80;
    local232 = 1;
    local260 = 1;
    local204 = esp_50 - 48;
    local317 = 0;
    eax = caml_alloc_small(1, 0); /* Warning: also results in ebx */
    local473 = local437;
    local474 = local470;
    local475 = local36;
    local476 = local64;
    local477 = local92;
    local478 = local120;
    local479 = local148;
    local481 = local204;
    local482 = local232;
    local483 = local260;
    local484 = local288;
    local485 = local317;
    local489 = local437;
    local490 = local36;
    local491 = local64;
    local492 = local92;
    local493 = local120;
    local494 = local148;
    local496 = local204;
    local497 = local232;
    local498 = local260;
    local499 = local288;
    local500 = local317;
    local503 = param1;
    local176 = eax;
    *(__size32*)eax = param1;
    local345 = eax;
    esp_4 = caml_raise(param1, eax, ebx, esp_50 - 4); /* Warning: also results in ebp */
    local480 = local176;
    local486 = local345;
    local487 = local373;
    local495 = local176;
    local501 = local345;
    local502 = local373;
    *(__size32*)(esp_4 - 4) = ebp;
    *(__size32*)(esp_4 - 28) = 0x806dae0;
    esp_7 = caml_raise_constant(*(esp_4 - 28), esp_4 - 4, *(esp_4 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_7 - 4) = ebp;
    *(__size32*)(esp_7 - 28) = 0x806da78;
    esp_10 = caml_raise_constant(*(esp_7 - 28), esp_7 - 4, *(esp_7 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_10 - 4) = ebp;
    *(__size32*)(esp_10 - 28) = 0x806da50;
    esp_1 = caml_raise_constant(*(esp_10 - 28), esp_10 - 4, *(esp_10 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_1 - 4) = ebp;
    *(__size32*)(esp_1 - 28) = 0x806da30;
    cl = caml_raise_constant(*(esp_1 - 28), esp_1 - 4, *(esp_1 - 176)); /* Warning: also results in dl, ecx, edx, ebx, esp_13, ebp, esi, edi */
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
bb0x805c3a7:
            esp_31 = local488;
            local401 = local489;
            local40 = local490;
            local68 = local491;
            local96 = local492;
            local124 = local493;
            local152 = local494;
            local180 = local495;
            local208 = local496;
            local236 = local497;
            local264 = local498;
            local292 = local499;
            local321 = local500;
            local349 = local501;
            local377 = local502;
            local21 = local503;
            esi = *(global_0x0807655c + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local472 = esp_31;
            local473 = local401;
            local475 = local40;
            local476 = local68;
            local477 = local96;
            local478 = local124;
            local479 = local152;
            local480 = local180;
            local481 = local208;
            local482 = local236;
            local483 = local264;
            local484 = local292;
            local485 = local321;
            local486 = local349;
            local487 = local377;
            local488 = esp_31;
            local489 = local401;
            local490 = local40;
            local491 = local68;
            local492 = local96;
            local493 = local124;
            local494 = local152;
            local495 = local180;
            local496 = local208;
            local497 = local236;
            local498 = local264;
            local499 = local292;
            local500 = local321;
            local501 = local349;
            local502 = local377;
            local503 = local21;
            local504 = eax;
            local505 = esp_31;
            local507 = local40;
            local508 = local68;
            local509 = local96;
            local510 = local124;
            local511 = local152;
            local512 = local180;
            local513 = local208;
            local514 = local236;
            local515 = local264;
            local516 = local292;
            local517 = local321;
            local518 = local349;
            local519 = local377;
            local521 = esp_31;
            local522 = local401;
            local523 = local40;
            local524 = local68;
            local525 = local96;
            local526 = local124;
            local527 = local152;
            local528 = local180;
            local529 = local208;
            local530 = local236;
            local531 = local264;
            local532 = local292;
            local533 = local321;
            local534 = local349;
            local535 = local377;
            local536 = local21;
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
                        local151 = local511;
                        local179 = local512;
                        local207 = local513;
                        local235 = local514;
                        local263 = local515;
                        local291 = local516;
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
                        (*ebx)((unsigned char) eax, eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, local39, local67, local95, local123, local151, local179, local207, local235, local263, local291, local320, local348, local376, cl, dl, param1, param1);
                        local505 = esp_19;
                        local507 = local41;
                        local508 = local69;
                        local509 = local97;
                        local510 = local125;
                        local511 = local153;
                        local512 = local181;
                        local513 = local209;
                        local514 = local237;
                        local515 = local265;
                        local516 = local293;
                        local517 = local322;
                        local518 = local350;
                        local519 = local378;
                        local521 = esp_19;
                        local522 = local402;
                        local523 = local41;
                        local524 = local69;
                        local525 = local97;
                        local526 = local125;
                        local527 = local153;
                        local528 = local181;
                        local529 = local209;
                        local530 = local237;
                        local531 = local265;
                        local532 = local293;
                        local533 = local322;
                        local534 = local350;
                        local535 = local378;
                        local536 = local18;
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
                local49 = local523;
                local79 = local524;
                local107 = local525;
                local135 = local526;
                local163 = local527;
                local191 = local528;
                local219 = local529;
                local247 = local530;
                local275 = local531;
                local302 = local532;
                local332 = local533;
                local360 = local534;
                local388 = local535;
                local24 = local536;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local488 = esp_28;
                local489 = local405;
                local490 = local49;
                local491 = local79;
                local492 = local107;
                local493 = local135;
                local494 = local163;
                local495 = local191;
                local496 = local219;
                local497 = local247;
                local498 = local275;
                local499 = local302;
                local500 = local332;
                local501 = local360;
                local502 = local388;
                local503 = local24;
                goto bb0x805c3a7;
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
    *(__size32*)(esp_50 - 32) = local476;
    *(__size32*)(esp_50 - 36) = local477;
    *(__size32*)(esp_50 - 40) = local478;
    *(__size32*)(esp_50 - 44) = local479;
    *(__size32*)(esp_50 - 48) = local480;
    *(__size32*)(esp_50 - 68) = local481;
    *(__size32*)(esp_50 - 72) = local482;
    *(__size32*)(esp_50 - 76) = local483;
    local301 = local484;
    *(__size32*)(esp_50 - 104) = local485;
    *(__size32*)(esp_50 - 108) = local486;
    *(unsigned int*)(esp_50 - 112) = local487;
    local605 = esp_34;
    local606 = local409;
    local607 = local442;
    local608 = *(esp_50 - 4);
    local609 = *(esp_50 - 32);
    local610 = *(esp_50 - 36);
    local611 = *(esp_50 - 40);
    local612 = *(esp_50 - 44);
    local613 = *(esp_50 - 48);
    local614 = *(esp_50 - 68);
    local615 = *(esp_50 - 72);
    local616 = *(esp_50 - 76);
    local617 = local301;
    local618 = *(esp_50 - 104);
    local619 = *(esp_50 - 108);
    local620 = *(esp_50 - 112);
    local621 = local26;
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
            local157 = local612;
            local185 = local613;
            local213 = local614;
            local241 = local615;
            local269 = local616;
            local297 = local617;
            local326 = local618;
            local354 = local619;
            local382 = local620;
            local15 = local621;
            edi = 0;
            local570 = esp_47;
            local571 = edi;
            local572 = local407;
            local573 = local440;
            local574 = local45;
            local575 = local73;
            local576 = local101;
            local577 = local129;
            local578 = local157;
            local579 = local185;
            local580 = local213;
            local581 = local241;
            local582 = local269;
            local583 = local297;
            local584 = local326;
            local585 = local354;
            local586 = local382;
            local587 = local15;
            local588 = esp_47;
            local589 = local407;
            local590 = local440;
            local591 = local45;
            local592 = local73;
            local593 = local101;
            local594 = local129;
            local595 = local157;
            local596 = local185;
            local597 = local213;
            local598 = local241;
            local599 = local269;
            local600 = local297;
            local601 = local326;
            local602 = local354;
            local603 = local382;
            local604 = local15;
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
                    local156 = local578;
                    local184 = local579;
                    local212 = local580;
                    local240 = local581;
                    local268 = local582;
                    local296 = local583;
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
                    local543 = local156;
                    local544 = local184;
                    local545 = local212;
                    local546 = local240;
                    local547 = local268;
                    local548 = local296;
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
                    local560 = local156;
                    local561 = local184;
                    local562 = local212;
                    local563 = local240;
                    local564 = local268;
                    local565 = local296;
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
                            local155 = local543;
                            local183 = local544;
                            local211 = local545;
                            local239 = local546;
                            local267 = local547;
                            local295 = local548;
                            local324 = local549;
                            local352 = local550;
                            local380 = local551;
                            eax_9 = ebx * 4 + *(esi + edi * 4 + 12);
                            *(__size32*)(esp_37 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_37 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, eax_12, ecx, edx, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), local43, local71, local99, local127, local155, local183, local211, local239, local267, local295, local324, local352, local380, cl, dl, param1, param1);
                            local538 = esp_22;
                            local539 = local47;
                            local540 = local75;
                            local541 = local103;
                            local542 = local131;
                            local543 = local159;
                            local544 = local187;
                            local545 = local215;
                            local546 = local243;
                            local547 = local271;
                            local548 = local299;
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
                            local560 = local159;
                            local561 = local187;
                            local562 = local215;
                            local563 = local243;
                            local564 = local271;
                            local565 = local299;
                            local566 = local328;
                            local567 = local356;
                            local568 = local384;
                            local569 = local22;
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
                    local158 = local560;
                    local186 = local561;
                    local214 = local562;
                    local242 = local563;
                    local270 = local564;
                    local298 = local565;
                    local327 = local566;
                    local355 = local567;
                    local383 = local568;
                    local25 = local569;
                    edi_2 = edi_1 + 1;
                    local570 = esp_40;
                    local571 = edi_2;
                    local572 = local408;
                    local573 = local441;
                    local574 = local46;
                    local575 = local74;
                    local576 = local102;
                    local577 = local130;
                    local578 = local158;
                    local579 = local186;
                    local580 = local214;
                    local581 = local242;
                    local582 = local270;
                    local583 = local298;
                    local584 = local327;
                    local585 = local355;
                    local586 = local383;
                    local587 = local25;
                    local588 = esp_40;
                    local589 = local408;
                    local590 = local441;
                    local591 = local46;
                    local592 = local74;
                    local593 = local102;
                    local594 = local130;
                    local595 = local158;
                    local596 = local186;
                    local597 = local214;
                    local598 = local242;
                    local599 = local270;
                    local600 = local298;
                    local601 = local327;
                    local602 = local355;
                    local603 = local383;
                    local604 = local25;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_46 = local588;
            local410 = local589;
            local443 = local590;
            local55 = local591;
            local83 = local592;
            local111 = local593;
            local139 = local594;
            local167 = local595;
            local195 = local596;
            local223 = local597;
            local251 = local598;
            local279 = local599;
            *(__size32*)(esp_50 - 80) = local600;
            local336 = local601;
            local364 = local602;
            local392 = local603;
            *(__size32*)(esp_50 + 4) = local604;
            esi = *esi;
            local605 = esp_46;
            local606 = local410;
            local607 = local443;
            local608 = local55;
            local609 = local83;
            local610 = local111;
            local611 = local139;
            local612 = local167;
            local613 = local195;
            local614 = local223;
            local615 = local251;
            local616 = local279;
            local617 = *(esp_50 - 80);
            local618 = local336;
            local619 = local364;
            local620 = local392;
            local621 = *(esp_50 + 4);
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

/** address: 0x0805f1a1 */
__size32 caml_stat_free(union { void *; __size32; } param1)
{
    int ecx; 		// r25
    int edx; 		// r26

    ecx = free(param1); /* Warning: also results in edx */
    return ecx; /* WARNING: Also returning: edx := edx */
}

/** address: 0x0805c7ca */
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
    __size32 ebp_1; 		// r29{102}
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
    __size32 ebp_2; 		// r29{9}
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
    __size32 ebp_5; 		// r29{134}
    __size32 ebp_6; 		// r29{189}
    __size32 ebp_7; 		// r29{29}
    __size32 ebp_8; 		// r29{301}
    __size32 ebp_9; 		// r29{273}
    unsigned int ebx_1; 		// r27{102}
    union { __size32 *; unsigned int; } ebx_10; 		// r27{162}
    unsigned int ebx_13; 		// r27{62}
    unsigned int ebx_16; 		// r27{189}
    unsigned int ebx_17; 		// r27{29}
    unsigned int ebx_18; 		// r27{37}
    unsigned int ebx_2; 		// r27{111}
    unsigned int ebx_21; 		// r27{299}
    unsigned int ebx_22; 		// r27{271}
    __size32 ebx_23; 		// r27{329}
    unsigned int ebx_24; 		// r27{290}
    unsigned int ebx_27; 		// r27{250}
    unsigned int ebx_28; 		// r27{257}
    unsigned int ebx_29; 		// r27{238}
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
    unsigned int ebx_5; 		// r27{88}
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
    int ecx_5; 		// r25{102}
    int ecx_6; 		// r25{73}
    __size32 ecx_9; 		// r25{141}
    unsigned int edi_1; 		// r31{102}
    __size32 edi_10; 		// r31{189}
    __size32 edi_11; 		// r31{200}
    unsigned int edi_12; 		// r31{29}
    unsigned int edi_13; 		// r31{51}
    unsigned int edi_16; 		// r31{317}
    __size32 edi_17; 		// r31{329}
    unsigned int edi_18; 		// r31{250}
    unsigned int edi_19; 		// r31{275}
    unsigned int edi_2; 		// r31{12}
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
    union { unsigned short *; unsigned int; } edi_49; 		// r31{175}
    unsigned int edi_5; 		// r31{83}
    union { unsigned short *; unsigned int; } edi_50; 		// r31{196}
    unsigned int edi_8; 		// r31{134}
    __size32 edi_9; 		// r31{168}
    unsigned int edx; 		// r26
    __size32 esi; 		// r30
    __size32 esi_1; 		// r30{102}
    __size32 esi_10; 		// r30{232}
    unsigned int esi_13; 		// r30{189}
    unsigned int esi_14; 		// r30{195}
    unsigned int esi_15; 		// r30{198}
    __size32 esi_17; 		// r30{29}
    __size32 esi_18; 		// r30{329}
    __size32 esi_19; 		// r30{304}
    int esi_2; 		// r30{84}
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
    __size32 esp_1; 		// r28{102}
    union { __size32; unsigned int *; } esp_14; 		// r28{250}
    unsigned int *esp_15; 		// r28{33}
    unsigned int *esp_18; 		// r28{19}
    union { __size32; unsigned int *; } esp_2; 		// r28{10}
    unsigned int *esp_21; 		// r28{43}
    unsigned int *esp_24; 		// r28{55}
    union { unsigned int *; __size32; } esp_27; 		// r28{68}
    union { unsigned int *; __size32; } esp_28; 		// r28{106}
    union { unsigned int *; __size32; } esp_31; 		// r28{93}
    union { __size32; unsigned int *; } esp_34; 		// r28{118}
    union { __size32; unsigned int *; } esp_37; 		// r28{79}
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

    ebp_2 = esp_78 - 4;
    esp_2 = esp_78 - 60;
    local24 = param1;
    local25 = param2;
    local26 = esp_2;
    local27 = ebp_2;
    local29 = param1;
    local29 = param1;
    local30 = param3;
    local30 = param3;
    local31 = esp_2;
    local31 = esp_2;
    local32 = ebp_2;
    local32 = ebp_2;
    local33 = param6;
    if (caml_globals_scanned <= caml_globals_inited) {
        edi_2 = caml_globals[caml_globals_scanned];
        local28 = edi_2;
        local33 = edi_2;
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
                        if ( ~(((unsigned char) eax_8 & 0x1) != 0 || eax_8 >= *(&caml_globals + 0x99dc) || eax_8 <= *(&caml_globals + 0x99d8))) {
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
                eax = *(&caml_globals + 0x6870);
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
    eax = *(&caml_globals + 0x6870);
    ebx_38 = local30;
    esp_27 = local31;
    ebp_21 = local32;
    edi_28 = local33;
    *(unsigned int*)(&caml_globals + 0x687c) = eax;
    ecx_6 = *(&caml_globals + 0x6878);
    *(int*)(ebp_21 - 28) = ecx_6;
    local34 = param1;
    local35 = ecx_6;
    local36 = ebx_38;
    local37 = esp_27;
    local38 = ebp_21;
    local56 = param1;
    local57 = ebx_38;
    local58 = esp_27;
    local59 = ebp_21;
    local60 = edi_28;
    if (ecx_6 != 0) {
        do {
            bl = local34;
            ecx_28 = local35;
            ebx_37 = local36;
            esp_37 = local37;
            ebp_20 = local38;
            eax = *(ebp_20 - 28);
            edi_5 = *eax;
            esi_2 = edi_5 - 4;
            eax = *(edi_5 - 4);
            local39 = ecx_28;
            local41 = esp_37;
            local42 = ebp_20;
            local43 = esi_2;
            local44 = edi_5;
            local51 = ecx_28;
            local52 = ebx_37;
            local53 = esp_37;
            local54 = ebp_20;
            local55 = edi_5;
            if ((unsigned int)eax >> 10 != 0) {
                eax = 0;
                ebx_5 = 0;
                local40 = ebx_5;
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
                    if ( ~(((unsigned char) eax_2 & 0x1) != 0 || eax_2 >= *(&caml_globals + 0x99dc) || eax_2 <= *(&caml_globals + 0x99d8))) {
                        *(unsigned int*)(esp_31 + 4) = edi_27 + eax_1 * 4;
                        *(unsigned int*)esp_31 = eax_2;
                        bl = caml_oldify_one(*esp_31, *(esp_31 + 4), (unsigned char) edi_27 + eax_1 * 4, eax_2, ecx_27, edi_27 + eax_1 * 4); /* Warning: also results in ecx_5, ebx_1, esp_1, ebp_1, esi_1, edi_1 */
                        local45 = ecx_5;
                        local46 = ebx_1;
                        local47 = esp_1;
                        local48 = ebp_1;
                        local49 = esi_1;
                        local50 = edi_1;
                    }
                    ecx_26 = local45;
                    ebx_35 = local46;
                    esp_28 = local47;
                    ebp_18 = local48;
                    esi_25 = local49;
                    edi_26 = local50;
                    tmpb = (unsigned char) eax_2 & 0x1;
                    ebx_2 = ebx_35 + 1;
                    eax = ebx_35 + 1;
                    edx = *esi_25;
                    local39 = ecx_26;
                    local40 = ebx_2;
                    local41 = esp_28;
                    local42 = ebp_18;
                    local43 = esi_25;
                    local44 = edi_26;
                    local51 = ecx_26;
                    local52 = ebx_2;
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
    if (*0x80743bc == 0) {
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
    ecx_9 = *(&caml_globals + 0x686c);
    *(__size32*)(ebp_15 - 28) = ecx_9;
    edx = *(&caml_globals + 0x6598);
    dl_2 = (unsigned char) edx;
    eax = *(&caml_globals + 0xd474);
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
bb0x805c8f7:
            esp_51 = local65;
            ebp_14 = local66;
            edi_22 = local67;
            esi_3 = *(&caml_globals + 0xd46c);
            eax = (unsigned int)edx >> 3 & esi_3;
            ecx_12 = *(&caml_globals + 0x6868);
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
                        if ( ~(((unsigned char) eax & 0x1) != 0 || eax >= *(&caml_globals + 0x99dc) || eax <= *(&caml_globals + 0x99d8))) {
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
                goto bb0x805c8f7;
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
    esi_10 = *(&caml_globals + 0x6860);
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
                            if ( ~(((unsigned char) eax_11 & 0x1) != 0 || eax_11 >= *(&caml_globals + 0x99dc) || eax_11 <= *(&caml_globals + 0x99d8))) {
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
    *(esp_78 - 32) = *0x80743d0;
    *(__size32*)esp_75 = 0x805ea4c;
    cl = caml_scan_global_young_roots(*esp_75, ecx_1); /* Warning: also results in ecx, edx, esp_8 */
    *(__size32*)esp_8 = 0x805ea4c;
    edx = caml_final_do_young_roots(*esp_8, edx); /* Warning: also results in ebx_23, ebp_11, esi_18, edi_17 */
    eax = *(&caml_globals + 0x6864);
    if (eax != 0) {
        *(__size32*)esp_11 = 0x805ea4c;
        (*eax)((unsigned char) eax, dl, bl, eax, ecx, edx, ebx_23, ebp_11, esi_18, edi_17, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), param4, param6, param5, param3, *(esp_78 - 32), cl);
    }
    return;
}

/** address: 0x0805ea4c */
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
bb0x805ea5b:
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
    while ( ~((bl & 0x1) != 0 || ebx_2 >= *(&caml_globals + 0x99dc) || ebx_2 <= *(&caml_globals + 0x99d8))) {
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
bb0x805eba9:
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
                            goto bb0x805eba9;
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
                    goto bb0x805ea5b;
                }
                else {
                    *(unsigned int*)((unsigned char) edx_1) = edx_4;
                    edx_7 = *(&caml_globals + 0x9a24);
                    dl = (unsigned char) edx_7;
                    *(__size32*)(((unsigned char) edx_1) + 4) = edx_7;
                    *(union { unsigned int *; __size32; }*)0x8077578 = ebx_2;
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
bb0x805ea5b:
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

/** address: 0x0805ebdb */
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
        edi = *0x8077578;
        local5 = esp_4;
        if (edi != 0) {
            ebx = *edi;
            esi = ebx + 4;
            eax = *(ebx + 4);
            *(__size32*)(&caml_globals + 0x9a24) = eax;
            eax = *ebx;
            if ( ~(((unsigned char) eax & 0x1) != 0 || eax >= *(&caml_globals + 0x99dc) || eax <= *(&caml_globals + 0x99d8))) {
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
bb0x805ec52:
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
    if (((unsigned char) eax & 0x1) != 0 || eax >= *(&caml_globals + 0x99dc) || eax <= *(&caml_globals + 0x99d8)) {
        *(unsigned int*)esi = eax;
        goto bb0x805ec52;
    }
    else {
        *(__size32*)(esp_2 + 4) = esi;
        *(unsigned int*)esp_2 = eax;
        dl = caml_oldify_one(*esp_2, *(esp_2 + 4), dl, eax, ecx, edx); /* Warning: also results in ecx, edx, ebx, esp, ebp, esi, edi */
        local7 = esp;
        goto bb0x805ec52;
    }
    goto bb0x805ec52;
}

/** address: 0x08069af5 */
void caml_final_empty_young()
{
    __size32 eax; 		// r24

    eax = *(global_0x0807655c + 0x4568);
    *(__size32*)(global_0x0807655c + 0x4574) = eax;
    return;
}

/** address: 0x0805e017 */
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

    ecx = caml_gc_message(1, 0x806b7eb);
    ebp = caml_darken_all_roots(al, cl, dl, ecx, ebx, esi, edi);
    *(__size32*)(&caml_globals + 0xd5a8) = 0;
    *(__size32*)(&caml_globals + 0xd594) = 10;
    *(__size32*)(&caml_globals + 0x99c8) = 0;
    ebp = *ebp;
    return ebp;
}

/** address: 0x0806aae8 */
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
    (*esi)(local0, caml_last_return_address, caml_bottom_of_stack, 0x806aa5e, caml_exception_pointer, pc);
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

/** address: 0x08068759 */
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
    eax = caml_named_value(0x806c287); /* Warning: also results in esp */
    if (eax != 0) {
        ebx = caml_callback_exn(); /* Warning: also results in esp, esi, edi */
    }
    *(__size32*)(&named_value_table + 100) = esi;
    *(__size32*)(&named_value_table + 104) = edi;
    *(__size32*)(esp + 8) = ebx;
    *(__size32*)(esp + 4) = 0x806c29d;
    *(__size32*)esp = stderr;
    fprintf(*esp, *(esp + 4));
    *(__size32*)esp = ebx;
    ecx = free(*esp);
    if (*0x807aae4 != 0) {
        caml_print_exception_backtrace(*(esp - 96), *(esp - 92), *(esp - 88), *(esp - 84), *(esp - 80), *(esp - 76), *(esp - 72), *(esp - 56), *(esp - 48), *(esp - 44), *(esp - 40), *(esp - 36), param2, ecx);
    }
    *(__size32*)esp = 2;
    exit(*esp);
    return;
}

/** address: 0x0806aaa0 */
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

    tmp1 = *(&caml_globals + 0xcf90) & 0x1;
    if (tmp1 != 0) {
        ecx = caml_stash_backtrace(local5, local6, local2, local1, param2, param3, param3); /* Warning: also results in edx, ebx, ebp */
        esp = *0x80743a0;
        *(__size32*)(&caml_globals + 0x684c) = *esp;
    }
    else {
        esp = *0x80743a0;
        *(__size32*)(&caml_globals + 0x684c) = *esp;
    }
    return ecx; /* WARNING: Also returning: edx := edx, ebx := ebx, ebp := ebp */
}

/** address: 0x0805f91a */
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
        eax = *(&caml_globals + 0x99e0) - edx;
        *(unsigned int*)(&caml_globals + 0x99e0) = eax;
        if (eax < *(&caml_globals + 0x99e4)) {
            *(unsigned int*)(&caml_globals + 0x99e0) = eax + edx;
            caml_minor_collection();
            *(__size32*)(&caml_globals + 0x99e0) += edi;
        }
        ebx = param1 + 4 >> 2;
        ebp = esp_4 - 4;
        eax = *0x8077534;
        *(__size32*)eax = (ebx << 10) + 1020;
        eax = *(&caml_globals + 0x99e0);
        eax += 4;
    }
    *(__size32*)(eax + ebx * 4 - 4) = 0;
    *(unsigned int*)(eax + ebx * 4 - 1) = ebx * 4 - (unsigned char) param1;
    ebx = *(ebp - 12);
    ebp = *ebp;
    return eax; /* WARNING: Also returning: ebx := ebx, ebp := ebp */
}

/** address: 0x0805c53e */
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
    if (*0x80743d8 == 0) {
        eax = *(&caml_globals + 732);
        if (eax != 0) {
            do {
                *(__size32*)esp = eax;
                ebx = caml_register_frametable(*esp); /* Warning: also results in esp, esi */
                eax = *(esi + (ebx + 1) * 4);
            } while (eax != 0);
        }
        *(__size32*)(&caml_globals + 0x6884) = 1;
    }
    eax = *(&caml_globals + 0x6880);
    if (eax == 0) {
bb0x805c66d:
        *(__size32*)esp = 16;
        eax = caml_stat_alloc(*esp); /* Warning: also results in al, cl, dl, ecx, esp, ebp */
        *(unsigned int*)(&caml_globals + 0x6868) = eax;
        ebx = 4;
bb0x805c683:
        eax = 0;
        local6 = eax;
        do {
            eax_5 = local6;
            edx = *(&caml_globals + 0x6868);
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
            goto bb0x805c66d;
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
            *(unsigned int*)(&caml_globals + 0x6868) = eax;
            if (ebx > 0) {
                goto bb0x805c683;
            }
        }
    }
    *(int*)(&caml_globals + 0xd46c) = ebx - 1;
    eax = *(&caml_globals + 0x6880);
    *(__size32*)(ebp - 32) = eax;
    if (eax != 0) {
        do {
            eax = *(ebp - 32);
            esi = *eax;
            eax = *esi;
            *(int*)(ebp - 28) = eax;
            if (eax > 0) {
                ebx = *(&caml_globals + 0xd46c);
                eax_1 = *(esi + 4);
                eax = (unsigned int)eax_1 >> 3 & ebx;
                ecx = *(&caml_globals + 0x6868);
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

/** address: 0x0805cbff */
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

    ebx = caml_iterate_global_roots(param1, 0x80743e0); /* Warning: also results in esp */
    local4 = param2;
    esp = caml_iterate_global_roots(ebx, 0x8074440);
    ebx = *(&caml_globals + 0x68f0);
    if (ebx != 0) {
        do {
            cl = caml_insert_global_root(0x80744a0, edx); /* Warning: also results in ecx, ebx, esp */
            local4 = ecx;
            ebx = *(ebx + 4);
        } while (ebx != 0);
        eax = *(&caml_globals + 0x68f0);
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
    edx = *(&caml_globals + 0x6934);
    local6 = param2;
    if (edx >= 0) {
        eax = 0;
        ecx = 0x8074444;
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
    *(__size32*)(&caml_globals + 0x6934) = 0;
    return cl; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x08069a95 */
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
    esi = *(global_0x0807655c + 0x4574);
    local30 = param2;
    local31 = esp_1;
    local32 = esi;
    local33 = param2;
    local34 = esp_1;
    if (esi < *(global_0x0807655c + 0x4568)) {
        ebx = esi * 12;
        do {
            param2 = local30;
            esp_8 = local31;
            esi = local32;
            eax_1 = ebx + *0x807aacc;
            *(__size32*)(esp_8 + 4) = eax_1;
            eax_4 = *eax_1;
            *(__size32*)esp_8 = eax_4;
            (*edi)(eax_4, param2, ebx, ebp, esi, edi, ADDFLAGS32(ebx, *0x807aacc, eax_1), ADDFLAGS32(ebx, *0x807aacc, eax_1), ADDFLAGS32(ebx, *0x807aacc, eax_1), param1, local9, local14, local19, local24);
            eax_6 = ebx + *(global_0x0807655c + 0x4570);
            *(__size32*)(esp_4 + 4) = eax_6 + 4;
            eax_9 = *(eax_6 + 4);
            *(__size32*)esp_4 = eax_9;
            (*edi)(eax_9, eax_6 + 4, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx, *0x807aacc, eax_6), ADDFLAGS32(ebx, *0x807aacc, eax_6), ADDFLAGS32(ebx, *0x807aacc, eax_6), local5, local10, local15, local20, local25);
            local30 = edx;
            local31 = esp_7;
            local33 = edx;
            local34 = esp_7;
            esi_4 = esi_1 + 1;
            ebx += 12;
            local32 = esi_4;
        } while (*(global_0x0807655c + 0x4568) > esi_1 + 1);
    }
    param2 = local33;
    esp = local34;
    ebx = *(esp + 28);
    esi = *(esp + 32);
    edi = *(esp + 36);
    ebp = *(esp + 40);
    return param2; /* WARNING: Also returning: ebx := ebx, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x0805f642 */
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
        edx = *(&caml_globals + 0xd59c) * ((unsigned long long)((esi_1) * 0x51eb851f >> 32) >> 5);
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
    *(__size32*)(&caml_globals + 0xd5b4) = %eax;
    if ( ~flags) {
        caml_urge_major_slice();
    }
    return;
}

/** address: 0x0805c7b6 */
__size32 caml_darken_all_roots(__size8 param2, __size8 param3, __size8 param3, __size32 param5, unsigned int param6, unsigned int param7, __size32 param7)
{
    __size32 ebp; 		// r29
    __size32 esp; 		// r28
    __size32 local3; 		// m[esp - 64]

    ebp = caml_do_roots(local3, param2, param3, param3, param5, param6, esp - 4, param7, param7);
    ebp = *ebp;
    return ebp;
}

/** address: 0x080685b2 */
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

/** address: 0x08068840 */
__size32 caml_named_value(union { char *; __size32; } param1)
{
    int eax; 		// r24
    __size32 ebx; 		// r27

    eax = hash_value_name(param1);
    ebx = named_value_table[eax];
    if (named_value_table[eax] == 0) {
bb0x806887b:
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
        goto bb0x806887b;
    }
    return eax;
}

/** address: 0x0806a728 */
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
                local4 = 0x806c3dc;
                local5 = 0x806c400;
                eax = *0x8074220;
                local6 = eax;
                ecx = fprintf(eax, "%s file \"%s\", line %d, characters %d-%d\n", 0x806c3dc, param9, param10, param11, param12);
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

/** address: 0x0806a7b9 */
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
    if (param2 != *0x80741c8) {
        *(__size32*)(&caml_globals + 0xcf94) = 0;
        *(__size32*)(&caml_globals + 0x6674) = param2;
    }
    if (*0x807aaec != 0) {
bb0x806a804:
        esp_2 = esp - 44;
        param1 = local6;
        local7 = esp_2;
        local8 = param1;
        if (*0x80743bc == 0) {
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
            edi = *(&caml_globals + 0xd46c);
            edx = (unsigned int)ebx >> 3 & edi;
            ecx = *(&caml_globals + 0x6868);
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
bb0x806a844:
                    edx = local13;
                    local15 = edx;
                    if (*(eax + 4) == -1) {
                        esi = *(esi_1 + 8);
                        ebx = *(esi_1 + 12);
                        local14 = esi;
                        if (esi != 0) {
bb0x806a887:
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
                        edx_4 = *(&caml_globals + 0xcf94);
                        local15 = edx_4;
                        if (edx_4 <= 1023) {
                            ecx = *(&caml_globals + 0xcf98);
                            *(__size32*)(ecx + edx_4 * 4) = eax;
                            edx = edx_4 + 1;
                            *(__size32*)(&caml_globals + 0xcf94) = edx_4 + 1;
                            eax_1 = *(unsigned short*)(eax + 4);
                            esi_2 = esi_1 + (eax_1 & 0xfffc);
                            ebx = *(esi_1 + (eax_1 & 0xfffc) - 4);
                            local14 = esi_2;
                            goto bb0x806a887;
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
                    goto bb0x806a844;
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
        *(union { void *; __size32; }*)0x807aaec = eax;
        if (eax != 0) {
            goto bb0x806a804;
        }
    }
    edx = local15;
    esp = local16;
    ebx = *(esp + 28);
    ebp = *(esp + 40);
    return ecx; /* WARNING: Also returning: edx := edx, ebx := ebx, ebp := ebp */
}

/** address: 0x0805ee2c */
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
    *(__size32*)(&caml_globals + 0x6860) = esp_8 - 44;
    eax = *(&caml_globals + 0x69a0);
    local8 = esp_1;
    if (eax != 0) {
        esp_4 = esp_8 - 48;
        caml_minor_collection();
        local8 = esp_4;
    }
    ebx = *(&caml_globals + 0x6860);
    esp_5 = local8;
    *(__size32*)(&caml_globals + 0x6860) = ebx;
    ebx = *(esp_5 + 36);
    ebp = *(esp_5 + 40);
    return local7; /* WARNING: Also returning: ebx := ebx, ebp := ebp */
}

/** address: 0x0805c508 */
__size32 caml_register_frametable(__size32 param1)
{
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 esi; 		// r30
    __size32 *esp_1; 		// r28{3}

    ebx = cons(); /* Warning: also results in esp_1, esi */
    *(__size32*)(&caml_globals + 0x6880) = param1;
    eax = *(&caml_globals + 0x6868);
    if (eax != 0) {
        *(__size32*)esp_1 = eax;
        caml_stat_free(*esp_1);
        *(__size32*)(&caml_globals + 0x6868) = 0;
    }
    return ebx; /* WARNING: Also returning: esi := esi */
}

/** address: 0x0805ca50 */
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

/** address: 0x0805cab0 */
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
bb0x805cad1:
            ecx_4 = local9;
            edx_2 = local10;
            eax_4 = *(edx_2 + ecx_4 * 4 + 4);
            local9 = ecx_4;
            local10 = edx_2;
            local11 = edx_2;
            if ( ~(eax_4 == 0 || *eax_4 >= param2)) {
                edx = eax_4;
                local10 = edx;
                goto bb0x805cad1;
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
        eax_8 = *(&caml_globals + 0x6998) * 0x10dcd;
        eax_11 = eax_8 + 0x6255;
        *(__size32*)(&caml_globals + 0x6998) = eax_8 + 0x6255;
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

/** address: 0x0805da4c */
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
        ecx = *0x8074110;
        edx = *ecx;
        if (edx == 0) {
bb0x805dae8:
            fl_last = ecx;
            ecx = 0x8074108;
            edx = global_0x08074108;
            local15 = ecx;
            if (fl_prev == 0x8074108) {
bb0x805deb6:
                param3 = local15;
                edi = 0;
                local16 = param3;
            }
            else {
                ebx = *(global_0x08074108 - 4);
                if (param2 > (unsigned int)((unsigned int)ebx >> 10)) {
                    do {
                        edx_1 = edx;
                        ecx = edx_1;
                        edx = *edx_1;
                        local15 = ecx;
                        if (fl_prev != edx_1) {
bb0x805db0f:
                            ebx = *(edx - 4);
                        }
                        else {
                            goto bb0x805deb6;
                        }
                        goto bb0x805db0f;
                    } while (param2 > (unsigned int)((unsigned int)ebx >> 10));
bb0x805db19:
                    eax = allocate_block(edx, param2 + 1, ecx);
                    local16 = ecx;
                    edi = eax;
                }
                else {
                    goto bb0x805db19;
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
bb0x805dabf:
                        ebx = *(edx - 4);
                    }
                    else {
                        goto bb0x805dae8;
                    }
                    goto bb0x805dabf;
                } while ((unsigned int)((unsigned int)ebx >> 10) < param2);
bb0x805dac9:
                eax_1 = allocate_block(edx, param2 + 1, ecx);
                local16 = ecx;
                edi = eax_1;
            }
            else {
                goto bb0x805dac9;
            }
        }
    }
    else {
        if (caml_allocation_policy != 1) {
            goto bb0x805deb6;
        }
        else {
            if (flp_size <= 0) {
bb0x805db6b:
                if (flp_size != 0) {
                }
                ecx = 0x8074108;
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
                        global_0x0807655c[flp_size] = ecx;
                        ebx = flp_size;
                        flp_size++;
                        if (param2 > (unsigned int)((unsigned int)esi_15 >> 10)) {
                            edi = (unsigned int)esi_15 >> 10;
bb0x805dc14:
                            ecx = edx;
                        }
                        else {
                            beyond = edx;
                            eax = allocate_block(edx, param2 + 1, ecx);
                            edi = eax;
bb0x805dc97:
                            ebx_4 = ebx;
                            esi_11 = local7;
                            local16 = ecx;
                            if (ebx_4 < flp_size) {
                                ecx = 0;
                                if (ebx_4 > 0) {
                                    edx = *global_0x0807655c[ebx_4];
                                    edx = *(edx - 4);
                                    ecx = (unsigned int)edx >> 10;
                                }
                                local10 = ecx;
                                local16 = ecx;
                                local16 = ecx;
                                if (flp_size - 1 != ebx_4) {
                                    eax = global_0x0807655c[ebx_4];
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
                                    while (global_0x0807655c[ebx_4] != eax) {
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
bb0x805dd4b:
                                                ebx_7 = local8;
                                                esi_13 = local9;
                                                eax = edx;
                                                local11 = ebx_7;
                                                local12 = esi_13;
                                            }
                                            goto bb0x805dd51;
                                        }
                                        goto bb0x805dd4b;
                                        ecx = local10;
                                        ebx_6 = local11;
                                        esi_12 = local12;
                                        local8 = ebx_6;
                                        local9 = esi_12;
                                        local13 = ecx;
                                        local14 = ebx_6;
                                    }
bb0x805dd51:
                                    ecx = local13;
                                    ebx_5 = local14;
                                    if (flp_size + ebx_5 - 1 > 1000) {
                                        if (ebx_5 + ebx_4 > 999) {
                                            if (ebx_4 != 1000) {
                                                ecx = memmove(ebx_4 * 4 + 0x8076560, &param1, (1000 - ebx_4) * 4);
                                            }
                                        }
                                        else {
                                            if (ebx_5 == 1) {
bb0x805de47:
                                                ecx = memmove(ebx_4 * 4 + 0x8076560, &param1, ebx_5 * 4);
                                            }
                                            else {
                                                ecx = memmove((ebx_5 + ebx_4) * 4 + 0x8076560, ebx_4 * 4 + 0x8076564, (1000 - ebx_4 + ebx_5) * 4);
                                                if ((int)ebx_5 > 0) {
                                                    goto bb0x805de47;
                                                }
                                            }
                                        }
                                        flp_size = 999;
                                        eax = *0x80774fc;
                                        eax = *eax;
                                        beyond = eax;
                                        local16 = ecx;
                                        ecx = local16;
                                        return edi; /* WARNING: Also returning: ecx := ecx */
                                    }
                                    else {
                                        if (ebx_5 == 1) {
bb0x805ddb9:
                                            ecx = memmove(ebx_4 * 4 + 0x8076560, &param1, ebx_5 * 4);
                                        }
                                        else {
                                            ecx = memmove((ebx_5 + ebx_4) * 4 + 0x8076560, ebx_4 * 4 + 0x8076564, (flp_size - ebx_4 - 1) * 4);
                                            if ((int)ebx_5 > 0) {
                                                goto bb0x805ddb9;
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
                                    eax = *global_0x0807655c[(flp_size - 1)];
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
                    goto bb0x805dc14;
                }
                beyond = edx;
                ecx = edx;
                if (edx == 0) {
                    ecx = global_0x0807655c[flp_size];
                }
                edx = *0x80774fc;
                edx = *edx;
                esi = *(edx - 4);
                edx = *ecx;
                if (edx == 0) {
bb0x805dc87:
                    fl_last = ecx;
                    edi = 0;
                    local16 = ecx;
                }
                else {
                    ebx = *(edx - 4);
                    local16 = ecx;
                    while ((unsigned int)((unsigned int)esi >> 10) <= (unsigned int)((unsigned int)ebx >> 10)) {
                        if (param2 > (unsigned int)((unsigned int)ebx >> 10)) {
bb0x805dc79:
                            ebx = *edx;
                            if (ebx == 0) {
                                ecx = edx;
                                goto bb0x805dc87;
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
                    goto bb0x805dc79;
                }
            }
            else {
                ecx = *0x8076560;
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
bb0x805db3d:
                            ecx = flp[(ebx_1 + 1)];
                            edx = *flp[(ebx_1 + 1)];
                            esi_6 = *(edx - 4);
                            esi_9 = (unsigned int)esi_6 >> 10;
                            local5 = esi_9;
                        }
                        else {
                            goto bb0x805db6b;
                        }
                        goto bb0x805db3d;
                    } while (param2 > (unsigned int)((unsigned int)esi_6 >> 10));
bb0x805db4c:
                    ebx = local4;
                    esi = local5;
                    eax = allocate_block(edx, param2 + 1, ecx);
                    local7 = esi;
                    edi = eax;
                    goto bb0x805dc97;
                }
                else {
                    goto bb0x805db4c;
                }
            }
        }
    }
    ecx = local16;
    return edi; /* WARNING: Also returning: ecx := ecx */
}

/** address: 0x0805dfef */
void caml_round_heap_chunk_size()
{
}

/** address: 0x0805cef2 */
void caml_urge_major_slice()
{
    __size32 eax; 		// r24

    caml_force_major_slice = 1;
    eax = *(global_0x0807655c + 0xfd4);
    *(__size32*)(global_0x0807655c + 0xfdc) = eax;
    return;
}

/** address: 0x0805d909 */
void caml_fl_add_blocks(unsigned int param1)
{
    int eax; 		// r24
    __size32 ebx; 		// r27
    unsigned int ecx; 		// r25
    int edx; 		// r26
    union { __size32; unsigned int *; } esi; 		// r30

    edx = *(param1 - 4);
    caml_fl_cur_size = caml_fl_cur_size + ((unsigned int)edx >> 10) + 1;
    edx = *0x8076550;
    if (param1 <= edx) {
        ecx = global_0x08074108;
        if (global_0x08074108 != 0 && param1 > global_0x08074108) {
            edx = *ecx;
            while (edx != 0 && param1 > edx) {
                ecx = edx;
                edx = *ecx;
            }
            ebx = ecx;
            ecx = edx;
        }
        else {
            ebx = 0x8074108;
        }
        esi = *(param1 + 4);
        *(unsigned int*)esi = ecx;
        *(unsigned int*)ebx = param1;
        if ( ~(ebx != *0x80740fc || param1 >= *(global_0x0807655c + 0x4b90))) {
            edx = *(param1 + 4);
            caml_fl_merge = edx;
        }
        if (*0x8076544 == 1) {
            truncate_flp(param1);
        }
    }
    else {
        *(unsigned int*)edx = param1;
        if ( ~(edx != *0x80740fc || param1 >= *(global_0x0807655c + 0x4b90))) {
            eax = *(param1 + 4);
            caml_fl_merge = eax;
        }
        if ( ~(*0x8076544 != 1 || flp_size > 999)) {
            global_0x0807655c[flp_size] = edx;
            flp_size++;
        }
    }
    return;
}

/** address: 0x0805f596 */
void caml_add_to_heap(unsigned int param1)
{
    int eax; 		// r24
    __size32 ecx; 		// r25
    __size32 edx; 		// r26

    ecx = caml_gc_message(4, 0x806b95f); /* Warning: also results in edx */
    eax = param1 + *(param1 - 8);
    eax = caml_page_table_add(1, param1, eax, ecx, edx);
    if (eax == 0) {
        eax = *(global_0x0807655c + 0x4b9c);
        if (eax != 0 && param1 > eax) {
            do {
                edx = eax - 4;
                eax = *(eax - 4);
            } while (eax != 0 && param1 > eax);
        }
        else {
            edx = 0x807b0f8;
        }
        *(unsigned int*)(param1 - 4) = eax;
        *(unsigned int*)edx = param1;
        *(__size32*)(global_0x0807655c + 0x4510)++;
        edx = *(global_0x0807655c + 0x4504);
        edx += *(param1 - 8);
        *(int*)(global_0x0807655c + 0x4504) = edx;
        if (edx > *(global_0x0807655c + 0x4508)) {
            *(int*)(global_0x0807655c + 0x4508) = edx;
        }
    }
    return;
}

/** address: 0x0805f1b4 */
void caml_free_for_heap(__size32 param1)
{
    __size32 eax; 		// r24

    eax = *(param1 - 16);
    free(eax);
    return;
}

/** address: 0x0805c695 */
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
    eax = *(&caml_globals + 0x6878);
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
    if (*0x80743bc == 0) {
        cl = caml_init_frame_descriptors(); /* Warning: also results in dl, ecx, ebx, esp_7, ebp, esi, edi */
        local188 = esp_7;
    }
    esp_42 = local188;
    eax = *(&caml_globals + 0x6860);
    *(__size32*)(esp_42 + 16) = eax;
    eax = *(&caml_globals + 0xd474);
    *(__size32*)(esp_42 + 12) = eax;
    eax = *(&caml_globals + 0x6598);
    *(__size32*)(esp_42 + 8) = eax;
    eax = *(&caml_globals + 0x686c);
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
    eax = *(&caml_globals + 0x6864);
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

/** address: 0x0806855b */
void add_string(__size32 param1)
{
    __size32 ecx; 		// r25
    __size32 edi; 		// r31

    edi = param1;
    ecx = -1;
bb0x8068579:
    tmpb = 0 - *edi;
    edi +=  (DF == 0) ? 1 : -1;
    ecx--;
    if (tmpb != 0) {
        goto bb0x8068579;
    }
}

/** address: 0x08068548 */
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

/** address: 0x08068800 */
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

/** address: 0x0806a514 */
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

/** address: 0x0805c4c2 */
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

/** address: 0x0805d600 */
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
    if (*0x8076544 == 0) {
        fl_prev = param3;
    }
    return param1 + (((unsigned int)ebx >> 10) - param2) * 4;
}

/** address: 0x0805d6eb */
void truncate_flp(unsigned int param1)
{
    int edx; 		// r26

    if (param1 == 0x8074108) {
        flp_size = 0;
        beyond = 0;
    }
    else {
        if (flp_size > 0) {
            edx = flp_size - 1;
            if (param1 <= *global_0x0807655c[(flp_size - 1)]) {
                while (edx > 0) {
                    if (param1 > *global_0x0807655c[(edx - 1)]) {
                        flp_size = edx;
                        goto bb0x805d74a;
                    }
                    edx--;
                }
                flp_size = edx;
            }
        }
bb0x805d74a:
        if (param1 <= beyond) {
            beyond = 0;
        }
    }
    return;
}

/** address: 0x0805c370 */
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
    unsigned int local109; 		// m[esp_35 - 8]{166}
    unsigned int local110; 		// m[esp_35 - 8]{38}
    unsigned int local111; 		// m[esp_35 - 8]{209}
    unsigned int local112; 		// m[esp_35 - 8]{187}
    unsigned int local113; 		// m[esp_35 - 8]{230}
    __size32 local12; 		// m[esp_35 + 8]{61}
    unsigned int local123; 		// m[esp_35 - 8]{117}
    unsigned int local125; 		// m[esp_35 - 12]{18}
    unsigned int local128; 		// m[esp_35 - 12]{0}
    unsigned int local129; 		// m[esp_35 - 12]{57}
    int local13; 		// m[esp_35 + 8]{151}
    int local130; 		// m[esp_35 - 12]{105}
    unsigned int local132; 		// m[esp_35 - 12]{0}
    int local133; 		// m[esp_35 - 12]{151}
    unsigned int local135; 		// m[esp_35 - 12]{231}
    unsigned int local136; 		// m[esp_35 - 12]{167}
    unsigned int local137; 		// m[esp_35 - 12]{39}
    unsigned int local138; 		// m[esp_35 - 12]{210}
    unsigned int local139; 		// m[esp_35 - 12]{118}
    __size32 local15; 		// m[esp_35 + 8]{122}
    unsigned int local152; 		// m[esp_35 - 16]{19}
    unsigned int local155; 		// m[esp_35 - 16]{0}
    unsigned int local156; 		// m[esp_35 - 16]{58}
    int local157; 		// m[esp_35 - 16]{105}
    unsigned int local159; 		// m[esp_35 - 16]{0}
    __size32 local16; 		// m[esp_35 + 8]{235}
    int local160; 		// m[esp_35 - 16]{151}
    unsigned int local162; 		// m[esp_35 - 16]{168}
    unsigned int local163; 		// m[esp_35 - 16]{40}
    unsigned int local164; 		// m[esp_35 - 16]{211}
    unsigned int local165; 		// m[esp_35 - 16]{189}
    unsigned int local166; 		// m[esp_35 - 16]{232}
    __size32 local17; 		// m[esp_35 + 8]{171}
    unsigned int local176; 		// m[esp_35 - 16]{119}
    __size32 local178; 		// m[esp_35 - 32]{26}
    __size32 local18; 		// m[esp_35 + 8]{214}
    __size32 local181; 		// m[esp_35 - 32]{0}
    __size32 local182; 		// m[esp_35 - 32]{59}
    int local183; 		// m[esp_35 - 32]{105}
    __size32 local185; 		// m[esp_35 - 32]{0}
    int local186; 		// m[esp_35 - 32]{151}
    __size32 local188; 		// m[esp_35 - 32]{233}
    __size32 local189; 		// m[esp_35 - 32]{169}
    __size32 local19; 		// m[esp_35 + 8]{192}
    __size32 local190; 		// m[esp_35 - 32]{212}
    __size32 local191; 		// m[esp_35 - 32]{190}
    __size32 local192; 		// m[esp_35 - 32]{120}
    unsigned int local2; 		// m[esp - 12]
    __size32 local207; 		// m[esp_35 - 36]{24}
    __size32 local210; 		// m[esp_35 - 36]{0}
    __size32 local211; 		// m[esp_35 - 36]{60}
    int local212; 		// m[esp_35 - 36]{105}
    __size32 local214; 		// m[esp_35 - 36]{0}
    int local215; 		// m[esp_35 - 36]{151}
    __size32 local217; 		// m[esp_35 - 36]{234}
    __size32 local218; 		// m[esp_35 - 36]{121}
    __size32 local220; 		// m[esp_35 - 36]{170}
    __size32 local221; 		// m[esp_35 - 36]{213}
    __size32 local222; 		// m[esp_35 - 36]{191}
    int local235; 		// tmpb{54}
    int local236; 		// tmpb{105}
    int local239; 		// tmpb{115}
    int local241; 		// tmpb{227}
    int local242; 		// tmpb{163}
    int local243; 		// tmpb{35}
    int local244; 		// tmpb{206}
    int local245; 		// tmpb{184}
    int local251; 		// tmpb{151}
    int local271; 		// tmpb{11}
    __size16 local273; 		// tmph{74}
    __size16 local274; 		// tmph{228}
    __size16 local275; 		// tmph{164}
    __size16 local276; 		// tmph{36}
    __size16 local277; 		// tmph{207}
    __size16 local278; 		// tmph{185}
    int local285; 		// tmph{151}
    unsigned int local3; 		// m[esp - 16]
    int local30; 		// m[esp_35 + 12]{105}
    __size16 local304; 		// tmph{12}
    __size32 local307; 		// param6{30}
    unsigned int local308; 		// param7{31}
    unsigned int local309; 		// param8{32}
    __size32 local310; 		// esp_19{33}
    int local311; 		// local243{35}
    __size16 local312; 		// local276{36}
    __size32 local313; 		// local75{37}
    unsigned int local314; 		// local110{38}
    unsigned int local315; 		// local137{39}
    unsigned int local316; 		// local163{40}
    __size32 local317; 		// param2{41}
    __size32 local318; 		// param1{42}
    __size32 local319; 		// esp_16{51}
    unsigned int local320; 		// param11{53}
    int local321; 		// local235{54}
    __size32 local322; 		// local77{55}
    unsigned int local323; 		// local103{56}
    unsigned int local324; 		// local129{57}
    unsigned int local325; 		// local156{58}
    __size32 local326; 		// local182{59}
    __size32 local327; 		// local211{60}
    __size32 local328; 		// local12{61}
    unsigned int local329; 		// local33{62}
    unsigned int local33; 		// m[esp_35 + 12]{62}
    __size32 local330; 		// local54{63}
    int local331; 		// eax_1{69}
    union { __size32 *; __size32; } local332; 		// esp_10{84}
    unsigned int local333; 		// esi{86}
    union { __size32 *; unsigned int; } local334; 		// eax{96}
    __size32 local335; 		// esp_13{112}
    unsigned int local336; 		// edi{114}
    int local337; 		// local239{115}
    __size32 local338; 		// local88{116}
    unsigned int local339; 		// local123{117}
    int local34; 		// m[esp_35 + 12]{151}
    unsigned int local340; 		// local139{118}
    unsigned int local341; 		// local176{119}
    __size32 local342; 		// local192{120}
    __size32 local343; 		// local218{121}
    __size32 local344; 		// local15{122}
    unsigned int local345; 		// local43{123}
    __size32 local346; 		// local64{124}
    unsigned int local347; 		// ebx{141}
    union { __size32 *; __size32; } local348; 		// esp_22{142}
    unsigned int local349; 		// ebx{158}
    __size32 local350; 		// esp_25{159}
    int local351; 		// local242{163}
    __size16 local352; 		// local275{164}
    __size32 local353; 		// local86{165}
    unsigned int local354; 		// local109{166}
    unsigned int local355; 		// local136{167}
    unsigned int local356; 		// local162{168}
    __size32 local357; 		// local189{169}
    __size32 local358; 		// local220{170}
    __size32 local359; 		// local17{171}
    unsigned int local360; 		// local39{172}
    __size32 local361; 		// local60{173}
    __size32 local362; 		// esp_28{180}
    unsigned int local363; 		// edi{183}
    int local364; 		// local245{184}
    __size16 local365; 		// local278{185}
    __size32 local366; 		// m[esp_35 - 4]{186}
    unsigned int local367; 		// local112{187}
    unsigned int local368; 		// m[esp_35 - 12]{188}
    unsigned int local369; 		// local165{189}
    __size32 local370; 		// local191{190}
    __size32 local371; 		// local222{191}
    __size32 local372; 		// local19{192}
    unsigned int local373; 		// local42{193}
    __size32 local374; 		// local63{194}
    __size32 local375; 		// esp_31{203}
    int local376; 		// local244{206}
    __size16 local377; 		// local277{207}
    __size32 local378; 		// local87{208}
    unsigned int local379; 		// local111{209}
    unsigned int local38; 		// m[esp_35 + 12]{236}
    unsigned int local380; 		// local138{210}
    unsigned int local381; 		// local164{211}
    __size32 local382; 		// local190{212}
    __size32 local383; 		// local221{213}
    __size32 local384; 		// local18{214}
    unsigned int local385; 		// local41{215}
    __size32 local386; 		// local62{216}
    __size32 local387; 		// ecx{221}
    unsigned int local388; 		// edx{222}
    unsigned int local389; 		// ebx{223}
    unsigned int local39; 		// m[esp_35 + 12]{172}
    __size32 local390; 		// esp_32{224}
    int local391; 		// local241{227}
    __size16 local392; 		// local274{228}
    __size32 local393; 		// local85{229}
    unsigned int local394; 		// local113{230}
    unsigned int local395; 		// local135{231}
    unsigned int local396; 		// local166{232}
    __size32 local397; 		// local188{233}
    __size32 local398; 		// local217{234}
    __size32 local399; 		// local16{235}
    __size32 local4; 		// m[esp - 36]
    unsigned int local40; 		// m[esp_35 + 12]{44}
    unsigned int local400; 		// local38{236}
    __size32 local401; 		// local59{237}
    __size32 local402; 		// ecx{242}
    __size32 local403; 		// esp{243}
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
    __size32 local75; 		// m[esp_35 - 4]{37}
    __size32 local76; 		// m[esp_35 - 4]{0}
    __size32 local77; 		// m[esp_35 - 4]{55}
    int local78; 		// m[esp_35 - 4]{105}
    __size32 local80; 		// m[esp_35 - 4]{0}
    int local81; 		// m[esp_35 - 4]{151}
    __size32 local85; 		// m[esp_35 - 4]{229}
    __size32 local86; 		// m[esp_35 - 4]{165}
    __size32 local87; 		// m[esp_35 - 4]{208}
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
    local307 = param6;
    local308 = param7;
    local309 = param8;
    local310 = esp_1;
    local311 = local271;
    local312 = local304;
    local313 = local72;
    local314 = local99;
    local315 = local125;
    local316 = local152;
    local317 = param2;
    local318 = param1;
    local319 = esp_1;
    local320 = param11;
    local321 = local271;
    local322 = local72;
    local323 = local99;
    local324 = local125;
    local325 = local152;
    local328 = param3;
    local329 = param4;
    local330 = param5;
    if (param3 != 0) {
        local4 = param5;
        edx = param4;
        local5 = param3;
        local326 = local178;
        local327 = local207;
        do {
bb0x805c3a7:
            esp_16 = local319;
            param11 = local320;
            local235 = local321;
            local77 = local322;
            local103 = local323;
            local129 = local324;
            local156 = local325;
            local182 = local326;
            local211 = local327;
            local12 = local328;
            local33 = local329;
            local54 = local330;
            esi = *(global_0x0807655c + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local307 = ecx;
            local310 = esp_16;
            local311 = local235;
            local313 = local77;
            local314 = local103;
            local315 = local129;
            local316 = local156;
            local317 = local182;
            local318 = local211;
            local319 = esp_16;
            local320 = param11;
            local321 = local235;
            local322 = local77;
            local323 = local103;
            local324 = local129;
            local325 = local156;
            local326 = local182;
            local327 = local211;
            local328 = local12;
            local329 = local33;
            local330 = local54;
            local331 = eax;
            local332 = esp_16;
            local335 = esp_16;
            local336 = param11;
            local337 = local235;
            local338 = local77;
            local339 = local103;
            local340 = local129;
            local341 = local156;
            local342 = local182;
            local343 = local211;
            local344 = local12;
            local345 = local33;
            local346 = local54;
            if (*ebx != edx) {
                do {
                    eax_1 = local331;
                    eax_2 = eax_1 + 1 & esi;
                    ebx = *(caml_frame_descriptors + (eax_1 + 1 & esi) * 4);
                    local331 = eax_2;
                } while (*ebx != edx);
            }
            local273 = *(ebx + 4) + 1;
            local309 = ebx;
            local312 = local273;
            if (*(ebx + 4) != -1) {
                esi = *(unsigned short*)(ebx + 6);
                local333 = esi;
                if ((int)esi > 0) {
                    edi = ebx + 8;
                    *(__size32*)(ebp - 36) = ebx;
                    ebx = *(ebp + 8);
                    for(;;) {
                        esp_10 = local332;
                        esi = local333;
                        eax_4 = *(unsigned short*)edi;
                        if (((unsigned char) eax_4 & 0x1) == 0) {
                            eax_7 = eax_4 + *(ebp - 28);
                            flags = ADDFLAGS32(eax_4, *(ebp - 28), eax_7);
                            local334 = eax_7;
                        }
                        else {
                            flags = SARFLAGS((int)eax_4 >> 1, eax_4, 1);
                            edx = *(ebp - 32);
                            eax = edx + ((int)eax_4 >> 1) * 4;
                            local334 = eax;
                        }
                        eax = local334;
                        *(__size32*)(esp_10 + 4) = eax;
                        eax = *eax;
                        *(__size32*)esp_10 = eax;
                        (*ebx)((unsigned char) eax, eax, ecx, edx, ebx, ebp, esi, edi, flags, ZF, CF, param3, param4, param5, local76, local102, local128, local155, local181, local210);
                        local332 = esp_4;
                        local335 = esp_4;
                        local336 = edi;
                        local337 = local236;
                        local338 = local78;
                        local339 = local104;
                        local340 = local130;
                        local341 = local157;
                        local342 = local183;
                        local343 = local212;
                        local344 = local9;
                        local345 = local30;
                        local346 = local51;
                        esi_4 = esi_1 - 1;
                        local333 = esi_4;
                        if ((int)esi_1 <= 1) {
                            break;
                        }
                        edi += 2;
                    }
                    ebx = *(ebp - 36);
                }
                esp_13 = local335;
                edi = local336;
                local239 = local337;
                local88 = local338;
                local123 = local339;
                local139 = local340;
                local176 = local341;
                local192 = local342;
                local218 = local343;
                local15 = local344;
                local43 = local345;
                local64 = local346;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local319 = esp_13;
                local320 = edi;
                local321 = local239;
                local322 = local88;
                local323 = local123;
                local324 = local139;
                local325 = local176;
                local326 = local192;
                local327 = local218;
                local328 = local15;
                local329 = local43;
                local330 = local64;
                goto bb0x805c3a7;
            }
            eax = *(ebp - 28);
            edx = *(eax + 8);
            *(__size32*)(ebp - 28) = edx;
            edx = *(eax + 12);
            eax = *(eax + 16);
            al = (unsigned char) eax;
            *(__size32*)(ebp - 32) = eax;
            local308 = edx;
        } while (*(ebp - 28) != 0);
    }
    param6 = local307;
    param7 = local308;
    param8 = local309;
    esp_19 = local310;
    local243 = local311;
    local276 = local312;
    local75 = local313;
    local110 = local314;
    local137 = local315;
    local163 = local316;
    param2 = local317;
    param1 = local318;
    param3 = local6;
    local387 = param6;
    local388 = param7;
    local389 = param8;
    local390 = esp_19;
    local391 = local243;
    local392 = local276;
    local393 = local75;
    local394 = local110;
    local395 = local137;
    local396 = local163;
    local397 = param2;
    local398 = param1;
    local399 = *(esp_35 + 8);
    local400 = local40;
    local401 = local61;
    local402 = param6;
    local403 = esp_19;
    if (*(ebp + 24) != 0) {
        esi = *(ebp + 24);
        *(__size32*)(ebp - 28) = 0;
        do {
            ecx = local387;
            edx = local388;
            ebx = local389;
            esp_32 = local390;
            local241 = local391;
            local274 = local392;
            local85 = local393;
            local113 = local394;
            local135 = local395;
            local166 = local396;
            local188 = local397;
            local217 = local398;
            local16 = local399;
            local38 = local400;
            local59 = local401;
            edi = 0;
            local362 = esp_32;
            local363 = edi;
            local364 = local241;
            local365 = local274;
            local366 = local85;
            local367 = local113;
            local368 = local135;
            local369 = local166;
            local370 = local188;
            local371 = local217;
            local372 = local16;
            local373 = local38;
            local374 = local59;
            local375 = esp_32;
            local376 = local241;
            local377 = local274;
            local378 = local85;
            local379 = local113;
            local380 = local135;
            local381 = local166;
            local382 = local188;
            local383 = local217;
            local384 = local16;
            local385 = local38;
            local386 = local59;
            if (*(esi + 4) > 0) {
                do {
                    esp_28 = local362;
                    edi = local363;
                    local245 = local364;
                    local278 = local365;
                    *(__size32*)(esp_35 - 4) = local366;
                    local112 = local367;
                    *(unsigned int*)(esp_35 - 12) = local368;
                    local165 = local369;
                    local191 = local370;
                    local222 = local371;
                    local19 = local372;
                    local42 = local373;
                    local63 = local374;
                    ebx = *(ebp - 28);
                    local347 = ebx;
                    local348 = esp_28;
                    local349 = ebx;
                    local350 = esp_28;
                    local351 = local245;
                    local352 = local278;
                    local353 = *(esp_35 - 4);
                    local354 = local112;
                    local355 = *(esp_35 - 12);
                    local356 = local165;
                    local357 = local191;
                    local358 = local222;
                    local359 = local19;
                    local360 = local42;
                    local361 = local63;
                    if (*(esi + 8) > 0) {
                        do {
                            ebx = local347;
                            esp_22 = local348;
                            eax_9 = ebx * 4 + *(esi + edi * 4 + 12);
                            *(__size32*)(esp_22 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_22 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, eax_12, ecx, edx, ebx, ebp, esi, edi, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), param3, param4, param5, local80, local106, local132, local159, local185, local214);
                            local348 = esp_7;
                            local350 = esp_7;
                            local351 = local251;
                            local352 = local285;
                            local353 = local81;
                            local354 = local107;
                            local355 = local133;
                            local356 = local160;
                            local357 = local186;
                            local358 = local215;
                            local359 = local13;
                            local360 = local34;
                            local361 = local55;
                            ebx_4 = ebx_1 + 1;
                            local347 = ebx_4;
                            local349 = ebx_4;
                        } while (*(esi + 8) > ebx_1 + 1);
                    }
                    ebx = local349;
                    esp_25 = local350;
                    edi_1 = edi;
                    local242 = local351;
                    local275 = local352;
                    local86 = local353;
                    local109 = local354;
                    local136 = local355;
                    local162 = local356;
                    local189 = local357;
                    local220 = local358;
                    local17 = local359;
                    local39 = local360;
                    local60 = local361;
                    edi_2 = edi_1 + 1;
                    local362 = esp_25;
                    local363 = edi_2;
                    local364 = local242;
                    local365 = local275;
                    local366 = local86;
                    local367 = local109;
                    local368 = local136;
                    local369 = local162;
                    local370 = local189;
                    local371 = local220;
                    local372 = local17;
                    local373 = local39;
                    local374 = local60;
                    local375 = esp_25;
                    local376 = local242;
                    local377 = local275;
                    local378 = local86;
                    local379 = local109;
                    local380 = local136;
                    local381 = local162;
                    local382 = local189;
                    local383 = local220;
                    local384 = local17;
                    local385 = local39;
                    local386 = local60;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_31 = local375;
            local244 = local376;
            local277 = local377;
            local87 = local378;
            local111 = local379;
            local138 = local380;
            local164 = local381;
            local190 = local382;
            local221 = local383;
            local18 = local384;
            local41 = local385;
            local62 = local386;
            esi = *esi;
            local387 = ecx;
            local388 = edx;
            local389 = ebx;
            local390 = esp_31;
            local391 = local244;
            local392 = local277;
            local393 = local87;
            local394 = local111;
            local395 = local138;
            local396 = local164;
            local397 = local190;
            local398 = local221;
            local399 = local18;
            local400 = local41;
            local401 = local62;
            local402 = ecx;
            local403 = esp_31;
        } while (esi == 0);
    }
    ecx = local402;
    esp = local403;
    edi = *(esp + 52);
    ebp = *(esp + 56);
    return al; /* WARNING: Also returning: ecx := ecx, ebp := ebp, edi := edi */
}

/** address: 0x0805ca7c */
__size32 caml_scan_global_roots(__size32 param1)
{
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 esi; 		// r30
    __size32 esp; 		// r28

    ebx = caml_iterate_global_roots(param1, 0x80743e0); /* Warning: also results in esp */
    ebx = caml_iterate_global_roots(ebx, 0x8074440); /* Warning: also results in esp */
    esp = caml_iterate_global_roots(ebx, 0x80744a0); /* Warning: also results in esi */
    ebx = *(esp + 4);
    ebp = *(esp + 8);
    return ebx; /* WARNING: Also returning: ebp := ebp, esi := esi */
}

/** address: 0x080699a0 */
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
    __size32 local103; 		// local34{73}
    __size32 local104; 		// local47{74}
    unsigned int local105; 		// m[esp_24 - 12]{75}
    __size32 local106; 		// local85{76}
    __size32 local107; 		// m[esp_24 + 4]{77}
    __size32 local108; 		// esp_21{83}
    __size32 local109; 		// edi{85}
    int local11; 		// m[esp_24 + 4]{62}
    __size32 local110; 		// m[esp_24 - 4]{86}
    __size32 local111; 		// local48{87}
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
    __size32 local34; 		// m[esp_24 - 4]{73}
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
    unsigned int local65; 		// m[esp_24 - 12]{0}
    unsigned int local66; 		// m[esp_24 - 12]{0}
    unsigned int local67; 		// m[esp_24 - 12]{38}
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
    __size32 local96; 		// m[esp_24 - 8]{37}
    unsigned int local97; 		// local67{38}
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
    if (*0x807aad0 != 0) {
        ebx = 0;
        esi = 0;
        edi = param1;
        local92 = esi;
        do {
            param2 = local90;
            esp_13 = local91;
            esi = local92;
            eax_1 = ebx + *0x807aacc;
            *(__size32*)(esp_13 + 4) = eax_1;
            eax_4 = *eax_1;
            *(__size32*)esp_13 = eax_4;
            (*edi)(eax_4, param2, ebx, ebp, esi, edi, ADDFLAGS32(ebx, *0x807aacc, eax_1), ADDFLAGS32(ebx, *0x807aacc, eax_1), ADDFLAGS32(ebx, *0x807aacc, eax_1), param1, local20, local38, local56, local74);
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
        } while (*(global_0x0807655c + 0x4574) > esi_1 + 1);
    }
    esp_16 = local93;
    param6 = local94;
    local33 = local95;
    *(__size32*)(esp_24 - 8) = local96;
    local67 = local97;
    *(__size32*)(esp_24 - 16) = local98;
    local13 = local99;
    eax = *(global_0x0807655c + 0x4578);
    *(__size32*)(ebp - 28) = eax;
    local108 = esp_16;
    local109 = param6;
    local110 = local33;
    local111 = *(esp_24 - 8);
    local112 = local67;
    local113 = *(esp_24 - 16);
    local114 = local13;
    local115 = esp_16;
    if (eax != 0) {
        do {
            esp_21 = local108;
            edi = local109;
            *(__size32*)(esp_24 - 4) = local110;
            local48 = local111;
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
            local103 = *(esp_24 - 4);
            local104 = local48;
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
            local34 = local103;
            local47 = local104;
            *(unsigned int*)(esp_24 - 12) = local105;
            local85 = local106;
            *(__size32*)(esp_24 + 4) = local107;
            edx = *(ebp - 28);
            edx = *edx;
            *(__size32*)(ebp - 28) = edx;
            local108 = esp_20;
            local109 = edi;
            local110 = local34;
            local111 = local47;
            local112 = *(esp_24 - 12);
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

/** address: 0x0805bcc0 */
__size32 scanmult(int param1, union { __size32; int *; } param2)
{
    int ecx; 		// r25

    __isoc99_sscanf();
    ecx = __isoc99_sscanf();
    *(int*)param2 = param1;
    return ecx;
}

/** address: 0x0805da14 */
void caml_set_allocation_policy(__size32 param1)
{
    if (param1 == 0) {
        *(__size32*)(&caml_globals + 0x65bc) = 0x8074108;
    }
    else {
        if (param1 == 1) {
            *(__size32*)(&caml_globals + 0x89f4) = 0;
            *(__size32*)(&caml_globals + 0x89f8) = 0;
        }
    }
    *(__size32*)(&caml_globals + 0x89f0) = param1;
    return;
}

/** address: 0x0806a894 */
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
    if (param1 >> 1 != *0x807aae4) {
        *(int*)(&caml_globals + 0xcf90) = param1 >> 1;
        *(__size32*)(&caml_globals + 0xcf94) = 0;
        if (param1 >> 1 == 0) {
            ecx = caml_remove_global_root(0x80741c8, param8); /* Warning: also results in edx */
            local4 = ecx;
            local5 = edx;
        }
        else {
            cl = caml_register_global_root(0x80741c8); /* Warning: also results in dl, ecx, edx, ebx, ebp, esi, edi */
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

/** address: 0x0805cbea */
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

    cl = caml_insert_global_root(0x80743e0, param1); /* Warning: also results in dl, ecx, edx, ebx, ebp, esi, edi */
    ebp = *ebp;
    return cl; /* WARNING: Also returning: dl := dl, ecx := ecx, edx := edx, ebx := ebx, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x0805ce89 */
__size32 caml_remove_global_root(unsigned int param1, int param2)
{
    __size32 ecx; 		// r25
    unsigned int edx; 		// r26

    ecx = caml_delete_global_root(0x80743e0, param1, param2); /* Warning: also results in edx */
    return ecx; /* WARNING: Also returning: edx := edx */
}

/** address: 0x0805cc8c */
__size32 caml_delete_global_root(__size32 param1, unsigned int param2, int param3)
{
    union { int; unsigned int * x10; int *; } eax_1; 		// r24{10}
    int eax_12; 		// r24{33}
    int eax_15; 		// r24{36}
    unsigned int eax_17; 		// r24{23}
    int eax_4; 		// r24{35}
    int eax_5; 		// r24{5}
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
    int local5; 		// eax_4{35}
    unsigned int local6; 		// param2{43}

    ecx = param1;
    eax_5 = *(param1 + 72);
    local2 = param3;
    local6 = param2;
    if (eax_5 >= 0) {
        esi = eax_5;
        local1 = esi;
        do {
bb0x805cca8:
            esi_1 = local1;
            eax_1 = *(ecx + esi_1 * 4 + 4);
            local1 = esi_1;
            if ( ~(eax_1 == 0 || *eax_1 >= param2)) {
                ecx = eax_1;
                goto bb0x805cca8;
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
        if (eax_5 >= 0) {
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
                eax_4 = local5;
                eax_15 = eax_4 - 1;
                local5 = eax_15;
                if (eax_4 <= 1) {
bb0x805cd1e:
                    *(int*)(param1 + 72) = eax_4 - 1;
                    param2 = local6;
                    return ecx; /* WARNING: Also returning: edx := param2 */
                }
                else {
                }
                goto bb0x805cd1e;
            } while (*(param1 + (eax_4 - 1) * 4 + 4) == 0);
            *(int*)(param1 + 72) = eax_4 - 1;
        }
    }
    param2 = local6;
    return ecx; /* WARNING: Also returning: edx := param2 */
}

