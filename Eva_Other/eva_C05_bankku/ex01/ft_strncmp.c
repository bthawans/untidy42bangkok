/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:37:28 by thacharo          #+#    #+#             */
/*   Updated: 2024/05/30 17:56:29 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
	int	num;
	num = ft_strncmp("AEC", "ABC", 1);
	printf("%d\n", num);	
	num = ft_strncmp("ABC", "AB", 2);
	printf("%d\n", num);	
	num = ft_strncmp("ABA", "ABZ", 2);
	printf("%d\n", num);	
	num = ft_strncmp("ABJ", "ABC", 3);
	printf("%d\n", num);	
	return (0);

}
