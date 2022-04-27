#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char *ptr;

    ptr = 0;
    i = 0;
    while (*(s + i))
    {
        if ((*(s + i) == c))
        {
            ptr = (char *)s + i;
        }
        i ++;
    }
    return (ptr);
}