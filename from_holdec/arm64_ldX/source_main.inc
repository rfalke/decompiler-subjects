
  prepare();
  full_load_with_ldr((void *)buffer, high, low);
  dump("ldr q0, buffer", "full load with ldr");


  prepare();
  full_load_with_byte_wise_ld1((void *)buffer, high, low);
  dump("ld1 { v0.16b }, buffer", "full load with byte-wise ld1");


  prepare();
  full_load_with_8byte_wise_ld1((void *)buffer, high, low);
  dump("ld1 { v0.2d }, buffer", "full load with 8byte-wise ld1");


  prepare();
  half_load_with_8byte_wise_ld1((void *)buffer, high, low);
  dump("ld1 { v0.1d }, buffer", "half load with 8byte-wise ld1");


  prepare();
  full_load_2_regs_with_byte_wise_ld1((void *)buffer, high, low);
  dump("ld1 { v0.16b, v1.16b }, buffer", "full load 2 regs with byte-wise ld1");


  prepare();
  full_load_4_regs_with_byte_wise_ld1((void *)buffer, high, low);
  dump("ld1 { v0.16b, v1.16b, v2.16b, v3.16b }, buffer", "full load 4 regs with byte-wise ld1");


  prepare();
  indexed_ld1__one_byte_at_index_0((void *)buffer, high, low);
  dump("ld1 { v0.b}[0], buffer", "indexed ld1: one byte at index 0");


  prepare();
  indexed_ld1__one_byte_at_index_3((void *)buffer, high, low);
  dump("ld1 { v0.b}[3], buffer", "indexed ld1: one byte at index 3");


  prepare();
  indexed_ld1__8_bytes_to_low((void *)buffer, high, low);
  dump("ld1 { v0.d}[0], buffer", "indexed ld1: 8 bytes to low");


  prepare();
  indexed_ld1__8_bytes_to_high((void *)buffer, high, low);
  dump("ld1 { v0.d}[1], buffer", "indexed ld1: 8 bytes to high");


  prepare();
  repeating_ld1__repeat_first_byte_half((void *)buffer, high, low);
  dump("ld1r {v0.8b}, buffer", "repeating ld1: repeat first byte half");


  prepare();
  repeating_ld1__repeat_first_byte_full((void *)buffer, high, low);
  dump("ld1r {v0.16b}, buffer", "repeating ld1: repeat first byte full");


  prepare();
  repeating_ld1__load_first_8_bytes_into_low((void *)buffer, high, low);
  dump("ld1r {v0.1d}, buffer", "repeating ld1: load first 8 bytes into low");


  prepare();
  repeating_ld1__repeat_8_bytes_to_high((void *)buffer, high, low);
  dump("ld1r {v0.2d}, buffer", "repeating ld1: repeat 8 bytes to high");


  prepare();
  ld2_spread_bytes_to_2_regs((void *)buffer, high, low);
  dump("ld2 {v0.16b, v1.16b}, buffer", "ld2 spread bytes to 2 regs");


  prepare();
  ld2_spread_bytes_to_2_regs__half_((void *)buffer, high, low);
  dump("ld2 {v0.8b, v1.8b}, buffer", "ld2 spread bytes to 2 regs (half)");


  prepare();
  ld2_spread_8_bytes_items_to_2_regs((void *)buffer, high, low);
  dump("ld2 {v0.2d, v1.2d}, buffer", "ld2 spread 8-bytes-items to 2 regs");


  prepare();
  indexed_ld2__first_2_bytes_to_2_regs((void *)buffer, high, low);
  dump("ld2 {v0.b, v1.b}[9], buffer", "indexed ld2: first 2 bytes to 2 regs");


  prepare();
  indexed_ld2__8_bytes_into_lows((void *)buffer, high, low);
  dump("ld2 {v0.d, v1.d}[0], buffer", "indexed ld2: 8 bytes into lows");


  prepare();
  indexed_ld2__8_bytes_to_highs((void *)buffer, high, low);
  dump("ld2 {v0.d, v1.d}[1], buffer", "indexed ld2: 8 bytes to highs");


  prepare();
  repeating_ld2__first_bytes_full((void *)buffer, high, low);
  dump("ld2r {v0.16b, v1.16b}, buffer", "repeating ld2: first bytes full");


  prepare();
  repeating_ld2__2_bytes_half((void *)buffer, high, low);
  dump("ld2r {v0.4h, v1.4h}, buffer", "repeating ld2: 2 bytes half");


  prepare();
  ld3_spread_bytes_to_3_regs((void *)buffer, high, low);
  dump("ld3 {v0.16b, v1.16b, v2.16b}, buffer", "ld3 spread bytes to 3 regs");


  prepare();
  ld3_spread_bytes_to_3_regs__half_((void *)buffer, high, low);
  dump("ld3 {v0.8b, v1.8b, v2.8b}, buffer", "ld3 spread bytes to 3 regs (half)");


  prepare();
  ld3_spread_8_bytes_items_to_3_regs((void *)buffer, high, low);
  dump("ld3 {v0.2d, v1.2d, v2.2d}, buffer", "ld3 spread 8-bytes-items to 3 regs");


  prepare();
  indexed_ld3__first_2_bytes_to_3_regs((void *)buffer, high, low);
  dump("ld3 {v0.b, v1.b, v2.b}[9], buffer", "indexed ld3: first 2 bytes to 3 regs");


  prepare();
  indexed_ld3__8_bytes_into_lows((void *)buffer, high, low);
  dump("ld3 {v0.d, v1.d, v2.d}[0], buffer", "indexed ld3: 8 bytes into lows");


  prepare();
  indexed_ld3__8_bytes_to_highs((void *)buffer, high, low);
  dump("ld3 {v0.d, v1.d, v2.d}[1], buffer", "indexed ld3: 8 bytes to highs");


  prepare();
  repeating_ld3__first_bytes_full((void *)buffer, high, low);
  dump("ld3r {v0.16b, v1.16b, v2.16b}, buffer", "repeating ld3: first bytes full");


  prepare();
  repeating_ld3__2_bytes_half((void *)buffer, high, low);
  dump("ld3r {v0.4h, v1.4h, v2.4h}, buffer", "repeating ld3: 2 bytes half");


  prepare();
  ld4_spread_bytes_to_4_regs((void *)buffer, high, low);
  dump("ld4 {v0.16b, v1.16b, v2.16b, v3.16b}, buffer", "ld4 spread bytes to 4 regs");


  prepare();
  ld4_spread_bytes_to_4_regs__half_((void *)buffer, high, low);
  dump("ld4 {v0.8b, v1.8b, v2.8b, v3.8b}, buffer", "ld4 spread bytes to 4 regs (half)");


  prepare();
  ld4_spread_8_bytes_items_to_4_regs((void *)buffer, high, low);
  dump("ld4 {v0.2d, v1.2d, v2.2d, v3.2d}, buffer", "ld4 spread 8-bytes-items to 4 regs");


  prepare();
  indexed_ld4__first_2_bytes_to_4_regs((void *)buffer, high, low);
  dump("ld4 {v0.b, v1.b, v2.b, v3.b}[9], buffer", "indexed ld4: first 2 bytes to 4 regs");


  prepare();
  indexed_ld4__8_bytes_into_lows((void *)buffer, high, low);
  dump("ld4 {v0.d, v1.d, v2.d, v3.d}[0], buffer", "indexed ld4: 8 bytes into lows");


  prepare();
  indexed_ld4__8_bytes_to_highs((void *)buffer, high, low);
  dump("ld4 {v0.d, v1.d, v2.d, v3.d}[1], buffer", "indexed ld4: 8 bytes to highs");


  prepare();
  repeating_ld4__first_bytes_full((void *)buffer, high, low);
  dump("ld4r {v0.16b, v1.16b, v2.16b, v3.16b}, buffer", "repeating ld4: first bytes full");


  prepare();
  repeating_ld4__2_bytes_half((void *)buffer, high, low);
  dump("ld4r {v0.4h, v1.4h, v2.4h, v3.4h}, buffer", "repeating ld4: 2 bytes half");

