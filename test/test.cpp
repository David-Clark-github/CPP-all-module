/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:15:02 by david             #+#    #+#             */
/*   Updated: 2022/04/09 13:52:25 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

using namespace std;

class Aclass1 {
	public:
		Aclass1();
		Aclass1(std::string str);
		virtual	~Aclass1();
		std::string		getName(void)const;
		virtual void	say_Hello(void) = 0;
		virtual void	say_GoodBy(void) = 0;

	private:
		const std::string	_name;
};

Aclass1::Aclass1(void) {
	std::cout << "A_class1 constructor called" << std::endl;
	return;
}

Aclass1::Aclass1(std::string str) 
: _name(str)
{
	std::cout << "A_class1 constructor string called" << std::endl;
	return;
}

Aclass1::~Aclass1(void) {
	std::cout << "A_class1 destructor called" << std::endl;
	return;
}

std::string	Aclass1::getName(void)const {
	return this->_name;
}

class class2 : public Aclass1 {
	public:
		class2();
		virtual	~class2();
		virtual void	say_Hello(void);
		virtual void	say_GoodBy(void);
};

class2::class2(void)
: Aclass1("name") 
{
	std::cout << "class2 constructor called" << std::endl;
	return;
}

class2::~class2(void) {
	std::cout << "class2 destructor called" << std::endl;
	return;
}

void class2::say_GoodBy(void) {
	std::cout << "GoodBy" << std::endl;
	return;
}

void	class2::say_Hello(void) {
	std::cout << "Hello" << std::endl;
}

int main(void) {
	class2 c1;

	std::cout << std::endl;
	c1.say_Hello();
	c1.say_GoodBy();
	std::cout << "c1.getName: [" << c1.getName() << "]" << std::endl;
	std::cout << std::endl;
	return 0;
}
