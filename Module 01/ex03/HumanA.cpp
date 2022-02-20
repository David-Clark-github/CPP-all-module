/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:27:10 by dclark            #+#    #+#             */
/*   Updated: 2022/02/20 15:20:24 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"
#include "HumanA.h"
#include <string>
#include <iostream>

HumanA::HumanA(std::string name, Weapon& type)
:_name(name)
{
	setType(type);
	return;
}

HumanA::~HumanA(void)
{
	return;
}

void	HumanA::setName(std::string name) {
	this->_name = name;
}

std::string	HumanA::getName(void)const {
	return this->_name;
}

void	HumanA::setType(Weapon& type) {
	this->_type = &type;
}

std::string HumanA::getType(void)const {
	return this->_type->getType();
}

void	HumanA::attack(void) {
	std::cout << getName() << " attacks with their " << getType() << std::endl;
}
