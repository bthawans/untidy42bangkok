/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_prep.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwon <cwon@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 20:43:28 by cwon              #+#    #+#             */
/*   Updated: 2024/06/02 20:56:14 by cwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	set_params(char *str, int *param, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		param[i] = str[i * 2] - '0';
		i++;
	}
}

void	set_grid(int **grid, int dim)
{
	int	i;
	int	j;

	i = 0;
	while (i < dim)
	{
		grid[i] = (int *)malloc(4 * dim);
		i++;
	}
	i = 0;
	while (i < dim)
	{
		j = 0;
		while (j < dim)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	setup(char *str, int **grid, int *param, int dim)
{
	set_grid(grid, dim);
	set_params(str, param, 4 * dim);
}
