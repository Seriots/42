/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 22:50:27 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/03 00:54:28 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *src)
{
        int             i;
        char    *dest;

        dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
        if (!dest)
            return (0);
        dest[ft_strlen(src)] = 0;
        i = 0;
        while (src[i])
        {
                dest[i] = src[i];
                i ++;
        }
        return (dest);
}