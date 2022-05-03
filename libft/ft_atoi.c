/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 20:47:19 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/02 20:47:23 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i;
    int minus;
    int result;

    i = 0;
    result = 0;
    minus = 1;
    if (nptr == 0)
        return (0);
    while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
        i ++;
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            minus *= -1;
         i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        result *= 10;
        result += nptr[i] - 48;
        i++;
    }
    return (result * minus);
}