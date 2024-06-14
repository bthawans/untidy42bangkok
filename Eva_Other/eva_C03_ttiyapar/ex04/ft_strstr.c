/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttiyapar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 14:42:52 by ttiyapar          #+#    #+#             */
/*   Updated: 2024/06/04 12:09:44 by ttiyapar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			while (to_find[j] != '\0' && to_find[j] == str[i + j])
			{
				if (to_find[j + 1] == '\0')
				{
					return (str + i);
				}
				j++;
			}
			j = 0;
		}
		i++;
	}
	if (to_find[0] == '\0')
		return (str);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "asdcat";
	char	to_find[] = "";
	
	printf("%s", ft_strstr(str,to_find));
}*/	
