/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:25:46 by dclark            #+#    #+#             */
/*   Updated: 2022/03/18 13:29:15 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(std::string name)
{
	setName(name);
	return;
}

Zombie::~Zombie(void)
{
	std::cout << getName() << " destructeur called "<< std::endl;
	return;
}

void	Zombie::announce(void)const {
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}


void	Zombie::setName(const std::string name) {
	this->_name = name;
}

std::string Zombie::getName(void)const {
	return this->_name;
}
