/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:56:01 by david             #+#    #+#             */
/*   Updated: 2022/04/22 12:14:57 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>

template<typename T>
class Array {
	public:
		Array();
		Array(unsigned int n);
		Array(Array const & a);
		Array& operator=(Array const & a);
		T &	operator[](const unsigned int index);
		~Array();

		void			setSize(const unsigned int size);
		unsigned int	size(void)const;
		void			setElement(const T e, const unsigned int index);
		T				getElement(const unsigned int index)const;
	private:
		unsigned int	_size;
		T	*	_element;
};

template<typename T>
Array<T>::Array() {
	this->_element = NULL;
	setSize(0);
	return;
}

template<typename T>
Array<T>::Array(unsigned int n) {
	this->_element = new T[n];
	setSize(n);
	return;
}

template<typename T>
Array<T>::Array(Array const & a) {
	*this = a;
	return;
}

template<typename T>
Array<T>& Array<T>::operator=(Array const & a) {
	if (this != &a) {
		this->_element = new T[a.size()];
		this->setSize(a.size());
		for (unsigned int i = 0; i < a.size(); i++)
			this->setElement(a.getElement(i), i);
	}
	return *this;
}

template<typename T>
T &	Array<T>::operator[](const unsigned int index) {
	if (size() > 0 && index > size() - 1) {
		throw std::exception();
	} else {
		return this->_element[index];
	}
}

template<typename T>
Array<T>::~Array(void) {
	delete [] this->_element;
	return;
}

template<typename T>
void	Array<T>::setSize(const unsigned int size) {
	this->_size = size;
	return;
}

template<typename T>
unsigned int	Array<T>::size(void)const {
	return this->_size;
}

template<typename T>
void	Array<T>::setElement(const T e, const unsigned int index) {
	if (size() > 0) {
		this->_element[index] = e;
	}
	return;
}

template<typename T>
T		Array<T>::getElement(const unsigned int index)const {
	return this->_element[index];
}
