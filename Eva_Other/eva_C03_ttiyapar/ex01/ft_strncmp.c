/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 03:48:26 by ttiyapar          #+#    #+#             */
/*   Updated: 2024/06/05 22:10:18 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
		if (s1[i] != s2[i] && i < n)
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
	}
	if (n == 0)
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <stdio.h>
int	main(void)
{
	char	s1[] = "asdf ";
	char	s2[] = "asdfi";
	int	x;
	x = ft_strncmp(s1,s2,5);
	printf("%d",x);
}
