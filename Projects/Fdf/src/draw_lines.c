/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_lines.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 11:04:48 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/06/27 21:47:04 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		print_bottom_assign_val(t_point *dif, t_point *pnt, \
							t_point *start, t_point *finish)
{
	int		y1;

	y1 = 0;
	(dif)->x = finish->x - start->x;
	(dif)->y = finish->y - start->y;
	(dif)->z = (finish->z > start->z) ? (finish->z - start->z) : \
											(start->z - finish->z);
	y1 = 0;
	((dif)->y < 0) ? (y1 -= 1) : (y1 += 1);
	((dif)->y < 0) ? ((dif)->y = -(dif)->y) : (y1 += 0);
	(pnt)->z = 2 * (dif)->y - (dif)->x;
	(pnt)->y = start->y;
	(pnt)->x = start->x - 1;
	return (y1);
}

void	print_bottom(t_fdf *fdf, t_point *start, \
					t_point *finish, int min_alt)
{
	t_point			dif;
	t_point			pnt;
	int				y1;
	double			color_change;

	y1 = print_bottom_assign_val(&dif, &pnt, start, finish);
	color_change = dif.z / (finish->y - pnt.y);
	while (++pnt.x < finish->x)
	{
		mlx_pixel_put(fdf->mlx, fdf->win, (int)pnt.x, (int)pnt.y, \
					min_alt);
		if (pnt.z > 0)
		{
			(pnt.y = pnt.y + y1);
			(pnt.z = pnt.z - 2 * dif.x);
		}
		min_alt += color_change * 202;
		pnt.z = pnt.z + 2 * dif.y;
	}
}

int		print_top_assign_val(t_point *dif, t_point *pnt, \
								t_point *start, t_point *finish)
{
	int		x1;

	x1 = 0;
	(dif)->x = finish->x - start->x;
	(dif)->y = finish->y - start->y;
	(dif)->z = (finish->z > start->z) ? (finish->z - start->z) : \
											(start->z - finish->z);
	x1 = 0;
	((dif)->x < 0) ? (x1 -= 1) : (x1 = 1);
	((dif)->x < 0) ? ((dif)->x = -(dif)->x) : (x1 += 0);
	(pnt)->z = 2 * (dif)->x - (dif)->y;
	(pnt)->y = start->y - 1;
	(pnt)->x = start->x;
	return (x1);
}

void	print_top(t_fdf *fdf, t_point *start, \
					t_point *finish, int min_alt)
{
	t_point			dif;
	t_point			pnt;
	int				x1;
	double			color_change;

	x1 = print_top_assign_val(&dif, &pnt, start, finish);
	color_change = dif.z / (finish->y - pnt.y);
	while (++pnt.y < finish->y)
	{
		mlx_pixel_put(fdf->mlx, fdf->win, (int)pnt.x, (int)pnt.y, \
						min_alt);
		if (pnt.z > 0)
		{
			(pnt.x = pnt.x + x1);
			(pnt.z = pnt.z - 2 * dif.y);
		}
		min_alt += color_change * 202;
		pnt.z = pnt.z + 2 * dif.x;
	}
}

void	lineprint(t_fdf *fdf)
{
	int		min_alt;

	min_alt = (fdf->start->z > fdf->finish->z ? \
						fdf->finish->z : fdf->start->z);
	if (ft_abs(fdf->finish->y - fdf->start->y) < \
		ft_abs(fdf->finish->x - fdf->start->x))
	{
		if (fdf->start->x > fdf->finish->x)
			print_bottom(fdf, fdf->finish, fdf->start,
					min_alt + 9056565);
		else
			print_bottom(fdf, fdf->start, fdf->finish, \
						min_alt + 9056565);
	}
	else
	{
		if (fdf->start->y > fdf->finish->y)
			print_top(fdf, fdf->finish, fdf->start, \
						min_alt + 9056567);
		else
			print_top(fdf, fdf->start, fdf->finish, \
						min_alt + 9056567);
	}
}
