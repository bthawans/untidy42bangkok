/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsriwor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:45:47 by thsriwor          #+#    #+#             */
/*   Updated: 2024/06/03 18:48:11 by thsriwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/*#include<stdio.h>

int	main(void)
{
	char str[] = "Mogimon suru";
	printf("%d\n", ft_strlen(str));
	return(0);
}*/
