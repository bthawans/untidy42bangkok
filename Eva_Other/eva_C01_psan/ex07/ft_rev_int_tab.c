/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwongsen <vwongsen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:39:23 by vwongsen          #+#    #+#             */
/*   Updated: 2024/06/11 11:44:45 by vwongsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;

	while (size > 1)
	{
		temp = *tab;
		*tab = *(tab + size -1);
		*(tab + size -1) = temp;
		size = (size - 2);
		tab = tab +1;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	numbers[] = {1,2,3,4,5};
	int i = 0;

	ft_rev_int_tab(numbers, 5);
	while(i < 5)
	{
		printf("%d" ,numbers[i]);
		i++;
	}	
}
*/