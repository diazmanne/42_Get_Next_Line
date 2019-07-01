/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 03:11:40 by emdiaz            #+#    #+#             */
/*   Updated: 2019/03/06 23:45:53 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	int		l;
	char	*p;

	l = ft_strlen(s) + 1;
	p = (char *)malloc(sizeof(char) * (l));
	if (!(p) * (l))
		return (NULL);
	ft_strcpy(p, s);
	return (p);
}
