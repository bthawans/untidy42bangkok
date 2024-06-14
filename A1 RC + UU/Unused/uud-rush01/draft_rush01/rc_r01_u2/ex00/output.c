/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwon <cwon@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 20:52:32 by cwon              #+#    #+#             */
/*   Updated: 2024/06/02 21:25:14 by cwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	release_memory(int **grid, int *param, int dim)
{
	int	i;

	i = 0;
	while (i < dim)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
	free(param);
}

int	filled_grid(int **grid, int dim)
{
	int	i;
	int	j;

	i = 0;
	while (i < dim)
	{
		j = 0;
		while (j < dim)
		{
			if (!grid[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	print_grid(int **grid, int dim)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < dim)
	{
		j = 0;
		while (j < dim)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			if (j == dim - 1)
				write(1, "\n", 1);
			else
				write(1, " ", 1);
			j++;
		}
		i++;
	}
}

void	verify_solution(int **grid, int dim)
{
	if (filled_grid(grid, dim))
		print_grid(grid, dim);
	else
		write(1, "Error\n", 6);
}
