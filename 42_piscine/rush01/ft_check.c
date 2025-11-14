/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoura-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 22:15:32 by bmoura-s          #+#    #+#             */
/*   Updated: 2025/07/27 14:36:07 by bmoura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_visible(int *arr, int size);

int	count_visible_reverse(int *arr, int size);

int	is_valid_placement(int grid[4][4], int row, int col, int height)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (grid[row][i] == height)
			return (0);
		i++;
	}
	i = 0;
	while (i < row)
	{
		if (grid[i][col] == height)
			return (0);
		i++;
	}
	return (1);
}

int	check_columns(int grid[4][4], int clues[16])
{
	int	temp_arr[4];
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			temp_arr[j] = grid[j][i];
			j++;
		}
		if (count_visible(temp_arr, 4) != clues[i])
			return (0);
		if (count_visible_reverse(temp_arr, 4) != clues[4 + i])
			return (0);
		i++;
	}
	return (1);
}

int	check_rows(int grid[4][4], int clues[16])
{
	int	temp_arr[4];
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			temp_arr[j] = grid[i][j];
			j++;
		}
		if (count_visible(temp_arr, 4) != clues[8 + i])
			return (0);
		if (count_visible_reverse(temp_arr, 4) != clues[12 + i])
			return (0);
		i++;
	}
	return (1);
}
