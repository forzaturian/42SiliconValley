/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 11:05:22 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/06/25 20:57:46 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>

void		ft_cln_num_matrix(t_point ****ar, int h, int w)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < h)
	{
		j = 0;
		while (j < w)
		{
			free((*ar)[i][j]);
			++j;
		}
		free((*ar)[i]);
		++i;
	}
	free(*ar);
}

void		ft_cln_all_and_exit(t_fdf *fdf)
{
	free(fdf->start);
	free(fdf->finish);
	free(fdf->ang);
	ft_cln_num_matrix(&fdf->xyz_store, fdf->h, fdf->w);
	exit(1);
}
