/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 16:08:52 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/04/18 18:01:15 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	pgcd(char *s1, char *s2)
{
	unsigned int a;
	a = atoi(s1);

	while (atoi(s1) % a != 0 || atoi (s2) % a != 0)
		a--;
	return (a);
}
int		main(int ac, char **av)
{
	if (ac == 3)
		printf("%d\n", pgcd(av[1], av[2]));
	else
		printf("\n");
	return (0);
}
