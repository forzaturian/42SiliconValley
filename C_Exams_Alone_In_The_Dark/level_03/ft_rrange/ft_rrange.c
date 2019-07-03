/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 23:04:01 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/03/06 00:19:03 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_rrange(int start, int end)
{
	int		*rrange;
	int		i;

	if (start > end)
		rrange = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		rrange = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	while (start < end)
	{
		rrange[i] = end;
		end--;;
		i++;
	}
   	rrange[i] = end;
	while (start > end)
	{
		rrange[i] = end;
		end++;
		i++;
	}
	rrange[i] = end;
	return (rrange);
}
