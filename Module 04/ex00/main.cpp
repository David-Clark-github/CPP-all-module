/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:11:51 by dclark            #+#    #+#             */
/*   Updated: 2022/03/02 16:54:49 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int main(void) {
	const Animal* A = new Animal();
	const Animal* D = new Dog();
	const Animal* C = new Cat();
	A->makeSound();
	D->makeSound();
	C->makeSound();
	delete C;
	delete D;
	delete A;
	return 0;
}
