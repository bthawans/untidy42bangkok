/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:30:19 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/09 12:48:21 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_check_error(char *chkbase)
{
	int	i;

	i = 0;
	while (chkbase[i] != '\0')
	{
		if ((chkbase[i] < 48) || (chkbase[i] > 57 && chkbase[i] < 65)
			|| (chkbase[i] > 90 && chkbase[i] < 97) || (chkbase[i] > 122))
		{
			return (1);
		}
		i++;
	}
	if (i <= 1)
	{
		return (1);
	}
	return (0);
}

int	ft_count_base(char *str)
{
	int	cl;

	cl = 0;
	while (str[cl] != '\0')
	{
		cl++;
	}
	return (cl);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	inpnum;
	unsigned int	len_base;

	if (ft_check_error(base))
		return ;
	len_base = ft_count_base(base);
	if (len_base == 0 || len_base == 1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		inpnum = (nbr * (-1));
	}
	else
	{
		inpnum = nbr;
	}
	if (inpnum >= len_base)
	{
		ft_putnbr_base(inpnum / len_base, base);
	}
	ft_putchar(base[inpnum % len_base]);
}

// int	main()
// {
// 	ft_putnbr_base(42, "01"); // Binary
// 	ft_putchar('\n');
// 	ft_putnbr_base(-42, "01"); // Binary
// 	ft_putchar('\n');
// 	ft_putnbr_base(42, "01234567"); // Octagon
// 	ft_putchar('\n');
// 	ft_putnbr_base(-42, "01234567"); // Octagon
// 	ft_putchar('\n');
// 	ft_putnbr_base(42, "0123456789");// Decimal
// 	ft_putchar('\n');
// 	ft_putnbr_base(-42, "0123456789");// Decimal
// 	ft_putchar('\n');
// 	ft_putnbr_base(42, "0123456789ABCDEF"); // Hexagon
// 	ft_putchar('\n');
// 	ft_putnbr_base(-42, "0123456789ABCDEF"); // Hexagon
// 	ft_putchar('\n');
// 	ft_putnbr_base(42, "so"); // Binary
// 	ft_putchar('\n');
// 	ft_putnbr_base(42, "southern"); // Octagon
// 	ft_putchar('\n'); 
// 	ft_putnbr_base(42, "southernst"); // Decimal
// 	ft_putchar('\n');
// 	ft_putnbr_base(42, "southernstindray"); // Hexagon
// 	ft_putchar('\n');
// }