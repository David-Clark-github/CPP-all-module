/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:26:42 by dclark            #+#    #+#             */
/*   Updated: 2022/03/23 13:35:41 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"
#include "HumanB.h"
#include "HumanA.h"

#include <iostream>
#include <string>

int main() {
	Weapon club1 = Weapon("crude spiked club");

	HumanA bob = HumanA("bob", club1);

	bob.attack();
	club1.setType("Sponge bob");
	bob.attack();

	Weapon club2 = Weapon("crude spiked club");

	HumanB jim = HumanB("jim");
	
	jim.setWeapon(club2);
	jim.attack();
	club2.setType("Spoon");
	jim.attack();
}
