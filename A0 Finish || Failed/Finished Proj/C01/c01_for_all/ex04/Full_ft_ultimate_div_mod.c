/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Full_ft_ultimate_div_mod.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 21:45:23 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/28 00:26:14 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}
}

int main()
{
	int x;
	int y;

	x = 51;
	y = 10;
	
	ft_ultimate_div_mod(&x, &y);
	printf("a = %d b = %d", x, y);
	return(0);
}