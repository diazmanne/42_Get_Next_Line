/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <emdiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 13:53:54 by emdiaz            #+#    #+#             */
/*   Updated: 2019/03/06 14:16:46 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	if (!(ptr = malloc(size)))
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}
