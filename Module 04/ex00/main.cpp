/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:11:51 by dclark            #+#    #+#             */
/*   Updated: 2022/03/24 15:57:40 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "WrongAnimal.h"
#include "WrongCat.h"
#include "Cat.h"
#include "Dog.h"

int main(void) {
	const Animal*		A = new Animal();
	const Animal*		D = new Dog();
	const Animal*		C = new Cat();
	const WrongAnimal*	WA = new WrongCat();
	std::cout << "Animal type A: " << A->getType() << std::endl;
	std::cout << "Animal type D: " << D->getType() << std::endl;
	std::cout << "Animal type C: " << C->getType() << std::endl;
	std::cout << "Animal type WA: " << WA->getType() << std::endl;
	std::cout << "A make: ";
	A->makeSound();
	std::cout << std::endl;
	std::cout << "D make: ";
	D->makeSound();
	std::cout << "C make: ";
	C->makeSound();
	std::cout << "WA make: ";
	WA->makeSound();
	delete WA;
	delete C;
	delete D;
	delete A;
	return 0;
}
