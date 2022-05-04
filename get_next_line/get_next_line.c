#include "get_next_line.h"
#include <stdio.h> 

char *ft_cut_last_read(char *prev_read)
{
    int i;
    int j;
    int size;
    char   *next_line;

    i = 0;
    while(prev_read[i] != '\n' && prev_read[i])
        i++;
    if (prev_read[i] == '\n')
        i++;
    if (prev_read[i] == 0)
    {
        free(prev_read);
        return (0);
    }
    size = ft_strlen(prev_read + i);
    next_line = malloc(sizeof(char) * (size + 1));
    if (!next_line)
        return (0);
    next_line[size] = 0;
    j = -1;
    while (++j < size)
        next_line[j] = prev_read[i + j];
    //printf("next = %s, prevread = %s\n", next_line, prev_read);
    free(prev_read);
    return (next_line);
}

char *ft_get_line(char *prev_read)
{
    char    *line;
    int i;
    int plus;

    i = 0;
    plus = 2;
    while(prev_read[i] != '\n' && prev_read[i])
        i++;
    if (prev_read[i] == 0)
        plus -= 1;
    line = malloc(sizeof(char) * (i + plus));
    if (!line)
        return (0);
    line[i + plus - 1] = 0;
    i = -1;
    while (prev_read[++i] != '\n' && prev_read[i])
        line[i] = prev_read[i];
    if (prev_read[i] == '\n')
        line[i] = prev_read[i];
    //printf("linea = %s, prevread = %s\n", line, prev_read);
    return (line);
}

char *ft_read(int fd, char *prev_read)
{
    char    *buf_tampon;
    char    *next_read;
    int     readed;

    buf_tampon = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!buf_tampon)
        return (0);
    readed = 1;
    while (!(ft_strchr(prev_read, '\n')) && readed != 0)
    {
        readed = read(fd, buf_tampon, BUFFER_SIZE);
        if (readed == -1)
        {
            free(buf_tampon);
            return (0);
        }
        buf_tampon[readed] = 0;
        prev_read = ft_strjoin(prev_read, buf_tampon);
    }
    free(buf_tampon);
    return (prev_read);
}

char    *get_next_line(int fd)
{
    static char *prev_read;
    char        *result;

    if (fd < 0|| BUFFER_SIZE < 0)
        return (0);
    prev_read = ft_read(fd, prev_read);
    if (prev_read == 0)
        return (0);
    //printf("prev_read = %s\n", prev_read);
    result = ft_get_line(prev_read);
    if(result[0] == 0)
    {
        free(result);
        return (0);
    }
    prev_read = ft_cut_last_read(prev_read);
    return (result);
}

/*#include <fcntl.h>

int main(int argc, char *argv[])
{
    (void)argc;
    int fd = open(argv[1], O_RDONLY);
    char    *line;


    printf("%d\n", BUFFER_SIZE);
    for (int i = 1; i <= 25; i++)
    {
        line = get_next_line(fd);
        printf("line %d = %s\n", i, line);
        free(line);
    }
}*/