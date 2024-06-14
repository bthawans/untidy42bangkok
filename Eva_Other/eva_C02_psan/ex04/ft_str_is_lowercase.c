/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:39:37 by sharntra          #+#    #+#             */
/*   Updated: 2024/05/28 22:22:58 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	printf("%d", ft_str_is_lowercase("absWEDg"));
	return (0);
}