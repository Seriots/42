#include "libft.h"

static int ft_nb_size(int n, int count)
{
    while (n > 0)
    {
        n = n / 10;
        count ++;
    }
    return (count);
}

static char *ft_switch(int n, char *result, int count)
{
    while (n > 0)
    {
        result[--count] = n % 10 + 48;
        n = n / 10;
    }
    return (result);
}

char *ft_itoa(int n)
{
    int minus;
    char *result;
    int count;

    minus = 0;
    count = 0;
    if (n == -2147483648)
        return("-2147483648");
    if (n < 0)
    {
        minus = 1;
        n *= -1;
    }
    count = ft_nb_size(n, 0) + minus;
    result = (char *)malloc(sizeof(char) * (count + 1));
    if (!result)
        return (0);
    if (minus == 1)
        result[0] = '-';
    result[count] = 0;
    return (ft_switch(n, result, count));
}