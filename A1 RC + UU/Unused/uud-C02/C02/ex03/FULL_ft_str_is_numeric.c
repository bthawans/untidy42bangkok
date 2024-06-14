/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FULL_ft_str_is_numeric.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:54:38 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/31 02:55:28 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;
	i = 0;

	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57 )
		{
			return (0);
		}
		i++;
	}
	return (1);
}	

int main(void)
{
	char a[] = "123456";
	// char b[] = "abgddf";
	// char c[] = "";
	char st;

	st = ft_str_is_numeric(a);
	printf("%d", st);
	return (0);
}

