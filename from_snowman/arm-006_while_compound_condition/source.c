void g(int *a, int *b, int *c) {
	++*a;
	--*b;
	*c = *a**b;
}

void f(int a, int b, int c) {
	while (a && b && c) {
		g(&a, &b, &c);
	}
}

int main() {}
