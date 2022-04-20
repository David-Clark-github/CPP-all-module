/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:56:01 by david             #+#    #+#             */
/*   Updated: 2022/04/20 17:30:14 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
class Array {
	public:
		Array();
		Array(unsigned int n);
		Array(Array const & a);
		Array& operator=(Array const & a);
		~Array();

		void	setSize(const size_t size);
		size_t	getSize(void)const;
		T &	operator[](const size_t index);
	private:
		size_t	_size;
		T	*	_element;
};

template<typename T>
Array<T>::Array() {
	return;
}

template<typename T>
Array<T>::Array(unsigned int n) {
	this->_element = new T[n];
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
		for (size_t i = 0; i < a.getSize(); i++)
			this->_element[i] = a._element[i];
		this->setSize(a.getSize());
	}
	return *this;
}

template<typename T>
Array<T>::~Array(void) {
	delete [] this->_element;
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
T &	Array<T>::operator[](const size_t index) {
	try {
		if (index > getSize() - 1) {
			throw std::exception();
		}
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		std::cout << "l'index est invalid" << std::endl;
	}
	return this->_element[index];
}
