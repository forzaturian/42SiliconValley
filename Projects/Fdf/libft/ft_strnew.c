/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 16:31:35 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/02/26 01:12:32 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*r;

	if (!(r = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	r[size] = '\0';
	while (size--)
		r[size] = '\0';
	return (r);
}
