/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thayamsr <thayamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:17:26 by thayamsr          #+#    #+#             */
/*   Updated: 2024/05/28 18:53:43 by thayamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	lenght;

	lenght = 0;
	while (lenght <= n - 1 && src[lenght] != '\0')
	{
		dest[lenght] = src[lenght];
		lenght++;
	}
	while (lenght <= n - 1)
	{
		dest[lenght] = '\0';
		lenght++;
	}
	dest[lenght] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char help[5] = "Good";
// 	char good[50] = "No";

// 	printf("String return is %s \n",strncpy(help,good,2));
// 	printf("String return is %s",strncpy(help,good,2));
// }