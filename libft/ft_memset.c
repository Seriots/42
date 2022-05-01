#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;

    i = -1;
    while (++i < n)
        *((unsigned char *)s + i) = c;
    return (s);
}


