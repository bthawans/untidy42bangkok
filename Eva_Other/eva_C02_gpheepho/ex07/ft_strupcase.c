/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpheepho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:22:01 by gpheepho          #+#    #+#             */
/*   Updated: 2024/06/06 13:22:02 by gpheepho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int main(void)
// {
//     char input[] = "ad!~T";
//     char input1[] = "myMoney is bROke";

//     ft_strupcase(input);
//     ft_strupcase(input1);

// 	printf("%s\n", input);
//     printf("%s", input1);
// }
