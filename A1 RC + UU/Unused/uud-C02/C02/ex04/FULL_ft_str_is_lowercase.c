/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FULL_ft_str_is_lowercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:45:30 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/29 17:51:37 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main()
{
	int st;
	char a[] = "aSFb";
	st = ft_str_is_alpha(a);
	printf("%d", st);
	return(0);
}