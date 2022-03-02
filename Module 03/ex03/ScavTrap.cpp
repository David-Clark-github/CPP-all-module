/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:48:33 by dclark            #+#    #+#             */
/*   Updated: 2022/02/28 15:37:43 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

ScavTrap::ScavTrap(void) {
	setName("default");
	std::cout << "Default ScavTrap Constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) {
	setName(name);
	std::cout << "Constructor ScavTrap with: " << name << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &s) {
	*this = s;
	std::cout << "Copy ScavTrap Constructor called" << std::endl;
	return;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &s) {
	std::cout << "Assignement ScavTrap operator called" << std::endl;
	if (this != &s) {
		setName(s.getName());
		setHitPoints(s.getHitPoints());
		setEnergy(s.getEnergy());
		setAttackD(s.getAttackD());
	}
	return *this;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap Desctructor called" << std::endl;
	return;
}

void	ScavTrap::guardGate(void) {
	std::cout << getName() << " has enter into Gate keeper !" << std::endl;
}
