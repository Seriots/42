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

static char *ft_put_int_min(void)
{
    char    *result;
    result = (char *)malloc(sizeof(char) * 12);
    if(!result)
        return(0);
    result[11] = 0;
    result[0] = '-';
    result[1] = '2';
    result[2] = '1';
    result[3] = '4';
    result[4] = '7';
    result[5] = '4';
    result[6] = '8';
    result[7] = '3';
    result[8] = '6';
    result[9] = '4';
    result[10] = '8';
    return (result);
}

char *ft_itoa(int n)
{
    int minus;
    char *result;
    int count;

    minus = 0;
    count = 0;
    if (n == 0)
    {
        result = malloc(sizeof(char) * (2));
        result[0] = '0';
        result[1] = 0;
        return(result);
    }
    if (n == -2147483648)
        return(ft_put_int_min());
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