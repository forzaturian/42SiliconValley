/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 17:07:33 by rtsaturi          #+#    #+#             */
/*   Updated: 2018/10/04 17:22:12 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_case(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c -= 32);
	else if (c >= 'A' && c <= 'Z')
		return (c += 32);
	else
		return (c);
}
int		main(int ac, char *av[])
{
	int		i;
	char 	r;
    
	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		i = 0;
		while (av[1][i])
		{

			r = ft_case(av[1][i]);
			write(1, &r, 1);
			i++;
		}
	}
	return (0);
}
