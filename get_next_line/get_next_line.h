
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif
#include <stdlib.h>
#include <unistd.h>

/*get_next_line.c*/
char    *get_next_line(int fd);
char	*ft_read_recurse(int fd, char *prev_read, char *buf_tampon, int size);
char    *ft_getline(char *buffer, char *prev_read, int position, int buf_empty);
int     ft_checkbuffer(char *buf);

/*get_next_line_utils.c*/
size_t  ft_strlen(const char *s);
char	*ft_strncat(char *dest, char *src, int nb);
int     ft_strlcpy(char *dst, const char *src, int size);
void    ft_bzero(void *s, size_t n);
void    ft_moveread(char *dest, const char *src);
#endif
