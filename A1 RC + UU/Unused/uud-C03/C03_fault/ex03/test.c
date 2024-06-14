/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:29:25 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/04 15:30:11 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	dest_len(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int	k;

	i = 0;
	k = dest_len(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[k] = src[i];
		k++;
		i++;
	}
	dest[k] = '\0';
	return (dest);
}

int main()
{
    char a[] = "Good";
    char b[] = "LuckChuck";
    int n;
    
    n = 3;
    ft_strncat(a, b, n);
    printf("%s\n",a);
    return (0);
}
