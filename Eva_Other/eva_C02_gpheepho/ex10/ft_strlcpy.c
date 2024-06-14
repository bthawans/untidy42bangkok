/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpheepho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:23:08 by gpheepho          #+#    #+#             */
/*   Updated: 2024/06/06 13:23:09 by gpheepho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[i] != '\0')
	{
		i++;
		count++;
	}
	if (size < 1)
	{
		return (count);
	}
	i = 0;
	while ((src[i] != '\0') && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}

// #include <stdio.h>

// int main(void)
// {
//     unsigned int ssize = 8;
//     char s[] = "toosweet";
//     char d[] = "";
//     int a;

//     a = ft_strlcpy(d,s,ssize);
//     printf("%d\n",a);
//     printf("%s",d);
// }
