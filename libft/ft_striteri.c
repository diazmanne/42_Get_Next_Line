/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 01:34:57 by emdiaz            #+#    #+#             */
/*   Updated: 2019/03/08 01:36:47 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	ind;

	ind = 0;
	if (!s || !f)
		return ;
	{
		while (s[ind])
		{
			(*f)(ind, &s[ind]);
			ind++;
		}
	}
}
