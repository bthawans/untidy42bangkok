/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsriwor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:16:23 by thsriwor          #+#    #+#             */
/*   Updated: 2024/06/03 18:51:05 by thsriwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + 48);
	}
	else
		ft_putchar((n % 10) + 48);
}
/*int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = 789;
	b = 0;
	c = -2147483648;

	ft_putnbr (a);
	ft_putnbr (b);
	ft_putnbr (c);
}*/
