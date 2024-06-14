/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpheepho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:21:43 by gpheepho          #+#    #+#             */
/*   Updated: 2024/06/06 13:21:44 by gpheepho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
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
//     char input[] = "AHY!~T";
//     char input1[] = " ";
// 	int out;
//     int out2;

// 	out = ft_str_is_printable(input);
//     out2 = ft_str_is_printable(input1);

// 	printf("%d\n",out);
//     printf("%d",out2);
// }
