/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FULL_ft_strupcase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:38:14 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/29 21:18:50 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str)
{
    int i;
    
    i = 0;
    while ( str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else
        {
            str[i] = str [i];
        }
        i++;
    }
    return(str);
}

int main(){
    char a[] = "aBaCaD/467";
    printf("%s", ft_strupcase(a));
}



