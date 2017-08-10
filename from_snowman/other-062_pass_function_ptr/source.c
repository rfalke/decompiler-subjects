/* gcc -nostdlib -o ../062_pass_function_ptr 062_pass_function_ptr.c */

void f() {}

void g(void(*fun)()) {
}

int main() {
	g(f);
}
