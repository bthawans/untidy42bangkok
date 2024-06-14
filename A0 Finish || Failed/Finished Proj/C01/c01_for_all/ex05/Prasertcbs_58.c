/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Prasertcbs_58.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 09:23:06 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/28 10:17:37 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <ctype.h>


void strupper(char s[]){
	int i = 0;
	while (s[i] != '\0')
	{
		s[i] = toupper(s[i]);
		i++;
	}
	
}

void strupper2(char *s){
	int i = 0;
	while (s[i] != '\0')
	{
		s[i] = toupper(s[i]);
		i++;
	}
	
}

int strlength(char *s)
{
	int i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return i;
}


int main(){
	char flower[] = "lilly";
	// strupper(flower); // flower -> address
	strupper2(flower); // flower -> address
	printf("length = %d\n", strlength(flower));
	printf("%s\n", flower);
	return(0);
}

		
