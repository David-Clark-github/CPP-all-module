/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:10:01 by dclark            #+#    #+#             */
/*   Updated: 2022/02/22 13:10:05 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed(void):_binary(0) {
    std::cout << "Default Constructor called" << std::endl;
    return;
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
        this->_binary = f.getRawBits();
    }
    return *this;
}

int    Fixed::getRawBits(void)const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_binary;
}

void    Fixed::setRawBits(const int raw) {
    this->_binary = raw;
    return;
}