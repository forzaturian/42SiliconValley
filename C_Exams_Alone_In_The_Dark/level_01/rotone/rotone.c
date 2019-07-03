/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 19:44:28 by rtsaturi          #+#    #+#             */
/*   Updated: 2018/10/04 19:48:10 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char rotate (char c)
{
	if(c >= 'a' && c <'z')
        return (c += 1);
	if (c >= 'A' && c < 'Z')
        return 	(c += 1);
    if (c == 'z' || c == 'Z')
        return (c -= 25);
	else 
		return (c);
}
int main (int ac, char *av[])
{
	int i;
	char r;

	if (ac != 2)
	{
	   write(1, "\n", 1);
	}
	else
	{
		i = 0;
		while (av[1][i])
		{
			r = rotate(av[1][i]);
			write(1, &r, 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
