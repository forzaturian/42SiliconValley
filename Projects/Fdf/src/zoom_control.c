/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom_control.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 11:08:10 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/06/23 11:08:13 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		zoom_max(t_fdf *fdf)
{
	int		i;
	int		j;

	i = 0;
	while (i < fdf->h)
	{
		j = 0;
		while (j < fdf->w)
		{
			fdf->xyz_store[i][j]->x *= 1.3;
			fdf->xyz_store[i][j]->y *= 1.3;
			fdf->xyz_store[i][j]->z *= 1.3;
			j++;
		}
		i++;
	}
}

void		zoom_min(t_fdf *fdf)
{
	int		i;
	int		j;

	i = 0;
	while (i < fdf->h)
	{
		j = 0;
		while (j < fdf->w)
		{
			fdf->xyz_store[i][j]->x /= 1.3;
			fdf->xyz_store[i][j]->y /= 1.3;
			fdf->xyz_store[i][j]->z /= 1.3;
			j++;
		}
		i++;
	}
}
