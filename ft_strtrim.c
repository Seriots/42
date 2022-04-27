#include "libft.h"

static int ft_ischarset(char c, char const *set)
{
    int i;

    i = 0;
    while (*(set + i))
    {
        if (*(set + i) == c)
            return (1);
        i ++;
    }
    return (0);
}


char    *ft_strtrim(char const *s1, char const *set)
{
    unsigned int first;
    unsigned int last;

    first = 0;
    last = ft_strlen(s1);
    if (s1 == NULL || *s1 == 0)
        return (0);
    else if (set == 0 || *set == 0)
        return ((char *)s1);
    while (ft_ischarset(*(s1 + first), set))
        first ++;
    while (ft_ischarset(*(s1 + last - 1), set))
        last --;
    return (ft_substr(s1, first, last - first));
}