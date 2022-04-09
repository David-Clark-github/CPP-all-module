/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extracting_bit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 21:19:10 by david             #+#    #+#             */
/*   Updated: 2022/04/04 21:19:32 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	dump_32bits_integer(int var) {
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

void	dump_64bit_double(double var) {
	double	var_size = sizeof(var) * 8;
	double	var_bit;
	for (int i = 0; var_size; var_size--) {
		var_bit = ((var & ((double)1 << (var_size - (double)1) ) ) ? (double)1 : (double)0);
		printf("%d", (int)var_bit);
	}
	printf("\n");
}

int main(int ac, char **av) {
	if (ac == 2)
	dump_32bits_integer(atoi(av[1]));
	int var2 = 42;
	dump_32bits_integer(var2);
	double d = var2;
	dump_64bit_double(d);
	return 0;
}
