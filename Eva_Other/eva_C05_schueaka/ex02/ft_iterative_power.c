/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schueaka <schueaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:42:39 by schueaka          #+#    #+#             */
/*   Updated: 2024/06/07 22:12:04 by schueaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power >= 1)
	{
		num = num * nb;
		power--;
	}
	return (num);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d",ft_iterative_power(0,0));
// }
