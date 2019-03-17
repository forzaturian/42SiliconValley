/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 12:18:26 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/02/25 16:09:31 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t r;
	size_t s;

	r = 0;
	s = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[r] && r < len)
	{
		s = 0;
		while (haystack[r + s] == needle[s] && (r + s) < len && needle[s])
			s++;
		if (!needle[s])
			return ((char *)&haystack[r]);
		r++;
	}
	return (NULL);
}
