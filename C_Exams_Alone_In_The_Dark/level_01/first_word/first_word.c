/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 17:57:26 by rtsaturi          #+#    #+#             */
/*   Updated: 2018/10/04 18:08:53 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char *av[])
{
	int		i;

	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		i = 0;
		while (av[1][i] == '\t' || av[1][i] == ' ')
		{
			i++;
		}
		while (av[1][i])
		{
			if (av[1][i] == '\t' || av[1][i] == ' ')
			{
				break;
			}
			else
			{
				write(1, &av[1][i], 1);
			}
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
