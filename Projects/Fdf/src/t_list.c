/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_list.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 11:07:58 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/06/23 11:08:01 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_list		*add_list(t_list *list, char *data)
{
	t_list	*begin;
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	new->line = ft_strdup(data);
	new->next = NULL;
	if (!list)
		return (new);
	begin = list;
	while (list->next)
		list = list->next;
	list->next = new;
	return (begin);
}

int			ft_list_size(t_list *list)
{
	int		i;

	i = 0;
	if (list == NULL)
		return (0);
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}

void		ft_cln_list(t_list **list)
{
	t_list	*node;

	node = *list;
	if (node && node->next)
		ft_cln_list(&node->next);
	free(node->line);
	free(node);
}
