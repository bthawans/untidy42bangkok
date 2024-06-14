/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thayamsr <thayamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 22:50:19 by thayamsr          #+#    #+#             */
/*   Updated: 2024/05/28 18:55:14 by thayamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	length;

	length = 0;
	if (str[length] == '\0')
		return (1);
	while (str[length] != '\0')
	{
		if (str[length] >= 'a' && str[length] <= 'z')
		{
			length++;
			continue ;
		}
		else
		{
			return (0);
		}
		length++;
	}
	return (1);
}

// #include <stdio.h>

// int main()
// {
// 	char help[100] = "zxcvbnmasdfghjklqwertyuiop";
// 	printf("return something = %d \n",ft_str_is_lowercase(help));
// }