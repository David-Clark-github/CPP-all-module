/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:22:27 by dclark            #+#    #+#             */
/*   Updated: 2022/04/14 15:47:30 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define	T_CC 4
#define T_C 0
#define T_I 1
#define T_F 2
#define T_D 3
#define	T_ERROR 42

#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <iostream>
#include <typeinfo>

int	only_digit(char *str) {
	int	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i]) {
		if (isdigit(str[i]))
			i++;
		else
			return 0;
	}
	return 1;
}

int	only_float(char *str) {
	int	res = strlen(str);
	if (str[res - 1] == 'f')
		return 1;
	return 0;
}

int test_sscanf(char *str) {
	int		i_buff;
	char	c_buff;
	float	f_buff;
	double	d_buff;
	if (only_digit(str)) {
		if (sscanf(str, "%d", &i_buff)) {
			return (T_I);
		}
	}
	else if (strlen(str) == 1 && isdigit(str[0]) == 0) {
		if (sscanf(str, "%c", &c_buff)) {
			return (T_C);
		}
	}
	else if (only_float(str) && sscanf(str, "%f", &f_buff))
		return (T_F);
	else if (sscanf(str, "%le", &d_buff))
		return (T_D);
	return T_ERROR;
	return 0;
}

int main(int ac, char **av) {
	if (ac == 1)
		return 1;
	int res = test_sscanf(av[1]);
	switch (res) {
		case T_C:
			printf("c'est un char\n");
			break;
		case T_CC:
			printf("char non affichable\n");
			break;
		case T_I:
			printf("c'est un int\n");
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
		default:
			printf("trop drole !\n");
	}
	printf("%le\n", -1.0/0.0);
	return 0;
}
