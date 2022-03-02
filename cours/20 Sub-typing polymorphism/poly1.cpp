/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:16:29 by dclark            #+#    #+#             */
/*   Updated: 2022/03/02 11:39:01 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Character {
	public:
		virtual void	sayHello(const std::string &target);
};

class Warrior : public Character {
	public:
		virtual void	sayHello(const std::string &target); // Avec virtual la fcontion est dite dynamique 
															 // et non statique
};

class Cat {
	//[...]
};

void	Character::sayHello(const std::string &target) {
	std::cout << "Hello " << target << " !"  << std::endl;
	return;
}

void	Warrior::sayHello(const std::string &target) {
	std::cout << "Fuck off " << target << ", I don't like you !"  << std::endl;
	return;
}

/*
 * Une Focntion membre virtuel se nome Méthode
 */

int main(void) {
	//This is OK because a Warrior is Warrior
	Warrior		*a = new Warrior();

	//This is OK because a Warrior is a Character
	//A Character can be a Warrior because the class is under him
	Character	*b = new Warrior();

	//This is not OK because a Character is not a Warrior
	//Warrior		*c = Character();
	//Warrior canon be a upper class from Character but the invers is true

	a->sayHello("Student");

	b->sayHello("Student");
	return 0;
}
