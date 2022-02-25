/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:53:53 by dclark            #+#    #+#             */
/*   Updated: 2022/02/25 16:13:40 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(void):_Name("default") {
	std::cout << "Default Constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string Name) {
	std::cout << "Constructor called with a name" << std::endl;
	setName(Name);
	return;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &c) {
	if (this != &c) {
		setName(c.getName());
		this->_Hit_points = c._Hit_points;
		this->_Energy_points = c._Energy_points;
		this->_Attack_dammage = c._Attack_dammage;
	}
	return *this;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

void	ClapTrap::attack(const std::string &target) {
	target->takeDammage(this->_Attack_dammage);
}
