/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:04:44 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/06 22:19:48 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	// printf("%d\n", *nbr);
	// printf("%p\n", &nbr);
	*nbr = 42;
	printf("%d\n", *nbr);
	// printf("%p\n", &nbr);
}

int main()
{
	int a = 100;
	int *n= &a;
	printf("%d\n", a);
	printf("%p\n", n);
	ft_ft(n);
	printf("9 = %d\n", a);
	printf("10 =%p\n", &a);
}