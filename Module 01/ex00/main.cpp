/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:33:13 by dclark            #+#    #+#             */
/*   Updated: 2022/03/23 13:10:27 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include <iostream>

int main() {
	
	std::cout << "randomChump(\"Foo\")" << std::endl;
	randomChump("Foo");

	std::cout << "\nZombie *Zp = newZombie(\"Faa\")" << std::endl;
	Zombie	*Zp = newZombie("Faa");
	
	Zp->announce();
	std::cout << "\ndelete the zombie pionteur Zp" << std::endl;
	
	delete Zp;
}
