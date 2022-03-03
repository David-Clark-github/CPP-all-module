/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:37:20 by dclark            #+#    #+#             */
/*   Updated: 2022/03/03 15:11:58 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"
#include "Animal.h"

Cat::Cat(void) {
	setType("Cat");
	initBrain();
	std::cout << "Default Cat Constructor called" << std::endl;
	return;
}

Cat::Cat(const Cat& c) {
	std::cout << "Copy Cat Constructor called" << std::endl;
	initBrain();
	*this = c;
}

Cat&	Cat::operator=(const Cat& c) {
	std::cout << "Assignement Cat oeprator = called" << std::endl;
	if (this != &c) {
		this->type = c.type;
		this->brain = c.brain;
	}
	return *this;
}

Cat::~Cat(void) {
	std::cout << "Desctructor Cat called" << std::endl;	
	deleteBrain();
	return;
}

void	Cat::makeSound(void)const {
	std::cout << "Miaou!" << std::endl;
	return;
}

void	Cat::initBrain(void) {
	this->brain = new Brain();
	return;
}

void	Cat::deleteBrain(void) {
	delete this->brain;
	return;
}
