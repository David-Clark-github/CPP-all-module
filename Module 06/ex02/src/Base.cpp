/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:49:27 by dclark            #+#    #+#             */
/*   Updated: 2022/04/27 17:03:19 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Base.h>

Base::~Base (void) {
	//std::cout << "destructor called" << std::endl;
	return;
}

Base	*generate(void) {
	srand(time(NULL));
	int	res = rand() % 3;
	A	*a1 = new A;
	B	*b1 = new B;
	C	*c1 = new C;

	switch (res) {
		case 0:
			delete b1;
			delete c1;
			std::cout << "Classe A created: ";
			return a1;
			break;
		case 1:
			delete a1;
			delete c1;
			std::cout << "Classe B created: ";
			return b1;
			break;
		case 2:
			delete a1;
			delete b1;
			std::cout << "Classe C created: ";
			return c1;
			break;
		default:
			return NULL;
			break;
	}
}

void	identify(Base *p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "Class A" << std::endl;
		delete p;
		return;
	}
	if (dynamic_cast<B*>(p)) {
		std::cout << "Class B" << std::endl;
		delete p;
		return;
	}
	if (dynamic_cast<C*>(p)) {
		std::cout << "Class C" << std::endl;
		delete p;
		return;
	}
}

void	identify(Base& p) {
	if (dynamic_cast<A*>(&p)) {
		std::cout << "Reference Class A" << std::endl;
		return;
	}
	if (dynamic_cast<B*>(&p)) {
		std::cout << "Reference Class B" << std::endl;
		return;
	}
	if (dynamic_cast<C*>(&p)) {
		std::cout << "Reference Class C" << std::endl;
		return;
	}
}
