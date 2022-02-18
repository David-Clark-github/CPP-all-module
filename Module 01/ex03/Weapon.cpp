/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:26:47 by dclark            #+#    #+#             */
/*   Updated: 2022/02/18 14:27:24 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"
#include <string>

Weapon::Weapon(void)
{
    return;
}

Weapon::~Weapon(void)
{
    return;
}

std::string Weapon::getType(void)const {
    return this->_type;
}

void        Weapon::setType(std::string type) {
    this->_type = type;
}