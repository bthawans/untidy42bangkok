/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:51:51 by ssaensuk          #+#    #+#             */
/*   Updated: 2024/06/10 21:44:17 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i] != '\0')
	{
		if (c == charset[i])
			return (1);
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	ft_count_substring(char *str, char *charset, int len)
{
	int	i;
	int	count;
	int	old_i;

	i = 0;
	count = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (check_sep(str[i], charset) == 0)
				break ;
			i++;
		}
		old_i = i;
		while (i < len)
		{
			if (check_sep(str[i], charset) == 1)
				break ;
			i++;
		}
		if (i > old_i)
			count++;
	}
	return (count);
}

void	ft_strcpy(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (check_sep(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_split_words(char **array, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (check_sep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (check_sep(str[i + j], charset) == 0)
				j++;
			array[word] = (char *)malloc(sizeof(char) * (j + 1));
			ft_strcpy(array[word], (str + i), charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		count;
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	count = ft_count_substring(str, charset, len);
	array = (char **)malloc(sizeof(char *) * (count + 1));
	if (!array)
		return (NULL);
	ft_split_words(array, str, charset);
	array[count] = 0;
	return (array);
}

#include <stdio.h>
int	main(int ac, char **av) 
{
    char **result;
    int i;

    if (ac == 3)
    {	
		result = ft_split(av[1], av[2]);
    	for (i = 0; result[i] != NULL; i++)
		{
			printf("%s\n", result[i]);
			free(result[i]);
		}
		free(result);		
	char **arr;

	char *phrase = "   He,llo,   Fla,vio\t Wuensche!  ";
	arr = ft_split(phrase, ", ");
	i = -1;
	while (arr[++i] != 0)
		printf("%s\n", arr[i]);
	}
    return 0;
}
