/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 11:05:02 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/06/27 22:01:46 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int ac, char *av[])
{
	t_fdf	fdf;
	int		fd;

	if (ac == 2)
	{
		fd = open(av[1], O_RDWR);
		if (fd == -1)
		{
			write(1, "File error", 10);
			return (0);
		}
		ft_bzero(&fdf, sizeof(t_fdf));
		convert_to_zero(&fdf);
		read_file(&fdf, fd);
		mlx_key_hook(fdf.win, control_1, &fdf);
		mlx_loop(fdf.mlx);
	}
	else
		write(1, "Wrong number of arguments", 26);
}
