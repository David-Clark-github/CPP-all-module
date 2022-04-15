/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 13:56:16 by dclark            #+#    #+#             */
/*   Updated: 2022/04/15 14:45:36 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

#define	T_CC 4
#define T_C 0
#define T_I 1
#define T_F 2
#define T_D 3
#define OVER 7
#define	T_ERROR 42


#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include <float.h>

int	only_digit(char *str);
int	only_float(char *str);
int	inly_double(char *str);
int	test_sscanf(char *str);

#endif
