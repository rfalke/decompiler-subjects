
extern void full_load_with_ldr(void *src, long *high, long *low);
    
extern void full_load_with_byte_wise_ld1(void *src, long *high, long *low);
    
extern void full_load_with_8byte_wise_ld1(void *src, long *high, long *low);
    
extern void half_load_with_8byte_wise_ld1(void *src, long *high, long *low);
    
extern void full_load_2_regs_with_byte_wise_ld1(void *src, long *high, long *low);
    
extern void full_load_4_regs_with_byte_wise_ld1(void *src, long *high, long *low);
    
extern void indexed_ld1__one_byte_at_index_0(void *src, long *high, long *low);
    
extern void indexed_ld1__one_byte_at_index_3(void *src, long *high, long *low);
    
extern void indexed_ld1__8_bytes_to_low(void *src, long *high, long *low);
    
extern void indexed_ld1__8_bytes_to_high(void *src, long *high, long *low);
    
extern void repeating_ld1__repeat_first_byte_half(void *src, long *high, long *low);
    
extern void repeating_ld1__repeat_first_byte_full(void *src, long *high, long *low);
    
extern void repeating_ld1__load_first_8_bytes_into_low(void *src, long *high, long *low);
    
extern void repeating_ld1__repeat_8_bytes_to_high(void *src, long *high, long *low);
    
extern void ld2_spread_bytes_to_2_regs(void *src, long *high, long *low);
    
extern void ld2_spread_bytes_to_2_regs__half_(void *src, long *high, long *low);
    
extern void ld2_spread_8_bytes_items_to_2_regs(void *src, long *high, long *low);
    
extern void indexed_ld2__first_2_bytes_to_2_regs(void *src, long *high, long *low);
    
extern void indexed_ld2__8_bytes_into_lows(void *src, long *high, long *low);
    
extern void indexed_ld2__8_bytes_to_highs(void *src, long *high, long *low);
    
extern void repeating_ld2__first_bytes_full(void *src, long *high, long *low);
    
extern void repeating_ld2__2_bytes_half(void *src, long *high, long *low);
    
extern void ld3_spread_bytes_to_3_regs(void *src, long *high, long *low);
    
extern void ld3_spread_bytes_to_3_regs__half_(void *src, long *high, long *low);
    
extern void ld3_spread_8_bytes_items_to_3_regs(void *src, long *high, long *low);
    
extern void indexed_ld3__first_2_bytes_to_3_regs(void *src, long *high, long *low);
    
extern void indexed_ld3__8_bytes_into_lows(void *src, long *high, long *low);
    
extern void indexed_ld3__8_bytes_to_highs(void *src, long *high, long *low);
    
extern void repeating_ld3__first_bytes_full(void *src, long *high, long *low);
    
extern void repeating_ld3__2_bytes_half(void *src, long *high, long *low);
    
extern void ld4_spread_bytes_to_4_regs(void *src, long *high, long *low);
    
extern void ld4_spread_bytes_to_4_regs__half_(void *src, long *high, long *low);
    
extern void ld4_spread_8_bytes_items_to_4_regs(void *src, long *high, long *low);
    
extern void indexed_ld4__first_2_bytes_to_4_regs(void *src, long *high, long *low);
    
extern void indexed_ld4__8_bytes_into_lows(void *src, long *high, long *low);
    
extern void indexed_ld4__8_bytes_to_highs(void *src, long *high, long *low);
    
extern void repeating_ld4__first_bytes_full(void *src, long *high, long *low);
    
extern void repeating_ld4__2_bytes_half(void *src, long *high, long *low);
    