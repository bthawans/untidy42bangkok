/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:40:00 by nkanjana          #+#    #+#             */
/*   Updated: 2024/06/13 10:59:51 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	mm;

	i = 0;
	if (min >= max)
	{
		range = 0;
		return (0);
	}
	mm = max - min;
	*range = (int *)malloc(mm * sizeof(int));
	while (min < max)
		range[0][i++] = min++;
	return (mm);
}
#include <stdio.h>
int	main(void)
{
	int	i;
	int	*n;
	int	v;

	i = 0;
	v = ft_ultimate_range(&n, 1, 19);
	printf("return = %d\n",v);
	while (i < v)
		printf("%d\n",n[i++]);
	return (0);
}