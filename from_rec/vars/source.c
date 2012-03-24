unsigned char uc;
signed char sc;
unsigned short us;
signed short ss;
unsigned int ui;
signed int si;
unsigned long ul;
signed long sl;
float	f;
double d;

enum ee {
	one = 1,
	two,
	three,
	five = 5
} en;

char	ca[10];
char	*cpa[10];

struct s1 {
	int	f1;
	struct s1 *sp;
	char	f3;
	long	f4;
} gs1;

void	func(struct s1 *s1p)
{
	s1p->f1 = 1;
	s1p->f3 = 'k';
	s1p->f4 = 10;
}

void	func2()
{
	gs1.f1 = 1;
	gs1.sp = &gs1;
	gs1.f3 = 'k';
	gs1.f4 = 10;
	gs1.sp->f1 = 2;
	gs1.sp->sp->f1 = 3;
}


main()
{
	func(&gs1);
	func2();
}


