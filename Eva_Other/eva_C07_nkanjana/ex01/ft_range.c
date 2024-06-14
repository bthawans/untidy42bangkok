/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanjana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:51:50 by nkanjana          #+#    #+#             */
/*   Updated: 2024/06/06 15:11:04 by nkanjana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*n;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	n = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
		n[i++] = min++;
	return (n);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int i = 0;
// 	int *n = ft_range(1, 13);
// 	while (i < (13 - 1))
// 		printf("%d\n",n[i++]);
// 	return (0);
// }
