/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FULL_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:13:33 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/30 10:18:39 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    
    i = 0;
    while ((i < n) && (src[i] != '\0'))
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {  
        dest[i] = '\0';
        i++;
    }
    return dest;
}

int main(){
    char s[] = "Goodbye";
    char d[9] = "";
    char *st;

    st = ft_strncpy(d, s, 7);
    printf("%s\n", st);
    return(0);
} 

