/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:39:40 by sharntra          #+#    #+#             */
/*   Updated: 2024/05/28 22:24:23 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
		{
			return (0);
		}
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_str_is_uppercase("ABCDhjEFG"));
	return (0);
}