/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:18:24 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/05 14:51:15 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	char	*s;
	//ft_printf("oui", 1);
	//printf("%1 %d", 15, 9);
	printf("c, a = %c\n", 'a');
	printf("s, alphabet = %s\n", "alphabet");
	printf("p, NULL = %p\n", s);
	s = malloc(1);
	printf("p, un pointeur = %pn\n", s);
	printf("d, 42 = %5d\n", 9999999999999999);
	printf("i, 42 = %i\n", -42);
	printf("u, 42 = %u\n", -42);
	printf("X, 42 = %X\n", 975);
	printf("x, 42 = %x\n", -9999);
	printf("%% = %%\n");

	printf("o, 42 = %o\n", 42);
	printf("#o, 42 = %#o\n", 42);
	printf("#o, 42 = %0o\n", 4287488);
	printf("x, 42 = %x\n", 42);
	printf("#x, 42 = %#x\n", 42);
	printf("X, 42 = %X\n", 42);
	printf("#X, 42 = %#X\n", 42);
	printf("0X, 42 = %0X\n", 42);
	printf("#0X, 42 = %#0X\n", 42);
	printf("0d, 42 = %0d\n", 42);
	printf("0i, 42 = %0i\n", 42);
}