/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:04:29 by dclark            #+#    #+#             */
/*   Updated: 2022/05/03 10:51:22 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main(void) {
	ClapTrap def;
	ClapTrap toto("Toto");
	ClapTrap test(def);

	toto.attack(def.getName());
	def.takeDammage(toto.getAttackD());
	toto.attack(def.getName());
	def.takeDammage(toto.getAttackD());
	toto.attack(def.getName());
	def.takeDammage(toto.getAttackD());
	toto.attack(def.getName());
	def.takeDammage(toto.getAttackD());
	toto.attack(def.getName());
	def.takeDammage(toto.getAttackD());
	toto.attack(def.getName());
	def.takeDammage(toto.getAttackD());
	toto.attack(def.getName());
	def.takeDammage(toto.getAttackD());
	toto.attack(def.getName());
	def.takeDammage(toto.getAttackD());
	toto.attack(def.getName());
	def.takeDammage(toto.getAttackD());
	toto.attack(def.getName());
	def.takeDammage(toto.getAttackD());
	toto.attack(def.getName());
	toto.beRepaired(0);
	return 0;
}	
