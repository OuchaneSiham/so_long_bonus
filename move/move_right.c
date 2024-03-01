/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_right.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:59:46 by souchane          #+#    #+#             */
/*   Updated: 2024/03/01 16:39:14 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../so_long.h"

void move_right(t_game *game)
{
	if (game->map[game->y_player][game->x_player + 1] == 'A')
		{
			ft_putstr("ups u lost\n");
			quit(game);
		}
	if(game->map[game->y_player ][game->x_player + 1] != '1')
	{
		game->map[game->y_player][game->x_player + 1] = 'P';
		game->map[game->y_player][game->x_player] = '0';
		game->x_player += 1;
		game->count++;
		ft_putstr("right: ");
		ft_putnbr(game->count);
		ft_putchar('\n');
		checkwin(game);
	}
}
