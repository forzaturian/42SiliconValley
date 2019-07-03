/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prospect.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 11:06:48 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/06/23 11:06:51 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	rot_mod(t_fdf *fdf)
{
	int i;
	int j;

	i = 0;
	fdf->xyz_mod = malloc(sizeof(t_point **) * (fdf->h + 1));
	fdf->xyz_mod[fdf->h] = NULL;
	while (i < fdf->h)
	{
		fdf->xyz_mod[i] = malloc(sizeof(t_point *) * (fdf->w + 1));
		j = 0;
		while (j < fdf->w)
		{
			fdf->xyz_mod[i][j] = (t_point *)malloc(sizeof(t_point));
			fdf->xyz_mod[i][j]->x = 395 + ((fdf->xyz_store[i][j]->x -\
				fdf->xyz_store[i][j]->y) * cos(fdf->ang->x));
			fdf->xyz_mod[i][j]->y = 148 + (((fdf->xyz_store[i][j]->x +\
				fdf->xyz_store[i][j]->y) * sin(fdf->ang->y))\
				- fdf->xyz_store[i][j]->z);
			fdf->xyz_mod[i][j]->z = fdf->xyz_store[i][j]->z;
			j++;
		}
		fdf->xyz_mod[i][j] = NULL;
		i++;
	}
}
