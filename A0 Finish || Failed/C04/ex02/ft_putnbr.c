/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:27:15 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/09 14:01:18 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include <unistd.h>

void	put_char(char lt)
{
	write(1, &lt, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		put_char('-');
		put_char('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		put_char('-');
		nb = nb * (-1);
	}
	if ((nb / 10) > 0)
	{
		ft_putnbr(nb / 10);
		put_char((nb % 10) + 48);
	}
	else
	{
		put_char((nb % 10) + 48);
	}
}

int main ()
{
    int a;
	a = -2147483648;
	// a = -1;
    ft_putnbr(a);
    return(0);
}