/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:23:12 by dclark            #+#    #+#             */
/*   Updated: 2022/03/04 11:50:28 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal(void) {
	std::cout << "Default Animal Constructor called" << std::endl;
	return;
}

Animal::Animal(const Animal& a) {
	std::cout << "Copy Animal Constructor called" << std::endl;
	*this = a;
	return;
}

Animal&	Animal::operator=(const Animal& a) {
	std::cout << "Assignement Animal ope = called" << std::endl;
	if (this != &a) {
		this->type = a.type;
	}
	return *this;
}

Animal::~Animal(void) {
	std::cout << "Destructor Animal called" << std::endl;
	return;
}

void	Animal::setType(const std::string type) {
	this->type = type;
	return;
}

std::string	Animal::getType(void)const {
	return this->type;
}

void	Animal::makeSound(void)const {
	return;
}
