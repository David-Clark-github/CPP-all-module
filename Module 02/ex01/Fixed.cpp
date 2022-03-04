/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:10:01 by dclark            #+#    #+#             */
/*   Updated: 2022/03/04 16:45:48 by dclark           ###   ########.fr       */
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
	setRawBits(value);
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
    return this->_value;
}

void	Fixed::setRawBits(const int raw) {
    Fixed::_value = raw;
    return;
}

int	Fixed::toInt(void)const {
	return (int)roundf(getRawBits());
}

float	Fixed::toFloat(void)const {
	return (float)getRawBits();
}

void	Fixed::setTabBit(void) {
	setValLong(4294967296 / 2);
	int	val = getRawBits();
	for (int index = 0; getValLong() > 0; index++) {
		if (getValLong() <= val) {
			val -= getValLong();
			_tabBit[index] = 1;
		} else {
			_tabBit[index] = 0;
		}
		setValLong(getValLong() / 2);
	}
	for (int i = 0; i < 32; i++) {
		std::cout << _tabBit[i];
	}
	std::cout << std::endl;
}

long long	Fixed::getValLong(void)const {
	return this->_val_long;
}

void	Fixed::setValLong(long long val) {
	this->_val_long = val;
	return;
}


