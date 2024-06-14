/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 05:20:17 by kwatthan          #+#    #+#             */
/*   Updated: 2024/06/10 13:51:13 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				*result;
	unsigned int	i;

	result = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	if (max <= min || result == NULL)
		return (0);
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	int	*test;

	test = ft_range(1, 10);
	printf("%d", test[1]);
	free(test);
}