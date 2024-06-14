/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unique_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thayamsr <thayamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 20:29:03 by thayamsr          #+#    #+#             */
/*   Updated: 2024/06/01 22:55:32 by thayamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_row_unique(int *grid[], int gs, int y)
{
	int	*num_in_row;
	int	i;

	num_in_row = (int *)malloc((gs + 2) * 4);
	i = 1;
	if (!num_in_row)
		return (0);
	while (i <= gs)
	{
		num_in_row[i] = 0;
		i++;
	}
	i = 1;
	while (i <= gs)
	{
		if (grid[y][i] != 0 && num_in_row[grid[y][i]] == 1)
		{
			free(num_in_row);
			return (0);
		}
		num_in_row[grid[y][i]] = 1;
		i++;
	}
	return (1);
}

int	check_col_unique(int *grid[], int gs, int x)
{
	int	*num_in_col;
	int	i;

	num_in_col = (int *)malloc((gs + 2) * 4);
	i = 1;
	if (!num_in_col)
		return (0);
	while (i <= gs)
	{
		num_in_col[i] = 0;
		i++;
	}
	i = 1;
	while (i <= gs)
	{
		if (grid[i][x] != 0 && num_in_col[grid[i][x]] == 1)
		{
			free(num_in_col);
			return (0);
		}
		num_in_col[grid[i][x]] = 1;
		i++;
	}
	return (1);
}

int	check_uniqueness(int *grid[], int gs, int x, int y)
{
	if (!(check_col_unique(grid, gs, x)))
	{
		return (0);
	}
	if (!(check_row_unique(grid, gs, y)))
	{
		return (0);
	}
	return (1);
}
