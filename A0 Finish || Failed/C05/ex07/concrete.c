/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   concrete.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:46:33 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/09 18:06:05 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

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

int ft_find_next_prime(int nb)
{
    if (nb <= 1)
    {
        return (2);
    }
    if (nb % 2 == 0)
    {
        nb++;
        while (!ft_is_prime(nb))
        {
            nb = nb + 2;
        }
    }
    else
    {
        while (!ft_is_prime(nb))
        {
            nb = nb + 2;
        }
    }
    return (nb);
}

int main()
{
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(51));
	return (0);
}