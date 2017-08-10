int f() { return 10; }

int g(bool x) {
	return 100500;
}

int main() {
	g(f());
	return 0;
}
