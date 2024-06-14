/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:04:19 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/14 07:46:21 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	i = 0;
	while ((i <= nb) && (i <= 46341))
	{
		if (i * i == nb)
		{
			return (i);
		}
		else if (i * i > nb)
		{
			return (0);
		}
		i++;
	}
	return (0);
}

int	main()
{
	printf("%d\n", ft_sqrt(144));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(-4));
	return (0);
}