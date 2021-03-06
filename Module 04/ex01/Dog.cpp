/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:37:20 by dclark            #+#    #+#             */
/*   Updated: 2022/03/04 11:34:25 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog(void) {
	setType("Dog");
	std::cout << "Default Dog Constructor called" << std::endl;
	initBrain();
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
		this->brain = d.brain;
	}
	return *this;
}

Dog::~Dog(void) {
	deleteBrain();
	std::cout << "Desctructor Dog called" << std::endl;	
	return;
}

void	Dog::makeSound(void)const {
	std::cout << "Waouf!" << std::endl;
	return;
}

void	Dog::initBrain(void) {
	this->brain = new Brain();
	return;
}

void	Dog::deleteBrain(void) {
	delete this->brain;
	return;
}
