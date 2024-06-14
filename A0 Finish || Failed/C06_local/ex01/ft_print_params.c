/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 00:44:37 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/07 01:17:04 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
    int j;

    j = 0;
    while (str[j])
    {
        write(1, &str[j],1);
        j++;
    }
    write(1, "\n", 1);
}
int main(int argc, char **argv)
{
    int i;

    i = 1;
    while (i < argc)
    {
        ft_putstr(argv[i]);
        i++;
    }
    return (0);
}

