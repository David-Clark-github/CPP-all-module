/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:25:46 by dclark            #+#    #+#             */
/*   Updated: 2022/02/15 13:50:09 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	return;
}

Zombie::Zombie(void)
{
	this->_name = "HArgh";
	return;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " destructeur called "<< std::endl;
	return;
}

void	Zombie::announce(void)const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
