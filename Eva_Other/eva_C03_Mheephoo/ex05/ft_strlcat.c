/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibasri <pibasri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:32:59 by pibasri           #+#    #+#             */
/*   Updated: 2024/05/28 18:35:12 by pibasri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	register char	*d;
	register char	*s;
	unsigned int	buffer_left;
	unsigned int	dest_len;

	d = dest;
	s = src;
	buffer_left = size;
	while (buffer_left-- != 0 && d != '\0')
		d++;
	dest_len = d - dest_len;
	buffer_left = size - dest_len;
	if (!buffer_left)
		return (dest_len + ft_strlen(s));
	while (*s != '\0')
	{
		if (buffer_left != 1)
		{
			*d++ = *s;
			buffer_left--;
		}
		s++;
	}
	*d = '\0';
	return (dest_len + (s - src));
}
