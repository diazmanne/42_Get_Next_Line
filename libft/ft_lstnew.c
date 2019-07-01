/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 18:25:27 by emdiaz            #+#    #+#             */
/*   Updated: 2019/03/10 18:39:52 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *tp;

	if (!(tp = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		tp->content = NULL;
		tp->content_size = 0;
		tp->next = NULL;
		return (tp);
	}
	if (!(tp->content = (void*)malloc(content_size)))
		return (NULL);
	ft_memcpy(tp->content, content, content_size);
	tp->content_size = content_size;
	tp->next = NULL;
	return (tp);
}
