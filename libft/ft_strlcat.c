/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 01:49:46 by emdiaz            #+#    #+#             */
/*   Updated: 2019/03/04 04:00:17 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;

	l = 0;
	while (dst[l] && l < dstsize)
	{
		l++;
	}
	i = l;
	while (l + 1 < dstsize && src[l - i])
	{
		dst[l] = src[l - i];
		l++;
	}
	if (i < dstsize)
		dst[l] = '\0';
	return (i + ft_strlen(src));
}
