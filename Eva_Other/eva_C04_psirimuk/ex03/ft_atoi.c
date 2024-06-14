/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:45:56 by psirimuk          #+#    #+#             */
/*   Updated: 2024/06/05 23:13:57 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (!(*str == '-' && *str == '+' && (*str >= '0' && *str <= '9')))
	{
		if (*str == '-')
			sign *= -1;
		else if (*str == 32 || (*str >= 9 && *str <= 13))
			result = result + 0;
		else if (*str >= '0' && *str <= '9')
			result = result * 10 + *str - '0';
		else if ((*str < '0' || *str > '9') && *str != '+' && *str != 32)
			break ;
		str++;
	}
	return (result * sign);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_atoi("  ---+--\n\t\f\v\r012356ab567"));
}
