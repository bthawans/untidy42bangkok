/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rathonka <rathonka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:48:59 by rathonka          #+#    #+#             */
/*   Updated: 2024/06/01 11:55:02 by rathonka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

/*#include <stdio.h>

int	main(){
	char str[] = "Lorem ipsum dolor sit amet";
	printf("%d\n", ft_strlen(str));
}*/
