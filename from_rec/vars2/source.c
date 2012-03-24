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
	int	f1, f2;
	char	f3;
	long	f4;
} gs1;

void	func(struct s1 *s1p)
{
	s1p->f1 = 1;
	s1p->f3 = 'k';
	s1p->f4 = 10;
}


main()
{
	func(&gs1);
}


