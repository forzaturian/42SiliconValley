/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 11:20:08 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/02/26 03:01:21 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*r;
	int		i;
	int		size;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_numlen(n);
	r = (char *)malloc(sizeof(char) * (size + 1));
	if (r == 0)
		return (0);
	r[size] = 0;
	if (n < 0)
	{
		r[0] = '-';
		n *= -1;
		i++;
	}
	while (i < size--)
	{
		r[size] = n % 10 + 48;
		n = n / 10;
	}
	return (r);
}
