/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 19:09:46 by emdiaz            #+#    #+#             */
/*   Updated: 2019/03/10 19:11:22 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*t;
	t_list	*u;

	t = *alst;
	while (t)
	{
		u = t->next;
		del(t->content, t->content_size);
		free(t);
		t = u;
	}
	*alst = NULL;
}
