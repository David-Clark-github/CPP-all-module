/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:53:50 by dclark            #+#    #+#             */
/*   Updated: 2022/02/02 15:43:13 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(int v)
:_foo(v)
{
	std::cout << "constructeur Sample called" << std::endl;
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

int	Sample::compare(Sample *other)const
{
	if (this->_foo < other->getFoo())
		return -1;
	else if (this->_foo > other->getFoo())
		return 1;
	return 0;
}
