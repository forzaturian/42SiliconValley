/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 19:15:18 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/02/25 22:05:23 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*r1;
	unsigned char	*r2;

	r1 = (unsigned char *)s1;
	r2 = (unsigned char *)s2;
	i = 0;
	while (r1[i] && r2[i] && r1[i] == r2[i])
	{
		i++;
	}
	if (r1[i] == '\0' && r2[i] == '\0')
	{
		return (0);
	}
	else
	{
		return (r1[i] - r2[i]);
	}
}
