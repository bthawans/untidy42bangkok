/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 00:34:22 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/28 09:17:28 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void demo1()
{
    char flower[] = "tulip";
    printf("flower (address = %p)\n", flower);
    for (int i = 0; i < strlen(flower); i++)
    {
        printf("flower[%d] = %c (address = %p)\n", i, flower[i], &flower[i]);
    }
    write(1, "\n", 1);

    // char *planet = "Mercury";
    // printf("%s (adress = %p)\n\n", planet, planet);
    // while (*planet != '\0')
    // {
    //     printf("%c (address = %p)\n", *planet, planet);
    //     planet++;
    // }

    char planet[] = "Mercury";
    planet[5] = 'z';
    printf("%s\n", planet);
    // printf("%s (adress = %p)\n\n", planet, planet);
    // while (*planet != '\0')
    // {
    //     printf("%c (address = %p)\n", *planet, planet);
    //     planet++;
    // }
}

int main() {
    demo1();
    return 0;
}