/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:28:22 by paboonro          #+#    #+#             */
/*   Updated: 2024/05/30 16:56:06 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *a)
{
	unsigned int	i;

	i = 0;
	while (a[i] != 0)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_source;

	i = 0;
	len_source = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] != 0 && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (len_source);
}

#include <stdio.h>

int main(){
	char s[20];
	ft_strlcpy(s, "Petch", 3);
	printf("%s\n", s);
	ft_strlcpy(s, "Petch", 2);
	printf("%s\n", s);
}
