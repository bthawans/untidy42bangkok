/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanjana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:48:54 by nkanjana          #+#    #+#             */
/*   Updated: 2024/06/04 18:18:57 by nkanjana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	mupl(char *c, int *pti)
{
	int	i;
	int	m;

	i = 0;
	m = 1;
	while (c[i] == ' ' || (c[i] >= 9 && c[i] <= 13))
		++i;
	while (c[i] == '-' || c[i] == '+')
	{
		if (c[i] == '-')
			m = m * -1;
		++i;
	}
	*pti = i;
	return (m);
}

int	checkbase(char *base)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	l = len(base);
	if (l == 0 || l == 1)
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == 43 || base[i] == 45)
			return (1);
		j = i + 1;
		while (j < l)
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	checkna(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (str == base[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	n;
	int	c;
	int	j;

	n = 0;
	c = 0;
	mupl(str, &i);
	while (str[i] != '\0' && checkna(str[i], base) == 0 && checkbase(base) == 0)
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (str[i] == base[j])
				c = j;
			j++;
		}
		n = n * len(base);
		n = n + c;
		i++;
	}
	return (n * mupl(str, &i));
}
