/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:19:29 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/04 20:46:47 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j+1] == '\0')
			{
				return (str + i);
			}
		}
		i++;
	}
	return (0);
}

int	main ()
{
	char	full[] = "No Food or Drink on Computer Table";
	char	keyword[] = "d or";
	char	*result;

	result = ft_strstr(full, keyword);
	printf("%s\n", result);
	return (0);
}