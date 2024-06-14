/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tketwat <tketwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:53:53 by tketwat           #+#    #+#             */
/*   Updated: 2024/05/28 18:44:42 by tketwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex_convert(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (c / 16 > 0)
	{
		ft_putchar(hex[c / 16]);
		ft_putchar(hex[c % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hex[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			ft_hex_convert(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
