/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_projection.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 11:06:38 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/06/23 11:06:40 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		amp_max(t_fdf *fdf)
{
	int		i;
	int		j;
	double	add;

	i = 0;
	add = 1.15;
	while (i < fdf->h)
	{
		j = 0;
		while (j < fdf->w)
		{
			if (fdf->xyz_store[i][j]->z != 0)
				fdf->xyz_store[i][j]->z *= add;
			j++;
		}
		i++;
	}
}

void		amp_min(t_fdf *fdf)
{
	int		i;
	int		j;

	i = 0;
	while (i < fdf->h)
	{
		j = 0;
		while (j < fdf->w)
		{
			fdf->xyz_store[i][j]->z /= 1.15;
			j++;
		}
		i++;
	}
}
