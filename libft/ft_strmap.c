/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 02:00:29 by emdiaz            #+#    #+#             */
/*   Updated: 2019/03/11 00:38:17 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*map;
	int		i;

	i = 0;
	if (s)
	{
		while (s[i])
			i++;
		if (!(map = (char *)malloc(sizeof(char) * (i + 1))))
			return (NULL);
		i = 0;
		while (s[i])
		{
			map[i] = (*f)(s[i]);
			i++;
		}
		map[i] = '\0';
		return (map);
	}
	return (NULL);
}
