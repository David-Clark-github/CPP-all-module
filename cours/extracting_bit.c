/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extracting_bit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 21:19:10 by david             #+#    #+#             */
/*   Updated: 2022/04/26 16:22:01 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int tab[32];

void	dump_32bits_integer(int var) {
	printf("dump_32bits_integer: %d\n", var);
	int	var_size = sizeof(var) * 8;
	int	var_bit;
	for (int i = 0; var_size; var_size--) {
		var_bit = ((var & (1 << (var_size - 1) ) ) ? 1 : 0);
		if ((var_size % 8 == 0) && (var_size != sizeof(var) * 8))
			printf(" ");
		printf("%d", var_bit);
	}
	printf("\n");
}

void	test_int(int val) {
	int	s = 0;
	printf("test_int: %d\n", val);
	for (int i = 31; i >= 0; i--) {
		tab[s] = (val >> i) & 1;
		s++;
		//printf("%d", (val >> i) & 1);
	}
	for (int i = 0; i < 32; i++) {
		if (i % 8 == 0 && i != 0)
			printf(" ");
		printf("%d", tab[i]);
	}
	printf("\n");
}

/*
void	dump_64bit_double(double var) {
	double	var_size = sizeof(var) * 8;
	double	var_bit;
	for (int i = 0; var_size; var_size--) {
		var_bit = ((var & ((double)1 << (double)(var_size - 1) ) ) ? (double)1 : (double)0);
		printf("%d", (int)var_bit);
	}
	printf("\n");
}
*/

void	int_to_fixed(int val) {
	
}

int main(int ac, char **av) {
	if (ac == 2) {
		dump_32bits_integer(atoi(av[1]));
		test_int(atoi(av[1]));
	}
	int var2 = 42;
	dump_32bits_integer(var2);
	double d = var2;
	//dump_64bit_double(d);
	return 0;
}
