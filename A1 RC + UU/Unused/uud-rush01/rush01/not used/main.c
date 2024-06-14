/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:25:30 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/01 22:54:44 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int clues;
int grid;

int	fn_filleasiest()
{
	int	i = 0;
	int	j = 0;
	int gs = 6;

	while (i <= gs)
	{
		if (grid[i+1][0] == 1)
		{
			grid[i+1][j+1] = 4;
		}

		else if (grid[i+1][0] == 4 && grid[i+1][gs+1] == 1)
		{   
			int	num = 1;
			while (j <= gs)
			{
				grid[i+1][j+1] = num;
				j++, num++;
			}    
		}
		i++;
	}
	while (j <= gs)
	{
		if (grid[0][j+1] == 1)
		{
			grid[i+1][j+1] = 4;
			j++;
		}

		else if (grid[0][j+1] == 4 && grid[gs+1][j+1] == 1)
		{   
			int num = 1;
			while (i <= gs)
			{
				grid[i+1][j+1] = num;
				i++, num++;
			}    
		}
		j++;
	}
}


