/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thayamsr <thayamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 20:56:49 by thayamsr          #+#    #+#             */
/*   Updated: 2024/05/28 18:57:01 by thayamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		if (str[lenght] >= 97 && str[lenght] <= 122)
		{
			str[lenght] = str[lenght] -32;
		}
		lenght++;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char helpme[100] = "abdefghijkl WEDASDAFG@314131mnopqrstuvwxyz";
// 	printf("It should print this = %s",ft_strupcase(helpme));
// }