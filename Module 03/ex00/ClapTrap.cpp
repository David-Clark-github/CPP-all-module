/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:53:53 by dclark            #+#    #+#             */
/*   Updated: 2022/02/25 18:12:44 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

//Default Constructor
ClapTrap::ClapTrap(void):_Name("default") {
	std::cout << "Default Constructor called" << std::endl;
	return;
}

//Name Constructor
ClapTrap::ClapTrap(std::string Name) {
	std::cout << "Constructor called with a name" << std::endl;
	setName(Name);
	return;
}

//Copy Constructor
ClapTrap::ClapTrap(const ClapTrap &c) {
	std::cout << "Copy Constructor called" << std:endl;
	*this = c;
	return;
}

//Destructor
ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

//Operator[=]
ClapTrap &ClapTrap::operator=(const ClapTrap &c) {
	if (this != &c) {
		setName(c.getName());
		this->_Hit_points = c._Hit_points;
		this->_Energy_points = c._Energy_points;
		this->_Attack_dammage = c._Attack_dammage;
	}
	return *this;
}

//Attack fonction with a target
void	ClapTrap::attack(const std::string &target) {
	target->takeDammage(this->_Attack_dammage);
}
