/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwon <cwon@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 20:30:54 by cwon              #+#    #+#             */
/*   Updated: 2024/06/02 21:25:58 by cwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		is_good_input(char *str);
void	setup(char *str, int **grid, int *param, int dim);
void	solve(int **grid, int *param, int dim);
void	verify_solution(int **grid, int dim);
void	release_memory(int **grid, int *param, int dim);

// sizeof(int) = 4
// sizeof(int*) = 8
void	rush(int argc, char **argv)
{
	int	dim;
	int	*param;
	int	**grid;

	if (argc == 2)
	{
		dim = is_good_input(argv[1]);
		if (dim)
		{
			grid = (int **)malloc(8 * dim);
			param = (int *)malloc(4 * (4 * dim));
			setup(argv[1], grid, param, dim);
			solve(grid, param, dim);
			verify_solution(grid, dim);
			release_memory(grid, param, dim);
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
}
