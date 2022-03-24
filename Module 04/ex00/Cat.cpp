/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:37:20 by dclark            #+#    #+#             */
/*   Updated: 2022/03/24 13:55:56 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"
#include "Animal.h"

Cat::Cat(void) {
	setType("Cat");
	std::cout << "Default Cat Constructor called" << std::endl;
	return;
}

Cat::Cat(const Cat& c) {
	std::cout << "Copy Cat Constructor called" << std::endl;
	*this = c;
}

Cat&	Cat::operator=(const Cat& c) {
	std::cout << "Assignement Cat oeprator = called" << std::endl;
	if (this != &c) {
		this->type = c.type;
	}
	return *this;
}

Cat::~Cat(void) {
	std::cout << "Desctructor Cat called" << std::endl;	
	return;
}

void	Cat::makeSound(void)const {
	std::cout << "Miaou!" << std::endl;
	return;
}
