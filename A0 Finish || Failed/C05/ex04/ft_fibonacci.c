/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:44:46 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/14 07:38:19 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	else
	{
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (result);
}

#include <stdio.h>
int main()
{
    // printf("%d\n",ft_fibonacci(-11));
    // printf("%d\n",ft_fibonacci(0));
    // printf("%d\n",ft_fibonacci(1));
    printf("%d\n",ft_fibonacci(5));
    // printf("%d\n",ft_fibonacci(7));
    // printf("%d\n",ft_fibonacci(10));
    return (0);
}