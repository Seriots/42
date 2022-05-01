#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  size;
    char    *result;
    int     i;

    i = -1;
    if (!s)
        return (0);
    if (start >= ft_strlen(s))
        return (0);
    size = ft_strlen(s) - start;
    if (size > len)
        size = len;
    result = (char *)malloc(sizeof(char) * (size + 1));
    if (!result)
        return(0);
    result[size] = 0;
    while (++i < size)
        result[i] = *(s + i + start);
    return(result);
}