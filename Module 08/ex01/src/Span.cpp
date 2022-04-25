/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:53:11 by david             #+#    #+#             */
/*   Updated: 2022/04/25 12:05:11 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.h>

Span::Span(unsigned int N)
:_sizeMax(N)
{
	return;
}

Span::Span(unsigned int S, unsigned int E)
:_sizeMax(std::max<unsigned int>(E, S) - std::min<unsigned int>(E, S) + 1)
{
	for (unsigned int it = S; it <= E; it++) {
		addNumber(it);
	}
}

Span::Span(const Span & s) {
	*this = s;
	return;
}

Span::~Span(void) {
	return;
}

Span &Span::operator=(Span const & s) {
	if (this != &s) {
		this->setSize(s._sizeMax);
		for (std::vector<int>::const_iterator it = s._myVar.begin(); it != s._myVar.end(); ++it) {
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
	if (this->_myVar.size() > 1) {
		unsigned int	valMax;
		unsigned int	valMin;
		unsigned int	delta = UINT_MAX;
		for (AUTO it1 = this->_myVar.begin(); it1 != (this->_myVar.end() - 1); it1++) {
			for (AUTO it2 = it1 + 1; it2 != this->_myVar.end(); it2++) {
				valMax = std::max<unsigned int>(*it1, *it2);
				valMin = std::min<unsigned int>(*it1, *it2);
				if ((valMax - valMin) < delta)
					delta = valMax - valMin;
			}
		}
		return (delta);
	} else {
		throw std::exception();
	}
}

unsigned int	Span::longestSpan(void)const {
	if (this->_myVar.size() > 1) {
		unsigned int	minEl = *std::min_element(this->_myVar.begin(), this->_myVar.end());
		unsigned int	maxEl = *std::max_element(this->_myVar.begin(), this->_myVar.end());
		return (maxEl - minEl);
	} else {
		throw std::exception();
	}
}
