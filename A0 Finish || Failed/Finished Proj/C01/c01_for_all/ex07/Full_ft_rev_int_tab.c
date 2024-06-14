/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:40:16 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/28 16:29:25 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i -1] = swap;
		i++;
	}
	

}

int main(void){
	int a[9] = {1,2,3,4,5,6,7,8,9};
	int rn = 0;

	ft_rev_int_tab(a, 9);

	while (rn < 9)
	{
		printf("%d" , a[rn]);
		rn++;
	}
	return (0);
}
