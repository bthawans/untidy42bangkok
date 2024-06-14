/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:08:38 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/08 18:16:54 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	j = 0;
	if (size <= i)
	{
		return (size + ft_strlen(src));
	}
	while (src[j] != '\0' && ((i + 1) < size))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i + ft_strlen(&src[j]));
}

// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>

// int main(void)
// {
//     char a[] = "Good";
//     char b[] = "LuckChuck";

//     printf("%d\n", ft_strlcat(a, b, 1));
//     printf("%s", a);
//     return (0);
// }