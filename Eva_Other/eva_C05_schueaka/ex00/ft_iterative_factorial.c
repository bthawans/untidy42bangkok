/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schueaka <schueaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:41:21 by schueaka          #+#    #+#             */
/*   Updated: 2024/06/07 22:11:57 by schueaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
		return (1);
	num = 1;
	while (nb > 0)
	{
		num *= nb;
		nb -= 1;
	}
	return (num);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d",ft_iterative_factorial(0));
// }
