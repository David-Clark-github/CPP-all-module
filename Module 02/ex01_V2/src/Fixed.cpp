/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:10:01 by dclark            #+#    #+#             */
/*   Updated: 2022/05/02 17:30:05 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.h>

Fixed::Fixed(void):_value(0) {
    std::cout << "Default Constructor called" << std::endl;
    return;
}

Fixed::Fixed(const int number) {
	std::cout << "Int Constructor called" << std::endl;
	setRawBits(number << this->_binary);
}

Fixed::Fixed(const float number) {
	std::cout << "Float Constructor called" << std::endl;
	setRawBits(roundf(number * (1 << this->_binary)));
}

Fixed::Fixed(const Fixed &f) {
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
    return;
}

Fixed::~Fixed(void) {
    std::cout << "Default destructor called" << std::endl;
}

Fixed   &Fixed::operator=(const Fixed &f) {
    std::cout << "Assignement operator called" << std::endl;
    if (this != &f) {
		this->_value = f.getRawBits();
    }
    return *this;
}

int    Fixed::getRawBits(void)const {
  //  std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void    Fixed::setRawBits(const int raw) {
//	std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
    return;
}

float	Fixed::toFloat(void)const {
	return ((float)this->_value / (1 << this->_binary));
}

int		Fixed::toInt(void)const {
	return getRawBits() >> this->_binary;
}

std::ostream	&operator<<(std::ostream & o, Fixed const & f) {
//	std::cout << "Insertion operator called" << std::endl;
	o << f.toFloat();
	return o;
}
