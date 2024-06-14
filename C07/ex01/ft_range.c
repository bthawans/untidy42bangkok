/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:17:16 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/12 20:09:01 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	range = (int *)malloc(sizeof(int) * (max - min));
	if (range == 0)
	{
		return (NULL);
	}
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

// int main()
// {
// 	int	*zone3;

// 	zone3 = ft_range(1, 10);
// 	int	i = 0;
// 	while (i < 10 - 1)
// 	{
// 		printf("%d", zone3[i]);
// 		i++;
// 	}
// 	free(zone3);
// }