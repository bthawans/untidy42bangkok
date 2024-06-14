/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:36:11 by nkanjana          #+#    #+#             */
/*   Updated: 2024/06/13 15:33:47 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*clen(int size, char **strs, char *sep)
{
	int		c;
	int		i;
	int		j;
	char	*p;

	i = 0;
	c = 0;
	c += len(sep) * (size - 1);
	while (i < size)
	{
		c += len(strs[i]);
		i++;
	}
	if (size <= 0)
		c = 1;
	p = (char *)malloc((sizeof(char) * c) + 1);
	if (!p)
		return (0);
	return (p);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		n;
	char	*p;

	i = 0;
	n = 0;
	p = clen(size, strs, sep);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			p[n++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			p[n++] = sep[j++];
		i++;
	}
	p[n] = '\0';
	return (p);
}

#include <stdio.h>
int	main(void)
{
	int	i;
	char	**a;
	char *b;
	char *d;

	a = (char **)malloc(3 * sizeof(char *));
	a[0] = (char *)malloc(sizeof(char) * 7 + 1);
	a[1] = (char *)malloc(sizeof(char) * 4 + 1);
	a[2] = (char *)malloc(sizeof(char) * 3 + 1);
	a[0] = "thunder";
	a[1] = "Four";
	a[2] = "Pom";
	b = "-0-";
	d = ft_strjoin(3, a, b);

	printf("%s", d);
	return (0);
}