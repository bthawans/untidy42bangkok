/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:51:21 by schueaka          #+#    #+#             */
/*   Updated: 2024/06/10 15:40:51 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb == 1)
		return (1);
	i = 2;
	while (((i * i) != nb) && (i < nb / 2))
	{
		i++;
	}
	if ((i * i) != nb)
		return (0);
	return (i);
}

#include <stdio.h>
int main()
{
	printf("%d",ft_sqrt(144));
}