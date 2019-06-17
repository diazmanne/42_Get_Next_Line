/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 02:17:44 by emdiaz            #+#    #+#             */
/*   Updated: 2019/06/17 04:05:09 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int     get_next_line(const int fd, char **line)
{
		int	ret_r;
		static char *str[MAX_FD];
		char *tmp;
		char buf[BUFF_SIZE + 1];

		if (fd == -1 || !line || !(str[fd] = !str[fd] ? ft_strnew(1) : str[fd]))
			return (-1);
		while ((ret_r = read(fd,buf,BUFF_SIZE)) > 0 && !(ft_strchr(str[fd], '\n')))
		{
			tmp = str[fd];
			buf[ret_r] = '\0';
			str[fd] = ft_strjoin(tmp,buf);
			free(tmp);
		}	
		 if (ret_r == -1)
			 return (-1);
		*line = (ft_strchr(str[fd], '\n') ? ft_strsub(str[fd], 0, 
					ft_strchr(str[fd], '\n') - str[fd]) : ft_strdup(str[fd]));
		if (ft_strchr((tmp = str[fd]), '\n'))
			str[fd] = ft_strsub(str[fd], ft_strchr(str[fd], '\n') - str[fd] + 1,
							ft_strlen(str[fd]));
		else
			ft_strdel(&str[fd]);
//		free(tmp);
		return (!str[fd] && ft_strlen(*line) == 0 ? 0 : 1);
}
