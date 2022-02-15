/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:33:13 by dclark            #+#    #+#             */
/*   Updated: 2022/02/15 14:36:02 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include <iostream>

int main() {
	std::cout << "randomChump(\"Foo\") called" << std::endl;
	randomChump("Foo");
	std::cout << "Zombie *Zp = newZombie(\"Faa\") called" << std::endl;
	Zombie	*Zp = newZombie("Faa");
	Zp->announce();
	std::cout << "delete the zombie pionteur Zp" << std::endl;
	delete Zp;
}
