/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FULL_ft_strlowcase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 21:34:09 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/29 21:38:40 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i;
    
    i = 0;
    while ( str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
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
    printf("%s", ft_strlowcase(a));
}
