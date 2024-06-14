/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 00:22:07 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/05 13:53:17 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[i] = str[i] - 32;
	}
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '+' || str[i] == '-')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		else if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
		{
			str[i + 1] = str[i + 1] + 32;
		}
		i++;
	}
	return (str);
}

int main(){
	char a[] = "*salut, ? 42mots qte-dEUx; cin+et+un";
	printf("%s", ft_strcapitalize(a));
}

