/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwon <cwon@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 20:18:18 by cwon              #+#    #+#             */
/*   Updated: 2024/06/02 16:26:02 by cwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int right_check(int grid[4][4], int *parameters, int y, int x, int n)
{
    int max;
    int increment;
    int i;
    int zero_count;

    grid[y][x] = n;
    max = 0;
    i = 3;
    increment = 0;
    zero_count = 0;
    while(i >= 0)
    {
        if(!grid[y][i])
            zero_count++;
        if(max < grid[y][i])
        {
            max = grid[y][i];
            increment++;
        }
        i--;
    }
    grid[y][x] = 0;
    if (!zero_count)
        return (increment == parameters[y + 12]);
    return (1);
}

int left_check(int grid[4][4], int *parameters, int y, int x, int n)
{
    int max;
    int increment;
    int i;
    int zero_count;

    grid[y][x] = n;
    max = 0;
    i = 0;
    increment = 0;
    zero_count = 0;
    while(i < 4)
    {
        if(!grid[y][i])
            zero_count++;
        if(max < grid[y][i])
        {
            max = grid[y][i];
            increment++;
        }
        i++;
    }
    grid[y][x] = 0;
    if (!zero_count)
        return (increment == parameters[y + 8]);
    return (1);
}

int bottom_check(int grid[4][4], int *parameters, int y, int x, int n)
{
    int max;
    int increment;
    int i;
    int zero_count;

    grid[y][x] = n;
    max = 0;
    i = 3;
    increment = 0;
    zero_count = 0;
    while (i >= 0)
    {
        if(!grid[i][x])
            zero_count++;
        if(max < grid[i][x])
        {
            max = grid[i][x];
            increment++;
        }
        i--;
    }
    grid[y][x] = 0;
    if (!zero_count)
        return (increment == parameters[x + 4]);
    return (1);
}

int top_check(int grid[4][4], int *parameters, int y, int x, int n)
{
    int max;
    int increment;
    int i;
    int zero_count;

    grid[y][x] = n;
    max = 0;
    i = 0;
    increment = 0;
    zero_count = 0;
    while(i < 4)
    {
        if(!grid[i][x])
            zero_count++;
        if(max < grid[i][x])
        {
            max = grid[i][x];
            increment++;
        }
        i++;
    }
    grid[y][x] = 0;
    if (!zero_count)
        return (increment == parameters[x]);
    return (1);
}

int visible(int grid[4][4], int *parameters, int y, int x, int n)
{
    if(!top_check(grid, parameters, y, x, n))
        return (0);
    if(!bottom_check(grid, parameters, y, x, n))
        return (0);
    if(!left_check(grid, parameters, y, x, n))
        return (0);
    if(!right_check(grid, parameters, y, x, n))
        return (0);
    return (1);
}
