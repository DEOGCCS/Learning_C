#include <unistd.h>

void	ft_putstr(char *str);

void	print_grid(int grid[4][4]);

int		solve(int grid[4][4], int clues[16], int cell_index);

int	parse_input(char *str, int *clues)
{
	int	i;
	int	j;
	int	num_count;

	i = 0;
	j = 0;
	num_count = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			if (num_count >= 16)
				return (0);
			clues[j++] = str[i] - '0';
			num_count++;
		}
		else if (str[i] != ' ')
		{
			return (0);
		}
		i++;
	}
	return (num_count == 16);
}

void	init_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	clues[16];
	int	grid[4][4];

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (!parse_input(argv[1], clues))
	{
		ft_putstr("Error\n");
		return (1);
	}
	init_grid(grid);
	if (solve(grid, clues, 0))
		print_grid(grid);
	else
		ft_putstr("Error\n");
	return (0);
}
