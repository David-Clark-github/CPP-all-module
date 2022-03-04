/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:56:22 by david             #+#    #+#             */
/*   Updated: 2022/03/04 11:36:03 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"

Brain::Brain(void) {
	std::cout << "Default Brain Constructor" << std::endl;
	return;
}

Brain::Brain(const Brain& b) {
	std::cout << "Brain Copy Constructor" << std::endl;
	*this = b;
	return;
}

Brain&	Brain::operator=(const Brain& b){
	if (this != &b) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = b.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain(void) {
	std::cout << "Destructor Brain called" << std::endl;
	return;
}
