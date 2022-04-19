/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:37:23 by david             #+#    #+#             */
/*   Updated: 2022/04/19 23:04:04 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.h>

template<typename T>
Array<T>::Array() {
	return;
}

template<typename T>
Array<T>::Array(unsigned int n) {
	T* _element = new T[n];
	return;
}

template<typename T>
Array<T>::Array(Array const & a) {
	*this = a;
	return;
}

template<typename T>
Array<T>& Array<T>::operator=(Array const & a) {
	if (this != a) {
		this->_element = a._element;
		this->setSize(a.getSize());
	}
	return *this;
}

template<typename T>
Array<T>::~Array(void) {
	return;
}

template<typename T>
void	Array<T>::setSize(const size_t size) {
	this->_size = size;
	return;
}

template<typename T>
size_t	Array<T>::getSize(void)const {
	return this->_size;
}


template<typename T>
T	Array<T>::operator[](const size_t index) {
	if (getSize() > 0) {
		try {
			if (index > getSize() - 1) {
				throw std::exception();
			}
		} catch (std::exception& e){
			std::cout << e.what() << std::endl;
			std::cout << "l'index est trop grand." << std::endl;
			return;
		}
		return this->_element[index];
	}
	return 0;
}
