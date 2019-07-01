/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 17:58:44 by emdiaz            #+#    #+#             */
/*   Updated: 2019/03/06 23:50:04 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (!*needle && (ft_strlen(haystack) == 0 || ft_strlen(needle) == 0))
		return ((char*)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (i + j < len && haystack[i + j] == needle[j] && needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
