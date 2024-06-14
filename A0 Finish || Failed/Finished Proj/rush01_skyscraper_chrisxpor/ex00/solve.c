/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwon <cwon@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 21:00:01 by cwon              #+#    #+#             */
/*   Updated: 2024/06/02 22:12:44 by cwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		visible(int **grid, int *parameters, int *row_col, int *n_dim);
void	solve(int **grid, int *param, int dim);
int		filled_grid(int **grid, int dim);

int	possible(int **grid, int *parameters, int *row_col, int *n_dim)
{
	int	i;

	i = 0;
	while (i < n_dim[1])
	{
		if (grid[row_col[0]][i] == n_dim[0] || grid[i][row_col[1]] == n_dim[0])
			return (0);
		i++;
	}
	if (!visible(grid, parameters, row_col, n_dim))
		return (0);
	return (1);
}

void	backtrack(int **grid, int *param, int *row_col, int *n_dim)
{
	while (++row_col[0] < n_dim[1])
	{
		row_col[1] = -1;
		while (++row_col[1] < n_dim[1])
		{
			if (!grid[row_col[0]][row_col[1]])
			{
				n_dim[0] = 1;
				while (n_dim[0] <= n_dim[1])
				{
					if (possible(grid, param, row_col, n_dim))
					{
						grid[row_col[0]][row_col[1]] = n_dim[0];
						solve(grid, param, n_dim[1]);
						if (filled_grid(grid, n_dim[1]))
							return ;
						grid[row_col[0]][row_col[1]] = 0;
					}
					n_dim[0]++;
				}
				return ;
			}
		}
	}
}

void	solve(int **grid, int *param, int dim)
{
	int	row_col[2];
	int	n_dim[2];

	n_dim[1] = dim;
	row_col[0] = -1;
	backtrack(grid, param, row_col, n_dim);
}
