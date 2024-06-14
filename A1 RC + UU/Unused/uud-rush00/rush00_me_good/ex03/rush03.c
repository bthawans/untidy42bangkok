/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 23:34:24 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/26 01:04:01 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_num(int col, int x, char cha1, char cha2)
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
			if (cha1 == 'B' && cha2 == 'B')
			{
				ft_putchar(' ');
			}
			else
			{
				ft_putchar('B');
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
		if (row == 1 || row == y)
		{
			print_num(col, x, 'A', 'C');
		}
		else
		{
			print_num(col, x, 'B', 'B');
		}
		ft_putchar('\n');
		row++;
	}
}
