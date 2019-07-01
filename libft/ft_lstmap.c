/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 21:11:19 by emdiaz            #+#    #+#             */
/*   Updated: 2019/03/10 23:16:46 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(f)(t_list *elem))
{
	t_list	*h;

	if (lst)
	{
		h = f(lst);
		h->next = ft_lstmap(lst->next, f);
		return (h);
	}
	return (NULL);
}
