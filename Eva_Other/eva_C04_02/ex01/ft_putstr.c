/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rathonka <rathonka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:58:05 by rathonka          #+#    #+#             */
/*   Updated: 2024/06/01 12:03:33 by rathonka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	write(1, str, i);
}

/*#include <stdio.h>

int main(){
	char str[] = "Lorem ipsum dolor sit amet";
	ft_putstr(str);
}*/
