/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_02.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 01:13:32 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/07 01:16:46 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void ft_putstr(char *str)
// {
//     int j;

//     j = 0;
//     while (str[j])
//     {
//         write(1, &str[j],1);
//         j++;
//     }
//     write(1, "\n", 1);
// }
int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            write(1, &argv[i][j],1);
            j++;
        }
        // ft_putstr(argv[i]);
        i++;
    }
    return (0);
}