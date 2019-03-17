/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 21:14:50 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/03/07 12:54:56 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int find_line(int fd, char **r, char **line)
{
    char    *mem; //for saving the following information after \n
    int     l; //index
    
    l = 0;
    while (r[fd][l] != '\n' && r[fd][l] != '\0')// we are looking for new line or '\0' in text to find an index number
    {
        l++;
        if (r[fd][l] == '\n')
        {
            *line = ft_strsub(r[fd], 0, l); // copiing before len (\n). this is what we need to return. String before a new line.
            mem = ft_strdup (&r[fd][l++]); // pointer goes to the next char after len (\n). We do this in case if we need to read more information from our file
            ft_strdel(&r[fd]); // free the previous information as we already saved it in line.
            r[fd] = mem; //Now we can start read a new information after a new line
        }
        else // in case if there is no new line in our buf
        {
            *line = ft_strdup(r[fd]);
            ft_strdel(&r[fd]);
        }
    }
    return (1);
}

int	get_next_line(const int fd, char **line)
{
	int		    nbr; // number of bytes read
	char	    buf[BUFF_SIZE + 1]; //Rewrited on each step
	char	    *tmp;
	static char	*r[FD_MAX]; // will be stored memory after each step. To avoid leaks (static)

	if (fd > FD_MAX || fd < 0 || BUFF_SIZE < 0 ||
			!line || read(fd, buf, 0) < 0)
		return (-1);
	if (!r[fd]) // there is nothing stored at the begining
		r[fd] = ft_strnew(1); // allocating a space for text. it's an empty on the first step
	while ((nbr = read(fd, buf, BUFF_SIZE) > 0)) //checking a file with the step BUFF_SIZE  (number of bytes read)
    {
        buf[nbr] = '\0'; // what we read on each step and null terminate at the end
        tmp = ft_strjoin(r[fd], buf); // saving a text in a temporary location. Our text at first step was null. Adding the informathion read with the step BUFF_SIZE
        ft_strdel(&r[fd]); // free memory in text
        r[fd] = tmp;
        if (ft_strchr(buf, '\n')) // if we occured a new line, then break
            break;
    }
    if (r[fd][0] == '\0') // in this case our fd was empty and we didn't read and saved any information
        return (0);
    return (find_line(fd, r, line)); // returning the information we read. Line and fd number we have received from main function
}
