/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:10:42 by david             #+#    #+#             */
/*   Updated: 2022/01/28 12:03:01 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) {

std::cout << "Constructeur appelé" << std::endl;
return;

}

Sample::~Sample(void) {

std::cout << "Destructeur appelé" << std::endl;
return;

}
