/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:37:20 by dclark            #+#    #+#             */
/*   Updated: 2022/03/02 16:49:16 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog(void) {
	Dog::type = "Dog";
	std::cout << "Default Dog Constructor called" << std::endl;
	return;
}

Dog::Dog(const Dog& d) {
	std::cout << "Copy Dog Constructor called" << std::endl;
	*this = d;
}

Dog&	Dog::operator=(const Dog& d) {
	std::cout << "Assignement Dog oeprator = called" << std::endl;
	if (this != &d) {
		this->type = d.type;
	}
	return *this;
}

Dog::~Dog(void) {
	std::cout << "Desctructor Dog called" << std::endl;	
	return;
}

void	Dog::makeSound(void)const {
	std::cout << "Waouf!" << std::endl;
	return;
}
