#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    char *ptr;

    i = 0;
    while (*(s + i))
    {
        if ((*(s + i) == (char)c))
        {
            ptr = (char *)s + i;
            return (ptr);
        }
        i ++;
    }
    if (*(s + i) == (char)c)
    {
        ptr = (char *)s + i;
        return (ptr);
    }
    return (0);
}