int g() { return 100500; }
int h() { return 100500; }

void f(int a, int b, int c, int d) {
	while (a) {
		while (h()) {
			++b;
			if (b == c) {
				return;
			}
		}
		++b;
	}


	while (a + b - c) {
		while (h()) {
			do {
				if (a) {
					d = c;
				}
			} while (g() && h());
			--a;
		}

		while (g() && h()) {
			++a;
			if (!d) {
				break;
			}
			if (a) {
				continue;
			}
			d = 20;
		}
	}
}

int main() {}
