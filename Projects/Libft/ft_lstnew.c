/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 20:22:55 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/02/23 11:56:22 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *nl;

	nl = (t_list *)malloc(sizeof(t_list) * content_size);
	if (!nl)
		return (NULL);
	if (!content)
	{
		nl->content = NULL;
		nl->content_size = 0;
	}
	else
	{
		nl->content = malloc(sizeof(content_size));
		if (!content)
			return (NULL);
		ft_memcpy(nl->content, content, content_size);
		nl->content_size = content_size;
	}
	nl->next = NULL;
	return (nl);
}
