/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:06:42 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/02/23 19:39:39 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *r;

	if (f && lst)
	{
		r = (t_list *)malloc(sizeof(lst));
		if (!r)
			return (NULL);
		r = f(lst);
		r->next = ft_lstmap(lst->next, f);
		return (r);
	}
	return (NULL);
}
