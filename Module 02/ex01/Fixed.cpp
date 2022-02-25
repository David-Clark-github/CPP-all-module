/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:10:01 by dclark            #+#    #+#             */
/*   Updated: 2022/02/25 14:44:48 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed(void):_value(0),_fixed_point_val(0) {
    std::cout << "Default Constructor called" << std::endl;
    return;
}

Fixed::Fixed(const Fixed &f):_fixed_point_val(0) {
	std::cout << "Copy constructor called" << std::endl;
    *this = f;
    return;
}

Fixed::Fixed(const int value):_fixed_point_val(0) {
	std::cout << "Float Constructor called" << std::endl;
	setRawBits(value);
	return;
}

Fixed::Fixed(const float value):_fixed_point_val(0) {
	std::cout << "Float Constructor called" << std::endl;
	setRawBits((int)value);
	return;
}

Fixed::~Fixed(void) {
    std::cout << "Default destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &f) {
    std::cout << "Assignement operator called" << std::endl;
    if (this != &f) {
        this->_value = f.getRawBits();
    }
    return *this;
}

int	Fixed::getRawBits(void)const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void	Fixed::setRawBits(const int raw) {
    Fixed::_value = raw;
    return;
}

int	Fixed::toInt(void)const {
	for (int i = 0; i < 8; i++) {
		this->_fixed_point_val += getRawBits() >> i / i;
	}

}

float	Fixed::toFloat(void)const {
	std::cout << "toFloat function called" << std::endl;
	return -42.0f;
}
