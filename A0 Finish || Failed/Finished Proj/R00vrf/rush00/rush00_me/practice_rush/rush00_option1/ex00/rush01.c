/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: precharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:09:22 by precharo          #+#    #+#             */
/*   Updated: 2024/05/25 13:40:07 by precharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	print_char(int row, int col, int x, int y)
{
	if ((col == 1 && row == 1) || (col == x && row == y))
	{
		ft_putchar('/');
	}
	else if ((col == x && row == 1) || (col == 1 && row == y))
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
