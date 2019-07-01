/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 23:53:40 by emdiaz            #+#    #+#             */
/*   Updated: 2019/03/10 23:53:45 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	char		*tmp;

	i = 0;
	if (!s || !f)
		return (NULL);
	tmp = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (tmp)
	{
		while (s[i])
		{
			tmp[i] = f(i, s[i]);
			i++;
		}
		tmp[i] = '\0';
		return (tmp);
	}
	return (NULL);
}
