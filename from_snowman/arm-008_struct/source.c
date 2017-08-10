struct s1 {
	int a;
	int b;
};

void f(struct s1 *s) {
	s->a = 10;
	s->b = 20;
}

int main() {}
