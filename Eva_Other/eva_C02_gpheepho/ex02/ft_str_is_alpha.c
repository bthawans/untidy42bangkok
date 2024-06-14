/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpheepho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:15:56 by gpheepho          #+#    #+#             */
/*   Updated: 2024/06/06 13:15:59 by gpheepho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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
// int main(void)
// {
//     char x[] = "g1tpu2h";
//     char y[] = "Gorggeous";
//     int out;
//     int out1;

//     out = ft_str_is_alpha(x);
//     out1 = ft_str_is_alpha(y);
//     printf("out = %d\n",out);
//     printf("out1 = %d",out1);
// }
