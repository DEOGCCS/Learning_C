#include <unistd.h>

int	check_columns(int grid[4][4], int clues[16]);

int	check_rows(int grid[4][4], int clues[16]);

int	count_visible(int *arr, int size)
{
	int	visible_count;
	int	max_height_seen;
	int	i;

	visible_count = 0;
	max_height_seen = 0;
	i = 0;
	while (i < size)
	{
		if (arr[i] > max_height_seen)
		{
			visible_count++;
			max_height_seen = arr[i];
		}
		i++;
	}
	return (visible_count);
}

int	count_visible_reverse(int *arr, int size)
{
	int	visible_count;
	int	max_height_seen;
	int	i;

	visible_count = 0;
	max_height_seen = 0;
	i = size - 1;
	while (i >= 0)
	{
		if (arr[i] > max_height_seen)
		{
			visible_count++;
			max_height_seen = arr[i];
		}
		i--;
	}
	return (visible_count);
}

int	check_all_clues(int grid[4][4], int clues[16])
{
	if (!check_columns(grid, clues))
		return (0);
	if (!check_rows(grid, clues))
		return (0);
	return (1);
}
