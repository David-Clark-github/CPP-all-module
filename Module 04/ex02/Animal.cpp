/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:23:12 by dclark            #+#    #+#             */
/*   Updated: 2022/03/24 16:37:42 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

A_Animal::A_Animal(void) {
	std::cout << "Default Animal Constructor called" << std::endl;
	return;
}

A_Animal::A_Animal(const A_Animal& a) {
	std::cout << "Copy Animal Constructor called" << std::endl;
	*this = a;
	return;
}

A_Animal&	A_Animal::operator=(const A_Animal& a) {
	std::cout << "Assignement Animal ope = called" << std::endl;
	if (this != &a) {
		this->type = a.type;
	}
	return *this;
}

A_Animal::~A_Animal(void) {
	std::cout << "Destructor Animal called" << std::endl;
	return;
}

void	A_Animal::setType(const std::string type) {
	this->type = type;
	return;
}

std::string	A_Animal::getType(void)const {
	return this->type;
}

void	A_Animal::makeSound(void)const {
	return;
}
