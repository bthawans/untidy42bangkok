/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 11:51:00 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/25 11:59:34 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main()
{
    int m = 20;

    printf("m = %d, &m = %p \n", m, &m);

    int *p;
    p = &m;

    printf("p = %p\n", p);
    printf("*p = %d\n", *p);

    return 0;
}