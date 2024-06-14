/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testbyme.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:32:44 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/25 22:59:24 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 1;
	while (row <= y)
	{
		if (row == 1)
		{
            col = 1;
			while (col <= x)
	        {
		        if (col == 1)
		        {
			        ft_putchar('/');
		        }
		        else if (col == x)
		        {
			        ft_putchar('\\');
		        }
		        else
		        {
			        if (col == 1 && col == '*')
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
		else if (row == y)
		{
            col = 1;
			while (col <= x)
	        {
		        if (col == 1)
		        {
			        ft_putchar('\\');
		        }
		        else if (col == x)
		        {
			        ft_putchar('/');
		        }
		        else
		        {
			        if (col == 1 && col == '*')
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
		else
		{
            col = 1;
			while (col <= x)
	        {
		        if (col == 1)
		        {
			        ft_putchar('*');
		        }
		        else if (col == x)
		        {
			        ft_putchar('*');
		        }
		        else
		        {
			        if (col != 1 && col != x)
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
		ft_putchar('\n');
        row++;
	}
}

int	main(void)
{
	rush(5, 5);
	return (0);
}