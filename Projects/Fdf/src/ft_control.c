/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 11:06:02 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/06/27 22:03:58 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	control_2(int key, t_fdf *fdf, int i)
{
	(key == 27) ? zoom_min(fdf) : (i = 0);
	(key == 24) ? zoom_max(fdf) : (i = 0);
	(key == 25) ? amp_max(fdf) : (i = 0);
	(key == 29) ? amp_min(fdf) : (i = 0);
	if (key == 42 || key == 126 || key == 125 || key == 123 || \
		key == 124 || key == 27 || key == 25 || key == 24 || key == 29)
		mlx_clear_window(fdf->mlx, fdf->win);
	{
		rot_mod(fdf);
		print_obj(fdf);
		ft_cln_num_matrix(&fdf->xyz_mod, fdf->h, fdf->w);
	}
	return (0);
}
int	control_1(int key, t_fdf *fdf, int i)
{
	(key == 53) ? ft_cln_all_and_exit(fdf) : (i = 0);
	(key == 126) ? fdf->ang->x += 0.1 : (i = 0);
	(key == 126) ? fdf->ang->y += 0.1 : (i = 0);
	(key == 125 || key == 123) ? fdf->ang->x -= 0.1 : (i = 0);
	(key == 125 || key == 124) ? fdf->ang->y -= 0.1 : (i = 0);
	if (key == 126 || key == 125 || key == 123 || key == 124 || \
		key == 27 || key == 25 || key == 24 || key == 29)
		control_2(key, fdf, i);
	return (0);
}
