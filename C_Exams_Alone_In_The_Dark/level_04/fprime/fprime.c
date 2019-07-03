/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 23:11:02 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/06/24 13:20:34 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


void	fprime(int nbr)
{
	int i;

	i = 2;
	if (nbr == 1)
		printf("1");
	while (i <= nbr)
	{
		if (nbr % i == 0)
		{
			printf("%d", i);
			if (nbr == i)
				break ;
			printf("*");
			nbr = nbr / i;
			i = 1;
		}
		i++;
	}
	printf("\n");
}

int		main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	else
		printf("\n");
	return (0);
}
