/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rathonka <rathonka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 00:28:40 by rathonka          #+#    #+#             */
/*   Updated: 2024/06/04 17:06:14 by rathonka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i])
			if (base[i] == '+' || base[i] == '-')
				return (0);
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while ((base[i] != base[j]) && base[j])
			j++;
		if (base[i] == base[j])
			return (0);
		i++;
	}
	return (1);
}

int	check_base(char c, char *base)
{
	int	i;

	i = 0;
	while (c != base[i] && base[i])
		i++;
	if (base[i] == '\0')
		return (-1);
	return (i);
}

int	conv(char *str, int i, char *base)
{
	int	sb;
	int	len;

	sb = 0;
	len = ft_strlen(base);
	while (str[i] != '\0')
	{
		if (check_base(str[i], base) == -1)
			break ;
		sb = (sb * len) + check_base(str[i], base);
		i++;
	}
	return (sb);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	result;
	int	neg;
	int	sign;

	i = 0;
	neg = 0;
	sign = 1;
	if (str == 0 || base == 0)
		return (0);
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	if (neg % 2)
		sign = -1;
	if (check_valid(base) == 0)
		return (0);
	result = conv(str, i, base);
	return (sign * result);
}
