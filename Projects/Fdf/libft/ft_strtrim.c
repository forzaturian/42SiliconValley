/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 23:35:27 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/02/26 01:50:11 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strtrim(char const *s)
{
	unsigned int	first;
	unsigned int	last;
	char			*r;

	if (!s)
		return (NULL);
	first = 0;
	last = 0;
	while (s[first] && ft_wspaces(s[first]))
		first++;
	last = ft_strlen(&s[first]) - 1;
	while (s[first] && ft_wspaces(s[last + first]))
		last--;
	if (!(r = ft_strnew(last + 1)))
		return (NULL);
	ft_strncpy(r, (s + first), (last + 1));
	return (r);
}
