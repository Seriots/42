#include "libft.h"

size_t    ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t    i;
    size_t    j;

    i = ft_strlen(src);
    j = 0;
    if (i + 1 < size)
    {
        while (j < i + 1)
        {
                dest[j] = src[j];
                j++;
        }
    }
    else if (size > 0)
    {
        while (j < size - 1)
        {
                dest[j] = src[j];
                j++;
        }
        dest[j] = 0;
    }
    return (i);
}