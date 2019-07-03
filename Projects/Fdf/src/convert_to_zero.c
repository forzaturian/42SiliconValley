/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_zero.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 11:04:29 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/06/27 21:36:35 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	convert_to_zero(t_fdf *fdf)
{
	fdf->mlx = mlx_init();
	fdf->win = mlx_new_window(fdf->mlx, 1024, 1024, "FDF");
	fdf->start = (t_point *)malloc(sizeof(t_point));
	fdf->finish = (t_point *)malloc(sizeof(t_point));
	fdf->ang = (t_point *)malloc(sizeof(t_point));
	fdf->start->x = 0;
	fdf->start->y = 0;
	fdf->finish->x = 0;
	fdf->finish->y = 0;
	fdf->ang->x = 0.303333;
	fdf->ang->y = 0.303333;
}
