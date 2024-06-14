/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FULL_ft_str_is_uppercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:55:14 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/29 19:07:55 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	char a[] = "AVB";
	st = ft_str_is_uppercase(a);
	printf("%d", st);
	return(0);
}