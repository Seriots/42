#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    int i;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;

    i = 0;
    if (n == 0)
        return (0);
    while (*(str1 + i) != 0 && *(str2 + i) != 0 && i < n - 1 && *(str1 + i) == *(str2 + i))
        i++;
    if (*(str1 + i) - *(str2 + i) > 0)
        return (1);
    else if (*(str1 + i) - *(str2 + i) < 0)
        return (-1);
    else
        return (0);
}