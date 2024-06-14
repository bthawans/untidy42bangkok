/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 21:05:32 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/23 21:36:12 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_comb()
{
    char f;
    char s;
    char t;

    f = '0';
    while (f <= '7')
    {
        s = f + 1;
        while (s <= '8')
        {
            t = s + 1;
            while (t <= '9')
            {
                write(1, &f, 1);
                write(1, &s, 1);
                write(1, &t, 1);
                write(1, ", ", 2);
                t++;
            }
            s++;
        }
        f++;
    }
}


int main()
{
    ft_print_comb();
    return 0;
}