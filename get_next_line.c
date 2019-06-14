#include "get_next_line.h"
#include <stdio.h>

int     get_next_line(const int fd, char **line)
{		
		*line = ft_strnew(BUFF_SIZE);
		read(fd, *line, BUFF_SIZE);
		return (0);
}
