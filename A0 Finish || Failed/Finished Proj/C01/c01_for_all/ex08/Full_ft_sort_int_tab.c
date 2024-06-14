/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Full_ft_sort_int_tab.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:37:43 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/28 23:27:30 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int swap;
	
	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

int main(void)
{
	int a[9] = {2, 1, 15, 7, 20, 3, 0, 79, 1};

	ft_sort_int_tab(a, 9);

	int rn = 0;
	while (rn < 9)
	{
		printf("%d, " , a[rn]);
		rn++;
	}

	return (0);
}