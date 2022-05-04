#include "get_next_line.h"

#include <stdio.h>
#include <string.h>

int ft_checkbuffer(char *buf)
{
    int i;

    i = 0;
    while (buf[i])
    {
        if (buf[i] == '\n')
            return (i + 1);
        i ++;
    }
    return (0);
}

char    *ft_getline(char *buffer, char *prev_read, int position, int buf_empty)
{
    char    *line;
    int     size;

    if (buf_empty != 0)
        size = ft_strlen(buffer) + position + 1;
    else
        size = position + 1;
    line = malloc(sizeof(char) * (size));
    if (!line)
        return (0);
    ft_bzero(line, size);
    if (buf_empty != 0)
    {
        line = ft_strncat(line, buffer, ft_strlen(buffer) + 1);
        free(buffer);
    }
    line = ft_strncat(line, prev_read, position);
    ft_moveread(prev_read, prev_read + position);
    return (line);
}

char    *ft_read_recurse(int fd, char *prev_read, char *buf_tampon, int size)
{
    int position;
    int readed;

    buf_tampon = ft_getline(buf_tampon, prev_read, ft_strlen(prev_read), size);
    readed = read(fd, prev_read, BUFFER_SIZE);
    position = ft_checkbuffer(prev_read);
    if ((readed == 0 && buf_tampon[0] == 0) || readed == -1)    
    {
        free(buf_tampon);
        return (0);
    }
    else if (position != 0 || ft_strlen(prev_read) == 0)
        return (ft_getline(buf_tampon, prev_read, position, 1));
    return (ft_read_recurse(fd, prev_read, buf_tampon, 1));
}

char    *get_next_line(int fd)
{
    static char prev_read[BUFFER_SIZE + 1];
    char        *buf_tampon;
    int         position;

	buf_tampon = malloc(1);
	free(buf_tampon);
    position = ft_checkbuffer(prev_read);
    if (position != 0)
        return (ft_getline(buf_tampon, prev_read, position, 0));
    else
        return (ft_read_recurse(fd, prev_read, buf_tampon, 0));
}

/*#include <fcntl.h>
int main(int argc, char *argv[])
{
    (void)argc;
    int fd = open(argv[1], O_RDONLY);
    char    *line;

    printf("%d\n", BUFFER_SIZE);
    for (int i = 1; i <= 26; i++)
    {
        line = get_next_line(fd);
        printf("line %d = %s\n", i, line);
        free(line);
    }
}*/