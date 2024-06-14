/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwon <cwon@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 21:13:09 by cwon              #+#    #+#             */
/*   Updated: 2024/06/02 21:47:11 by cwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	right_check(int **grid, int *parameters, int *row_col, int *n_dim)
{
	int	max;
	int	increment;
	int	i;
	int	zero_count;

	grid[row_col[0]][row_col[1]] = n_dim[0];
	max = 0;
	i = n_dim[1] - 1;
	increment = 0;
	zero_count = 0;
	while (i >= 0)
	{
		if (!grid[row_col[0]][i])
			zero_count++;
		if (max < grid[row_col[0]][i])
		{
			max = grid[row_col[0]][i];
			increment++;
		}
		i--;
	}
	grid[row_col[0]][row_col[1]] = 0;
	if (!zero_count)
		return (increment == parameters[row_col[0] + (3 * n_dim[1])]);
	return (1);
}

int	left_check(int **grid, int *parameters, int *row_col, int *n_dim)
{
	int	max;
	int	increment;
	int	i;
	int	zero_count;

	grid[row_col[0]][row_col[1]] = n_dim[0];
	max = 0;
	i = 0;
	increment = 0;
	zero_count = 0;
	while (i < n_dim[1])
	{
		if (!grid[row_col[0]][i])
			zero_count++;
		if (max < grid[row_col[0]][i])
		{
			max = grid[row_col[0]][i];
			increment++;
		}
		i++;
	}
	grid[row_col[0]][row_col[1]] = 0;
	if (!zero_count)
		return (increment == parameters[row_col[0] + (2 * n_dim[1])]);
	return (1);
}

int	bottom_check(int **grid, int *parameters, int *row_col, int *n_dim)
{
	int	max;
	int	increment;
	int	i;
	int	zero_count;

	grid[row_col[0]][row_col[1]] = n_dim[0];
	max = 0;
	i = n_dim[1] - 1;
	increment = 0;
	zero_count = 0;
	while (i >= 0)
	{
		if (!grid[i][row_col[1]])
			zero_count++;
		if (max < grid[i][row_col[1]])
		{
			max = grid[i][row_col[1]];
			increment++;
		}
		i--;
	}
	grid[row_col[0]][row_col[1]] = 0;
	if (!zero_count)
		return (increment == parameters[row_col[1] + n_dim[1]]);
	return (1);
}

int	top_check(int **grid, int *parameters, int *row_col, int *n_dim)
{
	int	max;
	int	increment;
	int	i;
	int	zero_count;

	grid[row_col[0]][row_col[1]] = n_dim[0];
	max = 0;
	i = 0;
	increment = 0;
	zero_count = 0;
	while (i < n_dim[1])
	{
		if (!grid[i][row_col[1]])
			zero_count++;
		if (max < grid[i][row_col[1]])
		{
			max = grid[i][row_col[1]];
			increment++;
		}
		i++;
	}
	grid[row_col[0]][row_col[1]] = 0;
	if (!zero_count)
		return (increment == parameters[row_col[1]]);
	return (1);
}

int	visible(int **grid, int *parameters, int *row_col, int *n_dim)
{
	if (!top_check(grid, parameters, row_col, n_dim))
		return (0);
	if (!bottom_check(grid, parameters, row_col, n_dim))
		return (0);
	if (!left_check(grid, parameters, row_col, n_dim))
		return (0);
	if (!right_check(grid, parameters, row_col, n_dim))
		return (0);
	return (1);
}
