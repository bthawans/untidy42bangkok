/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush011.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: precharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:09:22 by precharo          #+#    #+#             */
/*   Updated: 2024/05/25 19:13:47 by precharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

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
