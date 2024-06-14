/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility_checker.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thayamsr <thayamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:22:30 by thayamsr          #+#    #+#             */
/*   Updated: 2024/06/01 20:06:58 by thayamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_visibility_left_to_right(int *grid[], int gs);
int	check_visibility_right_to_left(int *grid[], int gs);
int	check_visibility_top_to_bottom(int *grid[], int gs);
int	check_visibility_bottom_to_top(int *grid[], int gs);

int	check_visibility(int *grid[], int gs)
{
	if (!check_visibility_left_to_right(grid, gs))
		return (0);
	if (!check_visibility_right_to_left(grid, gs))
		return (0);
	if (!check_visibility_top_to_bottom(grid, gs))
		return (0);
	if (!check_visibility_bottom_to_top(grid, gs))
		return (0);
	return (1);
}
