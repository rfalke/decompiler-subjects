union { stack_t; union { __size32 *; unsigned int; }[]; } caml_globals;
__size32 array_bound_error_msg = 0;// 4 bytes
__size8 global_0x0807cfc7 = 0;// 1 bytes
__size32 caml_last_return_address = 1;// 4 bytes
int caml_fl_merge = 0x807cfe8;
union { unsigned int; int *; } global_0x0807cfe8;
unsigned int fl_prev = 0x807cfe8;
__size32 caml_weak_none = 0x8083998;// 4 bytes
__size32 stderr;// 4 bytes
unsigned int caml_exception_pointer;
__size32 array_bound_error_bucket_inited;// 4 bytes
__size32 array_bound_error_bucket;// 4 bytes
__size32 global_0x0807d28c;// 4 bytes
__size32 global_0x0807d290;// 4 bytes
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
union { unsigned int; unsigned int *; } global_0x0807f43c[9999999];
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

/** address: 0x0806200c */
int main(int argc, char *argv[])
{
    int ebp; 		// r29
    unsigned int esp; 		// r28

    caml_main(argv, esp - 4, SUBFLAGS32(esp - 4, 16, esp - 20), esp == 20, (unsigned int)(esp - 4) < 16, argv, ebp, argv, pc, argc);
}

/** address: 0x08061d3e */
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
    *(__size32*)(&caml_globals + 0x10370) = ebp - 25;
    *(__size32*)esp_1 = 0x807155e;
    eax_4 = getenv(*esp_1); /* Warning: also results in ecx, edx */
    ebx = eax_4;
    if (eax_4 != 0) {
bb0x8061e33:
        esp = esp_1;
        esi = 0x80715a8;
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
        *(__size32*)esp_1 = 0x807155f;
        eax_6 = getenv(*esp_1); /* Warning: also results in ecx, edx, esp_4 */
        local1 = esp_4;
        ebx = eax_6;
        if (eax_6 != 0) {
            goto bb0x8061e33;
        }
    }
    esp = local1;
    eax = *(&caml_globals + 0x9464);
    *(__size32*)(esp + 16) = eax;
    eax = *(&caml_globals + 0x9468);
    *(__size32*)(esp + 12) = eax;
    eax = *(&caml_globals + 0x946c);
    *(__size32*)(esp + 8) = eax;
    eax = *(&caml_globals + 0x9470);
    *(__size32*)(esp + 4) = eax;
    eax = *(&caml_globals + 0x9474);
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
    *(__size32*)(esp + 4) = 0x8083ea0;
    *(__size32*)esp = 0x8083aa0;
    *(__size32*)(esp - 4) = 4;
    eax = caml_page_table_add(*(esp - 4), *esp, *(esp + 4), ecx, 0x8083aa0); /* Warning: also results in ecx */
    if (eax != 0) {
        *(__size32*)(esp - 4) = 0x807156c;
        caml_fatal_error(*(esp - 4));
    }
    eax = *(&caml_globals + 748);
    ebx = 0;
    local3 = ebx;
    if (eax == 0) {
bb0x8061f05:
        eax = *(&caml_globals + 872);
        *(__size32*)(&caml_globals + 0xfeac) = eax;
        ecx = *(&caml_globals + 876);
        *(__size32*)(&caml_globals + 0xff68) = ecx;
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
            *(__size32*)(esp - 4) = 0x807156c;
            caml_fatal_error(*(esp - 4));
        }
        ebx_5 = ebx_4 + 1;
        eax = caml_globals[(ebx_4 + 1)];
        local3 = ebx_5;
    } while (caml_globals[(ebx_4 + 1)] != 0);
    goto bb0x8061f05;
}

/** address: 0x0806c168 */
void caml_sys_exit(int param1)
{
    exit(param1 >> 1);
    return;
}

/** address: 0x08067737 */
void caml_init_ieee_floats()
{
    return;
}

/** address: 0x0806ff9e */
__size8 caml_init_custom_operations()
{
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    __size32 ebp; 		// r29
    __size32 edi; 		// r31
    __size32 esi; 		// r30

    caml_register_custom_operations();
    *(__size32*)esp = 0x807d034;
    caml_register_custom_operations();
    *(__size32*)esp = 0x807d018;
    cl = caml_register_custom_operations(); /* Warning: also results in dl, ebp, esi, edi */
    ebp = *ebp;
    return cl; /* WARNING: Also returning: dl := dl, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x0806cd1f */
void caml_init_gc(__size32 param1, __size32 param2)
{
    int ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 esi; 		// r30
    unsigned int esp; 		// r28

    norm_heapincr(param2, esp - 4, param1, SUBFLAGS32(esp - 12, 16, (esp - 28)), esp == 28, (unsigned int)(esp - 12) < 16, ebx, param1, param2, ebp, esi, ebx, pc);
}

/** address: 0x08065521 */
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
bb0x8065569:
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
        goto bb0x8065569;
    }
    ecx = local3;
    edx = local4;
    return eax; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x08063579 */
void caml_fatal_error(union { char *; __size32; } param1)
{
    __size32 eax; 		// r24

    eax = *0x807d100;
    fputs(param1, eax);
    exit(2);
    return;
}

/** address: 0x080631f0 */
void caml_init_signals(sigset_t param1)
{
    int eax; 		// r24
    int esp; 		// r28

    sigemptyset(&param1);
    *(__size32*)(&caml_globals + 0x98ac) = (esp - 164);
    eax = sigaltstack(&0x807d400, 0);
    if (eax == 0) {
        sigaction(11, &0x806331f, 0);
    }
    return;
}

/** address: 0x080708bc */
void caml_debugger_init()
{
    return;
}

/** address: 0x0806ff77 */
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
    edx = *(&caml_globals + 0xfe8c);
    *(__size32*)(eax + 4) = edx;
    *(union { __size32 *; __size32; }*)0x80839c0 = eax;
    ebp = *ebp;
    return cl; /* WARNING: Also returning: dl := dl, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x0806cce4 */
void norm_heapincr()
{
}

/** address: 0x080650d0 */
void caml_page_table_initialize()
{
    unsigned int eax; 		// r24
    unsigned int eax_1; 		// r24{2}

    eax = 0;
    do {
        eax_1 = eax;
        caml_globals[eax_1] = 0x8080460;
        eax = eax_1 + 1;
    } while (eax_1 + 1 != 512);
    return;
}

/** address: 0x0806cd00 */
void norm_minsize()
{
}

/** address: 0x08064ea2 */
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
    eax = *(&caml_globals + 0xc8e0);
    local4 = esp_1;
    if (eax != *0x8080410) {
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
    eax = *(&caml_globals + 0xc8d8);
    if (eax != 0) {
        edx = *(&caml_globals + 0xc8dc);
        *(__size32*)(esp + 8) = edx;
        *(__size32*)(esp + 4) = eax;
        *(__size32*)esp = 2;
        caml_page_table_remove(*esp, *(esp + 4), *(esp + 8));
        eax = *(&caml_globals + 0xc928);
        *(__size32*)esp = eax;
        ecx = free(*esp); /* Warning: also results in edx */
    }
    eax = *(ebp - 28);
    *(__size32*)(&caml_globals + 0xc928) = eax;
    *(__size32*)(&caml_globals + 0xc8d8) = ebx;
    *(__size32*)(&caml_globals + 0xc8dc) = esi;
    *(__size32*)(&caml_globals + 0xc8e4) = ebx;
    *(__size32*)(&caml_globals + 0xc8e0) = esi;
    *(__size32*)(&caml_globals + 0x104c0) = edi;
    ecx = reset_table(0x808041c, ecx, edx); /* Warning: also results in edx */
    reset_table(0x8080438, ecx, edx);
    return;
}

/** address: 0x0806ccd0 */
void norm_pfree()
{
}

/** address: 0x0806ccdf */
void norm_pmax()
{
    return;
}

/** address: 0x08063ecc */
void caml_init_major_heap(__size32 param1)
{
    int ebp; 		// r29
    int esp; 		// r28

    clip_heap_chunk_size(param1, esp - 4, SUBFLAGS32(esp - 4, 24, (esp - 28)), esp == 28, (unsigned int)(esp - 4) < 24, param1, ebp, pc);
}

/** address: 0x0806359f */
__size32 caml_gc_message(int param1, union { char *; __size32; } param2)
{
    int eax; 		// r24
    __size32 ecx; 		// r25
    __size32 edx; 		// r26

    if ( ~(param1 >= 0 && (caml_verb_gc & param1) == 0)) {
        eax = *0x807d100;
        fprintf(eax, param2);
        eax = *0x807d100;
        ecx = fflush(eax); /* Warning: also results in edx */
    }
    return ecx; /* WARNING: Also returning: edx := edx */
}

/** address: 0x080653c7 */
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
    if (named_value_table[((unsigned int)param1 >> 23)] != 0x8080460) {
bb0x8065415:
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
            goto bb0x8065415;
        }
    }
    eax_1 = local4;
    ecx = local5;
    edx = local6;
    return eax_1; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x080651aa */
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

/** address: 0x08064da3 */
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

    ebx_1 = *(global_0x0807f43c + 0x4bac);
    caml_empty_minor_heap(bl, edi);
    eax = *(global_0x0807f43c + 0x4bac);
    st7 = (float)(eax - ebx_1) + *((double *)&*0x8083928);
    *(union { double; __size64; }*)0x8083928 = st7;
    tmp1 = *(global_0x0807f43c + 0x44fc);
    *(__size32*)(global_0x0807f43c + 0x44fc)++;
    caml_major_collection_slice(eax - ebx_1, ebx_1, esp - 4, 0, st7, ADDFLAGS32(tmp1, 1, *0x8083938), ADDFLAGS32(tmp1, 1, *0x8083938), ADDFLAGS32(tmp1, 1, *0x8083938), ebp, esi, ebx_4, 0, eax - ebx_1, 0, pc, ecx, edx);
}

/** address: 0x080634c4 */
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

/** address: 0x08062119 */
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
    __size32 esp_49; 		// r28{168}
    __size32 esp_5; 		// r28{40}
    __size32 esp_50; 		// r28{168}
    __size32 esp_51; 		// r28{168}
    __size32 esp_52; 		// r28{154}
    __size32 esp_53; 		// r28{154}
    __size32 esp_54; 		// r28{154}
    union { __size32; __size32 *; } esp_55; 		// r28{256}
    union { __size32; __size32 *; } esp_56; 		// r28{256}
    union { __size32; __size32 *; } esp_57; 		// r28{256}
    union { __size32; __size32 *; } esp_58; 		// r28{197}
    union { __size32; __size32 *; } esp_59; 		// r28{197}
    __size32 esp_6; 		// r28{40}
    union { __size32; __size32 *; } esp_60; 		// r28{197}
    __size32 esp_61; 		// r28{230}
    __size32 esp_62; 		// r28{230}
    __size32 esp_63; 		// r28{230}
    __size32 esp_64; 		// r28{331}
    __size32 esp_65; 		// r28{331}
    __size32 esp_66; 		// r28{331}
    __size32 esp_67; 		// r28{278}
    __size32 esp_68; 		// r28{278}
    __size32 esp_69; 		// r28{278}
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
    int local100; 		// tmpb{299}
    int local101; 		// tmpb{334}
    int local102; 		// tmpb{282}
    int local103; 		// tmpb{156}
    int local104; 		// tmpb{317}
    int local105; 		// tmpb{299}
    int local106; 		// tmpb{268}
    int local107; 		// tmpb{268}
    int local108; 		// tmpb{268}
    int local109; 		// tmpb{282}
    __size32 local11; 		// m[esp_74 - 4]{260}
    int local110; 		// tmpb{282}
    int local111; 		// tmpb{282}
    int local112; 		// tmpb{299}
    int local113; 		// tmpb{317}
    int local114; 		// tmpb{221}
    int local115; 		// tmpb{171}
    int local116; 		// tmpb{3}
    int local117; 		// tmpb{3}
    int local118; 		// tmpb{334}
    int local119; 		// tmpb{334}
    __size32 local12; 		// m[esp_74 - 4]{301}
    int local120; 		// tmpb{233}
    int local121; 		// tmpb{233}
    int local122; 		// tmpb{171}
    int local123; 		// tmpb{171}
    __size16 local124; 		// tmph{185}
    __size16 local125; 		// tmph{335}
    __size16 local126; 		// tmph{283}
    __size16 local127; 		// tmph{157}
    __size16 local128; 		// tmph{318}
    __size16 local129; 		// tmph{300}
    __size32 local13; 		// m[esp_74 - 4]{336}
    __size16 local130; 		// tmph{185}
    __size16 local131; 		// tmph{335}
    __size16 local132; 		// tmph{283}
    __size16 local133; 		// tmph{157}
    __size16 local134; 		// tmph{318}
    __size16 local135; 		// tmph{300}
    int local136; 		// tmph{268}
    int local137; 		// tmph{268}
    int local138; 		// tmph{268}
    __size16 local139; 		// tmph{283}
    __size32 local14; 		// m[esp_74 - 4]{284}
    __size16 local140; 		// tmph{283}
    __size16 local141; 		// tmph{283}
    __size16 local142; 		// tmph{300}
    __size16 local143; 		// tmph{318}
    __size16 local144; 		// tmph{335}
    __size16 local145; 		// tmph{335}
    __size16 local146; 		// tmph{335}
    __size16 local147; 		// tmph{157}
    int local148; 		// tmph{268}
    __size16 local149; 		// tmph{335}
    int local15; 		// m[esp_74 - 4]{268}
    __size16 local150; 		// tmph{283}
    __size16 local151; 		// tmph{157}
    __size16 local152; 		// tmph{318}
    __size16 local153; 		// tmph{300}
    __size16 local154; 		// tmph{185}
    __size16 local155; 		// tmph{4}
    __size16 local156; 		// tmph{4}
    unsigned int local157; 		// edx_1{33}
    __size32 local158; 		// esp_52{154}
    int local159; 		// local98{156}
    int local16; 		// m[esp_74 - 4]{268}
    __size16 local160; 		// local127{157}
    __size32 local161; 		// local21{158}
    __size32 local162; 		// local48{159}
    unsigned int local163; 		// local87{160}
    __size32 local164; 		// esp_49{168}
    int local165; 		// local90{171}
    __size32 local166; 		// local8{172}
    __size32 local167; 		// local37{173}
    unsigned int local168; 		// local66{174}
    int local169; 		// eax_1{180}
    __size32 local17; 		// m[esp_74 - 4]{201}
    union { __size32 *; __size32; } local170; 		// esp_58{197}
    unsigned int local171; 		// esi{199}
    __size32 local172; 		// local7{201}
    __size32 local173; 		// local36{202}
    unsigned int local174; 		// local65{203}
    union { __size32 *; unsigned int; } local175; 		// eax{212}
    __size32 local176; 		// esp_61{230}
    int local177; 		// local94{233}
    __size32 local178; 		// local22{234}
    __size32 local179; 		// local49{235}
    __size32 local18; 		// m[esp_74 - 4]{201}
    unsigned int local180; 		// local75{236}
    unsigned int local181; 		// ebx{255}
    union { __size32 *; __size32; } local182; 		// esp_55{256}
    __size32 local183; 		// local11{260}
    __size32 local184; 		// local40{261}
    unsigned int local185; 		// local69{262}
    unsigned int local186; 		// ebx{277}
    __size32 local187; 		// esp_67{278}
    int local188; 		// local97{282}
    __size16 local189; 		// local126{283}
    __size32 local19; 		// m[esp_74 - 4]{301}
    __size32 local190; 		// local14{284}
    __size32 local191; 		// local43{285}
    unsigned int local192; 		// local72{286}
    __size32 local193; 		// esp_70{295}
    unsigned int local194; 		// edi{298}
    int local195; 		// local100{299}
    __size16 local196; 		// local129{300}
    __size32 local197; 		// local12{301}
    __size32 local198; 		// local41{302}
    unsigned int local199; 		// local70{303}
    int local2; 		// m[esp - 32]
    __size32 local20; 		// m[esp_74 - 4]{301}
    __size32 local200; 		// esp_73{314}
    int local201; 		// local99{317}
    __size16 local202; 		// local128{318}
    __size32 local203; 		// m[esp_74 - 4]{319}
    __size32 local204; 		// m[esp_74 - 28]{320}
    unsigned int local205; 		// m[esp_74 - 32]{321}
    __size32 local206; 		// esp_64{331}
    int local207; 		// local96{334}
    __size16 local208; 		// local125{335}
    __size32 local209; 		// local13{336}
    __size32 local21; 		// m[esp_74 - 4]{158}
    __size32 local210; 		// local42{337}
    unsigned int local211; 		// local71{338}
    __size32 local212; 		// esp{348}
    __size32 local22; 		// m[esp_74 - 4]{234}
    __size32 local23; 		// m[esp_74 - 4]{336}
    __size32 local24; 		// m[esp_74 - 4]{336}
    __size32 local25; 		// m[esp_74 - 4]{284}
    __size32 local26; 		// m[esp_74 - 4]{284}
    __size32 local27; 		// m[esp_74 - 4]{172}
    __size32 local28; 		// m[esp_74 - 4]{172}
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
    __size32 local46; 		// m[esp_74 - 28]{337}
    __size32 local47; 		// m[esp_74 - 28]{337}
    __size32 local48; 		// m[esp_74 - 28]{159}
    __size32 local49; 		// m[esp_74 - 28]{235}
    __size32 local5; 		// m[esp_74 - 4]{7}
    __size32 local50; 		// m[esp_74 - 28]{261}
    __size32 local51; 		// m[esp_74 - 28]{261}
    __size32 local52; 		// m[esp_74 - 28]{235}
    __size32 local53; 		// m[esp_74 - 28]{235}
    __size32 local54; 		// m[esp_74 - 28]{202}
    __size32 local55; 		// m[esp_74 - 28]{202}
    __size32 local56; 		// m[esp_74 - 28]{173}
    __size32 local57; 		// m[esp_74 - 28]{173}
    __size32 local58; 		// m[esp_74 - 28]{285}
    __size32 local59; 		// m[esp_74 - 28]{285}
    __size32 local6; 		// m[esp_74 - 4]{7}
    __size32 local60; 		// m[esp_74 - 28]{302}
    __size32 local61; 		// m[esp_74 - 28]{302}
    unsigned int local62; 		// m[esp_74 - 32]{9}
    unsigned int local63; 		// m[esp_74 - 32]{9}
    unsigned int local64; 		// m[esp_74 - 32]{9}
    unsigned int local65; 		// m[esp_74 - 32]{203}
    unsigned int local66; 		// m[esp_74 - 32]{174}
    int local67; 		// m[esp_74 - 32]{221}
    int local68; 		// m[esp_74 - 32]{221}
    unsigned int local69; 		// m[esp_74 - 32]{262}
    __size32 local7; 		// m[esp_74 - 4]{201}
    unsigned int local70; 		// m[esp_74 - 32]{303}
    unsigned int local71; 		// m[esp_74 - 32]{338}
    unsigned int local72; 		// m[esp_74 - 32]{286}
    int local73; 		// m[esp_74 - 32]{268}
    int local74; 		// m[esp_74 - 32]{268}
    unsigned int local75; 		// m[esp_74 - 32]{236}
    unsigned int local76; 		// m[esp_74 - 32]{236}
    unsigned int local77; 		// m[esp_74 - 32]{303}
    unsigned int local78; 		// m[esp_74 - 32]{303}
    unsigned int local79; 		// m[esp_74 - 32]{338}
    __size32 local8; 		// m[esp_74 - 4]{172}
    unsigned int local80; 		// m[esp_74 - 32]{338}
    unsigned int local81; 		// m[esp_74 - 32]{174}
    unsigned int local82; 		// m[esp_74 - 32]{174}
    unsigned int local83; 		// m[esp_74 - 32]{262}
    unsigned int local84; 		// m[esp_74 - 32]{262}
    unsigned int local85; 		// m[esp_74 - 32]{286}
    unsigned int local86; 		// m[esp_74 - 32]{286}
    unsigned int local87; 		// m[esp_74 - 32]{160}
    unsigned int local88; 		// m[esp_74 - 32]{203}
    unsigned int local89; 		// m[esp_74 - 32]{203}
    int local9; 		// m[esp_74 - 4]{221}
    int local90; 		// tmpb{171}
    int local91; 		// tmpb{221}
    int local92; 		// tmpb{221}
    int local93; 		// tmpb{221}
    int local94; 		// tmpb{233}
    int local95; 		// tmpb{221}
    int local96; 		// tmpb{334}
    int local97; 		// tmpb{282}
    int local98; 		// tmpb{156}
    int local99; 		// tmpb{317}

    local4 = param1;
    local33 = 0x80739a4;
    ebx = caml_raise(param1, 0x80739a4, param2, esp_74 - 4); /* Warning: also results in esp_1, ebp, esi */
    local159 = local116;
    local160 = local155;
    local161 = local4;
    local162 = local33;
    local163 = local62;
    local165 = local116;
    local166 = local4;
    local167 = local33;
    local168 = local62;
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
        local157 = edx;
        do {
            edx_1 = local157;
            ecx = *(ebx + edx_1 * 4);
            *(__size32*)(eax + edx_1 * 4 + 4) = ecx;
            edx_2 = edx_1 + 1;
            local157 = edx_2;
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
    *(__size32*)(esp_7 - 28) = 0x80739ac;
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
    *(__size32*)(esp_16 - 28) = 0x80739e8;
    esp_19 = caml_raise_with_string(*(esp_16 - 24), esp_16 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_19 - 4) = ebp;
    eax = *(esp_19 + 4);
    *(__size32*)(esp_19 - 24) = eax;
    *(__size32*)(esp_19 - 28) = 0x80739cc;
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
    *(__size32*)(esp_25 - 28) = 0x8073ac0;
    esp_28 = caml_raise_constant(*(esp_25 - 28), esp_25 - 4, *(esp_25 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_28 - 4) = ebp;
    *(__size32*)(esp_28 - 28) = 0x8073a58;
    esp_31 = caml_raise_constant(*(esp_28 - 28), esp_28 - 4, *(esp_28 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_31 - 4) = ebp;
    *(__size32*)(esp_31 - 28) = 0x8073a30;
    esp_34 = caml_raise_constant(*(esp_31 - 28), esp_31 - 4, *(esp_31 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_34 - 4) = ebp;
    *(__size32*)(esp_34 - 28) = 0x8073a10;
    cl = caml_raise_constant(*(esp_34 - 28), esp_34 - 4, *(esp_34 - 176)); /* Warning: also results in dl, ecx, edx, ebx, esp_37, ebp, esi, edi */
    *(__size32*)(esp_37 - 4) = ebp;
    ebp = esp_37 - 4;
    *(unsigned int*)(esp_37 - 8) = edi;
    *(unsigned int*)(esp_37 - 12) = esi;
    *(unsigned int*)(esp_37 - 16) = ebx;
    esp_40 = esp_37 - 60;
    eax = *(esp_37 + 8);
    al = (unsigned char) eax;
    local158 = esp_40;
    local164 = esp_40;
    if (eax != 0) {
        edx = *(esp_37 + 16);
        *(__size32*)(esp_37 - 36) = edx;
        edx = *(esp_37 + 12);
        *(__size32*)(esp_37 - 32) = eax;
        do {
bb0x8062387:
            esp_49 = local164;
            local90 = local165;
            local8 = local166;
            local37 = local167;
            local66 = local168;
            esi = *(global_0x0807f43c + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local158 = esp_49;
            local159 = local90;
            local161 = local8;
            local162 = local37;
            local163 = local66;
            local164 = esp_49;
            local165 = local90;
            local166 = local8;
            local167 = local37;
            local168 = local66;
            local169 = eax;
            local170 = esp_49;
            local172 = local8;
            local173 = local37;
            local174 = local66;
            local176 = esp_49;
            local177 = local90;
            local178 = local8;
            local179 = local37;
            local180 = local66;
            if (*ebx != edx) {
                do {
                    eax_1 = local169;
                    eax_2 = eax_1 + 1 & esi;
                    ebx = *(caml_frame_descriptors + (eax_1 + 1 & esi) * 4);
                    local169 = eax_2;
                } while (*ebx != edx);
            }
            local124 = *(ebx + 4) + 1;
            local160 = local124;
            if (*(ebx + 4) != -1) {
                esi = *(unsigned short*)(ebx + 6);
                local171 = esi;
                if ((int)esi > 0) {
                    edi = ebx + 8;
                    *(__size32*)(ebp - 36) = ebx;
                    ebx = *(ebp + 8);
                    for(;;) {
                        esp_58 = local170;
                        esi = local171;
                        local7 = local172;
                        local36 = local173;
                        local65 = local174;
                        eax_4 = *(unsigned short*)edi;
                        if (((unsigned char) eax_4 & 0x1) == 0) {
                            eax_7 = eax_4 + *(ebp - 28);
                            flags = ADDFLAGS32(eax_4, *(ebp - 28), eax_7);
                            local175 = eax_7;
                        }
                        else {
                            flags = SARFLAGS((int)eax_4 >> 1, eax_4, 1);
                            edx = *(ebp - 32);
                            eax = edx + ((int)eax_4 >> 1) * 4;
                            local175 = eax;
                        }
                        eax = local175;
                        *(__size32*)(esp_58 + 4) = eax;
                        eax = *eax;
                        *(__size32*)esp_58 = eax;
                        (*ebx)((unsigned char) eax, cl, dl, eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, local7, local36, local65, param1);
                        local170 = esp_43;
                        local172 = local9;
                        local173 = local38;
                        local174 = local67;
                        local176 = esp_43;
                        local177 = local91;
                        local178 = local9;
                        local179 = local38;
                        local180 = local67;
                        esi_4 = esi_1 - 1;
                        local171 = esi_4;
                        if ((int)esi_1 <= 1) {
                            break;
                        }
                        edi += 2;
                    }
                    ebx = *(ebp - 36);
                }
                esp_61 = local176;
                local94 = local177;
                local22 = local178;
                local49 = local179;
                local75 = local180;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local164 = esp_61;
                local165 = local94;
                local166 = local22;
                local167 = local49;
                local168 = local75;
                goto bb0x8062387;
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
    esp_52 = local158;
    local98 = local159;
    local127 = local160;
    local21 = local161;
    local48 = local162;
    local87 = local163;
    local206 = esp_52;
    local207 = local98;
    local208 = local127;
    local209 = local21;
    local210 = local48;
    local211 = local87;
    local212 = esp_52;
    if (*(ebp + 24) != 0) {
        esi = *(ebp + 24);
        *(__size32*)(ebp - 28) = 0;
        do {
            esp_64 = local206;
            local96 = local207;
            local125 = local208;
            local13 = local209;
            local42 = local210;
            local71 = local211;
            edi = 0;
            local193 = esp_64;
            local194 = edi;
            local195 = local96;
            local196 = local125;
            local197 = local13;
            local198 = local42;
            local199 = local71;
            local200 = esp_64;
            local201 = local96;
            local202 = local125;
            local203 = local13;
            local204 = local42;
            local205 = local71;
            if (*(esi + 4) > 0) {
                do {
                    esp_70 = local193;
                    edi = local194;
                    local100 = local195;
                    local129 = local196;
                    local12 = local197;
                    local41 = local198;
                    local70 = local199;
                    ebx = *(ebp - 28);
                    local181 = ebx;
                    local182 = esp_70;
                    local183 = local12;
                    local184 = local41;
                    local185 = local70;
                    local186 = ebx;
                    local187 = esp_70;
                    local188 = local100;
                    local189 = local129;
                    local190 = local12;
                    local191 = local41;
                    local192 = local70;
                    if (*(esi + 8) > 0) {
                        do {
                            ebx = local181;
                            esp_55 = local182;
                            local11 = local183;
                            local40 = local184;
                            local69 = local185;
                            eax_9 = ebx * 4 + *(esi + edi * 4 + 12);
                            *(__size32*)(esp_55 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_55 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, cl, dl, eax_12, ecx, edx, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), local11, local40, local69, param1);
                            local182 = esp_46;
                            local183 = local15;
                            local184 = local44;
                            local185 = local73;
                            local187 = esp_46;
                            local188 = local106;
                            local189 = local136;
                            local190 = local15;
                            local191 = local44;
                            local192 = local73;
                            ebx_4 = ebx_1 + 1;
                            local181 = ebx_4;
                            local186 = ebx_4;
                        } while (*(esi + 8) > ebx_1 + 1);
                    }
                    ebx = local186;
                    esp_67 = local187;
                    edi_1 = edi;
                    local97 = local188;
                    local126 = local189;
                    local14 = local190;
                    local43 = local191;
                    local72 = local192;
                    edi_2 = edi_1 + 1;
                    local193 = esp_67;
                    local194 = edi_2;
                    local195 = local97;
                    local196 = local126;
                    local197 = local14;
                    local198 = local43;
                    local199 = local72;
                    local200 = esp_67;
                    local201 = local97;
                    local202 = local126;
                    local203 = local14;
                    local204 = local43;
                    local205 = local72;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_73 = local200;
            local99 = local201;
            local128 = local202;
            *(__size32*)(esp_74 - 4) = local203;
            *(__size32*)(esp_74 - 28) = local204;
            *(unsigned int*)(esp_74 - 32) = local205;
            esi = *esi;
            local206 = esp_73;
            local207 = local99;
            local208 = local128;
            local209 = *(esp_74 - 4);
            local210 = *(esp_74 - 28);
            local211 = *(esp_74 - 32);
            local212 = esp_73;
        } while (esi == 0);
    }
    esp = local212;
    ebx = *(esp + 44);
    esi = *(esp + 48);
    edi = *(esp + 52);
    ebp = *(esp + 56);
    return eax; /* WARNING: Also returning: al := al, cl := cl, dl := dl, ecx := ecx, edx := edx, ebx := ebx, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x08065442 */
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

/** address: 0x08064e55 */
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

/** address: 0x08063eb0 */
void clip_heap_chunk_size()
{
}

/** address: 0x0806538b */
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

/** address: 0x080636b2 */
void caml_fl_init_merge()
{
    *(__size32*)(&caml_globals + 0xc8ac) = 0;
    *(__size32*)(&caml_globals + 0x94a8) = 0x807cfe8;
    return;
}

/** address: 0x080639a9 */
void caml_make_free_blocks(__size32 param1)
{
    if (param1 != 0) {
    }
    return;
}

/** address: 0x08064c59 */
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

    eax = *(global_0x0807f43c + 0xfd8);
    if (eax != *0x8080410) {
        *(__size32*)(global_0x0807f43c + 0x1018) = 1;
        caml_gc_message(2, 0x80718bc);
        esp = caml_oldify_local_roots(param1, ecx, ebx, esp - 4, esi, param4);
        ebx_1 = *(global_0x0807f43c + 0xfe0);
        local7 = ebx_1;
        if (ebx_1 < *(global_0x0807f43c + 0xfec)) {
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
        eax = *(global_0x0807f43c + 0xffc);
        if (eax < *(global_0x0807f43c + 0x1008)) {
            do {
                eax_1 = eax;
                ecx = *eax_1;
                edx = *ecx;
                if ( ~(((unsigned char) edx & 0x1) != 0 || edx >= *(global_0x0807f43c + 0xfd4) || edx <= *(global_0x0807f43c + 0xfd0))) {
                    if (*(edx - 4) == 0) {
                        edx = *edx;
                        *(__size32*)ecx = edx;
                        goto bb0x8064d0b;
                    }
                    *(__size32*)ecx = caml_weak_none;
                    goto bb0x8064d0b;
                }
bb0x8064d0b:
                eax = eax_1 + 4;
            } while (*(global_0x0807f43c + 0x1008) > eax_1 + 4);
        }
    }
    caml_final_empty_young();
    return;
}

/** address: 0x08064748 */
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
    if (*0x8083fdc != 2) {
bb0x8064762:
        eax = *(global_0x0807f43c + 0x4bac);
        edx = *(global_0x0807f43c + 0x4b94);
        *(__size32*)(ebp - 32) = edx + 100;
        *(__size32*)(ebp - 28) = 0;
        st7 = (float)*(ebp - 32);
        *(__size32*)(ebp - 32) = edx;
        *(__size32*)(ebp - 28) = 0;
        st6 = (float)*(ebp - 32);
        *(__size32*)(ebp - 32) = eax;
        *(__size32*)(ebp - 28) = 0;
        st5 = (float)*(ebp - 32);
        edx = *(global_0x0807f43c + 0x4504);
        *(int*)(ebp - 32) = (unsigned int)edx >> 2;
        *(__size32*)(ebp - 28) = 0;
        st4 = (float)*(ebp - 32);
        *(union { double; __size64; }*)(ebp - 48) = st5 * 3. * st7 / st4 / st6 * 0.5;
        edx = *(global_0x0807f43c + 0x4b98);
        if (edx != 0) {
            esi = *(global_0x0807f43c + 0x4bb4);
            *(__size32*)(ebp - 32) = esi;
            *(__size32*)(ebp - 28) = 0;
            *(__size32*)(ebp - 32) = edx;
            *(__size32*)(ebp - 28) = 0;
bb0x8064800:
        }
        goto bb0x8064800;
    }
    ebp = start_cycle();
    goto bb0x8064762;
}

/** address: 0x0806fbe9 */
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
    if ( ~(*0x80839a0 != 0 || *0x80839b4 == 0)) {
        ecx = caml_gc_message(128, 0x8072354); /* Warning: also results in edx, esp */
bb0x806fc46:
        param3 = local6;
        param4 = local7;
        eax = *0x80839b4;
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
                *(int*)(global_0x0807f43c + 0x4578) = ebx;
                if (ebx != 0) {
                    continue;
                }
                *(__size32*)(global_0x0807f43c + 0x457c) = 0;
            }
            else {
                *(int*)(eax + 4) = edx - 1;
                eax += (edx - 1) * 12;
                edx = *(eax + 8);
                ecx = *(eax + 16);
                eax = *(eax + 12);
                *(__size32*)(global_0x0807f43c + 0x4564) = 1;
                *(__size32*)(esp + 4) = eax + ecx;
                *(__size32*)esp = edx;
                ebx = caml_callback_exn(); /* Warning: also results in esp, ebp, esi, edi */
                local6 = esi;
                local7 = edi;
                *(__size32*)(global_0x0807f43c + 0x4564) = 0;
                edx = eax + ecx & 0x3;
                if ((eax + ecx & 0x3) != 2) {
                    goto bb0x806fc46;
                }
                *(union { void *; int; }*)esp = eax + ecx & ~0x3;
                ecx = caml_raise(*(esp - 36), *esp, ebx, ebp); /* Warning: also results in edx, esp */
                goto bb0x806fca2;
            }
bb0x806fc46:
            param3 = local6;
            param4 = local7;
            eax = *0x80839b4;
            local6 = param3;
            local6 = param3;
            local7 = param4;
            local7 = param4;
        }
bb0x806fca2:
        *(__size32*)(esp + 8) = 0;
        *(__size32*)(esp + 4) = 0x8072378;
        *(__size32*)esp = 128;
        caml_gc_message(*esp, *(esp + 4));
    }
    return;
}

/** address: 0x08062040 */
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
    __size32 esp_68; 		// r28{226}
    union { __size32; __size32 *; } esp_69; 		// r28{18}
    __size32 esp_7; 		// r28{42}
    union { __size32; __size32 *; } esp_70; 		// r28{18}
    union { __size32; __size32 *; } esp_71; 		// r28{256}
    union { __size32; __size32 *; } esp_72; 		// r28{256}
    __size32 esp_73; 		// r28{356}
    __size32 esp_74; 		// r28{394}
    __size32 esp_75; 		// r28{338}
    __size32 esp_76; 		// r28{211}
    __size32 esp_77; 		// r28{376}
    __size32 esp_78; 		// r28{289}
    __size32 esp_79; 		// r28{289}
    __size32 esp_8; 		// r28{42}
    __size32 esp_80; 		// r28{394}
    __size32 esp_81; 		// r28{394}
    __size32 esp_82; 		// r28{226}
    __size32 esp_83; 		// r28{226}
    __size32 esp_84; 		// r28{211}
    __size32 esp_85; 		// r28{211}
    union { __size32; __size32 *; } esp_86; 		// r28{316}
    union { __size32; __size32 *; } esp_87; 		// r28{316}
    __size32 esp_88; 		// r28{338}
    __size32 esp_89; 		// r28{338}
    __size32 esp_9; 		// r28{42}
    __size32 esp_90; 		// r28{356}
    __size32 esp_91; 		// r28{356}
    int local0; 		// m[esp - 4]
    int local1; 		// m[esp - 8]
    int local10; 		// m[esp_65 + 4]{280}
    int local100; 		// m[esp_65 - 32]{15}
    int local101; 		// m[esp_65 - 32]{15}
    int local102; 		// m[esp_65 - 32]{15}
    int local103; 		// m[esp_65 - 32]{262}
    int local104; 		// m[esp_65 - 32]{232}
    int local105; 		// m[esp_65 - 32]{280}
    int local106; 		// m[esp_65 - 32]{280}
    int local107; 		// m[esp_65 - 32]{322}
    int local108; 		// m[esp_65 - 32]{364}
    int local109; 		// m[esp_65 - 32]{401}
    __size32 local11; 		// m[esp_65 + 4]{233}
    int local110; 		// m[esp_65 - 32]{346}
    int local111; 		// m[esp_65 - 32]{328}
    int local112; 		// m[esp_65 - 32]{328}
    int local113; 		// m[esp_65 - 32]{322}
    int local114; 		// m[esp_65 - 32]{322}
    int local115; 		// m[esp_65 - 32]{346}
    int local116; 		// m[esp_65 - 32]{346}
    int local117; 		// m[esp_65 - 32]{383}
    int local118; 		// m[esp_65 - 32]{23}
    int local119; 		// m[esp_65 - 32]{295}
    __size32 local12; 		// m[esp_65 + 4]{24}
    int local120; 		// m[esp_65 - 32]{401}
    int local121; 		// m[esp_65 - 32]{401}
    int local122; 		// m[esp_65 - 32]{232}
    int local123; 		// m[esp_65 - 32]{232}
    int local124; 		// m[esp_65 - 32]{23}
    int local125; 		// m[esp_65 - 32]{23}
    int local126; 		// m[esp_65 - 32]{364}
    int local127; 		// m[esp_65 - 32]{364}
    int local128; 		// m[esp_65 - 32]{262}
    int local129; 		// m[esp_65 - 32]{262}
    int local13; 		// m[esp_65 + 4]{328}
    int local130; 		// m[esp_65 - 32]{295}
    int local131; 		// m[esp_65 - 32]{295}
    int local132; 		// m[esp_65 - 32]{7}
    int local133; 		// m[esp_65 - 32]{7}
    int local134; 		// tmpb{229}
    int local135; 		// tmpb{280}
    int local136; 		// tmpb{280}
    int local137; 		// tmpb{280}
    int local138; 		// tmpb{280}
    int local139; 		// tmpb{292}
    int local14; 		// m[esp_65 + 4]{328}
    int local140; 		// tmpb{280}
    int local141; 		// tmpb{397}
    int local142; 		// tmpb{342}
    int local143; 		// tmpb{213}
    int local144; 		// tmpb{379}
    int local145; 		// tmpb{360}
    int local146; 		// tmpb{397}
    int local147; 		// tmpb{342}
    int local148; 		// tmpb{213}
    int local149; 		// tmpb{379}
    __size32 local15; 		// m[esp_65 + 4]{296}
    int local150; 		// tmpb{360}
    int local151; 		// tmpb{328}
    int local152; 		// tmpb{328}
    int local153; 		// tmpb{328}
    int local154; 		// tmpb{328}
    int local155; 		// tmpb{292}
    int local156; 		// tmpb{292}
    int local157; 		// tmpb{292}
    int local158; 		// tmpb{292}
    int local159; 		// tmpb{229}
    __size32 local16; 		// m[esp_65 + 4]{402}
    int local160; 		// tmpb{229}
    int local161; 		// tmpb{229}
    int local162; 		// tmpb{229}
    int local163; 		// tmpb{213}
    int local164; 		// tmpb{213}
    int local165; 		// tmpb{342}
    int local166; 		// tmpb{342}
    int local167; 		// tmpb{342}
    int local168; 		// tmpb{342}
    int local169; 		// tmpb{360}
    __size32 local17; 		// m[esp_65 + 4]{347}
    int local170; 		// tmpb{360}
    int local171; 		// tmpb{379}
    int local172; 		// tmpb{379}
    int local173; 		// tmpb{397}
    int local174; 		// tmpb{397}
    int local175; 		// tmpb{397}
    int local176; 		// tmpb{397}
    int local177; 		// tmpb{19}
    int local178; 		// tmpb{19}
    int local179; 		// tmpb{19}
    __size32 local18; 		// m[esp_65 + 4]{384}
    int local180; 		// tmpb{19}
    int local181; 		// tmpb{280}
    int local182; 		// tmpb{229}
    int local183; 		// tmpb{19}
    int local184; 		// tmpb{292}
    int local185; 		// tmpb{328}
    int local186; 		// tmpb{397}
    int local187; 		// tmpb{5}
    int local188; 		// tmpb{5}
    __size16 local189; 		// tmph{244}
    __size32 local19; 		// m[esp_65 + 4]{365}
    __size16 local190; 		// tmph{398}
    __size16 local191; 		// tmph{343}
    __size16 local192; 		// tmph{214}
    __size16 local193; 		// tmph{380}
    __size16 local194; 		// tmph{361}
    __size16 local195; 		// tmph{244}
    __size16 local196; 		// tmph{244}
    __size16 local197; 		// tmph{398}
    __size16 local198; 		// tmph{343}
    __size16 local199; 		// tmph{214}
    int local2; 		// m[esp - 28]
    __size32 local20; 		// m[esp_65 + 4]{24}
    __size16 local200; 		// tmph{380}
    __size16 local201; 		// tmph{361}
    int local202; 		// tmph{328}
    int local203; 		// tmph{328}
    int local204; 		// tmph{328}
    int local205; 		// tmph{328}
    __size16 local206; 		// tmph{214}
    __size16 local207; 		// tmph{214}
    __size16 local208; 		// tmph{343}
    __size16 local209; 		// tmph{343}
    __size32 local21; 		// m[esp_65 + 4]{24}
    __size16 local210; 		// tmph{343}
    __size16 local211; 		// tmph{343}
    __size16 local212; 		// tmph{361}
    __size16 local213; 		// tmph{361}
    __size16 local214; 		// tmph{380}
    __size16 local215; 		// tmph{380}
    __size16 local216; 		// tmph{398}
    __size16 local217; 		// tmph{398}
    __size16 local218; 		// tmph{398}
    __size16 local219; 		// tmph{398}
    __size32 local22; 		// m[esp_65 + 4]{347}
    __size16 local220; 		// tmph{20}
    __size16 local221; 		// tmph{20}
    __size16 local222; 		// tmph{20}
    __size16 local223; 		// tmph{20}
    int local224; 		// tmph{328}
    __size16 local225; 		// tmph{398}
    __size16 local226; 		// tmph{343}
    __size16 local227; 		// tmph{214}
    __size16 local228; 		// tmph{380}
    __size16 local229; 		// tmph{361}
    __size32 local23; 		// m[esp_65 + 4]{347}
    __size16 local230; 		// tmph{20}
    __size16 local231; 		// tmph{244}
    __size32 local232; 		// ebx{17}
    union { __size32 *; __size32; } local233; 		// esp_69{18}
    __size32 local234; 		// local54{21}
    __size32 local235; 		// local84{22}
    int local236; 		// local118{23}
    __size32 local237; 		// local12{24}
    unsigned int local238; 		// edx_1{90}
    __size32 local239; 		// esp_76{211}
    __size32 local24; 		// m[esp_65 + 4]{402}
    int local240; 		// local143{213}
    __size16 local241; 		// local192{214}
    __size32 local242; 		// m[esp_65 - 4]{215}
    __size32 local243; 		// m[esp_65 - 8]{216}
    int local244; 		// m[esp_65 - 32]{217}
    __size32 local245; 		// m[esp_65 + 4]{218}
    __size32 local246; 		// esp_68{226}
    int local247; 		// local134{229}
    __size32 local248; 		// local39{230}
    __size32 local249; 		// local73{231}
    __size32 local25; 		// m[esp_65 + 4]{402}
    int local250; 		// local104{232}
    __size32 local251; 		// local11{233}
    int local252; 		// eax_1{239}
    union { __size32 *; __size32; } local253; 		// esp_67{256}
    unsigned int local254; 		// esi{258}
    __size32 local255; 		// local38{260}
    __size32 local256; 		// local72{261}
    int local257; 		// local103{262}
    union { __size32 *; unsigned int; } local258; 		// eax{271}
    __size32 local259; 		// esp_78{289}
    __size32 local26; 		// m[esp_65 + 4]{4}
    int local260; 		// local139{292}
    __size32 local261; 		// local55{293}
    __size32 local262; 		// local91{294}
    int local263; 		// local119{295}
    __size32 local264; 		// local15{296}
    unsigned int local265; 		// ebx{315}
    union { __size32 *; __size32; } local266; 		// esp_64{316}
    __size32 local267; 		// local42{320}
    __size32 local268; 		// local76{321}
    int local269; 		// local107{322}
    __size32 local27; 		// m[esp_65 + 4]{4}
    unsigned int local270; 		// ebx{337}
    __size32 local271; 		// esp_75{338}
    int local272; 		// local142{342}
    __size16 local273; 		// local191{343}
    __size32 local274; 		// local45{344}
    __size32 local275; 		// local79{345}
    int local276; 		// local110{346}
    __size32 local277; 		// local17{347}
    __size32 local278; 		// esp_73{356}
    unsigned int local279; 		// edi{359}
    __size32 local28; 		// m[esp_65 + 4]{296}
    int local280; 		// local145{360}
    __size16 local281; 		// local194{361}
    __size32 local282; 		// local43{362}
    __size32 local283; 		// local77{363}
    int local284; 		// local108{364}
    __size32 local285; 		// local19{365}
    __size32 local286; 		// esp_77{376}
    int local287; 		// local144{379}
    __size16 local288; 		// local193{380}
    __size32 local289; 		// local59{381}
    __size32 local29; 		// m[esp_65 + 4]{296}
    __size32 local290; 		// local90{382}
    int local291; 		// local117{383}
    __size32 local292; 		// local18{384}
    __size32 local293; 		// esp_74{394}
    int local294; 		// local141{397}
    __size16 local295; 		// local190{398}
    __size32 local296; 		// local44{399}
    __size32 local297; 		// local78{400}
    int local298; 		// local109{401}
    __size32 local299; 		// local16{402}
    int local3; 		// m[esp - 32]
    __size32 local30; 		// m[esp_65 + 4]{233}
    __size32 local300; 		// esp{408}
    __size32 local31; 		// m[esp_65 + 4]{233}
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
    __size32 local48; 		// m[esp_65 - 4]{320}
    __size32 local49; 		// m[esp_65 - 4]{320}
    int local5; 		// m[esp_65 + 4]{15}
    __size32 local50; 		// m[esp_65 - 4]{399}
    __size32 local51; 		// m[esp_65 - 4]{399}
    __size32 local52; 		// m[esp_65 - 4]{230}
    __size32 local53; 		// m[esp_65 - 4]{230}
    __size32 local54; 		// m[esp_65 - 4]{21}
    __size32 local55; 		// m[esp_65 - 4]{293}
    __size32 local56; 		// m[esp_65 - 4]{293}
    __size32 local57; 		// m[esp_65 - 4]{21}
    __size32 local58; 		// m[esp_65 - 4]{21}
    __size32 local59; 		// m[esp_65 - 4]{381}
    int local6; 		// m[esp_65 + 4]{15}
    __size32 local60; 		// m[esp_65 - 4]{344}
    __size32 local61; 		// m[esp_65 - 4]{344}
    __size32 local62; 		// m[esp_65 - 4]{260}
    __size32 local63; 		// m[esp_65 - 4]{260}
    __size32 local64; 		// m[esp_65 - 4]{362}
    __size32 local65; 		// m[esp_65 - 4]{362}
    __size32 local66; 		// m[esp_65 - 8]{9}
    __size32 local67; 		// m[esp_65 - 8]{9}
    __size32 local68; 		// m[esp_65 - 8]{9}
    int local69; 		// m[esp_65 - 8]{15}
    int local7; 		// m[esp_65 + 4]{15}
    int local70; 		// m[esp_65 - 8]{15}
    int local71; 		// m[esp_65 - 8]{15}
    __size32 local72; 		// m[esp_65 - 8]{261}
    __size32 local73; 		// m[esp_65 - 8]{231}
    int local74; 		// m[esp_65 - 8]{280}
    int local75; 		// m[esp_65 - 8]{280}
    __size32 local76; 		// m[esp_65 - 8]{321}
    __size32 local77; 		// m[esp_65 - 8]{363}
    __size32 local78; 		// m[esp_65 - 8]{400}
    __size32 local79; 		// m[esp_65 - 8]{345}
    int local8; 		// m[esp_65 + 4]{280}
    int local80; 		// m[esp_65 - 8]{328}
    int local81; 		// m[esp_65 - 8]{328}
    __size32 local82; 		// m[esp_65 - 8]{261}
    __size32 local83; 		// m[esp_65 - 8]{261}
    __size32 local84; 		// m[esp_65 - 8]{22}
    __size32 local85; 		// m[esp_65 - 8]{22}
    __size32 local86; 		// m[esp_65 - 8]{345}
    __size32 local87; 		// m[esp_65 - 8]{345}
    __size32 local88; 		// m[esp_65 - 8]{231}
    __size32 local89; 		// m[esp_65 - 8]{231}
    int local9; 		// m[esp_65 + 4]{280}
    __size32 local90; 		// m[esp_65 - 8]{382}
    __size32 local91; 		// m[esp_65 - 8]{294}
    __size32 local92; 		// m[esp_65 - 8]{321}
    __size32 local93; 		// m[esp_65 - 8]{321}
    __size32 local94; 		// m[esp_65 - 8]{400}
    __size32 local95; 		// m[esp_65 - 8]{400}
    __size32 local96; 		// m[esp_65 - 8]{363}
    __size32 local97; 		// m[esp_65 - 8]{363}
    __size32 local98; 		// m[esp_65 - 8]{294}
    __size32 local99; 		// m[esp_65 - 8]{294}

    local32 = param4;
    local66 = param3;
    esp_1 = esp_65 - 28;
    ebx_1 = param2;
    eax = *(global_0x0807f43c + 0x2434);
    al = (unsigned char) eax;
    local232 = ebx_1;
    local233 = esp_1;
    local234 = local32;
    local235 = local66;
    local236 = param1;
    local237 = param2;
    if (eax != 0) {
        (*eax)((unsigned char) eax, eax, param2, esp_65 - 4, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), param4, param3, pc, cl, dl, ecx, edx, esi, edi, param2);
        local232 = ebx;
        local233 = esp_4;
        local234 = local35;
        local235 = local69;
        local236 = local100;
        local237 = local5;
    }
    ebx = local232;
    esp_69 = local233;
    local177 = local187;
    local220 = tmph;
    local54 = local234;
    local84 = local235;
    local118 = local236;
    local12 = local237;
    local240 = local177;
    local241 = local220;
    local242 = local54;
    local243 = local84;
    local244 = local118;
    local245 = local12;
    local247 = local177;
    local248 = local54;
    local249 = local84;
    local250 = local118;
    local251 = local12;
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
    if (*0x807d284 == 0) {
        array_bound_error_msg = 0x14fc;
        global_0x0807cfc7 = 0;
        array_bound_error_bucket = 0x800;
        global_0x0807d28c = 0x80739e8;
        global_0x0807d290 = 0x807cfb4;
        array_bound_error_bucket_inited = 1;
        *(__size32*)(esp_7 - 20) = 0x807cfcc;
        *(__size32*)(esp_7 - 24) = 0x807cfb0;
        *(__size32*)(esp_7 - 28) = 4;
        caml_page_table_add(*(esp_7 - 28), *(esp_7 - 24), *(esp_7 - 20), ecx, edx);
        array_bound_error_bucket_inited = 1;
    }
    *(__size32*)(esp_7 - 28) = 0x807d28c;
    ebx = caml_raise(*(esp_7 - 64), *(esp_7 - 28), ebx, esp_7 - 4); /* Warning: also results in esp_10, ebp */
    *(__size32*)(esp_10 - 4) = ebp;
    *(__size32*)(esp_10 - 28) = 0x8073ab8;
    ebx = caml_raise(*(esp_10 - 64), *(esp_10 - 28), ebx, esp_10 - 4); /* Warning: also results in esp_13, ebp */
    *(__size32*)(esp_13 - 4) = ebp;
    *(__size32*)(esp_13 - 28) = 0x80739a4;
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
        local238 = edx;
        do {
            edx_1 = local238;
            ecx = *(ebx + edx_1 * 4);
            *(__size32*)(eax + edx_1 * 4 + 4) = ecx;
            edx_2 = edx_1 + 1;
            local238 = edx_2;
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
    *(__size32*)(esp_22 - 28) = 0x80739ac;
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
    *(__size32*)(esp_31 - 28) = 0x80739e8;
    esp_34 = caml_raise_with_string(*(esp_31 - 24), esp_31 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_34 - 4) = ebp;
    eax = *(esp_34 + 4);
    *(__size32*)(esp_34 - 24) = eax;
    *(__size32*)(esp_34 - 28) = 0x80739cc;
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
    *(__size32*)(esp_40 - 28) = 0x8073ac0;
    esp_43 = caml_raise_constant(*(esp_40 - 28), esp_40 - 4, *(esp_40 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_43 - 4) = ebp;
    *(__size32*)(esp_43 - 28) = 0x8073a58;
    esp_46 = caml_raise_constant(*(esp_43 - 28), esp_43 - 4, *(esp_43 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_46 - 4) = ebp;
    *(__size32*)(esp_46 - 28) = 0x8073a30;
    esp_49 = caml_raise_constant(*(esp_46 - 28), esp_46 - 4, *(esp_46 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_49 - 4) = ebp;
    *(__size32*)(esp_49 - 28) = 0x8073a10;
    cl = caml_raise_constant(*(esp_49 - 28), esp_49 - 4, *(esp_49 - 176)); /* Warning: also results in dl, ecx, edx, ebx, esp_52, ebp, esi, edi */
    *(__size32*)(esp_52 - 4) = ebp;
    ebp = esp_52 - 4;
    *(unsigned int*)(esp_52 - 8) = edi;
    *(unsigned int*)(esp_52 - 12) = esi;
    *(unsigned int*)(esp_52 - 16) = ebx;
    esp_55 = esp_52 - 60;
    eax = *(esp_52 + 8);
    al = (unsigned char) eax;
    local239 = esp_55;
    local246 = esp_55;
    if (eax != 0) {
        edx = *(esp_52 + 16);
        *(__size32*)(esp_52 - 36) = edx;
        edx = *(esp_52 + 12);
        *(__size32*)(esp_52 - 32) = eax;
        do {
bb0x8062387:
            esp_68 = local246;
            local134 = local247;
            local39 = local248;
            local73 = local249;
            local104 = local250;
            local11 = local251;
            esi = *(global_0x0807f43c + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local239 = esp_68;
            local240 = local134;
            local242 = local39;
            local243 = local73;
            local244 = local104;
            local245 = local11;
            local246 = esp_68;
            local247 = local134;
            local248 = local39;
            local249 = local73;
            local250 = local104;
            local251 = local11;
            local252 = eax;
            local253 = esp_68;
            local255 = local39;
            local256 = local73;
            local257 = local104;
            local259 = esp_68;
            local260 = local134;
            local261 = local39;
            local262 = local73;
            local263 = local104;
            local264 = local11;
            if (*ebx != edx) {
                do {
                    eax_1 = local252;
                    eax_2 = eax_1 + 1 & esi;
                    ebx = *(caml_frame_descriptors + (eax_1 + 1 & esi) * 4);
                    local252 = eax_2;
                } while (*ebx != edx);
            }
            local189 = *(ebx + 4) + 1;
            local241 = local189;
            if (*(ebx + 4) != -1) {
                esi = *(unsigned short*)(ebx + 6);
                local254 = esi;
                if ((int)esi > 0) {
                    edi = ebx + 8;
                    *(__size32*)(ebp - 36) = ebx;
                    ebx = *(ebp + 8);
                    for(;;) {
                        esp_67 = local253;
                        esi = local254;
                        local38 = local255;
                        local72 = local256;
                        local103 = local257;
                        eax_4 = *(unsigned short*)edi;
                        if (((unsigned char) eax_4 & 0x1) == 0) {
                            eax_7 = eax_4 + *(ebp - 28);
                            flags = ADDFLAGS32(eax_4, *(ebp - 28), eax_7);
                            local258 = eax_7;
                        }
                        else {
                            flags = SARFLAGS((int)eax_4 >> 1, eax_4, 1);
                            edx = *(ebp - 32);
                            eax = edx + ((int)eax_4 >> 1) * 4;
                            local258 = eax;
                        }
                        eax = local258;
                        *(__size32*)(esp_67 + 4) = eax;
                        eax = *eax;
                        *(__size32*)esp_67 = eax;
                        (*ebx)((unsigned char) eax, cl, dl, eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, local38, local72, local103, param2);
                        local253 = esp_58;
                        local255 = local40;
                        local256 = local74;
                        local257 = local105;
                        local259 = esp_58;
                        local260 = local135;
                        local261 = local40;
                        local262 = local74;
                        local263 = local105;
                        local264 = local8;
                        esi_4 = esi_1 - 1;
                        local254 = esi_4;
                        if ((int)esi_1 <= 1) {
                            break;
                        }
                        edi += 2;
                    }
                    ebx = *(ebp - 36);
                }
                esp_78 = local259;
                local139 = local260;
                local55 = local261;
                local91 = local262;
                local119 = local263;
                local15 = local264;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local246 = esp_78;
                local247 = local139;
                local248 = local55;
                local249 = local91;
                local250 = local119;
                local251 = local15;
                goto bb0x8062387;
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
    esp_76 = local239;
    local143 = local240;
    local192 = local241;
    *(__size32*)(esp_65 - 4) = local242;
    *(__size32*)(esp_65 - 8) = local243;
    *(esp_65 - 32) = local244;
    *(__size32*)(esp_65 + 4) = local245;
    local293 = esp_76;
    local294 = local143;
    local295 = local192;
    local296 = *(esp_65 - 4);
    local297 = *(esp_65 - 8);
    local298 = *(esp_65 - 32);
    local299 = *(esp_65 + 4);
    local300 = esp_76;
    if (*(ebp + 24) != 0) {
        esi = *(ebp + 24);
        *(__size32*)(ebp - 28) = 0;
        do {
            esp_74 = local293;
            local141 = local294;
            local190 = local295;
            local44 = local296;
            local78 = local297;
            local109 = local298;
            local16 = local299;
            edi = 0;
            local278 = esp_74;
            local279 = edi;
            local280 = local141;
            local281 = local190;
            local282 = local44;
            local283 = local78;
            local284 = local109;
            local285 = local16;
            local286 = esp_74;
            local287 = local141;
            local288 = local190;
            local289 = local44;
            local290 = local78;
            local291 = local109;
            local292 = local16;
            if (*(esi + 4) > 0) {
                do {
                    esp_73 = local278;
                    edi = local279;
                    local145 = local280;
                    local194 = local281;
                    local43 = local282;
                    local77 = local283;
                    local108 = local284;
                    local19 = local285;
                    ebx = *(ebp - 28);
                    local265 = ebx;
                    local266 = esp_73;
                    local267 = local43;
                    local268 = local77;
                    local269 = local108;
                    local270 = ebx;
                    local271 = esp_73;
                    local272 = local145;
                    local273 = local194;
                    local274 = local43;
                    local275 = local77;
                    local276 = local108;
                    local277 = local19;
                    if (*(esi + 8) > 0) {
                        do {
                            ebx = local265;
                            esp_64 = local266;
                            local42 = local267;
                            local76 = local268;
                            local107 = local269;
                            eax_9 = ebx * 4 + *(esi + edi * 4 + 12);
                            *(__size32*)(esp_64 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_64 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, cl, dl, eax_12, ecx, edx, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), local42, local76, local107, param2);
                            local266 = esp_61;
                            local267 = local46;
                            local268 = local80;
                            local269 = local111;
                            local271 = esp_61;
                            local272 = local151;
                            local273 = local202;
                            local274 = local46;
                            local275 = local80;
                            local276 = local111;
                            local277 = local13;
                            ebx_6 = ebx_3 + 1;
                            local265 = ebx_6;
                            local270 = ebx_6;
                        } while (*(esi + 8) > ebx_3 + 1);
                    }
                    ebx = local270;
                    esp_75 = local271;
                    edi_1 = edi;
                    local142 = local272;
                    local191 = local273;
                    local45 = local274;
                    local79 = local275;
                    local110 = local276;
                    local17 = local277;
                    edi_2 = edi_1 + 1;
                    local278 = esp_75;
                    local279 = edi_2;
                    local280 = local142;
                    local281 = local191;
                    local282 = local45;
                    local283 = local79;
                    local284 = local110;
                    local285 = local17;
                    local286 = esp_75;
                    local287 = local142;
                    local288 = local191;
                    local289 = local45;
                    local290 = local79;
                    local291 = local110;
                    local292 = local17;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_77 = local286;
            local144 = local287;
            local193 = local288;
            local59 = local289;
            local90 = local290;
            local117 = local291;
            local18 = local292;
            esi = *esi;
            local293 = esp_77;
            local294 = local144;
            local295 = local193;
            local296 = local59;
            local297 = local90;
            local298 = local117;
            local299 = local18;
            local300 = esp_77;
        } while (esi == 0);
    }
    esp = local300;
    ebx = *(esp + 44);
    esi = *(esp + 48);
    ebp = *(esp + 56);
    return ecx; /* WARNING: Also returning: edx := edx, ebx := ebx, ebp := ebp, esi := esi */
}

/** address: 0x08065891 */
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
    eax = *(global_0x0807f43c + 0xfd8) - param1 * 4 - 4;
    *(unsigned int*)(global_0x0807f43c + 0xfd8) = eax;
    local4 = esp_1;
    if (eax < *(global_0x0807f43c + 0xfdc)) {
        *(unsigned int*)(global_0x0807f43c + 0xfd8) = eax + param1 * 4 + 4;
        esp_4 = esp_8 - 16;
        caml_minor_collection();
        local4 = esp_4;
        *(__size32*)(global_0x0807f43c + 0xfd8) = *(global_0x0807f43c + 0xfd8) - param1 * 4 - 4;
    }
    esp_7 = local4;
    eax = *0x8080414;
    *(__size32*)eax = param2 + (param1 << 10) + 768;
    eax = *(global_0x0807f43c + 0xfd8);
    ebx = *esp_7;
    esi = *(esp_7 + 4);
    return eax + 4; /* WARNING: Also returning: ebx := ebx, esi := esi */
}

/** address: 0x080621a7 */
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
    union { __size32; __size32 *; } esp_46; 		// r28{183}
    __size32 esp_47; 		// r28{141}
    __size32 esp_48; 		// r28{329}
    __size32 esp_49; 		// r28{227}
    __size32 esp_5; 		// r28{32}
    __size32 esp_50; 		// r28{391}
    __size32 esp_51; 		// r28{114}
    __size32 esp_52; 		// r28{361}
    __size32 esp_53; 		// r28{299}
    __size32 esp_54; 		// r28{299}
    __size32 esp_55; 		// r28{329}
    __size32 esp_56; 		// r28{329}
    __size32 esp_57; 		// r28{391}
    __size32 esp_58; 		// r28{391}
    union { __size32; __size32 *; } esp_59; 		// r28{183}
    __size32 esp_6; 		// r28{32}
    union { __size32; __size32 *; } esp_60; 		// r28{183}
    __size32 esp_61; 		// r28{227}
    __size32 esp_62; 		// r28{227}
    __size32 esp_63; 		// r28{141}
    __size32 esp_64; 		// r28{141}
    __size32 esp_65; 		// r28{114}
    __size32 esp_66; 		// r28{114}
    union { __size32; __size32 *; } esp_67; 		// r28{266}
    union { __size32; __size32 *; } esp_68; 		// r28{266}
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
    __size32 local17; 		// m[esp_44 + 4]{3}
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
    __size32 local18; 		// m[esp_44 + 4]{3}
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
    int local20; 		// m[esp_44 + 4]{218}
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
    int local21; 		// m[esp_44 + 4]{218}
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
    __size32 local22; 		// m[esp_44 + 4]{159}
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
    int local23; 		// m[esp_44 + 4]{289}
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
    int local24; 		// m[esp_44 + 4]{289}
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
    __size32 local268; 		// m[esp_44 - 68]{125}
    __size32 local269; 		// m[esp_44 - 68]{238}
    __size32 local27; 		// m[esp_44 + 4]{132}
    __size32 local270; 		// m[esp_44 - 68]{312}
    __size32 local271; 		// m[esp_44 - 68]{312}
    __size32 local272; 		// m[esp_44 - 68]{277}
    __size32 local273; 		// m[esp_44 - 68]{277}
    __size32 local274; 		// m[esp_44 - 68]{238}
    __size32 local275; 		// m[esp_44 - 68]{238}
    __size32 local276; 		// m[esp_44 - 68]{152}
    __size32 local277; 		// m[esp_44 - 68]{152}
    __size32 local278; 		// m[esp_44 - 68]{403}
    __size32 local279; 		// m[esp_44 - 68]{403}
    __size32 local28; 		// m[esp_44 + 4]{380}
    __size32 local280; 		// m[esp_44 - 68]{342}
    __size32 local281; 		// m[esp_44 - 68]{342}
    __size32 local282; 		// m[esp_44 - 68]{194}
    __size32 local283; 		// m[esp_44 - 68]{194}
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
    __size32 local297; 		// m[esp_44 - 72]{195}
    __size32 local298; 		// m[esp_44 - 72]{195}
    __size32 local299; 		// m[esp_44 - 72]{313}
    int local3; 		// m[esp - 36]
    __size32 local30; 		// m[esp_44 + 4]{245}
    __size32 local300; 		// m[esp_44 - 72]{313}
    __size32 local301; 		// m[esp_44 - 72]{374}
    __size32 local302; 		// m[esp_44 - 72]{239}
    __size32 local303; 		// m[esp_44 - 72]{343}
    __size32 local304; 		// m[esp_44 - 72]{343}
    __size32 local305; 		// m[esp_44 - 72]{239}
    __size32 local306; 		// m[esp_44 - 72]{239}
    __size32 local307; 		// m[esp_44 - 72]{278}
    __size32 local308; 		// m[esp_44 - 72]{278}
    __size32 local309; 		// m[esp_44 - 72]{153}
    __size32 local31; 		// m[esp_44 + 4]{245}
    __size32 local310; 		// m[esp_44 - 72]{153}
    __size32 local311; 		// m[esp_44 - 72]{404}
    __size32 local312; 		// m[esp_44 - 72]{404}
    __size32 local313; 		// m[esp_44 - 76]{17}
    __size32 local314; 		// m[esp_44 - 76]{17}
    __size32 local315; 		// m[esp_44 - 76]{17}
    __size32 local316; 		// m[esp_44 - 76]{196}
    __size32 local317; 		// m[esp_44 - 76]{154}
    int local318; 		// m[esp_44 - 76]{218}
    int local319; 		// m[esp_44 - 76]{218}
    __size32 local32; 		// m[esp_44 + 4]{159}
    __size32 local320; 		// m[esp_44 - 76]{279}
    __size32 local321; 		// m[esp_44 - 76]{344}
    __size32 local322; 		// m[esp_44 - 76]{405}
    __size32 local323; 		// m[esp_44 - 76]{314}
    int local324; 		// m[esp_44 - 76]{289}
    int local325; 		// m[esp_44 - 76]{289}
    __size32 local326; 		// m[esp_44 - 76]{196}
    __size32 local327; 		// m[esp_44 - 76]{196}
    __size32 local328; 		// m[esp_44 - 76]{240}
    __size32 local329; 		// m[esp_44 - 76]{240}
    __size32 local33; 		// m[esp_44 + 4]{159}
    __size32 local330; 		// m[esp_44 - 76]{154}
    __size32 local331; 		// m[esp_44 - 76]{154}
    __size32 local332; 		// m[esp_44 - 76]{375}
    __size32 local333; 		// m[esp_44 - 76]{279}
    __size32 local334; 		// m[esp_44 - 76]{279}
    __size32 local335; 		// m[esp_44 - 76]{314}
    __size32 local336; 		// m[esp_44 - 76]{314}
    __size32 local337; 		// m[esp_44 - 76]{344}
    __size32 local338; 		// m[esp_44 - 76]{344}
    __size32 local339; 		// m[esp_44 - 76]{405}
    __size32 local34; 		// m[esp_44 + 4]{319}
    __size32 local340; 		// m[esp_44 - 76]{405}
    __size32 local341; 		// m[esp_44 - 80]{14}
    __size32 local342; 		// m[esp_44 - 80]{14}
    __size32 local343; 		// m[esp_44 - 80]{14}
    __size32 local344; 		// m[esp_44 - 80]{197}
    __size32 local345; 		// m[esp_44 - 80]{155}
    int local346; 		// m[esp_44 - 80]{218}
    int local347; 		// m[esp_44 - 80]{218}
    __size32 local348; 		// m[esp_44 - 80]{280}
    __size32 local349; 		// m[esp_44 - 80]{345}
    __size32 local35; 		// m[esp_44 + 4]{319}
    __size32 local350; 		// m[esp_44 - 80]{406}
    __size32 local351; 		// m[esp_44 - 80]{315}
    int local352; 		// m[esp_44 - 80]{289}
    int local353; 		// m[esp_44 - 80]{289}
    __size32 local354; 		// m[esp_44 - 80]{197}
    __size32 local355; 		// m[esp_44 - 80]{197}
    __size32 local356; 		// m[esp_44 - 80]{241}
    __size32 local357; 		// m[esp_44 - 80]{241}
    __size32 local358; 		// m[esp_44 - 80]{155}
    __size32 local359; 		// m[esp_44 - 80]{155}
    __size32 local36; 		// m[esp_44 + 4]{410}
    __size32 local360; 		// m[esp_44 - 80]{376}
    __size32 local361; 		// m[esp_44 - 80]{280}
    __size32 local362; 		// m[esp_44 - 80]{280}
    __size32 local363; 		// m[esp_44 - 80]{315}
    __size32 local364; 		// m[esp_44 - 80]{315}
    __size32 local365; 		// m[esp_44 - 80]{345}
    __size32 local366; 		// m[esp_44 - 80]{345}
    __size32 local367; 		// m[esp_44 - 80]{406}
    __size32 local368; 		// m[esp_44 - 80]{406}
    __size32 local369; 		// m[esp_44 - 104]{19}
    __size32 local37; 		// m[esp_44 + 4]{410}
    __size32 local370; 		// m[esp_44 - 104]{19}
    __size32 local371; 		// m[esp_44 - 104]{19}
    __size32 local372; 		// m[esp_44 - 104]{198}
    __size32 local373; 		// m[esp_44 - 104]{156}
    int local374; 		// m[esp_44 - 104]{218}
    int local375; 		// m[esp_44 - 104]{218}
    __size32 local376; 		// m[esp_44 - 104]{281}
    __size32 local377; 		// m[esp_44 - 104]{346}
    __size32 local378; 		// m[esp_44 - 104]{407}
    __size32 local379; 		// m[esp_44 - 104]{316}
    int local38; 		// m[esp_44 + 8]{218}
    int local380; 		// m[esp_44 - 104]{289}
    int local381; 		// m[esp_44 - 104]{289}
    __size32 local382; 		// m[esp_44 - 104]{198}
    __size32 local383; 		// m[esp_44 - 104]{198}
    __size32 local384; 		// m[esp_44 - 104]{242}
    __size32 local385; 		// m[esp_44 - 104]{242}
    __size32 local386; 		// m[esp_44 - 104]{156}
    __size32 local387; 		// m[esp_44 - 104]{156}
    __size32 local388; 		// m[esp_44 - 104]{377}
    __size32 local389; 		// m[esp_44 - 104]{281}
    int local39; 		// m[esp_44 + 8]{218}
    __size32 local390; 		// m[esp_44 - 104]{281}
    __size32 local391; 		// m[esp_44 - 104]{316}
    __size32 local392; 		// m[esp_44 - 104]{316}
    __size32 local393; 		// m[esp_44 - 104]{346}
    __size32 local394; 		// m[esp_44 - 104]{346}
    __size32 local395; 		// m[esp_44 - 104]{407}
    __size32 local396; 		// m[esp_44 - 104]{407}
    __size32 local397; 		// m[esp_44 - 108]{24}
    __size32 local398; 		// m[esp_44 - 108]{24}
    __size32 local399; 		// m[esp_44 - 108]{24}
    int local4; 		// m[esp - 40]
    int local40; 		// m[esp_44 + 8]{218}
    __size32 local400; 		// m[esp_44 - 108]{199}
    __size32 local401; 		// m[esp_44 - 108]{157}
    int local402; 		// m[esp_44 - 108]{218}
    int local403; 		// m[esp_44 - 108]{218}
    __size32 local404; 		// m[esp_44 - 108]{282}
    __size32 local405; 		// m[esp_44 - 108]{347}
    __size32 local406; 		// m[esp_44 - 108]{408}
    __size32 local407; 		// m[esp_44 - 108]{317}
    int local408; 		// m[esp_44 - 108]{289}
    int local409; 		// m[esp_44 - 108]{289}
    __size32 local41; 		// m[esp_44 + 8]{160}
    __size32 local410; 		// m[esp_44 - 108]{199}
    __size32 local411; 		// m[esp_44 - 108]{199}
    __size32 local412; 		// m[esp_44 - 108]{243}
    __size32 local413; 		// m[esp_44 - 108]{243}
    __size32 local414; 		// m[esp_44 - 108]{157}
    __size32 local415; 		// m[esp_44 - 108]{157}
    __size32 local416; 		// m[esp_44 - 108]{378}
    __size32 local417; 		// m[esp_44 - 108]{282}
    __size32 local418; 		// m[esp_44 - 108]{282}
    __size32 local419; 		// m[esp_44 - 108]{317}
    int local42; 		// m[esp_44 + 8]{289}
    __size32 local420; 		// m[esp_44 - 108]{317}
    __size32 local421; 		// m[esp_44 - 108]{347}
    __size32 local422; 		// m[esp_44 - 108]{347}
    __size32 local423; 		// m[esp_44 - 108]{408}
    __size32 local424; 		// m[esp_44 - 108]{408}
    unsigned int local425; 		// m[esp_44 - 112]{25}
    unsigned int local426; 		// m[esp_44 - 112]{25}
    unsigned int local427; 		// m[esp_44 - 112]{25}
    unsigned int local428; 		// m[esp_44 - 112]{200}
    unsigned int local429; 		// m[esp_44 - 112]{158}
    int local43; 		// m[esp_44 + 8]{289}
    int local430; 		// m[esp_44 - 112]{218}
    int local431; 		// m[esp_44 - 112]{218}
    unsigned int local432; 		// m[esp_44 - 112]{283}
    unsigned int local433; 		// m[esp_44 - 112]{348}
    unsigned int local434; 		// m[esp_44 - 112]{409}
    unsigned int local435; 		// m[esp_44 - 112]{318}
    int local436; 		// m[esp_44 - 112]{289}
    int local437; 		// m[esp_44 - 112]{289}
    unsigned int local438; 		// m[esp_44 - 112]{200}
    unsigned int local439; 		// m[esp_44 - 112]{200}
    __size32 local44; 		// m[esp_44 + 8]{4}
    unsigned int local440; 		// m[esp_44 - 112]{244}
    unsigned int local441; 		// m[esp_44 - 112]{244}
    unsigned int local442; 		// m[esp_44 - 112]{158}
    unsigned int local443; 		// m[esp_44 - 112]{158}
    unsigned int local444; 		// m[esp_44 - 112]{379}
    unsigned int local445; 		// m[esp_44 - 112]{283}
    unsigned int local446; 		// m[esp_44 - 112]{283}
    unsigned int local447; 		// m[esp_44 - 112]{318}
    unsigned int local448; 		// m[esp_44 - 112]{318}
    unsigned int local449; 		// m[esp_44 - 112]{348}
    __size32 local45; 		// m[esp_44 + 8]{4}
    unsigned int local450; 		// m[esp_44 - 112]{348}
    unsigned int local451; 		// m[esp_44 - 112]{409}
    unsigned int local452; 		// m[esp_44 - 112]{409}
    int local453; 		// tmpb{144}
    int local454; 		// tmpb{218}
    int local455; 		// tmpb{218}
    int local456; 		// tmpb{218}
    int local457; 		// tmpb{230}
    int local458; 		// tmpb{218}
    int local459; 		// tmpb{394}
    __size32 local46; 		// m[esp_44 + 8]{411}
    int local460; 		// tmpb{303}
    int local461; 		// tmpb{116}
    int local462; 		// tmpb{364}
    int local463; 		// tmpb{333}
    int local464; 		// tmpb{394}
    int local465; 		// tmpb{303}
    int local466; 		// tmpb{116}
    int local467; 		// tmpb{364}
    int local468; 		// tmpb{333}
    int local469; 		// tmpb{289}
    __size32 local47; 		// m[esp_44 + 8]{320}
    int local470; 		// tmpb{289}
    int local471; 		// tmpb{289}
    int local472; 		// tmpb{230}
    int local473; 		// tmpb{230}
    int local474; 		// tmpb{230}
    int local475; 		// tmpb{144}
    int local476; 		// tmpb{144}
    int local477; 		// tmpb{144}
    int local478; 		// tmpb{116}
    int local479; 		// tmpb{303}
    __size32 local48; 		// m[esp_44 + 8]{133}
    int local480; 		// tmpb{303}
    int local481; 		// tmpb{303}
    int local482; 		// tmpb{333}
    int local483; 		// tmpb{364}
    int local484; 		// tmpb{394}
    int local485; 		// tmpb{394}
    int local486; 		// tmpb{394}
    int local487; 		// tmpb{218}
    int local488; 		// tmpb{144}
    int local489; 		// tmpb{5}
    __size32 local49; 		// m[esp_44 + 8]{381}
    int local490; 		// tmpb{5}
    __size16 local491; 		// tmph{171}
    __size16 local492; 		// tmph{395}
    __size16 local493; 		// tmph{304}
    __size16 local494; 		// tmph{117}
    __size16 local495; 		// tmph{365}
    __size16 local496; 		// tmph{334}
    __size16 local497; 		// tmph{171}
    __size16 local498; 		// tmph{395}
    __size16 local499; 		// tmph{304}
    int local5; 		// m[esp - 32]
    __size32 local50; 		// m[esp_44 + 8]{350}
    __size16 local500; 		// tmph{117}
    __size16 local501; 		// tmph{365}
    __size16 local502; 		// tmph{334}
    int local503; 		// tmph{289}
    int local504; 		// tmph{289}
    int local505; 		// tmph{289}
    __size16 local506; 		// tmph{117}
    __size16 local507; 		// tmph{304}
    __size16 local508; 		// tmph{304}
    __size16 local509; 		// tmph{304}
    __size32 local51; 		// m[esp_44 + 8]{246}
    __size16 local510; 		// tmph{334}
    __size16 local511; 		// tmph{365}
    __size16 local512; 		// tmph{395}
    __size16 local513; 		// tmph{395}
    __size16 local514; 		// tmph{395}
    int local515; 		// tmph{289}
    __size16 local516; 		// tmph{395}
    __size16 local517; 		// tmph{304}
    __size16 local518; 		// tmph{117}
    __size16 local519; 		// tmph{365}
    __size32 local52; 		// m[esp_44 + 8]{246}
    __size16 local520; 		// tmph{334}
    __size16 local521; 		// tmph{171}
    __size16 local522; 		// tmph{6}
    __size16 local523; 		// tmph{6}
    __size32 local524; 		// esp_51{114}
    int local525; 		// local461{116}
    __size16 local526; 		// local494{117}
    __size32 local527; 		// m[esp_44 - 4]{118}
    __size32 local528; 		// m[esp_44 - 28]{119}
    __size32 local529; 		// m[esp_44 - 32]{120}
    __size32 local53; 		// m[esp_44 + 8]{160}
    __size32 local530; 		// m[esp_44 - 36]{121}
    __size32 local531; 		// m[esp_44 - 40]{122}
    __size32 local532; 		// m[esp_44 - 44]{123}
    __size32 local533; 		// m[esp_44 - 48]{124}
    __size32 local534; 		// local268{125}
    __size32 local535; 		// m[esp_44 - 72]{126}
    __size32 local536; 		// m[esp_44 - 76]{127}
    __size32 local537; 		// m[esp_44 - 80]{128}
    __size32 local538; 		// m[esp_44 - 104]{129}
    __size32 local539; 		// m[esp_44 - 108]{130}
    __size32 local54; 		// m[esp_44 + 8]{160}
    unsigned int local540; 		// m[esp_44 - 112]{131}
    __size32 local541; 		// esp_47{141}
    int local542; 		// local453{144}
    __size32 local543; 		// local63{145}
    __size32 local544; 		// local91{146}
    __size32 local545; 		// local119{147}
    __size32 local546; 		// local147{148}
    __size32 local547; 		// local175{149}
    __size32 local548; 		// local203{150}
    __size32 local549; 		// local231{151}
    __size32 local55; 		// m[esp_44 + 8]{320}
    __size32 local550; 		// local259{152}
    __size32 local551; 		// local288{153}
    __size32 local552; 		// local317{154}
    __size32 local553; 		// local345{155}
    __size32 local554; 		// local373{156}
    __size32 local555; 		// local401{157}
    unsigned int local556; 		// local429{158}
    __size32 local557; 		// local22{159}
    __size32 local558; 		// local41{160}
    int local559; 		// eax_1{166}
    __size32 local56; 		// m[esp_44 + 8]{320}
    union { __size32 *; __size32; } local560; 		// esp_46{183}
    unsigned int local561; 		// esi{185}
    __size32 local562; 		// local62{187}
    __size32 local563; 		// local90{188}
    __size32 local564; 		// local118{189}
    __size32 local565; 		// local146{190}
    __size32 local566; 		// local174{191}
    __size32 local567; 		// local202{192}
    __size32 local568; 		// local230{193}
    __size32 local569; 		// local258{194}
    __size32 local57; 		// m[esp_44 + 8]{411}
    __size32 local570; 		// local287{195}
    __size32 local571; 		// local316{196}
    __size32 local572; 		// local344{197}
    __size32 local573; 		// local372{198}
    __size32 local574; 		// local400{199}
    unsigned int local575; 		// local428{200}
    union { __size32 *; unsigned int; } local576; 		// eax{209}
    __size32 local577; 		// esp_49{227}
    int local578; 		// local457{230}
    __size32 local579; 		// local72{231}
    __size32 local58; 		// m[esp_44 + 8]{411}
    __size32 local580; 		// local102{232}
    __size32 local581; 		// local130{233}
    __size32 local582; 		// local158{234}
    __size32 local583; 		// local186{235}
    __size32 local584; 		// local214{236}
    __size32 local585; 		// local242{237}
    __size32 local586; 		// local269{238}
    __size32 local587; 		// local302{239}
    __size32 local588; 		// local328{240}
    __size32 local589; 		// local356{241}
    __size32 local59; 		// m[esp_44 - 4]{8}
    __size32 local590; 		// local384{242}
    __size32 local591; 		// local412{243}
    unsigned int local592; 		// local440{244}
    __size32 local593; 		// local30{245}
    __size32 local594; 		// local51{246}
    unsigned int local595; 		// ebx{265}
    union { __size32 *; __size32; } local596; 		// esp_43{266}
    __size32 local597; 		// local66{270}
    __size32 local598; 		// local94{271}
    __size32 local599; 		// local122{272}
    int local6; 		// m[esp - 28]
    __size32 local60; 		// m[esp_44 - 4]{8}
    __size32 local600; 		// local150{273}
    __size32 local601; 		// local178{274}
    __size32 local602; 		// local206{275}
    __size32 local603; 		// local234{276}
    __size32 local604; 		// local262{277}
    __size32 local605; 		// local291{278}
    __size32 local606; 		// local320{279}
    __size32 local607; 		// local348{280}
    __size32 local608; 		// local376{281}
    __size32 local609; 		// local404{282}
    __size32 local61; 		// m[esp_44 - 4]{8}
    unsigned int local610; 		// local432{283}
    unsigned int local611; 		// ebx{298}
    __size32 local612; 		// esp_53{299}
    int local613; 		// local460{303}
    __size16 local614; 		// local493{304}
    __size32 local615; 		// local69{305}
    __size32 local616; 		// local97{306}
    __size32 local617; 		// local125{307}
    __size32 local618; 		// local153{308}
    __size32 local619; 		// local181{309}
    __size32 local62; 		// m[esp_44 - 4]{187}
    __size32 local620; 		// local209{310}
    __size32 local621; 		// local237{311}
    __size32 local622; 		// local265{312}
    __size32 local623; 		// local294{313}
    __size32 local624; 		// local323{314}
    __size32 local625; 		// local351{315}
    __size32 local626; 		// local379{316}
    __size32 local627; 		// local407{317}
    unsigned int local628; 		// local435{318}
    __size32 local629; 		// local26{319}
    __size32 local63; 		// m[esp_44 - 4]{145}
    __size32 local630; 		// local47{320}
    __size32 local631; 		// esp_48{329}
    unsigned int local632; 		// edi{332}
    int local633; 		// local463{333}
    __size16 local634; 		// local496{334}
    __size32 local635; 		// local67{335}
    __size32 local636; 		// local95{336}
    __size32 local637; 		// local123{337}
    __size32 local638; 		// local151{338}
    __size32 local639; 		// local179{339}
    int local64; 		// m[esp_44 - 4]{218}
    __size32 local640; 		// local207{340}
    __size32 local641; 		// local235{341}
    __size32 local642; 		// local263{342}
    __size32 local643; 		// local292{343}
    __size32 local644; 		// local321{344}
    __size32 local645; 		// local349{345}
    __size32 local646; 		// local377{346}
    __size32 local647; 		// local405{347}
    unsigned int local648; 		// local433{348}
    __size32 local649; 		// local29{349}
    int local65; 		// m[esp_44 - 4]{218}
    __size32 local650; 		// local50{350}
    __size32 local651; 		// esp_52{361}
    int local652; 		// local462{364}
    __size16 local653; 		// local495{365}
    __size32 local654; 		// local78{366}
    __size32 local655; 		// local106{367}
    __size32 local656; 		// local134{368}
    __size32 local657; 		// local162{369}
    __size32 local658; 		// local190{370}
    __size32 local659; 		// local218{371}
    __size32 local66; 		// m[esp_44 - 4]{270}
    __size32 local660; 		// local246{372}
    __size32 local661; 		// m[esp_44 - 68]{373}
    __size32 local662; 		// local301{374}
    __size32 local663; 		// local332{375}
    __size32 local664; 		// local360{376}
    __size32 local665; 		// local388{377}
    __size32 local666; 		// local416{378}
    unsigned int local667; 		// local444{379}
    __size32 local668; 		// local28{380}
    __size32 local669; 		// local49{381}
    __size32 local67; 		// m[esp_44 - 4]{335}
    __size32 local670; 		// esp_50{391}
    int local671; 		// local459{394}
    __size16 local672; 		// local492{395}
    __size32 local673; 		// local68{396}
    __size32 local674; 		// local96{397}
    __size32 local675; 		// local124{398}
    __size32 local676; 		// local152{399}
    __size32 local677; 		// local180{400}
    __size32 local678; 		// local208{401}
    __size32 local679; 		// local236{402}
    __size32 local68; 		// m[esp_44 - 4]{396}
    __size32 local680; 		// local264{403}
    __size32 local681; 		// local293{404}
    __size32 local682; 		// local322{405}
    __size32 local683; 		// local350{406}
    __size32 local684; 		// local378{407}
    __size32 local685; 		// local406{408}
    unsigned int local686; 		// local434{409}
    __size32 local687; 		// local25{410}
    __size32 local688; 		// local46{411}
    __size32 local689; 		// esp{415}
    __size32 local69; 		// m[esp_44 - 4]{305}
    int local7; 		// m[esp - 48]
    int local70; 		// m[esp_44 - 4]{289}
    int local71; 		// m[esp_44 - 4]{289}
    __size32 local72; 		// m[esp_44 - 4]{231}
    __size32 local73; 		// m[esp_44 - 4]{231}
    __size32 local74; 		// m[esp_44 - 4]{187}
    __size32 local75; 		// m[esp_44 - 4]{187}
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
    local341 = esp_44 - 44;
    caml_local_roots = esp_44 - 80;
    local284 = 1;
    local313 = 1;
    local255 = esp_44 - 48;
    local369 = 0;
    eax = caml_alloc_small(2, 0); /* Warning: also results in ebx */
    local525 = local489;
    local526 = local522;
    local527 = local59;
    local528 = local87;
    local529 = local115;
    local530 = local143;
    local531 = local171;
    local532 = local199;
    local534 = local255;
    local535 = local284;
    local536 = local313;
    local537 = local341;
    local538 = local369;
    local542 = local489;
    local543 = local59;
    local544 = local87;
    local545 = local115;
    local546 = local143;
    local547 = local171;
    local548 = local199;
    local550 = local255;
    local551 = local284;
    local552 = local313;
    local553 = local341;
    local554 = local369;
    local557 = param1;
    local558 = param2;
    local227 = eax;
    *(__size32*)eax = param1;
    *(__size32*)(eax + 4) = param2;
    local397 = eax;
    esp_1 = caml_raise(param1, eax, ebx, esp_44 - 4); /* Warning: also results in ebp */
    local533 = local227;
    local539 = local397;
    local540 = local425;
    local549 = local227;
    local555 = local397;
    local556 = local425;
    *(__size32*)(esp_1 - 4) = ebp;
    eax = *(esp_1 + 4);
    *(__size32*)(esp_1 - 24) = eax;
    *(__size32*)(esp_1 - 28) = 0x80739ac;
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
    *(__size32*)(esp_10 - 28) = 0x80739e8;
    esp_13 = caml_raise_with_string(*(esp_10 - 24), esp_10 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_13 - 4) = ebp;
    eax = *(esp_13 + 4);
    *(__size32*)(esp_13 - 24) = eax;
    *(__size32*)(esp_13 - 28) = 0x80739cc;
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
    *(__size32*)(esp_19 - 28) = 0x8073ac0;
    esp_22 = caml_raise_constant(*(esp_19 - 28), esp_19 - 4, *(esp_19 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_22 - 4) = ebp;
    *(__size32*)(esp_22 - 28) = 0x8073a58;
    esp_25 = caml_raise_constant(*(esp_22 - 28), esp_22 - 4, *(esp_22 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_25 - 4) = ebp;
    *(__size32*)(esp_25 - 28) = 0x8073a30;
    esp_28 = caml_raise_constant(*(esp_25 - 28), esp_25 - 4, *(esp_25 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_28 - 4) = ebp;
    *(__size32*)(esp_28 - 28) = 0x8073a10;
    cl = caml_raise_constant(*(esp_28 - 28), esp_28 - 4, *(esp_28 - 176)); /* Warning: also results in dl, ecx, edx, ebx, esp_31, ebp, esi, edi */
    *(__size32*)(esp_31 - 4) = ebp;
    ebp = esp_31 - 4;
    *(unsigned int*)(esp_31 - 8) = edi;
    *(unsigned int*)(esp_31 - 12) = esi;
    *(unsigned int*)(esp_31 - 16) = ebx;
    esp_34 = esp_31 - 60;
    eax = *(esp_31 + 8);
    al = (unsigned char) eax;
    local524 = esp_34;
    local541 = esp_34;
    if (eax != 0) {
        edx = *(esp_31 + 16);
        *(__size32*)(esp_31 - 36) = edx;
        edx = *(esp_31 + 12);
        *(__size32*)(esp_31 - 32) = eax;
        do {
bb0x8062387:
            esp_47 = local541;
            local453 = local542;
            local63 = local543;
            local91 = local544;
            local119 = local545;
            local147 = local546;
            local175 = local547;
            local203 = local548;
            local231 = local549;
            local259 = local550;
            local288 = local551;
            local317 = local552;
            local345 = local553;
            local373 = local554;
            local401 = local555;
            local429 = local556;
            local22 = local557;
            local41 = local558;
            esi = *(global_0x0807f43c + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local524 = esp_47;
            local525 = local453;
            local527 = local63;
            local528 = local91;
            local529 = local119;
            local530 = local147;
            local531 = local175;
            local532 = local203;
            local533 = local231;
            local534 = local259;
            local535 = local288;
            local536 = local317;
            local537 = local345;
            local538 = local373;
            local539 = local401;
            local540 = local429;
            local541 = esp_47;
            local542 = local453;
            local543 = local63;
            local544 = local91;
            local545 = local119;
            local546 = local147;
            local547 = local175;
            local548 = local203;
            local549 = local231;
            local550 = local259;
            local551 = local288;
            local552 = local317;
            local553 = local345;
            local554 = local373;
            local555 = local401;
            local556 = local429;
            local557 = local22;
            local558 = local41;
            local559 = eax;
            local560 = esp_47;
            local562 = local63;
            local563 = local91;
            local564 = local119;
            local565 = local147;
            local566 = local175;
            local567 = local203;
            local568 = local231;
            local569 = local259;
            local570 = local288;
            local571 = local317;
            local572 = local345;
            local573 = local373;
            local574 = local401;
            local575 = local429;
            local577 = esp_47;
            local578 = local453;
            local579 = local63;
            local580 = local91;
            local581 = local119;
            local582 = local147;
            local583 = local175;
            local584 = local203;
            local585 = local231;
            local586 = local259;
            local587 = local288;
            local588 = local317;
            local589 = local345;
            local590 = local373;
            local591 = local401;
            local592 = local429;
            local593 = local22;
            local594 = local41;
            if (*ebx != edx) {
                do {
                    eax_1 = local559;
                    eax_2 = eax_1 + 1 & esi;
                    ebx = *(caml_frame_descriptors + (eax_1 + 1 & esi) * 4);
                    local559 = eax_2;
                } while (*ebx != edx);
            }
            local491 = *(ebx + 4) + 1;
            local526 = local491;
            if (*(ebx + 4) != -1) {
                esi = *(unsigned short*)(ebx + 6);
                local561 = esi;
                if ((int)esi > 0) {
                    edi = ebx + 8;
                    *(__size32*)(ebp - 36) = ebx;
                    ebx = *(ebp + 8);
                    for(;;) {
                        esp_46 = local560;
                        esi = local561;
                        local62 = local562;
                        local90 = local563;
                        local118 = local564;
                        local146 = local565;
                        local174 = local566;
                        local202 = local567;
                        local230 = local568;
                        local258 = local569;
                        local287 = local570;
                        local316 = local571;
                        local344 = local572;
                        local372 = local573;
                        local400 = local574;
                        local428 = local575;
                        eax_4 = *(unsigned short*)edi;
                        if (((unsigned char) eax_4 & 0x1) == 0) {
                            eax_7 = eax_4 + *(ebp - 28);
                            flags = ADDFLAGS32(eax_4, *(ebp - 28), eax_7);
                            local576 = eax_7;
                        }
                        else {
                            flags = SARFLAGS((int)eax_4 >> 1, eax_4, 1);
                            edx = *(ebp - 32);
                            eax = edx + ((int)eax_4 >> 1) * 4;
                            local576 = eax;
                        }
                        eax = local576;
                        *(__size32*)(esp_46 + 4) = eax;
                        eax = *eax;
                        *(__size32*)esp_46 = eax;
                        (*ebx)((unsigned char) eax, cl, dl, eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, local62, local90, local118, local146, local174, local202, local230, local258, local287, local316, local344, local372, local400, local428, param1, param2, param1);
                        local560 = esp_37;
                        local562 = local64;
                        local563 = local92;
                        local564 = local120;
                        local565 = local148;
                        local566 = local176;
                        local567 = local204;
                        local568 = local232;
                        local569 = local260;
                        local570 = local289;
                        local571 = local318;
                        local572 = local346;
                        local573 = local374;
                        local574 = local402;
                        local575 = local430;
                        local577 = esp_37;
                        local578 = local454;
                        local579 = local64;
                        local580 = local92;
                        local581 = local120;
                        local582 = local148;
                        local583 = local176;
                        local584 = local204;
                        local585 = local232;
                        local586 = local260;
                        local587 = local289;
                        local588 = local318;
                        local589 = local346;
                        local590 = local374;
                        local591 = local402;
                        local592 = local430;
                        local593 = local19;
                        local594 = local38;
                        esi_4 = esi_1 - 1;
                        local561 = esi_4;
                        if ((int)esi_1 <= 1) {
                            break;
                        }
                        edi += 2;
                    }
                    ebx = *(ebp - 36);
                }
                esp_49 = local577;
                local457 = local578;
                local72 = local579;
                local102 = local580;
                local130 = local581;
                local158 = local582;
                local186 = local583;
                local214 = local584;
                local242 = local585;
                local269 = local586;
                local302 = local587;
                local328 = local588;
                local356 = local589;
                local384 = local590;
                local412 = local591;
                local440 = local592;
                local30 = local593;
                local51 = local594;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local541 = esp_49;
                local542 = local457;
                local543 = local72;
                local544 = local102;
                local545 = local130;
                local546 = local158;
                local547 = local186;
                local548 = local214;
                local549 = local242;
                local550 = local269;
                local551 = local302;
                local552 = local328;
                local553 = local356;
                local554 = local384;
                local555 = local412;
                local556 = local440;
                local557 = local30;
                local558 = local51;
                goto bb0x8062387;
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
    esp_51 = local524;
    local461 = local525;
    local494 = local526;
    *(__size32*)(esp_44 - 4) = local527;
    *(__size32*)(esp_44 - 28) = local528;
    *(__size32*)(esp_44 - 32) = local529;
    *(__size32*)(esp_44 - 36) = local530;
    *(__size32*)(esp_44 - 40) = local531;
    *(__size32*)(esp_44 - 44) = local532;
    *(__size32*)(esp_44 - 48) = local533;
    local268 = local534;
    *(__size32*)(esp_44 - 72) = local535;
    *(__size32*)(esp_44 - 76) = local536;
    *(__size32*)(esp_44 - 80) = local537;
    *(__size32*)(esp_44 - 104) = local538;
    *(__size32*)(esp_44 - 108) = local539;
    *(unsigned int*)(esp_44 - 112) = local540;
    local670 = esp_51;
    local671 = local461;
    local672 = local494;
    local673 = *(esp_44 - 4);
    local674 = *(esp_44 - 28);
    local675 = *(esp_44 - 32);
    local676 = *(esp_44 - 36);
    local677 = *(esp_44 - 40);
    local678 = *(esp_44 - 44);
    local679 = *(esp_44 - 48);
    local680 = local268;
    local681 = *(esp_44 - 72);
    local682 = *(esp_44 - 76);
    local683 = *(esp_44 - 80);
    local684 = *(esp_44 - 104);
    local685 = *(esp_44 - 108);
    local686 = *(esp_44 - 112);
    local687 = local27;
    local688 = local48;
    local689 = esp_51;
    if (*(ebp + 24) != 0) {
        esi = *(ebp + 24);
        *(__size32*)(ebp - 28) = 0;
        do {
            esp_50 = local670;
            local459 = local671;
            local492 = local672;
            local68 = local673;
            local96 = local674;
            local124 = local675;
            local152 = local676;
            local180 = local677;
            local208 = local678;
            local236 = local679;
            local264 = local680;
            local293 = local681;
            local322 = local682;
            local350 = local683;
            local378 = local684;
            local406 = local685;
            local434 = local686;
            local25 = local687;
            local46 = local688;
            edi = 0;
            local631 = esp_50;
            local632 = edi;
            local633 = local459;
            local634 = local492;
            local635 = local68;
            local636 = local96;
            local637 = local124;
            local638 = local152;
            local639 = local180;
            local640 = local208;
            local641 = local236;
            local642 = local264;
            local643 = local293;
            local644 = local322;
            local645 = local350;
            local646 = local378;
            local647 = local406;
            local648 = local434;
            local649 = local25;
            local650 = local46;
            local651 = esp_50;
            local652 = local459;
            local653 = local492;
            local654 = local68;
            local655 = local96;
            local656 = local124;
            local657 = local152;
            local658 = local180;
            local659 = local208;
            local660 = local236;
            local661 = local264;
            local662 = local293;
            local663 = local322;
            local664 = local350;
            local665 = local378;
            local666 = local406;
            local667 = local434;
            local668 = local25;
            local669 = local46;
            if (*(esi + 4) > 0) {
                do {
                    esp_48 = local631;
                    edi = local632;
                    local463 = local633;
                    local496 = local634;
                    local67 = local635;
                    local95 = local636;
                    local123 = local637;
                    local151 = local638;
                    local179 = local639;
                    local207 = local640;
                    local235 = local641;
                    local263 = local642;
                    local292 = local643;
                    local321 = local644;
                    local349 = local645;
                    local377 = local646;
                    local405 = local647;
                    local433 = local648;
                    local29 = local649;
                    local50 = local650;
                    ebx = *(ebp - 28);
                    local595 = ebx;
                    local596 = esp_48;
                    local597 = local67;
                    local598 = local95;
                    local599 = local123;
                    local600 = local151;
                    local601 = local179;
                    local602 = local207;
                    local603 = local235;
                    local604 = local263;
                    local605 = local292;
                    local606 = local321;
                    local607 = local349;
                    local608 = local377;
                    local609 = local405;
                    local610 = local433;
                    local611 = ebx;
                    local612 = esp_48;
                    local613 = local463;
                    local614 = local496;
                    local615 = local67;
                    local616 = local95;
                    local617 = local123;
                    local618 = local151;
                    local619 = local179;
                    local620 = local207;
                    local621 = local235;
                    local622 = local263;
                    local623 = local292;
                    local624 = local321;
                    local625 = local349;
                    local626 = local377;
                    local627 = local405;
                    local628 = local433;
                    local629 = local29;
                    local630 = local50;
                    if (*(esi + 8) > 0) {
                        do {
                            ebx = local595;
                            esp_43 = local596;
                            local66 = local597;
                            local94 = local598;
                            local122 = local599;
                            local150 = local600;
                            local178 = local601;
                            local206 = local602;
                            local234 = local603;
                            local262 = local604;
                            local291 = local605;
                            local320 = local606;
                            local348 = local607;
                            local376 = local608;
                            local404 = local609;
                            local432 = local610;
                            eax_9 = ebx * 4 + *(esi + edi * 4 + 12);
                            *(__size32*)(esp_43 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_43 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, cl, dl, eax_12, ecx, edx, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), local66, local94, local122, local150, local178, local206, local234, local262, local291, local320, local348, local376, local404, local432, param1, param2, param1);
                            local596 = esp_40;
                            local597 = local70;
                            local598 = local98;
                            local599 = local126;
                            local600 = local154;
                            local601 = local182;
                            local602 = local210;
                            local603 = local238;
                            local604 = local266;
                            local605 = local295;
                            local606 = local324;
                            local607 = local352;
                            local608 = local380;
                            local609 = local408;
                            local610 = local436;
                            local612 = esp_40;
                            local613 = local469;
                            local614 = local503;
                            local615 = local70;
                            local616 = local98;
                            local617 = local126;
                            local618 = local154;
                            local619 = local182;
                            local620 = local210;
                            local621 = local238;
                            local622 = local266;
                            local623 = local295;
                            local624 = local324;
                            local625 = local352;
                            local626 = local380;
                            local627 = local408;
                            local628 = local436;
                            local629 = local23;
                            local630 = local42;
                            ebx_4 = ebx_1 + 1;
                            local595 = ebx_4;
                            local611 = ebx_4;
                        } while (*(esi + 8) > ebx_1 + 1);
                    }
                    ebx = local611;
                    esp_53 = local612;
                    edi_1 = edi;
                    local460 = local613;
                    local493 = local614;
                    local69 = local615;
                    local97 = local616;
                    local125 = local617;
                    local153 = local618;
                    local181 = local619;
                    local209 = local620;
                    local237 = local621;
                    local265 = local622;
                    local294 = local623;
                    local323 = local624;
                    local351 = local625;
                    local379 = local626;
                    local407 = local627;
                    local435 = local628;
                    local26 = local629;
                    local47 = local630;
                    edi_2 = edi_1 + 1;
                    local631 = esp_53;
                    local632 = edi_2;
                    local633 = local460;
                    local634 = local493;
                    local635 = local69;
                    local636 = local97;
                    local637 = local125;
                    local638 = local153;
                    local639 = local181;
                    local640 = local209;
                    local641 = local237;
                    local642 = local265;
                    local643 = local294;
                    local644 = local323;
                    local645 = local351;
                    local646 = local379;
                    local647 = local407;
                    local648 = local435;
                    local649 = local26;
                    local650 = local47;
                    local651 = esp_53;
                    local652 = local460;
                    local653 = local493;
                    local654 = local69;
                    local655 = local97;
                    local656 = local125;
                    local657 = local153;
                    local658 = local181;
                    local659 = local209;
                    local660 = local237;
                    local661 = local265;
                    local662 = local294;
                    local663 = local323;
                    local664 = local351;
                    local665 = local379;
                    local666 = local407;
                    local667 = local435;
                    local668 = local26;
                    local669 = local47;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_52 = local651;
            local462 = local652;
            local495 = local653;
            local78 = local654;
            local106 = local655;
            local134 = local656;
            local162 = local657;
            local190 = local658;
            local218 = local659;
            local246 = local660;
            *(__size32*)(esp_44 - 68) = local661;
            local301 = local662;
            local332 = local663;
            local360 = local664;
            local388 = local665;
            local416 = local666;
            local444 = local667;
            local28 = local668;
            local49 = local669;
            esi = *esi;
            local670 = esp_52;
            local671 = local462;
            local672 = local495;
            local673 = local78;
            local674 = local106;
            local675 = local134;
            local676 = local162;
            local677 = local190;
            local678 = local218;
            local679 = local246;
            local680 = *(esp_44 - 68);
            local681 = local301;
            local682 = local332;
            local683 = local360;
            local684 = local388;
            local685 = local416;
            local686 = local444;
            local687 = local28;
            local688 = local49;
            local689 = esp_52;
        } while (esi == 0);
    }
    esp = local689;
    ebp = *(esp + 56);
    return ebp;
}

/** address: 0x080659a4 */
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

/** address: 0x08062241 */
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
    union { __size32; __size32 *; } esp_41; 		// r28{129}
    __size32 esp_42; 		// r28{99}
    __size32 esp_43; 		// r28{229}
    __size32 esp_44; 		// r28{267}
    __size32 esp_45; 		// r28{211}
    __size32 esp_46; 		// r28{84}
    __size32 esp_47; 		// r28{249}
    __size32 esp_48; 		// r28{162}
    __size32 esp_49; 		// r28{162}
    __size32 esp_5; 		// r28{14}
    union { __size32; __size32 *; } esp_50; 		// r28{189}
    union { __size32; __size32 *; } esp_51; 		// r28{189}
    __size32 esp_52; 		// r28{211}
    __size32 esp_53; 		// r28{211}
    __size32 esp_54; 		// r28{229}
    __size32 esp_55; 		// r28{229}
    __size32 esp_56; 		// r28{267}
    __size32 esp_57; 		// r28{267}
    __size32 esp_58; 		// r28{99}
    __size32 esp_59; 		// r28{99}
    __size32 esp_6; 		// r28{14}
    __size32 esp_60; 		// r28{84}
    __size32 esp_61; 		// r28{84}
    __size32 esp_7; 		// r28{20}
    __size32 esp_8; 		// r28{20}
    __size32 esp_9; 		// r28{20}
    int local0; 		// m[esp - 4]
    int local1; 		// m[esp - 28]
    __size32 local10; 		// m[esp_38 + 8]{108}
    unsigned int local100; 		// m[esp_38 - 32]{237}
    unsigned int local101; 		// m[esp_38 - 32]{237}
    unsigned int local102; 		// m[esp_38 - 32]{105}
    unsigned int local103; 		// m[esp_38 - 32]{105}
    unsigned int local104; 		// m[esp_38 - 32]{256}
    unsigned int local105; 		// m[esp_38 - 32]{168}
    unsigned int local106; 		// m[esp_38 - 32]{195}
    unsigned int local107; 		// m[esp_38 - 32]{195}
    unsigned int local108; 		// m[esp_38 - 32]{168}
    unsigned int local109; 		// m[esp_38 - 32]{168}
    __size32 local11; 		// m[esp_38 + 8]{108}
    unsigned int local110; 		// m[esp_38 - 32]{274}
    unsigned int local111; 		// m[esp_38 - 32]{274}
    int local112; 		// tmpb{102}
    int local113; 		// tmpb{155}
    int local114; 		// tmpb{155}
    int local115; 		// tmpb{155}
    int local116; 		// tmpb{165}
    int local117; 		// tmpb{155}
    int local118; 		// tmpb{270}
    int local119; 		// tmpb{215}
    __size32 local12; 		// m[esp_38 + 8]{277}
    int local120; 		// tmpb{86}
    int local121; 		// tmpb{252}
    int local122; 		// tmpb{233}
    int local123; 		// tmpb{270}
    int local124; 		// tmpb{215}
    int local125; 		// tmpb{86}
    int local126; 		// tmpb{252}
    int local127; 		// tmpb{233}
    int local128; 		// tmpb{203}
    int local129; 		// tmpb{203}
    __size32 local13; 		// m[esp_38 + 8]{222}
    int local130; 		// tmpb{203}
    int local131; 		// tmpb{155}
    int local132; 		// tmpb{102}
    int local133; 		// tmpb{4}
    int local134; 		// tmpb{4}
    int local135; 		// tmpb{165}
    int local136; 		// tmpb{165}
    int local137; 		// tmpb{102}
    int local138; 		// tmpb{102}
    int local139; 		// tmpb{215}
    __size32 local14; 		// m[esp_38 + 8]{93}
    int local140; 		// tmpb{215}
    int local141; 		// tmpb{270}
    int local142; 		// tmpb{270}
    __size16 local143; 		// tmph{119}
    __size16 local144; 		// tmph{271}
    __size16 local145; 		// tmph{216}
    __size16 local146; 		// tmph{87}
    __size16 local147; 		// tmph{253}
    __size16 local148; 		// tmph{234}
    __size16 local149; 		// tmph{119}
    __size32 local15; 		// m[esp_38 + 8]{259}
    __size16 local150; 		// tmph{271}
    __size16 local151; 		// tmph{216}
    __size16 local152; 		// tmph{87}
    __size16 local153; 		// tmph{253}
    __size16 local154; 		// tmph{234}
    int local155; 		// tmph{203}
    int local156; 		// tmph{203}
    int local157; 		// tmph{203}
    int local158; 		// tmph{203}
    __size16 local159; 		// tmph{271}
    __size32 local16; 		// m[esp_38 + 8]{240}
    __size16 local160; 		// tmph{216}
    __size16 local161; 		// tmph{87}
    __size16 local162; 		// tmph{253}
    __size16 local163; 		// tmph{234}
    __size16 local164; 		// tmph{119}
    __size16 local165; 		// tmph{5}
    __size16 local166; 		// tmph{5}
    __size16 local167; 		// tmph{216}
    __size16 local168; 		// tmph{216}
    __size16 local169; 		// tmph{271}
    __size32 local17; 		// m[esp_38 + 8]{171}
    __size16 local170; 		// tmph{271}
    __size32 local171; 		// esp_46{84}
    int local172; 		// local120{86}
    __size16 local173; 		// local146{87}
    __size32 local174; 		// m[esp_38 - 4]{88}
    __size32 local175; 		// local67{89}
    unsigned int local176; 		// m[esp_38 - 32]{90}
    __size32 local177; 		// esp_42{99}
    int local178; 		// local112{102}
    __size32 local179; 		// local29{103}
    __size32 local18; 		// m[esp_38 + 8]{171}
    __size32 local180; 		// local58{104}
    unsigned int local181; 		// local87{105}
    __size32 local182; 		// local7{108}
    int local183; 		// eax_1{114}
    union { __size32 *; __size32; } local184; 		// esp_40{129}
    unsigned int local185; 		// esi{131}
    __size32 local186; 		// local28{133}
    __size32 local187; 		// local57{134}
    unsigned int local188; 		// local86{135}
    union { __size32 *; unsigned int; } local189; 		// eax{146}
    __size32 local19; 		// m[esp_38 + 8]{3}
    __size32 local190; 		// esp_48{162}
    int local191; 		// local116{165}
    __size32 local192; 		// local39{166}
    __size32 local193; 		// local68{167}
    unsigned int local194; 		// local105{168}
    __size32 local195; 		// local17{171}
    unsigned int local196; 		// ebx{188}
    union { __size32 *; __size32; } local197; 		// esp_37{189}
    __size32 local198; 		// local32{193}
    __size32 local199; 		// local61{194}
    int local2; 		// m[esp - 32]
    __size32 local20; 		// m[esp_38 + 8]{3}
    unsigned int local200; 		// local90{195}
    unsigned int local201; 		// ebx{210}
    __size32 local202; 		// esp_45{211}
    int local203; 		// local119{215}
    __size16 local204; 		// local145{216}
    __size32 local205; 		// local35{217}
    __size32 local206; 		// local64{218}
    unsigned int local207; 		// local93{219}
    __size32 local208; 		// local13{222}
    __size32 local209; 		// esp_43{229}
    __size32 local21; 		// m[esp_38 + 8]{277}
    unsigned int local210; 		// edi{232}
    int local211; 		// local122{233}
    __size16 local212; 		// local148{234}
    __size32 local213; 		// local33{235}
    __size32 local214; 		// local62{236}
    unsigned int local215; 		// local91{237}
    __size32 local216; 		// local16{240}
    __size32 local217; 		// esp_47{249}
    int local218; 		// local121{252}
    __size16 local219; 		// local147{253}
    __size32 local22; 		// m[esp_38 + 8]{277}
    __size32 local220; 		// local38{254}
    __size32 local221; 		// m[esp_38 - 28]{255}
    unsigned int local222; 		// local104{256}
    __size32 local223; 		// local15{259}
    __size32 local224; 		// esp_44{267}
    int local225; 		// local118{270}
    __size16 local226; 		// local144{271}
    __size32 local227; 		// local34{272}
    __size32 local228; 		// local63{273}
    unsigned int local229; 		// local92{274}
    __size32 local23; 		// m[esp_38 + 8]{222}
    __size32 local230; 		// local12{277}
    __size32 local231; 		// esp{281}
    __size32 local24; 		// m[esp_38 + 8]{222}
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
    __size32 local38; 		// m[esp_38 - 4]{254}
    __size32 local39; 		// m[esp_38 - 4]{166}
    int local4; 		// m[esp_38 + 8]{155}
    __size32 local40; 		// m[esp_38 - 4]{272}
    __size32 local41; 		// m[esp_38 - 4]{272}
    __size32 local42; 		// m[esp_38 - 4]{193}
    __size32 local43; 		// m[esp_38 - 4]{193}
    __size32 local44; 		// m[esp_38 - 4]{235}
    __size32 local45; 		// m[esp_38 - 4]{235}
    __size32 local46; 		// m[esp_38 - 4]{166}
    __size32 local47; 		// m[esp_38 - 4]{166}
    __size32 local48; 		// m[esp_38 - 4]{103}
    __size32 local49; 		// m[esp_38 - 4]{103}
    int local5; 		// m[esp_38 + 8]{155}
    __size32 local50; 		// m[esp_38 - 4]{133}
    __size32 local51; 		// m[esp_38 - 4]{133}
    __size32 local52; 		// m[esp_38 - 4]{217}
    __size32 local53; 		// m[esp_38 - 4]{217}
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
    __size32 local67; 		// m[esp_38 - 28]{89}
    __size32 local68; 		// m[esp_38 - 28]{167}
    __size32 local69; 		// m[esp_38 - 28]{218}
    __size32 local7; 		// m[esp_38 + 8]{108}
    __size32 local70; 		// m[esp_38 - 28]{218}
    __size32 local71; 		// m[esp_38 - 28]{236}
    __size32 local72; 		// m[esp_38 - 28]{236}
    __size32 local73; 		// m[esp_38 - 28]{167}
    __size32 local74; 		// m[esp_38 - 28]{167}
    __size32 local75; 		// m[esp_38 - 28]{194}
    __size32 local76; 		// m[esp_38 - 28]{194}
    __size32 local77; 		// m[esp_38 - 28]{273}
    __size32 local78; 		// m[esp_38 - 28]{273}
    __size32 local79; 		// m[esp_38 - 28]{104}
    int local8; 		// m[esp_38 + 8]{203}
    __size32 local80; 		// m[esp_38 - 28]{104}
    __size32 local81; 		// m[esp_38 - 28]{134}
    __size32 local82; 		// m[esp_38 - 28]{134}
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
    unsigned int local98; 		// m[esp_38 - 32]{219}
    unsigned int local99; 		// m[esp_38 - 32]{219}

    local25 = param2;
    local54 = param1;
    eax = caml_copy_string(param1); /* Warning: also results in esp_1, ebp */
    local172 = local133;
    local173 = local165;
    local174 = local25;
    local175 = local54;
    local176 = local83;
    local178 = local133;
    local179 = local25;
    local180 = local54;
    local181 = local83;
    local182 = param1;
    *(__size32*)(esp_1 + 4) = eax;
    eax = *(ebp + 8);
    *(__size32*)esp_1 = eax;
    esp_4 = caml_raise_with_arg(*esp_1, *(esp_1 + 4), ebp, *(esp_1 - 148)); /* Warning: also results in ebp */
    *(__size32*)(esp_4 - 4) = ebp;
    eax = *(esp_4 + 4);
    *(__size32*)(esp_4 - 24) = eax;
    *(__size32*)(esp_4 - 28) = 0x80739e8;
    esp_7 = caml_raise_with_string(*(esp_4 - 24), esp_4 - 4); /* Warning: also results in ebp */
    *(__size32*)(esp_7 - 4) = ebp;
    eax = *(esp_7 + 4);
    *(__size32*)(esp_7 - 24) = eax;
    *(__size32*)(esp_7 - 28) = 0x80739cc;
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
    *(__size32*)(esp_13 - 28) = 0x8073ac0;
    esp_16 = caml_raise_constant(*(esp_13 - 28), esp_13 - 4, *(esp_13 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_16 - 4) = ebp;
    *(__size32*)(esp_16 - 28) = 0x8073a58;
    esp_19 = caml_raise_constant(*(esp_16 - 28), esp_16 - 4, *(esp_16 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_19 - 4) = ebp;
    *(__size32*)(esp_19 - 28) = 0x8073a30;
    esp_22 = caml_raise_constant(*(esp_19 - 28), esp_19 - 4, *(esp_19 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_22 - 4) = ebp;
    *(__size32*)(esp_22 - 28) = 0x8073a10;
    cl = caml_raise_constant(*(esp_22 - 28), esp_22 - 4, *(esp_22 - 176)); /* Warning: also results in dl, ecx, edx, ebx, esp_25, ebp, esi, edi */
    *(__size32*)(esp_25 - 4) = ebp;
    ebp = esp_25 - 4;
    *(unsigned int*)(esp_25 - 8) = edi;
    *(unsigned int*)(esp_25 - 12) = esi;
    *(unsigned int*)(esp_25 - 16) = ebx;
    esp_28 = esp_25 - 60;
    eax = *(esp_25 + 8);
    al = (unsigned char) eax;
    local171 = esp_28;
    local177 = esp_28;
    if (eax != 0) {
        edx = *(esp_25 + 16);
        *(__size32*)(esp_25 - 36) = edx;
        edx = *(esp_25 + 12);
        *(__size32*)(esp_25 - 32) = eax;
        do {
bb0x8062387:
            esp_42 = local177;
            local112 = local178;
            local29 = local179;
            local58 = local180;
            local87 = local181;
            local7 = local182;
            esi = *(global_0x0807f43c + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local171 = esp_42;
            local172 = local112;
            local174 = local29;
            local175 = local58;
            local176 = local87;
            local177 = esp_42;
            local178 = local112;
            local179 = local29;
            local180 = local58;
            local181 = local87;
            local182 = local7;
            local183 = eax;
            local184 = esp_42;
            local186 = local29;
            local187 = local58;
            local188 = local87;
            local190 = esp_42;
            local191 = local112;
            local192 = local29;
            local193 = local58;
            local194 = local87;
            local195 = local7;
            if (*ebx != edx) {
                do {
                    eax_1 = local183;
                    eax_2 = eax_1 + 1 & esi;
                    ebx = *(caml_frame_descriptors + (eax_1 + 1 & esi) * 4);
                    local183 = eax_2;
                } while (*ebx != edx);
            }
            local143 = *(ebx + 4) + 1;
            local173 = local143;
            if (*(ebx + 4) != -1) {
                esi = *(unsigned short*)(ebx + 6);
                local185 = esi;
                if ((int)esi > 0) {
                    edi = ebx + 8;
                    *(__size32*)(ebp - 36) = ebx;
                    ebx = *(ebp + 8);
                    for(;;) {
                        esp_40 = local184;
                        esi = local185;
                        local28 = local186;
                        local57 = local187;
                        local86 = local188;
                        eax_4 = *(unsigned short*)edi;
                        if (((unsigned char) eax_4 & 0x1) == 0) {
                            eax_7 = eax_4 + *(ebp - 28);
                            flags = ADDFLAGS32(eax_4, *(ebp - 28), eax_7);
                            local189 = eax_7;
                        }
                        else {
                            flags = SARFLAGS((int)eax_4 >> 1, eax_4, 1);
                            edx = *(ebp - 32);
                            eax = edx + ((int)eax_4 >> 1) * 4;
                            local189 = eax;
                        }
                        eax = local189;
                        *(__size32*)(esp_40 + 4) = eax;
                        eax = *eax;
                        *(__size32*)esp_40 = eax;
                        (*ebx)((unsigned char) eax, eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, local28, local57, local86, cl, dl, param1);
                        local184 = esp_31;
                        local186 = local30;
                        local187 = local59;
                        local188 = local88;
                        local190 = esp_31;
                        local191 = local113;
                        local192 = local30;
                        local193 = local59;
                        local194 = local88;
                        local195 = local4;
                        esi_4 = esi_1 - 1;
                        local185 = esi_4;
                        if ((int)esi_1 <= 1) {
                            break;
                        }
                        edi += 2;
                    }
                    ebx = *(ebp - 36);
                }
                esp_48 = local190;
                local116 = local191;
                local39 = local192;
                local68 = local193;
                local105 = local194;
                local17 = local195;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local177 = esp_48;
                local178 = local116;
                local179 = local39;
                local180 = local68;
                local181 = local105;
                local182 = local17;
                goto bb0x8062387;
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
    esp_46 = local171;
    local120 = local172;
    local146 = local173;
    *(__size32*)(esp_38 - 4) = local174;
    local67 = local175;
    *(unsigned int*)(esp_38 - 32) = local176;
    local224 = esp_46;
    local225 = local120;
    local226 = local146;
    local227 = *(esp_38 - 4);
    local228 = local67;
    local229 = *(esp_38 - 32);
    local230 = local14;
    local231 = esp_46;
    if (*(ebp + 24) != 0) {
        esi = *(ebp + 24);
        *(__size32*)(ebp - 28) = 0;
        do {
            esp_44 = local224;
            local118 = local225;
            local144 = local226;
            local34 = local227;
            local63 = local228;
            local92 = local229;
            local12 = local230;
            edi = 0;
            local209 = esp_44;
            local210 = edi;
            local211 = local118;
            local212 = local144;
            local213 = local34;
            local214 = local63;
            local215 = local92;
            local216 = local12;
            local217 = esp_44;
            local218 = local118;
            local219 = local144;
            local220 = local34;
            local221 = local63;
            local222 = local92;
            local223 = local12;
            if (*(esi + 4) > 0) {
                do {
                    esp_43 = local209;
                    edi = local210;
                    local122 = local211;
                    local148 = local212;
                    local33 = local213;
                    local62 = local214;
                    local91 = local215;
                    local16 = local216;
                    ebx = *(ebp - 28);
                    local196 = ebx;
                    local197 = esp_43;
                    local198 = local33;
                    local199 = local62;
                    local200 = local91;
                    local201 = ebx;
                    local202 = esp_43;
                    local203 = local122;
                    local204 = local148;
                    local205 = local33;
                    local206 = local62;
                    local207 = local91;
                    local208 = local16;
                    if (*(esi + 8) > 0) {
                        do {
                            ebx = local196;
                            esp_37 = local197;
                            local32 = local198;
                            local61 = local199;
                            local90 = local200;
                            eax_9 = ebx * 4 + *(esi + edi * 4 + 12);
                            *(__size32*)(esp_37 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_37 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, eax_12, ecx, edx, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), local32, local61, local90, cl, dl, param1);
                            local197 = esp_34;
                            local198 = local36;
                            local199 = local65;
                            local200 = local94;
                            local202 = esp_34;
                            local203 = local128;
                            local204 = local155;
                            local205 = local36;
                            local206 = local65;
                            local207 = local94;
                            local208 = local8;
                            ebx_4 = ebx_1 + 1;
                            local196 = ebx_4;
                            local201 = ebx_4;
                        } while (*(esi + 8) > ebx_1 + 1);
                    }
                    ebx = local201;
                    esp_45 = local202;
                    edi_1 = edi;
                    local119 = local203;
                    local145 = local204;
                    local35 = local205;
                    local64 = local206;
                    local93 = local207;
                    local13 = local208;
                    edi_2 = edi_1 + 1;
                    local209 = esp_45;
                    local210 = edi_2;
                    local211 = local119;
                    local212 = local145;
                    local213 = local35;
                    local214 = local64;
                    local215 = local93;
                    local216 = local13;
                    local217 = esp_45;
                    local218 = local119;
                    local219 = local145;
                    local220 = local35;
                    local221 = local64;
                    local222 = local93;
                    local223 = local13;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_47 = local217;
            local121 = local218;
            local147 = local219;
            local38 = local220;
            *(__size32*)(esp_38 - 28) = local221;
            local104 = local222;
            local15 = local223;
            esi = *esi;
            local224 = esp_47;
            local225 = local121;
            local226 = local147;
            local227 = local38;
            local228 = *(esp_38 - 28);
            local229 = local104;
            local230 = local15;
            local231 = esp_47;
        } while (esi == 0);
    }
    esp = local231;
    ebp = *(esp + 56);
    return ebp;
}

/** address: 0x08062293 */
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
    int local100; 		// m[esp_50 - 36]{160}
    __size32 local101; 		// m[esp_50 - 36]{210}
    __size32 local102; 		// m[esp_50 - 36]{272}
    __size32 local103; 		// m[esp_50 - 36]{329}
    __size32 local104; 		// m[esp_50 - 36]{244}
    int local105; 		// m[esp_50 - 36]{228}
    int local106; 		// m[esp_50 - 36]{228}
    __size32 local107; 		// m[esp_50 - 36]{210}
    __size32 local108; 		// m[esp_50 - 36]{210}
    __size32 local109; 		// m[esp_50 - 36]{244}
    int local11; 		// m[esp - 104]
    __size32 local110; 		// m[esp_50 - 36]{244}
    __size32 local111; 		// m[esp_50 - 36]{272}
    __size32 local112; 		// m[esp_50 - 36]{272}
    __size32 local113; 		// m[esp_50 - 36]{65}
    __size32 local114; 		// m[esp_50 - 36]{173}
    __size32 local115; 		// m[esp_50 - 36]{329}
    __size32 local116; 		// m[esp_50 - 36]{329}
    __size32 local117; 		// m[esp_50 - 36]{173}
    __size32 local118; 		// m[esp_50 - 36]{173}
    __size32 local119; 		// m[esp_50 - 36]{90}
    int local12; 		// m[esp - 112]
    __size32 local120; 		// m[esp_50 - 36]{90}
    __size32 local121; 		// m[esp_50 - 36]{130}
    __size32 local122; 		// m[esp_50 - 36]{130}
    __size32 local123; 		// m[esp_50 - 40]{10}
    __size32 local124; 		// m[esp_50 - 40]{10}
    __size32 local125; 		// m[esp_50 - 40]{10}
    __size32 local126; 		// m[esp_50 - 40]{131}
    __size32 local127; 		// m[esp_50 - 40]{91}
    int local128; 		// m[esp_50 - 40]{160}
    int local129; 		// m[esp_50 - 40]{160}
    int local13; 		// m[esp - 144]
    __size32 local130; 		// m[esp_50 - 40]{211}
    __size32 local131; 		// m[esp_50 - 40]{273}
    __size32 local132; 		// m[esp_50 - 40]{330}
    __size32 local133; 		// m[esp_50 - 40]{245}
    int local134; 		// m[esp_50 - 40]{228}
    int local135; 		// m[esp_50 - 40]{228}
    __size32 local136; 		// m[esp_50 - 40]{131}
    __size32 local137; 		// m[esp_50 - 40]{131}
    __size32 local138; 		// m[esp_50 - 40]{245}
    __size32 local139; 		// m[esp_50 - 40]{245}
    __size32 local14; 		// m[esp + 4]
    __size32 local140; 		// m[esp_50 - 40]{273}
    __size32 local141; 		// m[esp_50 - 40]{273}
    __size32 local142; 		// m[esp_50 - 40]{66}
    __size32 local143; 		// m[esp_50 - 40]{174}
    __size32 local144; 		// m[esp_50 - 40]{330}
    __size32 local145; 		// m[esp_50 - 40]{330}
    __size32 local146; 		// m[esp_50 - 40]{174}
    __size32 local147; 		// m[esp_50 - 40]{174}
    __size32 local148; 		// m[esp_50 - 40]{91}
    __size32 local149; 		// m[esp_50 - 40]{91}
    int local15; 		// m[esp_50 + 4]{160}
    __size32 local150; 		// m[esp_50 - 40]{211}
    __size32 local151; 		// m[esp_50 - 40]{211}
    __size32 local152; 		// m[esp_50 - 44]{8}
    __size32 local153; 		// m[esp_50 - 44]{8}
    __size32 local154; 		// m[esp_50 - 44]{8}
    __size32 local155; 		// m[esp_50 - 44]{132}
    __size32 local156; 		// m[esp_50 - 44]{92}
    int local157; 		// m[esp_50 - 44]{160}
    int local158; 		// m[esp_50 - 44]{160}
    __size32 local159; 		// m[esp_50 - 44]{212}
    int local16; 		// m[esp_50 + 4]{160}
    __size32 local160; 		// m[esp_50 - 44]{274}
    __size32 local161; 		// m[esp_50 - 44]{331}
    __size32 local162; 		// m[esp_50 - 44]{246}
    int local163; 		// m[esp_50 - 44]{228}
    int local164; 		// m[esp_50 - 44]{228}
    __size32 local165; 		// m[esp_50 - 44]{132}
    __size32 local166; 		// m[esp_50 - 44]{132}
    __size32 local167; 		// m[esp_50 - 44]{175}
    __size32 local168; 		// m[esp_50 - 44]{175}
    __size32 local169; 		// m[esp_50 - 44]{92}
    int local17; 		// m[esp_50 + 4]{160}
    __size32 local170; 		// m[esp_50 - 44]{92}
    __size32 local171; 		// m[esp_50 - 44]{303}
    __size32 local172; 		// m[esp_50 - 44]{212}
    __size32 local173; 		// m[esp_50 - 44]{212}
    __size32 local174; 		// m[esp_50 - 44]{246}
    __size32 local175; 		// m[esp_50 - 44]{246}
    __size32 local176; 		// m[esp_50 - 44]{274}
    __size32 local177; 		// m[esp_50 - 44]{274}
    __size32 local178; 		// m[esp_50 - 44]{331}
    __size32 local179; 		// m[esp_50 - 44]{331}
    __size32 local18; 		// m[esp_50 + 4]{103}
    __size32 local180; 		// m[esp_50 - 48]{19}
    __size32 local181; 		// m[esp_50 - 48]{19}
    __size32 local182; 		// m[esp_50 - 48]{19}
    __size32 local183; 		// m[esp_50 - 48]{133}
    __size32 local184; 		// m[esp_50 - 48]{93}
    int local185; 		// m[esp_50 - 48]{160}
    int local186; 		// m[esp_50 - 48]{160}
    __size32 local187; 		// m[esp_50 - 48]{213}
    __size32 local188; 		// m[esp_50 - 48]{275}
    __size32 local189; 		// m[esp_50 - 48]{332}
    int local19; 		// m[esp_50 + 4]{228}
    __size32 local190; 		// m[esp_50 - 48]{247}
    int local191; 		// m[esp_50 - 48]{228}
    int local192; 		// m[esp_50 - 48]{228}
    __size32 local193; 		// m[esp_50 - 48]{133}
    __size32 local194; 		// m[esp_50 - 48]{133}
    __size32 local195; 		// m[esp_50 - 48]{176}
    __size32 local196; 		// m[esp_50 - 48]{176}
    __size32 local197; 		// m[esp_50 - 48]{93}
    __size32 local198; 		// m[esp_50 - 48]{93}
    __size32 local199; 		// m[esp_50 - 48]{304}
    int local2; 		// m[esp - 44]
    int local20; 		// m[esp_50 + 4]{228}
    __size32 local200; 		// m[esp_50 - 48]{213}
    __size32 local201; 		// m[esp_50 - 48]{213}
    __size32 local202; 		// m[esp_50 - 48]{247}
    __size32 local203; 		// m[esp_50 - 48]{247}
    __size32 local204; 		// m[esp_50 - 48]{275}
    __size32 local205; 		// m[esp_50 - 48]{275}
    __size32 local206; 		// m[esp_50 - 48]{332}
    __size32 local207; 		// m[esp_50 - 48]{332}
    __size32 local208; 		// m[esp_50 - 68]{16}
    __size32 local209; 		// m[esp_50 - 68]{16}
    __size32 local21; 		// m[esp_50 + 4]{3}
    __size32 local210; 		// m[esp_50 - 68]{16}
    __size32 local211; 		// m[esp_50 - 68]{134}
    __size32 local212; 		// m[esp_50 - 68]{94}
    int local213; 		// m[esp_50 - 68]{160}
    int local214; 		// m[esp_50 - 68]{160}
    __size32 local215; 		// m[esp_50 - 68]{214}
    __size32 local216; 		// m[esp_50 - 68]{276}
    __size32 local217; 		// m[esp_50 - 68]{333}
    __size32 local218; 		// m[esp_50 - 68]{248}
    int local219; 		// m[esp_50 - 68]{228}
    __size32 local22; 		// m[esp_50 + 4]{3}
    int local220; 		// m[esp_50 - 68]{228}
    __size32 local221; 		// m[esp_50 - 68]{134}
    __size32 local222; 		// m[esp_50 - 68]{134}
    __size32 local223; 		// m[esp_50 - 68]{177}
    __size32 local224; 		// m[esp_50 - 68]{177}
    __size32 local225; 		// m[esp_50 - 68]{94}
    __size32 local226; 		// m[esp_50 - 68]{94}
    __size32 local227; 		// m[esp_50 - 68]{305}
    __size32 local228; 		// m[esp_50 - 68]{214}
    __size32 local229; 		// m[esp_50 - 68]{214}
    __size32 local23; 		// m[esp_50 + 4]{342}
    __size32 local230; 		// m[esp_50 - 68]{248}
    __size32 local231; 		// m[esp_50 - 68]{248}
    __size32 local232; 		// m[esp_50 - 68]{276}
    __size32 local233; 		// m[esp_50 - 68]{276}
    __size32 local234; 		// m[esp_50 - 68]{333}
    __size32 local235; 		// m[esp_50 - 68]{333}
    __size32 local236; 		// m[esp_50 - 72]{14}
    __size32 local237; 		// m[esp_50 - 72]{14}
    __size32 local238; 		// m[esp_50 - 72]{14}
    __size32 local239; 		// m[esp_50 - 72]{135}
    __size32 local24; 		// m[esp_50 + 4]{257}
    __size32 local240; 		// m[esp_50 - 72]{95}
    int local241; 		// m[esp_50 - 72]{160}
    int local242; 		// m[esp_50 - 72]{160}
    __size32 local243; 		// m[esp_50 - 72]{215}
    __size32 local244; 		// m[esp_50 - 72]{277}
    __size32 local245; 		// m[esp_50 - 72]{334}
    __size32 local246; 		// m[esp_50 - 72]{249}
    int local247; 		// m[esp_50 - 72]{228}
    int local248; 		// m[esp_50 - 72]{228}
    __size32 local249; 		// m[esp_50 - 72]{135}
    __size32 local25; 		// m[esp_50 + 4]{78}
    __size32 local250; 		// m[esp_50 - 72]{135}
    __size32 local251; 		// m[esp_50 - 72]{178}
    __size32 local252; 		// m[esp_50 - 72]{178}
    __size32 local253; 		// m[esp_50 - 72]{95}
    __size32 local254; 		// m[esp_50 - 72]{95}
    __size32 local255; 		// m[esp_50 - 72]{306}
    __size32 local256; 		// m[esp_50 - 72]{215}
    __size32 local257; 		// m[esp_50 - 72]{215}
    __size32 local258; 		// m[esp_50 - 72]{249}
    __size32 local259; 		// m[esp_50 - 72]{249}
    __size32 local26; 		// m[esp_50 + 4]{314}
    __size32 local260; 		// m[esp_50 - 72]{277}
    __size32 local261; 		// m[esp_50 - 72]{277}
    __size32 local262; 		// m[esp_50 - 72]{334}
    __size32 local263; 		// m[esp_50 - 72]{334}
    __size32 local264; 		// m[esp_50 - 76]{15}
    __size32 local265; 		// m[esp_50 - 76]{15}
    __size32 local266; 		// m[esp_50 - 76]{15}
    __size32 local267; 		// m[esp_50 - 76]{136}
    __size32 local268; 		// m[esp_50 - 76]{96}
    int local269; 		// m[esp_50 - 76]{160}
    __size32 local27; 		// m[esp_50 + 4]{285}
    int local270; 		// m[esp_50 - 76]{160}
    __size32 local271; 		// m[esp_50 - 76]{216}
    __size32 local272; 		// m[esp_50 - 76]{278}
    __size32 local273; 		// m[esp_50 - 76]{335}
    __size32 local274; 		// m[esp_50 - 76]{250}
    int local275; 		// m[esp_50 - 76]{228}
    int local276; 		// m[esp_50 - 76]{228}
    __size32 local277; 		// m[esp_50 - 76]{136}
    __size32 local278; 		// m[esp_50 - 76]{136}
    __size32 local279; 		// m[esp_50 - 76]{179}
    __size32 local28; 		// m[esp_50 + 4]{186}
    __size32 local280; 		// m[esp_50 - 76]{179}
    __size32 local281; 		// m[esp_50 - 76]{96}
    __size32 local282; 		// m[esp_50 - 76]{96}
    __size32 local283; 		// m[esp_50 - 76]{307}
    __size32 local284; 		// m[esp_50 - 76]{216}
    __size32 local285; 		// m[esp_50 - 76]{216}
    __size32 local286; 		// m[esp_50 - 76]{250}
    __size32 local287; 		// m[esp_50 - 76]{250}
    __size32 local288; 		// m[esp_50 - 76]{278}
    __size32 local289; 		// m[esp_50 - 76]{278}
    __size32 local29; 		// m[esp_50 + 4]{186}
    __size32 local290; 		// m[esp_50 - 76]{335}
    __size32 local291; 		// m[esp_50 - 76]{335}
    __size32 local292; 		// m[esp_50 - 80]{12}
    __size32 local293; 		// m[esp_50 - 80]{12}
    __size32 local294; 		// m[esp_50 - 80]{12}
    __size32 local295; 		// m[esp_50 - 80]{137}
    __size32 local296; 		// m[esp_50 - 80]{97}
    int local297; 		// m[esp_50 - 80]{160}
    int local298; 		// m[esp_50 - 80]{160}
    __size32 local299; 		// m[esp_50 - 80]{217}
    int local3; 		// m[esp - 36]
    __size32 local30; 		// m[esp_50 + 4]{103}
    __size32 local300; 		// m[esp_50 - 80]{279}
    __size32 local301; 		// m[esp_50 - 80]{336}
    __size32 local302; 		// m[esp_50 - 80]{251}
    int local303; 		// m[esp_50 - 80]{228}
    int local304; 		// m[esp_50 - 80]{228}
    __size32 local305; 		// m[esp_50 - 80]{137}
    __size32 local306; 		// m[esp_50 - 80]{137}
    __size32 local307; 		// m[esp_50 - 80]{180}
    __size32 local308; 		// m[esp_50 - 80]{180}
    __size32 local309; 		// m[esp_50 - 80]{97}
    __size32 local31; 		// m[esp_50 + 4]{103}
    __size32 local310; 		// m[esp_50 - 80]{97}
    __size32 local311; 		// m[esp_50 - 80]{308}
    __size32 local312; 		// m[esp_50 - 80]{217}
    __size32 local313; 		// m[esp_50 - 80]{217}
    __size32 local314; 		// m[esp_50 - 80]{251}
    __size32 local315; 		// m[esp_50 - 80]{251}
    __size32 local316; 		// m[esp_50 - 80]{279}
    __size32 local317; 		// m[esp_50 - 80]{279}
    __size32 local318; 		// m[esp_50 - 80]{336}
    __size32 local319; 		// m[esp_50 - 80]{336}
    __size32 local32; 		// m[esp_50 + 4]{257}
    __size32 local320; 		// m[esp_50 - 104]{17}
    __size32 local321; 		// m[esp_50 - 104]{17}
    __size32 local322; 		// m[esp_50 - 104]{17}
    __size32 local323; 		// m[esp_50 - 104]{138}
    __size32 local324; 		// m[esp_50 - 104]{98}
    int local325; 		// m[esp_50 - 104]{160}
    int local326; 		// m[esp_50 - 104]{160}
    __size32 local327; 		// m[esp_50 - 104]{218}
    __size32 local328; 		// m[esp_50 - 104]{280}
    __size32 local329; 		// m[esp_50 - 104]{337}
    __size32 local33; 		// m[esp_50 + 4]{257}
    __size32 local330; 		// m[esp_50 - 104]{252}
    int local331; 		// m[esp_50 - 104]{228}
    int local332; 		// m[esp_50 - 104]{228}
    __size32 local333; 		// m[esp_50 - 104]{138}
    __size32 local334; 		// m[esp_50 - 104]{138}
    __size32 local335; 		// m[esp_50 - 104]{181}
    __size32 local336; 		// m[esp_50 - 104]{181}
    __size32 local337; 		// m[esp_50 - 104]{98}
    __size32 local338; 		// m[esp_50 - 104]{98}
    __size32 local339; 		// m[esp_50 - 104]{309}
    __size32 local34; 		// m[esp_50 + 4]{342}
    __size32 local340; 		// m[esp_50 - 104]{218}
    __size32 local341; 		// m[esp_50 - 104]{218}
    __size32 local342; 		// m[esp_50 - 104]{252}
    __size32 local343; 		// m[esp_50 - 104]{252}
    __size32 local344; 		// m[esp_50 - 104]{280}
    __size32 local345; 		// m[esp_50 - 104]{280}
    __size32 local346; 		// m[esp_50 - 104]{337}
    __size32 local347; 		// m[esp_50 - 104]{337}
    __size32 local348; 		// m[esp_50 - 108]{21}
    __size32 local349; 		// m[esp_50 - 108]{21}
    __size32 local35; 		// m[esp_50 + 4]{342}
    __size32 local350; 		// m[esp_50 - 108]{21}
    __size32 local351; 		// m[esp_50 - 108]{139}
    __size32 local352; 		// m[esp_50 - 108]{99}
    int local353; 		// m[esp_50 - 108]{160}
    int local354; 		// m[esp_50 - 108]{160}
    __size32 local355; 		// m[esp_50 - 108]{219}
    __size32 local356; 		// m[esp_50 - 108]{281}
    __size32 local357; 		// m[esp_50 - 108]{338}
    __size32 local358; 		// m[esp_50 - 108]{253}
    int local359; 		// m[esp_50 - 108]{228}
    __size32 local36; 		// m[esp_50 - 4]{7}
    int local360; 		// m[esp_50 - 108]{228}
    __size32 local361; 		// m[esp_50 - 108]{139}
    __size32 local362; 		// m[esp_50 - 108]{139}
    __size32 local363; 		// m[esp_50 - 108]{182}
    __size32 local364; 		// m[esp_50 - 108]{182}
    __size32 local365; 		// m[esp_50 - 108]{99}
    __size32 local366; 		// m[esp_50 - 108]{99}
    __size32 local367; 		// m[esp_50 - 108]{310}
    __size32 local368; 		// m[esp_50 - 108]{219}
    __size32 local369; 		// m[esp_50 - 108]{219}
    __size32 local37; 		// m[esp_50 - 4]{7}
    __size32 local370; 		// m[esp_50 - 108]{253}
    __size32 local371; 		// m[esp_50 - 108]{253}
    __size32 local372; 		// m[esp_50 - 108]{281}
    __size32 local373; 		// m[esp_50 - 108]{281}
    __size32 local374; 		// m[esp_50 - 108]{338}
    __size32 local375; 		// m[esp_50 - 108]{338}
    unsigned int local376; 		// m[esp_50 - 112]{22}
    unsigned int local377; 		// m[esp_50 - 112]{22}
    unsigned int local378; 		// m[esp_50 - 112]{22}
    unsigned int local379; 		// m[esp_50 - 112]{140}
    __size32 local38; 		// m[esp_50 - 4]{7}
    unsigned int local380; 		// m[esp_50 - 112]{100}
    int local381; 		// m[esp_50 - 112]{160}
    int local382; 		// m[esp_50 - 112]{160}
    unsigned int local383; 		// m[esp_50 - 112]{220}
    unsigned int local384; 		// m[esp_50 - 112]{282}
    unsigned int local385; 		// m[esp_50 - 112]{339}
    unsigned int local386; 		// m[esp_50 - 112]{254}
    int local387; 		// m[esp_50 - 112]{228}
    int local388; 		// m[esp_50 - 112]{228}
    unsigned int local389; 		// m[esp_50 - 112]{140}
    __size32 local39; 		// m[esp_50 - 4]{128}
    unsigned int local390; 		// m[esp_50 - 112]{140}
    unsigned int local391; 		// m[esp_50 - 112]{183}
    unsigned int local392; 		// m[esp_50 - 112]{183}
    unsigned int local393; 		// m[esp_50 - 112]{100}
    unsigned int local394; 		// m[esp_50 - 112]{100}
    unsigned int local395; 		// m[esp_50 - 112]{311}
    unsigned int local396; 		// m[esp_50 - 112]{220}
    unsigned int local397; 		// m[esp_50 - 112]{220}
    unsigned int local398; 		// m[esp_50 - 112]{254}
    unsigned int local399; 		// m[esp_50 - 112]{254}
    int local4; 		// m[esp - 40]
    __size32 local40; 		// m[esp_50 - 4]{88}
    unsigned int local400; 		// m[esp_50 - 112]{282}
    unsigned int local401; 		// m[esp_50 - 112]{282}
    unsigned int local402; 		// m[esp_50 - 112]{339}
    unsigned int local403; 		// m[esp_50 - 112]{339}
    int local404; 		// tmpb{87}
    int local405; 		// tmpb{160}
    int local406; 		// tmpb{160}
    int local407; 		// tmpb{160}
    int local408; 		// tmpb{170}
    int local409; 		// tmpb{160}
    int local41; 		// m[esp_50 - 4]{160}
    int local410; 		// tmpb{325}
    int local411; 		// tmpb{240}
    int local412; 		// tmpb{61}
    int local413; 		// tmpb{297}
    int local414; 		// tmpb{268}
    int local415; 		// tmpb{325}
    int local416; 		// tmpb{240}
    int local417; 		// tmpb{61}
    int local418; 		// tmpb{297}
    int local419; 		// tmpb{268}
    int local42; 		// m[esp_50 - 4]{160}
    int local420; 		// tmpb{228}
    int local421; 		// tmpb{228}
    int local422; 		// tmpb{228}
    int local423; 		// tmpb{170}
    int local424; 		// tmpb{170}
    int local425; 		// tmpb{170}
    int local426; 		// tmpb{87}
    int local427; 		// tmpb{87}
    int local428; 		// tmpb{87}
    int local429; 		// tmpb{61}
    __size32 local43; 		// m[esp_50 - 4]{208}
    int local430; 		// tmpb{240}
    int local431; 		// tmpb{240}
    int local432; 		// tmpb{240}
    int local433; 		// tmpb{268}
    int local434; 		// tmpb{297}
    int local435; 		// tmpb{325}
    int local436; 		// tmpb{325}
    int local437; 		// tmpb{325}
    int local438; 		// tmpb{160}
    int local439; 		// tmpb{87}
    __size32 local44; 		// m[esp_50 - 4]{270}
    int local440; 		// tmpb{4}
    int local441; 		// tmpb{4}
    __size16 local442; 		// tmph{114}
    __size16 local443; 		// tmph{326}
    __size16 local444; 		// tmph{241}
    __size16 local445; 		// tmph{62}
    __size16 local446; 		// tmph{298}
    __size16 local447; 		// tmph{269}
    __size16 local448; 		// tmph{114}
    __size16 local449; 		// tmph{326}
    __size32 local45; 		// m[esp_50 - 4]{327}
    __size16 local450; 		// tmph{241}
    __size16 local451; 		// tmph{62}
    __size16 local452; 		// tmph{298}
    __size16 local453; 		// tmph{269}
    int local454; 		// tmph{228}
    int local455; 		// tmph{228}
    int local456; 		// tmph{228}
    __size16 local457; 		// tmph{62}
    __size16 local458; 		// tmph{241}
    __size16 local459; 		// tmph{241}
    __size32 local46; 		// m[esp_50 - 4]{242}
    __size16 local460; 		// tmph{241}
    __size16 local461; 		// tmph{269}
    __size16 local462; 		// tmph{298}
    __size16 local463; 		// tmph{326}
    __size16 local464; 		// tmph{326}
    __size16 local465; 		// tmph{326}
    int local466; 		// tmph{228}
    __size16 local467; 		// tmph{326}
    __size16 local468; 		// tmph{241}
    __size16 local469; 		// tmph{62}
    int local47; 		// m[esp_50 - 4]{228}
    __size16 local470; 		// tmph{298}
    __size16 local471; 		// tmph{269}
    __size16 local472; 		// tmph{114}
    __size16 local473; 		// tmph{5}
    __size16 local474; 		// tmph{5}
    __size32 local475; 		// esp_34{59}
    int local476; 		// local412{61}
    __size16 local477; 		// local445{62}
    __size32 local478; 		// local49{63}
    __size32 local479; 		// m[esp_50 - 32]{64}
    int local48; 		// m[esp_50 - 4]{228}
    __size32 local480; 		// local113{65}
    __size32 local481; 		// local142{66}
    __size32 local482; 		// m[esp_50 - 44]{67}
    __size32 local483; 		// m[esp_50 - 48]{68}
    __size32 local484; 		// m[esp_50 - 68]{69}
    __size32 local485; 		// m[esp_50 - 72]{70}
    __size32 local486; 		// m[esp_50 - 76]{71}
    __size32 local487; 		// m[esp_50 - 80]{72}
    __size32 local488; 		// m[esp_50 - 104]{73}
    __size32 local489; 		// m[esp_50 - 108]{74}
    __size32 local49; 		// m[esp_50 - 4]{63}
    unsigned int local490; 		// m[esp_50 - 112]{75}
    __size32 local491; 		// esp_31{84}
    int local492; 		// local404{87}
    __size32 local493; 		// local40{88}
    __size32 local494; 		// local69{89}
    __size32 local495; 		// local98{90}
    __size32 local496; 		// local127{91}
    __size32 local497; 		// local156{92}
    __size32 local498; 		// local184{93}
    __size32 local499; 		// local212{94}
    int local5; 		// m[esp - 32]
    __size32 local50; 		// m[esp_50 - 4]{171}
    __size32 local500; 		// local240{95}
    __size32 local501; 		// local268{96}
    __size32 local502; 		// local296{97}
    __size32 local503; 		// local324{98}
    __size32 local504; 		// local352{99}
    unsigned int local505; 		// local380{100}
    __size32 local506; 		// local18{103}
    int local507; 		// eax_1{109}
    union { __size32 *; __size32; } local508; 		// esp_25{124}
    unsigned int local509; 		// esi{126}
    __size32 local51; 		// m[esp_50 - 4]{128}
    __size32 local510; 		// local39{128}
    __size32 local511; 		// local68{129}
    __size32 local512; 		// local97{130}
    __size32 local513; 		// local126{131}
    __size32 local514; 		// local155{132}
    __size32 local515; 		// local183{133}
    __size32 local516; 		// local211{134}
    __size32 local517; 		// local239{135}
    __size32 local518; 		// local267{136}
    __size32 local519; 		// local295{137}
    __size32 local52; 		// m[esp_50 - 4]{128}
    __size32 local520; 		// local323{138}
    __size32 local521; 		// local351{139}
    unsigned int local522; 		// local379{140}
    union { __size32 *; unsigned int; } local523; 		// eax{151}
    __size32 local524; 		// esp_28{167}
    int local525; 		// local408{170}
    __size32 local526; 		// local50{171}
    __size32 local527; 		// local81{172}
    __size32 local528; 		// local114{173}
    __size32 local529; 		// local143{174}
    __size32 local53; 		// m[esp_50 - 4]{171}
    __size32 local530; 		// local167{175}
    __size32 local531; 		// local195{176}
    __size32 local532; 		// local223{177}
    __size32 local533; 		// local251{178}
    __size32 local534; 		// local279{179}
    __size32 local535; 		// local307{180}
    __size32 local536; 		// local335{181}
    __size32 local537; 		// local363{182}
    unsigned int local538; 		// local391{183}
    __size32 local539; 		// local28{186}
    __size32 local54; 		// m[esp_50 - 4]{171}
    unsigned int local540; 		// ebx{203}
    union { __size32 *; __size32; } local541; 		// esp_37{204}
    __size32 local542; 		// local43{208}
    __size32 local543; 		// local72{209}
    __size32 local544; 		// local101{210}
    __size32 local545; 		// local130{211}
    __size32 local546; 		// local159{212}
    __size32 local547; 		// local187{213}
    __size32 local548; 		// local215{214}
    __size32 local549; 		// local243{215}
    __size32 local55; 		// m[esp_50 - 4]{327}
    __size32 local550; 		// local271{216}
    __size32 local551; 		// local299{217}
    __size32 local552; 		// local327{218}
    __size32 local553; 		// local355{219}
    unsigned int local554; 		// local383{220}
    unsigned int local555; 		// ebx{235}
    __size32 local556; 		// esp_40{236}
    int local557; 		// local411{240}
    __size16 local558; 		// local444{241}
    __size32 local559; 		// local46{242}
    __size32 local56; 		// m[esp_50 - 4]{327}
    __size32 local560; 		// local75{243}
    __size32 local561; 		// local104{244}
    __size32 local562; 		// local133{245}
    __size32 local563; 		// local162{246}
    __size32 local564; 		// local190{247}
    __size32 local565; 		// local218{248}
    __size32 local566; 		// local246{249}
    __size32 local567; 		// local274{250}
    __size32 local568; 		// local302{251}
    __size32 local569; 		// local330{252}
    __size32 local57; 		// m[esp_50 - 4]{208}
    __size32 local570; 		// local358{253}
    unsigned int local571; 		// local386{254}
    __size32 local572; 		// local24{257}
    __size32 local573; 		// esp_43{264}
    unsigned int local574; 		// edi{267}
    int local575; 		// local414{268}
    __size16 local576; 		// local447{269}
    __size32 local577; 		// local44{270}
    __size32 local578; 		// local73{271}
    __size32 local579; 		// local102{272}
    __size32 local58; 		// m[esp_50 - 4]{208}
    __size32 local580; 		// local131{273}
    __size32 local581; 		// local160{274}
    __size32 local582; 		// local188{275}
    __size32 local583; 		// local216{276}
    __size32 local584; 		// local244{277}
    __size32 local585; 		// local272{278}
    __size32 local586; 		// local300{279}
    __size32 local587; 		// local328{280}
    __size32 local588; 		// local356{281}
    unsigned int local589; 		// local384{282}
    __size32 local59; 		// m[esp_50 - 4]{242}
    __size32 local590; 		// local27{285}
    __size32 local591; 		// esp_46{294}
    int local592; 		// local413{297}
    __size16 local593; 		// local446{298}
    __size32 local594; 		// m[esp_50 - 4]{299}
    __size32 local595; 		// local80{300}
    __size32 local596; 		// m[esp_50 - 36]{301}
    __size32 local597; 		// m[esp_50 - 40]{302}
    __size32 local598; 		// local171{303}
    __size32 local599; 		// local199{304}
    int local6; 		// m[esp - 48]
    __size32 local60; 		// m[esp_50 - 4]{242}
    __size32 local600; 		// local227{305}
    __size32 local601; 		// local255{306}
    __size32 local602; 		// local283{307}
    __size32 local603; 		// local311{308}
    __size32 local604; 		// local339{309}
    __size32 local605; 		// local367{310}
    unsigned int local606; 		// local395{311}
    __size32 local607; 		// local26{314}
    __size32 local608; 		// esp_47{322}
    int local609; 		// local410{325}
    __size32 local61; 		// m[esp_50 - 4]{270}
    __size16 local610; 		// local443{326}
    __size32 local611; 		// local45{327}
    __size32 local612; 		// local74{328}
    __size32 local613; 		// local103{329}
    __size32 local614; 		// local132{330}
    __size32 local615; 		// local161{331}
    __size32 local616; 		// local189{332}
    __size32 local617; 		// local217{333}
    __size32 local618; 		// local245{334}
    __size32 local619; 		// local273{335}
    __size32 local62; 		// m[esp_50 - 4]{270}
    __size32 local620; 		// local301{336}
    __size32 local621; 		// local329{337}
    __size32 local622; 		// local357{338}
    unsigned int local623; 		// local385{339}
    __size32 local624; 		// local23{342}
    __size32 local625; 		// esp{348}
    __size32 local63; 		// m[esp_50 - 4]{88}
    __size32 local64; 		// m[esp_50 - 4]{88}
    __size32 local65; 		// m[esp_50 - 32]{11}
    __size32 local66; 		// m[esp_50 - 32]{11}
    __size32 local67; 		// m[esp_50 - 32]{11}
    __size32 local68; 		// m[esp_50 - 32]{129}
    __size32 local69; 		// m[esp_50 - 32]{89}
    int local7; 		// m[esp - 80]
    int local70; 		// m[esp_50 - 32]{160}
    int local71; 		// m[esp_50 - 32]{160}
    __size32 local72; 		// m[esp_50 - 32]{209}
    __size32 local73; 		// m[esp_50 - 32]{271}
    __size32 local74; 		// m[esp_50 - 32]{328}
    __size32 local75; 		// m[esp_50 - 32]{243}
    int local76; 		// m[esp_50 - 32]{228}
    int local77; 		// m[esp_50 - 32]{228}
    __size32 local78; 		// m[esp_50 - 32]{89}
    __size32 local79; 		// m[esp_50 - 32]{89}
    int local8; 		// m[esp - 72]
    __size32 local80; 		// m[esp_50 - 32]{300}
    __size32 local81; 		// m[esp_50 - 32]{172}
    __size32 local82; 		// m[esp_50 - 32]{209}
    __size32 local83; 		// m[esp_50 - 32]{209}
    __size32 local84; 		// m[esp_50 - 32]{243}
    __size32 local85; 		// m[esp_50 - 32]{243}
    __size32 local86; 		// m[esp_50 - 32]{271}
    __size32 local87; 		// m[esp_50 - 32]{271}
    __size32 local88; 		// m[esp_50 - 32]{328}
    __size32 local89; 		// m[esp_50 - 32]{328}
    int local9; 		// m[esp - 76]
    __size32 local90; 		// m[esp_50 - 32]{129}
    __size32 local91; 		// m[esp_50 - 32]{129}
    __size32 local92; 		// m[esp_50 - 32]{172}
    __size32 local93; 		// m[esp_50 - 32]{172}
    __size32 local94; 		// m[esp_50 - 36]{9}
    __size32 local95; 		// m[esp_50 - 36]{9}
    __size32 local96; 		// m[esp_50 - 36]{9}
    __size32 local97; 		// m[esp_50 - 36]{130}
    __size32 local98; 		// m[esp_50 - 36]{90}
    int local99; 		// m[esp_50 - 36]{160}

    local36 = param2;
    local152 = caml_local_roots;
    local94 = 1;
    local123 = 1;
    local65 = esp_50 + 4;
    local292 = esp_50 - 44;
    caml_local_roots = esp_50 - 80;
    local236 = 1;
    local264 = 1;
    local208 = esp_50 - 48;
    local320 = 0;
    eax = caml_alloc_small(1, 0); /* Warning: also results in ebx */
    local476 = local440;
    local477 = local473;
    local478 = local36;
    local479 = local65;
    local480 = local94;
    local481 = local123;
    local482 = local152;
    local484 = local208;
    local485 = local236;
    local486 = local264;
    local487 = local292;
    local488 = local320;
    local492 = local440;
    local493 = local36;
    local494 = local65;
    local495 = local94;
    local496 = local123;
    local497 = local152;
    local499 = local208;
    local500 = local236;
    local501 = local264;
    local502 = local292;
    local503 = local320;
    local506 = param1;
    local180 = eax;
    *(__size32*)eax = param1;
    local348 = eax;
    esp_1 = caml_raise(param1, eax, ebx, esp_50 - 4); /* Warning: also results in ebp */
    local483 = local180;
    local489 = local348;
    local490 = local376;
    local498 = local180;
    local504 = local348;
    local505 = local376;
    *(__size32*)(esp_1 - 4) = ebp;
    *(__size32*)(esp_1 - 28) = 0x8073ac0;
    esp_4 = caml_raise_constant(*(esp_1 - 28), esp_1 - 4, *(esp_1 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_4 - 4) = ebp;
    *(__size32*)(esp_4 - 28) = 0x8073a58;
    esp_7 = caml_raise_constant(*(esp_4 - 28), esp_4 - 4, *(esp_4 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_7 - 4) = ebp;
    *(__size32*)(esp_7 - 28) = 0x8073a30;
    esp_10 = caml_raise_constant(*(esp_7 - 28), esp_7 - 4, *(esp_7 - 176)); /* Warning: also results in ebp */
    *(__size32*)(esp_10 - 4) = ebp;
    *(__size32*)(esp_10 - 28) = 0x8073a10;
    cl = caml_raise_constant(*(esp_10 - 28), esp_10 - 4, *(esp_10 - 176)); /* Warning: also results in dl, ecx, edx, ebx, esp_13, ebp, esi, edi */
    *(__size32*)(esp_13 - 4) = ebp;
    ebp = esp_13 - 4;
    *(unsigned int*)(esp_13 - 8) = edi;
    *(unsigned int*)(esp_13 - 12) = esi;
    *(unsigned int*)(esp_13 - 16) = ebx;
    esp_16 = esp_13 - 60;
    eax = *(esp_13 + 8);
    al = (unsigned char) eax;
    local475 = esp_16;
    local491 = esp_16;
    if (eax != 0) {
        edx = *(esp_13 + 16);
        *(__size32*)(esp_13 - 36) = edx;
        edx = *(esp_13 + 12);
        *(__size32*)(esp_13 - 32) = eax;
        do {
bb0x8062387:
            esp_31 = local491;
            local404 = local492;
            local40 = local493;
            local69 = local494;
            local98 = local495;
            local127 = local496;
            local156 = local497;
            local184 = local498;
            local212 = local499;
            local240 = local500;
            local268 = local501;
            local296 = local502;
            local324 = local503;
            local352 = local504;
            local380 = local505;
            local18 = local506;
            esi = *(global_0x0807f43c + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local475 = esp_31;
            local476 = local404;
            local478 = local40;
            local479 = local69;
            local480 = local98;
            local481 = local127;
            local482 = local156;
            local483 = local184;
            local484 = local212;
            local485 = local240;
            local486 = local268;
            local487 = local296;
            local488 = local324;
            local489 = local352;
            local490 = local380;
            local491 = esp_31;
            local492 = local404;
            local493 = local40;
            local494 = local69;
            local495 = local98;
            local496 = local127;
            local497 = local156;
            local498 = local184;
            local499 = local212;
            local500 = local240;
            local501 = local268;
            local502 = local296;
            local503 = local324;
            local504 = local352;
            local505 = local380;
            local506 = local18;
            local507 = eax;
            local508 = esp_31;
            local510 = local40;
            local511 = local69;
            local512 = local98;
            local513 = local127;
            local514 = local156;
            local515 = local184;
            local516 = local212;
            local517 = local240;
            local518 = local268;
            local519 = local296;
            local520 = local324;
            local521 = local352;
            local522 = local380;
            local524 = esp_31;
            local525 = local404;
            local526 = local40;
            local527 = local69;
            local528 = local98;
            local529 = local127;
            local530 = local156;
            local531 = local184;
            local532 = local212;
            local533 = local240;
            local534 = local268;
            local535 = local296;
            local536 = local324;
            local537 = local352;
            local538 = local380;
            local539 = local18;
            if (*ebx != edx) {
                do {
                    eax_1 = local507;
                    eax_2 = eax_1 + 1 & esi;
                    ebx = *(caml_frame_descriptors + (eax_1 + 1 & esi) * 4);
                    local507 = eax_2;
                } while (*ebx != edx);
            }
            local442 = *(ebx + 4) + 1;
            local477 = local442;
            if (*(ebx + 4) != -1) {
                esi = *(unsigned short*)(ebx + 6);
                local509 = esi;
                if ((int)esi > 0) {
                    edi = ebx + 8;
                    *(__size32*)(ebp - 36) = ebx;
                    ebx = *(ebp + 8);
                    for(;;) {
                        esp_25 = local508;
                        esi = local509;
                        local39 = local510;
                        local68 = local511;
                        local97 = local512;
                        local126 = local513;
                        local155 = local514;
                        local183 = local515;
                        local211 = local516;
                        local239 = local517;
                        local267 = local518;
                        local295 = local519;
                        local323 = local520;
                        local351 = local521;
                        local379 = local522;
                        eax_4 = *(unsigned short*)edi;
                        if (((unsigned char) eax_4 & 0x1) == 0) {
                            eax_7 = eax_4 + *(ebp - 28);
                            flags = ADDFLAGS32(eax_4, *(ebp - 28), eax_7);
                            local523 = eax_7;
                        }
                        else {
                            flags = SARFLAGS((int)eax_4 >> 1, eax_4, 1);
                            edx = *(ebp - 32);
                            eax = edx + ((int)eax_4 >> 1) * 4;
                            local523 = eax;
                        }
                        eax = local523;
                        *(__size32*)(esp_25 + 4) = eax;
                        eax = *eax;
                        *(__size32*)esp_25 = eax;
                        (*ebx)((unsigned char) eax, eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, local39, local68, local97, local126, local155, local183, local211, local239, local267, local295, local323, local351, local379, cl, dl, param1, param1);
                        local508 = esp_19;
                        local510 = local41;
                        local511 = local70;
                        local512 = local99;
                        local513 = local128;
                        local514 = local157;
                        local515 = local185;
                        local516 = local213;
                        local517 = local241;
                        local518 = local269;
                        local519 = local297;
                        local520 = local325;
                        local521 = local353;
                        local522 = local381;
                        local524 = esp_19;
                        local525 = local405;
                        local526 = local41;
                        local527 = local70;
                        local528 = local99;
                        local529 = local128;
                        local530 = local157;
                        local531 = local185;
                        local532 = local213;
                        local533 = local241;
                        local534 = local269;
                        local535 = local297;
                        local536 = local325;
                        local537 = local353;
                        local538 = local381;
                        local539 = local15;
                        esi_4 = esi_1 - 1;
                        local509 = esi_4;
                        if ((int)esi_1 <= 1) {
                            break;
                        }
                        edi += 2;
                    }
                    ebx = *(ebp - 36);
                }
                esp_28 = local524;
                local408 = local525;
                local50 = local526;
                local81 = local527;
                local114 = local528;
                local143 = local529;
                local167 = local530;
                local195 = local531;
                local223 = local532;
                local251 = local533;
                local279 = local534;
                local307 = local535;
                local335 = local536;
                local363 = local537;
                local391 = local538;
                local28 = local539;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local491 = esp_28;
                local492 = local408;
                local493 = local50;
                local494 = local81;
                local495 = local114;
                local496 = local143;
                local497 = local167;
                local498 = local195;
                local499 = local223;
                local500 = local251;
                local501 = local279;
                local502 = local307;
                local503 = local335;
                local504 = local363;
                local505 = local391;
                local506 = local28;
                goto bb0x8062387;
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
    esp_34 = local475;
    local412 = local476;
    local445 = local477;
    local49 = local478;
    *(__size32*)(esp_50 - 32) = local479;
    local113 = local480;
    local142 = local481;
    *(__size32*)(esp_50 - 44) = local482;
    *(__size32*)(esp_50 - 48) = local483;
    *(__size32*)(esp_50 - 68) = local484;
    *(__size32*)(esp_50 - 72) = local485;
    *(__size32*)(esp_50 - 76) = local486;
    *(__size32*)(esp_50 - 80) = local487;
    *(__size32*)(esp_50 - 104) = local488;
    *(__size32*)(esp_50 - 108) = local489;
    *(unsigned int*)(esp_50 - 112) = local490;
    local608 = esp_34;
    local609 = local412;
    local610 = local445;
    local611 = local49;
    local612 = *(esp_50 - 32);
    local613 = local113;
    local614 = local142;
    local615 = *(esp_50 - 44);
    local616 = *(esp_50 - 48);
    local617 = *(esp_50 - 68);
    local618 = *(esp_50 - 72);
    local619 = *(esp_50 - 76);
    local620 = *(esp_50 - 80);
    local621 = *(esp_50 - 104);
    local622 = *(esp_50 - 108);
    local623 = *(esp_50 - 112);
    local624 = local25;
    local625 = esp_34;
    if (*(ebp + 24) != 0) {
        esi = *(ebp + 24);
        *(__size32*)(ebp - 28) = 0;
        do {
            esp_47 = local608;
            local410 = local609;
            local443 = local610;
            local45 = local611;
            local74 = local612;
            local103 = local613;
            local132 = local614;
            local161 = local615;
            local189 = local616;
            local217 = local617;
            local245 = local618;
            local273 = local619;
            local301 = local620;
            local329 = local621;
            local357 = local622;
            local385 = local623;
            local23 = local624;
            edi = 0;
            local573 = esp_47;
            local574 = edi;
            local575 = local410;
            local576 = local443;
            local577 = local45;
            local578 = local74;
            local579 = local103;
            local580 = local132;
            local581 = local161;
            local582 = local189;
            local583 = local217;
            local584 = local245;
            local585 = local273;
            local586 = local301;
            local587 = local329;
            local588 = local357;
            local589 = local385;
            local590 = local23;
            local591 = esp_47;
            local592 = local410;
            local593 = local443;
            local594 = local45;
            local595 = local74;
            local596 = local103;
            local597 = local132;
            local598 = local161;
            local599 = local189;
            local600 = local217;
            local601 = local245;
            local602 = local273;
            local603 = local301;
            local604 = local329;
            local605 = local357;
            local606 = local385;
            local607 = local23;
            if (*(esi + 4) > 0) {
                do {
                    esp_43 = local573;
                    edi = local574;
                    local414 = local575;
                    local447 = local576;
                    local44 = local577;
                    local73 = local578;
                    local102 = local579;
                    local131 = local580;
                    local160 = local581;
                    local188 = local582;
                    local216 = local583;
                    local244 = local584;
                    local272 = local585;
                    local300 = local586;
                    local328 = local587;
                    local356 = local588;
                    local384 = local589;
                    local27 = local590;
                    ebx = *(ebp - 28);
                    local540 = ebx;
                    local541 = esp_43;
                    local542 = local44;
                    local543 = local73;
                    local544 = local102;
                    local545 = local131;
                    local546 = local160;
                    local547 = local188;
                    local548 = local216;
                    local549 = local244;
                    local550 = local272;
                    local551 = local300;
                    local552 = local328;
                    local553 = local356;
                    local554 = local384;
                    local555 = ebx;
                    local556 = esp_43;
                    local557 = local414;
                    local558 = local447;
                    local559 = local44;
                    local560 = local73;
                    local561 = local102;
                    local562 = local131;
                    local563 = local160;
                    local564 = local188;
                    local565 = local216;
                    local566 = local244;
                    local567 = local272;
                    local568 = local300;
                    local569 = local328;
                    local570 = local356;
                    local571 = local384;
                    local572 = local27;
                    if (*(esi + 8) > 0) {
                        do {
                            ebx = local540;
                            esp_37 = local541;
                            local43 = local542;
                            local72 = local543;
                            local101 = local544;
                            local130 = local545;
                            local159 = local546;
                            local187 = local547;
                            local215 = local548;
                            local243 = local549;
                            local271 = local550;
                            local299 = local551;
                            local327 = local552;
                            local355 = local553;
                            local383 = local554;
                            eax_9 = ebx * 4 + *(esi + edi * 4 + 12);
                            *(__size32*)(esp_37 + 4) = eax_9;
                            eax_12 = *eax_9;
                            *(__size32*)esp_37 = eax_12;
                            (**(ebp + 8))((unsigned char) eax_12, eax_12, ecx, edx, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), local43, local72, local101, local130, local159, local187, local215, local243, local271, local299, local327, local355, local383, cl, dl, param1, param1);
                            local541 = esp_22;
                            local542 = local47;
                            local543 = local76;
                            local544 = local105;
                            local545 = local134;
                            local546 = local163;
                            local547 = local191;
                            local548 = local219;
                            local549 = local247;
                            local550 = local275;
                            local551 = local303;
                            local552 = local331;
                            local553 = local359;
                            local554 = local387;
                            local556 = esp_22;
                            local557 = local420;
                            local558 = local454;
                            local559 = local47;
                            local560 = local76;
                            local561 = local105;
                            local562 = local134;
                            local563 = local163;
                            local564 = local191;
                            local565 = local219;
                            local566 = local247;
                            local567 = local275;
                            local568 = local303;
                            local569 = local331;
                            local570 = local359;
                            local571 = local387;
                            local572 = local19;
                            ebx_4 = ebx_1 + 1;
                            local540 = ebx_4;
                            local555 = ebx_4;
                        } while (*(esi + 8) > ebx_1 + 1);
                    }
                    ebx = local555;
                    esp_40 = local556;
                    edi_1 = edi;
                    local411 = local557;
                    local444 = local558;
                    local46 = local559;
                    local75 = local560;
                    local104 = local561;
                    local133 = local562;
                    local162 = local563;
                    local190 = local564;
                    local218 = local565;
                    local246 = local566;
                    local274 = local567;
                    local302 = local568;
                    local330 = local569;
                    local358 = local570;
                    local386 = local571;
                    local24 = local572;
                    edi_2 = edi_1 + 1;
                    local573 = esp_40;
                    local574 = edi_2;
                    local575 = local411;
                    local576 = local444;
                    local577 = local46;
                    local578 = local75;
                    local579 = local104;
                    local580 = local133;
                    local581 = local162;
                    local582 = local190;
                    local583 = local218;
                    local584 = local246;
                    local585 = local274;
                    local586 = local302;
                    local587 = local330;
                    local588 = local358;
                    local589 = local386;
                    local590 = local24;
                    local591 = esp_40;
                    local592 = local411;
                    local593 = local444;
                    local594 = local46;
                    local595 = local75;
                    local596 = local104;
                    local597 = local133;
                    local598 = local162;
                    local599 = local190;
                    local600 = local218;
                    local601 = local246;
                    local602 = local274;
                    local603 = local302;
                    local604 = local330;
                    local605 = local358;
                    local606 = local386;
                    local607 = local24;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_46 = local591;
            local413 = local592;
            local446 = local593;
            *(__size32*)(esp_50 - 4) = local594;
            local80 = local595;
            *(__size32*)(esp_50 - 36) = local596;
            *(__size32*)(esp_50 - 40) = local597;
            local171 = local598;
            local199 = local599;
            local227 = local600;
            local255 = local601;
            local283 = local602;
            local311 = local603;
            local339 = local604;
            local367 = local605;
            local395 = local606;
            local26 = local607;
            esi = *esi;
            local608 = esp_46;
            local609 = local413;
            local610 = local446;
            local611 = *(esp_50 - 4);
            local612 = local80;
            local613 = *(esp_50 - 36);
            local614 = *(esp_50 - 40);
            local615 = local171;
            local616 = local199;
            local617 = local227;
            local618 = local255;
            local619 = local283;
            local620 = local311;
            local621 = local339;
            local622 = local367;
            local623 = local395;
            local624 = local26;
            local625 = esp_46;
        } while (esi == 0);
    }
    esp = local625;
    ebx = *(esp + 44);
    esi = *(esp + 48);
    edi = *(esp + 52);
    ebp = *(esp + 56);
    return cl; /* WARNING: Also returning: dl := dl, ecx := ecx, edx := edx, ebx := ebx, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x08065181 */
__size32 caml_stat_free(union { void *; __size32; } param1)
{
    int ecx; 		// r25
    int edx; 		// r26

    ecx = free(param1); /* Warning: also results in edx */
    return ecx; /* WARNING: Also returning: edx := edx */
}

/** address: 0x080627aa */
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
                        if ( ~(((unsigned char) eax_8 & 0x1) != 0 || eax_8 >= *(&caml_globals + 0xc8dc) || eax_8 <= *(&caml_globals + 0xc8d8))) {
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
                eax = *(&caml_globals + 0x9770);
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
    eax = *(&caml_globals + 0x9770);
    ebx_38 = local30;
    esp_27 = local31;
    ebp_21 = local32;
    edi_28 = local33;
    *(unsigned int*)(&caml_globals + 0x977c) = eax;
    ecx_5 = *(&caml_globals + 0x9778);
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
                    if ( ~(((unsigned char) eax_2 & 0x1) != 0 || eax_2 >= *(&caml_globals + 0xc8dc) || eax_2 <= *(&caml_globals + 0xc8d8))) {
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
    if (*0x807d29c == 0) {
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
    ecx_9 = *(&caml_globals + 0x976c);
    *(__size32*)(ebp_15 - 28) = ecx_9;
    edx = *(&caml_globals + 0x9498);
    dl_2 = (unsigned char) edx;
    eax = *(&caml_globals + 0x10374);
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
bb0x80628d7:
            esp_51 = local65;
            ebp_14 = local66;
            edi_22 = local67;
            esi_3 = *(&caml_globals + 0x1036c);
            eax = (unsigned int)edx >> 3 & esi_3;
            ecx_12 = *(&caml_globals + 0x9768);
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
                        if ( ~(((unsigned char) eax & 0x1) != 0 || eax >= *(&caml_globals + 0xc8dc) || eax <= *(&caml_globals + 0xc8d8))) {
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
                goto bb0x80628d7;
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
    esi_10 = *(&caml_globals + 0x9760);
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
                            if ( ~(((unsigned char) eax_11 & 0x1) != 0 || eax_11 >= *(&caml_globals + 0xc8dc) || eax_11 <= *(&caml_globals + 0xc8d8))) {
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
    *(esp_78 - 32) = *0x807d2b0;
    *(__size32*)esp_75 = 0x8064a2c;
    cl = caml_scan_global_young_roots(*esp_75, ecx_1); /* Warning: also results in ecx, edx, esp_8 */
    *(__size32*)esp_8 = 0x8064a2c;
    edx = caml_final_do_young_roots(*esp_8, edx); /* Warning: also results in ebx_23, ebp_11, esi_18, edi_17 */
    eax = *(&caml_globals + 0x9764);
    if (eax != 0) {
        *(__size32*)esp_11 = 0x8064a2c;
        (*eax)((unsigned char) eax, dl, bl, eax, ecx, edx, ebx_23, ebp_11, esi_18, edi_17, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), param4, param6, param5, param3, *(esp_78 - 32), cl);
    }
    return;
}

/** address: 0x08064a2c */
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
bb0x8064a3b:
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
    while ( ~((bl & 0x1) != 0 || ebx_2 >= *(&caml_globals + 0xc8dc) || ebx_2 <= *(&caml_globals + 0xc8d8))) {
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
bb0x8064b89:
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
                            goto bb0x8064b89;
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
                    goto bb0x8064a3b;
                }
                else {
                    *(unsigned int*)((unsigned char) edx_1) = edx_4;
                    edx_7 = *(&caml_globals + 0xc924);
                    dl = (unsigned char) edx_7;
                    *(__size32*)(((unsigned char) edx_1) + 4) = edx_7;
                    *(union { unsigned int *; __size32; }*)0x8080458 = ebx_2;
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
bb0x8064a3b:
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

/** address: 0x08064bbb */
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
        edi = *0x8080458;
        local5 = esp_4;
        if (edi != 0) {
            ebx = *edi;
            esi = ebx + 4;
            eax = *(ebx + 4);
            *(__size32*)(&caml_globals + 0xc924) = eax;
            eax = *ebx;
            if ( ~(((unsigned char) eax & 0x1) != 0 || eax >= *(&caml_globals + 0xc8dc) || eax <= *(&caml_globals + 0xc8d8))) {
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
bb0x8064c32:
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
    if (((unsigned char) eax & 0x1) != 0 || eax >= *(&caml_globals + 0xc8dc) || eax <= *(&caml_globals + 0xc8d8)) {
        *(unsigned int*)esi = eax;
        goto bb0x8064c32;
    }
    else {
        *(__size32*)(esp_2 + 4) = esi;
        *(unsigned int*)esp_2 = eax;
        dl = caml_oldify_one(*esp_2, *(esp_2 + 4), dl, eax, ecx, edx); /* Warning: also results in ecx, edx, ebx, esp, ebp, esi, edi */
        local7 = esp;
        goto bb0x8064c32;
    }
    goto bb0x8064c32;
}

/** address: 0x0806fad5 */
void caml_final_empty_young()
{
    __size32 eax; 		// r24

    eax = *(global_0x0807f43c + 0x4568);
    *(__size32*)(global_0x0807f43c + 0x4574) = eax;
    return;
}

/** address: 0x08063ff7 */
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

    ecx = caml_gc_message(1, 0x80717cb);
    ebp = caml_darken_all_roots(al, cl, dl, ecx, ebx, esi, edi);
    *(__size32*)(&caml_globals + 0x104a8) = 0;
    *(__size32*)(&caml_globals + 0x10494) = 10;
    *(__size32*)(&caml_globals + 0xc8c8) = 0;
    ebp = *ebp;
    return ebp;
}

/** address: 0x08070ac8 */
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
    (*esi)(local0, caml_last_return_address, caml_bottom_of_stack, 0x8070a3e, caml_exception_pointer, pc);
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

/** address: 0x0806e739 */
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
    eax = caml_named_value(0x8072267); /* Warning: also results in esp */
    if (eax != 0) {
        ebx = caml_callback_exn(); /* Warning: also results in esp, esi, edi */
    }
    *(__size32*)(&named_value_table + 100) = esi;
    *(__size32*)(&named_value_table + 104) = edi;
    *(__size32*)(esp + 8) = ebx;
    *(__size32*)(esp + 4) = 0x807227d;
    *(__size32*)esp = stderr;
    fprintf(*esp, *(esp + 4));
    *(__size32*)esp = ebx;
    ecx = free(*esp);
    if (*0x80839c4 != 0) {
        caml_print_exception_backtrace(*(esp - 96), *(esp - 92), *(esp - 88), *(esp - 84), *(esp - 80), *(esp - 76), *(esp - 72), *(esp - 56), *(esp - 48), *(esp - 44), *(esp - 40), *(esp - 36), param2, ecx);
    }
    *(__size32*)esp = 2;
    exit(*esp);
    return;
}

/** address: 0x08070a80 */
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

    tmp1 = *(&caml_globals + 0xfe90) & 0x1;
    if (tmp1 != 0) {
        ecx = caml_stash_backtrace(local5, local6, local2, local1, param2, param3, param3); /* Warning: also results in edx, ebx, ebp */
        esp = *0x807d280;
        *(__size32*)(&caml_globals + 0x974c) = *esp;
    }
    else {
        esp = *0x807d280;
        *(__size32*)(&caml_globals + 0x974c) = *esp;
    }
    return ecx; /* WARNING: Also returning: edx := edx, ebx := ebx, ebp := ebp */
}

/** address: 0x080658fa */
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
        eax = *(&caml_globals + 0xc8e0) - edx;
        *(unsigned int*)(&caml_globals + 0xc8e0) = eax;
        if (eax < *(&caml_globals + 0xc8e4)) {
            *(unsigned int*)(&caml_globals + 0xc8e0) = eax + edx;
            caml_minor_collection();
            *(__size32*)(&caml_globals + 0xc8e0) += edi;
        }
        ebx = param1 + 4 >> 2;
        ebp = esp_4 - 4;
        eax = *0x8080414;
        *(__size32*)eax = (ebx << 10) + 1020;
        eax = *(&caml_globals + 0xc8e0);
        eax += 4;
    }
    *(__size32*)(eax + ebx * 4 - 4) = 0;
    *(unsigned int*)(eax + ebx * 4 - 1) = ebx * 4 - (unsigned char) param1;
    ebx = *(ebp - 12);
    ebp = *ebp;
    return eax; /* WARNING: Also returning: ebx := ebx, ebp := ebp */
}

/** address: 0x0806251e */
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
    if (*0x807d2b8 == 0) {
        eax = *(&caml_globals + 996);
        if (eax != 0) {
            do {
                *(__size32*)esp = eax;
                ebx = caml_register_frametable(*esp); /* Warning: also results in esp, esi */
                eax = *(esi + (ebx + 1) * 4);
            } while (eax != 0);
        }
        *(__size32*)(&caml_globals + 0x9784) = 1;
    }
    eax = *(&caml_globals + 0x9780);
    if (eax == 0) {
bb0x806264d:
        *(__size32*)esp = 16;
        eax = caml_stat_alloc(*esp); /* Warning: also results in al, cl, dl, ecx, esp, ebp */
        *(unsigned int*)(&caml_globals + 0x9768) = eax;
        ebx = 4;
bb0x8062663:
        eax = 0;
        local6 = eax;
        do {
            eax_5 = local6;
            edx = *(&caml_globals + 0x9768);
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
            goto bb0x806264d;
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
            *(unsigned int*)(&caml_globals + 0x9768) = eax;
            if (ebx > 0) {
                goto bb0x8062663;
            }
        }
    }
    *(int*)(&caml_globals + 0x1036c) = ebx - 1;
    eax = *(&caml_globals + 0x9780);
    *(__size32*)(ebp - 32) = eax;
    if (eax != 0) {
        do {
            eax = *(ebp - 32);
            esi = *eax;
            eax = *esi;
            *(int*)(ebp - 28) = eax;
            if (eax > 0) {
                ebx = *(&caml_globals + 0x1036c);
                eax_1 = *(esi + 4);
                eax = (unsigned int)eax_1 >> 3 & ebx;
                ecx = *(&caml_globals + 0x9768);
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

/** address: 0x08062bdf */
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

    ebx = caml_iterate_global_roots(param1, 0x807d2c0); /* Warning: also results in esp */
    local4 = param2;
    esp = caml_iterate_global_roots(ebx, 0x807d320);
    ebx = *(&caml_globals + 0x97f0);
    if (ebx != 0) {
        do {
            cl = caml_insert_global_root(0x807d380, edx); /* Warning: also results in ecx, ebx, esp */
            local4 = ecx;
            ebx = *(ebx + 4);
        } while (ebx != 0);
        eax = *(&caml_globals + 0x97f0);
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
    edx = *(&caml_globals + 0x9834);
    local6 = param2;
    if (edx >= 0) {
        eax = 0;
        ecx = 0x807d324;
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
    *(__size32*)(&caml_globals + 0x9834) = 0;
    return cl; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x0806fa75 */
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
    esi = *(global_0x0807f43c + 0x4574);
    local30 = param2;
    local31 = esp_1;
    local32 = esi;
    local33 = param2;
    local34 = esp_1;
    if (esi < *(global_0x0807f43c + 0x4568)) {
        ebx = esi * 12;
        do {
            param2 = local30;
            esp_8 = local31;
            esi = local32;
            eax_1 = ebx + *0x80839ac;
            *(__size32*)(esp_8 + 4) = eax_1;
            eax_4 = *eax_1;
            *(__size32*)esp_8 = eax_4;
            (*edi)(eax_4, param2, ebx, ebp, esi, edi, ADDFLAGS32(ebx, *0x80839ac, eax_1), ADDFLAGS32(ebx, *0x80839ac, eax_1), ADDFLAGS32(ebx, *0x80839ac, eax_1), param1, local9, local14, local19, local24);
            eax_6 = ebx + *(global_0x0807f43c + 0x4570);
            *(__size32*)(esp_4 + 4) = eax_6 + 4;
            eax_9 = *(eax_6 + 4);
            *(__size32*)esp_4 = eax_9;
            (*edi)(eax_9, eax_6 + 4, ebx, ebp, esi, edi, <all>, ADDFLAGS32(ebx, *0x80839ac, eax_6), ADDFLAGS32(ebx, *0x80839ac, eax_6), ADDFLAGS32(ebx, *0x80839ac, eax_6), local5, local10, local15, local20, local25);
            local30 = edx;
            local31 = esp_7;
            local33 = edx;
            local34 = esp_7;
            esi_4 = esi_1 + 1;
            ebx += 12;
            local32 = esi_4;
        } while (*(global_0x0807f43c + 0x4568) > esi_1 + 1);
    }
    param2 = local33;
    esp = local34;
    ebx = *(esp + 28);
    esi = *(esp + 32);
    edi = *(esp + 36);
    ebp = *(esp + 40);
    return param2; /* WARNING: Also returning: ebx := ebx, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x08065622 */
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
    __size32 esp_6; 		// r28{1}
    unsigned int local10; 		// esi_1{21}
    unsigned int local11; 		// param1{22}
    __size8 local12; 		// param4{23}
    __size8 local13; 		// param5{24}
    union { unsigned int *; __size32; } local8; 		// esp_5{19}
    __size32 local9; 		// ebp_1{20}

    ebp_2 = esp_6 - 4;
    esp_1 = esp_6 - 44;
    esi_2 = param2;
    local8 = esp_1;
    local9 = ebp_2;
    local10 = esi_2;
    local11 = param1;
    local12 = param4;
    local13 = param5;
    if (param2 > 0x3fffff) {
        cl = caml_raise_out_of_memory(esp_6 - 4, *(esp_6 - 112), param7); /* Warning: also results in dl, esp_4, ebp, esi */
        local8 = esp_4;
        local9 = ebp;
        local10 = esi;
        local11 = *(esp_6 - 48);
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
        edx = *(&caml_globals + 0x1049c) * ((unsigned long long)((esi_1) * 0x51eb851f >> 32) >> 5);
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
    *(__size32*)(&caml_globals + 0x104b4) = %eax;
    if ( ~flags) {
        caml_urge_major_slice();
    }
    return;
}

/** address: 0x08062796 */
__size32 caml_darken_all_roots(__size8 param2, __size8 param3, __size8 param3, __size32 param5, unsigned int param6, unsigned int param7, __size32 param7)
{
    __size32 ebp; 		// r29
    __size32 esp; 		// r28
    __size32 local3; 		// m[esp - 64]

    ebp = caml_do_roots(local3, param2, param3, param3, param5, param6, esp - 4, param7, param7);
    ebp = *ebp;
    return ebp;
}

/** address: 0x0806e592 */
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

/** address: 0x0806e820 */
__size32 caml_named_value(union { char *; __size32; } param1)
{
    int eax; 		// r24
    __size32 ebx; 		// r27

    eax = hash_value_name(param1);
    ebx = named_value_table[eax];
    if (named_value_table[eax] == 0) {
bb0x806e85b:
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
        goto bb0x806e85b;
    }
    return eax;
}

/** address: 0x08070708 */
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
                local4 = 0x80723bc;
                local5 = 0x80723e0;
                eax = *0x807d100;
                local6 = eax;
                ecx = fprintf(eax, "%s file \"%s\", line %d, characters %d-%d\n", 0x80723bc, param9, param10, param11, param12);
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

/** address: 0x08070799 */
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
    if (param2 != *0x807d0a8) {
        *(__size32*)(&caml_globals + 0xfe94) = 0;
        *(__size32*)(&caml_globals + 0x9574) = param2;
    }
    if (*0x80839cc != 0) {
bb0x80707e4:
        esp_2 = esp - 44;
        param1 = local6;
        local7 = esp_2;
        local8 = param1;
        if (*0x807d29c == 0) {
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
            edi = *(&caml_globals + 0x1036c);
            edx = (unsigned int)ebx >> 3 & edi;
            ecx = *(&caml_globals + 0x9768);
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
bb0x8070824:
                    edx = local13;
                    local15 = edx;
                    if (*(eax + 4) == -1) {
                        esi = *(esi_1 + 8);
                        ebx = *(esi_1 + 12);
                        local14 = esi;
                        if (esi != 0) {
bb0x8070867:
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
                        edx_4 = *(&caml_globals + 0xfe94);
                        local15 = edx_4;
                        if (edx_4 <= 1023) {
                            ecx = *(&caml_globals + 0xfe98);
                            *(__size32*)(ecx + edx_4 * 4) = eax;
                            edx = edx_4 + 1;
                            *(__size32*)(&caml_globals + 0xfe94) = edx_4 + 1;
                            eax_1 = *(unsigned short*)(eax + 4);
                            esi_2 = esi_1 + (eax_1 & 0xfffc);
                            ebx = *(esi_1 + (eax_1 & 0xfffc) - 4);
                            local14 = esi_2;
                            goto bb0x8070867;
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
                    goto bb0x8070824;
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
        *(union { void *; __size32; }*)0x80839cc = eax;
        if (eax != 0) {
            goto bb0x80707e4;
        }
    }
    edx = local15;
    esp = local16;
    ebx = *(esp + 28);
    ebp = *(esp + 40);
    return ecx; /* WARNING: Also returning: edx := edx, ebx := ebx, ebp := ebp */
}

/** address: 0x08064e0c */
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
    *(__size32*)(&caml_globals + 0x9760) = esp_6 - 44;
    eax = *(&caml_globals + 0x98a0);
    local8 = esp_1;
    if (eax != 0) {
        esp_4 = esp_6 - 48;
        caml_minor_collection();
        local8 = esp_4;
    }
    ebx = *(&caml_globals + 0x9760);
    esp_5 = local8;
    *(__size32*)(&caml_globals + 0x9760) = ebx;
    ebx = *(esp_5 + 36);
    ebp = *(esp_5 + 40);
    return local7; /* WARNING: Also returning: ebx := ebx, ebp := ebp */
}

/** address: 0x080624e8 */
__size32 caml_register_frametable(__size32 param1)
{
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 esi; 		// r30
    __size32 *esp_1; 		// r28{3}

    ebx = cons(); /* Warning: also results in esp_1, esi */
    *(__size32*)(&caml_globals + 0x9780) = param1;
    eax = *(&caml_globals + 0x9768);
    if (eax != 0) {
        *(__size32*)esp_1 = eax;
        caml_stat_free(*esp_1);
        *(__size32*)(&caml_globals + 0x9768) = 0;
    }
    return ebx; /* WARNING: Also returning: esi := esi */
}

/** address: 0x08062a30 */
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

/** address: 0x08062a90 */
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
bb0x8062ab1:
            ecx_4 = local9;
            edx_2 = local10;
            eax_4 = *(edx_2 + ecx_4 * 4 + 4);
            local9 = ecx_4;
            local10 = edx_2;
            local11 = edx_2;
            if ( ~(eax_4 == 0 || *eax_4 >= param2)) {
                edx = eax_4;
                local10 = edx;
                goto bb0x8062ab1;
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
        eax_8 = *(&caml_globals + 0x9898) * 0x10dcd;
        eax_11 = eax_8 + 0x6255;
        *(__size32*)(&caml_globals + 0x9898) = eax_8 + 0x6255;
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

/** address: 0x08063a2c */
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
        ecx = *0x807cff0;
        edx = *ecx;
        if (edx == 0) {
bb0x8063ac8:
            fl_last = ecx;
            ecx = 0x807cfe8;
            edx = global_0x0807cfe8;
            local15 = ecx;
            if (fl_prev == 0x807cfe8) {
bb0x8063e96:
                param3 = local15;
                edi = 0;
                local16 = param3;
            }
            else {
                ebx = *(global_0x0807cfe8 - 4);
                if (param2 > (unsigned int)((unsigned int)ebx >> 10)) {
                    do {
                        edx_1 = edx;
                        ecx = edx_1;
                        edx = *edx_1;
                        local15 = ecx;
                        if (fl_prev != edx_1) {
bb0x8063aef:
                            ebx = *(edx - 4);
                        }
                        else {
                            goto bb0x8063e96;
                        }
                        goto bb0x8063aef;
                    } while (param2 > (unsigned int)((unsigned int)ebx >> 10));
bb0x8063af9:
                    eax = allocate_block(edx, param2 + 1, ecx);
                    local16 = ecx;
                    edi = eax;
                }
                else {
                    goto bb0x8063af9;
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
bb0x8063a9f:
                        ebx = *(edx - 4);
                    }
                    else {
                        goto bb0x8063ac8;
                    }
                    goto bb0x8063a9f;
                } while ((unsigned int)((unsigned int)ebx >> 10) < param2);
bb0x8063aa9:
                eax_1 = allocate_block(edx, param2 + 1, ecx);
                local16 = ecx;
                edi = eax_1;
            }
            else {
                goto bb0x8063aa9;
            }
        }
    }
    else {
        if (caml_allocation_policy != 1) {
            goto bb0x8063e96;
        }
        else {
            if (flp_size <= 0) {
bb0x8063b4b:
                if (flp_size != 0) {
                }
                ecx = 0x807cfe8;
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
                        global_0x0807f43c[flp_size] = ecx;
                        ebx = flp_size;
                        flp_size++;
                        if (param2 > (unsigned int)((unsigned int)esi_15 >> 10)) {
                            edi = (unsigned int)esi_15 >> 10;
bb0x8063bf4:
                            ecx = edx;
                        }
                        else {
                            beyond = edx;
                            eax = allocate_block(edx, param2 + 1, ecx);
                            edi = eax;
bb0x8063c77:
                            ebx_4 = ebx;
                            esi_11 = local7;
                            local16 = ecx;
                            if (ebx_4 < flp_size) {
                                ecx = 0;
                                if (ebx_4 > 0) {
                                    edx = *global_0x0807f43c[ebx_4];
                                    edx = *(edx - 4);
                                    ecx = (unsigned int)edx >> 10;
                                }
                                local10 = ecx;
                                local16 = ecx;
                                local16 = ecx;
                                if (flp_size - 1 != ebx_4) {
                                    eax = global_0x0807f43c[ebx_4];
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
                                    while (global_0x0807f43c[ebx_4] != eax) {
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
bb0x8063d2b:
                                                ebx_7 = local8;
                                                esi_13 = local9;
                                                eax = edx;
                                                local11 = ebx_7;
                                                local12 = esi_13;
                                            }
                                            goto bb0x8063d31;
                                        }
                                        goto bb0x8063d2b;
                                        ecx = local10;
                                        ebx_6 = local11;
                                        esi_12 = local12;
                                        local8 = ebx_6;
                                        local9 = esi_12;
                                        local13 = ecx;
                                        local14 = ebx_6;
                                    }
bb0x8063d31:
                                    ecx = local13;
                                    ebx_5 = local14;
                                    if (flp_size + ebx_5 - 1 > 1000) {
                                        if (ebx_5 + ebx_4 > 999) {
                                            if (ebx_4 != 1000) {
                                                ecx = memmove(ebx_4 * 4 + 0x807f440, &param1, (1000 - ebx_4) * 4);
                                            }
                                        }
                                        else {
                                            if (ebx_5 == 1) {
bb0x8063e27:
                                                ecx = memmove(ebx_4 * 4 + 0x807f440, &param1, ebx_5 * 4);
                                            }
                                            else {
                                                ecx = memmove((ebx_5 + ebx_4) * 4 + 0x807f440, ebx_4 * 4 + 0x807f444, (1000 - ebx_4 + ebx_5) * 4);
                                                if ((int)ebx_5 > 0) {
                                                    goto bb0x8063e27;
                                                }
                                            }
                                        }
                                        flp_size = 999;
                                        eax = *0x80803dc;
                                        eax = *eax;
                                        beyond = eax;
                                        local16 = ecx;
                                        ecx = local16;
                                        return edi; /* WARNING: Also returning: ecx := ecx */
                                    }
                                    else {
                                        if (ebx_5 == 1) {
bb0x8063d99:
                                            ecx = memmove(ebx_4 * 4 + 0x807f440, &param1, ebx_5 * 4);
                                        }
                                        else {
                                            ecx = memmove((ebx_5 + ebx_4) * 4 + 0x807f440, ebx_4 * 4 + 0x807f444, (flp_size - ebx_4 - 1) * 4);
                                            if ((int)ebx_5 > 0) {
                                                goto bb0x8063d99;
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
                                    eax = *global_0x0807f43c[(flp_size - 1)];
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
                    goto bb0x8063bf4;
                }
                beyond = edx;
                ecx = edx;
                if (edx == 0) {
                    ecx = global_0x0807f43c[flp_size];
                }
                edx = *0x80803dc;
                edx = *edx;
                esi = *(edx - 4);
                edx = *ecx;
                if (edx == 0) {
bb0x8063c67:
                    fl_last = ecx;
                    edi = 0;
                    local16 = ecx;
                }
                else {
                    ebx = *(edx - 4);
                    local16 = ecx;
                    while ((unsigned int)((unsigned int)esi >> 10) <= (unsigned int)((unsigned int)ebx >> 10)) {
                        if (param2 > (unsigned int)((unsigned int)ebx >> 10)) {
bb0x8063c59:
                            ebx = *edx;
                            if (ebx == 0) {
                                ecx = edx;
                                goto bb0x8063c67;
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
                    goto bb0x8063c59;
                }
            }
            else {
                ecx = *0x807f440;
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
bb0x8063b1d:
                            ecx = flp[(ebx_1 + 1)];
                            edx = *flp[(ebx_1 + 1)];
                            esi_6 = *(edx - 4);
                            esi_9 = (unsigned int)esi_6 >> 10;
                            local5 = esi_9;
                        }
                        else {
                            goto bb0x8063b4b;
                        }
                        goto bb0x8063b1d;
                    } while (param2 > (unsigned int)((unsigned int)esi_6 >> 10));
bb0x8063b2c:
                    ebx = local4;
                    esi = local5;
                    eax = allocate_block(edx, param2 + 1, ecx);
                    local7 = esi;
                    edi = eax;
                    goto bb0x8063c77;
                }
                else {
                    goto bb0x8063b2c;
                }
            }
        }
    }
    ecx = local16;
    return edi; /* WARNING: Also returning: ecx := ecx */
}

/** address: 0x08063fcf */
void caml_round_heap_chunk_size()
{
}

/** address: 0x08062ed2 */
void caml_urge_major_slice()
{
    __size32 eax; 		// r24

    caml_force_major_slice = 1;
    eax = *(global_0x0807f43c + 0xfd4);
    *(__size32*)(global_0x0807f43c + 0xfdc) = eax;
    return;
}

/** address: 0x080638e9 */
void caml_fl_add_blocks(unsigned int param1)
{
    int eax; 		// r24
    __size32 ebx; 		// r27
    unsigned int ecx; 		// r25
    int edx; 		// r26
    union { __size32; unsigned int *; } esi; 		// r30

    edx = *(param1 - 4);
    caml_fl_cur_size = caml_fl_cur_size + ((unsigned int)edx >> 10) + 1;
    edx = *0x807f430;
    if (param1 <= edx) {
        ecx = global_0x0807cfe8;
        if (global_0x0807cfe8 != 0 && param1 > global_0x0807cfe8) {
            edx = *ecx;
            while (edx != 0 && param1 > edx) {
                ecx = edx;
                edx = *ecx;
            }
            ebx = ecx;
            ecx = edx;
        }
        else {
            ebx = 0x807cfe8;
        }
        esi = *(param1 + 4);
        *(unsigned int*)esi = ecx;
        *(unsigned int*)ebx = param1;
        if ( ~(ebx != *0x807cfdc || param1 >= *(global_0x0807f43c + 0x4b90))) {
            edx = *(param1 + 4);
            caml_fl_merge = edx;
        }
        if (*0x807f424 == 1) {
            truncate_flp(param1);
        }
    }
    else {
        *(unsigned int*)edx = param1;
        if ( ~(edx != *0x807cfdc || param1 >= *(global_0x0807f43c + 0x4b90))) {
            eax = *(param1 + 4);
            caml_fl_merge = eax;
        }
        if ( ~(*0x807f424 != 1 || flp_size > 999)) {
            global_0x0807f43c[flp_size] = edx;
            flp_size++;
        }
    }
    return;
}

/** address: 0x08065576 */
void caml_add_to_heap(unsigned int param1)
{
    int eax; 		// r24
    __size32 ecx; 		// r25
    __size32 edx; 		// r26

    ecx = caml_gc_message(4, 0x807193f); /* Warning: also results in edx */
    eax = param1 + *(param1 - 8);
    eax = caml_page_table_add(1, param1, eax, ecx, edx);
    if (eax == 0) {
        eax = *(global_0x0807f43c + 0x4b9c);
        if (eax != 0 && param1 > eax) {
            do {
                edx = eax - 4;
                eax = *(eax - 4);
            } while (eax != 0 && param1 > eax);
        }
        else {
            edx = 0x8083fd8;
        }
        *(unsigned int*)(param1 - 4) = eax;
        *(unsigned int*)edx = param1;
        *(__size32*)(global_0x0807f43c + 0x4510)++;
        edx = *(global_0x0807f43c + 0x4504);
        edx += *(param1 - 8);
        *(int*)(global_0x0807f43c + 0x4504) = edx;
        if (edx > *(global_0x0807f43c + 0x4508)) {
            *(int*)(global_0x0807f43c + 0x4508) = edx;
        }
    }
    return;
}

/** address: 0x08065194 */
void caml_free_for_heap(__size32 param1)
{
    __size32 eax; 		// r24

    eax = *(param1 - 16);
    free(eax);
    return;
}

/** address: 0x08062675 */
__size32 caml_do_roots(__size32 param1, __size8 param2, __size8 param3, __size8 param4, __size32 param5, unsigned int param6, __size32 param7, unsigned int param8, __size32 param9)
{
    __size8 al; 		// r8
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    unsigned int eax; 		// r24
    __size32 ebp; 		// r29
    unsigned int ebx; 		// r27
    int ebx_1; 		// r27{148}
    unsigned int ebx_4; 		// r27{5}
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
    eax = *(&caml_globals + 0x9778);
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
    if (*0x807d29c == 0) {
        cl = caml_init_frame_descriptors(); /* Warning: also results in dl, ecx, ebx, esp_7, ebp, esi, edi */
        local188 = esp_7;
    }
    esp_42 = local188;
    eax = *(&caml_globals + 0x9760);
    *(__size32*)(esp_42 + 16) = eax;
    eax = *(&caml_globals + 0x10374);
    *(__size32*)(esp_42 + 12) = eax;
    eax = *(&caml_globals + 0x9498);
    *(__size32*)(esp_42 + 8) = eax;
    eax = *(&caml_globals + 0x976c);
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
    eax = *(&caml_globals + 0x9764);
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

/** address: 0x0806e53b */
void add_string(__size32 param1)
{
    __size32 ecx; 		// r25
    __size32 edi; 		// r31

    edi = param1;
    ecx = -1;
bb0x806e559:
    tmpb = 0 - *edi;
    edi +=  (DF == 0) ? 1 : -1;
    ecx--;
    if (tmpb != 0) {
        goto bb0x806e559;
    }
}

/** address: 0x0806e528 */
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

/** address: 0x0806e7e0 */
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

/** address: 0x080704f4 */
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

/** address: 0x080624a2 */
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

/** address: 0x080635e0 */
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
    if (*0x807f424 == 0) {
        fl_prev = param3;
    }
    return param1 + (((unsigned int)ebx >> 10) - param2) * 4;
}

/** address: 0x080636cb */
void truncate_flp(unsigned int param1)
{
    int edx; 		// r26

    if (param1 == 0x807cfe8) {
        flp_size = 0;
        beyond = 0;
    }
    else {
        if (flp_size > 0) {
            edx = flp_size - 1;
            if (param1 <= *global_0x0807f43c[(flp_size - 1)]) {
                while (edx > 0) {
                    if (param1 > *global_0x0807f43c[(edx - 1)]) {
                        flp_size = edx;
                        goto bb0x806372a;
                    }
                    edx--;
                }
                flp_size = edx;
            }
        }
bb0x806372a:
        if (param1 <= beyond) {
            beyond = 0;
        }
    }
    return;
}

/** address: 0x08062350 */
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
    unsigned int local108; 		// m[esp_35 - 8]{230}
    unsigned int local109; 		// m[esp_35 - 8]{166}
    unsigned int local110; 		// m[esp_35 - 8]{38}
    unsigned int local111; 		// m[esp_35 - 8]{209}
    unsigned int local112; 		// m[esp_35 - 8]{117}
    __size32 local12; 		// m[esp_35 + 8]{61}
    unsigned int local125; 		// m[esp_35 - 12]{18}
    unsigned int local128; 		// m[esp_35 - 12]{0}
    unsigned int local129; 		// m[esp_35 - 12]{57}
    int local13; 		// m[esp_35 + 8]{151}
    int local130; 		// m[esp_35 - 12]{105}
    unsigned int local132; 		// m[esp_35 - 12]{0}
    int local133; 		// m[esp_35 - 12]{151}
    unsigned int local135; 		// m[esp_35 - 12]{231}
    unsigned int local136; 		// m[esp_35 - 12]{167}
    unsigned int local137; 		// m[esp_35 - 12]{210}
    unsigned int local138; 		// m[esp_35 - 12]{188}
    unsigned int local139; 		// m[esp_35 - 12]{118}
    unsigned int local152; 		// m[esp_35 - 16]{19}
    unsigned int local155; 		// m[esp_35 - 16]{0}
    unsigned int local156; 		// m[esp_35 - 16]{58}
    int local157; 		// m[esp_35 - 16]{105}
    unsigned int local159; 		// m[esp_35 - 16]{0}
    int local160; 		// m[esp_35 - 16]{151}
    unsigned int local162; 		// m[esp_35 - 16]{232}
    unsigned int local163; 		// m[esp_35 - 16]{168}
    unsigned int local164; 		// m[esp_35 - 16]{211}
    unsigned int local165; 		// m[esp_35 - 16]{189}
    unsigned int local166; 		// m[esp_35 - 16]{119}
    __size32 local17; 		// m[esp_35 + 8]{122}
    __size32 local179; 		// m[esp_35 - 32]{26}
    __size32 local18; 		// m[esp_35 + 8]{235}
    __size32 local182; 		// m[esp_35 - 32]{0}
    __size32 local183; 		// m[esp_35 - 32]{59}
    int local184; 		// m[esp_35 - 32]{105}
    __size32 local186; 		// m[esp_35 - 32]{0}
    int local187; 		// m[esp_35 - 32]{151}
    __size32 local189; 		// m[esp_35 - 32]{233}
    __size32 local19; 		// m[esp_35 + 8]{171}
    __size32 local190; 		// m[esp_35 - 32]{169}
    __size32 local191; 		// m[esp_35 - 32]{212}
    __size32 local192; 		// m[esp_35 - 32]{190}
    __size32 local193; 		// m[esp_35 - 32]{120}
    unsigned int local2; 		// m[esp - 12]
    __size32 local20; 		// m[esp_35 + 8]{43}
    __size32 local208; 		// m[esp_35 - 36]{24}
    __size32 local21; 		// m[esp_35 + 8]{214}
    __size32 local211; 		// m[esp_35 - 36]{0}
    __size32 local212; 		// m[esp_35 - 36]{60}
    int local213; 		// m[esp_35 - 36]{105}
    __size32 local215; 		// m[esp_35 - 36]{0}
    int local216; 		// m[esp_35 - 36]{151}
    __size32 local220; 		// m[esp_35 - 36]{234}
    __size32 local221; 		// m[esp_35 - 36]{121}
    __size32 local227; 		// m[esp_35 - 36]{42}
    __size32 local228; 		// m[esp_35 - 36]{213}
    __size32 local229; 		// m[esp_35 - 36]{191}
    __size32 local230; 		// m[esp_35 - 36]{170}
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
    __size32 local314; 		// local86{37}
    unsigned int local315; 		// local110{38}
    unsigned int local316; 		// m[esp_35 - 12]{39}
    unsigned int local317; 		// m[esp_35 - 16]{40}
    __size32 local318; 		// param2{41}
    __size32 local319; 		// local227{42}
    __size32 local320; 		// esp_16{51}
    unsigned int local321; 		// param11{53}
    int local322; 		// local236{54}
    __size32 local323; 		// local76{55}
    unsigned int local324; 		// local102{56}
    unsigned int local325; 		// local129{57}
    unsigned int local326; 		// local156{58}
    __size32 local327; 		// local183{59}
    __size32 local328; 		// local212{60}
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
    __size32 local339; 		// local83{116}
    int local34; 		// m[esp_35 + 12]{151}
    unsigned int local340; 		// local112{117}
    unsigned int local341; 		// local139{118}
    unsigned int local342; 		// local166{119}
    __size32 local343; 		// local193{120}
    __size32 local344; 		// local221{121}
    __size32 local345; 		// local17{122}
    unsigned int local346; 		// local38{123}
    __size32 local347; 		// local64{124}
    unsigned int local348; 		// ebx{141}
    union { __size32 *; __size32; } local349; 		// esp_22{142}
    unsigned int local350; 		// ebx{158}
    __size32 local351; 		// esp_25{159}
    int local352; 		// local243{163}
    __size16 local353; 		// local276{164}
    __size32 local354; 		// local85{165}
    unsigned int local355; 		// local109{166}
    unsigned int local356; 		// local136{167}
    unsigned int local357; 		// local163{168}
    __size32 local358; 		// local190{169}
    __size32 local359; 		// local230{170}
    __size32 local360; 		// local19{171}
    unsigned int local361; 		// local40{172}
    __size32 local362; 		// local60{173}
    __size32 local363; 		// esp_28{180}
    unsigned int local364; 		// edi{183}
    int local365; 		// local246{184}
    __size16 local366; 		// local279{185}
    __size32 local367; 		// local87{186}
    unsigned int local368; 		// m[esp_35 - 8]{187}
    unsigned int local369; 		// local138{188}
    unsigned int local370; 		// local165{189}
    __size32 local371; 		// local192{190}
    __size32 local372; 		// local229{191}
    __size32 local373; 		// m[esp_35 + 8]{192}
    unsigned int local374; 		// local42{193}
    __size32 local375; 		// local63{194}
    __size32 local376; 		// esp_31{203}
    int local377; 		// local245{206}
    __size16 local378; 		// local278{207}
    __size32 local379; 		// m[esp_35 - 4]{208}
    unsigned int local38; 		// m[esp_35 + 12]{123}
    unsigned int local380; 		// local111{209}
    unsigned int local381; 		// local137{210}
    unsigned int local382; 		// local164{211}
    __size32 local383; 		// local191{212}
    __size32 local384; 		// local228{213}
    __size32 local385; 		// local21{214}
    unsigned int local386; 		// local41{215}
    __size32 local387; 		// local62{216}
    __size32 local388; 		// ecx{221}
    unsigned int local389; 		// edx{222}
    unsigned int local39; 		// m[esp_35 + 12]{236}
    unsigned int local390; 		// ebx{223}
    __size32 local391; 		// esp_32{224}
    int local392; 		// local242{227}
    __size16 local393; 		// local275{228}
    __size32 local394; 		// local82{229}
    unsigned int local395; 		// local108{230}
    unsigned int local396; 		// local135{231}
    unsigned int local397; 		// local162{232}
    __size32 local398; 		// local189{233}
    __size32 local399; 		// local220{234}
    __size32 local4; 		// m[esp - 36]
    unsigned int local40; 		// m[esp_35 + 12]{172}
    __size32 local400; 		// local18{235}
    unsigned int local401; 		// local39{236}
    __size32 local402; 		// local59{237}
    __size32 local403; 		// ecx{242}
    __size32 local404; 		// esp{243}
    unsigned int local41; 		// m[esp_35 + 12]{215}
    unsigned int local42; 		// m[esp_35 + 12]{193}
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
    unsigned int local7; 		// m[esp + 12]
    __size32 local72; 		// m[esp_35 - 4]{15}
    __size32 local75; 		// m[esp_35 - 4]{0}
    __size32 local76; 		// m[esp_35 - 4]{55}
    int local77; 		// m[esp_35 - 4]{105}
    __size32 local79; 		// m[esp_35 - 4]{0}
    int local80; 		// m[esp_35 - 4]{151}
    __size32 local82; 		// m[esp_35 - 4]{229}
    __size32 local83; 		// m[esp_35 - 4]{116}
    __size32 local85; 		// m[esp_35 - 4]{165}
    __size32 local86; 		// m[esp_35 - 4]{37}
    __size32 local87; 		// m[esp_35 - 4]{186}
    int local9; 		// m[esp_35 + 8]{105}
    unsigned int local98; 		// m[esp_35 - 8]{17}

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
    local315 = local98;
    local316 = local125;
    local317 = local152;
    local318 = param2;
    local319 = param1;
    local320 = esp_1;
    local321 = param11;
    local322 = local272;
    local323 = local72;
    local324 = local98;
    local325 = local125;
    local326 = local152;
    local329 = param3;
    local330 = param4;
    local331 = param5;
    if (param3 != 0) {
        local4 = param5;
        edx = param4;
        local5 = param3;
        local327 = local179;
        local328 = local208;
        do {
bb0x8062387:
            esp_16 = local320;
            param11 = local321;
            local236 = local322;
            local76 = local323;
            local102 = local324;
            local129 = local325;
            local156 = local326;
            local183 = local327;
            local212 = local328;
            local12 = local329;
            local33 = local330;
            local54 = local331;
            esi = *(global_0x0807f43c + 0x4a64);
            eax = edx >> 3 & esi;
            ecx = caml_frame_descriptors;
            ebx = *(caml_frame_descriptors + (edx >> 3 & esi) * 4);
            local308 = ecx;
            local311 = esp_16;
            local312 = local236;
            local314 = local76;
            local315 = local102;
            local316 = local129;
            local317 = local156;
            local318 = local183;
            local319 = local212;
            local320 = esp_16;
            local321 = param11;
            local322 = local236;
            local323 = local76;
            local324 = local102;
            local325 = local129;
            local326 = local156;
            local327 = local183;
            local328 = local212;
            local329 = local12;
            local330 = local33;
            local331 = local54;
            local332 = eax;
            local333 = esp_16;
            local336 = esp_16;
            local337 = param11;
            local338 = local236;
            local339 = local76;
            local340 = local102;
            local341 = local129;
            local342 = local156;
            local343 = local183;
            local344 = local212;
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
                        (*ebx)((unsigned char) eax, eax, ecx, edx, ebx, ebp, esi, edi, flags, ZF, CF, param3, param4, param5, local75, local101, local128, local155, local182, local211);
                        local333 = esp_4;
                        local336 = esp_4;
                        local337 = edi;
                        local338 = local237;
                        local339 = local77;
                        local340 = local103;
                        local341 = local130;
                        local342 = local157;
                        local343 = local184;
                        local344 = local213;
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
                local83 = local339;
                local112 = local340;
                local139 = local341;
                local166 = local342;
                local193 = local343;
                local221 = local344;
                local17 = local345;
                local38 = local346;
                local64 = local347;
                eax = *(unsigned short*)(ebx + 4);
                *(__size32*)(ebp - 28) += eax & 0xfffc;
                eax = *(ebp - 28);
                edx = *(eax - 4);
                local320 = esp_13;
                local321 = edi;
                local322 = local240;
                local323 = local83;
                local324 = local112;
                local325 = local139;
                local326 = local166;
                local327 = local193;
                local328 = local221;
                local329 = local17;
                local330 = local38;
                local331 = local64;
                goto bb0x8062387;
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
    local86 = local314;
    local110 = local315;
    *(unsigned int*)(esp_35 - 12) = local316;
    *(unsigned int*)(esp_35 - 16) = local317;
    param2 = local318;
    local227 = local319;
    param4 = local7;
    local388 = param6;
    local389 = param7;
    local390 = param8;
    local391 = esp_19;
    local392 = local244;
    local393 = local277;
    local394 = local86;
    local395 = local110;
    local396 = *(esp_35 - 12);
    local397 = *(esp_35 - 16);
    local398 = param2;
    local399 = local227;
    local400 = local20;
    local401 = *(esp_35 + 12);
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
            local82 = local394;
            local108 = local395;
            local135 = local396;
            local162 = local397;
            local189 = local398;
            local220 = local399;
            local18 = local400;
            local39 = local401;
            local59 = local402;
            edi = 0;
            local363 = esp_32;
            local364 = edi;
            local365 = local242;
            local366 = local275;
            local367 = local82;
            local368 = local108;
            local369 = local135;
            local370 = local162;
            local371 = local189;
            local372 = local220;
            local373 = local18;
            local374 = local39;
            local375 = local59;
            local376 = esp_32;
            local377 = local242;
            local378 = local275;
            local379 = local82;
            local380 = local108;
            local381 = local135;
            local382 = local162;
            local383 = local189;
            local384 = local220;
            local385 = local18;
            local386 = local39;
            local387 = local59;
            if (*(esi + 4) > 0) {
                do {
                    esp_28 = local363;
                    edi = local364;
                    local246 = local365;
                    local279 = local366;
                    local87 = local367;
                    *(unsigned int*)(esp_35 - 8) = local368;
                    local138 = local369;
                    local165 = local370;
                    local192 = local371;
                    local229 = local372;
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
                    local356 = local138;
                    local357 = local165;
                    local358 = local192;
                    local359 = local229;
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
                            (**(ebp + 8))((unsigned char) eax_12, eax_12, ecx, edx, ebx, ebp, esi, edi, ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), ADDFLAGS32(ebx * 4, *(esi + edi * 4 + 12), eax_9), param3, param4, param5, local79, local105, local132, local159, local186, local215);
                            local349 = esp_7;
                            local351 = esp_7;
                            local352 = local252;
                            local353 = local286;
                            local354 = local80;
                            local355 = local106;
                            local356 = local133;
                            local357 = local160;
                            local358 = local187;
                            local359 = local216;
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
                    local109 = local355;
                    local136 = local356;
                    local163 = local357;
                    local190 = local358;
                    local230 = local359;
                    local19 = local360;
                    local40 = local361;
                    local60 = local362;
                    edi_2 = edi_1 + 1;
                    local363 = esp_25;
                    local364 = edi_2;
                    local365 = local243;
                    local366 = local276;
                    local367 = local85;
                    local368 = local109;
                    local369 = local136;
                    local370 = local163;
                    local371 = local190;
                    local372 = local230;
                    local373 = local19;
                    local374 = local40;
                    local375 = local60;
                    local376 = esp_25;
                    local377 = local243;
                    local378 = local276;
                    local379 = local85;
                    local380 = local109;
                    local381 = local136;
                    local382 = local163;
                    local383 = local190;
                    local384 = local230;
                    local385 = local19;
                    local386 = local40;
                    local387 = local60;
                } while (*(esi + 4) <= edi_1 + 1);
            }
            esp_31 = local376;
            local245 = local377;
            local278 = local378;
            *(__size32*)(esp_35 - 4) = local379;
            local111 = local380;
            local137 = local381;
            local164 = local382;
            local191 = local383;
            local228 = local384;
            local21 = local385;
            local41 = local386;
            local62 = local387;
            esi = *esi;
            local388 = ecx;
            local389 = edx;
            local390 = ebx;
            local391 = esp_31;
            local392 = local245;
            local393 = local278;
            local394 = *(esp_35 - 4);
            local395 = local111;
            local396 = local137;
            local397 = local164;
            local398 = local191;
            local399 = local228;
            local400 = local21;
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

/** address: 0x08062a5c */
__size32 caml_scan_global_roots(__size32 param1)
{
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 esi; 		// r30
    __size32 esp; 		// r28

    ebx = caml_iterate_global_roots(param1, 0x807d2c0); /* Warning: also results in esp */
    ebx = caml_iterate_global_roots(ebx, 0x807d320); /* Warning: also results in esp */
    esp = caml_iterate_global_roots(ebx, 0x807d380); /* Warning: also results in esi */
    ebx = *(esp + 4);
    ebp = *(esp + 8);
    return ebx; /* WARNING: Also returning: ebp := ebp, esi := esi */
}

/** address: 0x0806f980 */
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
    __size32 local103; 		// local29{73}
    __size32 local104; 		// local50{74}
    unsigned int local105; 		// m[esp_24 - 12]{75}
    __size32 local106; 		// local85{76}
    __size32 local107; 		// local15{77}
    __size32 local108; 		// esp_21{83}
    __size32 local109; 		// edi{85}
    int local11; 		// m[esp_24 + 4]{62}
    __size32 local110; 		// local30{86}
    __size32 local111; 		// m[esp_24 - 8]{87}
    unsigned int local112; 		// local68{88}
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
    __size32 local29; 		// m[esp_24 - 4]{73}
    __size32 local3; 		// m[esp - 16]
    __size32 local30; 		// m[esp_24 - 4]{86}
    __size32 local31; 		// m[esp_24 - 4]{0}
    __size32 local32; 		// m[esp_24 - 4]{0}
    __size32 local33; 		// m[esp_24 - 4]{0}
    __size32 local34; 		// m[esp_24 - 4]{0}
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
    __size32 local47; 		// m[esp_24 - 8]{0}
    __size32 local48; 		// m[esp_24 - 8]{0}
    __size32 local49; 		// m[esp_24 - 8]{37}
    int local5; 		// m[esp_24 + 4]{29}
    __size32 local50; 		// m[esp_24 - 8]{74}
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
    __size32 local95; 		// m[esp_24 - 4]{36}
    __size32 local96; 		// local49{37}
    unsigned int local97; 		// local67{38}
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
    if (*0x80839b0 != 0) {
        ebx = 0;
        esi = 0;
        edi = param1;
        local92 = esi;
        do {
            param2 = local90;
            esp_13 = local91;
            esi = local92;
            eax_1 = ebx + *0x80839ac;
            *(__size32*)(esp_13 + 4) = eax_1;
            eax_4 = *eax_1;
            *(__size32*)esp_13 = eax_4;
            (*edi)(eax_4, param2, ebx, ebp, esi, edi, ADDFLAGS32(ebx, *0x80839ac, eax_1), ADDFLAGS32(ebx, *0x80839ac, eax_1), ADDFLAGS32(ebx, *0x80839ac, eax_1), param1, local20, local38, local56, local74);
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
        } while (*(global_0x0807f43c + 0x4574) > esi_1 + 1);
    }
    esp_16 = local93;
    param6 = local94;
    *(__size32*)(esp_24 - 4) = local95;
    local49 = local96;
    local67 = local97;
    *(__size32*)(esp_24 - 16) = local98;
    param1 = local99;
    eax = *(global_0x0807f43c + 0x4578);
    *(__size32*)(ebp - 28) = eax;
    local108 = esp_16;
    local109 = param6;
    local110 = *(esp_24 - 4);
    local111 = local49;
    local112 = local67;
    local113 = *(esp_24 - 16);
    local114 = param1;
    local115 = esp_16;
    if (eax != 0) {
        do {
            esp_21 = local108;
            edi = local109;
            local30 = local110;
            *(__size32*)(esp_24 - 8) = local111;
            local68 = local112;
            local86 = local113;
            local16 = local114;
            ebx = *(ebp - 28);
            esi = 0;
            tmp1 = *(ebx + 4);
            flags = SUBFLAGS32(*(ebx + 4), 0, tmp1);
            local100 = esp_21;
            local101 = esi;
            local102 = esp_21;
            local103 = local30;
            local104 = *(esp_24 - 8);
            local105 = local68;
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
            local29 = local103;
            local50 = local104;
            *(unsigned int*)(esp_24 - 12) = local105;
            local85 = local106;
            local15 = local107;
            edx = *(ebp - 28);
            edx = *edx;
            *(__size32*)(ebp - 28) = edx;
            local108 = esp_20;
            local109 = edi;
            local110 = local29;
            local111 = local50;
            local112 = *(esp_24 - 12);
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

/** address: 0x08061ca0 */
__size32 scanmult(int param1, union { __size32; int *; } param2)
{
    int ecx; 		// r25

    __isoc99_sscanf();
    ecx = __isoc99_sscanf();
    *(int*)param2 = param1;
    return ecx;
}

/** address: 0x080639f4 */
void caml_set_allocation_policy(__size32 param1)
{
    if (param1 == 0) {
        *(__size32*)(&caml_globals + 0x94bc) = 0x807cfe8;
    }
    else {
        if (param1 == 1) {
            *(__size32*)(&caml_globals + 0xb8f4) = 0;
            *(__size32*)(&caml_globals + 0xb8f8) = 0;
        }
    }
    *(__size32*)(&caml_globals + 0xb8f0) = param1;
    return;
}

/** address: 0x08070874 */
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
    if (param1 >> 1 != *0x80839c4) {
        *(int*)(&caml_globals + 0xfe90) = param1 >> 1;
        *(__size32*)(&caml_globals + 0xfe94) = 0;
        if (param1 >> 1 == 0) {
            ecx = caml_remove_global_root(0x807d0a8, param8); /* Warning: also results in edx */
            local4 = ecx;
            local5 = edx;
        }
        else {
            cl = caml_register_global_root(0x807d0a8); /* Warning: also results in dl, ecx, edx, ebx, ebp, esi, edi */
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

/** address: 0x08062bca */
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

    cl = caml_insert_global_root(0x807d2c0, param1); /* Warning: also results in dl, ecx, edx, ebx, ebp, esi, edi */
    ebp = *ebp;
    return cl; /* WARNING: Also returning: dl := dl, ecx := ecx, edx := edx, ebx := ebx, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x08062e69 */
__size32 caml_remove_global_root(unsigned int param1, int param2)
{
    __size32 ecx; 		// r25
    unsigned int edx; 		// r26

    ecx = caml_delete_global_root(0x807d2c0, param1, param2); /* Warning: also results in edx */
    return ecx; /* WARNING: Also returning: edx := edx */
}

/** address: 0x08062c6c */
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
bb0x8062c88:
            esi_1 = local1;
            eax_5 = *(ecx + esi_1 * 4 + 4);
            local1 = esi_1;
            if ( ~(eax_5 == 0 || *eax_5 >= param2)) {
                ecx = eax_5;
                goto bb0x8062c88;
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
bb0x8062cfe:
                    *(int*)(param1 + 72) = eax_1 - 1;
                    param2 = local6;
                    return ecx; /* WARNING: Also returning: edx := param2 */
                }
                else {
                }
                goto bb0x8062cfe;
            } while (*(param1 + (eax_1 - 1) * 4 + 4) == 0);
            *(int*)(param1 + 72) = eax_1 - 1;
        }
    }
    param2 = local6;
    return ecx; /* WARNING: Also returning: edx := param2 */
}

