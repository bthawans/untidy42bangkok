/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 00:26:27 by thacharo          #+#    #+#             */
/*   Updated: 2024/05/30 18:09:56 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	while (i < size - dest_len - 1 && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len - 2);
}

/*
int main(void)
{
	char	word1[] = "Bank";
	char	word2[] = "INW ";
	int	size;
	int	total_length;

	size = 14;
	total_length = ft_strlcat(word2, word1, size);
	printf("%d\n", total_length);
	write(1, word2, total_length);

	return (0);
}
*/

#include <bsd/string.h>
int main()
{
    char first[] = "This is ";
    char last[] = /*"a potentially long string";*/ "a pote";
    unsigned int size = 4;	
    // char buffer[size];
    unsigned int	r;

    // ft_strcpy(buffer, first);
    r = strlcat(first,last,size);
    printf("%s\n", first);
    printf("Value returned: %u\n",r);

    return(0);
}

