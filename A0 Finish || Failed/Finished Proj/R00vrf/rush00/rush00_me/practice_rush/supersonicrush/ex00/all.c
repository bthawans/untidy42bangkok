/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:31:37 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/25 23:17:03 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	print_line(int col, int x, char cha1, char cha2)
{
	while (col <= x)
	{
		if (col == 1)
		{
			ft_putchar(cha1);
		}
		else if (col == x)
		{
			ft_putchar(cha2);
		}
		else
		{
			if (cha1 == '*' && cha2 == '*')
			{
				ft_putchar(' ');
			}
			else
			{
				ft_putchar('*');
			}
		}
		col++;
	}
}

void	rush(int x, int y)
{
	int	col;
	int	row;

	col = 1;
	row = 1;
	while (row <= y)
	{
		if (row == 1)
		{
			print_line(col, x, '/', '\\');
		}
		else if (row == y)
		{
			print_line(col, x, '\\', '/');
		}
		else
		{
			print_line(col, x, '*', '*');
		}
		ft_putchar('\n');
		row++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	rush(5, 1);
	return (0);
}
