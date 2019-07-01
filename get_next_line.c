#include "get_next_line.h"

int                 n_found(char **line, const int fd, int r,\
						char **ss)
{
    char            *t;
    int             i;

    i = 0;
    while (ss[fd][i] != '\0' && ss[fd][i] != '\n')
        i++;
    if (ss[fd][i] == '\n')
    {
        *line = ft_strsub(ss[fd], 0, i);
        t = ft_strdup(ss[fd] + i + 1);
        free(ss[fd]);
        ss[fd] = t;
    }
    else if (ss[fd][i] == '\0')
    {
        if (r == BUFF_SIZE)
            return (get_next_line(fd, line));
        *line = ft_strdup(ss[fd]);
        ft_strdel(&ss[fd]);
    }
    return (1);
}

int                 get_next_line(const int fd, char **line)
{
    static char     *ss[LIM_MAX];
    char            b[BUFF_SIZE + 1];
    char            *t;
	int				r;
	int				i;
	
	i = 0;
    if (line == NULL || fd < 0)
        return (-1);
    while ((r = read(fd, b, BUFF_SIZE)) > 0)
    {
        b[r] = '\0';
        if (ss[fd] == NULL)
            ss[fd] = ft_strnew(1);
        t = ft_strjoin(ss[fd],b);
        free(ss[fd]);
        ss[fd] = t;
        if (ft_strchr(b,'\n'))
            break;
    }
    if ((ss[fd] == NULL || ss[fd][i] == '\0') && r == 0)
        return (0);
	if (r < 0)
		return (-1);
	return (n_found(line,fd,r,ss));
}
