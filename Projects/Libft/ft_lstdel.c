/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 09:02:11 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/02/23 11:48:38 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;
	t_list *r;

	temp = *alst;
	while (temp)
	{
		r = temp->next;
		del(temp->content, temp->content_size);
		free(temp);
		temp = r;
	}
	*alst = NULL;
}
