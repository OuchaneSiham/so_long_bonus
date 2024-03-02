/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   door_loop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:08:37 by souchane          #+#    #+#             */
/*   Updated: 2024/03/02 17:17:30 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	door_loop(t_game *game)
{
	int ptr;
	if (game->open)
	{
		if (game->frame_door == 0)
			game->exit= mlx_xpm_file_to_image(game->mlx, "imgs/door/d_o_0.xpm", &ptr, &ptr);
		else if (game->frame_door == 10)
			game->exit= mlx_xpm_file_to_image(game->mlx, "imgs/door/d_o_1.xpm", &ptr, &ptr);
		else if (game->frame_door == 20)
			game->exit= mlx_xpm_file_to_image(game->mlx, "imgs/door/d_o_2.xpm", &ptr, &ptr);
	}
	else
	{
		if (game->frame_door == 0)
			game->exit = mlx_xpm_file_to_image(game->mlx, "imgs/door/d_c_0.xpm", &ptr, &ptr);
		else if (game->frame_door == 10)
			game->exit = mlx_xpm_file_to_image(game->mlx, "imgs/door/d_c_1.xpm", &ptr, &ptr);
		else if (game->frame_door == 20)
			game->exit = mlx_xpm_file_to_image(game->mlx, "imgs/door/d_c_2.xpm", &ptr, &ptr);
	}
	if (game->frame_door == 20)
		game->frame_door = -1;
	game->frame_door++;
}
