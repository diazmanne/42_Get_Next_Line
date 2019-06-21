#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(int ac, char **av)
{
	int		fd;
	char	*line;
	//int l;

	ac = 0;
	fd = open (av[1], O_RDONLY);
	get_next_line(fd, &line);
	printf("[Whats is inside of Line]%s\n", line);
	free(line);
	return 0;
}
