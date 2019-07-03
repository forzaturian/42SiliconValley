/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if copy+.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 13:21:26 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/06/24 13:21:37 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void 	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*i;
    
	while (*begin_list && !cmp((*begin_list)->data, data_ref))
	{
		*begin_list = (*begin_list)->next;
	}
	i = *begin_list;
	while (i && i->next)
	{
		if (!cmp(i->next->data, data_ref))
		{
            i->next = i->next->next;
		}
		else
			i = i->next;
	}
}
