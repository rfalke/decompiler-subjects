#include <idc.idc>

static main()
{
  warning("=== start of cleanup script");

  auto ea,x;

  for ( ea=get_next_func(0); ea != BADADDR; ea=get_next_func(ea) ) {
	auto name=get_func_name(ea);
	auto lib=(
name == ".init_proc" || 
name == ".__libc_start_main" ||
name == "_start" ||
name == "_dl_relocate_static_pie" ||
name == "__x86.get_pc_thunk.bx" ||
name == "deregister_tm_clones" ||
name == "register_tm_clones" ||
name == "__do_global_dtors_aux" ||
name == "frame_dummy" ||
name == "__libc_csu_init" ||
name == "__libc_csu_fini" ||
name == ".term_proc" ||
name == "__libc_start_main" ||
name == "call_gmon_start" ||
name == "__do_global_ctors_aux" ||
0);
    msg("  function at %08lX %s with name '%s'",ea, lib?" LIB ":"     ", name);
	if(lib) {
      set_func_flags(ea, FUNC_LIB|get_func_flags(ea));
    }
	msg("\n");
  }
  warning("finished");
}
