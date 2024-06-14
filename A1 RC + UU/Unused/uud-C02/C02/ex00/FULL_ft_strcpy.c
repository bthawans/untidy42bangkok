/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FULL_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 09:27:47 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/29 20:14:25 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char d[] = "";
	char s[] = "hello";

	ft_strcpy(d, s);
	printf("%s\n", d);
	printf("%s\n", s);
	return (0);
}
