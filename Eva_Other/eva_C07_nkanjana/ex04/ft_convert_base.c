/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 05:37:31 by nkanjana          #+#    #+#             */
/*   Updated: 2024/06/11 23:09:23 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_atoi_base(char *str, char *base);

int	checkbase(char *base);

int	len(char *str);

int	lenght_nbr(int nbr, char *base, int l)
{
	int				base_l;
	unsigned int	nb;

	base_l = len(base);
	if (nbr < 0)
	{
		nb = nbr * -1;
		l++;
	}
	else
		nb = nbr;
	while (nb >= (unsigned)base_l)
	{
		nb /= base_l;
		l++;
	}
	l++;
	return (l);
}

void	ft_putnbr_base(int nbr, char *base, char *str)
{
	long	nb;
	int		i;
	int		l;
	int		le;

	i = 0;
	l = len(base);
	le = lenght_nbr(nbr, base, 0);
	nb = nbr;
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
		i = 1;
	}
	le--;
	while (nb >= l)
	{
		str[le] = base[nb % l];
		nb = nb / l;
		le--;
	}
	if (nb < l)
		str[i] = base[nb];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*p;
	int		i;

	if (checkbase(base_from) || checkbase(base_to))
		return (0);
	i = ft_atoi_base(nbr, base_from);
	p = (char *)malloc(sizeof(char) * (lenght_nbr(i, base_to, 0) + 1));
	if (!p)
		return (0);
	ft_putnbr_base(i, base_to, p);
	p[lenght_nbr(i, base_to, 0)] = '\0';
	return (p);
}

#include <stdio.h>
int main (int ac, char **av)
{
        (void)ac;
	   //ft_convert_base(av[1], av[2], av[3]);
        printf("%s", ft_convert_base(av[1], av[2], av[3]));
	   return (0);
}
