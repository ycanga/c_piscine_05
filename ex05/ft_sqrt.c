//#include<stdio.h>

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i * i <= nb && i < 46341)
		i++;
	i--;
	if (i * i == nb)
		return (i);
	return (0);
}
/*
int main()
{
    printf("%d",ft_sqrt(25));
}*/
