/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:20:03 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/13 14:59:38 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		FT_LSTDEL
**		the ft_lstdel function grabs a pointer on a link and free the memory
**			of this link and any of its successors with 'del' and free(3). Then,
**			the pointer of the now freed first link is set to NULL.
**		- t_list *list	= Is used to go through alst.
**		- t_list *tmp	= Is used to save the 'next' link, so (t_list)list
**							can be properly freed.
*/

#include "../includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*tmp;

	list = *alst;
	while (list)
	{
		del(list->content, list->content_size);
		tmp = list->next;
		free(list);
		list = tmp;
	}
	*alst = NULL;
}
