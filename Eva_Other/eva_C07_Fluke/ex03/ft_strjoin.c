/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:18:27 by kwatthan          #+#    #+#             */
/*   Updated: 2024/06/10 13:58:07 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	str_print(char **strs, char *str, int *i, int *j)
{
	while (*strs[*i] != '\0')
	{
		str[*j] = *strs[*i];
		(*j)++;
		strs[*i]++;
	}
}

void	allo_size(int size, int *result, char *sep, char **strs)
{
	int	i;

	i = 0;
	*result = ft_strlen(sep) * (size - 1);
	while (++i < size)
		*result += ft_strlen(strs[i]);
	if (size == 0)
		*result = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		result;
	char	*str;
	int		k;

	i = -1;
	j = 0;
	k = 0;
	allo_size(size, &result, sep, strs);
	str = (char *)malloc((sizeof(char *) * result) + 1);
	while (++i < size)
	{
		k = 0;
		str_print(strs, str, &i, &j);
		while (sep[k] != '\0' && i < size - 1)
		{
			str[j] = sep[k];
			j++;
			k++;
		}
	}
	str[j] = '\0';
	return (str);
}

int	main(void)
{
	char	*cat_strs;
	char	*strs[13] = {"Jack", "Queen", "King"};
	char	*sep = " $ ";
	int	size;

	size = 3;

	cat_strs = ft_strjoin(size, strs, sep);
	printf("%s", cat_strs);
	free(cat_strs);
}
