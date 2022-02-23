/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:34:17 by dclark            #+#    #+#             */
/*   Updated: 2022/02/23 13:03:59 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.h"

Sample::Sample(void):_foo(0) {
    std::cout << "Default Constructor called" << std::endl;
    return;
}

Sample::Sample(int const n):_foo(n) {
    std::cout << "Parametric Constructor called" << std::endl;
    return;
}

Sample::Sample(Sample const & src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src; /*<== Assignement */
    return;
}

Sample::~Sample(void) {
    std::cout << "Destructor called" << std::endl;
    return;
}

int	Sample::getFoo(void)const {
	return this->_foo;
}

Sample & Sample::operator=(const Sample & rhs) {
	std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
		this->_foo = rhs.getFoo();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Sample const & i) {
	o << "The value of _foo is : " << i.getFoo();
	return o;
}

