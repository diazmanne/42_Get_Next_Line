/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 14:07:10 by emdiaz            #+#    #+#             */
/*   Updated: 2019/07/01 17:44:16 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		n_found(const int fd, char **line, char **ss)
{
	char		*tmp;
	int			i;

	i = 0;
	while (ss[fd][i] != '\n' && ss[fd][i] != '\0')
		i++;
	if (ss[fd][i] == '\0')
	{
		*line = ft_strsub(ss[fd], 0, i);
		ft_strdel(&ss[fd]);
	}
	else if (ss[fd][i] == '\n')
	{
		*line = ft_strsub(ss[fd], 0, i);
		tmp = ft_strdup(ss[fd] + i + 1);
		ft_strdel(&ss[fd]);
		ss[fd] = tmp;
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*ss[LIM_MAX];
	char		b[BUFF_SIZE + 1];
	char		*t;
	int			r;

	if (fd >= LIM_MAX || fd < 0 || line == NULL)
		return (-1);
	while ((r = read(fd, b, BUFF_SIZE)) > 0)
	{
		ss[fd] == NULL ? ss[fd] = ft_strnew(1) : 0;
		b[r] = '\0';
		t = ft_strjoin(ss[fd], b);
		ft_strdel(&ss[fd]);
		ss[fd] = t;
		if ((ft_strchr(b, '\n')))
			break ;
	}
	if (r == 0 && (ss[fd] == NULL || *ss[fd] == '\0'))
	{
		ft_strdel(&ss[fd]);
		return (0);
	}
	if (r < 0)
		return (-1);
	return (n_found(fd, line, ss));
}
