#include "get_next_line.h"
#include <stdio.h>

int		get_next_line(const int fd, char **line)
{
	int				r;
	char			*t2;
	char			*b;
	char			*t;
	static char		*ss[MAX_FD];	
	

	while ()
	
	/*
	 *	//Creo b y utilizo strnew para alocar memoria en mi buf. 
	 *	  b = ft_strnew(BUFF_SIZE);
	 *  / b  = 9 + 1, b = 10
	 * //Almaceno el resultado de read en r. Utilizo un loop para para recorrer encontrar el EOF.
	while ((r = read(fd,b,BUFF_SIZE)) > 0)
	{	//Buscamos NL en b 
		if (!(t = strchr(b,'\n')))
				ss[fd] = ft_strdup(b);
				printf("[Buffer]%s\n", b);
				*line = ft_strdup(b);
				else
					t = '\0';
	}	
	
	
/*
	b = ft_strnew(BUFF_SIZE);
	r = read(fd,b,BUFF_SIZE);
	printf("[Buf-Len] %d*\n",r);
	printf("[Buffer]%s\n",b);
	ss[fd] = ft_strdup(b);
	printf("[SS]%s\n", ss[fd]);
	ft_strdel(&b);
	printf("[buffer deleted]%s\n",b);
//	t = ft_strchr(ss[fd],'\n');
//	printf("[T]%s\n",t);
//	t = '\0';
//	t = t + 1;
//	printf("[Nl-pos-newpos]%s\n", t);
	t2 = ft_strdup(ss[fd]);
	printf("[T2]%s\n", t2);
	ft_strdel(&ss[fd]);
//	ss[fd] = ft_strdup(t);
	printf("[SS deleted]:%s\n", ss[fd]);
	*line = ft_strdup(t2);
*/		
	return 0;
}
