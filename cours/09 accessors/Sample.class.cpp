/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:53:03 by dclark            #+#    #+#             */
/*   Updated: 2022/02/02 14:39:05 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(int a1)
:_foo(a1)
{
	std::cout << "constructeur Sample called" << std::endl;
	//this->setFoo(0);
	std::cout << "this->getFoo(): " << this->getFoo() << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "destructeur Sample called" << std::endl;
	return;
}

int	Sample::getFoo(void)const
{
	return this->_foo;
}

void	Sample::setFoo(int v)
{
	if (v >= 0)
		this->_foo = v;
	return;
}
