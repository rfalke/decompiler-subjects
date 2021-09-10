
  prepare();
  full_write_with_str((void *)buffer);
  dump("str q0, buffer", "full write with str");


  prepare();
  full_store_with_byte_wise_st1((void *)buffer);
  dump("st1 { v0.16b }, buffer", "full store with byte-wise st1");


  prepare();
  full_store_with_8byte_wise_st1((void *)buffer);
  dump("st1 { v0.2d }, buffer", "full store with 8byte-wise st1");


  prepare();
  half_store_with_8byte_wise_st1((void *)buffer);
  dump("st1 { v0.1d }, buffer", "half store with 8byte-wise st1");


  prepare();
  full_store_2_regs_with_byte_wise_st1((void *)buffer);
  dump("st1 { v0.16b, v1.16b }, buffer", "full store 2 regs with byte-wise st1");


  prepare();
  full_store_4_regs_with_byte_wise_st1((void *)buffer);
  dump("st1 { v0.16b, v1.16b, v2.16b, v3.16b }, buffer", "full store 4 regs with byte-wise st1");


  prepare();
  indexed_st1__one_byte_from_index_0((void *)buffer);
  dump("st1 { v0.b}[0], buffer", "indexed st1: one byte from index 0");


  prepare();
  indexed_st1__one_byte_from_index_3((void *)buffer);
  dump("st1 { v0.b}[3], buffer", "indexed st1: one byte from index 3");


  prepare();
  indexed_st1__8_bytes_from_low((void *)buffer);
  dump("st1 { v0.d}[0], buffer", "indexed st1: 8 bytes from low");


  prepare();
  indexed_st1__8_bytes_from_high((void *)buffer);
  dump("st1 { v0.d}[1], buffer", "indexed st1: 8 bytes from high");


  prepare();
  write_interleaved_bytes_from_2_regs((void *)buffer);
  dump("st2 {v0.16b, v1.16b}, buffer", "write interleaved bytes from 2 regs");


  prepare();
  write_interleaved_bytes_from_2_regs__half_((void *)buffer);
  dump("st2 {v0.8b, v1.8b}, buffer", "write interleaved bytes from 2 regs (half)");


  prepare();
  write_interleaved_8_bytes_from_2_regs((void *)buffer);
  dump("st2 {v0.2d, v1.2d}, buffer", "write interleaved 8-bytes from 2 regs");


  prepare();
  indexed_st2__write_2_bytes_from_2_regs((void *)buffer);
  dump("st2 {v0.b, v1.b}[9], buffer", "indexed st2: write 2 bytes from 2 regs");


  prepare();
  indexed_st2__8_bytes_from_lows((void *)buffer);
  dump("st2 {v0.d, v1.d}[0], buffer", "indexed st2: 8 bytes from lows");


  prepare();
  indexed_st2__8_bytes_from_highs((void *)buffer);
  dump("st2 {v0.d, v1.d}[1], buffer", "indexed st2: 8 bytes from highs");


  prepare();
  write_interleaved_bytes_from_3_regs((void *)buffer);
  dump("st3 {v0.16b, v1.16b, v2.16b}, buffer", "write interleaved bytes from 3 regs");


  prepare();
  write_interleaved_bytes_from_3_regs__half_((void *)buffer);
  dump("st3 {v0.8b, v1.8b, v2.8b}, buffer", "write interleaved bytes from 3 regs (half)");


  prepare();
  write_interleaved_8_bytes_from_3_regs((void *)buffer);
  dump("st3 {v0.2d, v1.2d, v2.2d}, buffer", "write interleaved 8-bytes from 3 regs");


  prepare();
  indexed_st3__write_3_bytes_from_3_regs((void *)buffer);
  dump("st3 {v0.b, v1.b, v2.b}[9], buffer", "indexed st3: write 3 bytes from 3 regs");


  prepare();
  indexed_st3__8_bytes_from_lows((void *)buffer);
  dump("st3 {v0.d, v1.d, v2.d}[0], buffer", "indexed st3: 8 bytes from lows");


  prepare();
  indexed_st3__8_bytes_from_highs((void *)buffer);
  dump("st3 {v0.d, v1.d, v2.d}[1], buffer", "indexed st3: 8 bytes from highs");


  prepare();
  write_interleaved_bytes_from_4_regs((void *)buffer);
  dump("st4 {v0.16b, v1.16b, v2.16b, v3.16b}, buffer", "write interleaved bytes from 4 regs");


  prepare();
  write_interleaved_bytes_from_4_regs__half_((void *)buffer);
  dump("st4 {v0.8b, v1.8b, v2.8b, v3.8b}, buffer", "write interleaved bytes from 4 regs (half)");


  prepare();
  write_interleaved_8_bytes_from_4_regs((void *)buffer);
  dump("st4 {v0.2d, v1.2d, v2.2d, v3.2d}, buffer", "write interleaved 8-bytes from 4 regs");


  prepare();
  indexed_st4__write_4_bytes_from_4_regs((void *)buffer);
  dump("st4 {v0.b, v1.b, v2.b, v3.b}[9], buffer", "indexed st4: write 4 bytes from 4 regs");


  prepare();
  indexed_st4__8_bytes_from_lows((void *)buffer);
  dump("st4 {v0.d, v1.d, v2.d, v3.d}[0], buffer", "indexed st4: 8 bytes from lows");


  prepare();
  indexed_st4__8_bytes_from_highs((void *)buffer);
  dump("st4 {v0.d, v1.d, v2.d, v3.d}[1], buffer", "indexed st4: 8 bytes from highs");

