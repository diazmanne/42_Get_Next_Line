#include "get_next_line.h"

int		n_found(const int fd, char **line, char **ss, char *n, int r)
{
	char *tmp;
	int i;
	
	i = 0;
	if (n)
	{
		*line = ft_strsub(ss[fd],0,i);
		tmp = ft_strdup(ss[fd] + i + 1);
		ft_strdel(&ss[fd]);
		ss[fd] = tmp;
	}
	else if (ss[fd][i] == '\0')
	{
		if (r == BUFF_SIZE)
			return (get_next_line(fd,line));
		*line = ft_strdup(ss[fd]);
		free(ss[fd]);
	}
	return(1);
}

int		get_next_line(const int fd, char **line)
{
	static char *ss[MAX_FD];
	char		b[BUFF_SIZE + 1];
	char		*t;
	char		*n;
	int			r;

	if ((read(fd,b,0) < 0) || line == NULL || BUFF_SIZE < 1 || fd < 0)
		return (-1);
	if ((read(fd,b,BUFF_SIZE) == 0) && (ss[fd] == NULL))
		return (0);
	while ((r = read(fd,b,BUFF_SIZE)) > 0)
	{
		b[BUFF_SIZE] = '\0';
		ss[fd] = ft_strnew(1);
		t = ft_strjoin(ss[fd],b);
		ft_strdel(&ss[fd]);
		ss[fd] = t;
		if ((n = ft_strchr(b,'\n')))
			break;
	}
	return(n_found(fd,line,ss,n,r));
}
