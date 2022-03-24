/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:53:53 by dclark            #+#    #+#             */
/*   Updated: 2022/03/24 12:17:40 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

//Default Constructor
ClapTrap::ClapTrap(void):	_Name("default"),
							_Hit_points(10),
							_Energy_points(10),
							_Attack_dammage(0)
{
	std::cout << "Default ClapTrap Constructor called" << std::endl;
	return;
}

//Name Constructor
ClapTrap::ClapTrap(std::string Name):	_Hit_points(10),
										_Energy_points(10),
										_Attack_dammage(0)
{
	setName(Name);
	std::cout << "Name ClapTrap Constructor called with: " << Name << std::endl;
	return;
}

//Copy Constructor
ClapTrap::ClapTrap(const ClapTrap &c)
{
	*this = c;
	std::cout << "Copy ClapTrap Constructor called" << std::endl;
	return;
}

//Destructor
ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap Destructor " << getName() << " called" << std::endl;
	return;
}

//Operator[=]
ClapTrap &ClapTrap::operator=(const ClapTrap &c) {
	std::cout << "Assignement ClapTrap Operator called" << std::endl;
	if (this != &c) {
		setName(c.getName());
		setHitPoints(c.getHitPoints());
		setEnergy(c.getEnergy());
		setAttackD(c.getAttackD());
	}
	return *this;
}

//Attack fonction with a target
void	ClapTrap::attack(const std::string &target) {
	if (getEnergy() > 0 && getHitPoints() > 0) {
	std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << getAttackD() << " points of damage!" << std::endl;
	setEnergy(getEnergy() - 1);
	} else if (getEnergy() == 0){
		std::cout << "No more Energy to do actions" << std::endl;
	} else if (getHitPoints() == 0){
		std::cout << "No more Hit points to do actions" << std::endl;
	}
	return;
}

//Dammage recieve
void	ClapTrap::takeDammage(unsigned int amount) {
	std::cout << getName() << " has recieve " << amount << " dammage(s) !" << std::endl;
	setHitPoints(getHitPoints() - amount);
	return;
}

//Repair HitPoints by minimalyse Energy
void	ClapTrap::beRepaired(unsigned int amount) {
	if (getEnergy() > 0 && getHitPoints() > 0) {
		std::cout << "ClapTrap " << getName() << " has receive " << amount << "Hit Point(s) back !" << std::endl;
		setHitPoints(getHitPoints() + amount);
		setEnergy(getEnergy() - 1);
	} else if (getHitPoints() == 0) {
		std::cout << "No more Hit points to do actions" << std::endl;
	} else if (getEnergy() == 0) {
		std::cout << "No more Energy to do actions" << std::endl;
	}
	return;
}

//set _Name
void	ClapTrap::setName(std::string name) {
	this->_Name = name;
	return;
}

// get _Name
std::string	ClapTrap::getName(void)const {
	return this->_Name;
}

//set _Hit_points
void	ClapTrap::setHitPoints(int amount) {
	this->_Hit_points = amount;
	return;
}

//get _Hit_points
int	ClapTrap::getHitPoints(void)const {
	return this->_Hit_points;
}

//set _Energy_points
void	ClapTrap::setEnergy(int amount) {
	this->_Energy_points = amount;
	return;
}

//get _Energy_points
int	ClapTrap::getEnergy(void)const {
	return this->_Energy_points;
}

//set _Attack_dammage
void	ClapTrap::setAttackD(unsigned int amount) {
	this->_Attack_dammage = amount;
	return;
}

//get _Attack_dammage
unsigned int	ClapTrap::getAttackD(void)const {
	return this->_Attack_dammage;
}
