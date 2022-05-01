#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    lenght;
    unsigned int    i;
    char            *result;

    i = -1;
    if (!s || !f)
        return (NULL);
    lenght = ft_strlen(s);
    result = (char *)malloc(sizeof(char) * (lenght + 1));
    if (!result)
        return (NULL);
    result[lenght] = 0;
    while (++i < lenght)
        result[i] = f(i, *(s + i));
    return (result);
}