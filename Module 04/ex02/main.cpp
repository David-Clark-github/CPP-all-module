/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:11:51 by dclark            #+#    #+#             */
/*   Updated: 2022/03/04 16:50:39 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Brain.h"
#include "WrongAnimal.h"
#include "WrongCat.h"
#include "Cat.h"
#include "Dog.h"
#include <iostream>
#include <string>

int main()
{
	Animal	*tab[4];
	//Animal	*test = Animal();
	for (int i = 0; i < 4; i++) {
		if (i < (4 / 2)) {
			tab[i] = new Dog();
		} else {
			tab[i] = new Cat();
		}
	}
	for (int i = 0; i < 4; i++) {
		std::cout << "The Animal " << tab[i]->getType() << " do: ";
		tab[i]->makeSound();
	}
	//tab[2]->makeSound();
	for (int i = 0; i < 4; i++) {
		delete tab[i];
	}
	return 0;
}
