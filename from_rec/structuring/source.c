main()
{
}

void	enter()
{
}


void	leave()
{
}

int	i;
int	j;
int	arr[100];

void	loop1()
{
	enter();
	for(i = 0; i < 100; ++i)
	    arr[i] = i;
	leave();
}


int	loop2()
{
	int	x;

	enter();
	do {
	    do {
	        x += arr[i] + j;
		if(x == 10)
		   x += 12;
	    } while(j < 100);
	    j = 0;
	} while(i < 100);
	leave();
	return x;
}


