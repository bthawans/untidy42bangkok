/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 23:54:40 by nkhuankh          #+#    #+#             */
/*   Updated: 2024/06/12 18:02:26 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	range = (int *)malloc(sizeof(int) * (max - min));
	if (!(range))
		return (NULL);
	if (min >= max)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

#include <stdio.h>

int	main(void)
{
	int	*test;

	test = ft_range(1, 10);
	int	i = 0;
	while (i < 10 -1)
	{
		printf("%d", test[i]);
		i++;
	}	
	free(test);
}
