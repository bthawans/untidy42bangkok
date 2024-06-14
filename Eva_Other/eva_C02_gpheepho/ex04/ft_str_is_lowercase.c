/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpheepho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:20:59 by gpheepho          #+#    #+#             */
/*   Updated: 2024/06/06 13:21:00 by gpheepho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z' )
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
//     char input[] = "adrfrig";
//     char input1[] = "RUTOJji12";
// 	int out;
//     int out2;

// 	out = ft_str_is_lowercase(input);
//     out2 = ft_str_is_lowercase(input1);

// 	printf("%d\n",out);
//     printf("in : %d",out2);
// }
