/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thayamsr <thayamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 20:49:33 by thayamsr          #+#    #+#             */
/*   Updated: 2024/05/28 18:56:40 by thayamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	length;

	length = 0;
	if (str[length] == '\0')
		return (1);
	while (str[length] != '\0')
	{
		if (str[length] >= 32 && str[length] <= 126)
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
// int	main()
// {
// 	char help[100] = "1234567890-=~!@#$%^&*()_+~";
// 	printf("return something = %d",ft_str_is_printable(help));
// }