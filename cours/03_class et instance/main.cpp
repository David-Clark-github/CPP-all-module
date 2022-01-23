/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:17:03 by david             #+#    #+#             */
/*   Updated: 2022/01/23 19:23:27 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main(void) {

	std::cout << "Avant Sample\n";
	Sample	instance;
	std::cout << "Après l'appel de la class Sample\n";
	std::cout << "Avant l'appel du destructeur\n";

	return 0;
}
