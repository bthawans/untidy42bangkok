/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thayamsr <thayamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 18:30:04 by thayamsr          #+#    #+#             */
/*   Updated: 2024/05/28 18:56:18 by thayamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	lenght;

	lenght = 0;
	if (str[lenght] == '\0')
		return (1);
	while (str[lenght] != '\0')
	{
		if (str[lenght] >= 'A' && str[lenght] <= 'Z')
		{
			lenght++;
			continue ;
		}
		else
		{
			return (0);
		}
		lenght++;
	}
	return (1);
}

// #include <stdio.h>
// int main()
// {
// 	char help[100] = "ZXCVBNMASDFGHJKLQWERTYUIOP";
// 	printf("return something = %d \n",ft_str_is_uppercase(help));
// }