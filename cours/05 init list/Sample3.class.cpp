/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample3.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:35:17 by david             #+#    #+#             */
/*   Updated: 2022/01/30 15:42:42 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample3.class.h"

Sample3::Sample3(char p1, int p2, float p3)
:a1(p1), a2(p2), a3(p3)
{
	std::cout << "constructeur Sample3 called" << std::endl;
	std::cout << "this->a1: " << this->a1 << std::endl;
	std::cout << "this->a2: " << this->a2 << std::endl;
	std::cout << "this->a3: " << this->a3 << std::endl;
	return;
}

Sample3::~Sample3(void) {
	std::cout << "destructeur Sample3 called" << std::endl;
}
