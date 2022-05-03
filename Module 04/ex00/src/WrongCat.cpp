/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:37:20 by dclark            #+#    #+#             */
/*   Updated: 2022/03/02 17:59:06 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"
#include "WrongCat.h"

WrongCat::WrongCat(void) {
	setType("WrongCat");
	std::cout << "Default WrongCat Constructor called" << std::endl;
	return;
}

WrongCat::WrongCat(const WrongCat& wc) {
	std::cout << "Copy WrongCat Constructor called" << std::endl;
	*this = wc;
}

WrongCat&	WrongCat::operator=(const WrongCat& wc) {
	std::cout << "Assignement WrongCat oeprator = called" << std::endl;
	if (this != &wc) {
		this->type = wc.type;
	}
	return *this;
}

WrongCat::~WrongCat(void) {
	std::cout << "Desctructor WrongCat called" << std::endl;	
	return;
}

void	WrongCat::makeSound(void)const {
	std::cout << "*WrongMiaou* :(" << std::endl;
	return;
}
