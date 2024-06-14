/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thayamsr <thayamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 22:39:33 by thayamsr          #+#    #+#             */
/*   Updated: 2024/05/28 18:54:48 by thayamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	length;

	length = 0;
	if (str[length] == '\0')
		return (1);
	while (str[length] != '\0')
	{
		if (str[length] >= '0' && str[length] <= '9')
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
// 	char help[100] = "utr";
// 	printf("return something = %d \n",ft_str_is_numeric(help));
// }