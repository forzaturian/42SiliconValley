/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_to_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 11:07:30 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/06/23 11:07:33 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

#include <stdio.h>

int		count_w(char *line)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (line[i])
	{
		if (line[i] != ' ' && line[i] != '-' && \
			(line[i] > '9' || line[i] < '0'))
			return (0);
		if ((line[i] >= '0' && line[i] <= '9') || line[i] == '-')
		{
			++w;
			if (line[i] == '-')
				++i;
			while (line[i] >= '0' && line[i] <= '9')
				++i;
		}
		if (line[i] != ' ' && line[i] != '\0')
			return (0);
		if (line[i])
			++i;
	}
	return (w);
}

int		check_input(t_list *list)
{
	int	w;
	int	tmp;

	if (!list)
		return (-1);
	w = count_w(list->line);
	if (w == 0)
		return (-1);
	list = list->next;
	while (list)
	{
		tmp = count_w(list->line);
		if (w != tmp || tmp == 0)
			return (-1);
		list = list->next;
	}
	return (1);
}

void	copy_data(t_list *list, t_fdf *fdf)
{
	char	*line;
	int		i;
	int		j;
	int		k;

	i = 0;
	while (list)
	{
		j = 0;
		k = 0;
		fdf->nbr[i] = (int*)malloc(sizeof(int) * fdf->w);
		line = list->line;
		while (j < fdf->w)
		{
			fdf->nbr[i][j] = ft_atoi(&line[k]);
			while (line[k] && line[k] != ' ')
				k++;
			while (line[k] && line[k] == ' ')
				k++;
			j++;
		}
		i++;
		list = list->next;
	}
}

void	replace_to_int(t_list **list, t_fdf *fdf)
{
	int		list_size;

	if (check_input(*list) == -1)
	{
		free(fdf->start);
		free(fdf->finish);
		free(fdf->ang);
		ft_cln_list(list);
		ft_putstr("Error\n");
		exit(1);
	}
	list_size = ft_list_size(*list);
	fdf->h = list_size;
	fdf->nbr = (int**)malloc(sizeof(int*) * (list_size + 1));
	fdf->nbr[list_size] = NULL;
	fdf->w = check_width((*list)->line);
	copy_data(*list, fdf);
}
