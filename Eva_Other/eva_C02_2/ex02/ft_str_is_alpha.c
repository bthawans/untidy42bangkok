/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thayamsr <thayamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:42:38 by thayamsr          #+#    #+#             */
/*   Updated: 2024/05/28 18:54:20 by thayamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	length;

	length = 0;
	if (str[length] == '\0')
		return (1);
	while (str[length] != '\0')
	{
		if (str[length] >= 65 && str[length] <= 90)
		{
			length++;
			continue ;
		}
		else if (str[length] >= 97 && str[length] <= 122)
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
// 	char help[100] = "KDSAODJOIsa0dasdoqw";

// 	printf("return something = %d \n",ft_str_is_alpha(help));
// }
