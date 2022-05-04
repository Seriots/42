
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000000
# endif 
#include <stdlib.h>
#include <unistd.h>

/*get_next_line.c*/
char    *get_next_line(int fd);
char *ft_get_line(char *prev_read);
char *ft_cut_last_read(char *prev_read);

/*get_next_line_utils.c*/
char *ft_strjoin(char *s1, char *s2);
size_t ft_strlen(const char *s);
char *ft_strchr(const char *s, int c);
#endif
