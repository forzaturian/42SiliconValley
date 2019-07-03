/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 21:42:24 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/04/17 21:48:33 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int size;

	size = 0;
    while (begin_list)
		{
			begin_list = begin_list->next;
			size++;
		}
        return (size);
}
