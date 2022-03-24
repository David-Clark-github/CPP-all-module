/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:04:29 by dclark            #+#    #+#             */
/*   Updated: 2022/03/24 12:50:40 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"

int main(void) {
	ScavTrap	def;
	ScavTrap	s("Shield");
	ScavTrap	trap(s);

	ScavTrap	test = ScavTrap("test");

	test.guardGate();
	def.guardGate();
	trap.attack(def.getName());
	def.takeDammage(trap.getAttackD());
	trap.attack(def.getName());
	def.takeDammage(trap.getAttackD());
	trap.attack(def.getName());
	def.takeDammage(trap.getAttackD());
	trap.attack(def.getName());
	def.takeDammage(trap.getAttackD());
	trap.attack(def.getName());
	def.takeDammage(trap.getAttackD());
	def.attack("Something");
	def.attack("Something");

	return 0;
}	
