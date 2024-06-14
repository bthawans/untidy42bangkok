/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:50:02 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/26 16:01:17 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	printf("%d \n", *nbr);
	printf("%p \n", nbr);
	printf("%p \n", &nbr);
	*nbr = 42;
	printf("%d \n", *nbr);

}

int main()
{
	int a = 100;
	printf("a = %p \n", &a);
	ft_ft(&a);
	return (0);
}