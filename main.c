#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
int main(int argc, char **argv)
{
	char **line;
	int fd;
	int	numero_lineas;
	char jol;
	
	(void)argc;
	numero_lineas = 0;
	fd = open(argv[1], O_RDONLY);

	while (read(fd, &jol,1) > 0)
		if (jol == '\n')
			numero_lineas++;
	line = ft_strnew2ptr(numero_lineas); // Fx() new for the 2ptr arrary
	close(fd);	

	fd = open(argv[1],O_RDONLY);
	
	printf("#%d of lines found in document\n", numero_lineas);
	printf("FD assigned by the system is; %d\n", fd);
    printf("[%s]\n", *line);
	get_next_line(fd, line);
	return 0;
}
