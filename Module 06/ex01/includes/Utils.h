/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 14:34:50 by dclark            #+#    #+#             */
/*   Updated: 2022/04/16 17:49:43 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

typedef struct	Data1 {
	uintptr_t raw;
}				t_Data1;

typedef struct	Data2 {
	int raw;
}				t_Data2;

uintptr_t serialize(Data1* ptr);
uintptr_t serialize(Data2* ptr);
Data1* deserialize(uintptr_t raw);
Data2* deserialize(uintptr_t raw);
