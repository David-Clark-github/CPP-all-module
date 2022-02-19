/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:26:47 by dclark            #+#    #+#             */
/*   Updated: 2022/02/19 16:50:15 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"
#include <string>

Weapon::Weapon(std::string type)
{
	setType(type);
    return;
}

Weapon::~Weapon(void)
{
    return;
}

std::string Weapon::getType(void)const {
    return this->_type;
}

void Weapon::setType(std::string type) {
    this->_type = type;
}
