/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thayamsr <thayamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 23:10:38 by thayamsr          #+#    #+#             */
/*   Updated: 2024/05/28 18:57:23 by thayamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		if (str[lenght] >= 65 && str[lenght] <= 90)
		{
			str[lenght] = str[lenght] + 32;
		}
		lenght++;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char helpme[100] = "abdefghijkl WEDASDAFG@314131mnopqrstuvwxyz";
// 	printf("It should print this = %s",ft_strlowcase(helpme));
// }