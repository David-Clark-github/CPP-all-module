/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:23:12 by dclark            #+#    #+#             */
/*   Updated: 2022/03/02 18:01:06 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"

WrongAnimal::WrongAnimal(void) {
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wa) {
	std::cout << "Copy WrongAnimal Constructor called" << std::endl;
	*this = wa;
	return;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& wa) {
	std::cout << "Assignement WrongAnimal ope = called" << std::endl;
	if (this != &wa) {
		this->type = wa.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "Destructor WrongAnimal called" << std::endl;
	return;
}

void	WrongAnimal::setType(const std::string type) {
	this->type = type;
	return;
}

std::string	WrongAnimal::getType(void)const {
	return this->type;
}

void	WrongAnimal::makeSound(void)const {
	std::cout << "*Terrible sound...*" << std::endl;
	return;
}
