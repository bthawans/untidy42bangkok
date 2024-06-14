/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alltest01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 15:00:04 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/25 15:32:47 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_char(int row, int col, int x, int y)
{
	if ((col == 1 && row == 1) || (col == x && row == y))
	{
		ft_putchar('/');
	}
	else if ((row == 1 && col == x) || (col == 1 && row == y))
	{
		ft_putchar('\\');
	}
	else if (col != 1 && col != x && row != 1 && row != y)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('*');
	}
}

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			print_char(row, col, x, y);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}


int	main(void)
{
	// rush(5, 3);
	// write(1,"\n",1);
	// rush(5, 1);
	// write(1,"\n",1);
	// rush(1, 1);
	// write(1,"\n",1);
	rush(1, 1);
	// write(1,"\n",1);
	// rush(4, 4);
	return (0);
}