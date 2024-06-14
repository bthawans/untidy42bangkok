/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbutnamp <nbutnamp@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-26 05:32:13 by nbutnamp          #+#    #+#             */
/*   Updated: 2024-05-26 05:32:13 by nbutnamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	print_line(int x, int y, int row, int col)
{
	if ((row == 1 && col == 1) || (col == x && row == 1))
	{
		ft_putchar('A');
	}
	else if ((row == 1 && (col != 1 && col != x)))
	{
		ft_putchar('B');
	}
	else if ((row == y && (col == 1 || col == x)))
	{
		ft_putchar('C');
	}
	else if ((col == 1 || col == x) && (row != 1 && row != y))
	{
		ft_putchar('B');
	}
	else if ((row == y && (col != 1 && col != x)))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	row ;
	int	col ;

	row = 1 ;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			print_line(x, y, row, col);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
