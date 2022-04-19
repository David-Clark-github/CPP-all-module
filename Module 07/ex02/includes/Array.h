/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:56:01 by david             #+#    #+#             */
/*   Updated: 2022/04/19 20:28:48 by david            ###   ########.fr       */
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
		T	operator[](const size_t index);
	private:
		size_t	_size;
		T	*	_element;
};


