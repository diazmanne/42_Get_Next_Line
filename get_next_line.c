#include "get_next_line.h"
#include <stdio.h>

int		get_next_line(const int fd, char **line)
{
	int r;
	char *ss[MAX_FD];
	char b[BUFF_SIZE + 1];
	char *t;
	char *box;	
	
	if  (!ss[fd])
		ss[fd] = ft_strnew(1);
	while ((r = read(fd,b,BUFF_SIZE)) > 0)
	{
		b[r] = '\0';
		box = ft_strjoin(ss[fd],b);
		ft_strdel(&ss[fd]);
		ss[fd] = box;
		if ((t = ft_strchr(ss[fd],'\n')))
		{
			break;
		}
	}
	if (r == -1)
	{
		return (-1);
	}
	if (r ==  0 && ss[fd] == NULL)
	{
		ft_strdel(&ss[fd]);
		return (0);
	}
	else if (r == 0 && ss[fd] && !(t = ft_strchr(ss[fd],'\n')))
	{
		*line = ft_strdup(ss[fd]);
		ft_strdel(&ss[fd]);
	}
	else
	{
		*t = '\0';
		*line = ft_strdup(ss[fd]);
		t++;
		box = ft_strdup(t);
		ft_strdel(&ss[fd]);
		ss[fd] = box;
	}
	return (1);
}
/*
	int			r;
	char		*b;
	char		*t;
	char static	*ss[MAX_FD];

	b = ft_strnew(100);
	r = read(fd,b,BUFF_SIZE);
	while (r > 0)
	{	
		t = ft_strdup(b);
		printf("%s",t);
			if ((t = ft_strchr(b,'\n')))
			{
				ss[fd] = ft_strdup(t);
				printf("%p\n", &(*t));
				printf("%s\n", ss[fd]);
				*t = '\0';
			}	
			break;
	}
	(void)line;
	
		
	
	int				r;
	char			*n;
	char			*b;
	char			*t;
	static char		*ss[MAX_FD];
	
	r = read(fd,b,BUFF_SIZE);

	if (r < 0 || !line || fd < 0)
		return (-1);
	while (r > 0)
	{
		b = ft_strnew(1);
		b[r] = '\0';
		if (ss[fd] == NULL)
			t = ft_strjoin(ss[fd],b);
		free(ss[fd]);
		ss[fd] = t;
		n = strchr(b, '\n');
		if (n)
			break;
	}

	 	

	(void)line;	
	b = ft_strnew(5);
	r = read(fd,b,5);
	t = ft_strchr(b,'\n');

	
	
	if (r > 0)
		{
			while ()
			{
				printf("[b]%s\n", b);
				printf("Pointer of b is at address: %p\n", &(*b));
				b++;
			}
		}		
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
