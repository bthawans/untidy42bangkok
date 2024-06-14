/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thayamsr <thayamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 14:41:05 by cwon              #+#    #+#             */
/*   Updated: 2024/06/02 14:03:01 by thayamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	set_parameters(char *str, int *parameters);
void	set_grid(int grid[4][4]);
void	solve(int grid[4][4], int *parameters);
void	print_grid(int grid[4][4]);
int		is_good_input(char *str);

int	main(int argc, char **argv)
{
	int	parameters[16];
	int	grid[4][4];

	if (argc == 2 && is_good_input(argv[1]))
	{
		set_parameters(argv[1], parameters);
		set_grid(grid);
		solve(grid, parameters);
		print_grid(grid);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
