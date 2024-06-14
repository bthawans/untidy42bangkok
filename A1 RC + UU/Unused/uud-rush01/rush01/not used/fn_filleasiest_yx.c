/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fn_filleasiest_yx.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthawans <bthawans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 23:29:23 by bthawans          #+#    #+#             */
/*   Updated: 2024/06/01 23:40:45 by bthawans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int grid;

int	fn_filleasiest()
{
	int	i = 0;
	int	j = 0;
	// int gs = 6;

    while (j <= gs)
	{
		if (grid[0][j+1] == 1)
		{
			grid[i+1][j++ +1] = 4;
		}

		else if (grid[0][j+1] == 4 && grid[gs+1][j+1] == 1)
		{   
			int num = 1;
			while (i <= gs)
				grid[i++ + 1][j+1] = num++;
		}
		j++;
	}

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
				grid[i + 1][j++ +1] = num++;
		}
		i++;
	}
}
