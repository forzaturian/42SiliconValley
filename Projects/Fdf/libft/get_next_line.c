/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 21:14:50 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/06/27 22:09:35 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_line(int fd, char **r, char **line)
{
	char *mem;
	int l;

	l = 0;
	while (r[fd][l] != '\n' && r[fd][l] != '\0')
		l++;
	if (r[fd][l] == '\n')
	{
		*line = ft_strsub(r[fd], 0, l);
		mem = ft_strdup(&r[fd][l + 1]);
		ft_strdel(&r[fd]);
		r[fd] = mem;
	}
	else
	{
		*line = ft_strdup(r[fd]);
		ft_strdel(&r[fd]);
	}
	return (1);
}

int	get_next_line(const int fd, char **line)
{
	int nbr;
	char buf[BUFF_SIZE + 1];
	char *tmp;
	static char *r[FD_MAX];

	if (fd > FD_MAX || fd < 0 || BUFF_SIZE < 0 ||
			!line || read(fd, buf, 0) < 0)
		return (-1);
	if (!r[fd])
		r[fd] = ft_strnew(1);
	while ((nbr = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[nbr] = '\0';
		tmp = ft_strjoin(r[fd], buf);
		ft_strdel(&r[fd]);
		r[fd] = tmp;
		if (ft_strchr(buf, '\n'))
			break; 
	}
	if (r[fd][0] == '\0')
		return (0);
	return (find_line(fd, r, line));
}
