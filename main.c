#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(int ac, char **av)
{
	int		fd;
	char	*line;
	int gnl;

	ac = 0;
	fd = open (av[1], O_RDONLY);
	gnl = get_next_line(fd,&line);
	free(line);
	printf("%d", gnl);
	return 0;
}
