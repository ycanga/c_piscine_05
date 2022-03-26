#include<unistd.h>
//#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
		fac *= nb--;
	return (fac);
}
/*
int main()
{
	printf("%d\n",ft_iterative_factorial(3));
}*/
