/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:10:01 by dclark            #+#    #+#             */
/*   Updated: 2022/04/26 17:48:15 by dclark           ###   ########.fr       */
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

void	Fixed::setFract(void) {
	float	power = 2.0f;
	this->_fraction_part = 0.0f;

	int	index = 32 - 8;
	for (; index < 32; index++) {
		if (_tabBit[index] == 1) {
			std::cout << (1.0f / power) << std::endl;
			setFract2(getFract() + (1.0f / power));
		}
		power *= 2;
	}
}

void	Fixed::setFract2(float value) {
	this->_fraction_part = value;
}

float	Fixed::getFract(void)const {
	return this->_fraction_part;
}

int	Fixed::toInt(void)const {
	return (int)roundf(getRawBits());
}

float	Fixed::toFloat(void)const {
	return (float)getRawBits();
}

void	Fixed::setTabBit(void) {
	int	val = getRawBits();
	int	index_tab = 0;
	for (int i = 31; i >= 0; i--) {
		_tabBit[index_tab] = ((val >> i) & 1);
		index_tab++;
	}
	/*
	for (int i = 0; i < 32; i++) {
		if (i % 8 == 0 && i != 0)
			std::cout << " ";
		std::cout << _tabBit[i];
	}
	std::cout << std::endl;
	*/
}


