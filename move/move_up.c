/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_up.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:02:51 by souchane          #+#    #+#             */
/*   Updated: 2024/03/01 16:20:37 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../so_long.h"

void move_up(t_game *game)
{
	if (game->map[game->y_player - 1][game->x_player] == 'A')
		{
			ft_putstr("ups u lost\n");
			quit(game);
		}
	if(game->map[game->y_player - 1][game->x_player] != '1')
	{
		game->map[game->y_player - 1][game->x_player] = 'P';
		game->map[game->y_player][game->x_player] = '0';
		game->y_player -= 1;
		game->count++;
		ft_putstr("up: ");
		ft_putnbr(game->count);
		ft_putchar('\n');
		checkwin(game);
	}
}
