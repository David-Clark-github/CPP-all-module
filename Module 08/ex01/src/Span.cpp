/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:53:11 by david             #+#    #+#             */
/*   Updated: 2022/04/24 15:03:21 by david            ###   ########.fr       */
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

Span &Span::operator=(const Span & s) {
	if (this != &s) {
		this->setSize(s.getSize());
		for (std::vector<int>::iterator it = s.myVar.begin(); it != s.myVar.end(); it++) {
			this->myVar.push_back(*it);
		}
	}
	return *this;
}

Span::~Span(void) {
	return;
}

void	Span::setSize(const unsigned int size) {
	this->_sizeMax = size;
}

unsigned int	Span::getSize(void)const {
	return this->_sizeMax;
}

void			addNumber(unsigned int n) {
	try {
		if (this->myVar.size() >= getSize()) {
			throw std::exception();
		} else {
			this->myVar.push_back(n);
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
			//Something
		}
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

unsigned int	Span::longestSpan(void)const {
	try {
		if (this->myVar.size() < 2) {
			throw std::exception();
		} else {
			unsigned int	minEl = *std::min_element(this->myVar.begin(), this->myVar.end());
			unsigned int	maxEl = *std::max_element(this->myVar.begin(), this->myVar.end());
			return (maxEl - minEl);
		}
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
