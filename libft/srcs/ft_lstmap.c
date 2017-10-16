/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 15:04:31 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/16 08:53:38 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		FT_LSTMAP
**		The ft_lstmap function goes through 'lst' and apply the 'f' function
**			to every link of 'lst'. A new fresh list is created with malloc(3),
**			resulting of the iterations.
**		- t_list *new	= The created list resulting of the application
**							of 'f' function.
**		- t_list *list	= Allows us to go trough 'lst'.
*/

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *list;

	if (!lst)
		return (NULL);
	list = f(lst);
	new = list;
	while (lst->next)
	{
		lst = lst->next;
		if (!(list->next = f(lst)))
		{
			free(list->next);
			return (NULL);
		}
		list = list->next;
	}
	return (new);
}
