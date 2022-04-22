/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:51:17 by david             #+#    #+#             */
/*   Updated: 2022/04/22 12:15:27 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.h>
#define SIZE 5

int main(void) {
	Array<int> t(SIZE);
	for (unsigned int i = 0; i < SIZE; i++) {
		t[i] = (i * 2);
	}
	Array<int> u = t;
	try {
		t[-1] = 2;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	for (unsigned int i = 0; i < SIZE; i++) {
		std::cout << "t[" << t[i] <<"] u[" << u[i] << "]" <<  std::endl;
	}
	return 0;
}
