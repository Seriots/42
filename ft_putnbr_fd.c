#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
        ft_putstr_fd("-2147483648", fd);
    else
    {
        if (n < 0)
        {
            write(fd, "-", 1);
            n = -n;
        }
        if (n >= 9)
            ft_putnbr_fd(n / 10, fd);
        ft_putchar_fd((char)(n % 10 + 48), fd);
    }
}