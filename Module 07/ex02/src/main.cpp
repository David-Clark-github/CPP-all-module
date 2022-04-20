/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:51:17 by david             #+#    #+#             */
/*   Updated: 2022/04/20 17:29:03 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.h>

int main(void) {
	unsigned int	size = 8;
	Array	<int>t(size);
	for (unsigned int i = 0; i < size; i++) {
		t[i] = (i * 2);
	}
	for (unsigned int i = 0; i < size; i++) {
		std::cout << t[i] << std::endl;
	}
	return 0;
}
