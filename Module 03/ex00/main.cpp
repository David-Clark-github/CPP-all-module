/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:04:29 by dclark            #+#    #+#             */
/*   Updated: 2022/02/27 18:59:14 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main(void) {
	ClapTrap def;
	ClapTrap toto("Titi");
	ClapTrap test(def);

	def = toto;

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
	//def.takeDammage(toto.getAttackD());
	return 0;
}	
