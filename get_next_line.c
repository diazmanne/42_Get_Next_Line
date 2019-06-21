#include "get_next_line.h"
#include <stdio.h>
int		get_next_line(const int fd, char **line)
{
	int				r;
	char			*t2;
	char			*b;
	char			*t;
	static char		*ss[MAX_FD];	

	b = ft_strnew(BUFF_SIZE);
	r = read(fd,b,BUFF_SIZE);
	printf("[Buf-Len] %d*\n",r);
	printf("[Buffer]%s\n",b);
	ss[fd] = ft_strdup(b);
	printf("[ss]%s\n", ss[fd]);
	ft_strdel(&b);
	printf("[Buffer deleted]%s\n",b);
	t = ft_strchr(ss[fd],'\n');
	*t = '\0';
	t = t + 1;
	printf("[Nl-pos-newpos]%s\n", t);
	t2 = ft_strdup(ss[fd]);
//	printf("[Nl-pos]%s\n", ss[fd]);
	ft_strdel(&ss[fd]);
	ss[fd] = ft_strdup(t);
//	printf("[Whats on SS]:\n%s\n", ss[fd]);
	*line = ft_strdup(t2);
		
	return 0;
}
