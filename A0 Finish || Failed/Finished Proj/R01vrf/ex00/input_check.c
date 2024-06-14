/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwon <cwon@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 20:34:03 by cwon              #+#    #+#             */
/*   Updated: 2024/06/02 20:36:58 by cwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	good_digits(char *str, int dimension)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > dimension + '0')
			return (0);
		i++;
	}
	return (1);
}

int	good_dimension(char *str, int digit, int space)
{
	int	dim;

	if (digit - space != 1 || str[digit + space] != '\0')
		return (0);
	dim = digit / 4;
	if (digit % 4 || dim < 4 || dim > 9 || !good_digits(str, dim))
		return (0);
	return (dim);
}

int	is_good_input(char *str)
{
	int	i;
	int	digit;
	int	space;

	i = 0;
	digit = 0;
	space = 0;
	while (str[i])
	{
		if (i % 2)
		{
			if (str[i] != ' ')
				return (0);
			space++;
		}
		else
		{
			if (str[i] < '1' || str[i] > '9')
				return (0);
			digit++;
		}
		i++;
	}
	return (good_dimension(str, digit, space));
}
