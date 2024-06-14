/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility_loc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:49:57 by thayamsr          #+#    #+#             */
/*   Updated: 2024/06/02 12:47:15 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_visibility_left_to_right(int *grid[], int gs)
{
	int	y;
	int	count;
	int	max_height;
	int	x;

	y = 1;
	while (y <= gs)
	{
		count = 0;
		max_height = 0;
		x = 1;
		while (x <= gs)
		{
			if (grid[y][x] > max_height)
			{
				count++;
				max_height = grid[y][x];
			}
			x++;
		}
		if (grid[y][0] != 0 && count != grid[y][0])
			return (0);
		y++;
	}
	return (1);
}

int	check_visibility_right_to_left(int *grid[], int gs)
{
	int	y;
	int	count;  
	int	max_height;
	int	x;

	y = 1;
	while (y <= gs)
	{
		count = 0;
		max_height = 0;
		x = gs;
		while (x >= 1)
		{
			if (grid[y][x] > max_height)
			{
				count++;
				max_height = grid[y][x];
			}
			x--;
		}
		if (grid[y][gs + 1] != 0 && count != grid[y][gs + 1])
			return (0);
		y++;
	}
	return (1);
}

int	check_visibility_top_to_bottom(int *grid[], int gs)
{
	int	y;
	int	count;
	int	max_height;
	int	x;

	x = 1;
	while (x <= gs)
	{
		count = 0;
		max_height = 0;
		y = 1;
		while (y <= gs)
		{
			if (grid[y][x] > max_height)
			{
				count++;
				max_height = grid[y][x];
			}
			y++;
		}
		if (grid[0][x] != 0 && count != grid[0][x])
			return (0);
		x++;
	}
	return (1);
}

int	check_visibility_bottom_to_top(int *grid[], int gs)
{
	int	y;
	int	count;
	int	max_height;
	int	x;

	x = 1;
	while (x >= gs)
	{
		count = 0;
		max_height = 0;
		y = gs;
		while (x <= gs)
		{
			if (grid[y][x] > max_height)
			{
				count++;
				max_height = grid[y][x];
			}
			y--;
		}
		if (grid[gs + 1][x] != 0 && count != grid[gs + 1][x])
			return (0);
		x++;
	}
	return (1);
}
