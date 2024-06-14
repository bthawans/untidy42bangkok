/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_output.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwon <cwon@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 14:41:10 by cwon              #+#    #+#             */
/*   Updated: 2024/06/02 00:51:45 by cwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_good_input(char *str)
{
	int	i;

	i = 0;
	if (str[31] != '\0')
		return (0);
	while (i < 31)
	{
		if (i % 2)
		{
			if (str[i] != ' ')
				return (0);
		}
		else
		{
			if (str[i] < '1' || str[i] > '4')
				return (0);
		}
		i++;
	}
	return (1);
}

void	set_parameters(char *str, int *parameters)
{
	int	i;

	i = 0;
	while (i < 31)
	{
		parameters[i / 2] = str[i] - '0';
		i += 2;
	}
}

void	set_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	print_grid(int grid[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			if (j == 3)
				write(1, "\n", 1);
			else
				write(1, " ", 1);
			j++;
		}
		i++;
	}
}
