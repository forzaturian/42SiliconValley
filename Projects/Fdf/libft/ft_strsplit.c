/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 22:43:03 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/02/25 15:32:13 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		m;
	int		n;
	char	**r;

	i = 0;
	m = 0;
	if (!s || !(r = (char **)malloc(sizeof(char *) * ft_wordcount(s, c) + 1)))
		return (NULL);
	while (s[i])
	{
		n = 0;
		while (s[i] == c)
			i++;
		if (s[i])
		{
			r[m] = (char *)malloc(sizeof(char) * ft_symbolcount(s, c) + 1);
			while (s[i] != c && s[i])
				r[m][n++] = s[i++];
			r[m++][n] = '\0';
		}
	}
	r[m] = 0;
	return (r);
}
