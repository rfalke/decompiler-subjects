#include "viewer.c.h"
static struct module *viewer_submodules[4] = { &search_history_module, &timer_module, &viewer_marks_module, 0 };
struct module viewer_module = { "Viewer", 0, 0, viewer_submodules, 0, 0, 0 };
#if 0
#endif
