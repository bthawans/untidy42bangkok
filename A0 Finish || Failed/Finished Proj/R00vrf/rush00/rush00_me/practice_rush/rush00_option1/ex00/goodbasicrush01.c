/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testloop3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:57:03 by bthawans          #+#    #+#             */
/*   Updated: 2024/05/25 19:28:31 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    rush(int x, int y)
{
    int col;
    int row;
    row = 1;
    while (row <= y)
    {
        col = 1;
        while (col <= x)
        {
            if ((col == 1 && row == 1) || (col != 1 && col == x && row != 1 && row == y))
            {
                write(1, "/",1);
            }
            else if (col == 1 && row == y || col == x && row == 1)
            {
                write(1, "\\",1);
            }
            else if (col != 1 && col !=x && row != 1 && row != y)
            {
                write(1, " ",1);
            }
            else
            {           
                write(1, "*",1);
            }
            col++;
        }
        write(1, "\n", 1);
        row++;
    }
}


// int main()
// {
//     rush(5, 3);
// 	write(1,"\n",1);
// 	rush(5, 1);
// 	write(1,"\n",1);
// 	rush(1, 1);
//     write(1,"\n",1);
// 	rush(1, 5);
// 	write(1,"\n",1);
// 	rush(4, 4);
//     return 0;
// }
