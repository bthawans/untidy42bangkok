/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rathonka <rathonka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:30:36 by rathonka          #+#    #+#             */
/*   Updated: 2024/06/04 20:38:15 by rathonka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		if (base[i] <= ' ' || base[i] >= '~')
			return (0);
		i++;
	}
	if (i <= 1)
	{
		return (0);
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;
	int				size;

	if (check_base(base))
	{
		size = 0;
		while (base[size])
			size++;
		if (nbr < 0)
		{
			ft_putchar('-');
			n = -nbr;
		}
		else
			n = nbr;
		if (n >= (unsigned int)size)
			ft_putnbr_base(n / size, base);
		ft_putchar(base[n % size]);
	}
}
