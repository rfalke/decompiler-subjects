int g() { return 100500; }
int h() { return 100500; }

void f(int a, int b, int c, int d) {
	while (a) {
		++b;
	}

	while (a) {
		++b;
		if (b == c) {
			return;
		}
	}

	while (h()) {
		++a;
	}

	while (g() && h()) {
		++a;
	}

	do {
		f(d, a, b, c);
	} while (g());

	do {
		if (a) {
			f(d, c, b, a);
			return;
		} else {
			d = g();
		}
		if (d) {
			h();
			break;
		}
	} while (a);

	do {
		a = g() - b;
		if (a) {
			return;
		}
	} while (g() && h());
}

int main() {}
