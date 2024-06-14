/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yx_fn_filleasiest_yx.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 23:51:55 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/02 12:28:15 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int grid;

int	fn_filleasiest()
{
	int	i = 0;
	int	j = 0;

	while (j <= gs)
	{
		if (grid[j+1][0] == 1)
		{
			grid[j+1][i+1] = 4;
		}
		else if (grid[j+1][0] == 4 && grid[j+1][gs+1] == 1)
		{   
			int num = 1;
			while (i <= gs)
			{
				grid[j+1][i+1] = num;
				i++, num++;
			}    
		}
        j++;
	}

	while (i <= gs)
	{
		if (grid[0][i+1] == 1)
		{
			grid[j+1][i+1] = 4;
		}
		else if (grid[0][i+1] == 4 && grid[gs+1][i+1] == 1)
		{   
			int	num = 1;
			while (j <= gs)
			{
				grid[j+1][i+1] = num;
				j++, num++;
			}    
		}
        i++;
	}
}

