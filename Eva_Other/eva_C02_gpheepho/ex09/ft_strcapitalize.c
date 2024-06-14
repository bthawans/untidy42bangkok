/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpheepho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:22:51 by gpheepho          #+#    #+#             */
/*   Updated: 2024/06/06 13:22:52 by gpheepho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	status;

	str = ft_lowcase(str);
	i = 0;
	status = 1;
	while (str[i] != '\0')
	{
		if ((status) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			status = 0;
		}
		else if ((str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			status = 0;
		}
		else
		{
			status = 1;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int main(void)
// {
//     char input[] = "ad!~t";
//     char input1[] = "my Money is bROke";
//     char input2[] = "salut, comment tu vas ? 
// 	42mots quarante-deux; cinquante+et+un";	
//     ft_strcapitalize(input2);
//     ft_strcapitalize(input);
//     ft_strcapitalize(input1);
// 	printf("%s\n", input);
//     printf("%s\n", input1);
//     printf("%s", input2);
// }
