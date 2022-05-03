/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:23:12 by dclark            #+#    #+#             */
/*   Updated: 2022/05/03 13:10:41 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal(void) {
	setType("Animal");
	std::cout << RED "Default Animal constructor called" NC << std::endl;
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
		this->_type = a._type;
	}
	return *this;
}

Animal::~Animal(void) {
	std::cout << RED "Destructor Animal called" NC << std::endl;
	return;
}

void	Animal::setType(const std::string type) {
	this->_type = type;
	return;
}

std::string	Animal::getType(void)const {
	return this->_type;
}

void	Animal::makeSound(void)const {
	return;
}
