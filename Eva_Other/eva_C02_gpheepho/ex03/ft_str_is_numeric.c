/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpheepho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:16:22 by gpheepho          #+#    #+#             */
/*   Updated: 2024/06/06 13:16:23 by gpheepho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9' )
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char input[] = "12345";
//     char input1[] = "1g234y";
// 	int out;
//     int out2;

// 	out = ft_str_is_numeric(input);
//     out2 = ft_str_is_numeric(input1);

// 	printf("%d\n",out);
//     printf("%d",out2);
// }
