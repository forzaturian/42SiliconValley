/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 17:24:44 by rtsaturi          #+#    #+#             */
/*   Updated: 2018/10/04 17:55:54 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_vrot(char c)
{
	if (c >= 'a' && c <= 'm')
        return (c += 13);
    if (c >= 'n' && c <= 'z')
        return (c -= 13);
    if (c >= 'A' && c <= 'M')
        return (c += 13);
    if (c >= 'N' && c <= 'Z')
        return (c -= 13);
	else
		return (c);
}

int		main(int ac, char *av[])
{
	int		i;
	char	r;
    
	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		i = 0;
		while (av[1][i])
		{
			r = ft_vrot(av[1][i]);
			write(1, &r, 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
