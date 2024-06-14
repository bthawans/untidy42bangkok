/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FULL_ft_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:12:43 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/28 17:23:15 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	s;

	s = *a;
	*a = *b;
	*b = s;
}

int main()
{   
    int x = 10;
    int y = 1000;
    printf("x = %p\n", &x);
    printf("y = %p\n", &y);

    ft_swap(&x, &y);
    printf("x = %d y = %d", x, y);
    return (0);
}