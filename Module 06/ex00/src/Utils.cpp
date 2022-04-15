/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 13:53:24 by dclark            #+#    #+#             */
/*   Updated: 2022/04/15 14:53:00 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <iostream>
#include <typeinfo>

#include <Utils.h>

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
	long res;
	sscanf(str, "%ld", &res);
	if (res > INT_MAX || res < INT_MIN)
		return (OVER);
	return 1;
}

int	only_float(char *str) {
	int	i = 0;
	int	point = 0;
	if (strcmp(str, "-inff") == 0 || strcmp(str, "+inff") == 0 || strcmp(str, "nanf") == 0)
		return (1);
	while (str[i]) {
		if (str[i] == '.') {
			point++;
			i++;
		} else if (isdigit(str[i])) {
			i++;
		} else {
			break;
		}
	}
	if (str[i] == 'f' && point == 1)
		return 1;
	double res;
	sscanf(str, "%lf", &res);
	if (res > FLT_MAX || res < FLT_MIN)
		return OVER;
	return 0;
}

int	only_double(char *str) {
	int	i = 0;
	int	point = 0;
	
	if (strcmp(str, "-inf") == 0 || strcmp(str, "+inf") == 0 || strcmp(str, "nan") == 0)
		return 1;
	while (str[i]) {
		if (str[i] == '.') {
			point++;
			i++;
		} else if (isdigit(str[i])){
			i++;
		} else {
			return 0;
		}
	}
	if (point == 1)
		return 1;
	else
		return 0;
}

int test_sscanf(char *str) {
	int		i_buff;
	char	c_buff;
	float	f_buff;
	double	d_buff;
	if (only_digit(str) == T_I) {
		if (sscanf(str, "%d", &i_buff)) {
			return (T_I);
		}
	}
	if (only_digit(str) == OVER) {
		return OVER;
	}
	else if (strlen(str) == 1 && isdigit(str[0]) == 0) {
		if (sscanf(str, "%c", &c_buff)) {
			return (T_C);
		}
	}
	else if (only_float(str) == T_F) {
		if (sscanf(str, "%f", &f_buff)) {
			return (T_F);
		}
	}
	if (only_float(str) == OVER)
		return OVER;
	else if (only_double(str)) {
		if (sscanf(str, "%le", &d_buff)) {
			return (T_D);
		}
	}
	return T_ERROR;
	return 0;
}

