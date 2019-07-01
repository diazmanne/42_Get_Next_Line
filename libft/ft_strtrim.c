/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 21:05:58 by emdiaz            #+#    #+#             */
/*   Updated: 2019/03/09 18:48:50 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*r;
	int		l;
	int		t;
	int		x;

	if (!s)
		return (NULL);
	x = -1;
	l = 0;
	t = 0;
	while (ft_isspace(*(s + ++x)))
		l++;
	while (*(s + x++))
		t = ft_isspace(*(s + x - 1)) ? t + 1 : 0;
	r = ft_strnew(ft_strlen(s) - t - l);
	if (!r)
		return (NULL);
	return (ft_strncpy(r, s + l, ft_strlen(s) - t - l));
}
