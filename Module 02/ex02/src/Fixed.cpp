/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:10:01 by dclark            #+#    #+#             */
/*   Updated: 2022/05/02 23:01:13 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.h>

Fixed::Fixed(void):_value(0) {
  //  std::cout << "Default Constructor called" << std::endl;
    return;
}

Fixed::Fixed(const int number) {
//	std::cout << "Int Constructor called" << std::endl;
	setRawBits(number << this->_binary);
}

Fixed::Fixed(const float number) {
//	std::cout << "Float Constructor called" << std::endl;
	setRawBits(roundf(number * (1 << this->_binary)));
}

Fixed::Fixed(const Fixed &f) {
    //std::cout << "Copy constructor called" << std::endl;
    *this = f;
    return;
}

Fixed::~Fixed(void) {
  //  std::cout << "Default destructor called" << std::endl;
}

Fixed   &Fixed::operator=(const Fixed &f) {
//    std::cout << "Assignement operator called" << std::endl;
    if (this != &f) {
		this->_value = f.getRawBits();
    }
    return *this;
}


/* ======== Comparaison ======== */
bool	Fixed::operator>(const Fixed & f)const {
	return (this->getRawBits() > f.getRawBits());
}

bool	Fixed::operator<(const Fixed & f)const {
	return (this->getRawBits() < f.getRawBits());
}

bool	Fixed::operator>=(const Fixed & f)const {
	return (this->getRawBits() >= f.getRawBits());
}

bool	Fixed::operator<=(const Fixed & f)const {
	return (this->getRawBits() <= f.getRawBits());
}

bool	Fixed::operator==(const Fixed & f)const {
	return (this->getRawBits() == f.getRawBits());
}

bool	Fixed::operator!=(const Fixed & f)const {
	return (this->getRawBits() != f.getRawBits());
}
int    Fixed::getRawBits(void)const {
    return this->_value;
}

void    Fixed::setRawBits(const int raw) {
    this->_value = raw;
    return;
}


/* ======== Arithmétique ======== */
Fixed	Fixed::operator+(const Fixed &f)const {
	Fixed	tmp;
	tmp._value = (f.getRawBits() + this->getRawBits()) >> this->_binary;
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed &f)const {
	Fixed	tmp;
	tmp._value = (f.getRawBits() - this->getRawBits()) >> this->_binary;
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed &f)const {
	Fixed	tmp;
	tmp._value = (f.getRawBits() * this->getRawBits()) >> this->_binary;
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed &f)const {
	Fixed	tmp;
	tmp._value = (f.getRawBits() / this->getRawBits()) >> this->_binary;
	return (tmp);
}


/* ======== Operateur (Incre / Decre) ========*/
// ++FIXED
Fixed	&Fixed::operator++(void) {
	this->_value++;
	return (*this);
}

// FIXED++
Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);
	this->_value++;
	return (tmp);
}

// --FIXED
Fixed	&Fixed::operator--(void) {
	this->_value--;
	return (*this);
}

// FIXED--
Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);
	this->_value--;
	return (tmp);
}


/* ======== Min / Max Function ======*/
Fixed	&Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return a;
	return b;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return a;
	return b;
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b) {
	if (a < b)
		return a;
	return b;
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b) {
	if (a > b)
		return a;
	return b;
}


/* ======== Return Value ======== */
float	Fixed::toFloat(void)const {
	return ((float)this->_value / (1 << this->_binary));
}

int		Fixed::toInt(void)const {
	return getRawBits() >> this->_binary;
}

std::ostream	&operator<<(std::ostream & o, Fixed const & f) {
	o << f.toFloat();
	return o;
}
