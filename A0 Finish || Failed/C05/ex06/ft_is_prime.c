/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:46:04 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/09 17:23:14 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2)
	{
		return (1);
	}
	if (nb % 2 == 0 || nb <= 1)
	{
		return (0);
	}
	i = 3;
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i = i + 2;
	}
	return (1);
}

// int main()
// {
// 	printf("%d\n", ft_is_prime(0));
// 	printf("%d\n", ft_is_prime(1));
// 	printf("%d\n", ft_is_prime(2));
// 	printf("%d\n", ft_is_prime(3));
// 	printf("%d\n", ft_is_prime(4));
// 	printf("%d\n", ft_is_prime(13));
// 	printf("%d\n", ft_is_prime(51));
// 	return (0);
// }