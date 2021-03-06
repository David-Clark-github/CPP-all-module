/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:22:27 by dclark            #+#    #+#             */
/*   Updated: 2022/04/17 15:31:40 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <iostream>
#include <typeinfo>
#include <Utils.h>

int main(int ac, char **av) {
	if (ac == 1)
		return 1;
	int res = test_sscanf(av[1]);
	switch (res) {
		case T_C:
			printf("c'est un char\n");
			char_to_other(av[1][0]);
			break;
		case T_CC:
			printf("char non affichable\n");
			break;
		case T_I:
			printf("c'est un int\n");
			int_to_other(atoi(av[1]));
			break;
		case T_F:
			printf("c'est un float\n");
			break;
		case T_D:
			printf("c'est un double\n");
			break;
		case T_ERROR:
			printf("ERROR\n");
			break;
		case OVER:
			printf("overflow, conversion impossible\n");
			break;
		default:
			printf("trop drole !\n");
	}
	return 0;
}
