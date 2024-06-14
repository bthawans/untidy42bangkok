/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 12:15:25 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/09 12:24:18 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:34:20 by thsriwor          #+#    #+#             */
/*   Updated: 2024/06/09 12:13:22 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	ans;

	i = 1;
	ans = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			i = i * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ans = ans * 10 + *str - '0';
		str++;
	}
	return (ans * i);
}

int	ft_strlen(char *str)
{
	int	lens;

	lens = 0;
	while (*str != '\0')
	{
		lens++;
		str++;
	}
	return (lens);
}

int	check_error(char *base)
{
	char	temp;
	int		i;
	int		j;

	i = 0;
	while (base[i] != '\0')
	{
		if ((base[i] < 48) || (base[i] > 57 && base[i] < 65)
				|| (base [i] > 90 && base [i] < 97) || (base [i] > 122))
			return (1);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		temp = base[i];
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j++] == temp)
				return (1);
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	num;
	int				b;

	if (check_error(base))
		return;
	b = ft_strlen (base);
	if (b == 1 || b == 0)
		return; 
	if (nbr < 0)
	{
		ft_putchar('-');
		num = nbr * -1;
	}
	else
	{
		num = nbr;
	}
	if (num >= (unsigned int)b)
	{
		ft_putnbr_base(num / b, base);
	}
	ft_putchar(base[num % b]);
}

int	main()
{
	ft_putnbr_base(42, "0123456789");// Decimal
	ft_putchar('\n');
	ft_putnbr_base(-42, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(42, "01"); // Binary
	ft_putchar('\n');
	ft_putnbr_base(-42, "01");
	ft_putchar('\n');
	ft_putnbr_base(42, "0123456789ABCDEF"); //Hexagon
	ft_putchar('\n');
	ft_putnbr_base(-42, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(42, "01234567"); //Octagon
	ft_putchar('\n');
	ft_putnbr_base(-42, "poreygif"); //???
	ft_putchar('\n');
	return(0);
}