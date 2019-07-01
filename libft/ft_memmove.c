/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 04:06:18 by emdiaz            #+#    #+#             */
/*   Updated: 2019/03/04 04:38:37 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (s < d)
	{
		while (len-- > 0)
		{
			d[len] = s[len];
		}
	}
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (dst);
}
