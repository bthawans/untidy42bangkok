/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Full_ft_putstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:02:04 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/06 22:21:32 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str){
    int i;
    i = 0;
    while (*(str +i) != '\0') 
    // while (str[i] != '\0') 
    {
        ft_putchar(str[i]);
        i++;
    }
}

int main(void){
    char a[] = "Travel";
    // char *b;
    // b= &a;
    ft_putstr(a);
    return (0);
}
