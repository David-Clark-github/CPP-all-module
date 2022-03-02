/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:48:33 by dclark            #+#    #+#             */
/*   Updated: 2022/02/28 18:12:55 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"
#include "ClapTrap.h"

FragTrap::FragTrap(void)
{
	setName("default");
	std::cout << "Default FragTrap Constructor called" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name)
{
	setName(name);
	std::cout << "Constructor FragTrap with: " << name << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap &s) {
	*this = s;
	std::cout << "Copy FragTrap Constructor called" << std::endl;
	return;
}

FragTrap &FragTrap::operator=(const FragTrap &s) {
	std::cout << "Assignement FragTrap operator called" << std::endl;
	if (this != &s) {
		setName(s.getName());
		setHitPoints(s.getHitPoints());
		setEnergy(s.getEnergy());
		setAttackD(s.getAttackD());
	}
	return *this;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap Desctructor called" << std::endl;
	return;
}

void	FragTrap::highFivesGuyes(void) {
	std::cout << getName() << " want to give a High Fives !" << std::endl;
}
