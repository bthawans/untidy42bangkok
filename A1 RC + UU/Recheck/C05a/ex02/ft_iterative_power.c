/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 09:31:40 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/09 16:13:54 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > i)
	{
		result = result * nb;
		i++;
	}
	return (result);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("%d \n", ft_iterative_power(2,5));
// 	printf("%d \n", ft_iterative_power(-2,5));
// 	printf("%d \n", ft_iterative_power(7,0));
// 	printf("%d \n", ft_iterative_power(0,3));
// 	printf("%d \n", ft_iterative_power(1,-1));
// 	printf("%d \n", ft_iterative_power(0,0));
// }