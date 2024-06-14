/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:52:32 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/04 12:08:51 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

// int main()
// {
//     int result;
//     result = ft_strcmp("ABC", "ABC");
//     printf("%d\n", result);
//     result = ft_strcmp("ABC", "ABZ");
//     printf("%d\n", result);
//     result = ft_strcmp("ABC", "AB");
//     printf("%d\n", result);
//     return 0;
// }