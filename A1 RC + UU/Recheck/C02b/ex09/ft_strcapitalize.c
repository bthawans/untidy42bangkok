/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 00:22:07 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/05 15:38:39 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	check_num_alpha(char lt)
{
	if ((lt > 47 && lt < 58) || (lt > 64 && lt < 91) || (lt > 96 && lt < 123))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 96 && str[i] < 122)
		{
			if (i == 0 || !check_num_alpha(str[i - 1]))
			{
				str[i] = str[i] - 32;
			}
		}
		if (str[i] > 64 && str[i] < 91)
		{
			if (i != 0 && check_num_alpha(str[i - 1]))
			{
				str[i] = str[i] + 32;
			}
		}
		i++;
	}
	return (str);
}

// int main(){
// 	char a[] = "*salut, comment tu vas ? 42mots qte-deux; cin+et+un";
// 	printf("%s", ft_strcapitalize(a));
// 	return (0);
// }