#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	print_grid(int grid[4][4])
{
	int		r;
	int		c;
	char	digit;

	r = 0;
	while (r < 4)
	{
		c = 0;
		while (c < 4)
		{
			digit = grid[r][c] + '0';
			ft_putchar(digit);
			if (c < 3)
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
