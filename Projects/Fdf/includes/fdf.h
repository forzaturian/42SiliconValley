/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 11:09:14 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/06/27 21:50:19 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "../minilibx_macos/mlx.h"
# include "../libft/libft.h"
# include <fcntl.h>
# include <math.h>

typedef struct		s_list
{
	char			*line;
	struct s_list	*next;
}					t_list;

typedef struct		s_point
{
	double			x;
	double			y;
	double			z;
}					t_point;

typedef struct		s_fdf
{
	void			*mlx;
	void			*win;
	t_point			*start;
	t_point			*finish;
	t_point			*ang;
	int				**nbr;
	int				w;
	int				h;
	double			color_change;
	t_point			***xyz_store;
	t_point			***xyz_mod;
}					t_fdf;

int					control_1(int key, t_fdf *fdf, int i);
void				convert_to_zero(t_fdf *fdf);
void				read_file(t_fdf *fdf, int fd);
void				replace_to_int(t_list **list, t_fdf *fdf);
void				store_data(t_fdf *fdf);
void				rot_mod(t_fdf *fdf);
void				lineprint(t_fdf *fdf);
void				print_obj(t_fdf *fdf);
int					check_ampl(t_fdf *fdf);
void				amp_max(t_fdf *fdf);
void				amp_min(t_fdf *fdf);
int					check_zoom(t_fdf *fdf);
void				zoom_max(t_fdf *fdf);
void				zoom_min(t_fdf *fdf);
void				draw_map(t_fdf *fdf);

int					ft_list_size(t_list *list);
t_list				*add_list(t_list *list, char *str);
int					check_width(char *str);
void				ft_cln_list(t_list **list);
void				ft_cln_num_matrix(t_point ****ar, int h, int w);
void				ft_cln_all_and_exit(t_fdf *fdf);

#endif
