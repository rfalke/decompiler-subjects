int g() { return 100500; }
int h() { return 100500; }

void f(int a, int b, int c, int d) {
	if ((a && b) || (c && d)) {
		g();
	} else {
		h();
	}
	if ((a || b) && (c || d)) {
		g();
	}
	if (a || (b && c) || d) {
		h();
	}
}

int main() {}
