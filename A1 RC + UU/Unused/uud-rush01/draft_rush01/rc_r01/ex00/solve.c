/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwon <cwon@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:12:52 by cwon              #+#    #+#             */
/*   Updated: 2024/06/02 16:25:39 by cwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


int visible(int grid[4][4], int *parameters, int y, int x, int n);
void	print_grid(int grid[4][4]);

int is_filled(int grid[4][4])
{
	int i;
	int j;

	i = 0;
	while(i < 4)
	{
		j = 0;
		while(j < 4)
		{
			if(!grid[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	possible(int grid[4][4], int *parameters, int y, int x, int n)
{
	int i;

	i = 0;
	while(i < 4)
	{
		if (grid[y][i] == n || grid[i][x] == n)
			return (0);
		i++;
	}
	if(!visible(grid, parameters, y, x, n))
		return (0);
	return (1);
}

void	solve(int grid[4][4], int *parameters)
{
	int	y;
	int x;
	int n;

	y = 0;
	while(y < 4)
	{
		x = 0;
		while(x < 4)
		{
			if(!grid[y][x])
			{
				n = 1;
				while(n < 5)
				{
					if(possible(grid, parameters, y, x, n))
					{
						grid[y][x] = n;
						solve(grid, parameters);
						if(is_filled(grid))
							return;
						grid[y][x] = 0;
					}
					n++;
				}
				return;
			}
			x++;
		}
		y++;
	}
}
