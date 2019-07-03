/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 11:07:01 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/06/23 11:07:21 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	print_borders(t_fdf *fdf)
{
	int i;

	i = -1;
	while (++i < fdf->h - 1)
	{
		fdf->start->x = fdf->xyz_mod[i][fdf->w - 1]->x;
		fdf->start->y = fdf->xyz_mod[i][fdf->w - 1]->y;
		fdf->start->z = fdf->xyz_mod[i][fdf->w - 1]->z;
		fdf->finish->x = fdf->xyz_mod[i + 1][fdf->w - 1]->x;
		fdf->finish->y = fdf->xyz_mod[i + 1][fdf->w - 1]->y;
		fdf->finish->z = fdf->xyz_mod[i + 1][fdf->w - 1]->z;
		lineprint(fdf);
	}
	i = -1;
	while (++i < fdf->w - 1)
	{
		fdf->start->x = fdf->xyz_mod[fdf->h - 1][i]->x;
		fdf->start->y = fdf->xyz_mod[fdf->h - 1][i]->y;
		fdf->start->z = fdf->xyz_mod[fdf->h - 1][i]->z;
		fdf->finish->x = fdf->xyz_mod[fdf->h - 1][i + 1]->x;
		fdf->finish->y = fdf->xyz_mod[fdf->h - 1][i + 1]->y;
		fdf->finish->z = fdf->xyz_mod[fdf->h - 1][i + 1]->z;
		lineprint(fdf);
	}
}

void	print_obj(t_fdf *fdf)
{
	int i;
	int j;

	i = 0;
	while (i < fdf->h - 1)
	{
		j = 0;
		while (j < fdf->w - 1)
		{
			fdf->start->x = fdf->xyz_mod[i][j]->x;
			fdf->start->y = fdf->xyz_mod[i][j]->y;
			fdf->start->z = fdf->xyz_mod[i][j]->z;
			fdf->finish->x = fdf->xyz_mod[i + 1][j]->x;
			fdf->finish->y = fdf->xyz_mod[i + 1][j]->y;
			fdf->finish->z = fdf->xyz_mod[i + 1][j]->z;
			lineprint(fdf);
			fdf->finish->x = fdf->xyz_mod[i][j + 1]->x;
			fdf->finish->y = fdf->xyz_mod[i][j + 1]->y;
			fdf->finish->z = fdf->xyz_mod[i][j + 1]->z;
			lineprint(fdf);
			j++;
		}
		i++;
	}
	print_borders(fdf);
}

void	read_file(t_fdf *fdf, int fd)
{
	t_list	*list;
	char	*line;

	list = NULL;
	while (get_next_line(fd, &line) == 1)
	{
		list = add_list(list, line);
		free(line);
	}
	replace_to_int(&list, fdf);
	ft_cln_list(&list);
	store_data(fdf);
	ft_clean_int_arr(&fdf->nbr);
	rot_mod(fdf);
	print_obj(fdf);
	ft_cln_num_matrix(&fdf->xyz_mod, fdf->h, fdf->w);
	close(fd);
}
