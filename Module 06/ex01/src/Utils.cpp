/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:17:12 by dclark            #+#    #+#             */
/*   Updated: 2022/04/16 17:49:42 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Utils.h>

uintptr_t	serialze(Data1* ptr) {
	return *(uintptr_t)ptr;
}


uintptr_t	serialze(Data2* ptr) {
	
}

Data1* deserialize(uintptr_t raw) {
	return &(Data1)raw;
}

Data2* deserialize(uintptr_t raw) {

}
