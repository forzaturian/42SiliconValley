/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_data.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 11:07:42 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/06/23 11:07:44 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	store_data(t_fdf *fdf)
{
	int i;
	int j;

	i = 0;
	fdf->xyz_store = malloc(sizeof(t_point **) * (fdf->h + 1));
	fdf->xyz_store[fdf->h] = NULL;
	while (i < fdf->h)
	{
		fdf->xyz_store[i] = malloc(sizeof(t_point *) * (fdf->w + 1));
		j = 0;
		while (j < fdf->w)
		{
			fdf->xyz_store[i][j] = (t_point *)malloc(sizeof(t_point));
			fdf->xyz_store[i][j]->x = j + 1;
			fdf->xyz_store[i][j]->y = i + 1;
			fdf->xyz_store[i][j]->z = fdf->nbr[i][j];
			fdf->xyz_store[i][j]->x *= 31;
			fdf->xyz_store[i][j]->y *= 31;
			fdf->xyz_store[i][j]->z *= 11;
			j++;
		}
		fdf->xyz_store[i][j] = NULL;
		i++;
	}
}
