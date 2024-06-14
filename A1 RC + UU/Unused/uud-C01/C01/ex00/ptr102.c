/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr102.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 13:19:41 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/26 14:52:44 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int demo(int a, int *ptr)
{
    a = a + 1;
    *ptr = *ptr + 1;
}

int main()
{
    int m = 5;
    int n = 100;

    demo(m, &n);
    printf("m = %d \n", m);
    printf("n = %d \n", n);

    return 0;
}