/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpheepho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:21:21 by gpheepho          #+#    #+#             */
/*   Updated: 2024/06/06 13:21:23 by gpheepho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int main(void)
// {
//     char input[] = "AHYT";
//     char input1[] = "g";
// 	int out;
//     int out2;

// 	out = ft_str_is_uppercase(input);
//     out2 = ft_str_is_uppercase(input1);

// 	printf("%d\n",out);
//     printf("%d",out2);
// }
