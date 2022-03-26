#include<unistd.h>
//#include<stdio.h>
int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}
/*
int main()
{
	printf("%d",ft_is_prime(1));
}*/
