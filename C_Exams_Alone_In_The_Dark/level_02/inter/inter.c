/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 16:48:30 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/07/02 16:48:37 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		search(char *str, int c)
{
	int		k;

	k = 0;
	while (k < c)
	{
		if (str[k] == str[c])
			return (1);
		k++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	int		i;
	int		j;

	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (av[1][i])
	{
		j = 0;
		while (av[2][j])
		{
			if (av[1][i] == av[2][j])
			{
				if (search(av[1], i) == 0)
					write(1, &av[1][i], 1);
				break;
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
