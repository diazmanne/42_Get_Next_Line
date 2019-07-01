/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 20:31:34 by emdiaz            #+#    #+#             */
/*   Updated: 2019/03/11 00:41:27 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*st;
	size_t	i;

	if (!s)
		return (NULL);
	st = (char *)malloc(sizeof(char) * (len + 1));
	if (!st)
		return (NULL);
	i = 0;
	while (i < len)
	{
		st[i] = s[i + start];
		i++;
	}
	st[i] = '\0';
	return (st);
}
