/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 11:44:57 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/03/07 21:22:49 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	int		len;
	int		r;
	char	*new;

	len = 0;
	r = 0;
	while (s1[len])
	{
		len++;
	}
	new = (char*)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while (s1[r])
	{
		new[r] = s1[r];
		r++;
	}
	new[r] = '\0';
	return (new);
}
