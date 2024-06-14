/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:34:48 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/23 22:23:18 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void display_num(int f, int s)
{
    int left;
    int right;

    left = (f / 10) + 48;
    left = (f % 10) + 48;
    write (1, &left, 1);
    write (1, &right, 1);
    write (1, " ", 1);

    right = (s / 10) + 48;
    right = (s % 10) + 48;
    write (1, &left, 1);
    write (1, &right, 1);
    if (f != 98 || s!= 99)
    {
        write(1, ", ", 2);
    }
}

void ft_print_comb2()
{
    int f;
    int s;

    f = 0;
    s = 1;
    while (f < 99)
    {
        s = (1 + (f - 0));
        while (s < 100)
        {
            display_num(f, s);left
            s++;
        }
        f++;
    }
    
}

int main()
{
    ft_print_comb2();
    return 0;
}