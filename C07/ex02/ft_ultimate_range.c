/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:13:32 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/14 18:54:27 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ultra;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ultra = (int *)malloc(sizeof(int) * (max - min));
	if (ultra == NULL)
	{
		return (-1);
	}
	else
	{
		i = 0;
		while (i < max - min)
		{
			ultra[i] = min + i;
			*range = ultra;
			i++;
		}
		return (i);
	}
}

// int main()
// {
//     int *r;

//     printf("%d", ft_ultimate_range(&r, 1, 5));
// }