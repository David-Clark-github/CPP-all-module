/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:27:10 by dclark            #+#    #+#             */
/*   Updated: 2022/02/18 14:27:40 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"
#include "Weapon.h"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name) {
    setName(name);
    return;
}

HumanB::~HumanB(void)
{
    return;
}

void    HumanB::attack(void) {
    std::cout << getName() << " attacks with their " << getWeapon() << std::endl;
    return;
}

void    HumanB::setName(std::string name) {
    this->_name = name;
    return;
}

std::string HumanB::getName(void)const {
    return this->_name;
}

void    HumanB::setWeapon(Weapon& type) {

    this->_weapon = &type;
    return;
}

std::string HumanB::getWeapon(void)const {
    return this->_weapon->getType();
}