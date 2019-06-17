#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int     get_next_line(const int fd, char **line)
{
		int	ret_r;
		static char *str[MAX_FD];
		char *tmp;
		char buf[BUFF_SIZE + 1];

		if (fd == -1 || !line || !(str[fd] = !str[fd] ? ft_strnew(0) : str[fd]))
			return (-1);
		while ((ret_r = read(fd,buf,BUFF_SIZE)) > 0 && !(ft_strchr(str[fd], '\n')))
		{
			tmp = str[fd];
			buf[ret_r] = '\0';
			str[fd] = ft_strjoin(tmp,buf);
			free(tmp);
		}	
		ret_r == -1 ? return (-1) : 0;
		*line = (ft_strchr(str[fd], '\n') ? ft_strsub(str[fd], 0, ft_strchr(str[fd], '\n') - str[fd]) : ft_strdup(s[fd]);	
		
		return (0);
}
