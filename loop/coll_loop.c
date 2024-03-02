/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coll_loop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:08:54 by souchane          #+#    #+#             */
/*   Updated: 2024/03/02 17:17:23 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	coll_loop(t_game *game)
{
	int ptr;
	if (game->fram_coin == 8)
		game->coll = mlx_xpm_file_to_image(game->mlx, "imgs/coin/stone-0.xpm", &ptr, &ptr);
	else if (game->fram_coin == 16)
		game->coll = mlx_xpm_file_to_image(game->mlx, "imgs/coin/stone-1.xpm", &ptr, &ptr);
	else if (game->fram_coin == 24)
		game->coll = mlx_xpm_file_to_image(game->mlx, "imgs/coin/stone-2.xpm", &ptr, &ptr);
	else if (game->fram_coin == 32)
		game->coll = mlx_xpm_file_to_image(game->mlx, "imgs/coin/stone-3.xpm", &ptr, &ptr);
	if (game->fram_coin == 32)
		game->fram_coin = -1;
	game->fram_coin++;
}
