/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr101.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 12:23:03 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/26 13:42:25 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main()
{
    int m = 20;
    int *p1, *p2;
    p1 = &m;
    p2 = &m;

    printf("%d \n", m);
    printf("%p \n", &m);
    printf("%d \n", *p1);
    printf("%d \n", *p2);
    printf("%p \n", &p1);
    printf("%p \n", p1);

    m = 10;
    printf("%d \n", m);
    printf("%p \n", &m);
    printf("%d \n", *p1);
    printf("%d \n", *p2);
    printf("%p \n", &p1);
    printf("%p \n", p1);

    *p2 = 150;
    printf("%d \n", m);
    printf("%p \n", &m);
    printf("%d \n", *p1);
    printf("%d \n", *p2);
    printf("%p \n", &p1);
    printf("%p \n", p1);
    return (0);
}