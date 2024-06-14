/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:52:37 by thacharo          #+#    #+#             */
/*   Updated: 2024/05/30 17:55:14 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>

int main(void)
{
	int	num;
	// int	test;
	num = ft_strcmp("ABC", "ABC");
	printf("%d\n", num);
	num = ft_strcmp("ABC", "AB");
	printf("%d\n", num);	
	num = ft_strcmp("ABA", "ABZ");
	printf("%d\n", num);	
	num = ft_strcmp("ABJ", "ABC");
	printf("%d\n", num);	
	return (0);
}

