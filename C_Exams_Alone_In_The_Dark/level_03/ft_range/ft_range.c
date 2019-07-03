/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 23:09:28 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/04/17 23:58:22 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
int	*ft_range(int start, int end)
{
	int i;
	int *range;

	if (start > end)
	   range = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		range = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	while (start < end)
	{
		range[i] = start;
		i++;
		start++;
	}
	range[i] = start;	
	while (start > end)
	{
		range[i] = start;
		i++;
		start--;
	}
	range[i] = start;
	return (range);
}
