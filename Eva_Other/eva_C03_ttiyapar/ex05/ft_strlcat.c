/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttiyapar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:40:22 by ttiyapar          #+#    #+#             */
/*   Updated: 2024/06/05 21:13:09 by ttiyapar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_size;

	i = 0;
	j = 0;
	src_size = len(src);
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && (i + j + 1) < size)
	{
		dest [i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	return (i + src_size);
}
/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "asbcd";
	char	dest[] = "sdasdasd";

	printf("%u", ft_strlcat(dest, src, 4));
}*/
