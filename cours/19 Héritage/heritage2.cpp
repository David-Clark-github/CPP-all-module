/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage2.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:28:46 by david             #+#    #+#             */
/*   Updated: 2022/02/28 11:12:51 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Animal {
	public:
		Animal();
		Animal(const Animal &);
		Animal &operator=(const Animal &);
		~Animal();

		void	run(int distance);
	private:
		int	_numberOfLegs;
};

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat &);
		Cat &operator=(const Cat &);
		~Cat();

		void	scornSomeone(std::string &target);
};

int main(void) {

	Cat cat;

	cat.run(52);
	return 0;
}
