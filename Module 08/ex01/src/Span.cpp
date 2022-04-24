/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:53:11 by david             #+#    #+#             */
/*   Updated: 2022/04/24 16:55:44 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.h>

Span::Span(unsigned int N)
:_sizeMax(N)
{
	return;
}

Span::Span(const Span & s) {
	*this = s;
	return;
}

Span::~Span(void) {
	return;
}

Span &Span::operator=(const Span & s) {
	if (this != &s) {
		this->setSize(s._sizeMax);
		for (std::vector<int>::iterator it = s._myVar.begin(); it != s._myVar.end(); ++it) {
			this->_myVar.push_back(*it);
		}
	}
	return *this;
}

void	Span::setSize(const unsigned int size) {
	this->_sizeMax = size;
}

unsigned int	Span::getSize(void) {
	return this->_sizeMax;
}

unsigned int	Span::getSizeVal(void) {
	return this->_myVar.size();
}

void			Span::addNumber(unsigned int n) {
	try {
		if (getSizeVal() >= getSize()) {
			throw std::exception();
		} else {
			this->_myVar.push_back(n);
		}
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

unsigned int	Span::shortestSpan(void)const {
	try {
		if (this->_myVar.size() < 2) {
			throw std::exception();
		} else {
			std::cout << "Something" << std::endl;
		}
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

unsigned int	Span::longestSpan(void)const {
	try {
		if (this->_myVar.size() < 2) {
			throw std::exception();
		} else {
			unsigned int	minEl = *std::min_element(this->_myVar.begin(), this->_myVar.end());
			unsigned int	maxEl = *std::max_element(this->_myVar.begin(), this->_myVar.end());
			return (maxEl - minEl);
		}
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}


