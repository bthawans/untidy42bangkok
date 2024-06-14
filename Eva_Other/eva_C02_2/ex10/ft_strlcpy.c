/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thayamsr <thayamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:50:23 by thayamsr          #+#    #+#             */
/*   Updated: 2024/05/28 19:00:51 by thayamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_lenght;
	unsigned int	lenght;

	lenght = 0;
	src_lenght = 0;
	while (src[src_lenght] != '\0')
	{
		src_lenght++;
	}
	if (src_lenght == 0)
	{
		return (src_lenght);
	}
	while (lenght <= size - 1 && src[lenght] != '\0')
	{
		dest[lenght] = src[lenght];
		lenght++;
	}
	dest[lenght] = '\0';
	return (src_lenght);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	copyto[50] = "good";
// 	char	sourcehere[3] = "12";

// 	printf("%ld \n",strlen(sourcehere));
// 	printf("The lenght of the src is %d \n",ft_strlcpy(copyto,sourcehere,3));
// 	printf("copy to is %s",copyto);
// }
