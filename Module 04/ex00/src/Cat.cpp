/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:37:20 by dclark            #+#    #+#             */
/*   Updated: 2022/05/03 13:11:48 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"
#include "Animal.h"

Cat::Cat(void) {
	setType("Cat");
	std::cout << GRN "Default Cat Constructor called" NC << std::endl;
	return;
}

Cat::Cat(const Cat& c) {
	std::cout << "Copy Cat Constructor called" << std::endl;
	*this = c;
}

Cat&	Cat::operator=(const Cat& c) {
	std::cout << "Assignement Cat oeprator = called" << std::endl;
	if (this != &c) {
		this->_type = c._type;
	}
	return *this;
}

Cat::~Cat(void) {
	std::cout << GRN "Desctructor Cat called" NC << std::endl;	
	return;
}

void	Cat::makeSound(void)const {
	std::cout << "Miaou!" << std::endl;
	return;
}
