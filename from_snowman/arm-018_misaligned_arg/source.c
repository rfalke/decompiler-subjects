int g;

void f(int i) {
	g = i;
	*(int *)((char *)&g + 1) = *(int *)((char *)&i + 1);
}

int main() {
	for (int i = 0; i < 10; ++i) {
		f(i);
	}
	return 0;
}
