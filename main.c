#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
	char **line;
	int fd;
	int	numero_lineas;
	char jol;
	

	numero_lineas = 0;
	fd = open("txt.txt", O_RDONLY, 0);

	while (read(fd, &jol,1) > 0)
		if (jol == '\n')
			numero_lineas++;
	line = ft_strnew2ptr(numero_lineas); // Fx() new for the 2ptr arrary
	close(fd);	

	fd = open("txt.txt",O_RDONLY, 0);
	
	get_next_line(fd, line);
		
	printf("#%d of lines found in document\n", numero_lineas);
	printf("FD assigned by the system is; %d\n", fd);
    printf("[%s]\n", *line);
	return 0;
}
