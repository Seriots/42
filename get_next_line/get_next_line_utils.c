#include "get_next_line.h"

size_t ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    while (*(s + i))
        i ++;
    return (i);
}

char *ft_strjoin(char *s1, char *s2)
{
    char    *result; 
    size_t  s1_size;
    size_t  s2_size;   
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (s1 == 0)
        s1_size = 0;
    else
        s1_size = ft_strlen(s1);
    s2_size = ft_strlen(s2);
    result = malloc(sizeof(char) * (s1_size + s2_size + 1));
    if (!result)
        return (0);
    result[s1_size + s2_size] = 0;
    while (s1_size && *(s1 + i))
    {
        result[i] = *(s1 + i);
        i ++;
    }
    while (*(s2 + j))
    {
        result[i + j] = *(s2 + j);
        j ++;
    }
    free(s1);
    return (result);
}

char *ft_strchr(const char *s, int c)
{
    int i;
    char *ptr;

    i = 0;
    if (!s)
        return (0);
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
