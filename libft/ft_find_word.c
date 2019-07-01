/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 17:47:56 by emdiaz            #+#    #+#             */
/*   Updated: 2019/03/09 18:02:05 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_find_word(const char *str, int i, char **ret, char c)
{
	int		l;
	int		spc;

	spc = 0;
	l = 0;
	while (*str == c)
	{
		str++;
		spc++;
	}
	while (str[l] && str[l] != c)
		l++;
	if (l > 0)
	{
		ret[i] = ft_strnew(l);
		ft_strncpy(ret[i], str, l);
	}
	return (spc + l);
}
