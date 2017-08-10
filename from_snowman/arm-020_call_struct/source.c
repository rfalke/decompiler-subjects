struct A {
	int a;
	short b;
	char c;
};

struct B {
	int q;
	int w;
	int e;
	int r;
};

void f(A a, B b) {
}

void g() {
	f(A(), B());
}

int main() {}
