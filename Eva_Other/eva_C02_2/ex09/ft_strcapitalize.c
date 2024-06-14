/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thayamsr <thayamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 23:15:56 by thayamsr          #+#    #+#             */
/*   Updated: 2024/05/28 18:58:40 by thayamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ch_num(char alphabet)
{
	if (alphabet >= '0' && alphabet <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ch_alp(char alphabet)
{
	if (alphabet >= 'a' && alphabet <= 'z')
	{
		return (1);
	}
	else if (alphabet >= 'A' && alphabet <= 'Z')
	{
		return (2);
	}
	else
	{
		return (0);
	}
}

void	make_cap(char	*s_alphabet, int	*new_word)
{
	if (*new_word == 1)
	{
		if (ch_num(*s_alphabet) == 1)
			*new_word = 0;
		if (ch_alp(*s_alphabet) == 1)
		{
			*s_alphabet = *s_alphabet - ('a' - 'A');
			*new_word = 0;
		}
	}
	else if (*new_word == 0)
	{
		if (ch_alp(*s_alphabet) == 2)
			*s_alphabet = *s_alphabet + ('a' - 'A');
		else if (ch_alp(*s_alphabet) == 0 && ch_num(*s_alphabet) == 0)
			*new_word = 1;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	new_word;
	int	lenght;

	lenght = 0;
	new_word = 1;
	while (str[lenght] != '\0')
	{
		make_cap(&str[lenght], &new_word);
		lenght++;
	}
	str[lenght] = '\0';
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char test[] = "salut, comASDSADnt t vase+et+un";
// 	printf("The string is %s \n",test);
// 	printf("The new string is %s",ft_strcapitalize(test));
// }