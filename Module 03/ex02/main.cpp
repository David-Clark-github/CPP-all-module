/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:04:29 by dclark            #+#    #+#             */
/*   Updated: 2022/02/28 18:11:36 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "FragTrap.h"

int main(void) {
	FragTrap	def;
	FragTrap	s("Shield");
	FragTrap	trap(s);

	FragTrap	test = FragTrap("Test");
	def.attack(s.getName());
	def.takeDammage(s.getAttackD());
	test.highFivesGuyes();

	return 0;
}	
