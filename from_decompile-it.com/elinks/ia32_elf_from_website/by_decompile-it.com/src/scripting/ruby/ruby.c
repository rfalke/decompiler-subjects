#include "ruby.c.h"
struct module ruby_scripting_module = { "Ruby", 0, ruby_scripting_hooks, 0, 0, &init_ruby, 0 };
#if 0
#endif
