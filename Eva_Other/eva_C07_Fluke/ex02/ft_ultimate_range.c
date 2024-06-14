/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwatthan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 06:28:04 by kwatthan          #+#    #+#             */
/*   Updated: 2024/06/07 17:59:07 by kwatthan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*num;
	int	i;

	i = 0;
	num = (int *)malloc(sizeof(int *) * (max - min));
	if (num == NULL)
		return (-1);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	while (min < max)
	{
		num[i] = min;
		min++;
		i++;
	}
	*range = num;
	return (i);
}
