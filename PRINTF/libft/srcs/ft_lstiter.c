/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:44:37 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/13 14:59:07 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		FT_LSTITER
**		The ft_lstiter function goes through lst, applying the 'f' function
**			to every link of lst.
*/

#include "../includes/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}
