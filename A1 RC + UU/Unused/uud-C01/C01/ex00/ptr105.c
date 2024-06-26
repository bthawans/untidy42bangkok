/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr105.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:34:44 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/26 15:47:20 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void upper(char *c)
{
    printf("c = %p\n", c);
    if (*c >= 'a' && *c <= 'z')
    {
        *c = (char) (*c - ('a' - 'A'));
    }
}

int main()
{
    char a = 'r';
    printf("&a = %p\n", &a);
    upper(&a);
    printf("a = %c\n", a);
}