/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:06:27 by david             #+#    #+#             */
/*   Updated: 2022/01/28 18:13:55 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) {

	std::cout << "Coonstrcuteur called" << std::endl;
	return;

}


Sample::~Sample(void) {

	std::cout << "Destructeur called" << std::endl;
	return;

}

void	Sample::bar(void) {

	std::cout << "Member function bar called\n";
	return;
}
