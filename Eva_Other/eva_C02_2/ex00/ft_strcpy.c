/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thayamsr <thayamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 21:18:41 by thayamsr          #+#    #+#             */
/*   Updated: 2024/05/28 19:03:06 by thayamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	lenght;

	lenght = 0;
	while (src[lenght] != '\0')
	{
		dest[lenght] = src[lenght];
		lenght++;
	}
	dest[lenght] = '\0';
	return (dest);
}

// #include <stdio.h>

// int main()
// {
// 	char help[50] = "help";
// 	char good[3] = "go";
// 	char *result;
// 	result = ft_strcpy(help,good);
// 	printf("String return is %s",result);
// }
