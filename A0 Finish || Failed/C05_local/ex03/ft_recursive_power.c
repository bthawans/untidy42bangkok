/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:06:40 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/06 10:59:20 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		result = nb * ft_recursive_power(nb, power -1);
	}
	return (result);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("%d \n", ft_recursive_power(3,3));
// 	printf("%d \n", ft_recursive_power(-2,3));
// 	printf("%d \n", ft_recursive_power(3,0));
// 	printf("%d \n", ft_recursive_power(0,4));
// 	printf("%d \n", ft_recursive_power(1,-1));
// 	printf("%d \n", ft_recursive_power(0,0));
// }