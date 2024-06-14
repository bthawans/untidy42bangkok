/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FULL_ft_ultimate_ft.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:41:45 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/28 23:08:27 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
	printf("%d\n", *********nbr);
}

int main()
{
	int a = 100;
    int *nbr1, **nbr2, ***nbr3, ****nbr4, *****nbr5, ******nbr6, *******nbr7, ********nbr8;

    nbr1 = &a;
    nbr2 = &nbr1;
    nbr3 = &nbr2;
    nbr4 = &nbr3;
    nbr5 = &nbr4;
    nbr6 = &nbr5;
    nbr7 = &nbr6;
    nbr8 = &nbr7;
    // printf("%d\n", a);
	ft_ultimate_ft(&nbr8);
    // printf("%d\n", a);
}