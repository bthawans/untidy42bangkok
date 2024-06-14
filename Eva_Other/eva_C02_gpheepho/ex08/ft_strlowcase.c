/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpheepho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:22:33 by gpheepho          #+#    #+#             */
/*   Updated: 2024/06/06 13:22:35 by gpheepho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
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
//     ft_strlowcase(input);
//     ft_strlowcase(input1);
// 	printf("%s\n", input);
//     printf("%s", input1);
// }
