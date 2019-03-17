/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:57:53 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/02/25 19:13:04 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int r;
	int s;

	r = 0;
	s = 0;
	if ((needle[s] == '\0'))
		return ((char *)&haystack[r]);
	while (haystack[r])
	{
		s = 0;
		while (haystack[r + s] == needle[s] && needle[s])
			s++;
		if (needle[s] == '\0')
			return ((char *)&haystack[r]);
		r++;
	}
	return (NULL);
}
