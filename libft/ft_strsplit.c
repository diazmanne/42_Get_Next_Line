/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 20:59:43 by emdiaz            #+#    #+#             */
/*   Updated: 2019/03/09 18:04:01 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**r;
	int		i;
	int		x;
	int		l;

	if (!s)
		return (NULL);
	x = ft_count_words(s, 0, c);
	r = (char **)ft_memalloc((x + 1) * sizeof(char *));
	l = 0;
	if (!r)
		return (NULL);
	i = 0;
	l = 0;
	while (*s)
	{
		l = ft_find_word(s, i++, r, c);
		s += l;
	}
	r[x] = 0;
	return (r);
}
