#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	division;
	int	module;

	x = 10;
	y = 3;
	ft_div_mod(x, y, &division, &module);
	printf("Division: %d, Module:%d\n", division, module);
	return (0);
}*/
