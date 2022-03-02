/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:06:09 by dclark            #+#    #+#             */
/*   Updated: 2022/03/02 12:44:11 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/*                                              -------------------------------- 
	La Class ACharacter est une class abstraite,| ELLE NE PEUT ÊTRE INSTANCIER |!
					                            --------------------------------
*/
class ACharacter {
	public:
		virtual void	attack(const std::string &target) = 0;
		void			sayHello(const std::string &target);
};

class Warrior : public ACharacter {
	public:
		virtual void	attack(const std::string &target);
};

void	ACharacter::sayHello(const std::string &target) {
	std::cout << "Hello " << target << std::endl;
	return;
}

void	Warrior::attack(const std::string &target) {
	std::cout << "*attack " << target << " with a sword*" << std::endl;
	return;
}

int main(void) {
	ACharacter	*a = new Warrior();

	a->sayHello("Student");
	a->attack("roger");
	return 0;
}
