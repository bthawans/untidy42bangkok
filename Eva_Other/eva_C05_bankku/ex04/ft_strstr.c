/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 22:02:46 by thacharo          #+#    #+#             */
/*   Updated: 2024/06/04 18:05:41 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

char	*ft_strstr(char *str, char *tofind)
{
	int	i;
	int	count;

	i = 0;
	if (to_find[0] == '\0')
	{

	}
	while (str[i] != '\0')
	{
		count = 0;
		while (str[i] == tofind[count])
		{
			count++;
			i++;
			if (tofind[count] == '\0')
			{
				return (&str[i - count]);
			}
		}
		i++;
	}
	return (0);
}

#include <stdio.h>

int main(void)
{
	char	fullword[] = "The Dra Dragonball";
	char	keyword[] = "rag";
	char	*answer;

	answer = ft_strstr(fullword, keyword);
	printf("%s\n", answer);
	return (0);
}