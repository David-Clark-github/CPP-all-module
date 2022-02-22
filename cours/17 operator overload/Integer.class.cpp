/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:55:19 by dclark            #+#    #+#             */
/*   Updated: 2022/02/22 13:55:23 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.class.h"
#include <iostream>

Integer::Integer(int const n): _n(n) {
    std::cout << "Constructeur called with value: " << n << std::endl;
    return;
}

Integer::~Integer(void) {
    std::cout << "Destructeur called with value: " << this->_n << std::endl;
    return;
}

int     Integer::getValue(void)const {
    return this->_n;
}

Integer & Integer::operator=(Integer const & rhs) {
    std::cout << "Assignation operator called from " << this->_n;
    std::cout << " to " << rhs.getValue();
    
    return *this;
}

Integer Integer::operator+(Integer const & rhs)const {
    std::cout << "Addition operator called with " << this->_n;
    std::cout << " and " << rhs.getValue() << std::endl;

    return Integer(this->_n + rhs.getValue());
}

std::ostream & operator<<(std::ostream & o, Integer const & rhs) {
    o << rhs.getValue();
    return o;
}
