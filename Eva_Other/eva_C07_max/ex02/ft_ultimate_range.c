/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 00:48:10 by nkhuankh          #+#    #+#             */
/*   Updated: 2024/06/14 17:51:07 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (-1);
	else
	{
		i = -1;
		while (++i < max - min)
		{
			tab[i] = min + i;
			*range = tab;
		}
		return (i);
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*range1;
// 	int	**range2;

// 	range2 = &range1;
// 	printf("%d", ft_ultimate_range(range2, 1, 10));
// }

